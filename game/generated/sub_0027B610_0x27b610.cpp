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

// Function: sub_0027B610
// Address: 0x27b610 - 0x27b758
void sub_0027B610_0x27b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B610_0x27b610");
#endif

    switch (ctx->pc) {
        case 0x27b658u: goto label_27b658;
        case 0x27b680u: goto label_27b680;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6f0u: goto label_27b6f0;
        default: break;
    }

    ctx->pc = 0x27b610u;

    // 0x27b610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b61c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b624: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27b628: 0xa6000218  sh          $zero, 0x218($s0)
    ctx->pc = 0x27b628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b62c: 0x920201ec  lbu         $v0, 0x1EC($s0)
    ctx->pc = 0x27b62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x27b630: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27B630u;
    {
        const bool branch_taken_0x27b630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B630u;
        // 0x27b634: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b630) {
            ctx->pc = 0x27B740u;
            goto label_27b740;
        }
    }
    ctx->pc = 0x27B638u;
    // 0x27b638: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x27b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x27b63c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b640: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x27b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27b644: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27b644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b648: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x27b648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x27b64c: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x27b64cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27b650: 0xc09e8d4  jal         func_27A350
    ctx->pc = 0x27B650u;
    SET_GPR_U32(ctx, 31, 0x27B658u);
    ctx->pc = 0x27B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B650u;
    // 0x27b654: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A350u, 0x27B650u, 0x27B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B658u;
label_27b658:
    // 0x27b658: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27b65c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b660: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x27b660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b664: 0x50430037  beql        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x27B664u;
    {
        const bool branch_taken_0x27b664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27b664) {
            ctx->pc = 0x27B668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B664u;
            // 0x27b668: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B744u;
            goto label_27b744;
        }
    }
    ctx->pc = 0x27B66Cu;
    // 0x27b66c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27b66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27b670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b674: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x27b674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b678: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B678u;
    SET_GPR_U32(ctx, 31, 0x27B680u);
    ctx->pc = 0x27B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B678u;
    // 0x27b67c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B678u, 0x27B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B680u;
label_27b680:
    // 0x27b680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b684: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27b684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27b688: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x27b688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27b68c: 0xa2000187  sb          $zero, 0x187($s0)
    ctx->pc = 0x27b68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 391), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b690: 0xa60202fe  sh          $v0, 0x2FE($s0)
    ctx->pc = 0x27b690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b694: 0xa20001ec  sb          $zero, 0x1EC($s0)
    ctx->pc = 0x27b694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 492), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b698: 0xa20001ee  sb          $zero, 0x1EE($s0)
    ctx->pc = 0x27b698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b69c: 0xa20001ef  sb          $zero, 0x1EF($s0)
    ctx->pc = 0x27b69cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 495), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6a0: 0xa60002a2  sh          $zero, 0x2A2($s0)
    ctx->pc = 0x27b6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 674), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b6a4: 0xc07d17e  jal         func_1F45F8
    ctx->pc = 0x27B6A4u;
    SET_GPR_U32(ctx, 31, 0x27B6ACu);
    ctx->pc = 0x27B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6A4u;
    // 0x27b6a8: 0xa24001f0  sb          $zero, 0x1F0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 496), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45F8u, 0x27B6A4u, 0x27B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6ACu;
label_27b6ac:
    // 0x27b6ac: 0xa240018a  sb          $zero, 0x18A($s2)
    ctx->pc = 0x27b6acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 394), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6b0: 0xa2400188  sb          $zero, 0x188($s2)
    ctx->pc = 0x27b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 392), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b6bc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x27b6bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b6c0: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B6C0u;
    SET_GPR_U32(ctx, 31, 0x27B6C8u);
    ctx->pc = 0x27B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6C0u;
    // 0x27b6c4: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B6C0u, 0x27B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6C8u;
label_27b6c8:
    // 0x27b6c8: 0xa200030d  sb          $zero, 0x30D($s0)
    ctx->pc = 0x27b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6cc: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27b6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b6d4: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x27b6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6d8: 0xa200030e  sb          $zero, 0x30E($s0)
    ctx->pc = 0x27b6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6dc: 0xa200030f  sb          $zero, 0x30F($s0)
    ctx->pc = 0x27b6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b6e0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x27b6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27b6e4: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x27b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x27b6e8: 0xa6020306  sh          $v0, 0x306($s0)
    ctx->pc = 0x27b6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b6ec: 0x0  nop
    ctx->pc = 0x27b6ecu;
    // NOP
label_27b6f0:
    // 0x27b6f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27b6f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27b6f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27b6fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27b700: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x27b700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b704: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27b708: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B708u;
    {
        const bool branch_taken_0x27b708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B708u;
        // 0x27b70c: 0xa0400564  sb          $zero, 0x564($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b708) {
            ctx->pc = 0x27B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b6f0;
        }
    }
    ctx->pc = 0x27B710u;
    // 0x27b710: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x27b710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x27b714: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27b718: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27B718u;
    {
        const bool branch_taken_0x27b718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b718) {
            ctx->pc = 0x27B71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B718u;
            // 0x27b71c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B744u;
            goto label_27b744;
        }
    }
    ctx->pc = 0x27B720u;
    // 0x27b720: 0x9642014e  lhu         $v0, 0x14E($s2)
    ctx->pc = 0x27b720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
    // 0x27b724: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27b724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27b728: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x27b728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x27b72c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27b72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27b730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b734: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27b734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x27b738: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x27b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x27b73c: 0xa6020218  sh          $v0, 0x218($s0)
    ctx->pc = 0x27b73cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 2));
label_27b740:
    // 0x27b740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b744:
    // 0x27b744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b748: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b74c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27b74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b750: 0x3e00008  jr          $ra
    ctx->pc = 0x27B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B750u;
        // 0x27b754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B758u;
}
