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

// Function: sub_004C46C0
// Address: 0x4c46c0 - 0x4c4cb8
void sub_004C46C0_0x4c46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C46C0_0x4c46c0");
#endif

    switch (ctx->pc) {
        case 0x4c46dcu: goto label_4c46dc;
        case 0x4c46f8u: goto label_4c46f8;
        case 0x4c48fcu: goto label_4c48fc;
        case 0x4c4904u: goto label_4c4904;
        case 0x4c49e8u: goto label_4c49e8;
        case 0x4c4aacu: goto label_4c4aac;
        case 0x4c4c04u: goto label_4c4c04;
        case 0x4c4c0cu: goto label_4c4c0c;
        case 0x4c4c14u: goto label_4c4c14;
        case 0x4c4c28u: goto label_4c4c28;
        case 0x4c4c54u: goto label_4c4c54;
        case 0x4c4c5cu: goto label_4c4c5c;
        case 0x4c4c64u: goto label_4c4c64;
        case 0x4c4c6cu: goto label_4c4c6c;
        case 0x4c4c80u: goto label_4c4c80;
        case 0x4c4c98u: goto label_4c4c98;
        case 0x4c4ca0u: goto label_4c4ca0;
        default: break;
    }

    ctx->pc = 0x4c46c0u;

    // 0x4c46c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c46c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c46c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c46c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c46c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c46cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c46ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c46d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c46d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c46d4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C46D4u;
    SET_GPR_U32(ctx, 31, 0x4C46DCu);
    ctx->pc = 0x4C46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C46D4u;
    // 0x4c46d8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C46D4u, 0x4C46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C46DCu;
label_4c46dc:
    // 0x4c46dc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c46e0: 0xac620edc  sw          $v0, 0xEDC($v1)
    ctx->pc = 0x4c46e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EDCu, _value); } while (0);
    // 0x4c46e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c46e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c46e8: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4C46E8u;
    {
        const bool branch_taken_0x4c46e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C46ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C46E8u;
        // 0x4c46ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c46e8) {
            ctx->pc = 0x4C471Cu;
            goto label_4c471c;
        }
    }
    ctx->pc = 0x4C46F0u;
    // 0x4c46f0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C46F0u;
    SET_GPR_U32(ctx, 31, 0x4C46F8u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C46F0u, 0x4C46F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C46F8u;
label_4c46f8:
    // 0x4c46f8: 0x24020492  addiu       $v0, $zero, 0x492
    ctx->pc = 0x4c46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1170));
    // 0x4c46fc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c46fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4700: 0x260401b6  addiu       $a0, $s0, 0x1B6
    ctx->pc = 0x4c4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x4c4704: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c4704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c4708: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c4708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4c470c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c470cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4710: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c4710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c4714: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c4714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4c4718: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4c4718u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_4c471c:
    // 0x4c471c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c471cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4c4720: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C4720u;
    {
        const bool branch_taken_0x4c4720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4720u;
        // 0x4c4724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4720) {
            ctx->pc = 0x4C4740u;
            goto label_4c4740;
        }
    }
    ctx->pc = 0x4C4728u;
    // 0x4c4728: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C4728u;
    {
        const bool branch_taken_0x4c4728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4728u;
        // 0x4c472c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4728) {
            ctx->pc = 0x4C4758u;
            goto label_4c4758;
        }
    }
    ctx->pc = 0x4C4730u;
    // 0x4c4730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4738: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4738u;
        // 0x4c473c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4740u;
label_4c4740:
    // 0x4c4740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c474c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4750: 0x81311dc  j           func_4C4770
    ctx->pc = 0x4C4750u;
    ctx->pc = 0x4C4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4750u;
    // 0x4c4754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4770u;
    goto label_4c4770;
    ctx->pc = 0x4C4758u;
label_4c4758:
    // 0x4c4758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c475c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c475cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4764: 0x81312ec  j           func_4C4BB0
    ctx->pc = 0x4C4764u;
    ctx->pc = 0x4C4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4764u;
    // 0x4c4768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4BB0u;
    goto label_4c4bb0;
    ctx->pc = 0x4C476Cu;
    // 0x4c476c: 0x0  nop
    ctx->pc = 0x4c476cu;
    // NOP
