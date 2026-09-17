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

// Function: sub_0050DA90
// Address: 0x50da90 - 0x50e6c0
void sub_0050DA90_0x50da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050DA90_0x50da90");
#endif

    switch (ctx->pc) {
        case 0x50dbe4u: goto label_50dbe4;
        case 0x50dc20u: goto label_50dc20;
        case 0x50dc38u: goto label_50dc38;
        case 0x50dc68u: goto label_50dc68;
        case 0x50dca0u: goto label_50dca0;
        case 0x50ddd8u: goto label_50ddd8;
        case 0x50debcu: goto label_50debc;
        case 0x50df20u: goto label_50df20;
        case 0x50dfa4u: goto label_50dfa4;
        case 0x50e000u: goto label_50e000;
        case 0x50e038u: goto label_50e038;
        case 0x50e060u: goto label_50e060;
        case 0x50e090u: goto label_50e090;
        case 0x50e150u: goto label_50e150;
        case 0x50e338u: goto label_50e338;
        case 0x50e344u: goto label_50e344;
        case 0x50e378u: goto label_50e378;
        case 0x50e438u: goto label_50e438;
        case 0x50e550u: goto label_50e550;
        case 0x50e640u: goto label_50e640;
        case 0x50e64cu: goto label_50e64c;
        case 0x50e690u: goto label_50e690;
        default: break;
    }

    ctx->pc = 0x50da90u;

    // 0x50da90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x50da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x50da94: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50da98: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x50da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x50da9c: 0x2444f080  addiu       $a0, $v0, -0xF80
    ctx->pc = 0x50da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50daa0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x50daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x50daa4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x50daa4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50daa8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x50daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x50daac: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x50daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x50dab0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x50dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x50dab4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x50dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x50dab8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x50dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x50dabc: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x50dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x50dac0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x50dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x50dac4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x50dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x50dac8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x50dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x50dacc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x50daccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x50dad0: 0x84824cc4  lh          $v0, 0x4CC4($a0)
    ctx->pc = 0x50dad0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903D44u));
    // 0x50dad4: 0x104002ee  beqz        $v0, . + 4 + (0x2EE << 2)
    ctx->pc = 0x50DAD4u;
    {
        const bool branch_taken_0x50dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DAD4u;
        // 0x50dad8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dad4) {
            ctx->pc = 0x50E690u;
            goto label_50e690;
        }
    }
    ctx->pc = 0x50DADCu;
    // 0x50dadc: 0x8c834de8  lw          $v1, 0x4DE8($a0)
    ctx->pc = 0x50dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19944)));
    // 0x50dae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50dae4: 0x106202ea  beq         $v1, $v0, . + 4 + (0x2EA << 2)
    ctx->pc = 0x50DAE4u;
    {
        const bool branch_taken_0x50dae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DAE4u;
        // 0x50dae8: 0x24023fff  addiu       $v0, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dae4) {
            ctx->pc = 0x50E690u;
            goto label_50e690;
        }
    }
    ctx->pc = 0x50DAECu;
    // 0x50daec: 0x84830076  lh          $v1, 0x76($a0)
    ctx->pc = 0x50daecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 118)));
    // 0x50daf0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x50daf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x50daf4: 0x84850074  lh          $a1, 0x74($a0)
    ctx->pc = 0x50daf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x50daf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50dafc: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x50dafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50db00: 0x304b7800  andi        $t3, $v0, 0x7800
    ctx->pc = 0x50db00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30720);
    // 0x50db04: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x50db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x50db08: 0x31624000  andi        $v0, $t3, 0x4000
    ctx->pc = 0x50db08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16384);
    // 0x50db0c: 0x2409f800  addiu       $t1, $zero, -0x800
    ctx->pc = 0x50db0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x50db10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50db14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50db18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50db18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50db1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x50db1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50db20: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50db24: 0x30564000  andi        $s6, $v0, 0x4000
    ctx->pc = 0x50db24u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x50db28: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50db28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50db2c: 0x16180a  movz        $v1, $zero, $s6
    ctx->pc = 0x50db2cu;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x50db30: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x50db30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50db34: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x50db34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50db38: 0x32d67800  andi        $s6, $s6, 0x7800
    ctx->pc = 0x50db38u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)30720);
    // 0x50db3c: 0x1765826  xor         $t3, $t3, $s6
    ctx->pc = 0x50db3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 22));
    // 0x50db40: 0x30b6f800  andi        $s6, $a1, 0xF800
    ctx->pc = 0x50db40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63488);
    // 0x50db44: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x50db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x50db48: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50db48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50db4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50db50: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x50db50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50db54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50db54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50db58: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x50db58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50db5c: 0x304c8000  andi        $t4, $v0, 0x8000
    ctx->pc = 0x50db5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x50db60: 0xb2c00  sll         $a1, $t3, 16
    ctx->pc = 0x50db60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50db64: 0x3582ffff  ori         $v0, $t4, 0xFFFF
    ctx->pc = 0x50db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x50db68: 0x306301e0  andi        $v1, $v1, 0x1E0
    ctx->pc = 0x50db68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)480);
    // 0x50db6c: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x50db6cu;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x50db70: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50db70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50db74: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x50db74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50db78: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x50db78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x50db7c: 0x3182ffff  andi        $v0, $t4, 0xFFFF
    ctx->pc = 0x50db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x50db80: 0x1896024  and         $t4, $t4, $t1
    ctx->pc = 0x50db80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x50db84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x50db84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x50db88: 0x34c8ffff  ori         $t0, $a2, 0xFFFF
    ctx->pc = 0x50db88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50db8c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50db90: 0x30d50020  andi        $s5, $a2, 0x20
    ctx->pc = 0x50db90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x50db94: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x50db94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x50db98: 0x2ccb026  xor         $s6, $s6, $t4
    ctx->pc = 0x50db98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 12));
    // 0x50db9c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x50db9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50dba0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x50dba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50dba4: 0x3063001e  andi        $v1, $v1, 0x1E
    ctx->pc = 0x50dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30);
    // 0x50dba8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x50dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x50dbac: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x50dbacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50dbb0: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50dbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50dbb4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50dbb8: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50dbbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50dbc0: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x50dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x50dbc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50dbc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50dbc8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dbcc: 0x1023024  and         $a2, $t0, $v0
    ctx->pc = 0x50dbccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x50dbd0: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x50dbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50dbd4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50dbd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x50dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x50dbdc: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50DBDCu;
    SET_GPR_U32(ctx, 31, 0x50DBE4u);
    ctx->pc = 0x50DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DBDCu;
    // 0x50dbe0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50DBDCu, 0x50DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DBE4u;
