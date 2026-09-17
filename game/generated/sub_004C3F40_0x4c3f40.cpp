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

// Function: sub_004C3F40
// Address: 0x4c3f40 - 0x4c46c0
void sub_004C3F40_0x4c3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3F40_0x4c3f40");
#endif

    switch (ctx->pc) {
        case 0x4c3f6cu: goto label_4c3f6c;
        case 0x4c3f8cu: goto label_4c3f8c;
        case 0x4c40f0u: goto label_4c40f0;
        case 0x4c424cu: goto label_4c424c;
        case 0x4c4280u: goto label_4c4280;
        case 0x4c4288u: goto label_4c4288;
        case 0x4c4444u: goto label_4c4444;
        case 0x4c4520u: goto label_4c4520;
        case 0x4c45fcu: goto label_4c45fc;
        case 0x4c4604u: goto label_4c4604;
        case 0x4c460cu: goto label_4c460c;
        case 0x4c4614u: goto label_4c4614;
        case 0x4c461cu: goto label_4c461c;
        case 0x4c4630u: goto label_4c4630;
        case 0x4c465cu: goto label_4c465c;
        case 0x4c4664u: goto label_4c4664;
        case 0x4c466cu: goto label_4c466c;
        case 0x4c4674u: goto label_4c4674;
        case 0x4c4688u: goto label_4c4688;
        case 0x4c46a0u: goto label_4c46a0;
        case 0x4c46a8u: goto label_4c46a8;
        default: break;
    }

    ctx->pc = 0x4c3f40u;

    // 0x4c3f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c3f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c3f44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c3f48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c3f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3f4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c3f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c3f50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c3f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c3f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c3f5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c3f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c3f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c3f64: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C3F64u;
    SET_GPR_U32(ctx, 31, 0x4C3F6Cu);
    ctx->pc = 0x4C3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3F64u;
    // 0x4c3f68: 0x263301b4  addiu       $s3, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C3F64u, 0x4C3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3F6Cu;
label_4c3f6c:
    // 0x4c3f6c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c3f70: 0x24740edc  addiu       $s4, $v1, 0xEDC
    ctx->pc = 0x4c3f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3804));
    // 0x4c3f74: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c3f74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EDCu, _value); } while (0);
    // 0x4c3f78: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c3f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c3f7c: 0x440006e  bltz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4C3F7Cu;
    {
        const bool branch_taken_0x4c3f7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3F7Cu;
        // 0x4c3f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3f7c) {
            ctx->pc = 0x4C4138u;
            goto label_4c4138;
        }
    }
    ctx->pc = 0x4C3F84u;
    // 0x4c3f84: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C3F84u;
    SET_GPR_U32(ctx, 31, 0x4C3F8Cu);
    ctx->pc = 0x4C3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3F84u;
    // 0x4c3f88: 0x3c15007f  lui         $s5, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C3F84u, 0x4C3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3F8Cu;