label_4c4770:
    // 0x4c4770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c4774: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c4774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c4778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c477c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c477cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c4784: 0x244f0ed8  addiu       $t7, $v0, 0xED8
    ctx->pc = 0x4c4784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 3800));
    // 0x4c4788: 0x8e0e0140  lw          $t6, 0x140($s0)
    ctx->pc = 0x4c4788u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x4c478c: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x4c478cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x7F0ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0ED8u, _value); } while (0);
    // 0x4c4790: 0x85c20160  lh          $v0, 0x160($t6)
    ctx->pc = 0x4c4790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 352)));
    // 0x4c4794: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4794u;
    {
        const bool branch_taken_0x4c4794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4794u;
        // 0x4c4798: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4794) {
            ctx->pc = 0x4C47B0u;
            goto label_4c47b0;
        }
    }
    ctx->pc = 0x4C479Cu;
    // 0x4c479c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c479cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c47a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c47a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c47a4: 0x8131252  j           func_4C4948
    ctx->pc = 0x4C47A4u;
    ctx->pc = 0x4C47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C47A4u;
    // 0x4c47a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4948u;
    goto label_4c4948;
    ctx->pc = 0x4C47ACu;
    // 0x4c47ac: 0x0  nop
    ctx->pc = 0x4c47acu;
    // NOP
label_4c47b0:
    // 0x4c47b0: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4c47b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4c47b4: 0x25080eb8  addiu       $t0, $t0, 0xEB8
    ctx->pc = 0x4c47b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3768));
    // 0x4c47b8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4c47b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4c47bc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c47c0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c47c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c47c4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c47c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c47c8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c47c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c47cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c47ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c47d0: 0x25290ec4  addiu       $t1, $t1, 0xEC4
    ctx->pc = 0x4c47d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3780));
    // 0x4c47d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c47d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c47d8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4c47d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c47dc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c47e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c47e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c47e4: 0x24e70ec8  addiu       $a3, $a3, 0xEC8
    ctx->pc = 0x4c47e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3784));
    // 0x4c47e8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c47e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c47ec: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c47ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c47f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c47f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c47f4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4c47f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c47f8: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x4c47f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x4c47fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c4800: 0x256bd680  addiu       $t3, $t3, -0x2980
    ctx->pc = 0x4c4800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
    // 0x4c4804: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c4804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c4808: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c480c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c480cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c4810: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c4810u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c4814: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c4814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c4818: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c4818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c481c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c481cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c4820: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c4820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c4824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c4824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c4828: 0x24217128  addiu       $at, $at, 0x7128
    ctx->pc = 0x4c4828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28968));
    // 0x4c482c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c4830: 0xada20ed4  sw          $v0, 0xED4($t5)
    ctx->pc = 0x4c4830u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3796), GPR_U32(ctx, 2));
    // 0x4c4834: 0x85c30118  lh          $v1, 0x118($t6)
    ctx->pc = 0x4c4834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 280)));
    // 0x4c4838: 0x844c0000  lh          $t4, 0x0($v0)
    ctx->pc = 0x4c4838u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c483c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4c483cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4c4840: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c4840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c4844: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4c4844u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4c4848: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c4848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c484c: 0x85c2011c  lh          $v0, 0x11C($t6)
    ctx->pc = 0x4c484cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 284)));
    // 0x4c4850: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4c4850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c4854: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c4854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c4858: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c4858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c485c: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x4c485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x4c4860: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c4860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4c4864: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4868: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4c4868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4c486c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4c486cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c4870: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c4870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c4874: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4c4874u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4c4878: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4c4878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4c487c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4c487cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c4880: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c4880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c4884: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c4884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c4888: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c4888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4c488c: 0xa56324a0  sh          $v1, 0x24A0($t3)
    ctx->pc = 0x4c488cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4890: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c4890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c4894: 0xa56224a2  sh          $v0, 0x24A2($t3)
    ctx->pc = 0x4c4894u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 9378), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4898: 0x95c30120  lhu         $v1, 0x120($t6)
    ctx->pc = 0x4c4898u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 288)));
    // 0x4c489c: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x4c489cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c48a0: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4c48a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c48a4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c48a8: 0x84a2015a  lh          $v0, 0x15A($a1)
    ctx->pc = 0x4c48a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 346)));
    // 0x4c48ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c48acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c48b0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c48b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c48b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c48b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c48b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c48bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c48bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c48c0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c48c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c48c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c48c8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c48c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c48cc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c48d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c48d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c48d4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c48d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c48d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c48dc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c48dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c48e0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4c48e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4c48e4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4c48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4c48e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c48e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c48ec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c48ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c48f0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c48f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c48f4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4C48F4u;
    SET_GPR_U32(ctx, 31, 0x4C48FCu);
    ctx->pc = 0x4C48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C48F4u;
    // 0x4c48f8: 0xa602015a  sh          $v0, 0x15A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4C48F4u, 0x4C48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C48FCu;
