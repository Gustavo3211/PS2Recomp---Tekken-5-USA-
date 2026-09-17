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

// Function: sub_002B33C8
// Address: 0x2b33c8 - 0x2b3528
void sub_002B33C8_0x2b33c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B33C8_0x2b33c8");
#endif

    switch (ctx->pc) {
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b34f4u: goto label_2b34f4;
        case 0x2b3508u: goto label_2b3508;
        default: break;
    }

    ctx->pc = 0x2b33c8u;

    // 0x2b33c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b33c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b33cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b33ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b33d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b33d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b33d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b33dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b33e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b33e4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b33e8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2b33ec: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x2b33ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b33f0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b33f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b33f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B33F4u;
    {
        const bool branch_taken_0x2b33f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33F4u;
        // 0x2b33f8: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33f4) {
            ctx->pc = 0x2B3490u;
            goto label_2b3490;
        }
    }
    ctx->pc = 0x2B33FCu;
    // 0x2b33fc: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B33FCu;
    SET_GPR_U32(ctx, 31, 0x2B3404u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B33FCu, 0x2B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3404u;
label_2b3404:
    // 0x2b3404: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3404u;
    {
        const bool branch_taken_0x2b3404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3404u;
        // 0x2b3408: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3404) {
            ctx->pc = 0x2B3440u;
            goto label_2b3440;
        }
    }
    ctx->pc = 0x2B340Cu;
    // 0x2b340c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B340Cu;
    SET_GPR_U32(ctx, 31, 0x2B3414u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B340Cu, 0x2B3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3414u;
label_2b3414:
    // 0x2b3414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b3414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3418: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b3418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b341c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2b341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2b3420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3424: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b3424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b342c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b342cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3430: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b3430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3438: 0x80a9f10  j           func_2A7C40
    ctx->pc = 0x2B3438u;
    ctx->pc = 0x2B343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3438u;
    // 0x2b343c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C40u;
    sub_002A7C40_0x2a7c40(rdram, ctx, runtime); return;
    ctx->pc = 0x2B3440u;
label_2b3440:
    // 0x2b3440: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B3440u;
    SET_GPR_U32(ctx, 31, 0x2B3448u);
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B3440u, 0x2B3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3448u;
label_2b3448:
    // 0x2b3448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b344c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2b344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2b3450: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b3450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3454: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2b3454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b3458: 0xc0aa096  jal         func_2A8258
    ctx->pc = 0x2B3458u;
    SET_GPR_U32(ctx, 31, 0x2B3460u);
    ctx->pc = 0x2B345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3458u;
    // 0x2b345c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8258u, 0x2B3458u, 0x2B3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3460u;
label_2b3460:
    // 0x2b3460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b3464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b3468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b346c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b346cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3478: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b3478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b347c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b347cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3484: 0x80a9f46  j           func_2A7D18
    ctx->pc = 0x2B3484u;
    ctx->pc = 0x2B3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3484u;
    // 0x2b3488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D18u;
    sub_002A7D18_0x2a7d18(rdram, ctx, runtime); return;
    ctx->pc = 0x2B348Cu;
    // 0x2b348c: 0x0  nop
    ctx->pc = 0x2b348cu;
    // NOP
label_2b3490:
    // 0x2b3490: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B3490u;
    SET_GPR_U32(ctx, 31, 0x2B3498u);
    ctx->pc = 0x2B3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3490u;
    // 0x2b3494: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B3490u, 0x2B3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3498u;
label_2b3498:
    // 0x2b3498: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B3498u;
    {
        const bool branch_taken_0x2b3498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3498u;
        // 0x2b349c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3498) {
            ctx->pc = 0x2B34D8u;
            goto label_2b34d8;
        }
    }
    ctx->pc = 0x2B34A0u;
    // 0x2b34a0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B34A0u;
    SET_GPR_U32(ctx, 31, 0x2B34A8u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B34A0u, 0x2B34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34A8u;
label_2b34a8:
    // 0x2b34a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b34a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b34acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34b0: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x2b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2b34b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b34b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b34b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b34bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b34bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b34c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b34c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b34c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b34c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b34c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b34c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b34cc: 0x80a9f10  j           func_2A7C40
    ctx->pc = 0x2B34CCu;
    ctx->pc = 0x2B34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34CCu;
    // 0x2b34d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C40u;
    sub_002A7C40_0x2a7c40(rdram, ctx, runtime); return;
    ctx->pc = 0x2B34D4u;
    // 0x2b34d4: 0x0  nop
    ctx->pc = 0x2b34d4u;
    // NOP
label_2b34d8:
    // 0x2b34d8: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B34D8u;
    SET_GPR_U32(ctx, 31, 0x2B34E0u);
    ctx->pc = 0x2B34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34D8u;
    // 0x2b34dc: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B34D8u, 0x2B34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34E0u;
label_2b34e0:
    // 0x2b34e0: 0x8e5000e8  lw          $s0, 0xE8($s2)
    ctx->pc = 0x2b34e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2b34e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b34e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b34ec: 0xc0aa096  jal         func_2A8258
    ctx->pc = 0x2B34ECu;
    SET_GPR_U32(ctx, 31, 0x2B34F4u);
    ctx->pc = 0x2B34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34ECu;
    // 0x2b34f0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8258u, 0x2B34ECu, 0x2B34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34F4u;
label_2b34f4:
    // 0x2b34f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b34f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b34fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3500: 0xc0a9f46  jal         func_2A7D18
    ctx->pc = 0x2B3500u;
    SET_GPR_U32(ctx, 31, 0x2B3508u);
    ctx->pc = 0x2B3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3500u;
    // 0x2b3504: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D18u, 0x2B3500u, 0x2B3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3508u;
label_2b3508:
    // 0x2b3508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b350c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3514: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b3514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b351c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B351Cu;
        // 0x2b3520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3524u;
    // 0x2b3524: 0x0  nop
    ctx->pc = 0x2b3524u;
    // NOP
    ctx->pc = 0x2b3528u;
}
