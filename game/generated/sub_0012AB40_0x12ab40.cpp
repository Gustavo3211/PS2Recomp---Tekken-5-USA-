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

// Function: sub_0012AB40
// Address: 0x12ab40 - 0x12c1b0
void sub_0012AB40_0x12ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AB40_0x12ab40");
#endif

    switch (ctx->pc) {
        case 0x12ab80u: goto label_12ab80;
        case 0x12abb0u: goto label_12abb0;
        case 0x12abecu: goto label_12abec;
        case 0x12ac10u: goto label_12ac10;
        case 0x12ac18u: goto label_12ac18;
        case 0x12ac38u: goto label_12ac38;
        case 0x12ac98u: goto label_12ac98;
        case 0x12acd4u: goto label_12acd4;
        case 0x12acd8u: goto label_12acd8;
        case 0x12ace4u: goto label_12ace4;
        case 0x12ace8u: goto label_12ace8;
        case 0x12ada0u: goto label_12ada0;
        case 0x12adf0u: goto label_12adf0;
        case 0x12af1cu: goto label_12af1c;
        case 0x12af34u: goto label_12af34;
        case 0x12af64u: goto label_12af64;
        case 0x12afa0u: goto label_12afa0;
        case 0x12b00cu: goto label_12b00c;
        case 0x12b1acu: goto label_12b1ac;
        case 0x12b1d8u: goto label_12b1d8;
        case 0x12b2e8u: goto label_12b2e8;
        case 0x12b2f0u: goto label_12b2f0;
        case 0x12b330u: goto label_12b330;
        case 0x12b338u: goto label_12b338;
        case 0x12b354u: goto label_12b354;
        case 0x12b380u: goto label_12b380;
        case 0x12b448u: goto label_12b448;
        case 0x12b484u: goto label_12b484;
        case 0x12b4ecu: goto label_12b4ec;
        case 0x12b544u: goto label_12b544;
        case 0x12b5acu: goto label_12b5ac;
        case 0x12b5f8u: goto label_12b5f8;
        case 0x12b634u: goto label_12b634;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b714u: goto label_12b714;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b888u: goto label_12b888;
        case 0x12b8c0u: goto label_12b8c0;
        case 0x12b8f8u: goto label_12b8f8;
        case 0x12b99cu: goto label_12b99c;
        case 0x12ba00u: goto label_12ba00;
        case 0x12ba38u: goto label_12ba38;
        case 0x12ba70u: goto label_12ba70;
        case 0x12bad4u: goto label_12bad4;
        case 0x12bb24u: goto label_12bb24;
        case 0x12bb80u: goto label_12bb80;
        case 0x12bbc0u: goto label_12bbc0;
        case 0x12bbf8u: goto label_12bbf8;
        case 0x12bc5cu: goto label_12bc5c;
        case 0x12bcecu: goto label_12bcec;
        case 0x12bd48u: goto label_12bd48;
        case 0x12bda8u: goto label_12bda8;
        case 0x12be2cu: goto label_12be2c;
        case 0x12be4cu: goto label_12be4c;
        case 0x12be9cu: goto label_12be9c;
        case 0x12bed8u: goto label_12bed8;
        case 0x12bf10u: goto label_12bf10;
        case 0x12bf74u: goto label_12bf74;
        case 0x12bfc0u: goto label_12bfc0;
        case 0x12c010u: goto label_12c010;
        case 0x12c058u: goto label_12c058;
        case 0x12c090u: goto label_12c090;
        case 0x12c0f0u: goto label_12c0f0;
        case 0x12c12cu: goto label_12c12c;
        case 0x12c15cu: goto label_12c15c;
        default: break;
    }

    ctx->pc = 0x12ab40u;

    // 0x12ab40: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x12ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x12ab44: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x12ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x12ab48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12ab48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab4c: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x12ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x12ab50: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab54: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x12ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    // 0x12ab58: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x12ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x12ab5c: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x12ab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x12ab60: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x12ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x12ab64: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x12ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x12ab68: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x12ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x12ab6c: 0xffb70278  sd          $s7, 0x278($sp)
    ctx->pc = 0x12ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 23));
    // 0x12ab70: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x12ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
    // 0x12ab74: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x12ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
    // 0x12ab78: 0xc04ba02  jal         func_12E808
    ctx->pc = 0x12AB78u;
    SET_GPR_U32(ctx, 31, 0x12AB80u);
    ctx->pc = 0x12AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB78u;
    // 0x12ab7c: 0xafa501e8  sw          $a1, 0x1E8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E808u, 0x12AB78u, 0x12AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB80u;
label_12ab80:
    // 0x12ab80: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ab84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ab88: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x12ab88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ab8c: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x12ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x12ab90: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12ab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12ab94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AB94u;
    {
        const bool branch_taken_0x12ab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB94u;
        // 0x12ab98: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab94) {
            ctx->pc = 0x12ABA8u;
            goto label_12aba8;
        }
    }
    ctx->pc = 0x12AB9Cu;
    // 0x12ab9c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12aba0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ABA0u;
    {
        const bool branch_taken_0x12aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aba0) {
            ctx->pc = 0x12ABA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ABA0u;
            // 0x12aba4: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ABC4u;
            goto label_12abc4;
        }
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0xc04b140  jal         func_12C500
    ctx->pc = 0x12ABA8u;
    SET_GPR_U32(ctx, 31, 0x12ABB0u);
    ctx->pc = 0x12ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABA8u;
    // 0x12abac: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C500u, 0x12ABA8u, 0x12ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABB0u;
label_12abb0:
    // 0x12abb0: 0x14400573  bnez        $v0, . + 4 + (0x573 << 2)
    ctx->pc = 0x12ABB0u;
    {
        const bool branch_taken_0x12abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABB0u;
        // 0x12abb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abb0) {
            ctx->pc = 0x12C180u;
            goto label_12c180;
        }
    }
    ctx->pc = 0x12ABB8u;
    // 0x12abb8: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12abb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12abbc: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x12abbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12abc0: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x12abc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_12abc4:
    // 0x12abc4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12abc8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12ABC8u;
    {
        const bool branch_taken_0x12abc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABC8u;
        // 0x12abcc: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abc8) {
            ctx->pc = 0x12ABF8u;
            goto label_12abf8;
        }
    }
    ctx->pc = 0x12ABD0u;
    // 0x12abd0: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x12abd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12abd4: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x12abd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x12abd8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12ABD8u;
    {
        const bool branch_taken_0x12abd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD8u;
        // 0x12abdc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abd8) {
            ctx->pc = 0x12ABF8u;
            goto label_12abf8;
        }
    }
    ctx->pc = 0x12ABE0u;
    // 0x12abe0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12abe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abe4: 0xc04aa84  jal         func_12AA10
    ctx->pc = 0x12ABE4u;
    SET_GPR_U32(ctx, 31, 0x12ABECu);
    ctx->pc = 0x12ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABE4u;
    // 0x12abe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AA10u, 0x12ABE4u, 0x12ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABECu;
label_12abec:
    // 0x12abec: 0x10000565  b           . + 4 + (0x565 << 2)
    ctx->pc = 0x12ABECu;
    {
        const bool branch_taken_0x12abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABECu;
        // 0x12abf0: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abec) {
            ctx->pc = 0x12C184u;
            goto label_12c184;
        }
    }
    ctx->pc = 0x12ABF4u;
    // 0x12abf4: 0x0  nop
    ctx->pc = 0x12abf4u;
    // NOP
label_12abf8:
    // 0x12abf8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x12abfc: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x12abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x12ac00: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12ac00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac04: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12ac08: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x12ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x12ac0c: 0x0  nop
    ctx->pc = 0x12ac0cu;
    // NOP
label_12ac10:
    // 0x12ac10: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x12ac10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac14: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12ac18:
    // 0x12ac18: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12ac1c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12ac20: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x12ac24: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x12ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x12ac28: 0x8c674b90  lw          $a3, 0x4B90($v1)
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x134B90u));
    // 0x12ac2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac30: 0xc04ba60  jal         func_12E980
    ctx->pc = 0x12AC30u;
    SET_GPR_U32(ctx, 31, 0x12AC38u);
    ctx->pc = 0x12AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC30u;
    // 0x12ac34: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E980u, 0x12AC30u, 0x12AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC38u;
label_12ac38:
    // 0x12ac38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ac38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac3c: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AC3Cu;
    {
        const bool branch_taken_0x12ac3c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x12ac3c) {
            ctx->pc = 0x12AC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AC3Cu;
            // 0x12ac40: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC58u;
            goto label_12ac58;
        }
    }
    ctx->pc = 0x12AC44u;
    // 0x12ac44: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x12ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x12ac48: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12AC48u;
    {
        const bool branch_taken_0x12ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x12AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC48u;
        // 0x12ac4c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac48) {
            ctx->pc = 0x12AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac18;
        }
    }
    ctx->pc = 0x12AC50u;
    // 0x12ac50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12ac54: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x12ac54u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_12ac58:
    // 0x12ac58: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12AC58u;
    {
        const bool branch_taken_0x12ac58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac58) {
            ctx->pc = 0x12ACB4u;
            goto label_12acb4;
        }
    }
    ctx->pc = 0x12AC60u;
    // 0x12ac60: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x12ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x12ac64: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x12ac68: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12ac68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12ac6c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ac70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ac74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ac78: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12ac7c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ac7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ac80: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ac84: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AC84u;
    {
        const bool branch_taken_0x12ac84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC84u;
        // 0x12ac88: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac84) {
            ctx->pc = 0x12ACA8u;
            goto label_12aca8;
        }
    }
    ctx->pc = 0x12AC8Cu;
    // 0x12ac8c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ac90: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12AC90u;
    SET_GPR_U32(ctx, 31, 0x12AC98u);
    ctx->pc = 0x12AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC90u;
    // 0x12ac94: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12AC90u, 0x12AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC98u;
label_12ac98:
    // 0x12ac98: 0x14400534  bnez        $v0, . + 4 + (0x534 << 2)
    ctx->pc = 0x12AC98u;
    {
        const bool branch_taken_0x12ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC98u;
        // 0x12ac9c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac98) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12ACA0u;
    // 0x12aca0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12aca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12aca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12aca8:
    // 0x12aca8: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12acac: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12acb0: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x12acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_12acb4:
    // 0x12acb4: 0x1a000525  blez        $s0, . + 4 + (0x525 << 2)
    ctx->pc = 0x12ACB4u;
    {
        const bool branch_taken_0x12acb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACB4u;
        // 0x12acb8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acb4) {
            ctx->pc = 0x12C14Cu;
            goto label_12c14c;
        }
    }
    ctx->pc = 0x12ACBCu;
    // 0x12acbc: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x12acc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12acc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12acc4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x12acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x12acc8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12acc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12accc: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x12acccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x12acd0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12acd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12acd4:
    // 0x12acd4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x12acd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_12acd8:
    // 0x12acd8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x12acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x12acdc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12acdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12ace0: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_12ace4:
    // 0x12ace4: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x12ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_12ace8:
    // 0x12ace8: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x12ace8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x12acec: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x12ACECu;
    {
        const bool branch_taken_0x12acec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACECu;
        // 0x12acf0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acec) {
            ctx->pc = 0x12B3B8u;
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12ACF4u;
    // 0x12acf4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x12acf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12acfc: 0x8c63f770  lw          $v1, -0x890($v1)
    ctx->pc = 0x12acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965104)));
    // 0x12ad00: 0x600008  jr          $v1
    ctx->pc = 0x12AD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AD08u: goto label_12ad08;
            case 0x12AD20u: goto label_12ad20;
            case 0x12AD28u: goto label_12ad28;
            case 0x12AD44u: goto label_12ad44;
            case 0x12AD50u: goto label_12ad50;
            case 0x12AD60u: goto label_12ad60;
            case 0x12ADE0u: goto label_12ade0;
            case 0x12ADE8u: goto label_12ade8;
            case 0x12AE20u: goto label_12ae20;
            case 0x12AE28u: goto label_12ae28;
            case 0x12AE30u: goto label_12ae30;
            case 0x12AE44u: goto label_12ae44;
            case 0x12AE58u: goto label_12ae58;
            case 0x12AE78u: goto label_12ae78;
            case 0x12AE7Cu: goto label_12ae7c;
            case 0x12AED0u: goto label_12aed0;
            case 0x12B0B0u: goto label_12b0b0;
            case 0x12B110u: goto label_12b110;
            case 0x12B114u: goto label_12b114;
            case 0x12B158u: goto label_12b158;
            case 0x12B180u: goto label_12b180;
            case 0x12B1E0u: goto label_12b1e0;
            case 0x12B1E4u: goto label_12b1e4;
            case 0x12B228u: goto label_12b228;
            case 0x12B238u: goto label_12b238;
            case 0x12B3B8u: goto label_12b3b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12AD08u;
