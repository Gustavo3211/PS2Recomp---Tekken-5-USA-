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

// Function: sub_003447D0
// Address: 0x3447d0 - 0x3448b0
void sub_003447D0_0x3447d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003447D0_0x3447d0");
#endif

    switch (ctx->pc) {
        case 0x3447f4u: goto label_3447f4;
        case 0x3447f8u: goto label_3447f8;
        case 0x344808u: goto label_344808;
        case 0x344810u: goto label_344810;
        case 0x344838u: goto label_344838;
        case 0x344880u: goto label_344880;
        case 0x344894u: goto label_344894;
        default: break;
    }

    ctx->pc = 0x3447d0u;

    // 0x3447d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3447d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3447d4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3447d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3447d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3447d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447dc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3447dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3447e0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3447e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447e4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3447e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3447e8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3447e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3447ec: 0xc0d12bc  jal         func_344AF0
    ctx->pc = 0x3447ECu;
    SET_GPR_U32(ctx, 31, 0x3447F4u);
    ctx->pc = 0x3447F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447ECu;
    // 0x3447f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344AF0u, 0x3447ECu, 0x3447F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447F4u;
label_3447f4:
    // 0x3447f4: 0x0  nop
    ctx->pc = 0x3447f4u;
    // NOP
label_3447f8:
    // 0x3447f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3447f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3447fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x344800: 0xc0d14dc  jal         func_345370
    ctx->pc = 0x344800u;
    SET_GPR_U32(ctx, 31, 0x344808u);
    ctx->pc = 0x344804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344800u;
    // 0x344804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345370u, 0x344800u, 0x344808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344808u;
label_344808:
    // 0x344808: 0xc0d14ea  jal         func_3453A8
    ctx->pc = 0x344808u;
    SET_GPR_U32(ctx, 31, 0x344810u);
    ctx->pc = 0x34480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344808u;
    // 0x34480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3453A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3453A8u, 0x344808u, 0x344810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344810u;
label_344810:
    // 0x344810: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x344810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x344814: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x344814u;
    {
        const bool branch_taken_0x344814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344814u;
        // 0x344818: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344814) {
            ctx->pc = 0x3447F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3447f8;
        }
    }
    ctx->pc = 0x34481Cu;
    // 0x34481c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x34481cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x344820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344824: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x344824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x344828: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x344828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x34482c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x344830: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x344830u;
    SET_GPR_U32(ctx, 31, 0x344838u);
    ctx->pc = 0x344834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344830u;
    // 0x344834: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x344830u, 0x344838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344838u;
label_344838:
    // 0x344838: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x344838u;
    {
        const bool branch_taken_0x344838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344838u;
        // 0x34483c: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344838) {
            ctx->pc = 0x344898u;
            goto label_344898;
        }
    }
    ctx->pc = 0x344840u;
    // 0x344840: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x344840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x344844: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x344844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x344848: 0x24424978  addiu       $v0, $v0, 0x4978
    ctx->pc = 0x344848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18808));
    // 0x34484c: 0x24634880  addiu       $v1, $v1, 0x4880
    ctx->pc = 0x34484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18560));
    // 0x344850: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x344850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x344854: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x344854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x344858: 0x24c68870  addiu       $a2, $a2, -0x7790
    ctx->pc = 0x344858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936688));
    // 0x34485c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x34485cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x344860: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x344864: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x344864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x344868: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x344868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x34486c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x34486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x344870: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x344870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x344874: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x344874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x344878: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x344878u;
    SET_GPR_U32(ctx, 31, 0x344880u);
    ctx->pc = 0x34487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344878u;
    // 0x34487c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x344878u, 0x344880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344880u;
label_344880:
    // 0x344880: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344880u;
    {
        const bool branch_taken_0x344880 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x344884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344880u;
        // 0x344884: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344880) {
            ctx->pc = 0x344898u;
            goto label_344898;
        }
    }
    ctx->pc = 0x344888u;
    // 0x344888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x344888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34488c: 0xc044138  jal         func_1104E0
    ctx->pc = 0x34488Cu;
    SET_GPR_U32(ctx, 31, 0x344894u);
    ctx->pc = 0x344890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34488Cu;
    // 0x344890: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x34488Cu, 0x344894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344894u;
label_344894:
    // 0x344894: 0xae5000b8  sw          $s0, 0xB8($s2)
    ctx->pc = 0x344894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 16));
label_344898:
    // 0x344898: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x344898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34489c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x34489cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3448a0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3448a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3448a4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3448a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3448a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3448A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448A8u;
        // 0x3448ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448B0u;
}
