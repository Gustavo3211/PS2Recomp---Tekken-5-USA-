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

// Function: sub_002B58A8
// Address: 0x2b58a8 - 0x2b59b8
void sub_002B58A8_0x2b58a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B58A8_0x2b58a8");
#endif

    switch (ctx->pc) {
        case 0x2b58d8u: goto label_2b58d8;
        case 0x2b58e0u: goto label_2b58e0;
        case 0x2b5920u: goto label_2b5920;
        case 0x2b5940u: goto label_2b5940;
        case 0x2b5950u: goto label_2b5950;
        case 0x2b5970u: goto label_2b5970;
        case 0x2b597cu: goto label_2b597c;
        case 0x2b5990u: goto label_2b5990;
        default: break;
    }

    ctx->pc = 0x2b58a8u;

    // 0x2b58a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b58ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b58b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b58b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b58b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b58b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b58c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b58c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b58c8: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b58cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b58d0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b58d4: 0x0  nop
    ctx->pc = 0x2b58d4u;
    // NOP
label_2b58d8:
    // 0x2b58d8: 0xc0abfec  jal         func_2AFFB0
    ctx->pc = 0x2B58D8u;
    SET_GPR_U32(ctx, 31, 0x2B58E0u);
    ctx->pc = 0x2B58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58D8u;
    // 0x2b58dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFFB0u, 0x2B58D8u, 0x2B58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58E0u;
label_2b58e0:
    // 0x2b58e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b58e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b58e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b58e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58ec: 0x16000026  bnez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B58ECu;
    {
        const bool branch_taken_0x2b58ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58ECu;
        // 0x2b58f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58ec) {
            ctx->pc = 0x2B5988u;
            goto label_2b5988;
        }
    }
    ctx->pc = 0x2B58F4u;
    // 0x2b58f4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x2b58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2b58f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B58F8u;
    {
        const bool branch_taken_0x2b58f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b58f8) {
            ctx->pc = 0x2B5908u;
            goto label_2b5908;
        }
    }
    ctx->pc = 0x2B5900u;
    // 0x2b5900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5904: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2b5904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_2b5908:
    // 0x2b5908: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5908u;
    {
        const bool branch_taken_0x2b5908 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2b5908) {
            ctx->pc = 0x2B590Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5908u;
            // 0x2b590c: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B592Cu;
            goto label_2b592c;
        }
    }
    ctx->pc = 0x2B5910u;
    // 0x2b5910: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5910u;
    {
        const bool branch_taken_0x2b5910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5910u;
        // 0x2b5914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5910) {
            ctx->pc = 0x2B5928u;
            goto label_2b5928;
        }
    }
    ctx->pc = 0x2B5918u;
    // 0x2b5918: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2B5918u;
    SET_GPR_U32(ctx, 31, 0x2B5920u);
    ctx->pc = 0x2B591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5918u;
    // 0x2b591c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2B5918u, 0x2B5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5920u;
label_2b5920:
    // 0x2b5920: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B5920u;
    {
        const bool branch_taken_0x2b5920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5920u;
        // 0x2b5924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5920) {
            ctx->pc = 0x2B599Cu;
            goto label_2b599c;
        }
    }
    ctx->pc = 0x2B5928u;
label_2b5928:
    // 0x2b5928: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2b5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b592c:
    // 0x2b592c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b5930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5930u;
    {
        const bool branch_taken_0x2b5930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5930) {
            ctx->pc = 0x2B5948u;
            goto label_2b5948;
        }
    }
    ctx->pc = 0x2B5938u;
    // 0x2b5938: 0xc0ac628  jal         func_2B18A0
    ctx->pc = 0x2B5938u;
    SET_GPR_U32(ctx, 31, 0x2B5940u);
    ctx->pc = 0x2B593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5938u;
    // 0x2b593c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18A0u, 0x2B5938u, 0x2B5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5940u;
label_2b5940:
    // 0x2b5940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5940u;
    {
        const bool branch_taken_0x2b5940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5940u;
        // 0x2b5944: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5940) {
            ctx->pc = 0x2B5954u;
            goto label_2b5954;
        }
    }
    ctx->pc = 0x2B5948u;
label_2b5948:
    // 0x2b5948: 0xc0ac02c  jal         func_2B00B0
    ctx->pc = 0x2B5948u;
    SET_GPR_U32(ctx, 31, 0x2B5950u);
    ctx->pc = 0x2B594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5948u;
    // 0x2b594c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00B0u, 0x2B5948u, 0x2B5950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5950u;
label_2b5950:
    // 0x2b5950: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2b5950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b5954:
    // 0x2b5954: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b5954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b5958: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5958u;
    {
        const bool branch_taken_0x2b5958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5958u;
        // 0x2b595c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5958) {
            ctx->pc = 0x2B599Cu;
            goto label_2b599c;
        }
    }
    ctx->pc = 0x2B5960u;
    // 0x2b5960: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2b5960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b5964: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2b5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b5968: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B5968u;
    SET_GPR_U32(ctx, 31, 0x2B5970u);
    ctx->pc = 0x2B596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5968u;
    // 0x2b596c: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B5968u, 0x2B5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5970u;
label_2b5970:
    // 0x2b5970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5974: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B5974u;
    SET_GPR_U32(ctx, 31, 0x2B597Cu);
    ctx->pc = 0x2B5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5974u;
    // 0x2b5978: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B5974u, 0x2B597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B597Cu;
label_2b597c:
    // 0x2b597c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B597Cu;
    {
        const bool branch_taken_0x2b597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B597Cu;
        // 0x2b5980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b597c) {
            ctx->pc = 0x2B599Cu;
            goto label_2b599c;
        }
    }
    ctx->pc = 0x2B5984u;
    // 0x2b5984: 0x0  nop
    ctx->pc = 0x2b5984u;
    // NOP
label_2b5988:
    // 0x2b5988: 0xc0ad69e  jal         func_2B5A78
    ctx->pc = 0x2B5988u;
    SET_GPR_U32(ctx, 31, 0x2B5990u);
    ctx->pc = 0x2B5A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A78u, 0x2B5988u, 0x2B5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5990u;
label_2b5990:
    // 0x2b5990: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b5990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5994: 0x1453ffd0  bne         $v0, $s3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2B5994u;
    {
        const bool branch_taken_0x2b5994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5994u;
        // 0x2b5998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5994) {
            ctx->pc = 0x2B58D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b58d8;
        }
    }
    ctx->pc = 0x2B599Cu;
label_2b599c:
    // 0x2b599c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b599cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b59a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b59a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b59a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b59a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b59a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b59ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b59acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b59b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B59B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59B0u;
        // 0x2b59b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B59B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B59B8u;
}