label_4c3f8c:
    // 0x4c3f8c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c3f90: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4c3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4c3f94: 0x24a50ed4  addiu       $a1, $a1, 0xED4
    ctx->pc = 0x4c3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3796));
    // 0x4c3f98: 0x24847108  addiu       $a0, $a0, 0x7108
    ctx->pc = 0x4c3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28936));
    // 0x4c3f9c: 0x26b20eb8  addiu       $s2, $s5, 0xEB8
    ctx->pc = 0x4c3f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 3768));
    // 0x4c3fa0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c3fa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0ED4u, _value); } while (0);
    // 0x4c3fa4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4c3fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3fa8: 0x26300162  addiu       $s0, $s1, 0x162
    ctx->pc = 0x4c3fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
    // 0x4c3fac: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c3facu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c3fb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3fb4: 0x256b0ec4  addiu       $t3, $t3, 0xEC4
    ctx->pc = 0x4c3fb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3780));
    // 0x4c3fb8: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4c3fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4c3fbc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c3fbcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c3fc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c3fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c3fc4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c3fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c3fc8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c3fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c3fcc: 0x258c0ec8  addiu       $t4, $t4, 0xEC8
    ctx->pc = 0x4c3fccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3784));
    // 0x4c3fd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c3fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c3fd4: 0x25ce0ecc  addiu       $t6, $t6, 0xECC
    ctx->pc = 0x4c3fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3788));
    // 0x4c3fd8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c3fdc: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4c3fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4c3fe0: 0x25ef0ebc  addiu       $t7, $t7, 0xEBC
    ctx->pc = 0x4c3fe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3772));
    // 0x4c3fe4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c3fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c3fe8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c3fec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c3ff0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c3ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c3ff4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c3ff8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4c3ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3ffc: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x4c3ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c4000: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4c4000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4c4004: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4c4004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4008: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c4008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c400c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4c400cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c4010: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4014: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4018: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c4018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c401c: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4c401cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4020: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c4020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c4024: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c4024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c4028: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c4028u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c402c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c402cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4030: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c4030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c4034: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c4034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c4038: 0x8e8d0000  lw          $t5, 0x0($s4)
    ctx->pc = 0x4c4038u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c403c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c4040: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4c4040u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4044: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4048: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c4048u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c404c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c4050: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c4050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c4054: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c4054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c4058: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c4058u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c405c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c405cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c4060: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4c4060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c4064: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4c4064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c4068: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c4068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c406c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c406cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4070: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c4070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c4074: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c4074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c4078: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4c4078u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4c407c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c407cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c4080: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4c4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c4084: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4c4084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c4088: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c4088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c408c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c408cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4090: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c4090u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c4094: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x4c4094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x4c4098: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4c4098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4c409c: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c409cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c40a0: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x4c40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x4c40a4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c40a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c40a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c40a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c40ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c40b0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4c40b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4c40b4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c40b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c40b8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c40bc: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x4c40bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4c40c0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c40c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c40c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c40c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c40c8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c40cc: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4c40ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x4c40d0: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c40d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4c40d4: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4c40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4c40d8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c40d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c40dc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c40e0: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4c40e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4c40e4: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4c40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4c40e8: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C40E8u;
    SET_GPR_U32(ctx, 31, 0x4C40F0u);
    ctx->pc = 0x4C40ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C40E8u;
    // 0x4c40ec: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C40E8u, 0x4C40F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C40F0u;
label_4c40f0:
    // 0x4c40f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c40f4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C40F4u;
    {
        const bool branch_taken_0x4c40f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c40f4) {
            ctx->pc = 0x4C40F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C40F4u;
            // 0x4c40f8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4108u;
            goto label_4c4108;
        }
    }
    ctx->pc = 0x4C40FCu;
    // 0x4c40fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4c40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c4100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4100u;
    {
        const bool branch_taken_0x4c4100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4100u;
        // 0x4c4104: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4100) {
            ctx->pc = 0x4C4110u;
            goto label_4c4110;
        }
    }
    ctx->pc = 0x4C4108u;
label_4c4108:
    // 0x4c4108: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c410c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c4110:
    // 0x4c4110: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c4110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c4114: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x4c4114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x4c4118: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x4c4118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c411c: 0x96a20eb8  lhu         $v0, 0xEB8($s5)
    ctx->pc = 0x4c411cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3768)));
    // 0x4c4120: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4c4120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4124: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4c4124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4128: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4c4128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c412c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c412cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c4130: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c4130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c4134: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4c4134u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c4138:
    // 0x4c4138: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4c4138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4c413c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4140: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4C4140u;
    {
        const bool branch_taken_0x4c4140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4140u;
        // 0x4c4144: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4140) {
            ctx->pc = 0x4C4198u;
            goto label_4c4198;
        }
    }
    ctx->pc = 0x4C4148u;
    // 0x4c4148: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4148u;
    {
        const bool branch_taken_0x4c4148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4148) {
            ctx->pc = 0x4C414Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4148u;
            // 0x4c414c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4160u;
            goto label_4c4160;
        }
    }
    ctx->pc = 0x4C4150u;
    // 0x4c4150: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C4150u;
    {
        const bool branch_taken_0x4c4150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4150u;
        // 0x4c4154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4150) {
            ctx->pc = 0x4C4170u;
            goto label_4c4170;
        }
    }
    ctx->pc = 0x4C4158u;
    // 0x4c4158: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4C4158u;
    {
        const bool branch_taken_0x4c4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4158u;
        // 0x4c415c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4158) {
            ctx->pc = 0x4C41E8u;
            goto label_4c41e8;
        }
    }
    ctx->pc = 0x4C4160u;
