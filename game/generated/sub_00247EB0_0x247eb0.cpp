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

// Function: sub_00247EB0
// Address: 0x247eb0 - 0x247ef0
void sub_00247EB0_0x247eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247EB0_0x247eb0");
#endif

    switch (ctx->pc) {
        case 0x247eccu: goto label_247ecc;
        case 0x247edcu: goto label_247edc;
        default: break;
    }

    ctx->pc = 0x247eb0u;

    // 0x247eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247ec0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x247ec4: 0xc091c3c  jal         func_2470F0
    ctx->pc = 0x247EC4u;
    SET_GPR_U32(ctx, 31, 0x247ECCu);
    ctx->pc = 0x247EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EC4u;
    // 0x247ec8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2470F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470F0u, 0x247EC4u, 0x247ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247ECCu;
label_247ecc:
    // 0x247ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ed0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x247ed4: 0xc092990  jal         func_24A640
    ctx->pc = 0x247ED4u;
    SET_GPR_U32(ctx, 31, 0x247EDCu);
    ctx->pc = 0x247ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247ED4u;
    // 0x247ed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A640u, 0x247ED4u, 0x247EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EDCu;
label_247edc:
    // 0x247edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247ee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x247EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EE4u;
        // 0x247ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247EECu;
    // 0x247eec: 0x0  nop
    ctx->pc = 0x247eecu;
    // NOP
    ctx->pc = 0x247ef0u;
}
