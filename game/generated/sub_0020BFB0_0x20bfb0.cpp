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

// Function: sub_0020BFB0
// Address: 0x20bfb0 - 0x20bff8
void sub_0020BFB0_0x20bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BFB0_0x20bfb0");
#endif

    switch (ctx->pc) {
        case 0x20bfd4u: goto label_20bfd4;
        default: break;
    }

    ctx->pc = 0x20bfb0u;

    // 0x20bfb0: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bfb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bfb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bfbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfc0: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x20bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x20bfc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BFC4u;
    {
        const bool branch_taken_0x20bfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFC4u;
        // 0x20bfc8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfc4) {
            ctx->pc = 0x20BFDCu;
            goto label_20bfdc;
        }
    }
    ctx->pc = 0x20BFCCu;
    // 0x20bfcc: 0xc08250a  jal         func_209428
    ctx->pc = 0x20BFCCu;
    SET_GPR_U32(ctx, 31, 0x20BFD4u);
    ctx->pc = 0x209428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209428u, 0x20BFCCu, 0x20BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFD4u;
label_20bfd4:
    // 0x20bfd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BFD4u;
    {
        const bool branch_taken_0x20bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFD4u;
        // 0x20bfd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfd4) {
            ctx->pc = 0x20BFE4u;
            goto label_20bfe4;
        }
    }
    ctx->pc = 0x20BFDCu;
label_20bfdc:
    // 0x20bfdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bfe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20bfe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bfe4:
    // 0x20bfe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bfe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x20BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFECu;
        // 0x20bff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BFF4u;
    // 0x20bff4: 0x0  nop
    ctx->pc = 0x20bff4u;
    // NOP
    ctx->pc = 0x20bff8u;
}
