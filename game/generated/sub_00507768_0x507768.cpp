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

// Function: sub_00507768
// Address: 0x507768 - 0x507870
void sub_00507768_0x507768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507768_0x507768");
#endif

    switch (ctx->pc) {
        case 0x507810u: goto label_507810;
        case 0x507820u: goto label_507820;
        case 0x507830u: goto label_507830;
        case 0x507840u: goto label_507840;
        default: break;
    }

    ctx->pc = 0x507768u;

    // 0x507768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x507768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50776c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50776cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x507770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x507774: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x507774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x507778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x507778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50777c: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50777cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x507780: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x507780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x507784: 0x3c120090  lui         $s2, 0x90
    ctx->pc = 0x507784u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)144 << 16));
    // 0x507788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x507788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x50778c: 0x2484c55c  addiu       $a0, $a0, -0x3AA4
    ctx->pc = 0x50778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952284));
    // 0x507790: 0x2642f080  addiu       $v0, $s2, -0xF80
    ctx->pc = 0x507790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
    // 0x507794: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x507794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x507798: 0x84454cd6  lh          $a1, 0x4CD6($v0)
    ctx->pc = 0x507798u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x903D56u));
    // 0x50779c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50779cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC55Cu));
    // 0x5077a0: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x5077a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x5077a4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x5077a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x5077a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5077a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5077ac: 0x8c470054  lw          $a3, 0x54($v0)
    ctx->pc = 0x5077acu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x5077b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x5077b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x5077b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x5077b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x5077b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5077b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5077bc: 0xae26c554  sw          $a2, -0x3AAC($s1)
    ctx->pc = 0x5077bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952276), GPR_U32(ctx, 6));
    // 0x5077c0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x5077c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5077c4: 0xae07c558  sw          $a3, -0x3AA8($s0)
    ctx->pc = 0x5077c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952280), GPR_U32(ctx, 7));
    // 0x5077c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5077c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5077cc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x5077ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x5077d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5077d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5077d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x5077d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x5077d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x5077d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5077dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5077dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5077e0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x5077e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x5077e4: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x5077e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x5077e8: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x5077E8u;
    {
        const bool branch_taken_0x5077e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5077e8) {
            ctx->pc = 0x5077ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5077E8u;
            // 0x5077ec: 0x8e22c554  lw          $v0, -0x3AAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x507844u;
            goto label_507844;
        }
    }
    ctx->pc = 0x5077F0u;
    // 0x5077f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5077f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5077f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x5077f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x5077f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5077f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5077fc: 0x8c63d260  lw          $v1, -0x2DA0($v1)
    ctx->pc = 0x5077fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955616)));
    // 0x507800: 0x600008  jr          $v1
    ctx->pc = 0x507800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x507808u: goto label_507808;
            case 0x507818u: goto label_507818;
            case 0x507828u: goto label_507828;
            case 0x507838u: goto label_507838;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507800u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x507808u;
label_507808:
    // 0x507808: 0xc141d76  jal         func_5075D8
    ctx->pc = 0x507808u;
    SET_GPR_U32(ctx, 31, 0x507810u);
    ctx->pc = 0x5075D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5075D8u, 0x507808u, 0x507810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507810u;
label_507810:
    // 0x507810: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x507810u;
    {
        const bool branch_taken_0x507810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x507814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507810u;
        // 0x507814: 0x8e22c554  lw          $v0, -0x3AAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507810) {
            ctx->pc = 0x507844u;
            goto label_507844;
        }
    }
    ctx->pc = 0x507818u;
label_507818:
    // 0x507818: 0xc141da6  jal         func_507698
    ctx->pc = 0x507818u;
    SET_GPR_U32(ctx, 31, 0x507820u);
    ctx->pc = 0x507698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507698u, 0x507818u, 0x507820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507820u;
label_507820:
    // 0x507820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x507820u;
    {
        const bool branch_taken_0x507820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x507824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507820u;
        // 0x507824: 0x8e22c554  lw          $v0, -0x3AAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507820) {
            ctx->pc = 0x507844u;
            goto label_507844;
        }
    }
    ctx->pc = 0x507828u;
label_507828:
    // 0x507828: 0xc141dd6  jal         func_507758
    ctx->pc = 0x507828u;
    SET_GPR_U32(ctx, 31, 0x507830u);
    ctx->pc = 0x507758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507758u, 0x507828u, 0x507830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507830u;
label_507830:
    // 0x507830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x507830u;
    {
        const bool branch_taken_0x507830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x507834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507830u;
        // 0x507834: 0x8e22c554  lw          $v0, -0x3AAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507830) {
            ctx->pc = 0x507844u;
            goto label_507844;
        }
    }
    ctx->pc = 0x507838u;
label_507838:
    // 0x507838: 0xc141dd6  jal         func_507758
    ctx->pc = 0x507838u;
    SET_GPR_U32(ctx, 31, 0x507840u);
    ctx->pc = 0x507758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507758u, 0x507838u, 0x507840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507840u;
label_507840:
    // 0x507840: 0x8e22c554  lw          $v0, -0x3AAC($s1)
    ctx->pc = 0x507840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952276)));
label_507844:
    // 0x507844: 0x2643f080  addiu       $v1, $s2, -0xF80
    ctx->pc = 0x507844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963328));
    // 0x507848: 0x8e04c558  lw          $a0, -0x3AA8($s0)
    ctx->pc = 0x507848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952280)));
    // 0x50784c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50784cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x507854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507858: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x507858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50785c: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x50785cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x507860: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x507860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x507864: 0x3e00008  jr          $ra
    ctx->pc = 0x507864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507864u;
        // 0x507868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50786Cu;
    // 0x50786c: 0x0  nop
    ctx->pc = 0x50786cu;
    // NOP
    ctx->pc = 0x507870u;
}
