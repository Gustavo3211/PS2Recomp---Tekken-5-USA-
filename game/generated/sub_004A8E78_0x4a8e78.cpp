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

// Function: sub_004A8E78
// Address: 0x4a8e78 - 0x4a9140
void sub_004A8E78_0x4a8e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8E78_0x4a8e78");
#endif

    switch (ctx->pc) {
        case 0x4a8e78u: goto label_4a8e78;
        case 0x4a8e7cu: goto label_4a8e7c;
        case 0x4a8e80u: goto label_4a8e80;
        case 0x4a8e84u: goto label_4a8e84;
        case 0x4a8e88u: goto label_4a8e88;
        case 0x4a8e8cu: goto label_4a8e8c;
        case 0x4a8e90u: goto label_4a8e90;
        case 0x4a8e94u: goto label_4a8e94;
        case 0x4a8e98u: goto label_4a8e98;
        case 0x4a8e9cu: goto label_4a8e9c;
        case 0x4a8ea0u: goto label_4a8ea0;
        case 0x4a8ea4u: goto label_4a8ea4;
        case 0x4a8ea8u: goto label_4a8ea8;
        case 0x4a8eacu: goto label_4a8eac;
        case 0x4a8eb0u: goto label_4a8eb0;
        case 0x4a8eb4u: goto label_4a8eb4;
        case 0x4a8eb8u: goto label_4a8eb8;
        case 0x4a8ebcu: goto label_4a8ebc;
        case 0x4a8ec0u: goto label_4a8ec0;
        case 0x4a8ec4u: goto label_4a8ec4;
        case 0x4a8ec8u: goto label_4a8ec8;
        case 0x4a8eccu: goto label_4a8ecc;
        case 0x4a8ed0u: goto label_4a8ed0;
        case 0x4a8ed4u: goto label_4a8ed4;
        case 0x4a8ed8u: goto label_4a8ed8;
        case 0x4a8edcu: goto label_4a8edc;
        case 0x4a8ee0u: goto label_4a8ee0;
        case 0x4a8ee4u: goto label_4a8ee4;
        case 0x4a8ee8u: goto label_4a8ee8;
        case 0x4a8eecu: goto label_4a8eec;
        case 0x4a8ef0u: goto label_4a8ef0;
        case 0x4a8ef4u: goto label_4a8ef4;
        case 0x4a8ef8u: goto label_4a8ef8;
        case 0x4a8efcu: goto label_4a8efc;
        case 0x4a8f00u: goto label_4a8f00;
        case 0x4a8f04u: goto label_4a8f04;
        case 0x4a8f08u: goto label_4a8f08;
        case 0x4a8f0cu: goto label_4a8f0c;
        case 0x4a8f10u: goto label_4a8f10;
        case 0x4a8f14u: goto label_4a8f14;
        case 0x4a8f18u: goto label_4a8f18;
        case 0x4a8f1cu: goto label_4a8f1c;
        case 0x4a8f20u: goto label_4a8f20;
        case 0x4a8f24u: goto label_4a8f24;
        case 0x4a8f28u: goto label_4a8f28;
        case 0x4a8f2cu: goto label_4a8f2c;
        case 0x4a8f30u: goto label_4a8f30;
        case 0x4a8f34u: goto label_4a8f34;
        case 0x4a8f38u: goto label_4a8f38;
        case 0x4a8f3cu: goto label_4a8f3c;
        case 0x4a8f40u: goto label_4a8f40;
        case 0x4a8f44u: goto label_4a8f44;
        case 0x4a8f48u: goto label_4a8f48;
        case 0x4a8f4cu: goto label_4a8f4c;
        case 0x4a8f50u: goto label_4a8f50;
        case 0x4a8f54u: goto label_4a8f54;
        case 0x4a8f58u: goto label_4a8f58;
        case 0x4a8f5cu: goto label_4a8f5c;
        case 0x4a8f60u: goto label_4a8f60;
        case 0x4a8f64u: goto label_4a8f64;
        case 0x4a8f68u: goto label_4a8f68;
        case 0x4a8f6cu: goto label_4a8f6c;
        case 0x4a8f70u: goto label_4a8f70;
        case 0x4a8f74u: goto label_4a8f74;
        case 0x4a8f78u: goto label_4a8f78;
        case 0x4a8f7cu: goto label_4a8f7c;
        case 0x4a8f80u: goto label_4a8f80;
        case 0x4a8f84u: goto label_4a8f84;
        case 0x4a8f88u: goto label_4a8f88;
        case 0x4a8f8cu: goto label_4a8f8c;
        case 0x4a8f90u: goto label_4a8f90;
        case 0x4a8f94u: goto label_4a8f94;
        case 0x4a8f98u: goto label_4a8f98;
        case 0x4a8f9cu: goto label_4a8f9c;
        case 0x4a8fa0u: goto label_4a8fa0;
        case 0x4a8fa4u: goto label_4a8fa4;
        case 0x4a8fa8u: goto label_4a8fa8;
        case 0x4a8facu: goto label_4a8fac;
        case 0x4a8fb0u: goto label_4a8fb0;
        case 0x4a8fb4u: goto label_4a8fb4;
        case 0x4a8fb8u: goto label_4a8fb8;
        case 0x4a8fbcu: goto label_4a8fbc;
        case 0x4a8fc0u: goto label_4a8fc0;
        case 0x4a8fc4u: goto label_4a8fc4;
        case 0x4a8fc8u: goto label_4a8fc8;
        case 0x4a8fccu: goto label_4a8fcc;
        case 0x4a8fd0u: goto label_4a8fd0;
        case 0x4a8fd4u: goto label_4a8fd4;
        case 0x4a8fd8u: goto label_4a8fd8;
        case 0x4a8fdcu: goto label_4a8fdc;
        case 0x4a8fe0u: goto label_4a8fe0;
        case 0x4a8fe4u: goto label_4a8fe4;
        case 0x4a8fe8u: goto label_4a8fe8;
        case 0x4a8fecu: goto label_4a8fec;
        case 0x4a8ff0u: goto label_4a8ff0;
        case 0x4a8ff4u: goto label_4a8ff4;
        case 0x4a8ff8u: goto label_4a8ff8;
        case 0x4a8ffcu: goto label_4a8ffc;
        case 0x4a9000u: goto label_4a9000;
        case 0x4a9004u: goto label_4a9004;
        case 0x4a9008u: goto label_4a9008;
        case 0x4a900cu: goto label_4a900c;
        case 0x4a9010u: goto label_4a9010;
        case 0x4a9014u: goto label_4a9014;
        case 0x4a9018u: goto label_4a9018;
        case 0x4a901cu: goto label_4a901c;
        case 0x4a9020u: goto label_4a9020;
        case 0x4a9024u: goto label_4a9024;
        case 0x4a9028u: goto label_4a9028;
        case 0x4a902cu: goto label_4a902c;
        case 0x4a9030u: goto label_4a9030;
        case 0x4a9034u: goto label_4a9034;
        case 0x4a9038u: goto label_4a9038;
        case 0x4a903cu: goto label_4a903c;
        case 0x4a9040u: goto label_4a9040;
        case 0x4a9044u: goto label_4a9044;
        case 0x4a9048u: goto label_4a9048;
        case 0x4a904cu: goto label_4a904c;
        case 0x4a9050u: goto label_4a9050;
        case 0x4a9054u: goto label_4a9054;
        case 0x4a9058u: goto label_4a9058;
        case 0x4a905cu: goto label_4a905c;
        case 0x4a9060u: goto label_4a9060;
        case 0x4a9064u: goto label_4a9064;
        case 0x4a9068u: goto label_4a9068;
        case 0x4a906cu: goto label_4a906c;
        case 0x4a9070u: goto label_4a9070;
        case 0x4a9074u: goto label_4a9074;
        case 0x4a9078u: goto label_4a9078;
        case 0x4a907cu: goto label_4a907c;
        case 0x4a9080u: goto label_4a9080;
        case 0x4a9084u: goto label_4a9084;
        case 0x4a9088u: goto label_4a9088;
        case 0x4a908cu: goto label_4a908c;
        case 0x4a9090u: goto label_4a9090;
        case 0x4a9094u: goto label_4a9094;
        case 0x4a9098u: goto label_4a9098;
        case 0x4a909cu: goto label_4a909c;
        case 0x4a90a0u: goto label_4a90a0;
        case 0x4a90a4u: goto label_4a90a4;
        case 0x4a90a8u: goto label_4a90a8;
        case 0x4a90acu: goto label_4a90ac;
        case 0x4a90b0u: goto label_4a90b0;
        case 0x4a90b4u: goto label_4a90b4;
        case 0x4a90b8u: goto label_4a90b8;
        case 0x4a90bcu: goto label_4a90bc;
        case 0x4a90c0u: goto label_4a90c0;
        case 0x4a90c4u: goto label_4a90c4;
        case 0x4a90c8u: goto label_4a90c8;
        case 0x4a90ccu: goto label_4a90cc;
        case 0x4a90d0u: goto label_4a90d0;
        case 0x4a90d4u: goto label_4a90d4;
        case 0x4a90d8u: goto label_4a90d8;
        case 0x4a90dcu: goto label_4a90dc;
        case 0x4a90e0u: goto label_4a90e0;
        case 0x4a90e4u: goto label_4a90e4;
        case 0x4a90e8u: goto label_4a90e8;
        case 0x4a90ecu: goto label_4a90ec;
        case 0x4a90f0u: goto label_4a90f0;
        case 0x4a90f4u: goto label_4a90f4;
        case 0x4a90f8u: goto label_4a90f8;
        case 0x4a90fcu: goto label_4a90fc;
        case 0x4a9100u: goto label_4a9100;
        case 0x4a9104u: goto label_4a9104;
        case 0x4a9108u: goto label_4a9108;
        case 0x4a910cu: goto label_4a910c;
        case 0x4a9110u: goto label_4a9110;
        case 0x4a9114u: goto label_4a9114;
        case 0x4a9118u: goto label_4a9118;
        case 0x4a911cu: goto label_4a911c;
        case 0x4a9120u: goto label_4a9120;
        case 0x4a9124u: goto label_4a9124;
        case 0x4a9128u: goto label_4a9128;
        case 0x4a912cu: goto label_4a912c;
        case 0x4a9130u: goto label_4a9130;
        case 0x4a9134u: goto label_4a9134;
        case 0x4a9138u: goto label_4a9138;
        case 0x4a913cu: goto label_4a913c;
        default: break;
    }

    ctx->pc = 0x4a8e78u;

