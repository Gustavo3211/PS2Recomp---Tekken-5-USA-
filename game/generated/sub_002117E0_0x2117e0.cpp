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

// Function: sub_002117E0
// Address: 0x2117e0 - 0x211b38
void sub_002117E0_0x2117e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002117E0_0x2117e0");
#endif

    switch (ctx->pc) {
        case 0x211878u: goto label_211878;
        case 0x21192cu: goto label_21192c;
        case 0x211954u: goto label_211954;
        case 0x211990u: goto label_211990;
        case 0x2119c4u: goto label_2119c4;
        case 0x211a38u: goto label_211a38;
        case 0x211ab8u: goto label_211ab8;
        default: break;
    }

    ctx->pc = 0x2117e0u;

    // 0x2117e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2117e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2117e4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2117e8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2117e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2117ec: 0x24a488d0  addiu       $a0, $a1, -0x7730
    ctx->pc = 0x2117ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x2117f0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2117f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2117f4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2117f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2117f8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2117f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2117fc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2117fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x211800: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x211800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x211804: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x211804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x211808: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x211808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x21180c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x21180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x211810: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x211810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x211814: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x211818: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x211818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x21181c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21181Cu;
    {
        const bool branch_taken_0x21181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21181Cu;
        // 0x211820: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21181c) {
            ctx->pc = 0x211828u;
            goto label_211828;
        }
    }
    ctx->pc = 0x211824u;
    // 0x211824: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x211824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_211828:
    // 0x211828: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x211828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x21182c: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x211830: 0x8e330050  lw          $s3, 0x50($s1)
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x211834: 0x26f2b6c8  addiu       $s2, $s7, -0x4938
    ctx->pc = 0x211834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
    // 0x211838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x211838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21183c: 0x24a588d0  addiu       $a1, $a1, -0x7730
    ctx->pc = 0x21183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x211840: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x211840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x211844: 0x8e7001f8  lw          $s0, 0x1F8($s3)
    ctx->pc = 0x211844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 504)));
    // 0x211848: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x211848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21184c: 0x8e74022c  lw          $s4, 0x22C($s3)
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x211850: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x211850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211854: 0x8e750210  lw          $s5, 0x210($s3)
    ctx->pc = 0x211854u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x211858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21185c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x21185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x211860: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x211860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x211864: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x211864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x211868: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211868u;
    {
        const bool branch_taken_0x211868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211868u;
        // 0x21186c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211868) {
            ctx->pc = 0x211890u;
            goto label_211890;
        }
    }
    ctx->pc = 0x211870u;
    // 0x211870: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x211870u;
    SET_GPR_U32(ctx, 31, 0x211878u);
    ctx->pc = 0x211874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211870u;
    // 0x211874: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x211870u, 0x211878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211878u;
label_211878:
    // 0x211878: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x211878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21187c: 0x8e640228  lw          $a0, 0x228($s3)
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x211880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211884: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x211888: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x211888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21188c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x21188cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_211890:
    // 0x211890: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x211890u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x211894: 0x26c28858  addiu       $v0, $s6, -0x77A8
    ctx->pc = 0x211894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
    // 0x211898: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x211898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x21189c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21189Cu;
    {
        const bool branch_taken_0x21189c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21189Cu;
        // 0x2118a0: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21189c) {
            ctx->pc = 0x2118BCu;
            goto label_2118bc;
        }
    }
    ctx->pc = 0x2118A4u;
    // 0x2118a4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2118a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2118a8: 0x34427f38  ori         $v0, $v0, 0x7F38
    ctx->pc = 0x2118a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32568);
    // 0x2118ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2118acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2118b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2118B0u;
    {
        const bool branch_taken_0x2118b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2118B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118B0u;
        // 0x2118b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118b0) {
            ctx->pc = 0x2118BCu;
            goto label_2118bc;
        }
    }
    ctx->pc = 0x2118B8u;
    // 0x2118b8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2118b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2118bc:
    // 0x2118bc: 0x12800092  beqz        $s4, . + 4 + (0x92 << 2)
    ctx->pc = 0x2118BCu;
    {
        const bool branch_taken_0x2118bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118BCu;
        // 0x2118c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118bc) {
            ctx->pc = 0x211B08u;
            goto label_211b08;
        }
    }
    ctx->pc = 0x2118C4u;
    // 0x2118c4: 0x8e2602d8  lw          $a2, 0x2D8($s1)
    ctx->pc = 0x2118c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x2118c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2118c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2118cc: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2118CCu;
    {
        const bool branch_taken_0x2118cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2118D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118CCu;
        // 0x2118d0: 0x26e5b6c8  addiu       $a1, $s7, -0x4938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118cc) {
            ctx->pc = 0x21195Cu;
            goto label_21195c;
        }
    }
    ctx->pc = 0x2118D4u;
    // 0x2118d4: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x2118d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2118d8: 0x28e20096  slti        $v0, $a3, 0x96
    ctx->pc = 0x2118d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2118dc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2118DCu;
    {
        const bool branch_taken_0x2118dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2118E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118DCu;
        // 0x2118e0: 0x26e4b6c8  addiu       $a0, $s7, -0x4938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118dc) {
            ctx->pc = 0x211960u;
            goto label_211960;
        }
    }
    ctx->pc = 0x2118E4u;
    // 0x2118e4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2118e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2118e8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2118e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2118ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2118f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2118f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2118f4: 0x5466001a  bnel        $v1, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2118F4u;
    {
        const bool branch_taken_0x2118f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2118f4) {
            ctx->pc = 0x2118F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2118F4u;
            // 0x2118f8: 0x26e4b6c8  addiu       $a0, $s7, -0x4938 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211960u;
            goto label_211960;
        }
    }
    ctx->pc = 0x2118FCu;
    // 0x2118fc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2118fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x211900: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x211900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x211904: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211908: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x211908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21190c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x21190cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211910: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x211910u;
    {
        const bool branch_taken_0x211910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211910u;
        // 0x211914: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211910) {
            ctx->pc = 0x211958u;
            goto label_211958;
        }
    }
    ctx->pc = 0x211918u;
    // 0x211918: 0x24e2ff6a  addiu       $v0, $a3, -0x96
    ctx->pc = 0x211918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967146));
    // 0x21191c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211920: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x211920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x211924: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x211924u;
    SET_GPR_U32(ctx, 31, 0x21192Cu);
    ctx->pc = 0x211928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211924u;
    // 0x211928: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x211924u, 0x21192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21192Cu;
