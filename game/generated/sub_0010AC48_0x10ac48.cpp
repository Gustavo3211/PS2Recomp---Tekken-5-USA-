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

// Function: sub_0010AC48
// Address: 0x10ac48 - 0x10ace0
void sub_0010AC48_0x10ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AC48_0x10ac48");
#endif

    switch (ctx->pc) {
        case 0x10ac60u: goto label_10ac60;
        case 0x10ac6cu: goto label_10ac6c;
        case 0x10ac78u: goto label_10ac78;
        case 0x10ac84u: goto label_10ac84;
        case 0x10ac90u: goto label_10ac90;
        case 0x10ac9cu: goto label_10ac9c;
        case 0x10aca8u: goto label_10aca8;
        case 0x10acb4u: goto label_10acb4;
        case 0x10acc0u: goto label_10acc0;
        case 0x10acccu: goto label_10accc;
        default: break;
    }

    ctx->pc = 0x10ac48u;

    // 0x10ac48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ac4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ac54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ac58: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC58u;
    SET_GPR_U32(ctx, 31, 0x10AC60u);
    ctx->pc = 0x10AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC58u;
    // 0x10ac5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC58u, 0x10AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC60u;
label_10ac60:
    // 0x10ac60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac64: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC64u;
    SET_GPR_U32(ctx, 31, 0x10AC6Cu);
    ctx->pc = 0x10AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC64u;
    // 0x10ac68: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC64u, 0x10AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC6Cu;
label_10ac6c:
    // 0x10ac6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac70: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC70u;
    SET_GPR_U32(ctx, 31, 0x10AC78u);
    ctx->pc = 0x10AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC70u;
    // 0x10ac74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC70u, 0x10AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC78u;
label_10ac78:
    // 0x10ac78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac7c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC7Cu;
    SET_GPR_U32(ctx, 31, 0x10AC84u);
    ctx->pc = 0x10AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC7Cu;
    // 0x10ac80: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC7Cu, 0x10AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC84u;
label_10ac84:
    // 0x10ac84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac88: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC88u;
    SET_GPR_U32(ctx, 31, 0x10AC90u);
    ctx->pc = 0x10AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC88u;
    // 0x10ac8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC88u, 0x10AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC90u;
label_10ac90:
    // 0x10ac90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac94: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC94u;
    SET_GPR_U32(ctx, 31, 0x10AC9Cu);
    ctx->pc = 0x10AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC94u;
    // 0x10ac98: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC94u, 0x10AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC9Cu;
label_10ac9c:
    // 0x10ac9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aca0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ACA0u;
    SET_GPR_U32(ctx, 31, 0x10ACA8u);
    ctx->pc = 0x10ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACA0u;
    // 0x10aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ACA0u, 0x10ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACA8u;
label_10aca8:
    // 0x10aca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acac: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ACACu;
    SET_GPR_U32(ctx, 31, 0x10ACB4u);
    ctx->pc = 0x10ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACACu;
    // 0x10acb0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ACACu, 0x10ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACB4u;
label_10acb4:
    // 0x10acb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acb8: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ACB8u;
    SET_GPR_U32(ctx, 31, 0x10ACC0u);
    ctx->pc = 0x10ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACB8u;
    // 0x10acbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ACB8u, 0x10ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACC0u;
label_10acc0:
    // 0x10acc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acc4: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ACC4u;
    SET_GPR_U32(ctx, 31, 0x10ACCCu);
    ctx->pc = 0x10ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACC4u;
    // 0x10acc8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ACC4u, 0x10ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACCCu;
label_10accc:
    // 0x10accc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10acccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10acd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10acd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD4u;
        // 0x10acd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ACDCu;
    // 0x10acdc: 0x0  nop
    ctx->pc = 0x10acdcu;
    // NOP
    ctx->pc = 0x10ace0u;
}
