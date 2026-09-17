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

// Function: sub_0050F7A0
// Address: 0x50f7a0 - 0x50fe30
void sub_0050F7A0_0x50f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F7A0_0x50f7a0");
#endif

    switch (ctx->pc) {
        case 0x50f7d8u: goto label_50f7d8;
        case 0x50f834u: goto label_50f834;
        case 0x50f8f8u: goto label_50f8f8;
        case 0x50f9c8u: goto label_50f9c8;
        case 0x50f9e0u: goto label_50f9e0;
        case 0x50fb68u: goto label_50fb68;
        case 0x50fbccu: goto label_50fbcc;
        case 0x50fd8cu: goto label_50fd8c;
        default: break;
    }

    ctx->pc = 0x50f7a0u;

    // 0x50f7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50f7a4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50f7a8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50f7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50f7b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x50f7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50f7b8: 0x2471c69c  addiu       $s1, $v1, -0x3964
    ctx->pc = 0x50f7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952604));
    // 0x50f7bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50f7c0: 0x2452c6a4  addiu       $s2, $v0, -0x395C
    ctx->pc = 0x50f7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952612));
    // 0x50f7c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50f7c8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x50f7c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x50f7cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50f7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50f7d0: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x50f7d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x50f7d4: 0x0  nop
    ctx->pc = 0x50f7d4u;
    // NOP
label_50f7d8:
    // 0x50f7d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50f7dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50f7e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50f7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f7e4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50f7e8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x50f7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x50f7ec: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x50f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x50f7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50f7f4: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x50f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50f7f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50f7fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f800: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50f800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50f804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f808: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50f808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f80c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x50f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x50f810: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50f814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f818: 0x460002f  bltz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x50F818u;
    {
        const bool branch_taken_0x50f818 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F818u;
        // 0x50f81c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f818) {
            ctx->pc = 0x50F8D8u;
            goto label_50f8d8;
        }
    }
    ctx->pc = 0x50F820u;
    // 0x50f820: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50f824: 0x2684c694  addiu       $a0, $s4, -0x396C
    ctx->pc = 0x50f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952596));
    // 0x50f828: 0x2450c698  addiu       $s0, $v0, -0x3968
    ctx->pc = 0x50f828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952600));
    // 0x50f82c: 0xc14481c  jal         func_512070
    ctx->pc = 0x50F82Cu;
    SET_GPR_U32(ctx, 31, 0x50F834u);
    ctx->pc = 0x50F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F82Cu;
    // 0x50f830: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50F82Cu, 0x50F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F834u;
label_50f834:
    // 0x50f834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50f834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50f838: 0x1443ffe7  bne         $v0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x50F838u;
    {
        const bool branch_taken_0x50f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F838u;
        // 0x50f83c: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f838) {
            ctx->pc = 0x50F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f7d8;
        }
    }
    ctx->pc = 0x50F840u;
    // 0x50f840: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x50f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50f844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f848: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x50f848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x50f84c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x50f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50f850: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x50f850u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f854: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f858: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50f858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50f85c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x50f85cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50f864: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50f864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f868: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50f868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50f86c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x50f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50f870: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x50f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50f874: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x50f874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x50f878: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x50f878u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f87c: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x50f87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x50f880: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50f880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50f884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50f884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f888: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50f888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50f88c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x50f88cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f890: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x50f890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x50f894: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f898: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50f898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50f89c: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x50f89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f8a0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x50f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x50f8a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f8a8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50f8a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50f8ac: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x50f8acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f8b0: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x50f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x50f8b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f8b8: 0xa448000c  sh          $t0, 0xC($v0)
    ctx->pc = 0x50f8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x50f8bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f8c0: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x50f8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50f8c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f8c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50f8cc: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x50F8CCu;
    {
        const bool branch_taken_0x50f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F8CCu;
        // 0x50f8d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f8cc) {
            ctx->pc = 0x50F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f7d8;
        }
    }
    ctx->pc = 0x50F8D4u;
    // 0x50f8d4: 0x0  nop
    ctx->pc = 0x50f8d4u;
    // NOP
label_50f8d8:
    // 0x50f8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50f8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50f8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50f8e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50f8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50f8e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50f8e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50f8e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50f8e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50f8ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x50F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F8F0u;
        // 0x50f8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F8F8u;