label_4c48fc:
    // 0x4c48fc: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C48FCu;
    SET_GPR_U32(ctx, 31, 0x4C4904u);
    ctx->pc = 0x4C4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C48FCu;
    // 0x4c4900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C48FCu, 0x4C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4904u;
label_4c4904:
    // 0x4c4904: 0x260301b4  addiu       $v1, $s0, 0x1B4
    ctx->pc = 0x4c4904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4c4908: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c4908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c490c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4c490cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c4910: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x4c4910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4c4914: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4c4914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c4918: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c4918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c491c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4920: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c4920u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4924: 0xa60601c2  sh          $a2, 0x1C2($s0)
    ctx->pc = 0x4c4924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c4928: 0xa607015e  sh          $a3, 0x15E($s0)
    ctx->pc = 0x4c4928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 7));
    // 0x4c492c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4930: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c4930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c4934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4938: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c493c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c493cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4940: 0x81312ec  j           func_4C4BB0
    ctx->pc = 0x4C4940u;
    ctx->pc = 0x4C4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4940u;
    // 0x4c4944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4BB0u;
    goto label_4c4bb0;
    ctx->pc = 0x4C4948u;
label_4c4948:
    // 0x4c4948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c4948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c494c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c494cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c4950: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c4950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c4954: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c4958: 0x24550ed8  addiu       $s5, $v0, 0xED8
    ctx->pc = 0x4c4958u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3800));
    // 0x4c495c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c4968: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c496c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c4970: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4c4970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0ED8u));
    // 0x4c4974: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4c4974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4c4978: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C4978u;
    {
        const bool branch_taken_0x4c4978 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4978u;
        // 0x4c497c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4978) {
            ctx->pc = 0x4C49A8u;
            goto label_4c49a8;
        }
    }
    ctx->pc = 0x4C4980u;
    // 0x4c4980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c498c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c498cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4990: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c4990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4994: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c4994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c4998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c4998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c499c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C499Cu;
    ctx->pc = 0x4C49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C499Cu;
    // 0x4c49a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C49A4u;
    // 0x4c49a4: 0x0  nop
    ctx->pc = 0x4c49a4u;
    // NOP
label_4c49a8:
    // 0x4c49a8: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x4c49a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x4c49ac: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c49acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c49b0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c49b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c49b4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c49b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c49b8: 0xa6830118  sh          $v1, 0x118($s4)
    ctx->pc = 0x4c49b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c49bc: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c49bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c49c0: 0x26100ec4  addiu       $s0, $s0, 0xEC4
    ctx->pc = 0x4c49c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3780));
    // 0x4c49c4: 0x26520ec8  addiu       $s2, $s2, 0xEC8
    ctx->pc = 0x4c49c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3784));
    // 0x4c49c8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c49cc: 0x26730ecc  addiu       $s3, $s3, 0xECC
    ctx->pc = 0x4c49ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3788));
    // 0x4c49d0: 0x9443011c  lhu         $v1, 0x11C($v0)
    ctx->pc = 0x4c49d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x4c49d4: 0xa683011c  sh          $v1, 0x11C($s4)
    ctx->pc = 0x4c49d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c49d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c49dc: 0x94430120  lhu         $v1, 0x120($v0)
    ctx->pc = 0x4c49dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x4c49e0: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C49E0u;
    SET_GPR_U32(ctx, 31, 0x4C49E8u);
    ctx->pc = 0x4C49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C49E0u;
    // 0x4c49e4: 0xa6830120  sh          $v1, 0x120($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C49E0u, 0x4C49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C49E8u;