label_12ad08:
    // 0x12ad08: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x12ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12ad0c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x12AD0Cu;
    {
        const bool branch_taken_0x12ad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ad0c) {
            ctx->pc = 0x12AD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AD0Cu;
            // 0x12ad10: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AD14u;
    // 0x12ad14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12AD14u;
    {
        const bool branch_taken_0x12ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD14u;
        // 0x12ad18: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad14) {
            ctx->pc = 0x12AD54u;
            goto label_12ad54;
        }
    }
    ctx->pc = 0x12AD1Cu;
    // 0x12ad1c: 0x0  nop
    ctx->pc = 0x12ad1cu;
    // NOP
label_12ad20:
    // 0x12ad20: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12AD20u;
    {
        const bool branch_taken_0x12ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD20u;
        // 0x12ad24: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad20) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AD28u;
label_12ad28:
    // 0x12ad28: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x12ad28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad2c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12ad30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ad34: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12AD34u;
    {
        const bool branch_taken_0x12ad34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD34u;
        // 0x12ad38: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad34) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AD3Cu;
    // 0x12ad3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12ad40: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x12ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_12ad44:
    // 0x12ad44: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x12AD44u;
    {
        const bool branch_taken_0x12ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD44u;
        // 0x12ad48: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad44) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AD4Cu;
    // 0x12ad4c: 0x0  nop
    ctx->pc = 0x12ad4cu;
    // NOP
label_12ad50:
    // 0x12ad50: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_12ad54:
    // 0x12ad54: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x12ad54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ad58: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x12AD58u;
    {
        const bool branch_taken_0x12ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD58u;
        // 0x12ad5c: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad58) {
            ctx->pc = 0x12ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AD60u;
label_12ad60:
    // 0x12ad60: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ad64: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x12ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12ad68: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AD68u;
    {
        const bool branch_taken_0x12ad68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD68u;
        // 0x12ad6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad68) {
            ctx->pc = 0x12AD90u;
            goto label_12ad90;
        }
    }
    ctx->pc = 0x12AD70u;
    // 0x12ad70: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x12ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad74: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x12ad74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ad78: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12ad78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad7c: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x12ad7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12ad80: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12AD80u;
    {
        const bool branch_taken_0x12ad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD80u;
        // 0x12ad84: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad80) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AD88u;
    // 0x12ad88: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x12AD88u;
    {
        const bool branch_taken_0x12ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD88u;
        // 0x12ad8c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad88) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AD90u;
label_12ad90:
    // 0x12ad90: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x12ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x12ad94: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12ad94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ad98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12AD98u;
    {
        const bool branch_taken_0x12ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD98u;
        // 0x12ad9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad98) {
            ctx->pc = 0x12ADC8u;
            goto label_12adc8;
        }
    }
    ctx->pc = 0x12ADA0u;
label_12ada0:
    // 0x12ada0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12ada4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12ada8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12adac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12adb0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12adb0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12adb4: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x12adb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12adb8: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x12adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x12adbc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12adbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12adc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12ADC0u;
    {
        const bool branch_taken_0x12adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC0u;
        // 0x12adc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adc0) {
            ctx->pc = 0x12ADA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ada0;
        }
    }
    ctx->pc = 0x12ADC8u;
label_12adc8:
    // 0x12adc8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12adc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12adcc: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x12adccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x12add0: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12ADD0u;
    {
        const bool branch_taken_0x12add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12add0) {
            ctx->pc = 0x12ADD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ADD0u;
            // 0x12add4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ACE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ace4;
        }
    }
    ctx->pc = 0x12ADD8u;
    // 0x12add8: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD8u;
        // 0x12addc: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12ACE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ace8;
        }
    }
    ctx->pc = 0x12ADE0u;
label_12ade0:
    // 0x12ade0: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12ADE0u;
    {
        const bool branch_taken_0x12ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE0u;
        // 0x12ade4: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ade0) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12ADE8u;
label_12ade8:
    // 0x12ade8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ade8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12adec: 0x0  nop
    ctx->pc = 0x12adecu;
    // NOP
label_12adf0:
    // 0x12adf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12adf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12adf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12adfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12ae00: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ae04: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x12ae04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12ae08: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x12ae0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12ae0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ae10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AE10u;
    {
        const bool branch_taken_0x12ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE10u;
        // 0x12ae14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae10) {
            ctx->pc = 0x12ADF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12adf0;
        }
    }
    ctx->pc = 0x12AE18u;
    // 0x12ae18: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x12AE18u;
    {
        const bool branch_taken_0x12ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE18u;
        // 0x12ae1c: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae18) {
            ctx->pc = 0x12ACE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ace4;
        }
    }
    ctx->pc = 0x12AE20u;
label_12ae20:
    // 0x12ae20: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x12AE20u;
    {
        const bool branch_taken_0x12ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE20u;
        // 0x12ae24: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae20) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AE28u;
label_12ae28:
    // 0x12ae28: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x12AE28u;
    {
        const bool branch_taken_0x12ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE28u;
        // 0x12ae2c: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae28) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AE30u;
label_12ae30:
    // 0x12ae30: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x12ae30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ae34: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x12ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12ae38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AE38u;
    {
        const bool branch_taken_0x12ae38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE38u;
        // 0x12ae3c: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae38) {
            ctx->pc = 0x12AE50u;
            goto label_12ae50;
        }
    }
    ctx->pc = 0x12AE40u;
    // 0x12ae40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12ae40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12ae44:
    // 0x12ae44: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x12AE44u;
    {
        const bool branch_taken_0x12ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE44u;
        // 0x12ae48: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae44) {
            ctx->pc = 0x12ACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd4;
        }
    }
    ctx->pc = 0x12AE4Cu;
    // 0x12ae4c: 0x0  nop
    ctx->pc = 0x12ae4cu;
    // NOP
label_12ae50:
    // 0x12ae50: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x12AE50u;
    {
        const bool branch_taken_0x12ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE50u;
        // 0x12ae54: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae50) {
            ctx->pc = 0x12ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AE58u;
label_12ae58:
    // 0x12ae58: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x12ae58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae5c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12ae60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x12ae60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ae64: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ae68: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12ae68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae6c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x12AE6Cu;
    {
        const bool branch_taken_0x12ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE6Cu;
        // 0x12ae70: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae6c) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12AE74u;
    // 0x12ae74: 0x0  nop
    ctx->pc = 0x12ae74u;
    // NOP
label_12ae78:
    // 0x12ae78: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x12ae78u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_12ae7c:
    // 0x12ae7c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x12ae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x12ae80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AE80u;
    {
        const bool branch_taken_0x12ae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE80u;
        // 0x12ae84: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae80) {
            ctx->pc = 0x12AE98u;
            goto label_12ae98;
        }
    }
    ctx->pc = 0x12AE88u;
    // 0x12ae88: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12ae88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12ae8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12AE8Cu;
    {
        const bool branch_taken_0x12ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE8Cu;
        // 0x12ae90: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae8c) {
            ctx->pc = 0x12AEB8u;
            goto label_12aeb8;
        }
    }
    ctx->pc = 0x12AE94u;
    // 0x12ae94: 0x0  nop
    ctx->pc = 0x12ae94u;
    // NOP
label_12ae98:
    // 0x12ae98: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x12ae9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AE9Cu;
    {
        const bool branch_taken_0x12ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE9Cu;
        // 0x12aea0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae9c) {
            ctx->pc = 0x12AEB0u;
            goto label_12aeb0;
        }
    }
    ctx->pc = 0x12AEA4u;
    // 0x12aea4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12aea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12aea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12AEA8u;
    {
        const bool branch_taken_0x12aea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEA8u;
        // 0x12aeac: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aea8) {
            ctx->pc = 0x12AEB8u;
            goto label_12aeb8;
        }
    }
    ctx->pc = 0x12AEB0u;
label_12aeb0:
    // 0x12aeb0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12aeb4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12aeb8:
    // 0x12aeb8: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x12AEB8u;
    {
        const bool branch_taken_0x12aeb8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEB8u;
        // 0x12aebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aeb8) {
            ctx->pc = 0x12B298u;
            goto label_12b298;
        }
    }
    ctx->pc = 0x12AEC0u;
    // 0x12aec0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12aec4: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x12aec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x12aec8: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x12AEC8u;
    {
        const bool branch_taken_0x12aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEC8u;
        // 0x12aecc: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aec8) {
            ctx->pc = 0x12B298u;
            goto label_12b298;
        }
    }
    ctx->pc = 0x12AED0u;
label_12aed0:
    // 0x12aed0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aed4: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AED4u;
    {
        const bool branch_taken_0x12aed4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AED4u;
        // 0x12aed8: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed4) {
            ctx->pc = 0x12AEE8u;
            goto label_12aee8;
        }
    }
    ctx->pc = 0x12AEDCu;
    // 0x12aedc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12AEDCu;
    {
        const bool branch_taken_0x12aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEDCu;
        // 0x12aee0: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aedc) {
            ctx->pc = 0x12AF00u;
            goto label_12af00;
        }
    }
    ctx->pc = 0x12AEE4u;
    // 0x12aee4: 0x0  nop
    ctx->pc = 0x12aee4u;
    // NOP
label_12aee8:
    // 0x12aee8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AEE8u;
    {
        const bool branch_taken_0x12aee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEE8u;
        // 0x12aeec: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aee8) {
            ctx->pc = 0x12AEF8u;
            goto label_12aef8;
        }
    }
    ctx->pc = 0x12AEF0u;
    // 0x12aef0: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AEF0u;
    {
        const bool branch_taken_0x12aef0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEF0u;
        // 0x12aef4: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aef0) {
            ctx->pc = 0x12AF04u;
            goto label_12af04;
        }
    }
    ctx->pc = 0x12AEF8u;
label_12aef8:
    // 0x12aef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aefc: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x12aefcu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_12af00:
    // 0x12af00: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x12af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_12af04:
    // 0x12af04: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x12af04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af08: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x12af08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12af0c: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x12af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x12af10: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x12af10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12af14: 0xc04beec  jal         func_12FBB0
    ctx->pc = 0x12AF14u;
    SET_GPR_U32(ctx, 31, 0x12AF1Cu);
    ctx->pc = 0x12AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF14u;
    // 0x12af18: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FBB0u, 0x12AF14u, 0x12AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF1Cu;