label_50f8f8:
    // 0x50f8f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x50f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x50f8fc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50f900: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x50f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x50f904: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50f904u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x50f908: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x50f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x50f90c: 0x2444c6b4  addiu       $a0, $v0, -0x394C
    ctx->pc = 0x50f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952628));
    // 0x50f910: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x50f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x50f914: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50f914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50f918: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x50f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x50f91c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x50f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x50f920: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x50f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x50f924: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x50f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x50f928: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x50f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x50f92c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x50f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x50f930: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x50f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x50f934: 0x86c2c6a8  lh          $v0, -0x3958($s6)
    ctx->pc = 0x50f934u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC6A8u));
    // 0x50f938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50f938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC6B4u));
    // 0x50f93c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50f940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f944: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f948: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50f94c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f950: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50f950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f954: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50f954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50f958: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x50f958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x50f95c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50f960: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f964: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50f964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50f968: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f96c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50f96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f970: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x50f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x50f974: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50f978: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f97c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50f980: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50f980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f984: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x50F984u;
    {
        const bool branch_taken_0x50f984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F984u;
        // 0x50f988: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f984) {
            ctx->pc = 0x50FAA0u;
            goto label_50faa0;
        }
    }
    ctx->pc = 0x50F98Cu;
    // 0x50f98c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f990: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50f994: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f998: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50f998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50f99c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50f99cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f9a0: 0x440003f  bltz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x50F9A0u;
    {
        const bool branch_taken_0x50f9a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F9A0u;
        // 0x50f9a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f9a0) {
            ctx->pc = 0x50FAA0u;
            goto label_50faa0;
        }
    }
    ctx->pc = 0x50F9A8u;
    // 0x50f9a8: 0x3c0c008f  lui         $t4, 0x8F
    ctx->pc = 0x50f9a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)143 << 16));
    // 0x50f9ac: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x50f9acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x50f9b0: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50f9b4: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x50f9b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50f9b8: 0x2470c698  addiu       $s0, $v1, -0x3968
    ctx->pc = 0x50f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952600));
    // 0x50f9bc: 0x2592c6ac  addiu       $s2, $t4, -0x3954
    ctx->pc = 0x50f9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952620));
    // 0x50f9c0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x50f9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x50f9c4: 0x2571c6b0  addiu       $s1, $t3, -0x3950
    ctx->pc = 0x50f9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952624));
label_50f9c8:
    // 0x50f9c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f9cc: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x50f9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50f9d0: 0x24e4c694  addiu       $a0, $a3, -0x396C
    ctx->pc = 0x50f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952596));
    // 0x50f9d4: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x50f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
    // 0x50f9d8: 0xc14481c  jal         func_512070
    ctx->pc = 0x50F9D8u;
    SET_GPR_U32(ctx, 31, 0x50F9E0u);
    ctx->pc = 0x50F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F9D8u;
    // 0x50f9dc: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50F9D8u, 0x50F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F9E0u;
label_50f9e0:
    // 0x50f9e0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x50f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x50f9e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50f9e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50f9ec: 0x24050284  addiu       $a1, $zero, 0x284
    ctx->pc = 0x50f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
    // 0x50f9f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x50f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x50f9f4: 0x3a403  sra         $s4, $v1, 16
    ctx->pc = 0x50f9f4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50f9f8: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x50f9f8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50f9fc: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x50F9FCu;
    {
        const bool branch_taken_0x50f9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x50FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F9FCu;
        // 0x50fa00: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f9fc) {
            ctx->pc = 0x50FA58u;
            goto label_50fa58;
        }
    }
    ctx->pc = 0x50FA04u;
    // 0x50fa04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa08: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x50fa08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x50fa0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa10: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x50fa10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fa14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa18: 0x9582c6ac  lhu         $v0, -0x3954($t4)
    ctx->pc = 0x50fa18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294952620)));
    // 0x50fa1c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x50fa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fa20: 0x9562c6b0  lhu         $v0, -0x3950($t3)
    ctx->pc = 0x50fa20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294952624)));
    // 0x50fa24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa28: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x50fa28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fa2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa30: 0xa4750008  sh          $s5, 0x8($v1)
    ctx->pc = 0x50fa30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x50fa34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa38: 0xa446000a  sh          $a2, 0xA($v0)
    ctx->pc = 0x50fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x50fa3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa40: 0xa475000c  sh          $s5, 0xC($v1)
    ctx->pc = 0x50fa40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 21));
    // 0x50fa44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa48: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x50fa48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fa4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fa50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50fa54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50fa58:
    // 0x50fa58: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50fa58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fa5c: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x50fa5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50fa60: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x50fa60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50fa64: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x50fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fa68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50fa6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50fa70: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x50fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x50fa74: 0x8506c6b4  lh          $a2, -0x394C($t0)
    ctx->pc = 0x50fa74u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x8EC6B4u));
    // 0x50fa78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50fa78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50fa7c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50fa80: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50fa80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50fa84: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x50fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x50fa88: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50fa88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50fa8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50fa8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50fa90: 0xd4302a  slt         $a2, $a2, $s4
    ctx->pc = 0x50fa90u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x50fa94: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x50fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x50fa98: 0x10c0ffcb  beqz        $a2, . + 4 + (-0x35 << 2)
    ctx->pc = 0x50FA98u;
    {
        const bool branch_taken_0x50fa98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FA98u;
        // 0x50fa9c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fa98) {
            ctx->pc = 0x50F9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f9c8;
        }
    }
    ctx->pc = 0x50FAA0u;
