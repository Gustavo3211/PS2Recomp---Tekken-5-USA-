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

// Function: sub_0035ABB8
// Address: 0x35abb8 - 0x35acb0
void sub_0035ABB8_0x35abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ABB8_0x35abb8");
#endif

    switch (ctx->pc) {
        case 0x35ac04u: goto label_35ac04;
        case 0x35ac1cu: goto label_35ac1c;
        case 0x35ac24u: goto label_35ac24;
        case 0x35ac2cu: goto label_35ac2c;
        case 0x35ac34u: goto label_35ac34;
        case 0x35ac3cu: goto label_35ac3c;
        case 0x35aca0u: goto label_35aca0;
        default: break;
    }

    ctx->pc = 0x35abb8u;

    // 0x35abb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35abbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35abbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35abc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35abc8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x35abc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35abd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35abd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35abd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35abd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35abe0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35abe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abe4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35abe8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x35abe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x35abecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35abf0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x35abf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35abf4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x35abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x35abf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35abfc: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35ABFCu;
    SET_GPR_U32(ctx, 31, 0x35AC04u);
    ctx->pc = 0x35AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ABFCu;
    // 0x35ac00: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35ABFCu, 0x35AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC04u;
label_35ac04:
    // 0x35ac04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x35ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35ac0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35ac10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x35ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x35ac14: 0xc04a48c  jal         func_129230
    ctx->pc = 0x35AC14u;
    SET_GPR_U32(ctx, 31, 0x35AC1Cu);
    ctx->pc = 0x35AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC14u;
    // 0x35ac18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x35AC14u, 0x35AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC1Cu;
label_35ac1c:
    // 0x35ac1c: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AC1Cu;
    SET_GPR_U32(ctx, 31, 0x35AC24u);
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AC1Cu, 0x35AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC24u;
label_35ac24:
    // 0x35ac24: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AC24u;
    SET_GPR_U32(ctx, 31, 0x35AC2Cu);
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AC24u, 0x35AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC2Cu;
label_35ac2c:
    // 0x35ac2c: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AC2Cu;
    SET_GPR_U32(ctx, 31, 0x35AC34u);
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AC2Cu, 0x35AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC34u;
label_35ac34:
    // 0x35ac34: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AC34u;
    SET_GPR_U32(ctx, 31, 0x35AC3Cu);
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AC34u, 0x35AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC3Cu;
label_35ac3c:
    // 0x35ac3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x35ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35ac44: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x35ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
    // 0x35ac48: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x35ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x35ac4c: 0xac930008  sw          $s3, 0x8($a0)
    ctx->pc = 0x35ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 19));
    // 0x35ac50: 0xac94000c  sw          $s4, 0xC($a0)
    ctx->pc = 0x35ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
    // 0x35ac54: 0xac950010  sw          $s5, 0x10($a0)
    ctx->pc = 0x35ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 21));
    // 0x35ac58: 0xac960014  sw          $s6, 0x14($a0)
    ctx->pc = 0x35ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 22));
    // 0x35ac5c: 0xac970018  sw          $s7, 0x18($a0)
    ctx->pc = 0x35ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 23));
    // 0x35ac60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ac60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ac64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ac68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ac68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ac6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ac70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35ac70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ac74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35ac74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ac78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35ac78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ac7c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x35ac7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ac80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35ac80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ac84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC88u;
        // 0x35ac8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC90u;
    // 0x35ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ac94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ac98: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AC98u;
    SET_GPR_U32(ctx, 31, 0x35ACA0u);
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AC98u, 0x35ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACA0u;
label_35aca0:
    // 0x35aca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aca4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35aca8: 0x3e00008  jr          $ra
    ctx->pc = 0x35ACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACA8u;
        // 0x35acac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ACB0u;
}