label_4c49e8:
    // 0x4c49e8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c49e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c49ec: 0x24a50eb8  addiu       $a1, $a1, 0xEB8
    ctx->pc = 0x4c49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3768));
    // 0x4c49f0: 0x868301be  lh          $v1, 0x1BE($s4)
    ctx->pc = 0x4c49f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
    // 0x4c49f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0EB8u));
    // 0x4c49f8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c49fc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c49fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c4a00: 0x3484001e  ori         $a0, $a0, 0x1E
    ctx->pc = 0x4c4a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    // 0x4c4a04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c4a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c4a08: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c4a08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c4a0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4a10: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c4a14: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c4a18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c4a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c4a1c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c4a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c4a20: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4c4a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a24: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c4a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c4a28: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4c4a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a2c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x4c4a2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4a30: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x4c4a30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4c4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4c4a38: 0x8e4c0000  lw          $t4, 0x0($s2)
    ctx->pc = 0x4c4a38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4a3c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c4a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c4a40: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x4c4a40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c4a44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4a48: 0x2403ffec  addiu       $v1, $zero, -0x14
    ctx->pc = 0x4c4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x4c4a4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c4a50: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4c4a50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4c4a54: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x4c4a54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x4c4a58: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4c4a58u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4c4a5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c4a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c4a60: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4c4a60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4c4a64: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x4c4a64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x4c4a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c4a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4a6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c4a70: 0x24c60ebc  addiu       $a2, $a2, 0xEBC
    ctx->pc = 0x4c4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3772));
    // 0x4c4a74: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c4a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c4a78: 0x24e70ec0  addiu       $a3, $a3, 0xEC0
    ctx->pc = 0x4c4a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3776));
    // 0x4c4a7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c4a80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c4a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c4a84: 0x24217120  addiu       $at, $at, 0x7120
    ctx->pc = 0x4c4a84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28960));
    // 0x4c4a88: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c4a8c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4c4a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c4a90: 0xadc20ed4  sw          $v0, 0xED4($t6)
    ctx->pc = 0x4c4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3796), GPR_U32(ctx, 2));
    // 0x4c4a94: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4c4a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4c4a98: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4c4a98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4c4a9c: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x4c4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x4c4aa0: 0xae4c0000  sw          $t4, 0x0($s2)
    ctx->pc = 0x4c4aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 12));
    // 0x4c4aa4: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4C4AA4u;
    SET_GPR_U32(ctx, 31, 0x4C4AACu);
    ctx->pc = 0x4C4AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4AA4u;
    // 0x4c4aa8: 0xae6b0000  sw          $t3, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4C4AA4u, 0x4C4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4AACu;
label_4c4aac:
    // 0x4c4aac: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4c4aacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c4ab0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4c4ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4ab4: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x4c4ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4c4ab8: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x4c4ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4c4abc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4ac0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c4ac4: 0x268c0014  addiu       $t4, $s4, 0x14
    ctx->pc = 0x4c4ac4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4c4ac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4acc: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4c4accu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4ad0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c4ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c4ad4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4ad8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4ad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4adc: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4c4adcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c4ae0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c4ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c4ae4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4c4ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c4ae8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4c4ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4c4aec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4af0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c4af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c4af4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c4af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c4af8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c4afc: 0x268d0018  addiu       $t5, $s4, 0x18
    ctx->pc = 0x4c4afcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4c4b00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c4b00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c4b04: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4c4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4c4b08: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c4b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4b0c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c4b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c4b10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c4b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4b14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4b18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c4b1c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c4b20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4b24: 0xd13025  or          $a2, $a2, $s1
    ctx->pc = 0x4c4b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    // 0x4c4b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4b2c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c4b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c4b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c4b34: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4c4b38: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c4b3c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4c4b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4c4b40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4b44: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4c4b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c4b48: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4c4b48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4c4b4c: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4c4b4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4c4b50: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4c4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4c4b54: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4b58: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c4b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c4b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4b60: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c4b64: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c4b64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4b68: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c4b6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c4b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4b74: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c4b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c4b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4b7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4b80: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4c4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4c4b84: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4c4b84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c4b88: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4c4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c4b8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c4b90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c4b90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4b94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c4b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c4b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4b9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c4b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4ba0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4ba4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4c4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4c4ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4BA8u;
        // 0x4c4bac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4BB0u;
label_4c4bb0:
    // 0x4c4bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c4bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c4bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4bc0: 0x2602015e  addiu       $v0, $s0, 0x15E
    ctx->pc = 0x4c4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4c4bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c4bc8: 0x260601b4  addiu       $a2, $s0, 0x1B4
    ctx->pc = 0x4c4bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4c4bcc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c4bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c4bd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c4bd4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4c4bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c4bd8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C4BD8u;
    {
        const bool branch_taken_0x4c4bd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4BD8u;
        // 0x4c4bdc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4bd8) {
            ctx->pc = 0x4C4BFCu;
            goto label_4c4bfc;
        }
    }
    ctx->pc = 0x4C4BE0u;
    // 0x4c4be0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4c4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4c4be4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c4be8: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x4c4be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4bec: 0xa60301be  sh          $v1, 0x1BE($s0)
    ctx->pc = 0x4c4becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4bf0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c4bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c4bf4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4c4bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4c4bf8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c4bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c4bfc:
    // 0x4c4bfc: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C4BFCu;
    SET_GPR_U32(ctx, 31, 0x4C4C04u);
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C4BFCu, 0x4C4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C04u;
label_4c4c04:
    // 0x4c4c04: 0xc12b9d0  jal         func_4AE740
    ctx->pc = 0x4C4C04u;
    SET_GPR_U32(ctx, 31, 0x4C4C0Cu);
    ctx->pc = 0x4C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C04u;
    // 0x4c4c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE740u, 0x4C4C04u, 0x4C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C0Cu;
