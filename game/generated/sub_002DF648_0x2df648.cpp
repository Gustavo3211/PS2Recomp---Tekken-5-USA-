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

// Function: sub_002DF648
// Address: 0x2df648 - 0x2df77c
void sub_002DF648_0x2df648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF648_0x2df648");
#endif

    switch (ctx->pc) {
        case 0x2df660u: goto label_2df660;
        case 0x2df668u: goto label_2df668;
        case 0x2df67cu: goto label_2df67c;
        case 0x2df690u: goto label_2df690;
        case 0x2df6a4u: goto label_2df6a4;
        case 0x2df6b8u: goto label_2df6b8;
        case 0x2df6ccu: goto label_2df6cc;
        case 0x2df6d4u: goto label_2df6d4;
        case 0x2df6f8u: goto label_2df6f8;
        case 0x2df70cu: goto label_2df70c;
        case 0x2df720u: goto label_2df720;
        case 0x2df728u: goto label_2df728;
        case 0x2df740u: goto label_2df740;
        case 0x2df754u: goto label_2df754;
        case 0x2df768u: goto label_2df768;
        case 0x2df770u: goto label_2df770;
        default: break;
    }

    ctx->pc = 0x2df648u;

    // 0x2df648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df64c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2df64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x2df650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df658: 0xc0b93c4  jal         func_2E4F10
    ctx->pc = 0x2DF658u;
    SET_GPR_U32(ctx, 31, 0x2DF660u);
    ctx->pc = 0x2DF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF658u;
    // 0x2df65c: 0x24a5aa80  addiu       $a1, $a1, -0x5580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F10u, 0x2DF658u, 0x2DF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF660u;
label_2df660:
    // 0x2df660: 0xc0cc418  jal         func_331060
    ctx->pc = 0x2DF660u;
    SET_GPR_U32(ctx, 31, 0x2DF668u);
    ctx->pc = 0x2DF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF660u;
    // 0x2df664: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331060u, 0x2DF660u, 0x2DF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF668u;
label_2df668:
    // 0x2df668: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df66c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df670: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x2df670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    // 0x2df674: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF674u;
    SET_GPR_U32(ctx, 31, 0x2DF67Cu);
    ctx->pc = 0x2DF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF674u;
    // 0x2df678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF674u, 0x2DF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF67Cu;
label_2df67c:
    // 0x2df67c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df684: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x2df684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    // 0x2df688: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF688u;
    SET_GPR_U32(ctx, 31, 0x2DF690u);
    ctx->pc = 0x2DF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF688u;
    // 0x2df68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF688u, 0x2DF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF690u;
label_2df690:
    // 0x2df690: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df698: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x2df698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    // 0x2df69c: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF69Cu;
    SET_GPR_U32(ctx, 31, 0x2DF6A4u);
    ctx->pc = 0x2DF6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF69Cu;
    // 0x2df6a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF69Cu, 0x2DF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6A4u;
label_2df6a4:
    // 0x2df6a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df6a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6ac: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x2df6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x2df6b0: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF6B0u;
    SET_GPR_U32(ctx, 31, 0x2DF6B8u);
    ctx->pc = 0x2DF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6B0u;
    // 0x2df6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF6B0u, 0x2DF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6B8u;
label_2df6b8:
    // 0x2df6b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6c0: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x2df6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x2df6c4: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF6C4u;
    SET_GPR_U32(ctx, 31, 0x2DF6CCu);
    ctx->pc = 0x2DF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6C4u;
    // 0x2df6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF6C4u, 0x2DF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6CCu;
label_2df6cc:
    // 0x2df6cc: 0xc3417a0  jal         func_D05E80
    ctx->pc = 0x2DF6CCu;
    SET_GPR_U32(ctx, 31, 0x2DF6D4u);
    ctx->pc = 0x2DF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6CCu;
    // 0x2df6d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD05E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05E80u, 0x2DF6CCu, 0x2DF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6D4u;
label_2df6d4:
    // 0x2df6d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2df6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2df6d8: 0x8c4337a4  lw          $v1, 0x37A4($v0)
    ctx->pc = 0x2df6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E37A4u));
    // 0x2df6dc: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DF6DCu;
    {
        const bool branch_taken_0x2df6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6DCu;
        // 0x2df6e0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6dc) {
            ctx->pc = 0x2DF72Cu;
            goto label_2df72c;
        }
    }
    ctx->pc = 0x2DF6E4u;
    // 0x2df6e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df6e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6ec: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x2df6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    // 0x2df6f0: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF6F0u;
    SET_GPR_U32(ctx, 31, 0x2DF6F8u);
    ctx->pc = 0x2DF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6F0u;
    // 0x2df6f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF6F0u, 0x2DF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6F8u;
label_2df6f8:
    // 0x2df6f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df6fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df700: 0x24a5f930  addiu       $a1, $a1, -0x6D0
    ctx->pc = 0x2df700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
    // 0x2df704: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF704u;
    SET_GPR_U32(ctx, 31, 0x2DF70Cu);
    ctx->pc = 0x2DF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF704u;
    // 0x2df708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF704u, 0x2DF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF70Cu;
label_2df70c:
    // 0x2df70c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df714: 0x24a5f940  addiu       $a1, $a1, -0x6C0
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
    // 0x2df718: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF718u;
    SET_GPR_U32(ctx, 31, 0x2DF720u);
    ctx->pc = 0x2DF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF718u;
    // 0x2df71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF718u, 0x2DF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF720u;
label_2df720:
    // 0x2df720: 0xc122032  jal         func_4880C8
    ctx->pc = 0x2DF720u;
    SET_GPR_U32(ctx, 31, 0x2DF728u);
    ctx->pc = 0x4880C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4880C8u, 0x2DF720u, 0x2DF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF728u;
label_2df728:
    // 0x2df728: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2df72c:
    // 0x2df72c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2df72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x2df730: 0x24a5f950  addiu       $a1, $a1, -0x6B0
    ctx->pc = 0x2df730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
    // 0x2df734: 0x24c64a20  addiu       $a2, $a2, 0x4A20
    ctx->pc = 0x2df734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18976));
    // 0x2df738: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF738u;
    SET_GPR_U32(ctx, 31, 0x2DF740u);
    ctx->pc = 0x2DF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF738u;
    // 0x2df73c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF738u, 0x2DF740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF740u;
label_2df740:
    // 0x2df740: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df748: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x2df748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x2df74c: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF74Cu;
    SET_GPR_U32(ctx, 31, 0x2DF754u);
    ctx->pc = 0x2DF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF74Cu;
    // 0x2df750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF74Cu, 0x2DF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF754u;
label_2df754:
    // 0x2df754: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2df754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2df758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df75c: 0x24a5f970  addiu       $a1, $a1, -0x690
    ctx->pc = 0x2df75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x2df760: 0xc0b9434  jal         func_2E50D0
    ctx->pc = 0x2DF760u;
    SET_GPR_U32(ctx, 31, 0x2DF768u);
    ctx->pc = 0x2DF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF760u;
    // 0x2df764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E50D0u, 0x2DF760u, 0x2DF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF768u;
label_2df768:
    // 0x2df768: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x2DF768u;
    SET_GPR_U32(ctx, 31, 0x2DF770u);
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x2DF768u, 0x2DF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF770u;
label_2df770:
    // 0x2df770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df774: 0xc043c8c  jal         func_10F230
    ctx->pc = 0x2DF774u;
    SET_GPR_U32(ctx, 31, 0x2DF77Cu);
    ctx->pc = 0x2DF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF774u;
    // 0x2df778: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x2DF774u, 0x2DF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF77Cu;
}