label_4c4160:
    // 0x4c4160: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4C4160u;
    {
        const bool branch_taken_0x4c4160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4160u;
        // 0x4c4164: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4160) {
            ctx->pc = 0x4C41C0u;
            goto label_4c41c0;
        }
    }
    ctx->pc = 0x4C4168u;
    // 0x4c4168: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4C4168u;
    {
        const bool branch_taken_0x4c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4168u;
        // 0x4c416c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4168) {
            ctx->pc = 0x4C41E8u;
            goto label_4c41e8;
        }
    }
    ctx->pc = 0x4C4170u;
label_4c4170:
    // 0x4c4170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c4174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c417c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c417cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4180: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c4180u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4184: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c4184u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c4188: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c4188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c418c: 0x8131082  j           func_4C4208
    ctx->pc = 0x4C418Cu;
    ctx->pc = 0x4C4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C418Cu;
    // 0x4c4190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4208u;
    goto label_4c4208;
    ctx->pc = 0x4C4194u;
    // 0x4c4194: 0x0  nop
    ctx->pc = 0x4c4194u;
    // NOP
label_4c4198:
    // 0x4c4198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c419c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c419cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c41a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c41a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c41a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c41a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c41a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c41a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c41ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c41acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c41b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c41b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c41b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c41b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c41b8: 0x81310c4  j           func_4C4310
    ctx->pc = 0x4C41B8u;
    ctx->pc = 0x4C41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C41B8u;
    // 0x4c41bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4310u;
    goto label_4c4310;
    ctx->pc = 0x4C41C0u;
label_4c41c0:
    // 0x4c41c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c41c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c41c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c41c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c41c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c41cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c41ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c41d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c41d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c41d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c41d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c41d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c41d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c41dc: 0x8131142  j           func_4C4508
    ctx->pc = 0x4C41DCu;
    ctx->pc = 0x4C41E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C41DCu;
    // 0x4c41e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4508u;
    goto label_4c4508;
    ctx->pc = 0x4C41E4u;
    // 0x4c41e4: 0x0  nop
    ctx->pc = 0x4c41e4u;
    // NOP
label_4c41e8:
    // 0x4c41e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c41e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c41ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c41ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c41f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c41f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c41f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c41f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c41f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c41f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c41fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C41FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C41FCu;
        // 0x4c4200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C41FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4204u;
    // 0x4c4204: 0x0  nop
    ctx->pc = 0x4c4204u;
    // NOP
label_4c4208:
    // 0x4c4208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c420c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c420cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c4210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4214: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c4214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c421c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c421cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c4224: 0x24630eb8  addiu       $v1, $v1, 0xEB8
    ctx->pc = 0x4c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3768));
    // 0x4c4228: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c422c: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x4c422cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x4c4230: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c4234: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c4234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0EB8u));
    // 0x4c4238: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c4238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c423c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c4240: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c4240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4c4244: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C4244u;
    SET_GPR_U32(ctx, 31, 0x4C424Cu);
    ctx->pc = 0x4C4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4244u;
    // 0x4c4248: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C4244u, 0x4C424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C424Cu;