label_50dbe4:
    // 0x50dbe4: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50dbe4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50dbe8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dbec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x50dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x50dbf0: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x50dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50dbf4: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x50dbf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dbf8: 0x1761025  or          $v0, $t3, $s6
    ctx->pc = 0x50dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 22));
    // 0x50dbfc: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x50dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50dc00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50dc04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50dc04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50dc08: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dc0c: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x50dc0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dc10: 0xb2c00  sll         $a1, $t3, 16
    ctx->pc = 0x50dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50dc14: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50dc18: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50DC18u;
    SET_GPR_U32(ctx, 31, 0x50DC20u);
    ctx->pc = 0x50DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DC18u;
    // 0x50dc1c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50DC18u, 0x50DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DC20u;
label_50dc20:
    // 0x50dc20: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50dc20u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50dc24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dc28: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x50dc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50dc2c: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x50dc2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dc30: 0xc1414aa  jal         func_5052A8
    ctx->pc = 0x50DC30u;
    SET_GPR_U32(ctx, 31, 0x50DC38u);
    ctx->pc = 0x50DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DC30u;
    // 0x50dc34: 0x7fab0050  sq          $t3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5052A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5052A8u, 0x50DC30u, 0x50DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DC38u;
label_50dc38:
    // 0x50dc38: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50dc38u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50dc3c: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50dc40: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50dc40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50dc44: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x50dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x50dc48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x50dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50dc4c: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x50dc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x50dc50: 0xa3200b  movn        $a0, $a1, $v1
    ctx->pc = 0x50dc50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x50dc54: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x50dc54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x50dc58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x50dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x50dc5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x50dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x50dc60: 0xc124620  jal         func_491880
    ctx->pc = 0x50DC60u;
    SET_GPR_U32(ctx, 31, 0x50DC68u);
    ctx->pc = 0x50DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DC60u;
    // 0x50dc64: 0x8c9e0000  lw          $fp, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50DC60u, 0x50DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DC68u;
label_50dc68:
    // 0x50dc68: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x50dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x50dc6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50dc70: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50dc74: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x50dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x50dc78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x50dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50dc7c: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50dc7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dc80: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50dc80u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50dc84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50dc84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50dc88: 0x24947c00  addiu       $s4, $a0, 0x7C00
    ctx->pc = 0x50dc88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 31744));
    // 0x50dc8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50dc90: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x50dc90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50dc94: 0x14800047  bnez        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x50DC94u;
    {
        const bool branch_taken_0x50dc94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x50DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DC94u;
        // 0x50dc98: 0x7bad0070  lq          $t5, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dc94) {
            ctx->pc = 0x50DDB4u;
            goto label_50ddb4;
        }
    }
    ctx->pc = 0x50DC9Cu;
    // 0x50dc9c: 0x32c40007  andi        $a0, $s6, 0x7
    ctx->pc = 0x50dc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_50dca0:
    // 0x50dca0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dca0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dca4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dca8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dca8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcac: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcb0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcb4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcb8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcbc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcc0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcc4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcc8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dccc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcd0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcd4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcd8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcdc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dce0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dce0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dce4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dce8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dce8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcec: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcf0: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcf4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dcf8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dcfc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd00: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd04: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd08: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd0c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd10: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd14: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd18: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd1c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd20: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd24: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd28: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd2c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd30: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd34: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd38: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd3c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd40: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd44: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd48: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd4c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd50: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd54: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd58: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd5c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd60: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd64: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd68: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd6c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd70: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd74: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd78: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd7c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x50dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x50dd84: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50dd8c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd90: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dd94: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dd98: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x50dd98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50dd9c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50dda0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x50dda0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x50dda4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x50dda4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x50dda8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x50dda8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50ddac: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x50DDACu;
    {
        const bool branch_taken_0x50ddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DDACu;
        // 0x50ddb0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ddac) {
            ctx->pc = 0x50DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50dca0;
        }
    }
    ctx->pc = 0x50DDB4u;
label_50ddb4:
    // 0x50ddb4: 0x97cb0000  lhu         $t3, 0x0($fp)
    ctx->pc = 0x50ddb4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50ddb8: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x50ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50ddbc: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x50DDBCu;
    {
        const bool branch_taken_0x50ddbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DDBCu;
        // 0x50ddc0: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ddbc) {
            ctx->pc = 0x50DEA4u;
            goto label_50dea4;
        }
    }
    ctx->pc = 0x50DDC4u;
    // 0x50ddc4: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50ddc8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x50ddc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ddcc: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x50ddccu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ddd0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50ddd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50ddd4: 0x0  nop
    ctx->pc = 0x50ddd4u;
    // NOP