label_4a8e78:
    // 0x4a8e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a8e7c:
    // 0x4a8e7c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4a8e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e80:
    // 0x4a8e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a8e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4a8e84:
    // 0x4a8e84: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a8e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
label_4a8e88:
    // 0x4a8e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a8e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4a8e8c:
    // 0x4a8e8c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4a8e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4a8e90:
    // 0x4a8e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a8e94:
    // 0x4a8e94: 0x2622d680  addiu       $v0, $s1, -0x2980
    ctx->pc = 0x4a8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_4a8e98:
    // 0x4a8e98: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a8e9c:
    // 0x4a8e9c: 0x252e000e  addiu       $t6, $t1, 0xE
    ctx->pc = 0x4a8e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 14));
label_4a8ea0:
    // 0x4a8ea0: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x4a8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4a8ea4:
    // 0x4a8ea4: 0xac690c68  sw          $t1, 0xC68($v1)
    ctx->pc = 0x4a8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3176), GPR_U32(ctx, 9));
label_4a8ea8:
    // 0x4a8ea8: 0xae050c5c  sw          $a1, 0xC5C($s0)
    ctx->pc = 0x4a8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3164), GPR_U32(ctx, 5));
label_4a8eac:
    // 0x4a8eac: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4a8eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_4a8eb0:
    // 0x4a8eb0: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