label_50faa0:
    // 0x50faa0: 0x26cac6a8  addiu       $t2, $s6, -0x3958
    ctx->pc = 0x50faa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952616));
    // 0x50faa4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50faa8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x50faa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50faac: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x50faacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50fab0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x50fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x50fab4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50fab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50fab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fabc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fac0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x50fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x50fac4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x50fac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50fac8: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x50FAC8u;
    {
        const bool branch_taken_0x50fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FAC8u;
        // 0x50facc: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fac8) {
            ctx->pc = 0x50FD74u;
            goto label_50fd74;
        }
    }
    ctx->pc = 0x50FAD0u;
    // 0x50fad0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50fad4: 0x2446c6b8  addiu       $a2, $v0, -0x3948
    ctx->pc = 0x50fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952632));
    // 0x50fad8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x50fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x50fadc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fae0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50fae4: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x50fae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50fae8: 0x2488c6b4  addiu       $t0, $a0, -0x394C
    ctx->pc = 0x50fae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952628));
    // 0x50faec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50faf0: 0x24e9c6a4  addiu       $t1, $a3, -0x395C
    ctx->pc = 0x50faf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952612));
    // 0x50faf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50faf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50faf8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50fafc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x50fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50fb00: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x50fb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x50fb04: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x50fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50fb08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x50fb08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50fb0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x50fb10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50fb14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50fb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50fb18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50fb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50fb1c: 0x84c70000  lh          $a3, 0x0($a2)
    ctx->pc = 0x50fb1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fb20: 0x34420280  ori         $v0, $v0, 0x280
    ctx->pc = 0x50fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    // 0x50fb24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50fb24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50fb28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50fb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50fb2c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50fb30: 0x4e0007d  bltz        $a3, . + 4 + (0x7D << 2)
    ctx->pc = 0x50FB30u;
    {
        const bool branch_taken_0x50fb30 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x50FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FB30u;
        // 0x50fb34: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fb30) {
            ctx->pc = 0x50FD28u;
            goto label_50fd28;
        }
    }
    ctx->pc = 0x50FB38u;
    // 0x50fb38: 0x3c0c008f  lui         $t4, 0x8F
    ctx->pc = 0x50fb38u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)143 << 16));
    // 0x50fb3c: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x50fb3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x50fb40: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50fb44: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x50fb44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50fb48: 0x2452c6a0  addiu       $s2, $v0, -0x3960
    ctx->pc = 0x50fb48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952608));
    // 0x50fb4c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x50fb4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50fb50: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x50fb50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50fb54: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x50fb54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x50fb58: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x50fb58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50fb5c: 0x2596c6ac  addiu       $s6, $t4, -0x3954
    ctx->pc = 0x50fb5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952620));
    // 0x50fb60: 0x2575c6b0  addiu       $s5, $t3, -0x3950
    ctx->pc = 0x50fb60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952624));
    // 0x50fb64: 0x0  nop
    ctx->pc = 0x50fb64u;
    // NOP
