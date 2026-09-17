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

// Function: sub_00259758
// Address: 0x259758 - 0x259970
void sub_00259758_0x259758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259758_0x259758");
#endif

    switch (ctx->pc) {
        case 0x25978cu: goto label_25978c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597f8u: goto label_2597f8;
        case 0x259840u: goto label_259840;
        case 0x259888u: goto label_259888;
        case 0x2598a0u: goto label_2598a0;
        case 0x2598c0u: goto label_2598c0;
        case 0x2598d8u: goto label_2598d8;
        case 0x2598e8u: goto label_2598e8;
        case 0x25992cu: goto label_25992c;
        case 0x259938u: goto label_259938;
        case 0x25994cu: goto label_25994c;
        default: break;
    }

    ctx->pc = 0x259758u;

    // 0x259758: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x259758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25975c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x25975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x259760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259764: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x259764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x259768: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x259768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x25976c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x25976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x259770: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x259770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x259774: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x259774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x259778: 0x8e2205bc  lw          $v0, 0x5BC($s1)
    ctx->pc = 0x259778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x25977c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25977Cu;
    {
        const bool branch_taken_0x25977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25977Cu;
        // 0x259780: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25977c) {
            ctx->pc = 0x259794u;
            goto label_259794;
        }
    }
    ctx->pc = 0x259784u;
    // 0x259784: 0xc08c696  jal         func_231A58
    ctx->pc = 0x259784u;
    SET_GPR_U32(ctx, 31, 0x25978Cu);
    ctx->pc = 0x231A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A58u, 0x259784u, 0x25978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25978Cu;
label_25978c:
    // 0x25978c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25978Cu;
    {
        const bool branch_taken_0x25978c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25978Cu;
        // 0x259790: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25978c) {
            ctx->pc = 0x2597A8u;
            goto label_2597a8;
        }
    }
    ctx->pc = 0x259794u;
label_259794:
    // 0x259794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259798: 0xc09656c  jal         func_2595B0
    ctx->pc = 0x259798u;
    SET_GPR_U32(ctx, 31, 0x2597A0u);
    ctx->pc = 0x25979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259798u;
    // 0x25979c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2595B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2595B0u, 0x259798u, 0x2597A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597A0u;
label_2597a0:
    // 0x2597a0: 0xae2005bc  sw          $zero, 0x5BC($s1)
    ctx->pc = 0x2597a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 0));
    // 0x2597a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2597a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2597a8:
    // 0x2597a8: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2597A8u;
    SET_GPR_U32(ctx, 31, 0x2597B0u);
    ctx->pc = 0x2597ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597A8u;
    // 0x2597ac: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2597A8u, 0x2597B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597B0u;
label_2597b0:
    // 0x2597b0: 0xc095cde  jal         func_257378
    ctx->pc = 0x2597B0u;
    SET_GPR_U32(ctx, 31, 0x2597B8u);
    ctx->pc = 0x2597B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597B0u;
    // 0x2597b4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257378u, 0x2597B0u, 0x2597B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597B8u;
label_2597b8:
    // 0x2597b8: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x2597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x2597bc: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2597BCu;
    {
        const bool branch_taken_0x2597bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597bc) {
            ctx->pc = 0x259938u;
            goto label_259938;
        }
    }
    ctx->pc = 0x2597C4u;
    // 0x2597c4: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x2597c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2597C8u;
    {
        const bool branch_taken_0x2597c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C8u;
        // 0x2597cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c8) {
            ctx->pc = 0x2597E0u;
            goto label_2597e0;
        }
    }
    ctx->pc = 0x2597D0u;
    // 0x2597d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2597d4: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2597d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2597d8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2597d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2597dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2597dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2597e0:
    // 0x2597e0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2597E0u;
    {
        const bool branch_taken_0x2597e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2597E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597E0u;
        // 0x2597e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597e0) {
            ctx->pc = 0x2597F8u;
            goto label_2597f8;
        }
    }
    ctx->pc = 0x2597E8u;
    // 0x2597e8: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x2597e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x2597ec: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2597ECu;
    {
        const bool branch_taken_0x2597ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597ECu;
        // 0x2597f0: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597ec) {
            ctx->pc = 0x25991Cu;
            goto label_25991c;
        }
    }
    ctx->pc = 0x2597F4u;
    // 0x2597f4: 0x0  nop
    ctx->pc = 0x2597f4u;
    // NOP