label_12af1c:
    // 0x12af1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12AF1Cu;
    {
        const bool branch_taken_0x12af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af1c) {
            ctx->pc = 0x12AF58u;
            goto label_12af58;
        }
    }
    ctx->pc = 0x12AF24u;
    // 0x12af24: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x12af24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12af28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af2c: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12AF2Cu;
    SET_GPR_U32(ctx, 31, 0x12AF34u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12AF2Cu, 0x12AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF34u;
label_12af34:
    // 0x12af34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF34u;
    {
        const bool branch_taken_0x12af34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF34u;
        // 0x12af38: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af34) {
            ctx->pc = 0x12AF48u;
            goto label_12af48;
        }
    }
    ctx->pc = 0x12AF3Cu;
    // 0x12af3c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12af40: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x12af40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x12af44: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_12af48:
    // 0x12af48: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12af48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12af4c: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x12AF4Cu;
    {
        const bool branch_taken_0x12af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF4Cu;
        // 0x12af50: 0x2455f6f0  addiu       $s5, $v0, -0x910 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af4c) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12AF54u;
    // 0x12af54: 0x0  nop
    ctx->pc = 0x12af54u;
    // NOP
label_12af58:
    // 0x12af58: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x12af58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12af5c: 0xc04befe  jal         func_12FBF8
    ctx->pc = 0x12AF5Cu;
    SET_GPR_U32(ctx, 31, 0x12AF64u);
    ctx->pc = 0x12FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FBF8u, 0x12AF5Cu, 0x12AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF64u;
label_12af64:
    // 0x12af64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF64u;
    {
        const bool branch_taken_0x12af64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF64u;
        // 0x12af68: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af64) {
            ctx->pc = 0x12AF78u;
            goto label_12af78;
        }
    }
    ctx->pc = 0x12AF6Cu;
    // 0x12af6c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12af6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12af70: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x12AF70u;
    {
        const bool branch_taken_0x12af70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF70u;
        // 0x12af74: 0x2455f6f8  addiu       $s5, $v0, -0x908 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af70) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12AF78u;
label_12af78:
    // 0x12af78: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x12af78u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x12af7c: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x12af80: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x12af80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12af84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12af84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af88: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x12af88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af8c: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x12af8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12af90: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x12af90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x12af94: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12af94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af98: 0xc04b06c  jal         func_12C1B0
    ctx->pc = 0x12AF98u;
    SET_GPR_U32(ctx, 31, 0x12AFA0u);
    ctx->pc = 0x12AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF98u;
    // 0x12af9c: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C1B0u, 0x12AF98u, 0x12AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFA0u;
label_12afa0:
    // 0x12afa0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12afa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afa4: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12afa8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFA8u;
    {
        const bool branch_taken_0x12afa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFA8u;
        // 0x12afac: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afa8) {
            ctx->pc = 0x12AFB8u;
            goto label_12afb8;
        }
    }
    ctx->pc = 0x12AFB0u;
    // 0x12afb0: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12AFB0u;
    {
        const bool branch_taken_0x12afb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFB0u;
        // 0x12afb4: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afb0) {
            ctx->pc = 0x12AFE8u;
            goto label_12afe8;
        }
    }
    ctx->pc = 0x12AFB8u;
label_12afb8:
    // 0x12afb8: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x12afb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12afbc: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x12afbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12afc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AFC0u;
    {
        const bool branch_taken_0x12afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFC0u;
        // 0x12afc4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afc0) {
            ctx->pc = 0x12AFD8u;
            goto label_12afd8;
        }
    }
    ctx->pc = 0x12AFC8u;
    // 0x12afc8: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x12afc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12afcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AFCCu;
    {
        const bool branch_taken_0x12afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afcc) {
            ctx->pc = 0x12AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AFCCu;
            // 0x12afd0: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AFE8u;
            goto label_12afe8;
        }
    }
    ctx->pc = 0x12AFD4u;
    // 0x12afd4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_12afd8:
    // 0x12afd8: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x12afd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x12afdc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x12afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12afe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12afe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afe4: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x12afe4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_12afe8:
    // 0x12afe8: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x12afe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12afec: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x12AFECu;
    {
        const bool branch_taken_0x12afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afec) {
            ctx->pc = 0x12AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AFECu;
            // 0x12aff0: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B038u;
            goto label_12b038;
        }
    }
    ctx->pc = 0x12AFF4u;
    // 0x12aff4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12aff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12aff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12affc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12affcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b000: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x12b000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b004: 0xc04b0dc  jal         func_12C370
    ctx->pc = 0x12B004u;
    SET_GPR_U32(ctx, 31, 0x12B00Cu);
    ctx->pc = 0x12B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B004u;
    // 0x12b008: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C370u, 0x12B004u, 0x12B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B00Cu;
label_12b00c:
    // 0x12b00c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x12b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x12b010: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b014: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x12b014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12b018: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x12b018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b01c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B01Cu;
    {
        const bool branch_taken_0x12b01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B01Cu;
        // 0x12b020: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b01c) {
            ctx->pc = 0x12B030u;
            goto label_12b030;
        }
    }
    ctx->pc = 0x12B024u;
    // 0x12b024: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b028: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B028u;
    {
        const bool branch_taken_0x12b028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B028u;
        // 0x12b02c: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b028) {
            ctx->pc = 0x12B09Cu;
            goto label_12b09c;
        }
    }
    ctx->pc = 0x12B030u;
label_12b030:
    // 0x12b030: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12B030u;
    {
        const bool branch_taken_0x12b030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B030u;
        // 0x12b034: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b030) {
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B038u;
label_12b038:
    // 0x12b038: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B038u;
    {
        const bool branch_taken_0x12b038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B038u;
        // 0x12b03c: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b038) {
            ctx->pc = 0x12B068u;
            goto label_12b068;
        }
    }
    ctx->pc = 0x12B040u;
    // 0x12b040: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x12B040u;
    {
        const bool branch_taken_0x12b040 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x12B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B040u;
        // 0x12b044: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b040) {
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B048u;
    // 0x12b048: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B048u;
    {
        const bool branch_taken_0x12b048 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B048u;
        // 0x12b04c: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b048) {
            ctx->pc = 0x12B05Cu;
            goto label_12b05c;
        }
    }
    ctx->pc = 0x12B050u;
    // 0x12b050: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b054: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12B054u;
    {
        const bool branch_taken_0x12b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B054u;
        // 0x12b058: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b054) {
            ctx->pc = 0x12B09Cu;
            goto label_12b09c;
        }
    }
    ctx->pc = 0x12B05Cu;
label_12b05c:
    // 0x12b05c: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x12b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x12b060: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12B060u;
    {
        const bool branch_taken_0x12b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B060u;
        // 0x12b064: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b060) {
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B068u;
label_12b068:
    // 0x12b068: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x12b068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12b06c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B06Cu;
    {
        const bool branch_taken_0x12b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B06Cu;
        // 0x12b070: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b06c) {
            ctx->pc = 0x12B088u;
            goto label_12b088;
        }
    }
    ctx->pc = 0x12B074u;
    // 0x12b074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B074u;
    {
        const bool branch_taken_0x12b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B074u;
        // 0x12b078: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b074) {
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B07Cu;
    // 0x12b07c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B07Cu;
    {
        const bool branch_taken_0x12b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B07Cu;
        // 0x12b080: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b07c) {
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B084u;
    // 0x12b084: 0x0  nop
    ctx->pc = 0x12b084u;
    // NOP
label_12b088:
    // 0x12b088: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B088u;
    {
        const bool branch_taken_0x12b088 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x12b088) {
            ctx->pc = 0x12B08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B088u;
            // 0x12b08c: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B098u;
            goto label_12b098;
        }
    }
    ctx->pc = 0x12B090u;
    // 0x12b090: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x12b094: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x12b094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_12b098:
    // 0x12b098: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_12b09c:
    // 0x12b09c: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x12B09Cu;
    {
        const bool branch_taken_0x12b09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B09Cu;
        // 0x12b0a0: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b09c) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B0A4u;
    // 0x12b0a4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x12B0A4u;
    {
        const bool branch_taken_0x12b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A4u;
        // 0x12b0a8: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a4) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B0ACu;
    // 0x12b0ac: 0x0  nop
    ctx->pc = 0x12b0acu;
    // NOP
label_12b0b0:
    // 0x12b0b0: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x12b0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x12b0b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B0B4u;
    {
        const bool branch_taken_0x12b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0B4u;
        // 0x12b0b8: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0b4) {
            ctx->pc = 0x12B0D8u;
            goto label_12b0d8;
        }
    }
    ctx->pc = 0x12B0BCu;
    // 0x12b0bc: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x12b0bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0c0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b0c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b0c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b0c8: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12b0cc: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x12B0CCu;
    {
        const bool branch_taken_0x12b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0CCu;
        // 0x12b0d0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0cc) {
            ctx->pc = 0x12AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac10;
        }
    }
    ctx->pc = 0x12B0D4u;
    // 0x12b0d4: 0x0  nop
    ctx->pc = 0x12b0d4u;
    // NOP
label_12b0d8:
    // 0x12b0d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B0D8u;
    {
        const bool branch_taken_0x12b0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0D8u;
        // 0x12b0dc: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0d8) {
            ctx->pc = 0x12B0F8u;
            goto label_12b0f8;
        }
    }
    ctx->pc = 0x12B0E0u;
    // 0x12b0e0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b0e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b0e8: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12b0ec: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x12B0ECu;
    {
        const bool branch_taken_0x12b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ECu;
        // 0x12b0f0: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0ec) {
            ctx->pc = 0x12AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac10;
        }
    }
    ctx->pc = 0x12B0F4u;
    // 0x12b0f4: 0x0  nop
    ctx->pc = 0x12b0f4u;
    // NOP
label_12b0f8:
    // 0x12b0f8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b0fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b100: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12b104: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x12B104u;
    {
        const bool branch_taken_0x12b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B104u;
        // 0x12b108: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b104) {
            ctx->pc = 0x12AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac10;
        }
    }
    ctx->pc = 0x12B10Cu;
    // 0x12b10c: 0x0  nop
    ctx->pc = 0x12b10cu;
    // NOP
label_12b110:
    // 0x12b110: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x12b110u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_12b114:
    // 0x12b114: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x12b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x12b118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B118u;
    {
        const bool branch_taken_0x12b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B118u;
        // 0x12b11c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b118) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B120u;
    // 0x12b120: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b120u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b124: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12B124u;
    {
        const bool branch_taken_0x12b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B124u;
        // 0x12b128: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b124) {
            ctx->pc = 0x12B150u;
            goto label_12b150;
        }
    }
    ctx->pc = 0x12B12Cu;
    // 0x12b12c: 0x0  nop
    ctx->pc = 0x12b12cu;
    // NOP
label_12b130:
    // 0x12b130: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x12b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x12b134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B134u;
    {
        const bool branch_taken_0x12b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B134u;
        // 0x12b138: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b134) {
            ctx->pc = 0x12B148u;
            goto label_12b148;
        }
    }
    ctx->pc = 0x12B13Cu;
    // 0x12b13c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b13cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B140u;
    {
        const bool branch_taken_0x12b140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B140u;
        // 0x12b144: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b140) {
            ctx->pc = 0x12B150u;
            goto label_12b150;
        }
    }
    ctx->pc = 0x12B148u;
label_12b148:
    // 0x12b148: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b14c: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x12b14cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b150:
    // 0x12b150: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x12B150u;
    {
        const bool branch_taken_0x12b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B150u;
        // 0x12b154: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b150) {
            ctx->pc = 0x12B294u;
            goto label_12b294;
        }
    }
    ctx->pc = 0x12B158u;
label_12b158:
    // 0x12b158: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b15c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x12b15cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b160: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x12b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x12b164: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x12b164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b168: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b16c: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x12b16cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x12b170: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x12b170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x12b174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b178: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x12B178u;
    {
        const bool branch_taken_0x12b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B178u;
        // 0x12b17c: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b178) {
            ctx->pc = 0x12B294u;
            goto label_12b294;
        }
    }
    ctx->pc = 0x12B180u;
label_12b180:
    // 0x12b180: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x12b180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b184: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x12b184u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b188: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B188u;
    {
        const bool branch_taken_0x12b188 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B188u;
        // 0x12b18c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b188) {
            ctx->pc = 0x12B198u;
            goto label_12b198;
        }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b194: 0x2455f718  addiu       $s5, $v0, -0x8E8
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
label_12b198:
    // 0x12b198: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x12B198u;
    {
        const bool branch_taken_0x12b198 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B198u;
        // 0x12b19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b198) {
            ctx->pc = 0x12B1D0u;
            goto label_12b1d0;
        }
    }
    ctx->pc = 0x12B1A0u;
    // 0x12b1a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12b1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1a4: 0xc04ba6d  jal         func_12E9B4
    ctx->pc = 0x12B1A4u;
    SET_GPR_U32(ctx, 31, 0x12B1ACu);
    ctx->pc = 0x12B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1A4u;
    // 0x12b1a8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E9B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E9B4u, 0x12B1A4u, 0x12B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1ACu;
