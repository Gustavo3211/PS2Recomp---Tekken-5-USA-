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

// Function: sub_002635E0
// Address: 0x2635e0 - 0x264178
void sub_002635E0_0x2635e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002635E0_0x2635e0");
#endif

    switch (ctx->pc) {
        case 0x263788u: goto label_263788;
        case 0x2637a4u: goto label_2637a4;
        case 0x263860u: goto label_263860;
        case 0x263ac0u: goto label_263ac0;
        case 0x263b18u: goto label_263b18;
        case 0x263b34u: goto label_263b34;
        case 0x263b50u: goto label_263b50;
        case 0x263b7cu: goto label_263b7c;
        case 0x263b90u: goto label_263b90;
        case 0x263ba4u: goto label_263ba4;
        case 0x263c20u: goto label_263c20;
        case 0x263c78u: goto label_263c78;
        case 0x263c94u: goto label_263c94;
        case 0x263cb0u: goto label_263cb0;
        case 0x263cdcu: goto label_263cdc;
        case 0x263cf0u: goto label_263cf0;
        case 0x263d04u: goto label_263d04;
        case 0x263d80u: goto label_263d80;
        case 0x263de8u: goto label_263de8;
        case 0x263e30u: goto label_263e30;
        case 0x263e78u: goto label_263e78;
        case 0x263ec0u: goto label_263ec0;
        case 0x263fc0u: goto label_263fc0;
        case 0x264010u: goto label_264010;
        case 0x264038u: goto label_264038;
        case 0x264068u: goto label_264068;
        case 0x2640b0u: goto label_2640b0;
        case 0x264100u: goto label_264100;
        default: break;
    }

    ctx->pc = 0x2635e0u;

    // 0x2635e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2635e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2635e4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2635e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2635e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2635e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635ec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2635ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2635f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2635f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635f4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2635f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2635f8: 0x2675026c  addiu       $s5, $s3, 0x26C
    ctx->pc = 0x2635f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 620));
    // 0x2635fc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2635fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x263600: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x263600u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263604: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x263604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x263608: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x263608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26360c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x26360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x263610: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x263610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x263614: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x263614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x263618: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x263618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x26361c: 0xaed30054  sw          $s3, 0x54($s6)
    ctx->pc = 0x26361cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 19));
    // 0x263620: 0xaed300bc  sw          $s3, 0xBC($s6)
    ctx->pc = 0x263620u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 19));
    // 0x263624: 0xaed30050  sw          $s3, 0x50($s6)
    ctx->pc = 0x263624u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 80), GPR_U32(ctx, 19));
    // 0x263628: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x263628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x26362c: 0x144002c6  bnez        $v0, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x26362Cu;
    {
        const bool branch_taken_0x26362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26362Cu;
        // 0x263630: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26362c) {
            ctx->pc = 0x264148u;
            goto label_264148;
        }
    }
    ctx->pc = 0x263634u;
    // 0x263634: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x263634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x263638: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x263638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26363c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x26363cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x263640: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x263640u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x263644: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x263644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x263648: 0x8e6f0014  lw          $t7, 0x14($s3)
    ctx->pc = 0x263648u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x26364c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x26364cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x263650: 0x8e6e0180  lw          $t6, 0x180($s3)
    ctx->pc = 0x263650u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x263654: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x263654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x263658: 0x8e6d0188  lw          $t5, 0x188($s3)
    ctx->pc = 0x263658u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x26365c: 0x2af7821  addu        $t7, $s5, $t7
    ctx->pc = 0x26365cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    // 0x263660: 0x8e6c0190  lw          $t4, 0x190($s3)
    ctx->pc = 0x263660u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x263664: 0x2ae7021  addu        $t6, $s5, $t6
    ctx->pc = 0x263664u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 14)));
    // 0x263668: 0x8e6b0198  lw          $t3, 0x198($s3)
    ctx->pc = 0x263668u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x26366c: 0x2ad6821  addu        $t5, $s5, $t5
    ctx->pc = 0x26366cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x263670: 0x8e6a01a0  lw          $t2, 0x1A0($s3)
    ctx->pc = 0x263670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
    // 0x263674: 0x2ac6021  addu        $t4, $s5, $t4
    ctx->pc = 0x263674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 12)));
    // 0x263678: 0x8e6901a8  lw          $t1, 0x1A8($s3)
    ctx->pc = 0x263678u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
    // 0x26367c: 0x2ab5821  addu        $t3, $s5, $t3
    ctx->pc = 0x26367cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
    // 0x263680: 0x8e6801b0  lw          $t0, 0x1B0($s3)
    ctx->pc = 0x263680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x263684: 0x2aa5021  addu        $t2, $s5, $t2
    ctx->pc = 0x263684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 10)));
    // 0x263688: 0x8e6701b8  lw          $a3, 0x1B8($s3)
    ctx->pc = 0x263688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x26368c: 0x2a94821  addu        $t1, $s5, $t1
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x263690: 0x8e6601c0  lw          $a2, 0x1C0($s3)
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x263694: 0x2a84021  addu        $t0, $s5, $t0
    ctx->pc = 0x263694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x263698: 0x8e6501c8  lw          $a1, 0x1C8($s3)
    ctx->pc = 0x263698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x26369c: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x26369cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2636a0: 0x8e6401d0  lw          $a0, 0x1D0($s3)
    ctx->pc = 0x2636a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x2636a4: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x2636a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2636a8: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x2636a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x2636ac: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x2636acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2636b0: 0x8e6201e0  lw          $v0, 0x1E0($s3)
    ctx->pc = 0x2636b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x2636b4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2636b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2636b8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2636b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2636bc: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x2636bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
    // 0x2636c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2636c4: 0xae6c0190  sw          $t4, 0x190($s3)
    ctx->pc = 0x2636c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 12));
    // 0x2636c8: 0xae6b0198  sw          $t3, 0x198($s3)
    ctx->pc = 0x2636c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 11));
    // 0x2636cc: 0xae6a01a0  sw          $t2, 0x1A0($s3)
    ctx->pc = 0x2636ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 416), GPR_U32(ctx, 10));
    // 0x2636d0: 0xae6901a8  sw          $t1, 0x1A8($s3)
    ctx->pc = 0x2636d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 424), GPR_U32(ctx, 9));
    // 0x2636d4: 0xae6801b0  sw          $t0, 0x1B0($s3)
    ctx->pc = 0x2636d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 8));
    // 0x2636d8: 0xae6701b8  sw          $a3, 0x1B8($s3)
    ctx->pc = 0x2636d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 7));
    // 0x2636dc: 0xae6601c0  sw          $a2, 0x1C0($s3)
    ctx->pc = 0x2636dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 6));
    // 0x2636e0: 0xae6501c8  sw          $a1, 0x1C8($s3)
    ctx->pc = 0x2636e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 5));
    // 0x2636e4: 0xae6401d0  sw          $a0, 0x1D0($s3)
    ctx->pc = 0x2636e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 464), GPR_U32(ctx, 4));
    // 0x2636e8: 0xae6301d8  sw          $v1, 0x1D8($s3)
    ctx->pc = 0x2636e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 3));
    // 0x2636ec: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x2636ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
    // 0x2636f0: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x2636f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x2636f4: 0xae6f0014  sw          $t7, 0x14($s3)
    ctx->pc = 0x2636f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 15));
    // 0x2636f8: 0xae6e0180  sw          $t6, 0x180($s3)
    ctx->pc = 0x2636f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 14));
    // 0x2636fc: 0xae6d0188  sw          $t5, 0x188($s3)
    ctx->pc = 0x2636fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 392), GPR_U32(ctx, 13));
    // 0x263700: 0xae6201e0  sw          $v0, 0x1E0($s3)
    ctx->pc = 0x263700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 480), GPR_U32(ctx, 2));
    // 0x263704: 0x8e6901e8  lw          $t1, 0x1E8($s3)
    ctx->pc = 0x263704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
    // 0x263708: 0x8e6a01f0  lw          $t2, 0x1F0($s3)
    ctx->pc = 0x263708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
    // 0x26370c: 0x8e6c01f8  lw          $t4, 0x1F8($s3)
    ctx->pc = 0x26370cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 504)));
    // 0x263710: 0x2a94821  addu        $t1, $s5, $t1
    ctx->pc = 0x263710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x263714: 0x8e6b0200  lw          $t3, 0x200($s3)
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x263718: 0x2aa5021  addu        $t2, $s5, $t2
    ctx->pc = 0x263718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 10)));
    // 0x26371c: 0x8e680208  lw          $t0, 0x208($s3)
    ctx->pc = 0x26371cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x263720: 0x2ac6021  addu        $t4, $s5, $t4
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 12)));
    // 0x263724: 0x8e670210  lw          $a3, 0x210($s3)
    ctx->pc = 0x263724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x263728: 0x2ab5821  addu        $t3, $s5, $t3
    ctx->pc = 0x263728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
    // 0x26372c: 0x8e660218  lw          $a2, 0x218($s3)
    ctx->pc = 0x26372cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
    // 0x263730: 0x2a84021  addu        $t0, $s5, $t0
    ctx->pc = 0x263730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
    // 0x263734: 0x8e650220  lw          $a1, 0x220($s3)
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x263738: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x263738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x26373c: 0x8e630228  lw          $v1, 0x228($s3)
    ctx->pc = 0x26373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 552)));
    // 0x263740: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x263744: 0x8e620230  lw          $v0, 0x230($s3)
    ctx->pc = 0x263744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x263748: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x263748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x26374c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x26374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x263750: 0x8e640238  lw          $a0, 0x238($s3)
    ctx->pc = 0x263750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x263754: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x263758: 0xae6901e8  sw          $t1, 0x1E8($s3)
    ctx->pc = 0x263758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 488), GPR_U32(ctx, 9));
    // 0x26375c: 0xae6a01f0  sw          $t2, 0x1F0($s3)
    ctx->pc = 0x26375cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 10));
    // 0x263760: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x263760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x263764: 0xae6c01f8  sw          $t4, 0x1F8($s3)
    ctx->pc = 0x263764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 504), GPR_U32(ctx, 12));
    // 0x263768: 0xae6b0200  sw          $t3, 0x200($s3)
    ctx->pc = 0x263768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 11));
    // 0x26376c: 0xae680208  sw          $t0, 0x208($s3)
    ctx->pc = 0x26376cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 520), GPR_U32(ctx, 8));
    // 0x263770: 0xae670210  sw          $a3, 0x210($s3)
    ctx->pc = 0x263770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 7));
    // 0x263774: 0xae660218  sw          $a2, 0x218($s3)
    ctx->pc = 0x263774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 6));
    // 0x263778: 0xae650220  sw          $a1, 0x220($s3)
    ctx->pc = 0x263778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 5));
    // 0x26377c: 0xae630228  sw          $v1, 0x228($s3)
    ctx->pc = 0x26377cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 552), GPR_U32(ctx, 3));
    // 0x263780: 0xae620230  sw          $v0, 0x230($s3)
    ctx->pc = 0x263780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 560), GPR_U32(ctx, 2));
    // 0x263784: 0x0  nop
    ctx->pc = 0x263784u;
    // NOP
