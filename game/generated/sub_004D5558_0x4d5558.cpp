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

// Function: sub_004D5558
// Address: 0x4d5558 - 0x4d5698
void sub_004D5558_0x4d5558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5558_0x4d5558");
#endif

    switch (ctx->pc) {
        case 0x4d5584u: goto label_4d5584;
        case 0x4d5680u: goto label_4d5680;
        default: break;
    }

    ctx->pc = 0x4d5558u;

    // 0x4d5558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d5558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d555c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d5560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d5560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d5568: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d5568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4d556c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d5570: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d5570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5574: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D5574u;
    {
        const bool branch_taken_0x4d5574 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d5574) {
            ctx->pc = 0x4D5578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5574u;
            // 0x4d5578: 0x8e030140  lw          $v1, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D55B0u;
            goto label_4d55b0;
        }
    }
    ctx->pc = 0x4D557Cu;
    // 0x4d557c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D557Cu;
    SET_GPR_U32(ctx, 31, 0x4D5584u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D557Cu, 0x4D5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5584u;
label_4d5584:
    // 0x4d5584: 0x24020557  addiu       $v0, $zero, 0x557
    ctx->pc = 0x4d5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1367));
    // 0x4d5588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d5588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d558c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4d558cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5590: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4d5590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d5594: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d5594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d5598: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d5598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d559c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d559cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d55a0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d55a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d55a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d55a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d55a8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d55a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d55ac: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x4d55acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4d55b0:
    // 0x4d55b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d55b4: 0x244b1074  addiu       $t3, $v0, 0x1074
    ctx->pc = 0x4d55b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4212));
    // 0x4d55b8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4d55b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1074u, _value); } while (0);
    // 0x4d55bc: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4d55bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4d55c0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D55C0u;
    {
        const bool branch_taken_0x4d55c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D55C0u;
        // 0x4d55c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d55c0) {
            ctx->pc = 0x4D55E0u;
            goto label_4d55e0;
        }
    }
    ctx->pc = 0x4D55C8u;
    // 0x4d55c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d55c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d55cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d55ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d55d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d55d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d55d4: 0x81355a0  j           func_4D5680
    ctx->pc = 0x4D55D4u;
    ctx->pc = 0x4D55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D55D4u;
    // 0x4d55d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5680u;
    goto label_4d5680;
    ctx->pc = 0x4D55DCu;
    // 0x4d55dc: 0x0  nop
    ctx->pc = 0x4d55dcu;
    // NOP
label_4d55e0:
    // 0x4d55e0: 0x84620160  lh          $v0, 0x160($v1)
    ctx->pc = 0x4d55e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x4d55e4: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D55E4u;
    {
        const bool branch_taken_0x4d55e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d55e4) {
            ctx->pc = 0x4D55E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D55E4u;
            // 0x4d55e8: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5608u;
            goto label_4d5608;
        }
    }
    ctx->pc = 0x4D55ECu;
    // 0x4d55ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d55f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d55f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d55f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d55f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d55f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d55fc: 0x81355a0  j           func_4D5680
    ctx->pc = 0x4D55FCu;
    ctx->pc = 0x4D5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D55FCu;
    // 0x4d5600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5680u;
    goto label_4d5680;
    ctx->pc = 0x4D5604u;
    // 0x4d5604: 0x0  nop
    ctx->pc = 0x4d5604u;
    // NOP
label_4d5608:
    // 0x4d5608: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d5608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d560c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4d560cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d5610: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d5610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5614: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4d5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4d5618: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x4d5618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4d561c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d5620: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x4d5620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d5624: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4d5624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4d5628: 0x260a011c  addiu       $t2, $s0, 0x11C
    ctx->pc = 0x4d5628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4d562c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5634: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4d5634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d5638: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d5638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d563c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4d5640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5644: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d5648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d564c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d5650: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d5650u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d5654: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4d5654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d5658: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4d5658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d565c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4d565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4d5660: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d5660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d5664: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d5664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d5668: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d5668u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d566c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4d566cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d5670: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4d5670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4d5674: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4d5674u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d5678: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4D5678u;
    ctx->pc = 0x4D567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5678u;
    // 0x4d567c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4D5680u;
label_4d5680:
    // 0x4d5680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d5684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d5688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d5688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d568c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4D568Cu;
    ctx->pc = 0x4D5690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D568Cu;
    // 0x4d5690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D5694u;
    // 0x4d5694: 0x0  nop
    ctx->pc = 0x4d5694u;
    // NOP
    ctx->pc = 0x4d5698u;
}