label_12b1ac:
    // 0x12b1ac: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x12B1ACu;
    {
        const bool branch_taken_0x12b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ACu;
        // 0x12b1b0: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1ac) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B1B4u;
    // 0x12b1b4: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x12b1b4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x12b1b8: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x12b1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x12b1bc: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x12B1BCu;
    {
        const bool branch_taken_0x12b1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1bc) {
            ctx->pc = 0x12B1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1BCu;
            // 0x12b1c0: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B1C4u;
    // 0x12b1c4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x12B1C4u;
    {
        const bool branch_taken_0x12b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1C4u;
        // 0x12b1c8: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1c4) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B1CCu;
    // 0x12b1cc: 0x0  nop
    ctx->pc = 0x12b1ccu;
    // NOP
label_12b1d0:
    // 0x12b1d0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x12B1D0u;
    SET_GPR_U32(ctx, 31, 0x12B1D8u);
    ctx->pc = 0x12B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1D0u;
    // 0x12b1d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x12B1D0u, 0x12B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1D8u;
label_12b1d8:
    // 0x12b1d8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12B1D8u;
    {
        const bool branch_taken_0x12b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1D8u;
        // 0x12b1dc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1d8) {
            ctx->pc = 0x12B3C8u;
            goto label_12b3c8;
        }
    }
    ctx->pc = 0x12B1E0u;
label_12b1e0:
    // 0x12b1e0: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x12b1e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_12b1e4:
    // 0x12b1e4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x12b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x12b1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B1E8u;
    {
        const bool branch_taken_0x12b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1E8u;
        // 0x12b1ec: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1e8) {
            ctx->pc = 0x12B200u;
            goto label_12b200;
        }
    }
    ctx->pc = 0x12B1F0u;
    // 0x12b1f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b1f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12B1F4u;
    {
        const bool branch_taken_0x12b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1F4u;
        // 0x12b1f8: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1f4) {
            ctx->pc = 0x12B220u;
            goto label_12b220;
        }
    }
    ctx->pc = 0x12B1FCu;
    // 0x12b1fc: 0x0  nop
    ctx->pc = 0x12b1fcu;
    // NOP
label_12b200:
    // 0x12b200: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x12b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x12b204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B204u;
    {
        const bool branch_taken_0x12b204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B204u;
        // 0x12b208: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b204) {
            ctx->pc = 0x12B218u;
            goto label_12b218;
        }
    }
    ctx->pc = 0x12B20Cu;
    // 0x12b20c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B210u;
    {
        const bool branch_taken_0x12b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B210u;
        // 0x12b214: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b210) {
            ctx->pc = 0x12B220u;
            goto label_12b220;
        }
    }
    ctx->pc = 0x12B218u;
label_12b218:
    // 0x12b218: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b21c: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x12b21cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b220:
    // 0x12b220: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12B220u;
    {
        const bool branch_taken_0x12b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B220u;
        // 0x12b224: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b220) {
            ctx->pc = 0x12B294u;
            goto label_12b294;
        }
    }
    ctx->pc = 0x12B228u;
label_12b228:
    // 0x12b228: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b22c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12B22Cu;
    {
        const bool branch_taken_0x12b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B22Cu;
        // 0x12b230: 0x2442f720  addiu       $v0, $v0, -0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b22c) {
            ctx->pc = 0x12B240u;
            goto label_12b240;
        }
    }
    ctx->pc = 0x12B234u;
    // 0x12b234: 0x0  nop
    ctx->pc = 0x12b234u;
    // NOP
label_12b238:
    // 0x12b238: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b23c: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x12b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_12b240:
    // 0x12b240: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x12b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x12b244: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x12b244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x12b248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B248u;
    {
        const bool branch_taken_0x12b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B248u;
        // 0x12b24c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b248) {
            ctx->pc = 0x12B260u;
            goto label_12b260;
        }
    }
    ctx->pc = 0x12B250u;
    // 0x12b250: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b254: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12B254u;
    {
        const bool branch_taken_0x12b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B254u;
        // 0x12b258: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b254) {
            ctx->pc = 0x12B280u;
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B25Cu;
    // 0x12b25c: 0x0  nop
    ctx->pc = 0x12b25cu;
    // NOP
label_12b260:
    // 0x12b260: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x12b260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x12b264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B264u;
    {
        const bool branch_taken_0x12b264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B264u;
        // 0x12b268: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b264) {
            ctx->pc = 0x12B278u;
            goto label_12b278;
        }
    }
    ctx->pc = 0x12B26Cu;
    // 0x12b26c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B270u;
    {
        const bool branch_taken_0x12b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B270u;
        // 0x12b274: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b270) {
            ctx->pc = 0x12B280u;
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B278u;
label_12b278:
    // 0x12b278: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x12b278u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x12b27c: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x12b27cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b280:
    // 0x12b280: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B284u;
    {
        const bool branch_taken_0x12b284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B284u;
        // 0x12b288: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b284) {
            ctx->pc = 0x12B294u;
            goto label_12b294;
        }
    }
    ctx->pc = 0x12B28Cu;
    // 0x12b28c: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x12b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x12b290: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x12b290u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_12b294:
    // 0x12b294: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12b294u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12b298:
    // 0x12b298: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B298u;
    {
        const bool branch_taken_0x12b298 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B298u;
        // 0x12b29c: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b298) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B2A0u;
    // 0x12b2a0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x12b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x12b2a4: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x12b2a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_12b2a8:
    // 0x12b2a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B2A8u;
    {
        const bool branch_taken_0x12b2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2A8u;
        // 0x12b2ac: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2a8) {
            ctx->pc = 0x12B2BCu;
            goto label_12b2bc;
        }
    }
    ctx->pc = 0x12B2B0u;
    // 0x12b2b0: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x12b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12b2b4: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x12B2B4u;
    {
        const bool branch_taken_0x12b2b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B4u;
        // 0x12b2b8: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2b4) {
            ctx->pc = 0x12B3ACu;
            goto label_12b3ac;
        }
    }
    ctx->pc = 0x12B2BCu;
label_12b2bc:
    // 0x12b2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b2c0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x12B2C0u;
    {
        const bool branch_taken_0x12b2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2C0u;
        // 0x12b2c4: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2c0) {
            ctx->pc = 0x12B35Cu;
            goto label_12b35c;
        }
    }
    ctx->pc = 0x12B2C8u;
    // 0x12b2c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B2C8u;
    {
        const bool branch_taken_0x12b2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2C8u;
        // 0x12b2cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2c8) {
            ctx->pc = 0x12B2F0u;
            goto label_12b2f0;
        }
    }
    ctx->pc = 0x12B2D0u;
    // 0x12b2d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b2d4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12B2D4u;
    {
        const bool branch_taken_0x12b2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2d4) {
            ctx->pc = 0x12B378u;
            goto label_12b378;
        }
    }
    ctx->pc = 0x12B2DCu;
    // 0x12b2dc: 0x2455f738  addiu       $s5, $v0, -0x8C8
    ctx->pc = 0x12b2dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
    // 0x12b2e0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x12B2E0u;
    SET_GPR_U32(ctx, 31, 0x12B2E8u);
    ctx->pc = 0x12B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2E0u;
    // 0x12b2e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x12B2E0u, 0x12B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2E8u;
label_12b2e8:
    // 0x12b2e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12B2E8u;
    {
        const bool branch_taken_0x12b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2E8u;
        // 0x12b2ec: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2e8) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B2F0u;
label_12b2f0:
    // 0x12b2f0: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x12b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x12b2f4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x12b2f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x12b2f8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12b2f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12b2fc: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12b300: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12b300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b304: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B304u;
    {
        const bool branch_taken_0x12b304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B304u;
        // 0x12b308: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b304) {
            ctx->pc = 0x12B2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b2f0;
        }
    }
    ctx->pc = 0x12B30Cu;
    // 0x12b30c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b310: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x12B310u;
    {
        const bool branch_taken_0x12b310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B310u;
        // 0x12b314: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b310) {
            ctx->pc = 0x12B3A8u;
            goto label_12b3a8;
        }
    }
    ctx->pc = 0x12B318u;
    // 0x12b318: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12B318u;
    {
        const bool branch_taken_0x12b318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b318) {
            ctx->pc = 0x12B31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B318u;
            // 0x12b31c: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B3ACu;
            goto label_12b3ac;
        }
    }
    ctx->pc = 0x12B320u;
    // 0x12b320: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12b320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12b324: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12B324u;
    {
        const bool branch_taken_0x12b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B324u;
        // 0x12b328: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b324) {
            ctx->pc = 0x12B3A8u;
            goto label_12b3a8;
        }
    }
    ctx->pc = 0x12B32Cu;
    // 0x12b32c: 0x0  nop
    ctx->pc = 0x12b32cu;
    // NOP
label_12b330:
    // 0x12b330: 0xc048492  jal         func_121248
    ctx->pc = 0x12B330u;
    SET_GPR_U32(ctx, 31, 0x12B338u);
    ctx->pc = 0x12B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B330u;
    // 0x12b334: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121248u, 0x12B330u, 0x12B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B338u;
label_12b338:
    // 0x12b338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b33c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12b33cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12b340: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12b340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12b344: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b348: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b34c: 0xc048332  jal         func_120CC8
    ctx->pc = 0x12B34Cu;
    SET_GPR_U32(ctx, 31, 0x12B354u);
    ctx->pc = 0x12B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B34Cu;
    // 0x12b350: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x12B34Cu, 0x12B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B354u;
label_12b354:
    // 0x12b354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b358: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x12b358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_12b35c:
    // 0x12b35c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12B35Cu;
    {
        const bool branch_taken_0x12b35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B35Cu;
        // 0x12b360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b35c) {
            ctx->pc = 0x12B330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b330;
        }
    }
    ctx->pc = 0x12B364u;
    // 0x12b364: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x12b364u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x12b368: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12b36c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b370: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12B370u;
    {
        const bool branch_taken_0x12b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B370u;
        // 0x12b374: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b370) {
            ctx->pc = 0x12B3A8u;
            goto label_12b3a8;
        }
    }
    ctx->pc = 0x12B378u;
label_12b378:
    // 0x12b378: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12b37c: 0x0  nop
    ctx->pc = 0x12b37cu;
    // NOP
label_12b380:
    // 0x12b380: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x12b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12b384: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x12b388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12b38c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12b38cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12b390: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x12b394: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b398: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x12b398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x12b39c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x12b39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b3a0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12B3A0u;
    {
        const bool branch_taken_0x12b3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3a0) {
            ctx->pc = 0x12B380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b380;
        }
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x12b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_12b3ac:
    // 0x12b3ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B3B4u;
    // 0x12b3b4: 0x0  nop
    ctx->pc = 0x12b3b4u;
    // NOP
label_12b3b8:
    // 0x12b3b8: 0x12200363  beqz        $s1, . + 4 + (0x363 << 2)
    ctx->pc = 0x12B3B8u;
    {
        const bool branch_taken_0x12b3b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3B8u;
        // 0x12b3bc: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3b8) {
            ctx->pc = 0x12C148u;
            goto label_12c148;
        }
    }
    ctx->pc = 0x12B3C0u;
    // 0x12b3c0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12b3c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b3c4: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x12b3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_12b3c8:
    // 0x12b3c8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12b3cc:
    // 0x12b3cc: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x12b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12b3d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12b3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3d8: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x12b3d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12b3dc: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x12b3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12b3e0: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12b3e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12b3e4: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x12b3e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x12b3e8: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x12b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
    // 0x12b3ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B3ECu;
    {
        const bool branch_taken_0x12b3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ECu;
        // 0x12b3f0: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ec) {
            ctx->pc = 0x12B400u;
            goto label_12b400;
        }
    }
    ctx->pc = 0x12B3F4u;
    // 0x12b3f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b3f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12B3F8u;
    {
        const bool branch_taken_0x12b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3F8u;
        // 0x12b3fc: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3f8) {
            ctx->pc = 0x12B410u;
            goto label_12b410;
        }
    }
    ctx->pc = 0x12B400u;
label_12b400:
    // 0x12b400: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x12b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12b404: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x12b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x12b408: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b40c: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x12b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
label_12b410:
    // 0x12b410: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x12b410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
    // 0x12b414: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x12B414u;
    {
        const bool branch_taken_0x12b414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B414u;
        // 0x12b418: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b414) {
            ctx->pc = 0x12B500u;
            goto label_12b500;
        }
    }
    ctx->pc = 0x12B41Cu;
    // 0x12b41c: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x12b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12b420: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12b424: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12b428: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12B428u;
    {
        const bool branch_taken_0x12b428 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b428) {
            ctx->pc = 0x12B500u;
            goto label_12b500;
        }
    }
    ctx->pc = 0x12B430u;
    // 0x12b430: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12B430u;
    {
        const bool branch_taken_0x12b430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B430u;
        // 0x12b434: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b430) {
            ctx->pc = 0x12B4B0u;
            goto label_12b4b0;
        }
    }
    ctx->pc = 0x12B438u;
    // 0x12b438: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b43c: 0x24f4f6d0  addiu       $s4, $a3, -0x930
    ctx->pc = 0x12b43cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964944));
    // 0x12b440: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x12b440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x12b444: 0x0  nop
    ctx->pc = 0x12b444u;
    // NOP