label_263788:
    // 0x263788: 0x14803c  dsll32      $s0, $s4, 0
    ctx->pc = 0x263788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 0));
    // 0x26378c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x26378cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x263790: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263790u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263798: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x263798u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26379c: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x26379Cu;
    SET_GPR_U32(ctx, 31, 0x2637A4u);
    ctx->pc = 0x2637A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26379Cu;
    // 0x2637a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x26379Cu, 0x2637A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637A4u;
label_2637a4:
    // 0x2637a4: 0x2a840006  slti        $a0, $s4, 0x6
    ctx->pc = 0x2637a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2637a8: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x2637a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2637ac: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2637ACu;
    {
        const bool branch_taken_0x2637ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2637B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637ACu;
        // 0x2637b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637ac) {
            ctx->pc = 0x263788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263788;
        }
    }
    ctx->pc = 0x2637B4u;
    // 0x2637b4: 0x8e650238  lw          $a1, 0x238($s3)
    ctx->pc = 0x2637b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2637b8: 0x8e660240  lw          $a2, 0x240($s3)
    ctx->pc = 0x2637b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x2637bc: 0x8e670248  lw          $a3, 0x248($s3)
    ctx->pc = 0x2637bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
    // 0x2637c0: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2637c4: 0x8e640250  lw          $a0, 0x250($s3)
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x2637c8: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x2637c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2637cc: 0x8e630258  lw          $v1, 0x258($s3)
    ctx->pc = 0x2637ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
    // 0x2637d0: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x2637d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2637d4: 0x8e620260  lw          $v0, 0x260($s3)
    ctx->pc = 0x2637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x2637d8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2637d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2637dc: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2637dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2637e0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2637e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2637e4: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x2637e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2637e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2637e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2637ec: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x2637ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2637f0: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x2637f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2637f4: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x2637f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2637f8: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x2637f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2637fc: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x2637fcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x263800: 0xae620260  sw          $v0, 0x260($s3)
    ctx->pc = 0x263800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 608), GPR_U32(ctx, 2));
    // 0x263804: 0xae650238  sw          $a1, 0x238($s3)
    ctx->pc = 0x263804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 5));
    // 0x263808: 0xae68023c  sw          $t0, 0x23C($s3)
    ctx->pc = 0x263808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 8));
    // 0x26380c: 0xae660240  sw          $a2, 0x240($s3)
    ctx->pc = 0x26380cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 576), GPR_U32(ctx, 6));
    // 0x263810: 0xae670248  sw          $a3, 0x248($s3)
    ctx->pc = 0x263810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 7));
    // 0x263814: 0xae640250  sw          $a0, 0x250($s3)
    ctx->pc = 0x263814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 4));
    // 0x263818: 0xae630258  sw          $v1, 0x258($s3)
    ctx->pc = 0x263818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 600), GPR_U32(ctx, 3));
    // 0x26381c: 0xae6a0244  sw          $t2, 0x244($s3)
    ctx->pc = 0x26381cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 580), GPR_U32(ctx, 10));
    // 0x263820: 0xae6b024c  sw          $t3, 0x24C($s3)
    ctx->pc = 0x263820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 11));
    // 0x263824: 0xae6c0254  sw          $t4, 0x254($s3)
    ctx->pc = 0x263824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 596), GPR_U32(ctx, 12));
    // 0x263828: 0xae6d025c  sw          $t5, 0x25C($s3)
    ctx->pc = 0x263828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 604), GPR_U32(ctx, 13));
    // 0x26382c: 0xae6e0264  sw          $t6, 0x264($s3)
    ctx->pc = 0x26382cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 612), GPR_U32(ctx, 14));
    // 0x263830: 0xaec90048  sw          $t1, 0x48($s6)
    ctx->pc = 0x263830u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 72), GPR_U32(ctx, 9));
    // 0x263834: 0x8e6201dc  lw          $v0, 0x1DC($s3)
    ctx->pc = 0x263834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x263838: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x263838u;
    {
        const bool branch_taken_0x263838 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263838u;
        // 0x26383c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263838) {
            ctx->pc = 0x263A48u;
            goto label_263a48;
        }
    }
    ctx->pc = 0x263840u;
    // 0x263840: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x263840u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x263844: 0x3c0befff  lui         $t3, 0xEFFF
    ctx->pc = 0x263844u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61439 << 16));
    // 0x263848: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x263848u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26384c: 0x354a3fff  ori         $t2, $t2, 0x3FFF
    ctx->pc = 0x26384cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16383);
    // 0x263850: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x263850u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263854: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x263854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263858: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x263858u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x26385c: 0x0  nop
    ctx->pc = 0x26385cu;
    // NOP