label_50fb68:
    // 0x50fb68: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x50fb68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50fb6c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x50fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50fb70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50fb74: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50fb74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50fb78: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x50fb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50fb7c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50fb80: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x50fb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x50fb84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fb88: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x50fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x50fb8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fb90: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x50fb90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50fb94: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x50fb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x50fb98: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50fb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50fb9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fba0: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x50FBA0u;
    {
        const bool branch_taken_0x50fba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FBA0u;
        // 0x50fba4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fba0) {
            ctx->pc = 0x50FCCCu;
            goto label_50fccc;
        }
    }
    ctx->pc = 0x50FBA8u;
    // 0x50fba8: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x50fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50fbac: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50fbb0: 0x2510c698  addiu       $s0, $t0, -0x3968
    ctx->pc = 0x50fbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952600));
    // 0x50fbb4: 0x2444c694  addiu       $a0, $v0, -0x396C
    ctx->pc = 0x50fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952596));
    // 0x50fbb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC698u));
    // 0x50fbbc: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x50fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x50fbc0: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x50fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
    // 0x50fbc4: 0xc14481c  jal         func_512070
    ctx->pc = 0x50FBC4u;
    SET_GPR_U32(ctx, 31, 0x50FBCCu);
    ctx->pc = 0x50FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50FBC4u;
    // 0x50fbc8: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50FBC4u, 0x50FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50FBCCu;
label_50fbcc:
    // 0x50fbcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50fbd0: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x50fbd0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50fbd4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x50fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x50fbd8: 0x7bab0010  lq          $t3, 0x10($sp)
    ctx->pc = 0x50fbd8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50fbdc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x50FBDCu;
    {
        const bool branch_taken_0x50fbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FBDCu;
        // 0x50fbe0: 0x7bac0020  lq          $t4, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fbdc) {
            ctx->pc = 0x50FC40u;
            goto label_50fc40;
        }
    }
    ctx->pc = 0x50FBE4u;
    // 0x50fbe4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50fbe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fbec: 0x9462c6a4  lhu         $v0, -0x395C($v1)
    ctx->pc = 0x50fbecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8EC6A4u));
    // 0x50fbf0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50fbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fbf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fbf8: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x50fbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fbfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc00: 0x9582c6ac  lhu         $v0, -0x3954($t4)
    ctx->pc = 0x50fc00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294952620)));
    // 0x50fc04: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x50fc04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fc08: 0x9562c6b0  lhu         $v0, -0x3950($t3)
    ctx->pc = 0x50fc08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294952624)));
    // 0x50fc0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc10: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x50fc10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fc14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc18: 0xa46a0008  sh          $t2, 0x8($v1)
    ctx->pc = 0x50fc18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x50fc1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc20: 0xa446000a  sh          $a2, 0xA($v0)
    ctx->pc = 0x50fc20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x50fc24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc28: 0xa46a000c  sh          $t2, 0xC($v1)
    ctx->pc = 0x50fc28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x50fc2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc30: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x50fc30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fc34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fc38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50fc3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50fc40:
    // 0x50fc40: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50fc44: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x50fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fc48: 0x8487c6b4  lh          $a3, -0x394C($a0)
    ctx->pc = 0x50fc48u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x8EC6B4u));
    // 0x50fc4c: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x50fc4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50fc50: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x50fc50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50fc54: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x50fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50fc58: 0xf11025  or          $v0, $a3, $s1
    ctx->pc = 0x50fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x50fc5c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x50fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x50fc60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x50fc60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x50fc64: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50fc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50fc68: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x50fc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x50fc6c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x50fc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x50fc70: 0x86a90000  lh          $t1, 0x0($s5)
    ctx->pc = 0x50fc70u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50fc74: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x50fc74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50fc78: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x50fc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50fc7c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x50fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x50fc80: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x50fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x50fc84: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x50fc84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50fc88: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50fc88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fc8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50fc90: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50fc90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50fc94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50fc98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fc9c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50fca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50fca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50fca4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50fca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fca8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x50fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x50fcac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50fcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50fcb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50fcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50fcb4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50fcb8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50fcb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50fcbc: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x50fcbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x50fcc0: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x50fcc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x50fcc4: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x50fcc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x50fcc8: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x50fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
