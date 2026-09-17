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

// Function: sub_0035B2E0
// Address: 0x35b2e0 - 0x35b398
void sub_0035B2E0_0x35b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B2E0_0x35b2e0");
#endif

    switch (ctx->pc) {
        case 0x35b300u: goto label_35b300;
        case 0x35b308u: goto label_35b308;
        case 0x35b328u: goto label_35b328;
        case 0x35b35cu: goto label_35b35c;
        case 0x35b370u: goto label_35b370;
        default: break;
    }

    ctx->pc = 0x35b2e0u;

    // 0x35b2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b2e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b2e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35b2ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35b2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35b2f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35b2f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x35b2f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b2fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x35b2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b300:
    // 0x35b300: 0xc0d6d26  jal         func_35B498
    ctx->pc = 0x35B300u;
    SET_GPR_U32(ctx, 31, 0x35B308u);
    ctx->pc = 0x35B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B498u, 0x35B300u, 0x35B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B308u;
label_35b308:
    // 0x35b308: 0x1450fffd  bne         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x35B308u;
    {
        const bool branch_taken_0x35b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x35B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B308u;
        // 0x35b30c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b308) {
            ctx->pc = 0x35B300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b300;
        }
    }
    ctx->pc = 0x35B310u;
    // 0x35b310: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x35b310u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x35b314: 0x24511350  addiu       $s1, $v0, 0x1350
    ctx->pc = 0x35b314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x35b318: 0x2630ffd0  addiu       $s0, $s1, -0x30
    ctx->pc = 0x35b318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x35b31c: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x35b31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x35b320: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x35b320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x35b324: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_35b328:
    // 0x35b328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b32c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35b32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b338: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x35b338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x35b33c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x35b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35b340: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35b344: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x35b344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b348: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x35b348u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35b34c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x35b34cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b350: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35b350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b354: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x35B354u;
    SET_GPR_U32(ctx, 31, 0x35B35Cu);
    ctx->pc = 0x35B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B354u;
    // 0x35b358: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x35B354u, 0x35B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B35Cu;
label_35b35c:
    // 0x35b35c: 0x26845338  addiu       $a0, $s4, 0x5338
    ctx->pc = 0x35b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21304));
    // 0x35b360: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B360u;
    {
        const bool branch_taken_0x35b360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x35B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B360u;
        // 0x35b364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b360) {
            ctx->pc = 0x35B378u;
            goto label_35b378;
        }
    }
    ctx->pc = 0x35B368u;
    // 0x35b368: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B368u;
    SET_GPR_U32(ctx, 31, 0x35B370u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B368u, 0x35B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B370u;
label_35b370:
    // 0x35b370: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x35B370u;
    {
        const bool branch_taken_0x35b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B370u;
        // 0x35b374: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b370) {
            ctx->pc = 0x35B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b328;
        }
    }
    ctx->pc = 0x35B378u;
label_35b378:
    // 0x35b378: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b37c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b380: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35b380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b384: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35b384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b388: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35b388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b38c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35b38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b390: 0x3e00008  jr          $ra
    ctx->pc = 0x35B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B390u;
        // 0x35b394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B398u;
}