label_12b448:
    // 0x12b448: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x12b448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x12b44c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b450: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b454: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b45c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b460: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b460u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b464: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b468: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B468u;
    {
        const bool branch_taken_0x12b468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B468u;
        // 0x12b46c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b468) {
            ctx->pc = 0x12B498u;
            goto label_12b498;
        }
    }
    ctx->pc = 0x12B470u;
    // 0x12b470: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b474: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b478: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x12b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x12b47c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B47Cu;
    SET_GPR_U32(ctx, 31, 0x12B484u);
    ctx->pc = 0x12B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B47Cu;
    // 0x12b480: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B47Cu, 0x12B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B484u;
label_12b484:
    // 0x12b484: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x12b484u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12b488: 0x14400337  bnez        $v0, . + 4 + (0x337 << 2)
    ctx->pc = 0x12B488u;
    {
        const bool branch_taken_0x12b488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B488u;
        // 0x12b48c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b488) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12B490u;
    // 0x12b490: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b494: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12b494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12b498:
    // 0x12b498: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b49c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b4a0: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12B4A0u;
    {
        const bool branch_taken_0x12b4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b4a0) {
            ctx->pc = 0x12B4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B4A0u;
            // 0x12b4a4: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b448;
        }
    }
    ctx->pc = 0x12B4A8u;
    // 0x12b4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B4A8u;
    {
        const bool branch_taken_0x12b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A8u;
        // 0x12b4ac: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4a8) {
            ctx->pc = 0x12B4B4u;
            goto label_12b4b4;
        }
    }
    ctx->pc = 0x12B4B0u;
label_12b4b0:
    // 0x12b4b0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b4b4:
    // 0x12b4b4: 0x24e2f6d0  addiu       $v0, $a3, -0x930
    ctx->pc = 0x12b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964944));
    // 0x12b4b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b4bc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b4c0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b4c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b4c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b4cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12b4d0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b4d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b4d4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b4d8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B4D8u;
    {
        const bool branch_taken_0x12b4d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D8u;
        // 0x12b4dc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d8) {
            ctx->pc = 0x12B4FCu;
            goto label_12b4fc;
        }
    }
    ctx->pc = 0x12B4E0u;
    // 0x12b4e0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b4e4: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B4E4u;
    SET_GPR_U32(ctx, 31, 0x12B4ECu);
    ctx->pc = 0x12B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4E4u;
    // 0x12b4e8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B4E4u, 0x12B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4ECu;
label_12b4ec:
    // 0x12b4ec: 0x1440031f  bnez        $v0, . + 4 + (0x31F << 2)
    ctx->pc = 0x12B4ECu;
    {
        const bool branch_taken_0x12b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4ECu;
        // 0x12b4f0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4ec) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B4F4u;
    // 0x12b4f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b4f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12b4f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b4fc:
    // 0x12b4fc: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12b4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_12b500:
    // 0x12b500: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12B500u;
    {
        const bool branch_taken_0x12b500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B500u;
        // 0x12b504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b500) {
            ctx->pc = 0x12B558u;
            goto label_12b558;
        }
    }
    ctx->pc = 0x12B508u;
    // 0x12b508: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x12b508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x12b50c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12b510: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x12b510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x12b514: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b518: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b51c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b528: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b528u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b52c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b530: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12B530u;
    {
        const bool branch_taken_0x12b530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B530u;
        // 0x12b534: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b530) {
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12B538u;
    // 0x12b538: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b53c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B53Cu;
    SET_GPR_U32(ctx, 31, 0x12B544u);
    ctx->pc = 0x12B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B53Cu;
    // 0x12b540: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B53Cu, 0x12B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B544u;
label_12b544:
    // 0x12b544: 0x14400309  bnez        $v0, . + 4 + (0x309 << 2)
    ctx->pc = 0x12B544u;
    {
        const bool branch_taken_0x12b544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B544u;
        // 0x12b548: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b544) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B54Cu;
    // 0x12b54c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b550: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12B550u;
    {
        const bool branch_taken_0x12b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B550u;
        // 0x12b554: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b550) {
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12B558u;
label_12b558:
    // 0x12b558: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x12b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x12b55c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B55Cu;
    {
        const bool branch_taken_0x12b55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B55Cu;
        // 0x12b560: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b55c) {
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12B564u;
    // 0x12b564: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b568: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x12b568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
    // 0x12b56c: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x12b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12b570: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x12b570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
    // 0x12b574: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x12b574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x12b578: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x12b578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x12b57c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b57cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b580: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b58c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x12b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12b590: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b590u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b594: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b598: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B598u;
    {
        const bool branch_taken_0x12b598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B598u;
        // 0x12b59c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b598) {
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12B5A0u;
    // 0x12b5a0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b5a4: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B5A4u;
    SET_GPR_U32(ctx, 31, 0x12B5ACu);
    ctx->pc = 0x12B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A4u;
    // 0x12b5a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B5A4u, 0x12B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5ACu;
label_12b5ac:
    // 0x12b5ac: 0x144002ef  bnez        $v0, . + 4 + (0x2EF << 2)
    ctx->pc = 0x12B5ACu;
    {
        const bool branch_taken_0x12b5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5ACu;
        // 0x12b5b0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5ac) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B5B4u;
    // 0x12b5b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b5b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12b5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12b5bc:
    // 0x12b5bc: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12b5c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12b5c4: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12B5C4u;
    {
        const bool branch_taken_0x12b5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5C4u;
        // 0x12b5c8: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5c4) {
            ctx->pc = 0x12B6B0u;
            goto label_12b6b0;
        }
    }
    ctx->pc = 0x12B5CCu;
    // 0x12b5cc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12b5d0: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12b5d4: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x12b5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12b5d8: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12B5D8u;
    {
        const bool branch_taken_0x12b5d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5D8u;
        // 0x12b5dc: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5d8) {
            ctx->pc = 0x12B6B0u;
            goto label_12b6b0;
        }
    }
    ctx->pc = 0x12B5E0u;
    // 0x12b5e0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b5e4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12B5E4u;
    {
        const bool branch_taken_0x12b5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5E4u;
        // 0x12b5e8: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5e4) {
            ctx->pc = 0x12B660u;
            goto label_12b660;
        }
    }
    ctx->pc = 0x12B5ECu;
    // 0x12b5ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12b5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b5f0: 0x24f4f6e0  addiu       $s4, $a3, -0x920
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b5f4: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x12b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_12b5f8:
    // 0x12b5f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x12b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x12b5fc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b600: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b60c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b610: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b610u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b614: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b618: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B618u;
    {
        const bool branch_taken_0x12b618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B618u;
        // 0x12b61c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b618) {
            ctx->pc = 0x12B648u;
            goto label_12b648;
        }
    }
    ctx->pc = 0x12B620u;
    // 0x12b620: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b624: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b628: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x12b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x12b62c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B62Cu;
    SET_GPR_U32(ctx, 31, 0x12B634u);
    ctx->pc = 0x12B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B62Cu;
    // 0x12b630: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B62Cu, 0x12B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B634u;
label_12b634:
    // 0x12b634: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x12b634u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12b638: 0x144002cb  bnez        $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x12B638u;
    {
        const bool branch_taken_0x12b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B638u;
        // 0x12b63c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b638) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12B640u;
    // 0x12b640: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b644: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12b644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b648:
    // 0x12b648: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b64c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b650: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12B650u;
    {
        const bool branch_taken_0x12b650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b650) {
            ctx->pc = 0x12B654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B650u;
            // 0x12b654: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b5f8;
        }
    }
    ctx->pc = 0x12B658u;
    // 0x12b658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B658u;
    {
        const bool branch_taken_0x12b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B658u;
        // 0x12b65c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b658) {
            ctx->pc = 0x12B664u;
            goto label_12b664;
        }
    }
    ctx->pc = 0x12B660u;
label_12b660:
    // 0x12b660: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b664:
    // 0x12b664: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b668: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b66c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b670: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b67c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12b680: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b680u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b684: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b688: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B688u;
    {
        const bool branch_taken_0x12b688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B688u;
        // 0x12b68c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b688) {
            ctx->pc = 0x12B6ACu;
            goto label_12b6ac;
        }
    }
    ctx->pc = 0x12B690u;
    // 0x12b690: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b694: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B694u;
    SET_GPR_U32(ctx, 31, 0x12B69Cu);
    ctx->pc = 0x12B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B694u;
    // 0x12b698: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B694u, 0x12B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B69Cu;
label_12b69c:
    // 0x12b69c: 0x144002b3  bnez        $v0, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x12B69Cu;
    {
        const bool branch_taken_0x12b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B69Cu;
        // 0x12b6a0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b69c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B6A4u;
    // 0x12b6a4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b6a8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12b6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12b6ac:
    // 0x12b6ac: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x12b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_12b6b0:
    // 0x12b6b0: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x12b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x12b6b4: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x12B6B4u;
    {
        const bool branch_taken_0x12b6b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6B4u;
        // 0x12b6b8: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6b4) {
            ctx->pc = 0x12B790u;
            goto label_12b790;
        }
    }
    ctx->pc = 0x12B6BCu;
    // 0x12b6bc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b6c0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12B6C0u;
    {
        const bool branch_taken_0x12b6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6C0u;
        // 0x12b6c4: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6c0) {
            ctx->pc = 0x12B740u;
            goto label_12b740;
        }
    }
    ctx->pc = 0x12B6C8u;
    // 0x12b6c8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b6cc: 0x24f4f6e0  addiu       $s4, $a3, -0x920
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b6d0: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x12b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x12b6d4: 0x0  nop
    ctx->pc = 0x12b6d4u;
    // NOP
label_12b6d8:
    // 0x12b6d8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x12b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x12b6dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b6e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b6e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b6ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b6f0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b6f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b6f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b6f8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6F8u;
        // 0x12b6fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B728u;
            goto label_12b728;
        }
    }
    ctx->pc = 0x12B700u;
    // 0x12b700: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b704: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b708: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x12b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x12b70c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B70Cu;
    SET_GPR_U32(ctx, 31, 0x12B714u);
    ctx->pc = 0x12B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B70Cu;
    // 0x12b710: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B70Cu, 0x12B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B714u;
label_12b714:
    // 0x12b714: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x12b714u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12b718: 0x14400293  bnez        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x12B718u;
    {
        const bool branch_taken_0x12b718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B718u;
        // 0x12b71c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b718) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12B720u;
    // 0x12b720: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12b720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b724: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12b724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b728:
    // 0x12b728: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b72c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b730: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12B730u;
    {
        const bool branch_taken_0x12b730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b730) {
            ctx->pc = 0x12B734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B730u;
            // 0x12b734: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b6d8;
        }
    }
    ctx->pc = 0x12B738u;
    // 0x12b738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B738u;
    {
        const bool branch_taken_0x12b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B738u;
        // 0x12b73c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b738) {
            ctx->pc = 0x12B744u;
            goto label_12b744;
        }
    }
    ctx->pc = 0x12B740u;
label_12b740:
    // 0x12b740: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b744:
    // 0x12b744: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b748: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b74c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b750: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b75c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12b760: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b760u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b764: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b768: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B768u;
    {
        const bool branch_taken_0x12b768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B768u;
        // 0x12b76c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b768) {
            ctx->pc = 0x12B78Cu;
            goto label_12b78c;
        }
    }
    ctx->pc = 0x12B770u;
    // 0x12b770: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b774: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B774u;
    SET_GPR_U32(ctx, 31, 0x12B77Cu);
    ctx->pc = 0x12B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B774u;
    // 0x12b778: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B774u, 0x12B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B77Cu;
label_12b77c:
    // 0x12b77c: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x12B77Cu;
    {
        const bool branch_taken_0x12b77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B77Cu;
        // 0x12b780: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b77c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B784u;
    // 0x12b784: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12b784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b788: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12b78c:
    // 0x12b78c: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x12b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
label_12b790:
    // 0x12b790: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B790u;
    {
        const bool branch_taken_0x12b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b790) {
            ctx->pc = 0x12B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B790u;
            // 0x12b794: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B7B8u;
            goto label_12b7b8;
        }
    }
    ctx->pc = 0x12B798u;
    // 0x12b798: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x12b798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
    // 0x12b79c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x12b7a0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b7a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b7a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b7b0: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x12B7B0u;
    {
        const bool branch_taken_0x12b7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B0u;
        // 0x12b7b4: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b0) {
            ctx->pc = 0x12BFF0u;
            goto label_12bff0;
        }
    }
    ctx->pc = 0x12B7B8u;