label_263860:
    // 0x263860: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263864: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263864u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263868: 0x8e6401d8  lw          $a0, 0x1D8($s3)
    ctx->pc = 0x263868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x26386c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x263878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26387c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26387cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263880: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x263880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263884: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x263884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x263888: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x263888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x26388c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x26388cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x263890: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x263890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x263894: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x263894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x263898: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x263898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x26389c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x26389cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2638a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2638a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2638a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2638a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2638a8: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x2638a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x2638ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2638acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2638b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2638b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2638b4: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x2638b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x2638b8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2638b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2638bc: 0x460002f  bltz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2638BCu;
    {
        const bool branch_taken_0x2638bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2638C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638BCu;
        // 0x2638c0: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638bc) {
            ctx->pc = 0x26397Cu;
            goto label_26397c;
        }
    }
    ctx->pc = 0x2638C4u;
    // 0x2638c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2638C4u;
    {
        const bool branch_taken_0x2638c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2638c4) {
            ctx->pc = 0x2638C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2638C4u;
            // 0x2638c8: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2638D8u;
            goto label_2638d8;
        }
    }
    ctx->pc = 0x2638CCu;
    // 0x2638cc: 0x546d002c  bnel        $v1, $t5, . + 4 + (0x2C << 2)
    ctx->pc = 0x2638CCu;
    {
        const bool branch_taken_0x2638cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x2638cc) {
            ctx->pc = 0x2638D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2638CCu;
            // 0x2638d0: 0x8ce40014  lw          $a0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263980u;
            goto label_263980;
        }
    }
    ctx->pc = 0x2638D4u;
    // 0x2638d4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2638d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2638d8:
    // 0x2638d8: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2638d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2638dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2638DCu;
    {
        const bool branch_taken_0x2638dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638DCu;
        // 0x2638e0: 0xca1024  and         $v0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638dc) {
            ctx->pc = 0x2638F8u;
            goto label_2638f8;
        }
    }
    ctx->pc = 0x2638E4u;
    // 0x2638e4: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2638e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x2638e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2638e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2638ECu;
    {
        const bool branch_taken_0x2638ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638ECu;
        // 0x2638f0: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638ec) {
            ctx->pc = 0x26391Cu;
            goto label_26391c;
        }
    }
    ctx->pc = 0x2638F4u;
    // 0x2638f4: 0x0  nop
    ctx->pc = 0x2638f4u;
    // NOP
label_2638f8:
    // 0x2638f8: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x2638f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2638fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2638FCu;
    {
        const bool branch_taken_0x2638fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638FCu;
        // 0x263900: 0xca1024  and         $v0, $a2, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638fc) {
            ctx->pc = 0x263918u;
            goto label_263918;
        }
    }
    ctx->pc = 0x263904u;
    // 0x263904: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x263904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263908: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x263908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x26390c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26390Cu;
    {
        const bool branch_taken_0x26390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26390Cu;
        // 0x263910: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26390c) {
            ctx->pc = 0x26391Cu;
            goto label_26391c;
        }
    }
    ctx->pc = 0x263914u;
    // 0x263914: 0x0  nop
    ctx->pc = 0x263914u;
    // NOP