label_4c4c0c:
    // 0x4c4c0c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C4C0Cu;
    SET_GPR_U32(ctx, 31, 0x4C4C14u);
    ctx->pc = 0x4C4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C0Cu;
    // 0x4c4c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C4C0Cu, 0x4C4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C14u;
label_4c4c14:
    // 0x4c4c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4c18: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4C4C18u;
    {
        const bool branch_taken_0x4c4c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C18u;
        // 0x4c4c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c18) {
            ctx->pc = 0x4C4CA0u;
            goto label_4c4ca0;
        }
    }
    ctx->pc = 0x4C4C20u;
    // 0x4c4c20: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C4C20u;
    SET_GPR_U32(ctx, 31, 0x4C4C28u);
    ctx->pc = 0x4C4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C20u;
    // 0x4c4c24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C4C20u, 0x4C4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C28u;
label_4c4c28:
    // 0x4c4c28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c4c2c: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4c4c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c4c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4c34: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C4C34u;
    {
        const bool branch_taken_0x4c4c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C34u;
        // 0x4c4c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c34) {
            ctx->pc = 0x4C4C78u;
            goto label_4c4c78;
        }
    }
    ctx->pc = 0x4C4C3Cu;
    // 0x4c4c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c4c40: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c4c44: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4c4c44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4c48: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4c4c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4c4c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C4C4Cu;
    SET_GPR_U32(ctx, 31, 0x4C4C54u);
    ctx->pc = 0x4C4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C4Cu;
    // 0x4c4c50: 0xa4c0232c  sh          $zero, 0x232C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C4C4Cu, 0x4C4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C54u;
label_4c4c54:
    // 0x4c4c54: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C4C54u;
    SET_GPR_U32(ctx, 31, 0x4C4C5Cu);
    ctx->pc = 0x4C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C54u;
    // 0x4c4c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C4C54u, 0x4C4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C5Cu;
label_4c4c5c:
    // 0x4c4c5c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C4C5Cu;
    SET_GPR_U32(ctx, 31, 0x4C4C64u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C4C5Cu, 0x4C4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C64u;
label_4c4c64:
    // 0x4c4c64: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C4C64u;
    SET_GPR_U32(ctx, 31, 0x4C4C6Cu);
    ctx->pc = 0x4C4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C64u;
    // 0x4c4c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C4C64u, 0x4C4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C6Cu;
label_4c4c6c:
    // 0x4c4c6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C4C6Cu;
    {
        const bool branch_taken_0x4c4c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C6Cu;
        // 0x4c4c70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c6c) {
            ctx->pc = 0x4C4CA4u;
            goto label_4c4ca4;
        }
    }
    ctx->pc = 0x4C4C74u;
    // 0x4c4c74: 0x0  nop
    ctx->pc = 0x4c4c74u;
    // NOP
label_4c4c78:
    // 0x4c4c78: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C4C78u;
    SET_GPR_U32(ctx, 31, 0x4C4C80u);
    ctx->pc = 0x4C4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C78u;
    // 0x4c4c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C4C78u, 0x4C4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C80u;
label_4c4c80:
    // 0x4c4c80: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C4C80u;
    {
        const bool branch_taken_0x4c4c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C80u;
        // 0x4c4c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c80) {
            ctx->pc = 0x4C4CA0u;
            goto label_4c4ca0;
        }
    }
    ctx->pc = 0x4C4C88u;
    // 0x4c4c88: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c4c8c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c4c90: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C4C90u;
    SET_GPR_U32(ctx, 31, 0x4C4C98u);
    ctx->pc = 0x4C4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C90u;
    // 0x4c4c94: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C4C90u, 0x4C4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4C98u;
label_4c4c98:
    // 0x4c4c98: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C4C98u;
    SET_GPR_U32(ctx, 31, 0x4C4CA0u);
    ctx->pc = 0x4C4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4C98u;
    // 0x4c4c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C4C98u, 0x4C4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4CA0u;
label_4c4ca0:
    // 0x4c4ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c4ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4ca4:
    // 0x4c4ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4cac: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4CACu;
        // 0x4c4cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4CB4u;
    // 0x4c4cb4: 0x0  nop
    ctx->pc = 0x4c4cb4u;
    // NOP
    ctx->pc = 0x4c4cb8u;
}