label_4c424c:
    // 0x4c424c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4C424Cu;
    {
        const bool branch_taken_0x4c424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C424Cu;
        // 0x4c4250: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c424c) {
            ctx->pc = 0x4C42F0u;
            goto label_4c42f0;
        }
    }
    ctx->pc = 0x4C4254u;
    // 0x4c4254: 0x24440ed0  addiu       $a0, $v0, 0xED0
    ctx->pc = 0x4c4254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x4c4258: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c4258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c425c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c4260: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4c4260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4c4264: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c4264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c4268: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c4268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c426c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4C426Cu;
    {
        const bool branch_taken_0x4c426c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C426Cu;
        // 0x4c4270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c426c) {
            ctx->pc = 0x4C42C0u;
            goto label_4c42c0;
        }
    }
    ctx->pc = 0x4C4274u;
    // 0x4c4274: 0x2413003b  addiu       $s3, $zero, 0x3B
    ctx->pc = 0x4c4274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x4c4278: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c4278u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c427c: 0x0  nop
    ctx->pc = 0x4c427cu;
    // NOP
label_4c4280:
    // 0x4c4280: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4C4280u;
    SET_GPR_U32(ctx, 31, 0x4C4288u);
    ctx->pc = 0x4C4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4280u;
    // 0x4c4284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4C4280u, 0x4C4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4288u;
label_4c4288:
    // 0x4c4288: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x4c4288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4c428c: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4c428cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4c4290: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c4290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c4294: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4c4294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4298: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c4298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c429c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c42a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4c42a4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c42a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c42ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c42acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c42b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c42b4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c42b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c42b8: 0x441fff1  bgez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4C42B8u;
    {
        const bool branch_taken_0x4c42b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c42b8) {
            ctx->pc = 0x4C4280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c4280;
        }
    }
    ctx->pc = 0x4C42C0u;
label_4c42c0:
    // 0x4c42c0: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4c42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c42c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c42c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c42c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c42c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c42cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c42ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c42d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c42d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c42d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c42d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c42d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c42dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c42dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c42e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c42e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c42e4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c42e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c42e8: 0x81310c4  j           func_4C4310
    ctx->pc = 0x4C42E8u;
    ctx->pc = 0x4C42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C42E8u;
    // 0x4c42ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4310u;
    goto label_4c4310;
    ctx->pc = 0x4C42F0u;
label_4c42f0:
    // 0x4c42f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c42f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c42f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c42f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c42f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c42f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c42fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c42fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c4304: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4304u;
        // 0x4c4308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C430Cu;
    // 0x4c430c: 0x0  nop
    ctx->pc = 0x4c430cu;
    // NOP
label_4c4310:
    // 0x4c4310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c4314: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c4314u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c4318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c431c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c431cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4324: 0x256b0ec4  addiu       $t3, $t3, 0xEC4
    ctx->pc = 0x4c4324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3780));
    // 0x4c4328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c4328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c432c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c432cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c4330: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c4330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c4334: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c4334u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c4338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c433c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4340: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c4340u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c4344: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c4344u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c4348: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4c4348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4c434c: 0x258c0ec8  addiu       $t4, $t4, 0xEC8
    ctx->pc = 0x4c434cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3784));
    // 0x4c4350: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4c4350u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EC4u));
    // 0x4c4354: 0x25ad0ecc  addiu       $t5, $t5, 0xECC
    ctx->pc = 0x4c4354u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3788));
    // 0x4c4358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c4358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c435c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4c435cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EC8u));
    // 0x4c4360: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4364: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c4364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c4368: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c4368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c436c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c436cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c4370: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c4370u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c4374: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c4374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c4378: 0x264f0ebc  addiu       $t7, $s2, 0xEBC
    ctx->pc = 0x4c4378u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 3772));
    // 0x4c437c: 0x26710eb8  addiu       $s1, $s3, 0xEB8
    ctx->pc = 0x4c437cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 3768));
    // 0x4c4380: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c4384: 0x8c8e0edc  lw          $t6, 0xEDC($a0)
    ctx->pc = 0x4c4384u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3804)));
    // 0x4c4388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c438c: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4c438cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c4390: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4394: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4c4394u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c4398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c4398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c439c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c439cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c43a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c43a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c43a4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c43a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c43a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c43ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4c43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c43b0: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4c43b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c43b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c43b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c43b8: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c43b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c43bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c43bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c43c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c43c4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c43c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c43c8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c43c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c43cc: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c43d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c43d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c43d4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4c43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c43d8: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4c43d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c43dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c43dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c43e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c43e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c43e4: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c43e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c43e8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x4c43e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x4c43ec: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4c43ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4c43f0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c43f4: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x4c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4c43f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c43fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c43fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c4400: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c4400u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c4404: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x4c4404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x4c4408: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c4408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c440c: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c440cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c4410: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4c4410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4c4414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c4414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c4418: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c4418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c441c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c441cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c4420: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c4420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4c4424: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c4424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4c4428: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c4428u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c442c: 0x86020162  lh          $v0, 0x162($s0)
    ctx->pc = 0x4c442cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4c4430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c4434: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4c4434u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4c4438: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4c4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c443c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C443Cu;
    SET_GPR_U32(ctx, 31, 0x4C4444u);
    ctx->pc = 0x4C4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C443Cu;
    // 0x4c4440: 0xadea0000  sw          $t2, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C443Cu, 0x4C4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4444u;