label_263918:
    // 0x263918: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x263918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26391c:
    // 0x26391c: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x26391cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x263920: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x263920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x263924: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x263924u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x263928: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26392c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x26392cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x263930: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x263930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x263934: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x263938: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x263938u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26393c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x26393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x263940: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x263940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x263944: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x263944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x263948: 0xa9820003  swl         $v0, 0x3($t4)
    ctx->pc = 0x263948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26394c: 0xb9820000  swr         $v0, 0x0($t4)
    ctx->pc = 0x26394cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x263950: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x263950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263954: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x263954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x263958: 0x162182b  sltu        $v1, $t3, $v0
    ctx->pc = 0x263958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26395c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26395Cu;
    {
        const bool branch_taken_0x26395c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26395c) {
            ctx->pc = 0x263960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26395Cu;
            // 0x263960: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263974u;
            goto label_263974;
        }
    }
    ctx->pc = 0x263964u;
    // 0x263964: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263968: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x263968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x26396c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x26396cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x263970: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x263970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_263974:
    // 0x263974: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x263974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263978: 0xa4e30024  sh          $v1, 0x24($a3)
    ctx->pc = 0x263978u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 36), (uint16_t)GPR_U32(ctx, 3));
label_26397c:
    // 0x26397c: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x26397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_263980:
    // 0x263980: 0x8e6301a8  lw          $v1, 0x1A8($s3)
    ctx->pc = 0x263980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
    // 0x263984: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x263988: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x26398c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x263990: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x263990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x263994: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263998: 0x14a90003  bne         $a1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263998u;
    {
        const bool branch_taken_0x263998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x26399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263998u;
        // 0x26399c: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263998) {
            ctx->pc = 0x2639A8u;
            goto label_2639a8;
        }
    }
    ctx->pc = 0x2639A0u;
    // 0x2639a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2639A0u;
    {
        const bool branch_taken_0x2639a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639A0u;
        // 0x2639a4: 0xace00030  sw          $zero, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639a0) {
            ctx->pc = 0x2639B8u;
            goto label_2639b8;
        }
    }
    ctx->pc = 0x2639A8u;
label_2639a8:
    // 0x2639a8: 0x8e6201c0  lw          $v0, 0x1C0($s3)
    ctx->pc = 0x2639a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x2639ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2639acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2639b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2639b4: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x2639b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
label_2639b8:
    // 0x2639b8: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x2639bc: 0x54690004  bnel        $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2639BCu;
    {
        const bool branch_taken_0x2639bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x2639bc) {
            ctx->pc = 0x2639C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2639BCu;
            // 0x2639c0: 0x8e6201c8  lw          $v0, 0x1C8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2639D0u;
            goto label_2639d0;
        }
    }
    ctx->pc = 0x2639C4u;
    // 0x2639c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2639C4u;
    {
        const bool branch_taken_0x2639c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639C4u;
        // 0x2639c8: 0xace00034  sw          $zero, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639c4) {
            ctx->pc = 0x2639DCu;
            goto label_2639dc;
        }
    }
    ctx->pc = 0x2639CCu;
    // 0x2639cc: 0x0  nop
    ctx->pc = 0x2639ccu;
    // NOP
label_2639d0:
    // 0x2639d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2639d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2639d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2639d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2639d8: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x2639d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
label_2639dc:
    // 0x2639dc: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x2639dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2639e0: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2639E0u;
    {
        const bool branch_taken_0x2639e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x2639e0) {
            ctx->pc = 0x2639E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2639E0u;
            // 0x2639e4: 0x8e6201d0  lw          $v0, 0x1D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2639F0u;
            goto label_2639f0;
        }
    }
    ctx->pc = 0x2639E8u;
    // 0x2639e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2639E8u;
    {
        const bool branch_taken_0x2639e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639E8u;
        // 0x2639ec: 0xace00038  sw          $zero, 0x38($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639e8) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x2639F0u;
label_2639f0:
    // 0x2639f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2639f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2639f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2639f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2639f8: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x2639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
label_2639fc:
    // 0x2639fc: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x263a00: 0x10490005  beq         $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263A00u;
    {
        const bool branch_taken_0x263a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x263A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A00u;
        // 0x263a04: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a00) {
            ctx->pc = 0x263A18u;
            goto label_263a18;
        }
    }
    ctx->pc = 0x263A08u;
    // 0x263a08: 0x8e6301e0  lw          $v1, 0x1E0($s3)
    ctx->pc = 0x263a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x263a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x263A0Cu;
    {
        const bool branch_taken_0x263a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A0Cu;
        // 0x263a10: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a0c) {
            ctx->pc = 0x263A1Cu;
            goto label_263a1c;
        }
    }
    ctx->pc = 0x263A14u;
    // 0x263a14: 0x0  nop
    ctx->pc = 0x263a14u;
    // NOP
label_263a18:
    // 0x263a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263a1c:
    // 0x263a1c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x263a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x263a20: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263a20u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263a24: 0x8e6201dc  lw          $v0, 0x1DC($s3)
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x263a28: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263a2c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x263A2Cu;
    {
        const bool branch_taken_0x263a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263a2c) {
            ctx->pc = 0x263860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263860;
        }
    }
    ctx->pc = 0x263A34u;
    // 0x263a34: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x263a34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x263a38: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x263a38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263a3c: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x263a40: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x263a40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263a44: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_263a48:
    // 0x263a48: 0x8e630240  lw          $v1, 0x240($s3)
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x263a4c: 0x26c2082c  addiu       $v0, $s6, 0x82C
    ctx->pc = 0x263a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2092));
    // 0x263a50: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x263a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x263a54: 0x26c40840  addiu       $a0, $s6, 0x840
    ctx->pc = 0x263a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2112));
    // 0x263a58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263a5c: 0x26c50818  addiu       $a1, $s6, 0x818
    ctx->pc = 0x263a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2072));
    // 0x263a60: 0x26c60854  addiu       $a2, $s6, 0x854
    ctx->pc = 0x263a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 2132));
    // 0x263a64: 0x26c70868  addiu       $a3, $s6, 0x868
    ctx->pc = 0x263a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 2152));
    // 0x263a68: 0x8e630240  lw          $v1, 0x240($s3)
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x263a6c: 0x26c8087c  addiu       $t0, $s6, 0x87C
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 2172));
    // 0x263a70: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x263a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
    // 0x263a74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x263a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x263a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x263a7c: 0x8e620248  lw          $v0, 0x248($s3)
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
    // 0x263a80: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x263a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
    // 0x263a84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x263a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x263a88: 0x8e630250  lw          $v1, 0x250($s3)
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x263a8c: 0xaccc0004  sw          $t4, 0x4($a2)
    ctx->pc = 0x263a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 12));
    // 0x263a90: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x263a90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x263a94: 0x8e620258  lw          $v0, 0x258($s3)
    ctx->pc = 0x263a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
    // 0x263a98: 0xaced0004  sw          $t5, 0x4($a3)
    ctx->pc = 0x263a98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 13));
    // 0x263a9c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x263a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x263aa0: 0x8e630260  lw          $v1, 0x260($s3)
    ctx->pc = 0x263aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x263aa4: 0xad0e0004  sw          $t6, 0x4($t0)
    ctx->pc = 0x263aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 14));
    // 0x263aa8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x263aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x263aac: 0x8e6201ac  lw          $v0, 0x1AC($s3)
    ctx->pc = 0x263aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x263ab0: 0x8e710188  lw          $s1, 0x188($s3)
    ctx->pc = 0x263ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x263ab4: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x263AB4u;
    {
        const bool branch_taken_0x263ab4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AB4u;
        // 0x263ab8: 0x8e7201b8  lw          $s2, 0x1B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ab4) {
            ctx->pc = 0x263C10u;
            goto label_263c10;
        }
    }
    ctx->pc = 0x263ABCu;
    // 0x263abc: 0x0  nop
    ctx->pc = 0x263abcu;
    // NOP