label_50ddd8:
    // 0x50ddd8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x50ddd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50dddc: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x50dddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50dde0: 0x2c82824  and         $a1, $s6, $t0
    ctx->pc = 0x50dde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 8));
    // 0x50dde4: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x50dde4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50dde8: 0x1621026  xor         $v0, $t3, $v0
    ctx->pc = 0x50dde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 2));
    // 0x50ddec: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x50ddecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50ddf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ddf4: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x50ddf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x50ddf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ddf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ddfc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50de00: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x50de00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50de04: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x50de04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x50de08: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50de08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50de0c: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x50de0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x50de10: 0x3565ffff  ori         $a1, $t3, 0xFFFF
    ctx->pc = 0x50de10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50de14: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x50de14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x50de18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50de18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50de1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50de1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50de20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x50de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x50de24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x50de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x50de28: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x50de28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x50de2c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50de30: 0x36c4ffff  ori         $a0, $s6, 0xFFFF
    ctx->pc = 0x50de30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50de34: 0xa35824  and         $t3, $a1, $v1
    ctx->pc = 0x50de34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50de38: 0x82b024  and         $s6, $a0, $v0
    ctx->pc = 0x50de38u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50de3c: 0x316301e0  andi        $v1, $t3, 0x1E0
    ctx->pc = 0x50de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)480);
    // 0x50de40: 0x32c4001e  andi        $a0, $s6, 0x1E
    ctx->pc = 0x50de40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)30);
    // 0x50de44: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x50de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x50de48: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x50de48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x50de4c: 0x3562ffff  ori         $v0, $t3, 0xFFFF
    ctx->pc = 0x50de4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50de50: 0x36c5ffff  ori         $a1, $s6, 0xFFFF
    ctx->pc = 0x50de50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50de54: 0x435824  and         $t3, $v0, $v1
    ctx->pc = 0x50de54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50de58: 0xa4b024  and         $s6, $a1, $a0
    ctx->pc = 0x50de58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x50de5c: 0x1761025  or          $v0, $t3, $s6
    ctx->pc = 0x50de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 22));
    // 0x50de60: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x50de60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50de64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50de64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50de68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50de68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50de6c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50de70: 0x825824  and         $t3, $a0, $v0
    ctx->pc = 0x50de70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50de74: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50de74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50de78: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x50de78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50de7c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50de7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x50de80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50de84: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x50de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x50de88: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x50de88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x50de8c: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x50de8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50de90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50de94: 0x825824  and         $t3, $a0, $v0
    ctx->pc = 0x50de94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50de98: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50de98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50de9c: 0x461ffce  bgez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x50DE9Cu;
    {
        const bool branch_taken_0x50de9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50DE9Cu;
        // 0x50dea0: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50de9c) {
            ctx->pc = 0x50DDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ddd8;
        }
    }
    ctx->pc = 0x50DEA4u;
label_50dea4:
    // 0x50dea4: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50dea8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x50dea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x50deac: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50deacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50deb0: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x50deb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50deb4: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x50DEB4u;
    SET_GPR_U32(ctx, 31, 0x50DEBCu);
    ctx->pc = 0x50DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DEB4u;
    // 0x50deb8: 0x7fad0070  sq          $t5, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x50DEB4u, 0x50DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DEBCu;
label_50debc:
    // 0x50debc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x50debcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50dec0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x50dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50dec4: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x50dec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x50dec8: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x50dec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50decc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ded0: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50ded4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50ded8: 0x24b2f080  addiu       $s2, $a1, -0xF80
    ctx->pc = 0x50ded8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x50dedc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x50dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50dee4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50dee8: 0x36c6ffff  ori         $a2, $s6, 0xFFFF
    ctx->pc = 0x50dee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50deec: 0x24544c00  addiu       $s4, $v0, 0x4C00
    ctx->pc = 0x50deecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
    // 0x50def0: 0x3417e828  ori         $s7, $zero, 0xE828
    ctx->pc = 0x50def0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59432);
    // 0x50def4: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x50def4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x50def8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x50def8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50defc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x50defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x50df00: 0xb01825  or          $v1, $a1, $s0
    ctx->pc = 0x50df00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x50df04: 0xc3b024  and         $s6, $a2, $v1
    ctx->pc = 0x50df04u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x50df08: 0x32c207ff  andi        $v0, $s6, 0x7FF
    ctx->pc = 0x50df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    // 0x50df0c: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50df10: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df14: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50df14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50df18: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50DF18u;
    SET_GPR_U32(ctx, 31, 0x50DF20u);
    ctx->pc = 0x50DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DF18u;
    // 0x50df1c: 0xa656008c  sh          $s6, 0x8C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 140), (uint16_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50DF18u, 0x50DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DF20u;
