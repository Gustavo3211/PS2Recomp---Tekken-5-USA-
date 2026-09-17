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

// Function: sub_002CF150
// Address: 0x2cf150 - 0x2cf230
void sub_002CF150_0x2cf150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF150_0x2cf150");
#endif

    switch (ctx->pc) {
        case 0x2cf180u: goto label_2cf180;
        case 0x2cf190u: goto label_2cf190;
        case 0x2cf194u: goto label_2cf194;
        case 0x2cf1a8u: goto label_2cf1a8;
        case 0x2cf1bcu: goto label_2cf1bc;
        case 0x2cf1d8u: goto label_2cf1d8;
        case 0x2cf1e4u: goto label_2cf1e4;
        case 0x2cf1ecu: goto label_2cf1ec;
        case 0x2cf220u: goto label_2cf220;
        default: break;
    }

    ctx->pc = 0x2cf150u;

label_2cf150:
    // 0x2cf150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf158: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf15c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cf160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf16c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf170: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CF170u;
    {
        const bool branch_taken_0x2cf170 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF170u;
        // 0x2cf174: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf170) {
            ctx->pc = 0x2CF1ECu;
            goto label_2cf1ec;
        }
    }
    ctx->pc = 0x2CF178u;
    // 0x2cf178: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2CF178u;
    SET_GPR_U32(ctx, 31, 0x2CF180u);
    ctx->pc = 0x2CF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF178u;
    // 0x2cf17c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2CF178u, 0x2CF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF180u;
label_2cf180:
    // 0x2cf180: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cf180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF184u;
    {
        const bool branch_taken_0x2cf184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF184u;
        // 0x2cf188: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf184) {
            ctx->pc = 0x2CF194u;
            goto label_2cf194;
        }
    }
    ctx->pc = 0x2CF18Cu;
    // 0x2cf18c: 0x0  nop
    ctx->pc = 0x2cf18cu;
    // NOP
label_2cf190:
    // 0x2cf190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cf190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cf194:
    // 0x2cf194: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x2cf194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2cf198: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF198u;
    {
        const bool branch_taken_0x2cf198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf198) {
            ctx->pc = 0x2CF1C4u;
            goto label_2cf1c4;
        }
    }
    ctx->pc = 0x2CF1A0u;
    // 0x2cf1a0: 0xc09d486  jal         func_275218
    ctx->pc = 0x2CF1A0u;
    SET_GPR_U32(ctx, 31, 0x2CF1A8u);
    ctx->pc = 0x2CF1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1A0u;
    // 0x2cf1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2CF1A0u, 0x2CF1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1A8u;
label_2cf1a8:
    // 0x2cf1a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1ac: 0x1220fff8  beqz        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CF1ACu;
    {
        const bool branch_taken_0x2cf1ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1ACu;
        // 0x2cf1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf1ac) {
            ctx->pc = 0x2CF190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf190;
        }
    }
    ctx->pc = 0x2CF1B4u;
    // 0x2cf1b4: 0xc09d48e  jal         func_275238
    ctx->pc = 0x2CF1B4u;
    SET_GPR_U32(ctx, 31, 0x2CF1BCu);
    ctx->pc = 0x275238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275238u, 0x2CF1B4u, 0x2CF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1BCu;
label_2cf1bc:
    // 0x2cf1bc: 0x5452fff5  bnel        $v0, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CF1BCu;
    {
        const bool branch_taken_0x2cf1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cf1bc) {
            ctx->pc = 0x2CF1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF1BCu;
            // 0x2cf1c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf194;
        }
    }
    ctx->pc = 0x2CF1C4u;
label_2cf1c4:
    // 0x2cf1c4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF1C4u;
    {
        const bool branch_taken_0x2cf1c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1c4) {
            ctx->pc = 0x2CF1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF1C4u;
            // 0x2cf1c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF1F0u;
            goto label_2cf1f0;
        }
    }
    ctx->pc = 0x2CF1CCu;
    // 0x2cf1cc: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x2cf1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2cf1d0: 0xc0b3d00  jal         func_2CF400
    ctx->pc = 0x2CF1D0u;
    SET_GPR_U32(ctx, 31, 0x2CF1D8u);
    ctx->pc = 0x2CF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1D0u;
    // 0x2cf1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF400u, 0x2CF1D0u, 0x2CF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1D8u;
label_2cf1d8:
    // 0x2cf1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1dc: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2CF1DCu;
    SET_GPR_U32(ctx, 31, 0x2CF1E4u);
    ctx->pc = 0x2CF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1DCu;
    // 0x2cf1e0: 0x8e4508c0  lw          $a1, 0x8C0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2CF1DCu, 0x2CF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1E4u;
label_2cf1e4:
    // 0x2cf1e4: 0xc0bfa9e  jal         func_2FEA78
    ctx->pc = 0x2CF1E4u;
    SET_GPR_U32(ctx, 31, 0x2CF1ECu);
    ctx->pc = 0x2CF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1E4u;
    // 0x2cf1e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA78u, 0x2CF1E4u, 0x2CF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1ECu;
label_2cf1ec:
    // 0x2cf1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf1f0:
    // 0x2cf1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf1f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf1f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf1f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf1fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cf1fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf200: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cf200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf204: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF204u;
        // 0x2cf208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF20Cu;
    // 0x2cf20c: 0x0  nop
    ctx->pc = 0x2cf20cu;
    // NOP
    // 0x2cf210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf218: 0xc0b3c54  jal         func_2CF150
    ctx->pc = 0x2CF218u;
    SET_GPR_U32(ctx, 31, 0x2CF220u);
    ctx->pc = 0x2CF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF218u;
    // 0x2cf21c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF150u;
    goto label_2cf150;
    ctx->pc = 0x2CF220u;
label_2cf220:
    // 0x2cf220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf224: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF224u;
        // 0x2cf228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF22Cu;
    // 0x2cf22c: 0x0  nop
    ctx->pc = 0x2cf22cu;
    // NOP
    ctx->pc = 0x2cf230u;
}