label_263ac0:
    // 0x263ac0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263ac4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263ac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263ac8: 0x8e6401a8  lw          $a0, 0x1A8($s3)
    ctx->pc = 0x263ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
    // 0x263acc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263ad4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x263ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x263ad8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x263ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263adc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x263adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263ae0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x263ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x263ae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263ae8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x263ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263aec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263af0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x263af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x263af4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263af8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x263af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x263afc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x263afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x263b00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263B00u;
    {
        const bool branch_taken_0x263b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x263B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B00u;
        // 0x263b04: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b00) {
            ctx->pc = 0x263B10u;
            goto label_263b10;
        }
    }
    ctx->pc = 0x263B08u;
    // 0x263b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b0c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263b10:
    // 0x263b10: 0xc080b30  jal         func_202CC0
    ctx->pc = 0x263B10u;
    SET_GPR_U32(ctx, 31, 0x263B18u);
    ctx->pc = 0x263B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B10u;
    // 0x263b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC0u, 0x263B10u, 0x263B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B18u;
label_263b18:
    // 0x263b18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263B18u;
    {
        const bool branch_taken_0x263b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b18) {
            ctx->pc = 0x263B2Cu;
            goto label_263b2c;
        }
    }
    ctx->pc = 0x263B20u;
    // 0x263b20: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263b24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x263b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x263b28: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263b2c:
    // 0x263b2c: 0xc080b46  jal         func_202D18
    ctx->pc = 0x263B2Cu;
    SET_GPR_U32(ctx, 31, 0x263B34u);
    ctx->pc = 0x263B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B2Cu;
    // 0x263b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D18u, 0x263B2Cu, 0x263B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B34u;
label_263b34:
    // 0x263b34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263B34u;
    {
        const bool branch_taken_0x263b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B34u;
        // 0x263b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b34) {
            ctx->pc = 0x263B48u;
            goto label_263b48;
        }
    }
    ctx->pc = 0x263B3Cu;
    // 0x263b3c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263b40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x263b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x263b44: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263b48:
    // 0x263b48: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263B48u;
    SET_GPR_U32(ctx, 31, 0x263B50u);
    ctx->pc = 0x263B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B48u;
    // 0x263b4c: 0x34058156  ori         $a1, $zero, 0x8156 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263B48u, 0x263B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B50u;
label_263b50:
    // 0x263b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x263B50u;
    {
        const bool branch_taken_0x263b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b50) {
            ctx->pc = 0x263B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B50u;
            // 0x263b54: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263B68u;
            goto label_263b68;
        }
    }
    ctx->pc = 0x263B58u;
    // 0x263b58: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263b5c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x263b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x263b60: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x263b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_263b68:
    // 0x263b68: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x263B68u;
    {
        const bool branch_taken_0x263b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b68) {
            ctx->pc = 0x263B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B68u;
            // 0x263b6c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263BB0u;
            goto label_263bb0;
        }
    }
    ctx->pc = 0x263B70u;
    // 0x263b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b74: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263B74u;
    SET_GPR_U32(ctx, 31, 0x263B7Cu);
    ctx->pc = 0x263B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B74u;
    // 0x263b78: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263B74u, 0x263B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B7Cu;
label_263b7c:
    // 0x263b7c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x263B7Cu;
    {
        const bool branch_taken_0x263b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b7c) {
            ctx->pc = 0x263B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B7Cu;
            // 0x263b80: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263BB0u;
            goto label_263bb0;
        }
    }
    ctx->pc = 0x263B84u;
    // 0x263b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b88: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263B88u;
    SET_GPR_U32(ctx, 31, 0x263B90u);
    ctx->pc = 0x263B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B88u;
    // 0x263b8c: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263B88u, 0x263B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B90u;
label_263b90:
    // 0x263b90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263B90u;
    {
        const bool branch_taken_0x263b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b90) {
            ctx->pc = 0x263B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B90u;
            // 0x263b94: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263BB0u;
            goto label_263bb0;
        }
    }
    ctx->pc = 0x263B98u;
    // 0x263b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b9c: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263B9Cu;
    SET_GPR_U32(ctx, 31, 0x263BA4u);
    ctx->pc = 0x263BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B9Cu;
    // 0x263ba0: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263B9Cu, 0x263BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BA4u;
label_263ba4:
    // 0x263ba4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x263BA4u;
    {
        const bool branch_taken_0x263ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ba4) {
            ctx->pc = 0x263BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BA4u;
            // 0x263ba8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263BBCu;
            goto label_263bbc;
        }
    }
    ctx->pc = 0x263BACu;
    // 0x263bac: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263bacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_263bb0:
    // 0x263bb0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x263bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x263bb4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263bb8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x263bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_263bbc:
    // 0x263bbc: 0x24032400  addiu       $v1, $zero, 0x2400
    ctx->pc = 0x263bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x263bc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263bc4: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x263bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x263bc8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263BC8u;
    {
        const bool branch_taken_0x263bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263bc8) {
            ctx->pc = 0x263BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BC8u;
            // 0x263bcc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263BE0u;
            goto label_263be0;
        }
    }
    ctx->pc = 0x263BD0u;
    // 0x263bd0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263bd4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x263bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x263bd8: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_263be0:
    // 0x263be0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x263be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x263be4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x263be8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263BE8u;
    {
        const bool branch_taken_0x263be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263be8) {
            ctx->pc = 0x263BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BE8u;
            // 0x263bec: 0x8e6201ac  lw          $v0, 0x1AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263C00u;
            goto label_263c00;
        }
    }
    ctx->pc = 0x263BF0u;
    // 0x263bf0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263bf4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x263bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x263bf8: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263bfc: 0x8e6201ac  lw          $v0, 0x1AC($s3)
    ctx->pc = 0x263bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_263c00:
    // 0x263c00: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263c00u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263c04: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263c08: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x263C08u;
    {
        const bool branch_taken_0x263c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263c08) {
            ctx->pc = 0x263AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263ac0;
        }
    }
    ctx->pc = 0x263C10u;