label_50df20:
    // 0x50df20: 0x36a5ffff  ori         $a1, $s5, 0xFFFF
    ctx->pc = 0x50df20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50df24: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x50df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50df28: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df2c: 0x36c6ffff  ori         $a2, $s6, 0xFFFF
    ctx->pc = 0x50df2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50df30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x50df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x50df34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50df34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50df38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50df38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50df3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50df40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50df40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50df44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50df44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50df48: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x50df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x50df4c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50df50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50df54: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50df54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50df58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50df58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50df5c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50df5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50df60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x50df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x50df64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50df6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50df70: 0x86620010  lh          $v0, 0x10($s3)
    ctx->pc = 0x50df70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x50df74: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df78: 0xa2a824  and         $s5, $a1, $v0
    ctx->pc = 0x50df78u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50df7c: 0x152c00  sll         $a1, $s5, 16
    ctx->pc = 0x50df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50df80: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x50df80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x50df84: 0xb01825  or          $v1, $a1, $s0
    ctx->pc = 0x50df84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x50df88: 0xc3b024  and         $s6, $a2, $v1
    ctx->pc = 0x50df88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x50df8c: 0x32c207ff  andi        $v0, $s6, 0x7FF
    ctx->pc = 0x50df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    // 0x50df90: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50df94: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50df98: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50df98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50df9c: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50DF9Cu;
    SET_GPR_U32(ctx, 31, 0x50DFA4u);
    ctx->pc = 0x50DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DF9Cu;
    // 0x50dfa0: 0xa656008a  sh          $s6, 0x8A($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50DF9Cu, 0x50DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50DFA4u;
label_50dfa4:
    // 0x50dfa4: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x50dfa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50dfa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x50dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50dfac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dfb0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x50dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x50dfb4: 0x36a5ffff  ori         $a1, $s5, 0xFFFF
    ctx->pc = 0x50dfb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50dfb8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x50dfb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x50dfbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50dfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50dfc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50dfc4: 0xa2a824  and         $s5, $a1, $v0
    ctx->pc = 0x50dfc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50dfc8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50dfcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50dfd0: 0x32a5000f  andi        $a1, $s5, 0xF
    ctx->pc = 0x50dfd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x50dfd4: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50dfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50dfd8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x50dfd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50dfdc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x50dfdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x50dfe0: 0x85a824  and         $s5, $a0, $a1
    ctx->pc = 0x50dfe0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x50dfe4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x50dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x50dfe8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50dfec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50dfecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50dff0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50dff4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50dff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50dff8: 0xc142c32  jal         func_50B0C8
    ctx->pc = 0x50DFF8u;
    SET_GPR_U32(ctx, 31, 0x50E000u);
    ctx->pc = 0x50DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50DFF8u;
    // 0x50dffc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B0C8u, 0x50DFF8u, 0x50E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E000u;
label_50e000:
    // 0x50e000: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x50e000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x50e004: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x50e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e008: 0x8e524e08  lw          $s2, 0x4E08($s2)
    ctx->pc = 0x50e008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19976)));
    // 0x50e00c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50e010: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x50e010u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50e014: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x50e014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e018: 0x503024  and         $a2, $v0, $s0
    ctx->pc = 0x50e018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x50e01c: 0x2463ffc2  addiu       $v1, $v1, -0x3E
    ctx->pc = 0x50e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967234));
    // 0x50e020: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x50e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x50e024: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50e024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50e028: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x50e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x50e02c: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50e02cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50e030: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50e030u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50e034: 0x0  nop
    ctx->pc = 0x50e034u;
    // NOP
label_50e038:
    // 0x50e038: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x50e038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50e03c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50e03cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50e040: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50e040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50e044: 0x460006b  bltz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x50E044u;
    {
        const bool branch_taken_0x50e044 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E044u;
        // 0x50e048: 0x3c050090  lui         $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e044) {
            ctx->pc = 0x50E1F4u;
            goto label_50e1f4;
        }
    }
    ctx->pc = 0x50E04Cu;
    // 0x50e04c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50e04cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x50e050: 0x24a2f080  addiu       $v0, $a1, -0xF80
    ctx->pc = 0x50e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x50e054: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50e054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50e058: 0x8c444df8  lw          $a0, 0x4DF8($v0)
    ctx->pc = 0x50e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19960)));
    // 0x50e05c: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x50e05cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_50e060:
    // 0x50e060: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x50e060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50e064: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50e068: 0x3564ffff  ori         $a0, $t3, 0xFFFF
    ctx->pc = 0x50e068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50e06c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x50e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x50e070: 0x825824  and         $t3, $a0, $v0
    ctx->pc = 0x50e070u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50e074: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50e074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50e078: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x50E078u;
    {
        const bool branch_taken_0x50e078 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E078u;
        // 0x50e07c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e078) {
            ctx->pc = 0x50E1F4u;
            goto label_50e1f4;
        }
    }
    ctx->pc = 0x50E080u;
    // 0x50e080: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50e084: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x50e084u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x50e088: 0x2452f080  addiu       $s2, $v0, -0xF80
    ctx->pc = 0x50e088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50e08c: 0x0  nop
    ctx->pc = 0x50e08cu;
    // NOP