label_2597f8:
    // 0x2597f8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2597f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2597fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2597fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x259800: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x259804: 0x28c50003  slti        $a1, $a2, 0x3
    ctx->pc = 0x259804u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x259808: 0x78820530  lq          $v0, 0x530($a0)
    ctx->pc = 0x259808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x25980c: 0x78830570  lq          $v1, 0x570($a0)
    ctx->pc = 0x25980cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 1392)));
    // 0x259810: 0x7c820520  sq          $v0, 0x520($a0)
    ctx->pc = 0x259810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1312), GPR_VEC(ctx, 2));
    // 0x259814: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x259814u;
    {
        const bool branch_taken_0x259814 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x259818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259814u;
        // 0x259818: 0x7c830560  sq          $v1, 0x560($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259814) {
            ctx->pc = 0x2597F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2597f8;
        }
    }
    ctx->pc = 0x25981Cu;
    // 0x25981c: 0x8e2305a0  lw          $v1, 0x5A0($s1)
    ctx->pc = 0x25981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x259820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259824: 0x8e2405a4  lw          $a0, 0x5A4($s1)
    ctx->pc = 0x259824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x259828: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x259828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25982c: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x25982cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x259830: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x259830u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x259834: 0x78830070  lq          $v1, 0x70($a0)
    ctx->pc = 0x259834u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x259838: 0x7e230590  sq          $v1, 0x590($s1)
    ctx->pc = 0x259838u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1424), GPR_VEC(ctx, 3));
    // 0x25983c: 0x0  nop
    ctx->pc = 0x25983cu;
    // NOP
label_259840:
    // 0x259840: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x259844: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x259844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x259848: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x259848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x25984c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x25984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x259850: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x259850u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x259854: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x259854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x259858: 0x28e60028  slti        $a2, $a3, 0x28
    ctx->pc = 0x259858u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x25985c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x259860: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x259860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x259864: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x259864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x259868: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x259868u;
    {
        const bool branch_taken_0x259868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259868u;
        // 0x25986c: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259868) {
            ctx->pc = 0x259840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259840;
        }
    }
    ctx->pc = 0x259870u;
    // 0x259870: 0x8f82cc6c  lw          $v0, -0x3394($gp)
    ctx->pc = 0x259870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954092)));
    // 0x259874: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x259874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259878: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x259878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25987c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x25987Cu;
    {
        const bool branch_taken_0x25987c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x259880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25987Cu;
        // 0x259880: 0x26320520  addiu       $s2, $s1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25987c) {
            ctx->pc = 0x2598B0u;
            goto label_2598b0;
        }
    }
    ctx->pc = 0x259884u;
    // 0x259884: 0x8f86cc68  lw          $a2, -0x3398($gp)
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
label_259888:
    // 0x259888: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25988c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x25988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x259890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259894: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x259894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x259898: 0xc08491e  jal         func_212478
    ctx->pc = 0x259898u;
    SET_GPR_U32(ctx, 31, 0x2598A0u);
    ctx->pc = 0x25989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259898u;
    // 0x25989c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x259898u, 0x2598A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598A0u;
