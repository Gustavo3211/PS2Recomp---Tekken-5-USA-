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

// Function: sub_002E6538
// Address: 0x2e6538 - 0x2e6768
void sub_002E6538_0x2e6538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6538_0x2e6538");
#endif

    switch (ctx->pc) {
        case 0x2e6570u: goto label_2e6570;
        case 0x2e65a8u: goto label_2e65a8;
        case 0x2e65b4u: goto label_2e65b4;
        case 0x2e65d8u: goto label_2e65d8;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e6614u: goto label_2e6614;
        case 0x2e6630u: goto label_2e6630;
        case 0x2e6654u: goto label_2e6654;
        case 0x2e6670u: goto label_2e6670;
        case 0x2e6694u: goto label_2e6694;
        case 0x2e66b0u: goto label_2e66b0;
        case 0x2e66d4u: goto label_2e66d4;
        case 0x2e66f0u: goto label_2e66f0;
        case 0x2e6714u: goto label_2e6714;
        case 0x2e6750u: goto label_2e6750;
        default: break;
    }

    ctx->pc = 0x2e6538u;

    // 0x2e6538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e653c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e6540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e654c: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x2e654cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e6550: 0x244202a8  addiu       $v0, $v0, 0x2A8
    ctx->pc = 0x2e6550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 680));
    // 0x2e6554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e6558: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e655c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6560: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e6560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e6564: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e6564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6568: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e656c: 0x0  nop
    ctx->pc = 0x2e656cu;
    // NOP
label_2e6570:
    // 0x2e6570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e6570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e6574: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e6574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e6578: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e6578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e657c: 0x0  nop
    ctx->pc = 0x2e657cu;
    // NOP
    // 0x2e6580: 0x0  nop
    ctx->pc = 0x2e6580u;
    // NOP
    // 0x2e6584: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6584u;
    {
        const bool branch_taken_0x2e6584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6584u;
        // 0x2e6588: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6584) {
            ctx->pc = 0x2E6570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6570;
        }
    }
    ctx->pc = 0x2E658Cu;
    // 0x2e658c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e6590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6594: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x2e6594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x2e6598: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x2e6598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2e659c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e659cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e65a0: 0xc0bb85c  jal         func_2EE170
    ctx->pc = 0x2E65A0u;
    SET_GPR_U32(ctx, 31, 0x2E65A8u);
    ctx->pc = 0x2E65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65A0u;
    // 0x2e65a4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE170u, 0x2E65A0u, 0x2E65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65A8u;
label_2e65a8:
    // 0x2e65a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e65a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65ac: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E65ACu;
    SET_GPR_U32(ctx, 31, 0x2E65B4u);
    ctx->pc = 0x2E65B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65ACu;
    // 0x2e65b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E65ACu, 0x2E65B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65B4u;
label_2e65b4:
    // 0x2e65b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e65b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e65b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e65bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65c0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e65c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e65c4: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2e65c8: 0x24080600  addiu       $t0, $zero, 0x600
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2e65cc: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x2e65ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e65d0: 0xc0b9620  jal         func_2E5880
    ctx->pc = 0x2E65D0u;
    SET_GPR_U32(ctx, 31, 0x2E65D8u);
    ctx->pc = 0x2E65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65D0u;
    // 0x2e65d4: 0x240a003a  addiu       $t2, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5880u, 0x2E65D0u, 0x2E65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65D8u;
label_2e65d8:
    // 0x2e65d8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2e65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2e65dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e65dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e65e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e65e8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E65E8u;
    SET_GPR_U32(ctx, 31, 0x2E65F0u);
    ctx->pc = 0x2E65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65E8u;
    // 0x2e65ec: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E65E8u, 0x2E65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65F0u;
label_2e65f0:
    // 0x2e65f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e65f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e65f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65fc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x2e65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2e6600: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2e6600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e6604: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2e6604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e6608: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x2e6608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e660c: 0xc0bc3d4  jal         func_2F0F50
    ctx->pc = 0x2E660Cu;
    SET_GPR_U32(ctx, 31, 0x2E6614u);
    ctx->pc = 0x2E6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E660Cu;
    // 0x2e6610: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F50u, 0x2E660Cu, 0x2E6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6614u;
label_2e6614:
    // 0x2e6614: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x2e6614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2e6618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e661c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2e661cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2e6620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6624: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e6628: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6628u;
    SET_GPR_U32(ctx, 31, 0x2E6630u);
    ctx->pc = 0x2E662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6628u;
    // 0x2e662c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6628u, 0x2E6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6630u;