label_50e090:
    // 0x50e090: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x50e090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50e094: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50e094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e098: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e09c: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x50e09cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50e0a0: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50e0a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e0a4: 0x96444e04  lhu         $a0, 0x4E04($s2)
    ctx->pc = 0x50e0a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 19972)));
    // 0x50e0a8: 0x36c210ff  ori         $v0, $s6, 0x10FF
    ctx->pc = 0x50e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)4351);
    // 0x50e0ac: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e0b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50e0b4: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x50e0b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e0b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e0b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e0bc: 0x3587ffff  ori         $a3, $t4, 0xFFFF
    ctx->pc = 0x50e0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x50e0c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e0c4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x50e0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x50e0c8: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50e0c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e0cc: 0x35a2ffff  ori         $v0, $t5, 0xFFFF
    ctx->pc = 0x50e0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x50e0d0: 0xe56024  and         $t4, $a3, $a1
    ctx->pc = 0x50e0d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x50e0d4: 0xd02825  or          $a1, $a2, $s0
    ctx->pc = 0x50e0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x50e0d8: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x50e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x50e0dc: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x50e0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x50e0e0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50e0e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50e0e4: 0x456824  and         $t5, $v0, $a1
    ctx->pc = 0x50e0e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50e0e8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x50e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x50e0ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50e0f0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50e0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50e0f4: 0x31a5000f  andi        $a1, $t5, 0xF
    ctx->pc = 0x50e0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x50e0f8: 0x36c2ffff  ori         $v0, $s6, 0xFFFF
    ctx->pc = 0x50e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e0fc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50e0fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50e100: 0x43b024  and         $s6, $v0, $v1
    ctx->pc = 0x50e100u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50e104: 0x3582ffff  ori         $v0, $t4, 0xFFFF
    ctx->pc = 0x50e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x50e108: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x50e108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x50e10c: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x50e10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x50e110: 0x35a3ffff  ori         $v1, $t5, 0xFFFF
    ctx->pc = 0x50e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x50e114: 0x446024  and         $t4, $v0, $a0
    ctx->pc = 0x50e114u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50e118: 0x656824  and         $t5, $v1, $a1
    ctx->pc = 0x50e118u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x50e11c: 0xc2c00  sll         $a1, $t4, 16
    ctx->pc = 0x50e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x50e120: 0x32c20f00  andi        $v0, $s6, 0xF00
    ctx->pc = 0x50e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3840);
    // 0x50e124: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x50e124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e128: 0xd8c00  sll         $s1, $t5, 16
    ctx->pc = 0x50e128u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x50e12c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e130: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x50e130u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e134: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x50e134u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x50e138: 0x112403  sra         $a0, $s1, 16
    ctx->pc = 0x50e138u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    // 0x50e13c: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50e140: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50e144: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x50e144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x50e148: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x50E148u;
    SET_GPR_U32(ctx, 31, 0x50E150u);
    ctx->pc = 0x50E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E148u;
    // 0x50e14c: 0x7fad0070  sq          $t5, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x50E148u, 0x50E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E150u;
label_50e150:
    // 0x50e150: 0x32c30f00  andi        $v1, $s6, 0xF00
    ctx->pc = 0x50e150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3840);
    // 0x50e154: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e158: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50e15c: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50e15cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50e160: 0x83a824  and         $s5, $a0, $v1
    ctx->pc = 0x50e160u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50e164: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e168: 0x151c00  sll         $v1, $s5, 16
    ctx->pc = 0x50e168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e16c: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e170: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x50e170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x50e174: 0x3585ffff  ori         $a1, $t4, 0xFFFF
    ctx->pc = 0x50e174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x50e178: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x50e17c: 0xa26024  and         $t4, $a1, $v0
    ctx->pc = 0x50e17cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50e180: 0x83a824  and         $s5, $a0, $v1
    ctx->pc = 0x50e180u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50e184: 0x3585ffff  ori         $a1, $t4, 0xFFFF
    ctx->pc = 0x50e184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x50e188: 0x32a21fff  andi        $v0, $s5, 0x1FFF
    ctx->pc = 0x50e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8191);
    // 0x50e18c: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e190: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e194: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50e194u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50e198: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x50e198u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e19c: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x50e19cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50e1a0: 0x32a401e0  andi        $a0, $s5, 0x1E0
    ctx->pc = 0x50e1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)480);
    // 0x50e1a4: 0x36a2ffff  ori         $v0, $s5, 0xFFFF
    ctx->pc = 0x50e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e1a8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x50e1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x50e1ac: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x50e1acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50e1b0: 0x32a301e0  andi        $v1, $s5, 0x1E0
    ctx->pc = 0x50e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)480);
    // 0x50e1b4: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x50e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x50e1b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50e1b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50e1bc: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x50e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x50e1c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50e1c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e1c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e1c8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e1cc: 0xa26024  and         $t4, $a1, $v0
    ctx->pc = 0x50e1ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50e1d0: 0xc1c00  sll         $v1, $t4, 16
    ctx->pc = 0x50e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x50e1d4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x50E1D4u;
    {
        const bool branch_taken_0x50e1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E1D4u;
        // 0x50e1d8: 0x3566ffff  ori         $a2, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e1d4) {
            ctx->pc = 0x50E238u;
            goto label_50e238;
        }
    }
    ctx->pc = 0x50E1DCu;
    // 0x50e1dc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x50e1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50e1e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50e1e4: 0xc25824  and         $t3, $a2, $v0
    ctx->pc = 0x50e1e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x50e1e8: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x50e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50e1ec: 0x461ffa8  bgez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x50E1ECu;
    {
        const bool branch_taken_0x50e1ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E1ECu;
        // 0x50e1f0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e1ec) {
            ctx->pc = 0x50E090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50e090;
        }
    }
    ctx->pc = 0x50E1F4u;
label_50e1f4:
    // 0x50e1f4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x50e1f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e1f8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50e1fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x50e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e200: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x50e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x50e204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50e208: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50e20c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e210: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x50e210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e214: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x50e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50e218: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50e218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50e21c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x50e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50e220: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x50e220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x50e224: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x50e224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e228: 0x1445ff83  bne         $v0, $a1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x50E228u;
    {
        const bool branch_taken_0x50e228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x50E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E228u;
        // 0x50e22c: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e228) {
            ctx->pc = 0x50E038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50e038;
        }
    }
    ctx->pc = 0x50E230u;
    // 0x50e230: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x50E230u;
    {
        const bool branch_taken_0x50e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E230u;
        // 0x50e234: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e230) {
            ctx->pc = 0x50E660u;
            goto label_50e660;
        }
    }
    ctx->pc = 0x50E238u;
