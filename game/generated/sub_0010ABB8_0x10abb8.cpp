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

// Function: sub_0010ABB8
// Address: 0x10abb8 - 0x10ac48
void sub_0010ABB8_0x10abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ABB8_0x10abb8");
#endif

    switch (ctx->pc) {
        case 0x10abd0u: goto label_10abd0;
        case 0x10abdcu: goto label_10abdc;
        case 0x10abecu: goto label_10abec;
        case 0x10abf8u: goto label_10abf8;
        case 0x10ac04u: goto label_10ac04;
        case 0x10ac14u: goto label_10ac14;
        case 0x10ac24u: goto label_10ac24;
        case 0x10ac30u: goto label_10ac30;
        default: break;
    }

    ctx->pc = 0x10abb8u;

    // 0x10abb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10abbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10abc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10abc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10abc8: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ABC8u;
    SET_GPR_U32(ctx, 31, 0x10ABD0u);
    ctx->pc = 0x10ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABC8u;
    // 0x10abcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ABC8u, 0x10ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABD0u;
label_10abd0:
    // 0x10abd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abd4: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ABD4u;
    SET_GPR_U32(ctx, 31, 0x10ABDCu);
    ctx->pc = 0x10ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABD4u;
    // 0x10abd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ABD4u, 0x10ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABDCu;
label_10abdc:
    // 0x10abdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10ABDCu;
    {
        const bool branch_taken_0x10abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABDCu;
        // 0x10abe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abdc) {
            ctx->pc = 0x10AC08u;
            goto label_10ac08;
        }
    }
    ctx->pc = 0x10ABE4u;
    // 0x10abe4: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ABE4u;
    SET_GPR_U32(ctx, 31, 0x10ABECu);
    ctx->pc = 0x10ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABE4u;
    // 0x10abe8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ABE4u, 0x10ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABECu;
label_10abec:
    // 0x10abec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abf0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ABF0u;
    SET_GPR_U32(ctx, 31, 0x10ABF8u);
    ctx->pc = 0x10ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABF0u;
    // 0x10abf4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ABF0u, 0x10ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABF8u;
label_10abf8:
    // 0x10abf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abfc: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10ABFCu;
    SET_GPR_U32(ctx, 31, 0x10AC04u);
    ctx->pc = 0x10AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABFCu;
    // 0x10ac00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10ABFCu, 0x10AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC04u;
label_10ac04:
    // 0x10ac04: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_10ac08:
    // 0x10ac08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac0c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC0Cu;
    SET_GPR_U32(ctx, 31, 0x10AC14u);
    ctx->pc = 0x10AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC0Cu;
    // 0x10ac10: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC0Cu, 0x10AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC14u;
label_10ac14:
    // 0x10ac14: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x10ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x10ac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac1c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC1Cu;
    SET_GPR_U32(ctx, 31, 0x10AC24u);
    ctx->pc = 0x10AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC1Cu;
    // 0x10ac20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC1Cu, 0x10AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC24u;
label_10ac24:
    // 0x10ac24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac28: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AC28u;
    SET_GPR_U32(ctx, 31, 0x10AC30u);
    ctx->pc = 0x10AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC28u;
    // 0x10ac2c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AC28u, 0x10AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC30u;
label_10ac30:
    // 0x10ac30: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x10ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x10ac34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC3Cu;
        // 0x10ac40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC44u;
    // 0x10ac44: 0x0  nop
    ctx->pc = 0x10ac44u;
    // NOP
    ctx->pc = 0x10ac48u;
}
