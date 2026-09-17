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

// Function: sub_00348660
// Address: 0x348660 - 0x3487e8
void sub_00348660_0x348660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348660_0x348660");
#endif

    switch (ctx->pc) {
        case 0x3486b0u: goto label_3486b0;
        case 0x3486d4u: goto label_3486d4;
        default: break;
    }

    ctx->pc = 0x348660u;

    // 0x348660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x348664: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x348664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x348668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x348668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34866c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348670: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x348670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x348674: 0x2068821  addu        $s1, $s0, $a2
    ctx->pc = 0x348674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x348678: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x348678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x34867c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x348680: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x348680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x348684: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x348684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x348688: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x348688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34868c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x34868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x348690: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x348690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348694: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348698: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x348698u;
    {
        const bool branch_taken_0x348698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348698u;
        // 0x34869c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348698) {
            ctx->pc = 0x3487C0u;
            goto label_3487c0;
        }
    }
    ctx->pc = 0x3486A0u;
    // 0x3486a0: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x3486a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3486a4: 0x241300b0  addiu       $s3, $zero, 0xB0
    ctx->pc = 0x3486a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x3486a8: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x3486a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3486ac: 0x0  nop
    ctx->pc = 0x3486acu;
    // NOP
label_3486b0:
    // 0x3486b0: 0x1474000b  bne         $v1, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x3486B0u;
    {
        const bool branch_taken_0x3486b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x3486B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486B0u;
        // 0x3486b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486b0) {
            ctx->pc = 0x3486E0u;
            goto label_3486e0;
        }
    }
    ctx->pc = 0x3486B8u;
    // 0x3486b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3486b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3486bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3486bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486c0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3486c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3486c4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3486c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3486c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3486c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3486cc: 0xc0d2314  jal         func_348C50
    ctx->pc = 0x3486CCu;
    SET_GPR_U32(ctx, 31, 0x3486D4u);
    ctx->pc = 0x3486D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486CCu;
    // 0x3486d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C50u, 0x3486CCu, 0x3486D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486D4u;
label_3486d4:
    // 0x3486d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3486D4u;
    {
        const bool branch_taken_0x3486d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3486D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486D4u;
        // 0x3486d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486d4) {
            ctx->pc = 0x3487ACu;
            goto label_3487ac;
        }
    }
    ctx->pc = 0x3486DCu;
    // 0x3486dc: 0x0  nop
    ctx->pc = 0x3486dcu;
    // NOP
label_3486e0:
    // 0x3486e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3486E0u;
    {
        const bool branch_taken_0x3486e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3486E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486E0u;
        // 0x3486e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486e0) {
            ctx->pc = 0x3486F0u;
            goto label_3486f0;
        }
    }
    ctx->pc = 0x3486E8u;
    // 0x3486e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3486E8u;
    {
        const bool branch_taken_0x3486e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3486ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486E8u;
        // 0x3486ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486e8) {
            ctx->pc = 0x3486F8u;
            goto label_3486f8;
        }
    }
    ctx->pc = 0x3486F0u;
label_3486f0:
    // 0x3486f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3486F0u;
    {
        const bool branch_taken_0x3486f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3486F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486F0u;
        // 0x3486f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486f0) {
            ctx->pc = 0x348790u;
            goto label_348790;
        }
    }
    ctx->pc = 0x3486F8u;
label_3486f8:
    // 0x3486f8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3486F8u;
    {
        const bool branch_taken_0x3486f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3486FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486F8u;
        // 0x3486fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486f8) {
            ctx->pc = 0x348790u;
            goto label_348790;
        }
    }
    ctx->pc = 0x348700u;
    // 0x348700: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x348700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x348704: 0x93a60008  lbu         $a2, 0x8($sp)
    ctx->pc = 0x348704u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348708: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x348708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34870c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x34870cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348714: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x348714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x348718: 0x2cc5005f  sltiu       $a1, $a2, 0x5F
    ctx->pc = 0x348718u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x34871c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x34871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x348720: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348724: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348728: 0x265380a  movz        $a3, $s3, $a1
    ctx->pc = 0x348728u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x34872c: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x34872cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x348730: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x348730u;
    {
        const bool branch_taken_0x348730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348730u;
        // 0x348734: 0x27a5000c  addiu       $a1, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348730) {
            ctx->pc = 0x348748u;
            goto label_348748;
        }
    }
    ctx->pc = 0x348738u;
    // 0x348738: 0x2c420060  sltiu       $v0, $v0, 0x60
    ctx->pc = 0x348738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x34873c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x34873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x348740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x348740u;
    {
        const bool branch_taken_0x348740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348740u;
        // 0x348744: 0x242200b  movn        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348740) {
            ctx->pc = 0x34874Cu;
            goto label_34874c;
        }
    }
    ctx->pc = 0x348748u;
label_348748:
    // 0x348748: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_34874c:
    // 0x34874c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x34874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x348750: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x348750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x348754: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x348754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x348758: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x348758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x34875c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x348760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x348764: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x348768: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x348768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x34876c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34876Cu;
    {
        const bool branch_taken_0x34876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34876Cu;
        // 0x348770: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34876c) {
            ctx->pc = 0x3487C0u;
            goto label_3487c0;
        }
    }
    ctx->pc = 0x348774u;
    // 0x348774: 0x93a20008  lbu         $v0, 0x8($sp)
    ctx->pc = 0x348774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348778: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x348778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x34877c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34877cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x348780: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x348780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x348784: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x348784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x348788u;
    {
        const bool branch_taken_0x348788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348788u;
        // 0x34878c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348788) {
            ctx->pc = 0x3487A8u;
            goto label_3487a8;
        }
    }
    ctx->pc = 0x348790u;
label_348790:
    // 0x348790: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x348790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x348794: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x348794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x348798: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x348798u;
    {
        const bool branch_taken_0x348798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348798u;
        // 0x34879c: 0x93a20008  lbu         $v0, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348798) {
            ctx->pc = 0x3487C0u;
            goto label_3487c0;
        }
    }
    ctx->pc = 0x3487A0u;
    // 0x3487a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3487a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3487a4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3487a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3487a8:
    // 0x3487a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3487a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3487ac:
    // 0x3487ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3487acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3487b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3487b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3487b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3487b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3487b8: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3487B8u;
    {
        const bool branch_taken_0x3487b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3487BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487B8u;
        // 0x3487bc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3487b8) {
            ctx->pc = 0x3486B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3486b0;
        }
    }
    ctx->pc = 0x3487C0u;
label_3487c0:
    // 0x3487c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3487c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3487c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3487c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3487c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3487c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3487cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3487ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3487d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3487d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3487d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3487d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3487d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3487d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3487dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3487DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3487E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487DCu;
        // 0x3487e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3487DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3487E4u;
    // 0x3487e4: 0x0  nop
    ctx->pc = 0x3487e4u;
    // NOP
    ctx->pc = 0x3487e8u;
}