label_50e238:
    // 0x50e238: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x50e238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e23c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50e240: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e244: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50e244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50e248: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x50e248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x50e24c: 0x24a2f080  addiu       $v0, $a1, -0xF80
    ctx->pc = 0x50e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x50e250: 0x64a824  and         $s5, $v1, $a0
    ctx->pc = 0x50e250u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50e254: 0x84454e0c  lh          $a1, 0x4E0C($v0)
    ctx->pc = 0x50e254u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 19980)));
    // 0x50e258: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50e258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e25c: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e260: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x50e260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x50e264: 0x36c7ffff  ori         $a3, $s6, 0xFFFF
    ctx->pc = 0x50e264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e268: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e26c: 0x356affff  ori         $t2, $t3, 0xFFFF
    ctx->pc = 0x50e26cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50e270: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x50e270u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e274: 0x114bc3  sra         $t1, $s1, 15
    ctx->pc = 0x50e274u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 15));
    // 0x50e278: 0x36a2ffff  ori         $v0, $s5, 0xFFFF
    ctx->pc = 0x50e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e27c: 0x2d51825  or          $v1, $s6, $s5
    ctx->pc = 0x50e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x50e280: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x50e280u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50e284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50e288: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50e288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e28c: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e290: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e294: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50e294u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50e298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x50e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50e29c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50e2a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e2a4: 0xe3b024  and         $s6, $a3, $v1
    ctx->pc = 0x50e2a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x50e2a8: 0x82a824  and         $s5, $a0, $v0
    ctx->pc = 0x50e2a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50e2ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50e2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e2b0: 0x32a2000f  andi        $v0, $s5, 0xF
    ctx->pc = 0x50e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x50e2b4: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e2b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e2bc: 0x162c00  sll         $a1, $s6, 16
    ctx->pc = 0x50e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x50e2c0: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x50e2c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e2c4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x50e2c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x50e2c8: 0x32a2000f  andi        $v0, $s5, 0xF
    ctx->pc = 0x50e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x50e2cc: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e2d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x50e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x50e2d4: 0x35a8ffff  ori         $t0, $t5, 0xFFFF
    ctx->pc = 0x50e2d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x50e2d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e2dc: 0x52b43  sra         $a1, $a1, 13
    ctx->pc = 0x50e2dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 13));
    // 0x50e2e0: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x50e2e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e2e4: 0x1096824  and         $t5, $t0, $t1
    ctx->pc = 0x50e2e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x50e2e8: 0x1751825  or          $v1, $t3, $s5
    ctx->pc = 0x50e2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x50e2ec: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x50e2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x50e2f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50e2f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x50e2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x50e2f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50e2f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50e2fc: 0x36c7ffff  ori         $a3, $s6, 0xFFFF
    ctx->pc = 0x50e2fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e300: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50e300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50e304: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x50e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x50e308: 0x1435824  and         $t3, $t2, $v1
    ctx->pc = 0x50e308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x50e30c: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50e310: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x50e310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50e314: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x50e314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x50e318: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x50e318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x50e31c: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x50e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x50e320: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e324: 0xe5b024  and         $s6, $a3, $a1
    ctx->pc = 0x50e324u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x50e328: 0x625824  and         $t3, $v1, $v0
    ctx->pc = 0x50e328u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e32c: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x50e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x50e330: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E330u;
    SET_GPR_U32(ctx, 31, 0x50E338u);
    ctx->pc = 0x50E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E330u;
    // 0x50e334: 0x7fab0050  sq          $t3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E330u, 0x50E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E338u;
label_50e338:
    // 0x50e338: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x50e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50e33c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E33Cu;
    SET_GPR_U32(ctx, 31, 0x50E344u);
    ctx->pc = 0x50E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E33Cu;
    // 0x50e340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E33Cu, 0x50E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E344u;
label_50e344:
    // 0x50e344: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50e344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50e348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x50e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e34c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x50e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x50e350: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50e350u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50e354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50e358: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x50e358u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50e35c: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x50e35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50e360: 0xb2400  sll         $a0, $t3, 16
    ctx->pc = 0x50e360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x50e364: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50e364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50e368: 0x45403  sra         $t2, $a0, 16
    ctx->pc = 0x50e368u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50e36c: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50e36cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50e370: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x50e370u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50e374: 0x0  nop
    ctx->pc = 0x50e374u;
    // NOP
label_50e378:
    // 0x50e378: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x50e378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e37c: 0x30c2001f  andi        $v0, $a2, 0x1F
    ctx->pc = 0x50e37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x50e380: 0x4c1007  srav        $v0, $t4, $v0
    ctx->pc = 0x50e380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x50e384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x50e388: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x50E388u;
    {
        const bool branch_taken_0x50e388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E388u;
        // 0x50e38c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e388) {
            ctx->pc = 0x50E5C0u;
            goto label_50e5c0;
        }
    }
    ctx->pc = 0x50E390u;
    // 0x50e390: 0x164400  sll         $t0, $s6, 16
    ctx->pc = 0x50e390u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x50e394: 0x88443  sra         $s0, $t0, 17
    ctx->pc = 0x50e394u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 8), 17));
    // 0x50e398: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x50e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e39c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x50e39cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x50e3a0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x50e3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x50e3a4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x50e3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x50e3a8: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50e3ac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50e3acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50e3b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e3b4: 0x24b2f080  addiu       $s2, $a1, -0xF80
    ctx->pc = 0x50e3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x50e3b8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x50e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e3bc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e3c0: 0x8644008a  lh          $a0, 0x8A($s2)
    ctx->pc = 0x50e3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8FF10Au));
    // 0x50e3c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e3c8: 0x8646008c  lh          $a2, 0x8C($s2)
    ctx->pc = 0x50e3c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x50e3cc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50e3d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e3d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50e3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50e3d8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x50e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50e3dc: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x50e3dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e3e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x50e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50e3e4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x50e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e3e8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e3ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e3f0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50e3f4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x50e3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50e3f8: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x50e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x50e3fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e400: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x50e400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x50e404: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50e404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50e408: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x50e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    // 0x50e40c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x50e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x50e410: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50e410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50e414: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50e418: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x50e418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e41c: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50e420: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x50e420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x50e424: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x50e424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x50e428: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e42c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50e42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50e430: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E430u;
    SET_GPR_U32(ctx, 31, 0x50E438u);
    ctx->pc = 0x50E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E430u;
    // 0x50e434: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E430u, 0x50E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E438u;