label_2598a0:
    // 0x2598a0: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2598A0u;
    {
        const bool branch_taken_0x2598a0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2598a0) {
            ctx->pc = 0x2598A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2598A0u;
            // 0x2598a4: 0x8f86cc68  lw          $a2, -0x3398($gp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259888;
        }
    }
    ctx->pc = 0x2598A8u;
    // 0x2598a8: 0x8f82cc6c  lw          $v0, -0x3394($gp)
    ctx->pc = 0x2598a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954092)));
    // 0x2598ac: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2598acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2598b0:
    // 0x2598b0: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2598b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2598b4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2598B4u;
    {
        const bool branch_taken_0x2598b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2598B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598B4u;
        // 0x2598b8: 0x26320560  addiu       $s2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598b4) {
            ctx->pc = 0x2598E0u;
            goto label_2598e0;
        }
    }
    ctx->pc = 0x2598BCu;
    // 0x2598bc: 0x8f86cc68  lw          $a2, -0x3398($gp)
    ctx->pc = 0x2598bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
label_2598c0:
    // 0x2598c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2598c4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2598c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2598c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2598ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2598d0: 0xc08491e  jal         func_212478
    ctx->pc = 0x2598D0u;
    SET_GPR_U32(ctx, 31, 0x2598D8u);
    ctx->pc = 0x2598D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598D0u;
    // 0x2598d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2598D0u, 0x2598D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598D8u;
label_2598d8:
    // 0x2598d8: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2598D8u;
    {
        const bool branch_taken_0x2598d8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2598DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598D8u;
        // 0x2598dc: 0x8f86cc68  lw          $a2, -0x3398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598d8) {
            ctx->pc = 0x2598C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2598c0;
        }
    }
    ctx->pc = 0x2598E0u;
label_2598e0:
    // 0x2598e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2598e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598e4: 0x0  nop
    ctx->pc = 0x2598e4u;
    // NOP
label_2598e8:
    // 0x2598e8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2598ec: 0x24c30023  addiu       $v1, $a2, 0x23
    ctx->pc = 0x2598ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 35));
    // 0x2598f0: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2598f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2598f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2598f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2598f8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2598f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2598fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x259900: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x259900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x259904: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x259904u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x259908: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x259908u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25990c: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x25990cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x259910: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x259910u;
    {
        const bool branch_taken_0x259910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x259914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259910u;
        // 0x259914: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259910) {
            ctx->pc = 0x2598E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2598e8;
        }
    }
    ctx->pc = 0x259918u;
    // 0x259918: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x259918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_25991c:
    // 0x25991c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259920: 0x2610cf10  addiu       $s0, $s0, -0x30F0
    ctx->pc = 0x259920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954768));
    // 0x259924: 0xc0964b4  jal         func_2592D0
    ctx->pc = 0x259924u;
    SET_GPR_U32(ctx, 31, 0x25992Cu);
    ctx->pc = 0x259928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259924u;
    // 0x259928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2592D0u, 0x259924u, 0x25992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25992Cu;
label_25992c:
    // 0x25992c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259930: 0xc0964fc  jal         func_2593F0
    ctx->pc = 0x259930u;
    SET_GPR_U32(ctx, 31, 0x259938u);
    ctx->pc = 0x259934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259930u;
    // 0x259934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2593F0u, 0x259930u, 0x259938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259938u;
label_259938:
    // 0x259938: 0x8e2205b4  lw          $v0, 0x5B4($s1)
    ctx->pc = 0x259938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x25993c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25993Cu;
    {
        const bool branch_taken_0x25993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25993Cu;
        // 0x259940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25993c) {
            ctx->pc = 0x25994Cu;
            goto label_25994c;
        }
    }
    ctx->pc = 0x259944u;
    // 0x259944: 0xc09665c  jal         func_259970
    ctx->pc = 0x259944u;
    SET_GPR_U32(ctx, 31, 0x25994Cu);
    ctx->pc = 0x259948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259944u;
    // 0x259948: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259970u, 0x259944u, 0x25994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25994Cu;
label_25994c:
    // 0x25994c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x25994cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259950: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x259950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259954: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x259954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259958: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x259958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25995c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x25995cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259960: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x259960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x259964: 0x3e00008  jr          $ra
    ctx->pc = 0x259964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259964u;
        // 0x259968: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25996Cu;
    // 0x25996c: 0x0  nop
    ctx->pc = 0x25996cu;
    // NOP
    ctx->pc = 0x259970u;
}