label_4a8eb4:
    if (ctx->pc == 0x4A8EB4u) {
        ctx->pc = 0x4A8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EB0u;
        // 0x4a8eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8EB8u;
        goto label_4a8eb8;
    }
    ctx->pc = 0x4A8EB0u;
    {
        const bool branch_taken_0x4a8eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8EB0u;
        // 0x4a8eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8eb0) {
            ctx->pc = 0x4A9040u;
            goto label_4a9040;
        }
    }
    ctx->pc = 0x4A8EB8u;
label_4a8eb8:
    // 0x4a8eb8: 0x252f000a  addiu       $t7, $t1, 0xA
    ctx->pc = 0x4a8eb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 10));
label_4a8ebc:
    // 0x4a8ebc: 0x2538000c  addiu       $t8, $t1, 0xC
    ctx->pc = 0x4a8ebcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_4a8ec0:
    // 0x4a8ec0: 0x95e50000  lhu         $a1, 0x0($t7)
    ctx->pc = 0x4a8ec0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_4a8ec4:
    // 0x4a8ec4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4a8ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4a8ec8:
    // 0x4a8ec8: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4a8ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_4a8ecc:
    // 0x4a8ecc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4a8ed0:
    // 0x4a8ed0: 0x53c00  sll         $a3, $a1, 16
    ctx->pc = 0x4a8ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4a8ed4:
    // 0x4a8ed4: 0x246c0c60  addiu       $t4, $v1, 0xC60
    ctx->pc = 0x4a8ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
