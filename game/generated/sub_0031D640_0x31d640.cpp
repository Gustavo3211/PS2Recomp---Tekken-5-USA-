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

// Function: sub_0031D640
// Address: 0x31d640 - 0x31d688
void sub_0031D640_0x31d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D640_0x31d640");
#endif

    switch (ctx->pc) {
        case 0x31d654u: goto label_31d654;
        case 0x31d66cu: goto label_31d66c;
        default: break;
    }

    ctx->pc = 0x31d640u;

    // 0x31d640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31d648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31d64c: 0xc0c75a2  jal         func_31D688
    ctx->pc = 0x31D64Cu;
    SET_GPR_U32(ctx, 31, 0x31D654u);
    ctx->pc = 0x31D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D64Cu;
    // 0x31d650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D688u, 0x31D64Cu, 0x31D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D654u;
label_31d654:
    // 0x31d654: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x31d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x31d658: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31d65c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D65Cu;
    {
        const bool branch_taken_0x31d65c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D65Cu;
        // 0x31d660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d65c) {
            ctx->pc = 0x31D674u;
            goto label_31d674;
        }
    }
    ctx->pc = 0x31D664u;
    // 0x31d664: 0xc043c28  jal         func_10F0A0
    ctx->pc = 0x31D664u;
    SET_GPR_U32(ctx, 31, 0x31D66Cu);
    ctx->pc = 0x10F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0A0u, 0x31D664u, 0x31D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D66Cu;
label_31d66c:
    // 0x31d66c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d670: 0xae030248  sw          $v1, 0x248($s0)
    ctx->pc = 0x31d670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 3));
label_31d674:
    // 0x31d674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d678: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31d678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31d67c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D67Cu;
        // 0x31d680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D684u;
    // 0x31d684: 0x0  nop
    ctx->pc = 0x31d684u;
    // NOP
    ctx->pc = 0x31d688u;
}
