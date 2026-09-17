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

// Function: sub_00343EC8
// Address: 0x343ec8 - 0x343f10
void sub_00343EC8_0x343ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343EC8_0x343ec8");
#endif

    switch (ctx->pc) {
        case 0x343ef0u: goto label_343ef0;
        default: break;
    }

    ctx->pc = 0x343ec8u;

    // 0x343ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ed4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x343ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x343ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x343ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343edc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x343edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x343ee0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343EE0u;
    {
        const bool branch_taken_0x343ee0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x343EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EE0u;
        // 0x343ee4: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ee0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343EE8u;
    // 0x343ee8: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x343EE8u;
    SET_GPR_U32(ctx, 31, 0x343EF0u);
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x343EE8u, 0x343EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343EF0u;
label_343ef0:
    // 0x343ef0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x343ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x343ef4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x343ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x343ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x343efc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x343efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_343f00:
    // 0x343f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343f04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x343f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343f08: 0x3e00008  jr          $ra
    ctx->pc = 0x343F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F08u;
        // 0x343f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343F10u;
}