label_4a8ed8:
    // 0x4a8ed8: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x4a8ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a8edc:
    // 0x4a8edc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a8edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a8ee0:
    // 0x4a8ee0: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x4a8ee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a8ee4:
    // 0x4a8ee4: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x4a8ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4a8ee8:
    // 0x4a8ee8: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4a8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
label_4a8eec:
    // 0x4a8eec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4a8eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ef0:
    // 0x4a8ef0: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x4a8ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_4a8ef4:
    // 0x4a8ef4: 0x252a0014  addiu       $t2, $t1, 0x14
    ctx->pc = 0x4a8ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_4a8ef8:
    // 0x4a8ef8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4a8ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8efc:
    // 0x4a8efc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4a8f00:
    // 0x4a8f00: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4a8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
label_4a8f04:
    // 0x4a8f04: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x4a8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4a8f08:
    // 0x4a8f08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4a8f0c:
    // 0x4a8f0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a8f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a8f10:
    // 0x4a8f10: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a8f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8f14:
    // 0x4a8f14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a8f18:
    // 0x4a8f18: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4a8f18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4a8f1c:
    // 0x4a8f1c: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4a8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
label_4a8f20:
    // 0x4a8f20: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x4a8f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a8f24:
    // 0x4a8f24: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a8f28:
    // 0x4a8f28: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x4a8f28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4a8f2c:
    // 0x4a8f2c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4a8f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a8f30:
    // 0x4a8f30: 0xeb3024  and         $a2, $a3, $t3
    ctx->pc = 0x4a8f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
label_4a8f34:
    // 0x4a8f34: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4a8f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_4a8f38:
    // 0x4a8f38: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4a8f38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_4a8f3c:
    // 0x4a8f3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a8f40:
    // 0x4a8f40: 0xcb1025  or          $v0, $a2, $t3
    ctx->pc = 0x4a8f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
label_4a8f44:
    // 0x4a8f44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a8f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a8f48:
    // 0x4a8f48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8f4c:
    // 0x4a8f4c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4a8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_4a8f50:
    // 0x4a8f50: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4a8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a8f54:
    // 0x4a8f54: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a8f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a8f58:
    // 0x4a8f58: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a8f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4a8f5c:
    // 0x4a8f5c: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
label_4a8f60:
    if (ctx->pc == 0x4A8F60u) {
        ctx->pc = 0x4A8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F5Cu;
        // 0x4a8f60: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F64u;
        goto label_4a8f64;
    }
    ctx->pc = 0x4A8F5Cu;
    {
        const bool branch_taken_0x4a8f5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x4A8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F5Cu;
        // 0x4a8f60: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8f5c) {
            ctx->pc = 0x4A8F78u;
            goto label_4a8f78;
        }
    }
    ctx->pc = 0x4A8F64u;
label_4a8f64:
    // 0x4a8f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a8f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8f68:
    // 0x4a8f68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a8f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a8f6c:
    // 0x4a8f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8f70:
    // 0x4a8f70: 0x8123392  j           func_48CE48
label_4a8f74:
    if (ctx->pc == 0x4A8F74u) {
        ctx->pc = 0x4A8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8F70u;
        // 0x4a8f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8F78u;
        goto label_4a8f78;
    }
    ctx->pc = 0x4A8F70u;
    ctx->pc = 0x4A8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8F70u;
    // 0x4a8f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A8F78u;
label_4a8f78:
    // 0x4a8f78: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4a8f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4a8f7c:
    // 0x4a8f7c: 0x25260018  addiu       $a2, $t1, 0x18
    ctx->pc = 0x4a8f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_4a8f80:
    // 0x4a8f80: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4a8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a8f84:
    // 0x4a8f84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a8f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8f88:
    // 0x4a8f88: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4a8f8c:
    // 0x4a8f8c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a8f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a8f90:
    // 0x4a8f90: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x4a8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4a8f94:
    // 0x4a8f94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4a8f98:
    // 0x4a8f98: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x4a8f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4a8f9c:
    // 0x4a8f9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a8fa0:
    // 0x4a8fa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8fa4:
    // 0x4a8fa4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4a8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_4a8fa8:
    // 0x4a8fa8: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