label_12b7b8:
    // 0x12b7b8: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x12B7B8u;
    {
        const bool branch_taken_0x12b7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7B8u;
        // 0x12b7bc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b8) {
            ctx->pc = 0x12BDC0u;
            goto label_12bdc0;
        }
    }
    ctx->pc = 0x12B7C0u;
    // 0x12b7c0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x12b7c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12b7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7c8: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12B7C8u;
    SET_GPR_U32(ctx, 31, 0x12B7D0u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12B7C8u, 0x12B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7D0u;
label_12b7d0:
    // 0x12b7d0: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x12B7D0u;
    {
        const bool branch_taken_0x12b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D0u;
        // 0x12b7d4: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d0) {
            ctx->pc = 0x12B950u;
            goto label_12b950;
        }
    }
    ctx->pc = 0x12B7D8u;
    // 0x12b7d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7dc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b7e0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x12b7e4: 0x2442f758  addiu       $v0, $v0, -0x8A8
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965080));
    // 0x12b7e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b7ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b7f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b7f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b7fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b800: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b800u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b804: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b808: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B808u;
        // 0x12b80c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B82Cu;
            goto label_12b82c;
        }
    }
    ctx->pc = 0x12B810u;
    // 0x12b810: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b814: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B814u;
    SET_GPR_U32(ctx, 31, 0x12B81Cu);
    ctx->pc = 0x12B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B814u;
    // 0x12b818: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B814u, 0x12B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B81Cu;
label_12b81c:
    // 0x12b81c: 0x14400253  bnez        $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x12B81Cu;
    {
        const bool branch_taken_0x12b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B81Cu;
        // 0x12b820: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b81c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B824u;
    // 0x12b824: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b828: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12b828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12b82c:
    // 0x12b82c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12b830: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b834: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12b834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b838: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B838u;
    {
        const bool branch_taken_0x12b838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b838) {
            ctx->pc = 0x12B83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B838u;
            // 0x12b83c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B850u;
            goto label_12b850;
        }
    }
    ctx->pc = 0x12B840u;
    // 0x12b840: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b844: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x12B844u;
    {
        const bool branch_taken_0x12b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B844u;
        // 0x12b848: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b844) {
            ctx->pc = 0x12C024u;
            goto label_12c024;
        }
    }
    ctx->pc = 0x12B84Cu;
    // 0x12b84c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b850:
    // 0x12b850: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b854: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12b858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b85c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b860: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x12b860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x12b864: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b86c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b86cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b870: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b874: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B874u;
    {
        const bool branch_taken_0x12b874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B874u;
        // 0x12b878: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b874) {
            ctx->pc = 0x12B898u;
            goto label_12b898;
        }
    }
    ctx->pc = 0x12B87Cu;
    // 0x12b87c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b880: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B880u;
    SET_GPR_U32(ctx, 31, 0x12B888u);
    ctx->pc = 0x12B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B880u;
    // 0x12b884: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B880u, 0x12B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B888u;
label_12b888:
    // 0x12b888: 0x14400238  bnez        $v0, . + 4 + (0x238 << 2)
    ctx->pc = 0x12B888u;
    {
        const bool branch_taken_0x12b888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B888u;
        // 0x12b88c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b888) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B890u;
    // 0x12b890: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12b890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b894: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12b894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b898:
    // 0x12b898: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b89c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12b89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b8a0: 0x1a0001e0  blez        $s0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x12B8A0u;
    {
        const bool branch_taken_0x12b8a0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8a0) {
            ctx->pc = 0x12C024u;
            goto label_12c024;
        }
    }
    ctx->pc = 0x12B8A8u;
    // 0x12b8a8: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b8ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B8ACu;
    {
        const bool branch_taken_0x12b8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8ACu;
        // 0x12b8b0: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8ac) {
            ctx->pc = 0x12B920u;
            goto label_12b920;
        }
    }
    ctx->pc = 0x12B8B4u;
    // 0x12b8b4: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12b8b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b8b8: 0x24f1f6e0  addiu       $s1, $a3, -0x920
    ctx->pc = 0x12b8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b8bc: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x12b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_12b8c0:
    // 0x12b8c0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x12b8c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b8c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b8cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b8d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b8d8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b8d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b8dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b8e0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B8E0u;
    {
        const bool branch_taken_0x12b8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8E0u;
        // 0x12b8e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8e0) {
            ctx->pc = 0x12B908u;
            goto label_12b908;
        }
    }
    ctx->pc = 0x12B8E8u;
    // 0x12b8e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b8ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b8f0: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B8F0u;
    SET_GPR_U32(ctx, 31, 0x12B8F8u);
    ctx->pc = 0x12B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8F0u;
    // 0x12b8f4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B8F0u, 0x12B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8F8u;
label_12b8f8:
    // 0x12b8f8: 0x1440021b  bnez        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x12B8F8u;
    {
        const bool branch_taken_0x12b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8F8u;
        // 0x12b8fc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8f8) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12B900u;
    // 0x12b900: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b904: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12b908:
    // 0x12b908: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12b90c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12b90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b910: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B910u;
    {
        const bool branch_taken_0x12b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b910) {
            ctx->pc = 0x12B914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B910u;
            // 0x12b914: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b8c0;
        }
    }
    ctx->pc = 0x12B918u;
    // 0x12b918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B918u;
    {
        const bool branch_taken_0x12b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B918u;
        // 0x12b91c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b918) {
            ctx->pc = 0x12B924u;
            goto label_12b924;
        }
    }
    ctx->pc = 0x12B920u;
label_12b920:
    // 0x12b920: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b924:
    // 0x12b924: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12b928: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b92c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b930: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b93c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12b940: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b940u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b944: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b948: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x12B948u;
    {
        const bool branch_taken_0x12b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B948u;
        // 0x12b94c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b948) {
            ctx->pc = 0x12BFFCu;
            goto label_12bffc;
        }
    }
    ctx->pc = 0x12B950u;
label_12b950:
    // 0x12b950: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x12B950u;
    {
        const bool branch_taken_0x12b950 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B950u;
        // 0x12b954: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b950) {
            ctx->pc = 0x12BB38u;
            goto label_12bb38;
        }
    }
    ctx->pc = 0x12B958u;
    // 0x12b958: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b95c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12b960: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x12b964: 0x2442f758  addiu       $v0, $v0, -0x8A8
    ctx->pc = 0x12b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965080));
    // 0x12b968: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12b968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12b96c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b970: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b974: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b97c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b980: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12b980u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b984: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12b984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12b988: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B988u;
    {
        const bool branch_taken_0x12b988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B988u;
        // 0x12b98c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b988) {
            ctx->pc = 0x12B9ACu;
            goto label_12b9ac;
        }
    }
    ctx->pc = 0x12B990u;
    // 0x12b990: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b994: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B994u;
    SET_GPR_U32(ctx, 31, 0x12B99Cu);
    ctx->pc = 0x12B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B994u;
    // 0x12b998: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B994u, 0x12B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B99Cu;
label_12b99c:
    // 0x12b99c: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x12B99Cu;
    {
        const bool branch_taken_0x12b99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B99Cu;
        // 0x12b9a0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b99c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12B9A4u;
    // 0x12b9a4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12b9a8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12b9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12b9ac:
    // 0x12b9ac: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12b9b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B9B0u;
    {
        const bool branch_taken_0x12b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b9b0) {
            ctx->pc = 0x12B9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B9B0u;
            // 0x12b9b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B9C8u;
            goto label_12b9c8;
        }
    }
    ctx->pc = 0x12B9B8u;
    // 0x12b9b8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12b9bc: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x12B9BCu;
    {
        const bool branch_taken_0x12b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9BCu;
        // 0x12b9c0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9bc) {
            ctx->pc = 0x12C024u;
            goto label_12c024;
        }
    }
    ctx->pc = 0x12B9C4u;
    // 0x12b9c4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12b9c8:
    // 0x12b9c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12b9cc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12b9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b9d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x12b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x12b9dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12b9e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b9e4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12b9e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12b9e8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12b9ec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B9ECu;
    {
        const bool branch_taken_0x12b9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9ECu;
        // 0x12b9f0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9ec) {
            ctx->pc = 0x12BA10u;
            goto label_12ba10;
        }
    }
    ctx->pc = 0x12B9F4u;
    // 0x12b9f4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12b9f8: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12B9F8u;
    SET_GPR_U32(ctx, 31, 0x12BA00u);
    ctx->pc = 0x12B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B9F8u;
    // 0x12b9fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12B9F8u, 0x12BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA00u;
label_12ba00:
    // 0x12ba00: 0x144001da  bnez        $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x12BA00u;
    {
        const bool branch_taken_0x12ba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA00u;
        // 0x12ba04: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba00) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BA08u;
    // 0x12ba08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12ba08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ba0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12ba0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12ba10:
    // 0x12ba10: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12ba14: 0x28023  negu        $s0, $v0
    ctx->pc = 0x12ba14u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12ba18: 0x5a000033  blezl       $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12BA18u;
    {
        const bool branch_taken_0x12ba18 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x12ba18) {
            ctx->pc = 0x12BA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA18u;
            // 0x12ba1c: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BAE8u;
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BA20u;
    // 0x12ba20: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12ba20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ba24: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12BA24u;
    {
        const bool branch_taken_0x12ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA24u;
        // 0x12ba28: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba24) {
            ctx->pc = 0x12BA98u;
            goto label_12ba98;
        }
    }
    ctx->pc = 0x12BA2Cu;
    // 0x12ba2c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12ba2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ba30: 0x24f1f6e0  addiu       $s1, $a3, -0x920
    ctx->pc = 0x12ba30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12ba34: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x12ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_12ba38:
    // 0x12ba38: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x12ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x12ba3c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12ba3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12ba40: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ba44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ba4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12ba50: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ba50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ba54: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ba58: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BA58u;
    {
        const bool branch_taken_0x12ba58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA58u;
        // 0x12ba5c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba58) {
            ctx->pc = 0x12BA80u;
            goto label_12ba80;
        }
    }
    ctx->pc = 0x12BA60u;
    // 0x12ba60: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ba64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ba68: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BA68u;
    SET_GPR_U32(ctx, 31, 0x12BA70u);
    ctx->pc = 0x12BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA68u;
    // 0x12ba6c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BA68u, 0x12BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA70u;
label_12ba70:
    // 0x12ba70: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x12BA70u;
    {
        const bool branch_taken_0x12ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA70u;
        // 0x12ba74: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba70) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12BA78u;
    // 0x12ba78: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ba7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12ba7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12ba80:
    // 0x12ba80: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12ba84: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12ba84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ba88: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BA88u;
    {
        const bool branch_taken_0x12ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba88) {
            ctx->pc = 0x12BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BA88u;
            // 0x12ba8c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ba38;
        }
    }
    ctx->pc = 0x12BA90u;
    // 0x12ba90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12BA90u;
    {
        const bool branch_taken_0x12ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA90u;
        // 0x12ba94: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ba90) {
            ctx->pc = 0x12BA9Cu;
            goto label_12ba9c;
        }
    }
    ctx->pc = 0x12BA98u;
label_12ba98:
    // 0x12ba98: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12ba9c:
    // 0x12ba9c: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12baa0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12baa4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12baa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12baa8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12baac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bab4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12bab8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bab8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12babc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12babcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bac0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BAC0u;
    {
        const bool branch_taken_0x12bac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAC0u;
        // 0x12bac4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bac0) {
            ctx->pc = 0x12BAE4u;
            goto label_12bae4;
        }
    }
    ctx->pc = 0x12BAC8u;
    // 0x12bac8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bacc: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BACCu;
    SET_GPR_U32(ctx, 31, 0x12BAD4u);
    ctx->pc = 0x12BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BACCu;
    // 0x12bad0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BACCu, 0x12BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAD4u;
