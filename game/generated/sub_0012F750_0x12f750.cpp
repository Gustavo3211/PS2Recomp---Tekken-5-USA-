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

// Function: sub_0012F750
// Address: 0x12f750 - 0x12f8e8
void sub_0012F750_0x12f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F750_0x12f750");
#endif

    switch (ctx->pc) {
        case 0x12f790u: goto label_12f790;
        default: break;
    }

    ctx->pc = 0x12f750u;

    // 0x12f750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f758: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f75c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f760: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12f764: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x12f764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12f768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f76c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12f770: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12f774: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f778: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f77c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x12f77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12f780: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x12f780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x12f784: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x12f784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f788: 0xc04bbaa  jal         func_12EEA8
    ctx->pc = 0x12F788u;
    SET_GPR_U32(ctx, 31, 0x12F790u);
    ctx->pc = 0x12F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F788u;
    // 0x12f78c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EEA8u, 0x12F788u, 0x12F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F790u;
label_12f790:
    // 0x12f790: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12f790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f794: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12f798: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x12f798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12f79c: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x12f79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12f7a0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12F7A0u;
    {
        const bool branch_taken_0x12f7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7A0u;
        // 0x12f7a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7a0) {
            ctx->pc = 0x12F810u;
            goto label_12f810;
        }
    }
    ctx->pc = 0x12F7A8u;
    // 0x12f7a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12f7ac: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x12f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x12f7b0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x12f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12f7b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f7b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f7bc: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x12f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x12f7c0: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x12f7c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x12f7c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12f7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12f7c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f7d0: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x12f7d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12f7d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F7D4u;
    {
        const bool branch_taken_0x12f7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7D4u;
        // 0x12f7d8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7d4) {
            ctx->pc = 0x12F7E0u;
            goto label_12f7e0;
        }
    }
    ctx->pc = 0x12F7DCu;
    // 0x12f7dc: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_12f7e0:
    // 0x12f7e0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x12f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12f7e4: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x12f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x12f7e8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x12f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12f7ec: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x12f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x12f7f0: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x12f7f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f7f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12f7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12f7fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12f800: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x12f804: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12f804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12f808: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x12F808u;
    {
        const bool branch_taken_0x12f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F808u;
        // 0x12f80c: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f808) {
            ctx->pc = 0x12F8C0u;
            goto label_12f8c0;
        }
    }
    ctx->pc = 0x12F810u;
label_12f810:
    // 0x12f810: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x12f810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12f814: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F814u;
    {
        const bool branch_taken_0x12f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f814) {
            ctx->pc = 0x12F818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F814u;
            // 0x12f818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F81Cu;
    // 0x12f81c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x12f820: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x12f820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12f824:
    // 0x12f824: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x12f824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x12f828: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x12F828u;
    {
        const bool branch_taken_0x12f828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F828u;
        // 0x12f82c: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f828) {
            ctx->pc = 0x12F890u;
            goto label_12f890;
        }
    }
    ctx->pc = 0x12F830u;
    // 0x12f830: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x12f834: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x12f834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x12f838: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x12f838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x12f83c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12f83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12f840: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x12f840u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x12f844: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12f848: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12f848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12f84c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12f850: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x12f850u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x12f854: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f858: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12f858u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x12f85c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F85Cu;
    {
        const bool branch_taken_0x12f85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F85Cu;
        // 0x12f860: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f85c) {
            ctx->pc = 0x12F868u;
            goto label_12f868;
        }
    }
    ctx->pc = 0x12F864u;
    // 0x12f864: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x12f864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_12f868:
    // 0x12f868: 0x61023  negu        $v0, $a2
    ctx->pc = 0x12f868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x12f86c: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x12f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x12f870: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x12f874: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f878: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12f878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12f87c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12f87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12f880: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x12f880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x12f884: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12f884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12f888: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12F888u;
    {
        const bool branch_taken_0x12f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F888u;
        // 0x12f88c: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f888) {
            ctx->pc = 0x12F8C0u;
            goto label_12f8c0;
        }
    }
    ctx->pc = 0x12F890u;
label_12f890:
    // 0x12f890: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x12f894: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f898: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f89c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x12f89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x12f8a0: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x12f8a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x12f8a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f8a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f8ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12f8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12f8b0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x12f8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12f8b4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12f8b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x12f8b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f8bc: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x12f8bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_12f8c0:
    // 0x12f8c0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x12f8c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x12f8c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f8cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f8d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f8d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12f8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f8d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f8dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12f8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E0u;
        // 0x12f8e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F8E8u;
}