label_263c10:
    // 0x263c10: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x263c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x263c14: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x263C14u;
    {
        const bool branch_taken_0x263c14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C14u;
        // 0x263c18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c14) {
            ctx->pc = 0x263D70u;
            goto label_263d70;
        }
    }
    ctx->pc = 0x263C1Cu;
    // 0x263c1c: 0x0  nop
    ctx->pc = 0x263c1cu;
    // NOP
label_263c20:
    // 0x263c20: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263c24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263c28: 0x8e6401b0  lw          $a0, 0x1B0($s3)
    ctx->pc = 0x263c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x263c2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263c34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x263c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x263c38: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x263c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263c3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x263c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263c40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x263c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x263c44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263c48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x263c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263c50: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x263c54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263c58: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x263c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x263c5c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x263c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x263c60: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C60u;
    {
        const bool branch_taken_0x263c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x263C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C60u;
        // 0x263c64: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c60) {
            ctx->pc = 0x263C70u;
            goto label_263c70;
        }
    }
    ctx->pc = 0x263C68u;
    // 0x263c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263c6c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263c70:
    // 0x263c70: 0xc080b30  jal         func_202CC0
    ctx->pc = 0x263C70u;
    SET_GPR_U32(ctx, 31, 0x263C78u);
    ctx->pc = 0x263C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C70u;
    // 0x263c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC0u, 0x263C70u, 0x263C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C78u;
label_263c78:
    // 0x263c78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263C78u;
    {
        const bool branch_taken_0x263c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c78) {
            ctx->pc = 0x263C8Cu;
            goto label_263c8c;
        }
    }
    ctx->pc = 0x263C80u;
    // 0x263c80: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263c84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x263c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x263c88: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263c8c:
    // 0x263c8c: 0xc080b46  jal         func_202D18
    ctx->pc = 0x263C8Cu;
    SET_GPR_U32(ctx, 31, 0x263C94u);
    ctx->pc = 0x263C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C8Cu;
    // 0x263c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D18u, 0x263C8Cu, 0x263C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C94u;
label_263c94:
    // 0x263c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263C94u;
    {
        const bool branch_taken_0x263c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C94u;
        // 0x263c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c94) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263C9Cu;
    // 0x263c9c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263c9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263ca0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x263ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x263ca4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_263ca8:
    // 0x263ca8: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263CA8u;
    SET_GPR_U32(ctx, 31, 0x263CB0u);
    ctx->pc = 0x263CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CA8u;
    // 0x263cac: 0x34058156  ori         $a1, $zero, 0x8156 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263CA8u, 0x263CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CB0u;
label_263cb0:
    // 0x263cb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x263CB0u;
    {
        const bool branch_taken_0x263cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263cb0) {
            ctx->pc = 0x263CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263CB0u;
            // 0x263cb4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263CC8u;
            goto label_263cc8;
        }
    }
    ctx->pc = 0x263CB8u;
    // 0x263cb8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263cbc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x263cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x263cc0: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_263cc8:
    // 0x263cc8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x263CC8u;
    {
        const bool branch_taken_0x263cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263cc8) {
            ctx->pc = 0x263CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263CC8u;
            // 0x263ccc: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D10u;
            goto label_263d10;
        }
    }
    ctx->pc = 0x263CD0u;
    // 0x263cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd4: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263CD4u;
    SET_GPR_U32(ctx, 31, 0x263CDCu);
    ctx->pc = 0x263CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CD4u;
    // 0x263cd8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263CD4u, 0x263CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CDCu;
label_263cdc:
    // 0x263cdc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x263CDCu;
    {
        const bool branch_taken_0x263cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263cdc) {
            ctx->pc = 0x263CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263CDCu;
            // 0x263ce0: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D10u;
            goto label_263d10;
        }
    }
    ctx->pc = 0x263CE4u;
    // 0x263ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ce8: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263CE8u;
    SET_GPR_U32(ctx, 31, 0x263CF0u);
    ctx->pc = 0x263CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CE8u;
    // 0x263cec: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263CE8u, 0x263CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CF0u;
label_263cf0:
    // 0x263cf0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263CF0u;
    {
        const bool branch_taken_0x263cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263cf0) {
            ctx->pc = 0x263CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263CF0u;
            // 0x263cf4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D10u;
            goto label_263d10;
        }
    }
    ctx->pc = 0x263CF8u;
    // 0x263cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cfc: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x263CFCu;
    SET_GPR_U32(ctx, 31, 0x263D04u);
    ctx->pc = 0x263D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CFCu;
    // 0x263d00: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x263CFCu, 0x263D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D04u;
label_263d04:
    // 0x263d04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x263D04u;
    {
        const bool branch_taken_0x263d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d04) {
            ctx->pc = 0x263D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263D04u;
            // 0x263d08: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D1Cu;
            goto label_263d1c;
        }
    }
    ctx->pc = 0x263D0Cu;
    // 0x263d0c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_263d10:
    // 0x263d10: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x263d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x263d14: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263d14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263d18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x263d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_263d1c:
    // 0x263d1c: 0x24032400  addiu       $v1, $zero, 0x2400
    ctx->pc = 0x263d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x263d20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263d24: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x263d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x263d28: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263D28u;
    {
        const bool branch_taken_0x263d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263d28) {
            ctx->pc = 0x263D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263D28u;
            // 0x263d2c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D40u;
            goto label_263d40;
        }
    }
    ctx->pc = 0x263D30u;
    // 0x263d30: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263d34: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x263d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x263d38: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263d3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_263d40:
    // 0x263d40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x263d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x263d44: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x263d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x263d48: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263D48u;
    {
        const bool branch_taken_0x263d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263d48) {
            ctx->pc = 0x263D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263D48u;
            // 0x263d4c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263D60u;
            goto label_263d60;
        }
    }
    ctx->pc = 0x263D50u;
    // 0x263d50: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x263d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x263d54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x263d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x263d58: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x263d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x263d5c: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x263d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_263d60:
    // 0x263d60: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263d60u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263d64: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263d68: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x263D68u;
    {
        const bool branch_taken_0x263d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263d68) {
            ctx->pc = 0x263C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263c20;
        }
    }
    ctx->pc = 0x263D70u;