label_4a8fac:
    // 0x4a8fac: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4a8facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a8fb0:
    // 0x4a8fb0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a8fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8fb4:
    // 0x4a8fb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a8fb8:
    // 0x4a8fb8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a8fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a8fbc:
    // 0x4a8fbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8fc0:
    // 0x4a8fc0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4a8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4a8fc4:
    // 0x4a8fc4: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4a8fc8:
    // 0x4a8fc8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a8fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4a8fcc:
    // 0x4a8fcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a8fd0:
    // 0x4a8fd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4a8fd4:
    // 0x4a8fd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a8fd8:
    // 0x4a8fd8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a8fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a8fdc:
    // 0x4a8fdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8fe0:
    // 0x4a8fe0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4a8fe4:
    // 0x4a8fe4: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4a8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
label_4a8fe8:
    // 0x4a8fe8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4a8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4a8fec:
    // 0x4a8fec: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a8fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_4a8ff0:
    // 0x4a8ff0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_4a8ff4:
    if (ctx->pc == 0x4A8FF4u) {
        ctx->pc = 0x4A8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FF0u;
        // 0x4a8ff4: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8FF8u;
        goto label_4a8ff8;
    }
    ctx->pc = 0x4A8FF0u;
    {
        const bool branch_taken_0x4a8ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8ff0) {
            ctx->pc = 0x4A8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8FF0u;
            // 0x4a8ff4: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A901Cu;
            goto label_4a901c;
        }
    }
    ctx->pc = 0x4A8FF8u;
label_4a8ff8:
    // 0x4a8ff8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4a8ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4a8ffc:
    // 0x4a8ffc: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x4a8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_4a9000:
    // 0x4a9000: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a9004:
    // 0x4a9004: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a9008:
    // 0x4a9008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a900c:
    // 0x4a900c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a9010:
    // 0x4a9010: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a9010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4a9014:
    // 0x4a9014: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a9014u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_4a9018:
    // 0x4a9018: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4a9018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4a901c:
    // 0x4a901c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9020:
    // 0x4a9020: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a9020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_4a9024:
    // 0x4a9024: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a9024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_4a9028:
    // 0x4a9028: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4a9028u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a902c:
    // 0x4a902c: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4a902cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4a9030:
    // 0x4a9030: 0xa7030000  sh          $v1, 0x0($t8)
    ctx->pc = 0x4a9030u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 3));
label_4a9034:
    // 0x4a9034: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a9038:
    if (ctx->pc == 0x4A9038u) {
        ctx->pc = 0x4A9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9034u;
        // 0x4a9038: 0xa5c40000  sh          $a0, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A903Cu;
        goto label_4a903c;
    }
    ctx->pc = 0x4A9034u;
    {
        const bool branch_taken_0x4a9034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9034u;
        // 0x4a9038: 0xa5c40000  sh          $a0, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9034) {
            ctx->pc = 0x4A904Cu;
            goto label_4a904c;
        }
    }
    ctx->pc = 0x4A903Cu;
label_4a903c:
    // 0x4a903c: 0x0  nop
    ctx->pc = 0x4a903cu;
    // NOP
label_4a9040:
    // 0x4a9040: 0x25260018  addiu       $a2, $t1, 0x18
    ctx->pc = 0x4a9040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_4a9044:
    // 0x4a9044: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x4a9044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4a9048:
    // 0x4a9048: 0x252a0014  addiu       $t2, $t1, 0x14
    ctx->pc = 0x4a9048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_4a904c:
    // 0x4a904c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4a9050:
    // 0x4a9050: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x4a9050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_4a9054:
    // 0x4a9054: 0x24490c84  addiu       $t1, $v0, 0xC84
    ctx->pc = 0x4a9054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