label_21192c:
    // 0x21192c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x211930: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x211930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x211934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211934u;
    {
        const bool branch_taken_0x211934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211934u;
        // 0x211938: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211934) {
            ctx->pc = 0x21194Cu;
            goto label_21194c;
        }
    }
    ctx->pc = 0x21193Cu;
    // 0x21193c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x21193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x211940: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x211940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x211944: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x211944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x211948: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x211948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_21194c:
    // 0x21194c: 0xc08b84c  jal         func_22E130
    ctx->pc = 0x21194Cu;
    SET_GPR_U32(ctx, 31, 0x211954u);
    ctx->pc = 0x211950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21194Cu;
    // 0x211950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E130u, 0x21194Cu, 0x211954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211954u;
label_211954:
    // 0x211954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211958:
    // 0x211958: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x211958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
label_21195c:
    // 0x21195c: 0x26e4b6c8  addiu       $a0, $s7, -0x4938
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
label_211960:
    // 0x211960: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x211964: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211968: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x211968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21196c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x21196cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211970: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x211970u;
    {
        const bool branch_taken_0x211970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211970u;
        // 0x211974: 0x26c28858  addiu       $v0, $s6, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211970) {
            ctx->pc = 0x211998u;
            goto label_211998;
        }
    }
    ctx->pc = 0x211978u;
    // 0x211978: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x211978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21197c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211984: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x211984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x211988: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x211988u;
    SET_GPR_U32(ctx, 31, 0x211990u);
    ctx->pc = 0x21198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211988u;
    // 0x21198c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x211988u, 0x211990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211990u;
label_211990:
    // 0x211990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x211990u;
    {
        const bool branch_taken_0x211990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211990u;
        // 0x211994: 0x26c28858  addiu       $v0, $s6, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211990) {
            ctx->pc = 0x2119C8u;
            goto label_2119c8;
        }
    }
    ctx->pc = 0x211998u;
label_211998:
    // 0x211998: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21199c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21199Cu;
    {
        const bool branch_taken_0x21199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21199Cu;
        // 0x2119a0: 0x26c28858  addiu       $v0, $s6, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21199c) {
            ctx->pc = 0x2119C8u;
            goto label_2119c8;
        }
    }
    ctx->pc = 0x2119A4u;
    // 0x2119a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2119a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2119a8: 0x28620097  slti        $v0, $v1, 0x97
    ctx->pc = 0x2119a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x2119ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2119ACu;
    {
        const bool branch_taken_0x2119ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ACu;
        // 0x2119b0: 0x26c28858  addiu       $v0, $s6, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119ac) {
            ctx->pc = 0x2119C8u;
            goto label_2119c8;
        }
    }
    ctx->pc = 0x2119B4u;
    // 0x2119b4: 0x2462ff6a  addiu       $v0, $v1, -0x96
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x2119b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2119b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119bc: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x2119BCu;
    SET_GPR_U32(ctx, 31, 0x2119C4u);
    ctx->pc = 0x2119C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119BCu;
    // 0x2119c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x2119BCu, 0x2119C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2119C4u;
label_2119c4:
    // 0x2119c4: 0x26c28858  addiu       $v0, $s6, -0x77A8
    ctx->pc = 0x2119c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936664));
