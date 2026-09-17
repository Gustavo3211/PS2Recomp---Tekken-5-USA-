#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EE410
// Address: 0x2ee410 - 0x2ee450
void sub_002EE410_0x2ee410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE410_0x2ee410");
#endif

    switch (ctx->pc) {
        case 0x2ee438u: goto label_2ee438;
        default: break;
    }

    ctx->pc = 0x2ee410u;

    // 0x2ee410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee414: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee420: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ee420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee428: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE428u;
    {
        const bool branch_taken_0x2ee428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE428u;
        // 0x2ee42c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee428) {
            ctx->pc = 0x2EE440u;
            goto label_2ee440;
        }
    }
    ctx->pc = 0x2EE430u;
    // 0x2ee430: 0xc0bb89e  jal         func_2EE278
    ctx->pc = 0x2EE430u;
    SET_GPR_U32(ctx, 31, 0x2EE438u);
    ctx->pc = 0x2EE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE278u, 0x2EE430u, 0x2EE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE438u;
label_2ee438:
    // 0x2ee438: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ee43c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ee440:
    // 0x2ee440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ee444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee448: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE448u;
        // 0x2ee44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE450u;
}