label_263d70:
    // 0x263d70: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x263d74: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x263D74u;
    {
        const bool branch_taken_0x263d74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D74u;
        // 0x263d78: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d74) {
            ctx->pc = 0x263DDCu;
            goto label_263ddc;
        }
    }
    ctx->pc = 0x263D7Cu;
    // 0x263d7c: 0x0  nop
    ctx->pc = 0x263d7cu;
    // NOP
label_263d80:
    // 0x263d80: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263d84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263d84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263d88: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263d88u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263d8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263d90: 0x8e650190  lw          $a1, 0x190($s3)
    ctx->pc = 0x263d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x263d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263d9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x263d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x263da0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x263da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263da4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x263da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x263da8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263dac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x263dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x263db0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263db4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x263db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x263db8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263dbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x263dc0: 0x8e620180  lw          $v0, 0x180($s3)
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x263dc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x263dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x263dc8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x263dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x263dcc: 0x8e630194  lw          $v1, 0x194($s3)
    ctx->pc = 0x263dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x263dd0: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x263dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263dd4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x263DD4u;
    {
        const bool branch_taken_0x263dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263dd4) {
            ctx->pc = 0x263D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263d80;
        }
    }
    ctx->pc = 0x263DDCu;
label_263ddc:
    // 0x263ddc: 0x8e6201ec  lw          $v0, 0x1EC($s3)
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 492)));
    // 0x263de0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x263DE0u;
    {
        const bool branch_taken_0x263de0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DE0u;
        // 0x263de4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263de0) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263DE8u;
label_263de8:
    // 0x263de8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263dec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263decu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263df0: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263df0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263df4: 0x8e6501e8  lw          $a1, 0x1E8($s3)
    ctx->pc = 0x263df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
    // 0x263df8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x263df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x263dfc: 0x8e6401f0  lw          $a0, 0x1F0($s3)
    ctx->pc = 0x263dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
    // 0x263e00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x263e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x263e04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263e08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263e0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263e10: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x263e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x263e14: 0x8e6201ec  lw          $v0, 0x1EC($s3)
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 492)));
    // 0x263e18: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263e1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x263E1Cu;
    {
        const bool branch_taken_0x263e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e1c) {
            ctx->pc = 0x263DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263de8;
        }
    }
    ctx->pc = 0x263E24u;
label_263e24:
    // 0x263e24: 0x8e6201cc  lw          $v0, 0x1CC($s3)
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x263e28: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x263E28u;
    {
        const bool branch_taken_0x263e28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E28u;
        // 0x263e2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e28) {
            ctx->pc = 0x263E68u;
            goto label_263e68;
        }
    }
    ctx->pc = 0x263E30u;
label_263e30:
    // 0x263e30: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263e34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263e34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263e38: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263e38u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263e3c: 0x8e6401c8  lw          $a0, 0x1C8($s3)
    ctx->pc = 0x263e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x263e40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x263e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x263e44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x263e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263e48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263e50: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263e54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x263e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x263e58: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x263e5c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x263e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263e60: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x263E60u;
    {
        const bool branch_taken_0x263e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e60) {
            ctx->pc = 0x263E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263e30;
        }
    }
    ctx->pc = 0x263E68u;
label_263e68:
    // 0x263e68: 0x8e6201d4  lw          $v0, 0x1D4($s3)
    ctx->pc = 0x263e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
    // 0x263e6c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x263E6Cu;
    {
        const bool branch_taken_0x263e6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E6Cu;
        // 0x263e70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e6c) {
            ctx->pc = 0x263EB0u;
            goto label_263eb0;
        }
    }
    ctx->pc = 0x263E74u;
    // 0x263e74: 0x0  nop
    ctx->pc = 0x263e74u;
    // NOP
label_263e78:
    // 0x263e78: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263e7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263e7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263e80: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263e80u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263e84: 0x8e6401d0  lw          $a0, 0x1D0($s3)
    ctx->pc = 0x263e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x263e88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x263e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x263e8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x263e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263e90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x263e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263e94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263e98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263e9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x263e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x263ea0: 0x8e6301d4  lw          $v1, 0x1D4($s3)
    ctx->pc = 0x263ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
    // 0x263ea4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263ea8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x263EA8u;
    {
        const bool branch_taken_0x263ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ea8) {
            ctx->pc = 0x263E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263e78;
        }
    }
    ctx->pc = 0x263EB0u;
label_263eb0:
    // 0x263eb0: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x263eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x263eb4: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x263EB4u;
    {
        const bool branch_taken_0x263eb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EB4u;
        // 0x263eb8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263eb4) {
            ctx->pc = 0x263FB4u;
            goto label_263fb4;
        }
    }
    ctx->pc = 0x263EBCu;
    // 0x263ebc: 0x0  nop
    ctx->pc = 0x263ebcu;
    // NOP
label_263ec0:
    // 0x263ec0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x263ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263ec4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x263ec4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x263ec8: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263ec8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263ecc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x263eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263ed0: 0x8e640180  lw          $a0, 0x180($s3)
    ctx->pc = 0x263ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x263ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263ed8: 0x8e670198  lw          $a3, 0x198($s3)
    ctx->pc = 0x263ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263edc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x263ee0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263ee4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x263ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263ee8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x263ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x263eec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263ef0: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x263ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x263ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263ef8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x263ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263efc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263f00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x263f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x263f04: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x263f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x263f08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x263f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x263f0c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x263f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x263f10: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x263f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x263f14: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x263f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x263f18: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x263f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x263f1c: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x263f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263f24: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x263f24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263f28: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x263f28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x263f2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x263f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263f30: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x263f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x263f34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x263f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x263f38: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x263f3c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x263f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x263f40: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x263f40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x263f44: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x263f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f48: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x263f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x263f4c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x263f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x263f50: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x263f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x263f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263f58: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x263f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x263f5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x263f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x263f60: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x263f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x263f64: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x263f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263f68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x263f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x263f6c: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x263f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f70: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x263f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x263f74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x263f78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x263f7c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x263f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x263f80: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x263f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f84: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x263f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x263f88: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x263f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x263f8c: 0x8e630198  lw          $v1, 0x198($s3)
    ctx->pc = 0x263f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x263f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x263f94: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x263f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x263f98: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x263f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263f9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x263f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263fa0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x263fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x263fa4: 0x8e630184  lw          $v1, 0x184($s3)
    ctx->pc = 0x263fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x263fa8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x263fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263fac: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x263FACu;
    {
        const bool branch_taken_0x263fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263fac) {
            ctx->pc = 0x263EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263ec0;
        }
    }
    ctx->pc = 0x263FB4u;
