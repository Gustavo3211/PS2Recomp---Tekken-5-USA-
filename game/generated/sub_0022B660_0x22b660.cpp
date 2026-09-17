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

// Function: sub_0022B660
// Address: 0x22b660 - 0x22b708
void sub_0022B660_0x22b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B660_0x22b660");
#endif

    switch (ctx->pc) {
        case 0x22b688u: goto label_22b688;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6e4u: goto label_22b6e4;
        default: break;
    }

    ctx->pc = 0x22b660u;

    // 0x22b660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b66c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22b670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22b670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22b67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b680: 0xc0895e8  jal         func_2257A0
    ctx->pc = 0x22B680u;
    SET_GPR_U32(ctx, 31, 0x22B688u);
    ctx->pc = 0x22B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B680u;
    // 0x22b684: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257A0u, 0x22B680u, 0x22B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B688u;
label_22b688:
    // 0x22b688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b68c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B68Cu;
    {
        const bool branch_taken_0x22b68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b68c) {
            ctx->pc = 0x22B690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B68Cu;
            // 0x22b690: 0x86300002  lh          $s0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B6A0u;
            goto label_22b6a0;
        }
    }
    ctx->pc = 0x22B694u;
    // 0x22b694: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22B694u;
    {
        const bool branch_taken_0x22b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B694u;
        // 0x22b698: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b694) {
            ctx->pc = 0x22B6E8u;
            goto label_22b6e8;
        }
    }
    ctx->pc = 0x22B69Cu;
    // 0x22b69c: 0x0  nop
    ctx->pc = 0x22b69cu;
    // NOP
label_22b6a0:
    // 0x22b6a0: 0xc0895da  jal         func_225768
    ctx->pc = 0x22B6A0u;
    SET_GPR_U32(ctx, 31, 0x22B6A8u);
    ctx->pc = 0x22B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6A0u;
    // 0x22b6a4: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225768u, 0x22B6A0u, 0x22B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6A8u;
label_22b6a8:
    // 0x22b6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6ac: 0xc0895e8  jal         func_2257A0
    ctx->pc = 0x22B6ACu;
    SET_GPR_U32(ctx, 31, 0x22B6B4u);
    ctx->pc = 0x22B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6ACu;
    // 0x22b6b0: 0x8c520030  lw          $s2, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257A0u, 0x22B6ACu, 0x22B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B4u;
label_22b6b4:
    // 0x22b6b4: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x22b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x22b6b8: 0xc097d16  jal         func_25F458
    ctx->pc = 0x22B6B8u;
    SET_GPR_U32(ctx, 31, 0x22B6C0u);
    ctx->pc = 0x22B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6B8u;
    // 0x22b6bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x22B6B8u, 0x22B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6C0u;
label_22b6c0:
    // 0x22b6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6c8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B6C8u;
    {
        const bool branch_taken_0x22b6c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6C8u;
        // 0x22b6cc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6c8) {
            ctx->pc = 0x22B6E8u;
            goto label_22b6e8;
        }
    }
    ctx->pc = 0x22B6D0u;
    // 0x22b6d0: 0xc0895e8  jal         func_2257A0
    ctx->pc = 0x22B6D0u;
    SET_GPR_U32(ctx, 31, 0x22B6D8u);
    ctx->pc = 0x2257A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257A0u, 0x22B6D0u, 0x22B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6D8u;
label_22b6d8:
    // 0x22b6d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6dc: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x22B6DCu;
    SET_GPR_U32(ctx, 31, 0x22B6E4u);
    ctx->pc = 0x22B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6DCu;
    // 0x22b6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x22B6DCu, 0x22B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6E4u;
label_22b6e4:
    // 0x22b6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b6e8:
    // 0x22b6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b6ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22b6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22b6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b6f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22b6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22b6fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b700: 0x3e00008  jr          $ra
    ctx->pc = 0x22B700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B700u;
        // 0x22b704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B708u;
}