label_12bad4:
    // 0x12bad4: 0x144001a5  bnez        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x12BAD4u;
    {
        const bool branch_taken_0x12bad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAD4u;
        // 0x12bad8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bad4) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BADCu;
    // 0x12badc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bae0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12bae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bae4:
    // 0x12bae4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_12bae8:
    // 0x12bae8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12baec: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12baecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12baf0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12baf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12baf4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12baf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bafc: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bb04: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x12bb04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bb08: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12bb0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12bb10: 0x14a00143  bnez        $a1, . + 4 + (0x143 << 2)
    ctx->pc = 0x12BB10u;
    {
        const bool branch_taken_0x12bb10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB10u;
        // 0x12bb14: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb10) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12BB18u;
    // 0x12bb18: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bb1c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BB1Cu;
    SET_GPR_U32(ctx, 31, 0x12BB24u);
    ctx->pc = 0x12BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB1Cu;
    // 0x12bb20: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BB1Cu, 0x12BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB24u;
label_12bb24:
    // 0x12bb24: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x12BB24u;
    {
        const bool branch_taken_0x12bb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB24u;
        // 0x12bb28: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb24) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BB2Cu;
    // 0x12bb2c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bb30: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x12BB30u;
    {
        const bool branch_taken_0x12bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB30u;
        // 0x12bb34: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb30) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12BB38u;
label_12bb38:
    // 0x12bb38: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x12bb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12bb3c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x12BB3Cu;
    {
        const bool branch_taken_0x12bb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB3Cu;
        // 0x12bb40: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb3c) {
            ctx->pc = 0x12BCB0u;
            goto label_12bcb0;
        }
    }
    ctx->pc = 0x12BB44u;
    // 0x12bb44: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bb48: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12bb4c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bb50: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bb54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb58: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bb5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bb60: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bb60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bb64: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12bb68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12bb6c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BB6Cu;
    {
        const bool branch_taken_0x12bb6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB6Cu;
        // 0x12bb70: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb6c) {
            ctx->pc = 0x12BB94u;
            goto label_12bb94;
        }
    }
    ctx->pc = 0x12BB74u;
    // 0x12bb74: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bb78: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BB78u;
    SET_GPR_U32(ctx, 31, 0x12BB80u);
    ctx->pc = 0x12BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB78u;
    // 0x12bb7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BB78u, 0x12BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB80u;
label_12bb80:
    // 0x12bb80: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x12BB80u;
    {
        const bool branch_taken_0x12bb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB80u;
        // 0x12bb84: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb80) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BB88u;
    // 0x12bb88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bb8c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bb90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12bb90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bb94:
    // 0x12bb94: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bb98: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x12bb98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12bb9c: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x12BB9Cu;
    {
        const bool branch_taken_0x12bb9c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB9Cu;
        // 0x12bba0: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb9c) {
            ctx->pc = 0x12BC70u;
            goto label_12bc70;
        }
    }
    ctx->pc = 0x12BBA4u;
    // 0x12bba4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bba8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12BBA8u;
    {
        const bool branch_taken_0x12bba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBA8u;
        // 0x12bbac: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba8) {
            ctx->pc = 0x12BC20u;
            goto label_12bc20;
        }
    }
    ctx->pc = 0x12BBB0u;
    // 0x12bbb0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12bbb4: 0x24f1f6e0  addiu       $s1, $a3, -0x920
    ctx->pc = 0x12bbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12bbb8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x12bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x12bbbc: 0x0  nop
    ctx->pc = 0x12bbbcu;
    // NOP
label_12bbc0:
    // 0x12bbc0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x12bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x12bbc4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bbc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bbc8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bbcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bbd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12bbd8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bbdc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bbe0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BBE0u;
    {
        const bool branch_taken_0x12bbe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBE0u;
        // 0x12bbe4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbe0) {
            ctx->pc = 0x12BC08u;
            goto label_12bc08;
        }
    }
    ctx->pc = 0x12BBE8u;
    // 0x12bbe8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bbec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12bbf0: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BBF0u;
    SET_GPR_U32(ctx, 31, 0x12BBF8u);
    ctx->pc = 0x12BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBF0u;
    // 0x12bbf4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BBF0u, 0x12BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBF8u;
label_12bbf8:
    // 0x12bbf8: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x12BBF8u;
    {
        const bool branch_taken_0x12bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF8u;
        // 0x12bbfc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbf8) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12BC00u;
    // 0x12bc00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bc04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12bc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12bc08:
    // 0x12bc08: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12bc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12bc0c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bc10: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BC10u;
    {
        const bool branch_taken_0x12bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bc10) {
            ctx->pc = 0x12BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC10u;
            // 0x12bc14: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BC18u;
    // 0x12bc18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12BC18u;
    {
        const bool branch_taken_0x12bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC18u;
        // 0x12bc1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc18) {
            ctx->pc = 0x12BC24u;
            goto label_12bc24;
        }
    }
    ctx->pc = 0x12BC20u;
label_12bc20:
    // 0x12bc20: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12bc24:
    // 0x12bc24: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12bc28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12bc2c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bc30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bc34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bc3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12bc40: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bc40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bc44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bc48: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BC48u;
    {
        const bool branch_taken_0x12bc48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC48u;
        // 0x12bc4c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc48) {
            ctx->pc = 0x12BC6Cu;
            goto label_12bc6c;
        }
    }
    ctx->pc = 0x12BC50u;
    // 0x12bc50: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bc54: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BC54u;
    SET_GPR_U32(ctx, 31, 0x12BC5Cu);
    ctx->pc = 0x12BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC54u;
    // 0x12bc58: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BC54u, 0x12BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC5Cu;
label_12bc5c:
    // 0x12bc5c: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x12BC5Cu;
    {
        const bool branch_taken_0x12bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC5Cu;
        // 0x12bc60: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc5c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BC64u;
    // 0x12bc64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bc68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12bc68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12bc6c:
    // 0x12bc6c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12bc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_12bc70:
    // 0x12bc70: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x12BC70u;
    {
        const bool branch_taken_0x12bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC70u;
        // 0x12bc74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc70) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12BC78u;
    // 0x12bc78: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12bc7c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x12bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x12bc80: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x12bc84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12bc88: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bc8c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bc90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bc98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bc9c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bc9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bca0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bca4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x12BCA4u;
    {
        const bool branch_taken_0x12bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCA4u;
        // 0x12bca8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bca4) {
            ctx->pc = 0x12BFFCu;
            goto label_12bffc;
        }
    }
    ctx->pc = 0x12BCACu;
    // 0x12bcac: 0x0  nop
    ctx->pc = 0x12bcacu;
    // NOP
label_12bcb0:
    // 0x12bcb0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bcb4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12bcb8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bcbc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bcc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcc4: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x12bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bccc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bcccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bcd0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12bcd4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x12bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x12bcd8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BCD8u;
    {
        const bool branch_taken_0x12bcd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCD8u;
        // 0x12bcdc: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcd8) {
            ctx->pc = 0x12BD00u;
            goto label_12bd00;
        }
    }
    ctx->pc = 0x12BCE0u;
    // 0x12bce0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bce4: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BCE4u;
    SET_GPR_U32(ctx, 31, 0x12BCECu);
    ctx->pc = 0x12BCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCE4u;
    // 0x12bce8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BCE4u, 0x12BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCECu;
label_12bcec:
    // 0x12bcec: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x12BCECu;
    {
        const bool branch_taken_0x12bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCECu;
        // 0x12bcf0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcec) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BCF4u;
    // 0x12bcf4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bcf8: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x12bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bcfc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12bcfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12bd00:
    // 0x12bd00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bd04: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12bd08: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x12bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x12bd0c: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x12bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x12bd10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12bd14: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bd18: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bd1c: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x12bd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x12bd20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bd2c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bd2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bd30: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bd34: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BD34u;
    {
        const bool branch_taken_0x12bd34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd34) {
            ctx->pc = 0x12BD58u;
            goto label_12bd58;
        }
    }
    ctx->pc = 0x12BD3Cu;
    // 0x12bd3c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bd40: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BD40u;
    SET_GPR_U32(ctx, 31, 0x12BD48u);
    ctx->pc = 0x12BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD40u;
    // 0x12bd44: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BD40u, 0x12BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD48u;
