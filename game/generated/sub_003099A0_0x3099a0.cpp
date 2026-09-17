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

// Function: sub_003099A0
// Address: 0x3099a0 - 0x309a88
void sub_003099A0_0x3099a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003099A0_0x3099a0");
#endif

    switch (ctx->pc) {
        case 0x3099e4u: goto label_3099e4;
        case 0x309a08u: goto label_309a08;
        case 0x309a28u: goto label_309a28;
        case 0x309a40u: goto label_309a40;
        case 0x309a4cu: goto label_309a4c;
        case 0x309a5cu: goto label_309a5c;
        case 0x309a64u: goto label_309a64;
        default: break;
    }

    ctx->pc = 0x3099a0u;

    // 0x3099a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3099a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3099a4: 0x8383c530  lb          $v1, -0x3AD0($gp)
    ctx->pc = 0x3099a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952240)));
    // 0x3099a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3099a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3099ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3099acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3099b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3099b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3099b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3099b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3099b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3099bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3099c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3099c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3099c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3099cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3099ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3099d0: 0x9212037c  lbu         $s2, 0x37C($s0)
    ctx->pc = 0x3099d0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x3099d4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3099D4u;
    {
        const bool branch_taken_0x3099d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3099D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099D4u;
        // 0x3099d8: 0x8c53036c  lw          $s3, 0x36C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3099d4) {
            ctx->pc = 0x3099F0u;
            goto label_3099f0;
        }
    }
    ctx->pc = 0x3099DCu;
    // 0x3099dc: 0xc0c26be  jal         func_309AF8
    ctx->pc = 0x3099DCu;
    SET_GPR_U32(ctx, 31, 0x3099E4u);
    ctx->pc = 0x309AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309AF8u, 0x3099DCu, 0x3099E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3099E4u;
label_3099e4:
    // 0x3099e4: 0x9382c530  lbu         $v0, -0x3AD0($gp)
    ctx->pc = 0x3099e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952240)));
    // 0x3099e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3099e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3099ec: 0xa382c530  sb          $v0, -0x3AD0($gp)
    ctx->pc = 0x3099ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294952240), (uint8_t)GPR_U32(ctx, 2));
label_3099f0:
    // 0x3099f0: 0x8382c531  lb          $v0, -0x3ACF($gp)
    ctx->pc = 0x3099f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952241)));
    // 0x3099f4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3099F4u;
    {
        const bool branch_taken_0x3099f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3099f4) {
            ctx->pc = 0x3099F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3099F4u;
            // 0x3099f8: 0x8382c532  lb          $v0, -0x3ACE($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952242)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x3099FCu;
    // 0x3099fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3099fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a00: 0xc0c26ae  jal         func_309AB8
    ctx->pc = 0x309A00u;
    SET_GPR_U32(ctx, 31, 0x309A08u);
    ctx->pc = 0x309A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A00u;
    // 0x309a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309AB8u, 0x309A00u, 0x309A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A08u;
label_309a08:
    // 0x309a08: 0x9382c531  lbu         $v0, -0x3ACF($gp)
    ctx->pc = 0x309a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952241)));
    // 0x309a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x309a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309a10: 0xa382c531  sb          $v0, -0x3ACF($gp)
    ctx->pc = 0x309a10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294952241), (uint8_t)GPR_U32(ctx, 2));
    // 0x309a14: 0x8382c532  lb          $v0, -0x3ACE($gp)
    ctx->pc = 0x309a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952242)));
label_309a18:
    // 0x309a18: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309A18u;
    {
        const bool branch_taken_0x309a18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x309A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A18u;
        // 0x309a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a18) {
            ctx->pc = 0x309A38u;
            goto label_309a38;
        }
    }
    ctx->pc = 0x309A20u;
    // 0x309a20: 0xc0c26c4  jal         func_309B10
    ctx->pc = 0x309A20u;
    SET_GPR_U32(ctx, 31, 0x309A28u);
    ctx->pc = 0x309A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A20u;
    // 0x309a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309B10u, 0x309A20u, 0x309A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A28u;
label_309a28:
    // 0x309a28: 0x9382c532  lbu         $v0, -0x3ACE($gp)
    ctx->pc = 0x309a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294952242)));
    // 0x309a2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x309a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309a30: 0xa382c532  sb          $v0, -0x3ACE($gp)
    ctx->pc = 0x309a30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294952242), (uint8_t)GPR_U32(ctx, 2));
    // 0x309a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_309a38:
    // 0x309a38: 0xc0c2d70  jal         func_30B5C0
    ctx->pc = 0x309A38u;
    SET_GPR_U32(ctx, 31, 0x309A40u);
    ctx->pc = 0x309A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A38u;
    // 0x309a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B5C0u, 0x309A38u, 0x309A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A40u;
label_309a40:
    // 0x309a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a44: 0xc0c26dc  jal         func_309B70
    ctx->pc = 0x309A44u;
    SET_GPR_U32(ctx, 31, 0x309A4Cu);
    ctx->pc = 0x309A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A44u;
    // 0x309a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309B70u, 0x309A44u, 0x309A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A4Cu;
label_309a4c:
    // 0x309a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x309a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a54: 0xc0c302a  jal         func_30C0A8
    ctx->pc = 0x309A54u;
    SET_GPR_U32(ctx, 31, 0x309A5Cu);
    ctx->pc = 0x309A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A54u;
    // 0x309a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C0A8u, 0x309A54u, 0x309A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A5Cu;
label_309a5c:
    // 0x309a5c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x309A5Cu;
    SET_GPR_U32(ctx, 31, 0x309A64u);
    ctx->pc = 0x309A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A5Cu;
    // 0x309a60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x309A5Cu, 0x309A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A64u;
label_309a64:
    // 0x309a64: 0x26641190  addiu       $a0, $s3, 0x1190
    ctx->pc = 0x309a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4496));
    // 0x309a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x309a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x309a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309a78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x309a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309a80: 0x80cbf98  j           func_32FE60
    ctx->pc = 0x309A80u;
    ctx->pc = 0x309A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A80u;
    // 0x309a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    sub_0032FE60_0x32fe60(rdram, ctx, runtime); return;
    ctx->pc = 0x309A88u;
}