label_50e438:
    // 0x50e438: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x50e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e43c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x50e43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x50e440: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e444: 0x8645008e  lh          $a1, 0x8E($s2)
    ctx->pc = 0x50e444u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x50e448: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e44c: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x50e44cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50e450: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e454: 0x7bad0070  lq          $t5, 0x70($sp)
    ctx->pc = 0x50e454u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50e458: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x50e458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x50e45c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e460: 0x14d2025  or          $a0, $t2, $t5
    ctx->pc = 0x50e460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x50e464: 0x7ba80020  lq          $t0, 0x20($sp)
    ctx->pc = 0x50e464u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50e468: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x50e468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e46c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50e470: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x50e470u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x50e474: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x50e474u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50e478: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x50e478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50e47c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x50e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x50e480: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e484: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x50e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x50e488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e48c: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50e48cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50e490: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x50e490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x50e494: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50e494u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50e498: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x50e498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50e49c: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x50E49Cu;
    {
        const bool branch_taken_0x50e49c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E49Cu;
        // 0x50e4a0: 0x94950000  lhu         $s5, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e49c) {
            ctx->pc = 0x50E4E8u;
            goto label_50e4e8;
        }
    }
    ctx->pc = 0x50E4A4u;
    // 0x50e4a4: 0x86424cd8  lh          $v0, 0x4CD8($s2)
    ctx->pc = 0x50e4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 19672)));
    // 0x50e4a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50e4ac: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x50e4acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50e4b0: 0xa6f50000  sh          $s5, 0x0($s7)
    ctx->pc = 0x50e4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x50e4b4: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e4b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e4b8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x50e4b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e4bc: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e4c0: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e4c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e4c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x50e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e4c8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x50e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x50e4cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x50e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50e4d0: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e4d4: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e4d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e4d8: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x50e4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e4dc: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e4e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x50E4E0u;
    {
        const bool branch_taken_0x50e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E4E0u;
        // 0x50e4e4: 0x26f70002  addiu       $s7, $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e4e0) {
            ctx->pc = 0x50E5C8u;
            goto label_50e5c8;
        }
    }
    ctx->pc = 0x50E4E8u;
label_50e4e8:
    // 0x50e4e8: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x50e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x50e4ec: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x50E4ECu;
    {
        const bool branch_taken_0x50e4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E4ECu;
        // 0x50e4f0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e4ec) {
            ctx->pc = 0x50E5C8u;
            goto label_50e5c8;
        }
    }
    ctx->pc = 0x50E4F4u;
    // 0x50e4f4: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e4f8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x50e4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x50e4fc: 0x8e454df0  lw          $a1, 0x4DF0($s2)
    ctx->pc = 0x50e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19952)));
    // 0x50e500: 0x83a824  and         $s5, $a0, $v1
    ctx->pc = 0x50e500u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50e504: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50e504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e508: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e50c: 0xa2f021  addu        $fp, $a1, $v0
    ctx->pc = 0x50e50cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50e510: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x50e510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50e514: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x50e514u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e518: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e51c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50e520: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50e520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x50e524: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50e524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50e528: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x50e528u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x50e52c: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x50e52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50e530: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50e530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50e534: 0x82a824  and         $s5, $a0, $v0
    ctx->pc = 0x50e534u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50e538: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50e538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e53c: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x50E53Cu;
    {
        const bool branch_taken_0x50e53c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E53Cu;
        // 0x50e540: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e53c) {
            ctx->pc = 0x50E5C8u;
            goto label_50e5c8;
        }
    }
    ctx->pc = 0x50E544u;
    // 0x50e544: 0x26464cd8  addiu       $a2, $s2, 0x4CD8
    ctx->pc = 0x50e544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 19672));
    // 0x50e548: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50e548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50e54c: 0x0  nop
    ctx->pc = 0x50e54cu;
    // NOP
label_50e550:
    // 0x50e550: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x50e550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50e554: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e558: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x50e558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50e560: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50e564: 0x82a824  and         $s5, $a0, $v0
    ctx->pc = 0x50e564u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50e568: 0xa6f50000  sh          $s5, 0x0($s7)
    ctx->pc = 0x50e568u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x50e56c: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e56cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e570: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x50e570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x50e574: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x50e574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e578: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e578u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e57c: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e57cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e580: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x50e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e584: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x50e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50e588: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x50e588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50e58c: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e58cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e590: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e590u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e594: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x50e594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e598: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x50e598u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e59c: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x50e59cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x50e5a0: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x50e5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50e5a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50e5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50e5a8: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x50e5a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e5ac: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x50e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x50e5b0: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x50E5B0u;
    {
        const bool branch_taken_0x50e5b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x50E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E5B0u;
        // 0x50e5b4: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e5b0) {
            ctx->pc = 0x50E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50e550;
        }
    }
    ctx->pc = 0x50E5B8u;
    // 0x50e5b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50E5B8u;
    {
        const bool branch_taken_0x50e5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E5B8u;
        // 0x50e5bc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e5b8) {
            ctx->pc = 0x50E5CCu;
            goto label_50e5cc;
        }
    }
    ctx->pc = 0x50E5C0u;