label_12bd48:
    // 0x12bd48: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x12BD48u;
    {
        const bool branch_taken_0x12bd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD48u;
        // 0x12bd4c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd48) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BD50u;
    // 0x12bd50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bd54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12bd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12bd58:
    // 0x12bd58: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x12bd5c: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x12bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bd60: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bd64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bd68: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12bd6c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bd6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bd70: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bd74: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12bd78: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12bd7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd84: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x12bd84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bd88: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12bd8c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x12bd90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12bd94: 0x14c000a2  bnez        $a2, . + 4 + (0xA2 << 2)
    ctx->pc = 0x12BD94u;
    {
        const bool branch_taken_0x12bd94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD94u;
        // 0x12bd98: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd94) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12BD9Cu;
    // 0x12bd9c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bda0: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BDA0u;
    SET_GPR_U32(ctx, 31, 0x12BDA8u);
    ctx->pc = 0x12BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BDA0u;
    // 0x12bda4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BDA0u, 0x12BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDA8u;
label_12bda8:
    // 0x12bda8: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x12BDA8u;
    {
        const bool branch_taken_0x12bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDA8u;
        // 0x12bdac: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bda8) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BDB0u;
    // 0x12bdb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bdb4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x12BDB4u;
    {
        const bool branch_taken_0x12bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB4u;
        // 0x12bdb8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdb4) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12BDBCu;
    // 0x12bdbc: 0x0  nop
    ctx->pc = 0x12bdbcu;
    // NOP
label_12bdc0:
    // 0x12bdc0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12bdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12bdc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BDC4u;
    {
        const bool branch_taken_0x12bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bdc4) {
            ctx->pc = 0x12BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BDC4u;
            // 0x12bdc8: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BDDCu;
            goto label_12bddc;
        }
    }
    ctx->pc = 0x12BDCCu;
    // 0x12bdcc: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12bdd0: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x12BDD0u;
    {
        const bool branch_taken_0x12bdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDD0u;
        // 0x12bdd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdd0) {
            ctx->pc = 0x12BF88u;
            goto label_12bf88;
        }
    }
    ctx->pc = 0x12BDD8u;
    // 0x12bdd8: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x12bdd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_12bddc:
    // 0x12bddc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12bde0: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x12bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12bde4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12bde8: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x12bde8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x12bdec: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x12bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12bdf0: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x12bdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bdf4: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x12bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x12bdf8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12bdfc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12be00: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12be04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12be0c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x12be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12be10: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12be10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12be14: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12be14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12be18: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BE18u;
    {
        const bool branch_taken_0x12be18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE18u;
        // 0x12be1c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be18) {
            ctx->pc = 0x12BE3Cu;
            goto label_12be3c;
        }
    }
    ctx->pc = 0x12BE20u;
    // 0x12be20: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12be24: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BE24u;
    SET_GPR_U32(ctx, 31, 0x12BE2Cu);
    ctx->pc = 0x12BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE24u;
    // 0x12be28: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BE24u, 0x12BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE2Cu;
label_12be2c:
    // 0x12be2c: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x12BE2Cu;
    {
        const bool branch_taken_0x12be2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE2Cu;
        // 0x12be30: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be2c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BE34u;
    // 0x12be34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12be34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12be38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12be38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12be3c:
    // 0x12be3c: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x12be3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12be40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12be40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be44: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12BE44u;
    SET_GPR_U32(ctx, 31, 0x12BE4Cu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12BE44u, 0x12BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE4Cu;
label_12be4c:
    // 0x12be4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12BE4Cu;
    {
        const bool branch_taken_0x12be4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE4Cu;
        // 0x12be50: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be4c) {
            ctx->pc = 0x12BEB0u;
            goto label_12beb0;
        }
    }
    ctx->pc = 0x12BE54u;
    // 0x12be54: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12be54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x12be58: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12be5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12be60: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12be60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12be64: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12be64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12be68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12be6c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12be70: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12be70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12be74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12be78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12be7c: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x12be7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12be80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12be84: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12be84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12be88: 0x14a00051  bnez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x12BE88u;
    {
        const bool branch_taken_0x12be88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE88u;
        // 0x12be8c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be88) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BE90u;
    // 0x12be90: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12be94: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BE94u;
    SET_GPR_U32(ctx, 31, 0x12BE9Cu);
    ctx->pc = 0x12BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE94u;
    // 0x12be98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BE94u, 0x12BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE9Cu;
label_12be9c:
    // 0x12be9c: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x12BE9Cu;
    {
        const bool branch_taken_0x12be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE9Cu;
        // 0x12bea0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be9c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BEA4u;
    // 0x12bea4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bea8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x12BEA8u;
    {
        const bool branch_taken_0x12bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEA8u;
        // 0x12beac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea8) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BEB0u;
label_12beb0:
    // 0x12beb0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12beb4: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x12BEB4u;
    {
        const bool branch_taken_0x12beb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEB4u;
        // 0x12beb8: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beb4) {
            ctx->pc = 0x12BFD4u;
            goto label_12bfd4;
        }
    }
    ctx->pc = 0x12BEBCu;
    // 0x12bebc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bec0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12BEC0u;
    {
        const bool branch_taken_0x12bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEC0u;
        // 0x12bec4: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bec0) {
            ctx->pc = 0x12BF38u;
            goto label_12bf38;
        }
    }
    ctx->pc = 0x12BEC8u;
    // 0x12bec8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12becc: 0x24f1f6e0  addiu       $s1, $a3, -0x920
    ctx->pc = 0x12beccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12bed0: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x12bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x12bed4: 0x0  nop
    ctx->pc = 0x12bed4u;
    // NOP
label_12bed8:
    // 0x12bed8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x12bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x12bedc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bee0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bee4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12beec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12bef0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bef0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bef4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bef8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BEF8u;
    {
        const bool branch_taken_0x12bef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEF8u;
        // 0x12befc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bef8) {
            ctx->pc = 0x12BF20u;
            goto label_12bf20;
        }
    }
    ctx->pc = 0x12BF00u;
    // 0x12bf00: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bf04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12bf08: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BF08u;
    SET_GPR_U32(ctx, 31, 0x12BF10u);
    ctx->pc = 0x12BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF08u;
    // 0x12bf0c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BF08u, 0x12BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF10u;
label_12bf10:
    // 0x12bf10: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x12BF10u;
    {
        const bool branch_taken_0x12bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF10u;
        // 0x12bf14: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf10) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12BF18u;
    // 0x12bf18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x12bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bf1c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x12bf1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12bf20:
    // 0x12bf20: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12bf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12bf24: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12bf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12bf28: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12BF28u;
    {
        const bool branch_taken_0x12bf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bf28) {
            ctx->pc = 0x12BF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BF28u;
            // 0x12bf2c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bed8;
        }
    }
    ctx->pc = 0x12BF30u;
    // 0x12bf30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12BF30u;
    {
        const bool branch_taken_0x12bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF30u;
        // 0x12bf34: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf30) {
            ctx->pc = 0x12BF3Cu;
            goto label_12bf3c;
        }
    }
    ctx->pc = 0x12BF38u;
label_12bf38:
    // 0x12bf38: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12bf3c:
    // 0x12bf3c: 0x24e2f6e0  addiu       $v0, $a3, -0x920
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964960));
    // 0x12bf40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12bf44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bf44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bf48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bf4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bf50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bf54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12bf58: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bf58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bf5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bf60: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12BF60u;
    {
        const bool branch_taken_0x12bf60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF60u;
        // 0x12bf64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf60) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BF68u;
    // 0x12bf68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bf6c: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BF6Cu;
    SET_GPR_U32(ctx, 31, 0x12BF74u);
    ctx->pc = 0x12BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF6Cu;
    // 0x12bf70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BF6Cu, 0x12BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF74u;
label_12bf74:
    // 0x12bf74: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x12BF74u;
    {
        const bool branch_taken_0x12bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF74u;
        // 0x12bf78: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf74) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BF7Cu;
    // 0x12bf7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bf80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12BF80u;
    {
        const bool branch_taken_0x12bf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF80u;
        // 0x12bf84: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf80) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BF88u;
label_12bf88:
    // 0x12bf88: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x12bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x12bf8c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x12bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x12bf90: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bf94: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bf98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bf9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bfa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bfa4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12bfa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bfa8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12bfac: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BFACu;
    {
        const bool branch_taken_0x12bfac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFACu;
        // 0x12bfb0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfac) {
            ctx->pc = 0x12BFD0u;
            goto label_12bfd0;
        }
    }
    ctx->pc = 0x12BFB4u;
    // 0x12bfb4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12bfb8: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12BFB8u;
    SET_GPR_U32(ctx, 31, 0x12BFC0u);
    ctx->pc = 0x12BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFB8u;
    // 0x12bfbc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12BFB8u, 0x12BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFC0u;
label_12bfc0:
    // 0x12bfc0: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x12BFC0u;
    {
        const bool branch_taken_0x12bfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFC0u;
        // 0x12bfc4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfc0) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12BFC8u;
    // 0x12bfc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bfcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12bfccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12bfd0:
    // 0x12bfd0: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x12bfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_12bfd4:
    // 0x12bfd4: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x12bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
    // 0x12bfd8: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x12bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x12bfdc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12bfdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12bfe0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12bfe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bfe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bfec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_12bff0:
    // 0x12bff0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12bff0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12bff4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12bff8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_12bffc:
    // 0x12bffc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BFFCu;
    {
        const bool branch_taken_0x12bffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFFCu;
        // 0x12c000: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bffc) {
            ctx->pc = 0x12C024u;
            goto label_12c024;
        }
    }
    ctx->pc = 0x12C004u;
    // 0x12c004: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c008: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12C008u;
    SET_GPR_U32(ctx, 31, 0x12C010u);
    ctx->pc = 0x12C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C008u;
    // 0x12c00c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12C008u, 0x12C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C010u;
label_12c010:
    // 0x12c010: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x12C010u;
    {
        const bool branch_taken_0x12c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C010u;
        // 0x12c014: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c010) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12C018u;
    // 0x12c018: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c01c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c020:
    // 0x12c020: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x12c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_12c024:
    // 0x12c024: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x12C024u;
    {
        const bool branch_taken_0x12c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C024u;
        // 0x12c028: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c024) {
            ctx->pc = 0x12C0F8u;
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C02Cu;
    // 0x12c02c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x12c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12c030: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12c034: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12C034u;
    {
        const bool branch_taken_0x12c034 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C034u;
        // 0x12c038: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c034) {
            ctx->pc = 0x12C100u;
            goto label_12c100;
        }
    }
    ctx->pc = 0x12C03Cu;
    // 0x12c03c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12c03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c040: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12C040u;
    {
        const bool branch_taken_0x12c040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C040u;
        // 0x12c044: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c040) {
            ctx->pc = 0x12C0B8u;
            goto label_12c0b8;
        }
    }
    ctx->pc = 0x12C048u;
    // 0x12c048: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c04c: 0x24f1f6d0  addiu       $s1, $a3, -0x930
    ctx->pc = 0x12c04cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964944));
    // 0x12c050: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x12c050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x12c054: 0x0  nop
    ctx->pc = 0x12c054u;
    // NOP
label_12c058:
    // 0x12c058: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x12c058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x12c05c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x12c060: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c06c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12c070: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12c070u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c074: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12c078: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C078u;
    {
        const bool branch_taken_0x12c078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C078u;
        // 0x12c07c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c078) {
            ctx->pc = 0x12C0A0u;
            goto label_12c0a0;
        }
    }
    ctx->pc = 0x12C080u;
    // 0x12c080: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c084: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12c088: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12C088u;
    SET_GPR_U32(ctx, 31, 0x12C090u);
    ctx->pc = 0x12C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C088u;
    // 0x12c08c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12C088u, 0x12C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C090u;
label_12c090:
    // 0x12c090: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12C090u;
    {
        const bool branch_taken_0x12c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C090u;
        // 0x12c094: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c090) {
            ctx->pc = 0x12C168u;
            goto label_12c168;
        }
    }
    ctx->pc = 0x12C098u;
    // 0x12c098: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c09c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12c09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12c0a0:
    // 0x12c0a0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12c0a4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12c0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12c0a8: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12C0A8u;
    {
        const bool branch_taken_0x12c0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c0a8) {
            ctx->pc = 0x12C0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C0A8u;
            // 0x12c0ac: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c058;
        }
    }
    ctx->pc = 0x12C0B0u;
    // 0x12c0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C0B0u;
    {
        const bool branch_taken_0x12c0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B0u;
        // 0x12c0b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0b0) {
            ctx->pc = 0x12C0BCu;
            goto label_12c0bc;
        }
    }
    ctx->pc = 0x12C0B8u;
label_12c0b8:
    // 0x12c0b8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x12c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_12c0bc:
    // 0x12c0bc: 0x24e2f6d0  addiu       $v0, $a3, -0x930
    ctx->pc = 0x12c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964944));
    // 0x12c0c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x12c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x12c0c4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c0c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c0cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12c0d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12c0d4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12c0d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c0d8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12c0dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C0DCu;
    {
        const bool branch_taken_0x12c0dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0DCu;
        // 0x12c0e0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0dc) {
            ctx->pc = 0x12C0F8u;
            goto label_12c0f8;
        }
    }
    ctx->pc = 0x12C0E4u;
    // 0x12c0e4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c0e8: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12C0E8u;
    SET_GPR_U32(ctx, 31, 0x12C0F0u);
    ctx->pc = 0x12C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0E8u;
    // 0x12c0ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12C0E8u, 0x12C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0F0u;
label_12c0f0:
    // 0x12c0f0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12C0F0u;
    {
        const bool branch_taken_0x12c0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0F0u;
        // 0x12c0f4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0f0) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12C0F8u;
label_12c0f8:
    // 0x12c0f8: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x12c0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12c0fc: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x12c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12c100:
    // 0x12c100: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12c100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12c104: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x12c104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12c108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c10c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c110: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x12c110u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x12c114: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x12c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12c118: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C118u;
    {
        const bool branch_taken_0x12c118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C118u;
        // 0x12c11c: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c118) {
            ctx->pc = 0x12C134u;
            goto label_12c134;
        }
    }
    ctx->pc = 0x12C120u;
    // 0x12c120: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c124: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12C124u;
    SET_GPR_U32(ctx, 31, 0x12C12Cu);
    ctx->pc = 0x12C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C124u;
    // 0x12c128: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12C124u, 0x12C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C12Cu;
label_12c12c:
    // 0x12c12c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12C12Cu;
    {
        const bool branch_taken_0x12c12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C12Cu;
        // 0x12c130: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c12c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12C134u;
label_12c134:
    // 0x12c134: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12c134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c138: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12c138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12c13c: 0x1000fab4  b           . + 4 + (-0x54C << 2)
    ctx->pc = 0x12C13Cu;
    {
        const bool branch_taken_0x12c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C13Cu;
        // 0x12c140: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c13c) {
            ctx->pc = 0x12AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac10;
        }
    }
    ctx->pc = 0x12C144u;
    // 0x12c144: 0x0  nop
    ctx->pc = 0x12c144u;
    // NOP
label_12c148:
    // 0x12c148: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12c14c:
    // 0x12c14c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C14Cu;
    {
        const bool branch_taken_0x12c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C14Cu;
        // 0x12c150: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c14c) {
            ctx->pc = 0x12C164u;
            goto label_12c164;
        }
    }
    ctx->pc = 0x12C154u;
    // 0x12c154: 0xc04aa72  jal         func_12A9C8
    ctx->pc = 0x12C154u;
    SET_GPR_U32(ctx, 31, 0x12C15Cu);
    ctx->pc = 0x12C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C154u;
    // 0x12c158: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A9C8u, 0x12C154u, 0x12C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C15Cu;
label_12c15c:
    // 0x12c15c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C15Cu;
    {
        const bool branch_taken_0x12c15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C15Cu;
        // 0x12c160: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c15c) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12C164u;
label_12c164:
    // 0x12c164: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12c168:
    // 0x12c168: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c16c:
    // 0x12c16c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c170: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12c170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12c174: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c178: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12c178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12c17c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x12c17cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_12c180:
    // 0x12c180: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x12c180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_12c184:
    // 0x12c184: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x12c184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x12c188: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x12c188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x12c18c: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x12c18cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x12c190: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x12c190u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x12c194: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x12c194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x12c198: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x12c198u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x12c19c: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x12c19cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x12c1a0: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12c1a4: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x12c1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x12c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1A8u;
        // 0x12c1ac: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C1B0u;
}