label_4a9058:
    // 0x4a9058: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4a9058u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4a905c:
    // 0x4a905c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a9060:
    // 0x4a9060: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a9060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a9064:
    // 0x4a9064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a9068:
    // 0x4a9068: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4a9068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a906c:
    // 0x4a906c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4a906cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4a9070:
    // 0x4a9070: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4a9070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4a9074:
    // 0x4a9074: 0x95280000  lhu         $t0, 0x0($t1)
    ctx->pc = 0x4a9074u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a9078:
    // 0x4a9078: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4a9078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4a907c:
    // 0x4a907c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x4a907cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a9080:
    // 0x4a9080: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4a9084:
    if (ctx->pc == 0x4A9084u) {
        ctx->pc = 0x4A9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9080u;
        // 0x4a9084: 0x95440000  lhu         $a0, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9088u;
        goto label_4a9088;
    }
    ctx->pc = 0x4A9080u;
    {
        const bool branch_taken_0x4a9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9080u;
        // 0x4a9084: 0x95440000  lhu         $a0, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9080) {
            ctx->pc = 0x4A90A4u;
            goto label_4a90a4;
        }
    }
    ctx->pc = 0x4A9088u;
label_4a9088:
    // 0x4a9088: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x4a9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4a908c:
    // 0x4a908c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a908cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a9090:
    // 0x4a9090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a9090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a9094:
    // 0x4a9094: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a9094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4a9098:
    // 0x4a9098: 0xa5c00000  sh          $zero, 0x0($t6)
    ctx->pc = 0x4a9098u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 0));
label_4a909c:
    // 0x4a909c: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x4a909cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4a90a0:
    // 0x4a90a0: 0x95280000  lhu         $t0, 0x0($t1)
    ctx->pc = 0x4a90a0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a90a4:
    // 0x4a90a4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a90a8:
    // 0x4a90a8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4a90a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a90ac:
    // 0x4a90ac: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a90acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_4a90b0:
    // 0x4a90b0: 0xeb2825  or          $a1, $a3, $t3
    ctx->pc = 0x4a90b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_4a90b4:
    // 0x4a90b4: 0x681023  subu        $v0, $v1, $t0
    ctx->pc = 0x4a90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a90b8:
    // 0x4a90b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a90b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a90bc:
    // 0x4a90bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4a90c0:
    // 0x4a90c0: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a90c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_4a90c4:
    // 0x4a90c4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a90c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a90c8:
    // 0x4a90c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a90c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a90cc:
    // 0x4a90cc: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_4a90d0:
    // 0x4a90d0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4a90d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a90d4:
    // 0x4a90d4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4a90d8:
    // 0x4a90d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a90dc:
    // 0x4a90dc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a90dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a90e0:
    // 0x4a90e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a90e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4a90e4:
    // 0x4a90e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a90e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a90e8:
    // 0x4a90e8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4a90ec:
    // 0x4a90ec: 0x95a40000  lhu         $a0, 0x0($t5)
    ctx->pc = 0x4a90ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4a90f0:
    // 0x4a90f0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a90f4:
    // 0x4a90f4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a90f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a90f8:
    // 0x4a90f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a90f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4a90fc:
    // 0x4a90fc: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x4a90fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_4a9100:
    // 0x4a9100: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x4a9100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4a9104:
    // 0x4a9104: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a9104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a9108:
    // 0x4a9108: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4a9108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4a910c:
    // 0x4a910c: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x4a910cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a9110:
    // 0x4a9110: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x4a9110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a9114:
    // 0x4a9114: 0xe0f809  jalr        $a3
label_4a9118:
    if (ctx->pc == 0x4A9118u) {
        ctx->pc = 0x4A911Cu;
        goto label_4a911c;
    }
    ctx->pc = 0x4A9114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x4A911Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9114u, 0x4A911Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A911Cu;
label_4a911c:
    // 0x4a911c: 0x2623d680  addiu       $v1, $s1, -0x2980
    ctx->pc = 0x4a911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_4a9120:
    // 0x4a9120: 0x8e020c5c  lw          $v0, 0xC5C($s0)
    ctx->pc = 0x4a9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3164)));
label_4a9124:
    // 0x4a9124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a9124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4a9128:
    // 0x4a9128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a9128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a912c:
    // 0x4a912c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a9130:
    // 0x4a9130: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x4a9130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_4a9134:
    // 0x4a9134: 0x3e00008  jr          $ra
label_4a9138:
    if (ctx->pc == 0x4A9138u) {
        ctx->pc = 0x4A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9134u;
        // 0x4a9138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A913Cu;
        goto label_4a913c;
    }
    ctx->pc = 0x4A9134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9134u;
        // 0x4a9138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A913Cu;
label_4a913c:
    // 0x4a913c: 0x0  nop
    ctx->pc = 0x4a913cu;
    // NOP
    ctx->pc = 0x4a9140u;
}