label_4c4444:
    // 0x4c4444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c4448: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C4448u;
    {
        const bool branch_taken_0x4c4448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c4448) {
            ctx->pc = 0x4C444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4448u;
            // 0x4c444c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4460u;
            goto label_4c4460;
        }
    }
    ctx->pc = 0x4C4450u;
    // 0x4c4450: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c4454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C4454u;
    {
        const bool branch_taken_0x4c4454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4454u;
        // 0x4c4458: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4454) {
            ctx->pc = 0x4C4468u;
            goto label_4c4468;
        }
    }
    ctx->pc = 0x4C445Cu;
    // 0x4c445c: 0x0  nop
    ctx->pc = 0x4c445cu;
    // NOP
label_4c4460:
    // 0x4c4460: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c4464: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c4464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c4468:
    // 0x4c4468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c4468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c446c: 0x26470ebc  addiu       $a3, $s2, 0xEBC
    ctx->pc = 0x4c446cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3772));
    // 0x4c4470: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c4470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4474: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c4474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c4478: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c447c: 0x8604015e  lh          $a0, 0x15E($s0)
    ctx->pc = 0x4c447cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4c4480: 0x8e630eb8  lw          $v1, 0xEB8($s3)
    ctx->pc = 0x4c4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3768)));
    // 0x4c4484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c4484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c4488: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c4488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4c448c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c4490: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x4c4490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c4494: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c4494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c4498: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4c4498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4c449c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c44a0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4c44a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c44a4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C44A4u;
    {
        const bool branch_taken_0x4c44a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C44A4u;
        // 0x4c44a8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c44a4) {
            ctx->pc = 0x4C44D0u;
            goto label_4c44d0;
        }
    }
    ctx->pc = 0x4C44ACu;
    // 0x4c44ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c44acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c44b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c44b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c44b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c44b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c44b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c44b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c44bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c44bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c44c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c44c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c44c4: 0x8131142  j           func_4C4508
    ctx->pc = 0x4C44C4u;
    ctx->pc = 0x4C44C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C44C4u;
    // 0x4c44c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4508u;
    goto label_4c4508;
    ctx->pc = 0x4C44CCu;
    // 0x4c44cc: 0x0  nop
    ctx->pc = 0x4c44ccu;
    // NOP
label_4c44d0:
    // 0x4c44d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c44d4: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c44d8: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4c44d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c44dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c44dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c44e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c44e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c44e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c44e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c44e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c44e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c44ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c44ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c44f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c44f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c44f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c44f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c44f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c44fc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c44fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4500: 0x8131142  j           func_4C4508
    ctx->pc = 0x4C4500u;
    ctx->pc = 0x4C4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4500u;
    // 0x4c4504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4508u;
    goto label_4c4508;
    ctx->pc = 0x4C4508u;
label_4c4508:
    // 0x4c4508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c450c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c4510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c4510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c4514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c4518: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C4518u;
    SET_GPR_U32(ctx, 31, 0x4C4520u);
    ctx->pc = 0x4C451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4518u;
    // 0x4c451c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C4518u, 0x4C4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4520u;