label_263fb4:
    // 0x263fb4: 0x8e62019c  lw          $v0, 0x19C($s3)
    ctx->pc = 0x263fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 412)));
    // 0x263fb8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x263FB8u;
    {
        const bool branch_taken_0x263fb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FB8u;
        // 0x263fbc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fb8) {
            ctx->pc = 0x264004u;
            goto label_264004;
        }
    }
    ctx->pc = 0x263FC0u;
label_263fc0:
    // 0x263fc0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x263fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x263fc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x263fc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x263fc8: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x263fc8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x263fcc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x263fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263fd0: 0x8e650198  lw          $a1, 0x198($s3)
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x263fd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263fd8: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x263fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
    // 0x263fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263fe0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x263fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x263fe4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x263fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x263fe8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263fec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263ff0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x263ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x263ff4: 0x8e62019c  lw          $v0, 0x19C($s3)
    ctx->pc = 0x263ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 412)));
    // 0x263ff8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x263ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263ffc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x263FFCu;
    {
        const bool branch_taken_0x263ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ffc) {
            ctx->pc = 0x263FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263fc0;
        }
    }
    ctx->pc = 0x264004u;
label_264004:
    // 0x264004: 0x8e620214  lw          $v0, 0x214($s3)
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x264008: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x264008u;
    {
        const bool branch_taken_0x264008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264008u;
        // 0x26400c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264008) {
            ctx->pc = 0x2640A4u;
            goto label_2640a4;
        }
    }
    ctx->pc = 0x264010u;
label_264010:
    // 0x264010: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x264010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x264014: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x264014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264018: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x264018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x26401c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x26401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x264020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26402c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26402cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x264030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x264034: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x264034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_264038:
    // 0x264038: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x264038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x26403c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26403cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264040: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x264040u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x264044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264048: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x264048u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26404c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x264050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264054: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x264058: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x264058u;
    {
        const bool branch_taken_0x264058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264058u;
        // 0x26405c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264058) {
            ctx->pc = 0x264038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264038;
        }
    }
    ctx->pc = 0x264060u;
    // 0x264060: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x264064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264068:
    // 0x264068: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x264068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x26406c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26406cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264070: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x264070u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x264074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264078: 0x28a40005  slti        $a0, $a1, 0x5
    ctx->pc = 0x264078u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x26407c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x264080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264084: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x264084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x264088: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x264088u;
    {
        const bool branch_taken_0x264088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264088u;
        // 0x26408c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264088) {
            ctx->pc = 0x264068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264068;
        }
    }
    ctx->pc = 0x264090u;
    // 0x264090: 0x8e620214  lw          $v0, 0x214($s3)
    ctx->pc = 0x264090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x264094: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x264094u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x264098: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x264098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26409c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x26409Cu;
    {
        const bool branch_taken_0x26409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26409c) {
            ctx->pc = 0x264010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264010;
        }
    }
    ctx->pc = 0x2640A4u;
label_2640a4:
    // 0x2640a4: 0x8e620204  lw          $v0, 0x204($s3)
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 516)));
    // 0x2640a8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2640A8u;
    {
        const bool branch_taken_0x2640a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2640ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640A8u;
        // 0x2640ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640a8) {
            ctx->pc = 0x2640F4u;
            goto label_2640f4;
        }
    }
    ctx->pc = 0x2640B0u;
label_2640b0:
    // 0x2640b0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2640b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2640b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2640b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2640b8: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x2640b8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x2640bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2640bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2640c0: 0x8e650200  lw          $a1, 0x200($s3)
    ctx->pc = 0x2640c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x2640c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2640c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2640c8: 0x8e640208  lw          $a0, 0x208($s3)
    ctx->pc = 0x2640c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x2640cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2640ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2640d0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2640d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2640d4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2640d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2640d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2640dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2640dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2640e0: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x2640e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x2640e4: 0x8e620204  lw          $v0, 0x204($s3)
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 516)));
    // 0x2640e8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2640e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2640ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2640ECu;
    {
        const bool branch_taken_0x2640ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640ec) {
            ctx->pc = 0x2640B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2640b0;
        }
    }
    ctx->pc = 0x2640F4u;
label_2640f4:
    // 0x2640f4: 0x8e620234  lw          $v0, 0x234($s3)
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x2640f8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2640F8u;
    {
        const bool branch_taken_0x2640f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2640FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640F8u;
        // 0x2640fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640f8) {
            ctx->pc = 0x26413Cu;
            goto label_26413c;
        }
    }
    ctx->pc = 0x264100u;
label_264100:
    // 0x264100: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x264100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x264104: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x264104u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x264108: 0x66940001  daddiu      $s4, $s4, 0x1
    ctx->pc = 0x264108u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)1);
    // 0x26410c: 0x8e650230  lw          $a1, 0x230($s3)
    ctx->pc = 0x26410cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x264110: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x264110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264114: 0x8e6401c0  lw          $a0, 0x1C0($s3)
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x264118: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x264118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26411c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x26411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x264120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x264124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x264128: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x264128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x26412c: 0x8e620234  lw          $v0, 0x234($s3)
    ctx->pc = 0x26412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x264130: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x264130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264134: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x264134u;
    {
        const bool branch_taken_0x264134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264134) {
            ctx->pc = 0x264100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264100;
        }
    }
    ctx->pc = 0x26413Cu;
label_26413c:
    // 0x26413c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264140: 0xae600268  sw          $zero, 0x268($s3)
    ctx->pc = 0x264140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 616), GPR_U32(ctx, 0));
    // 0x264144: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x264144u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
label_264148:
    // 0x264148: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x264148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26414c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x26414cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x264150: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x264150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264154: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x264158: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x264158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26415c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x26415cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x264160: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x264160u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264164: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x264164u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x264168: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x264168u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26416c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x26416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x264170: 0x3e00008  jr          $ra
    ctx->pc = 0x264170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264170u;
        // 0x264174: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264178u;
}
