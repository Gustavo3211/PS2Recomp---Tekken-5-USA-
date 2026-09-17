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

// Function: sub_005134B0
// Address: 0x5134b0 - 0x5136b8
void sub_005134B0_0x5134b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005134B0_0x5134b0");
#endif

    switch (ctx->pc) {
        case 0x51357cu: goto label_51357c;
        case 0x513588u: goto label_513588;
        case 0x5135f4u: goto label_5135f4;
        default: break;
    }

    ctx->pc = 0x5134b0u;

    // 0x5134b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5134b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5134b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x5134b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x5134b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5134b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5134bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x5134bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x5134c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5134c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5134c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x5134c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x5134c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x5134c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5134cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x5134ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x5134d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5134d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5134d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x5134d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5134d8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x5134d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5134dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x5134dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x5134e0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x5134e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x5134e4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x5134e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5134e8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x5134E8u;
    {
        const bool branch_taken_0x5134e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x5134ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5134E8u;
        // 0x5134ec: 0x97a50000  lhu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5134e8) {
            ctx->pc = 0x513510u;
            goto label_513510;
        }
    }
    ctx->pc = 0x5134F0u;
    // 0x5134f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x5134f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x5134f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x5134f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x5134f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x5134f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x5134fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5134fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x513500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x513500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x513504: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x513504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x513508: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x513508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x51350c: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x51350cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_513510:
    // 0x513510: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x513510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x513514: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x513514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x513518: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x513518u;
    {
        const bool branch_taken_0x513518 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x513518) {
            ctx->pc = 0x51351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513518u;
            // 0x51351c: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513540u;
            goto label_513540;
        }
    }
    ctx->pc = 0x513520u;
    // 0x513520: 0x21023  negu        $v0, $v0
    ctx->pc = 0x513520u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x513524: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x513524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x513528: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x513528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x51352c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x51352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x513530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x513530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x513534: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x513534u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x513538: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x513538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x51353c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x51353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_513540:
    // 0x513540: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x513540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x513544: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x513544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x513548: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x513548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x51354c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51354Cu;
    {
        const bool branch_taken_0x51354c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51354c) {
            ctx->pc = 0x513550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x51354Cu;
            // 0x513550: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x51356Cu;
            goto label_51356c;
        }
    }
    ctx->pc = 0x513554u;
    // 0x513554: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x513554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513558: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x513558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x51355c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x51355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x513560: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x513560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x513564: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x513564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x513568: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x513568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_51356c:
    // 0x51356c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x51356Cu;
    {
        const bool branch_taken_0x51356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51356c) {
            ctx->pc = 0x513570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x51356Cu;
            // 0x513570: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5135B0u;
            goto label_5135b0;
        }
    }
    ctx->pc = 0x513574u;
    // 0x513574: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x513574u;
    SET_GPR_U32(ctx, 31, 0x51357Cu);
    ctx->pc = 0x513578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513574u;
    // 0x513578: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x513574u, 0x51357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51357Cu;
label_51357c:
    // 0x51357c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513580: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x513580u;
    SET_GPR_U32(ctx, 31, 0x513588u);
    ctx->pc = 0x513584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513580u;
    // 0x513584: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x513580u, 0x513588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513588u;
label_513588:
    // 0x513588: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x513588u;
    {
        const bool branch_taken_0x513588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513588u;
        // 0x51358c: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513588) {
            ctx->pc = 0x5135B4u;
            goto label_5135b4;
        }
    }
    ctx->pc = 0x513590u;
    // 0x513590: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x513590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x513594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x513598: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x513598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x51359c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x51359cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5135a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5135a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5135a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x5135A4u;
    {
        const bool branch_taken_0x5135a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5135A4u;
        // 0x5135a8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5135a4) {
            ctx->pc = 0x513620u;
            goto label_513620;
        }
    }
    ctx->pc = 0x5135ACu;
    // 0x5135ac: 0x0  nop
    ctx->pc = 0x5135acu;
    // NOP
label_5135b0:
    // 0x5135b0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x5135b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_5135b4:
    // 0x5135b4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x5135b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x5135b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x5135b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5135bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5135bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5135c0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x5135c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x5135c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5135c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5135c8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x5135c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x5135cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5135ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5135d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x5135d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x5135d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5135d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5135d8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x5135d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5135dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x5135dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x5135e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x5135e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x5135e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x5135e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x5135e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5135e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5135ec: 0xc12a146  jal         func_4A8518
    ctx->pc = 0x5135ECu;
    SET_GPR_U32(ctx, 31, 0x5135F4u);
    ctx->pc = 0x5135F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5135ECu;
    // 0x5135f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8518u, 0x5135ECu, 0x5135F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5135F4u;
label_5135f4:
    // 0x5135f4: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x5135f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5135f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x5135f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5135fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x5135fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x513600: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x513600u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x513604: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x513604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x513608: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x513608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x51360c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x51360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x513610: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x513610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x513614: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x513614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x513618: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x513618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x51361c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x51361cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_513620:
    // 0x513620: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x513620u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x513624: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x513624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x513628: 0x2448aa10  addiu       $t0, $v0, -0x55F0
    ctx->pc = 0x513628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945296));
    // 0x51362c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x51362cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x513630: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x513630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x513634: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x513634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x513638: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x513638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x51363c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x51363cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x513640: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x513640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x513644: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x513644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x513648: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x513648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51364c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x51364cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x513650: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x513650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x513654: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x513654u;
    {
        const bool branch_taken_0x513654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513654u;
        // 0x513658: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513654) {
            ctx->pc = 0x513678u;
            goto label_513678;
        }
    }
    ctx->pc = 0x51365Cu;
    // 0x51365c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x51365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513660: 0x21023  negu        $v0, $v0
    ctx->pc = 0x513660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x513664: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x513664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x513668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x513668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x51366c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x51366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x513670: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x513670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x513674: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x513674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_513678:
    // 0x513678: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x513678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51367c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x51367cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x513680: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x513680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x513684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x513688: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x513688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51368c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x51368cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x513690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x513690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x513694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x513694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x513698: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x513698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x51369c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x51369cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x5136a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5136a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5136a4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x5136a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x5136a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5136a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5136ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5136acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5136b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5136B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5136B0u;
        // 0x5136b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5136B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5136B8u;
}