label_4c4520:
    // 0x4c4520: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c4520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c4524: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c4524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c4528: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c4528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c452c: 0x246f0ec4  addiu       $t7, $v1, 0xEC4
    ctx->pc = 0x4c452cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 3780));
    // 0x4c4530: 0x24910ec8  addiu       $s1, $a0, 0xEC8
    ctx->pc = 0x4c4530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3784));
    // 0x4c4534: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c4534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c4538: 0x24b80ecc  addiu       $t8, $a1, 0xECC
    ctx->pc = 0x4c4538u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 3788));
    // 0x4c453c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4c453cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4c4540: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c4540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c4544: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c4544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4548: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c4548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c454c: 0x248e0ed4  addiu       $t6, $a0, 0xED4
    ctx->pc = 0x4c454cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 3796));
    // 0x4c4550: 0x24630eb8  addiu       $v1, $v1, 0xEB8
    ctx->pc = 0x4c4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3768));
    // 0x4c4554: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x4C4554u;
    {
        const bool branch_taken_0x4c4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4554u;
        // 0x4c4558: 0x24a57110  addiu       $a1, $a1, 0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4554) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C455Cu;
    // 0x4c455c: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4c455cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4c4560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c4560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4c4564: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4c4564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4c4568: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C4568u;
    {
        const bool branch_taken_0x4c4568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4568) {
            ctx->pc = 0x4C456Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C4568u;
            // 0x4c456c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4584u;
            goto label_4c4584;
        }
    }
    ctx->pc = 0x4C4570u;
    // 0x4c4570: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c4570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c4574: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4c4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4c4578: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4c4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c457c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c457cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4c4580: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c4580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4c4584:
    // 0x4c4584: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c4584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c4588: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c4588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c458c: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x4c458cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c4590: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c4590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c4594: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x4c4594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4c4598: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c4598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c459c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c459cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c45a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c45a4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c45a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c45a8: 0x244b0002  addiu       $t3, $v0, 0x2
    ctx->pc = 0x4c45a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c45ac: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4c45acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c45b0: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4c45b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c45b4: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4c45b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c45b8: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4c45b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c45bc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4c45bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4c45c0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c45c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4c45c4: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x4c45c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x4c45c8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4c45c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4c45cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4c45ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4c45d0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c45d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c45d4: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4c45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4c45d8: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c45d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c45dc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4c45dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c45e0: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4c45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4c45e4: 0x244d0006  addiu       $t5, $v0, 0x6
    ctx->pc = 0x4c45e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4c45e8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4c45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c45ec: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4c45ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c45f0: 0xaf080000  sw          $t0, 0x0($t8)
    ctx->pc = 0x4c45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 8));
    // 0x4c45f4: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4C45F4u;
    SET_GPR_U32(ctx, 31, 0x4C45FCu);
    ctx->pc = 0x4C45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C45F4u;
    // 0x4c45f8: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4C45F4u, 0x4C45FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C45FCu;
label_4c45fc:
    // 0x4c45fc: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C45FCu;
    SET_GPR_U32(ctx, 31, 0x4C4604u);
    ctx->pc = 0x4C4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C45FCu;
    // 0x4c4600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C45FCu, 0x4C4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4604u;
label_4c4604:
    // 0x4c4604: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C4604u;
    SET_GPR_U32(ctx, 31, 0x4C460Cu);
    ctx->pc = 0x4C4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4604u;
    // 0x4c4608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C4604u, 0x4C460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C460Cu;
label_4c460c:
    // 0x4c460c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C460Cu;
    SET_GPR_U32(ctx, 31, 0x4C4614u);
    ctx->pc = 0x4C4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C460Cu;
    // 0x4c4610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C460Cu, 0x4C4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4614u;
label_4c4614:
    // 0x4c4614: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C4614u;
    SET_GPR_U32(ctx, 31, 0x4C461Cu);
    ctx->pc = 0x4C4618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4614u;
    // 0x4c4618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C4614u, 0x4C461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C461Cu;