label_2119c8:
    // 0x2119c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2119c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2119cc: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2119CCu;
    {
        const bool branch_taken_0x2119cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119CCu;
        // 0x2119d0: 0x26e2b6c8  addiu       $v0, $s7, -0x4938 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119cc) {
            ctx->pc = 0x211AD4u;
            goto label_211ad4;
        }
    }
    ctx->pc = 0x2119D4u;
    // 0x2119d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2119d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2119d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2119dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2119dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2119e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2119e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2119e4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119E4u;
        // 0x2119e8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x211AD4u;
            goto label_211ad4;
        }
    }
    ctx->pc = 0x2119ECu;
    // 0x2119ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2119f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2119f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2119f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2119f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2119f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2119f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2119fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211a00: 0x2a34821  addu        $t1, $s5, $v1
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x211a04: 0x85250020  lh          $a1, 0x20($t1)
    ctx->pc = 0x211a04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x211a08: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x211A08u;
    {
        const bool branch_taken_0x211a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x211A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A08u;
        // 0x211a0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a08) {
            ctx->pc = 0x211A88u;
            goto label_211a88;
        }
    }
    ctx->pc = 0x211A10u;
    // 0x211a10: 0x95230026  lhu         $v1, 0x26($t1)
    ctx->pc = 0x211a10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 38)));
    // 0x211a14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x211a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x211a18: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x211A18u;
    {
        const bool branch_taken_0x211a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A18u;
        // 0x211a1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a18) {
            ctx->pc = 0x211A88u;
            goto label_211a88;
        }
    }
    ctx->pc = 0x211A20u;
    // 0x211a20: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x211a20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x211a24: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x211a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x211a28: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x211a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211a2c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x211A2Cu;
    {
        const bool branch_taken_0x211a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A2Cu;
        // 0x211a30: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a2c) {
            ctx->pc = 0x211A88u;
            goto label_211a88;
        }
    }
    ctx->pc = 0x211A34u;
    // 0x211a34: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x211a34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_211a38:
    // 0x211a38: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x211a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x211a3c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x211a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x211a40: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x211a40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211a44: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x211a48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x211a4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x211a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211a50: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x211a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211a58: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x211a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211a60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x211a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211a68: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x211a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x211a6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x211a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x211a70: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x211a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211a74: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x211A74u;
    {
        const bool branch_taken_0x211a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A74u;
        // 0x211a78: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a74) {
            ctx->pc = 0x211A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211a38;
        }
    }
    ctx->pc = 0x211A7Cu;
    // 0x211a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x211A7Cu;
    {
        const bool branch_taken_0x211a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A7Cu;
        // 0x211a80: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a7c) {
            ctx->pc = 0x211A90u;
            goto label_211a90;
        }
    }
    ctx->pc = 0x211A84u;
    // 0x211a84: 0x0  nop
    ctx->pc = 0x211a84u;
    // NOP
label_211a88:
    // 0x211a88: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211a8c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_211a90:
    // 0x211a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a94: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x211a98: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x211a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x211a9c: 0x8ee3b6c8  lw          $v1, -0x4938($s7)
    ctx->pc = 0x211a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948552)));
    // 0x211aa0: 0x8e620228  lw          $v0, 0x228($s3)
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x211aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211aa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211aac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x211aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x211AB0u;
    {
        const bool branch_taken_0x211ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB0u;
        // 0x211ab4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ab0) {
            ctx->pc = 0x211AC0u;
            goto label_211ac0;
        }
    }
    ctx->pc = 0x211AB8u;
label_211ab8:
    // 0x211ab8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211abc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_211ac0:
    // 0x211ac0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211ac4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x211ac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211ac8: 0x0  nop
    ctx->pc = 0x211ac8u;
    // NOP
    // 0x211acc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211ACCu;
    {
        const bool branch_taken_0x211acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211acc) {
            ctx->pc = 0x211AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211ACCu;
            // 0x211ad0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211ab8;
        }
    }
    ctx->pc = 0x211AD4u;
label_211ad4:
    // 0x211ad4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x211ad8: 0x86240096  lh          $a0, 0x96($s1)
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x211adc: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x211adcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x211ae0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x211ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x211ae4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x211AE4u;
    {
        const bool branch_taken_0x211ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ae4) {
            ctx->pc = 0x211AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211AE4u;
            // 0x211ae8: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211AF8u;
            goto label_211af8;
        }
    }
    ctx->pc = 0x211AECu;
    // 0x211aec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211af0: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x211af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x211af4: 0x8e2406a0  lw          $a0, 0x6A0($s1)
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_211af8:
    // 0x211af8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211afc: 0xae24069c  sw          $a0, 0x69C($s1)
    ctx->pc = 0x211afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 4));
    // 0x211b00: 0x8fc306a0  lw          $v1, 0x6A0($fp)
    ctx->pc = 0x211b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1696)));
    // 0x211b04: 0xafc3069c  sw          $v1, 0x69C($fp)
    ctx->pc = 0x211b04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1692), GPR_U32(ctx, 3));
label_211b08:
    // 0x211b08: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x211b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211b0c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x211b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x211b10: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x211b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211b14: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x211b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x211b18: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x211b18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211b1c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x211b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x211b20: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x211b20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x211b24: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x211b24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x211b28: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x211b28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x211b2c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x211b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x211b30: 0x3e00008  jr          $ra
    ctx->pc = 0x211B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B30u;
        // 0x211b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211B38u;
}