label_50e5c0:
    // 0x50e5c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x50E5C0u;
    {
        const bool branch_taken_0x50e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E5C0u;
        // 0x50e5c4: 0x164400  sll         $t0, $s6, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e5c0) {
            ctx->pc = 0x50E5CCu;
            goto label_50e5cc;
        }
    }
    ctx->pc = 0x50E5C8u;
label_50e5c8:
    // 0x50e5c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x50e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_50e5cc:
    // 0x50e5cc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x50e5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e5d0: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x50e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x50e5d4: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x50e5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x50e5d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e5d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e5dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50e5e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50e5e4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x50e5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x50e5e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50e5ec: 0xa33024  and         $a2, $a1, $v1
    ctx->pc = 0x50e5ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50e5f0: 0x81c03  sra         $v1, $t0, 16
    ctx->pc = 0x50e5f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 16));
    // 0x50e5f4: 0x35a4ffff  ori         $a0, $t5, 0xFFFF
    ctx->pc = 0x50e5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x50e5f8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x50e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x50e5fc: 0x826824  and         $t5, $a0, $v0
    ctx->pc = 0x50e5fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50e600: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x50e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x50e604: 0x31a4001e  andi        $a0, $t5, 0x1E
    ctx->pc = 0x50e604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)30);
    // 0x50e608: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x50e608u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e60c: 0x36c5ffff  ori         $a1, $s6, 0xFFFF
    ctx->pc = 0x50e60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x50e610: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x50e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x50e614: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x50e614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x50e618: 0x35a2ffff  ori         $v0, $t5, 0xFFFF
    ctx->pc = 0x50e618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x50e61c: 0xa3b024  and         $s6, $a1, $v1
    ctx->pc = 0x50e61cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50e620: 0x4c1ff55  bgez        $a2, . + 4 + (-0xAB << 2)
    ctx->pc = 0x50E620u;
    {
        const bool branch_taken_0x50e620 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x50E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E620u;
        // 0x50e624: 0x446824  and         $t5, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e620) {
            ctx->pc = 0x50E378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50e378;
        }
    }
    ctx->pc = 0x50E628u;
    // 0x50e628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e62c: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x50e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x50e630: 0x7fac0060  sq          $t4, 0x60($sp)
    ctx->pc = 0x50e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 12));
    // 0x50e634: 0x7fad0070  sq          $t5, 0x70($sp)
    ctx->pc = 0x50e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 13));
    // 0x50e638: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E638u;
    SET_GPR_U32(ctx, 31, 0x50E640u);
    ctx->pc = 0x50E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E638u;
    // 0x50e63c: 0x8fbe0010  lw          $fp, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E638u, 0x50E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E640u;
label_50e640:
    // 0x50e640: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x50e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50e644: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E644u;
    SET_GPR_U32(ctx, 31, 0x50E64Cu);
    ctx->pc = 0x50E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E644u;
    // 0x50e648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E644u, 0x50E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E64Cu;
label_50e64c:
    // 0x50e64c: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x50e64cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50e650: 0x7bac0060  lq          $t4, 0x60($sp)
    ctx->pc = 0x50e650u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50e654: 0x1000fe82  b           . + 4 + (-0x17E << 2)
    ctx->pc = 0x50E654u;
    {
        const bool branch_taken_0x50e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E654u;
        // 0x50e658: 0x7bad0070  lq          $t5, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e654) {
            ctx->pc = 0x50E060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50e060;
        }
    }
    ctx->pc = 0x50E65Cu;
    // 0x50e65c: 0x0  nop
    ctx->pc = 0x50e65cu;
    // NOP
label_50e660:
    // 0x50e660: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50e660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50e664: 0x24a3f080  addiu       $v1, $a1, -0xF80
    ctx->pc = 0x50e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x50e668: 0xa6e40000  sh          $a0, 0x0($s7)
    ctx->pc = 0x50e668u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x50e66c: 0x2463009a  addiu       $v1, $v1, 0x9A
    ctx->pc = 0x50e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 154));
    // 0x50e670: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50e670u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF11Au));
    // 0x50e674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50E674u;
    {
        const bool branch_taken_0x50e674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e674) {
            ctx->pc = 0x50E688u;
            goto label_50e688;
        }
    }
    ctx->pc = 0x50E67Cu;
    // 0x50e67c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50E67Cu;
    {
        const bool branch_taken_0x50e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E67Cu;
        // 0x50e680: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e67c) {
            ctx->pc = 0x50E690u;
            goto label_50e690;
        }
    }
    ctx->pc = 0x50E684u;
    // 0x50e684: 0x0  nop
    ctx->pc = 0x50e684u;
    // NOP
label_50e688:
    // 0x50e688: 0xc144dae  jal         func_5136B8
    ctx->pc = 0x50E688u;
    SET_GPR_U32(ctx, 31, 0x50E690u);
    ctx->pc = 0x5136B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5136B8u, 0x50E688u, 0x50E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E690u;
label_50e690:
    // 0x50e690: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x50e690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x50e694: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x50e694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x50e698: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x50e698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x50e69c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x50e69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x50e6a0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x50e6a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x50e6a4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x50e6a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x50e6a8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x50e6a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x50e6ac: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x50e6acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x50e6b0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x50e6b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x50e6b4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x50e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x50e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x50E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E6B8u;
        // 0x50e6bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50E6C0u;
}