label_4c461c:
    // 0x4c461c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4620: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4C4620u;
    {
        const bool branch_taken_0x4c4620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4620u;
        // 0x4c4624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4620) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C4628u;
    // 0x4c4628: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C4628u;
    SET_GPR_U32(ctx, 31, 0x4C4630u);
    ctx->pc = 0x4C462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4628u;
    // 0x4c462c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C4628u, 0x4C4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4630u;
label_4c4630:
    // 0x4c4630: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c4630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c4634: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x4c4634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c4638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c463c: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C463Cu;
    {
        const bool branch_taken_0x4c463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C463Cu;
        // 0x4c4640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c463c) {
            ctx->pc = 0x4C4680u;
            goto label_4c4680;
        }
    }
    ctx->pc = 0x4C4644u;
    // 0x4c4644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c4648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c464c: 0xa4c223c4  sh          $v0, 0x23C4($a2)
    ctx->pc = 0x4c464cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c4650: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4c4650u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c4654: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C4654u;
    SET_GPR_U32(ctx, 31, 0x4C465Cu);
    ctx->pc = 0x4C4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4654u;
    // 0x4c4658: 0xa4c0232c  sh          $zero, 0x232C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C4654u, 0x4C465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C465Cu;
label_4c465c:
    // 0x4c465c: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C465Cu;
    SET_GPR_U32(ctx, 31, 0x4C4664u);
    ctx->pc = 0x4C4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C465Cu;
    // 0x4c4660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C465Cu, 0x4C4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4664u;
label_4c4664:
    // 0x4c4664: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C4664u;
    SET_GPR_U32(ctx, 31, 0x4C466Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C4664u, 0x4C466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C466Cu;
label_4c466c:
    // 0x4c466c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C466Cu;
    SET_GPR_U32(ctx, 31, 0x4C4674u);
    ctx->pc = 0x4C4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C466Cu;
    // 0x4c4670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C466Cu, 0x4C4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4674u;
label_4c4674:
    // 0x4c4674: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C4674u;
    {
        const bool branch_taken_0x4c4674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4674u;
        // 0x4c4678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4674) {
            ctx->pc = 0x4C46ACu;
            goto label_4c46ac;
        }
    }
    ctx->pc = 0x4C467Cu;
    // 0x4c467c: 0x0  nop
    ctx->pc = 0x4c467cu;
    // NOP
label_4c4680:
    // 0x4c4680: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C4680u;
    SET_GPR_U32(ctx, 31, 0x4C4688u);
    ctx->pc = 0x4C4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4680u;
    // 0x4c4684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C4680u, 0x4C4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4688u;
label_4c4688:
    // 0x4c4688: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C4688u;
    {
        const bool branch_taken_0x4c4688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4688u;
        // 0x4c468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4688) {
            ctx->pc = 0x4C46A8u;
            goto label_4c46a8;
        }
    }
    ctx->pc = 0x4C4690u;
    // 0x4c4690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c4694: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c4694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c4698: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C4698u;
    SET_GPR_U32(ctx, 31, 0x4C46A0u);
    ctx->pc = 0x4C469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4698u;
    // 0x4c469c: 0xa443f9ae  sh          $v1, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C4698u, 0x4C46A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C46A0u;
label_4c46a0:
    // 0x4c46a0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C46A0u;
    SET_GPR_U32(ctx, 31, 0x4C46A8u);
    ctx->pc = 0x4C46A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C46A0u;
    // 0x4c46a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C46A0u, 0x4C46A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C46A8u;
label_4c46a8:
    // 0x4c46a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c46a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c46ac:
    // 0x4c46ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c46acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c46b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c46b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c46b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C46B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C46B4u;
        // 0x4c46b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C46B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C46BCu;
    // 0x4c46bc: 0x0  nop
    ctx->pc = 0x4c46bcu;
    // NOP
    ctx->pc = 0x4c46c0u;
}
