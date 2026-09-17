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

// Function: sub_0022EAC0
// Address: 0x22eac0 - 0x22eb10
void sub_0022EAC0_0x22eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EAC0_0x22eac0");
#endif

    switch (ctx->pc) {
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eafcu: goto label_22eafc;
        default: break;
    }

    ctx->pc = 0x22eac0u;

    // 0x22eac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22eac4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x22eac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22eacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ead0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ead4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ead8: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x22ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x22eadc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22eadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eae0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x22eae4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22eae8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x22eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22eaec: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x22EAECu;
    SET_GPR_U32(ctx, 31, 0x22EAF4u);
    ctx->pc = 0x22EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAECu;
    // 0x22eaf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x22EAECu, 0x22EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAF4u;
label_22eaf4:
    // 0x22eaf4: 0xc08ba9a  jal         func_22EA68
    ctx->pc = 0x22EAF4u;
    SET_GPR_U32(ctx, 31, 0x22EAFCu);
    ctx->pc = 0x22EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAF4u;
    // 0x22eaf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA68u, 0x22EAF4u, 0x22EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAFCu;
label_22eafc:
    // 0x22eafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eb00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22eb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22eb04: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB04u;
        // 0x22eb08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EB0Cu;
    // 0x22eb0c: 0x0  nop
    ctx->pc = 0x22eb0cu;
    // NOP
    ctx->pc = 0x22eb10u;
}