label_2e6630:
    // 0x2e6630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e663c: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x2e663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2e6640: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x2e6640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e6644: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2e6644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e6648: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x2e6648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e664c: 0xc0b993e  jal         func_2E64F8
    ctx->pc = 0x2E664Cu;
    SET_GPR_U32(ctx, 31, 0x2E6654u);
    ctx->pc = 0x2E6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E664Cu;
    // 0x2e6650: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E64F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E64F8u, 0x2E664Cu, 0x2E6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6654u;
label_2e6654:
    // 0x2e6654: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x2e6654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2e6658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e665c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2e665cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2e6660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e6660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6664: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e6668: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E6668u;
    SET_GPR_U32(ctx, 31, 0x2E6670u);
    ctx->pc = 0x2E666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6668u;
    // 0x2e666c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E6668u, 0x2E6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6670u;
label_2e6670:
    // 0x2e6670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e667c: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x2e667cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e6680: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2e6680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2e6684: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2e6684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e6688: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x2e6688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e668c: 0xc0bd2cc  jal         func_2F4B30
    ctx->pc = 0x2E668Cu;
    SET_GPR_U32(ctx, 31, 0x2E6694u);
    ctx->pc = 0x2E6690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E668Cu;
    // 0x2e6690: 0x240a0042  addiu       $t2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B30u, 0x2E668Cu, 0x2E6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6694u;
label_2e6694:
    // 0x2e6694: 0x26030068  addiu       $v1, $s0, 0x68
    ctx->pc = 0x2e6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2e6698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e669c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2e669cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2e66a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e66a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e66a8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E66A8u;
    SET_GPR_U32(ctx, 31, 0x2E66B0u);
    ctx->pc = 0x2E66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66A8u;
    // 0x2e66ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E66A8u, 0x2E66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66B0u;
label_2e66b0:
    // 0x2e66b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e66b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e66b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66bc: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x2e66bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2e66c0: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2e66c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2e66c4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e66c8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2e66c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e66cc: 0xc0a955e  jal         func_2A5578
    ctx->pc = 0x2E66CCu;
    SET_GPR_U32(ctx, 31, 0x2E66D4u);
    ctx->pc = 0x2E66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66CCu;
    // 0x2e66d0: 0x240a003e  addiu       $t2, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5578u, 0x2E66CCu, 0x2E66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66D4u;
label_2e66d4:
    // 0x2e66d4: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x2e66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2e66d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66dc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2e66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2e66e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e66e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e66e8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E66E8u;
    SET_GPR_U32(ctx, 31, 0x2E66F0u);
    ctx->pc = 0x2E66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66E8u;
    // 0x2e66ec: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E66E8u, 0x2E66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66F0u;
label_2e66f0:
    // 0x2e66f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e66f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e66f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66fc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2e66fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e6700: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x2e6700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2e6704: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2e6704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e6708: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2e6708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e670c: 0xc0bd9cc  jal         func_2F6730
    ctx->pc = 0x2E670Cu;
    SET_GPR_U32(ctx, 31, 0x2E6714u);
    ctx->pc = 0x2E6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E670Cu;
    // 0x2e6710: 0x240a0044  addiu       $t2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6730u, 0x2E670Cu, 0x2E6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6714u;
label_2e6714:
    // 0x2e6714: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2e6714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2e6718: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e6718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e671c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x2e671cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x2e6720: 0x246305e8  addiu       $v1, $v1, 0x5E8
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1512));
    // 0x2e6724: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e6728: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e6728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e672c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E672Cu;
    {
        const bool branch_taken_0x2e672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E672Cu;
        // 0x2e6730: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e672c) {
            ctx->pc = 0x2E6750u;
            goto label_2e6750;
        }
    }
    ctx->pc = 0x2E6734u;
    // 0x2e6734: 0x0  nop
    ctx->pc = 0x2e6734u;
    // NOP
    // 0x2e6738: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e6738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e673c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e673cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e6740: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e6740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e6744: 0x2484052c  addiu       $a0, $a0, 0x52C
    ctx->pc = 0x2e6744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1324));
    // 0x2e6748: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E6748u;
    SET_GPR_U32(ctx, 31, 0x2E6750u);
    ctx->pc = 0x2E674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6748u;
    // 0x2e674c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E6748u, 0x2E6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6750u;
label_2e6750:
    // 0x2e6750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e6754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e6758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e675c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e6760: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6760u;
        // 0x2e6764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6768u;
}