label_50fccc:
    // 0x50fccc: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x50fcccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50fcd0: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x50fcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x50fcd4: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x50fcd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50fcd8: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x50fcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50fcdc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x50fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50fce0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50fce4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x50fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50fce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50fcec: 0x8507c6b8  lh          $a3, -0x3948($t0)
    ctx->pc = 0x50fcecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294952632)));
    // 0x50fcf0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x50fcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x50fcf4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50fcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50fcf8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x50fcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x50fcfc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50fd00: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50fd04: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x50fd04u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x50fd08: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50fd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50fd0c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50fd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50fd10: 0xf4382a  slt         $a3, $a3, $s4
    ctx->pc = 0x50fd10u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x50fd14: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x50fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x50fd18: 0x10e0ff93  beqz        $a3, . + 4 + (-0x6D << 2)
    ctx->pc = 0x50FD18u;
    {
        const bool branch_taken_0x50fd18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FD18u;
        // 0x50fd1c: 0xaee50000  sw          $a1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fd18) {
            ctx->pc = 0x50FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50fb68;
        }
    }
    ctx->pc = 0x50FD20u;
    // 0x50fd20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50FD20u;
    {
        const bool branch_taken_0x50fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FD20u;
        // 0x50fd24: 0x2586c6ac  addiu       $a2, $t4, -0x3954 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50fd20) {
            ctx->pc = 0x50FD34u;
            goto label_50fd34;
        }
    }
    ctx->pc = 0x50FD28u;
label_50fd28:
    // 0x50fd28: 0x3c0c008f  lui         $t4, 0x8F
    ctx->pc = 0x50fd28u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)143 << 16));
    // 0x50fd2c: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x50fd2cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x50fd30: 0x2586c6ac  addiu       $a2, $t4, -0x3954
    ctx->pc = 0x50fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952620));
label_50fd34:
    // 0x50fd34: 0x2567c6b0  addiu       $a3, $t3, -0x3950
    ctx->pc = 0x50fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952624));
    // 0x50fd38: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x50fd38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fd3c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50fd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50fd40: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x50fd40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50fd44: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x50fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50fd48: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x50fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x50fd4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50fd50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x50fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x50fd54: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x50fd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x50fd58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50fd58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50fd5c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x50fd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x50fd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50fd64: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x50fd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x50fd68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50fd6c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x50fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x50fd70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_50fd74:
    // 0x50fd74: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50fd78: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50fd7c: 0x2450c698  addiu       $s0, $v0, -0x3968
    ctx->pc = 0x50fd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952600));
    // 0x50fd80: 0x2464c694  addiu       $a0, $v1, -0x396C
    ctx->pc = 0x50fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952596));
    // 0x50fd84: 0xc14481c  jal         func_512070
    ctx->pc = 0x50FD84u;
    SET_GPR_U32(ctx, 31, 0x50FD8Cu);
    ctx->pc = 0x50FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50FD84u;
    // 0x50fd88: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50FD84u, 0x50FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50FD8Cu;
label_50fd8c:
    // 0x50fd8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50fd90: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x50FD90u;
    {
        const bool branch_taken_0x50fd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50fd90) {
            ctx->pc = 0x50FD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50FD90u;
            // 0x50fd94: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50FE04u;
            goto label_50fe04;
        }
    }
    ctx->pc = 0x50FD98u;
    // 0x50fd98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fd9c: 0x24020285  addiu       $v0, $zero, 0x285
    ctx->pc = 0x50fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
    // 0x50fda0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50fda4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50fda8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x50fda8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50fdac: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x50fdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x50fdb0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x50fdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x50fdb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdb8: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x50fdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fdbc: 0x9483c6ac  lhu         $v1, -0x3954($a0)
    ctx->pc = 0x50fdbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC6ACu));
    // 0x50fdc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdc4: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x50fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x50fdc8: 0x94a4c6b0  lhu         $a0, -0x3950($a1)
    ctx->pc = 0x50fdc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC6B0u));
    // 0x50fdcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdd0: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x50fdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x50fdd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdd8: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x50fdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x50fddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fde0: 0xa447000a  sh          $a3, 0xA($v0)
    ctx->pc = 0x50fde0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x50fde4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fde8: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x50fde8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x50fdec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdf0: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x50fdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50fdf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50fdf8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50fdfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50fe00: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x50fe00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50fe04:
    // 0x50fe04: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x50fe04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50fe08: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x50fe08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50fe0c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x50fe0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50fe10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x50fe10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50fe14: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x50fe14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50fe18: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x50fe18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50fe1c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x50fe1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50fe20: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x50fe20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50fe24: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x50fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x50fe28: 0x3e00008  jr          $ra
    ctx->pc = 0x50FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50FE28u;
        // 0x50fe2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50FE30u;
}
