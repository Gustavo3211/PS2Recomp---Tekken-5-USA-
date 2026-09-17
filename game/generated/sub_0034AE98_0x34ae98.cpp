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

// Function: sub_0034AE98
// Address: 0x34ae98 - 0x34b100
void sub_0034AE98_0x34ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AE98_0x34ae98");
#endif

    switch (ctx->pc) {
        case 0x34ae98u: goto label_34ae98;
        case 0x34ae9cu: goto label_34ae9c;
        case 0x34aea0u: goto label_34aea0;
        case 0x34aea4u: goto label_34aea4;
        case 0x34aea8u: goto label_34aea8;
        case 0x34aeacu: goto label_34aeac;
        case 0x34aeb0u: goto label_34aeb0;
        case 0x34aeb4u: goto label_34aeb4;
        case 0x34aeb8u: goto label_34aeb8;
        case 0x34aebcu: goto label_34aebc;
        case 0x34aec0u: goto label_34aec0;
        case 0x34aec4u: goto label_34aec4;
        case 0x34aec8u: goto label_34aec8;
        case 0x34aeccu: goto label_34aecc;
        case 0x34aed0u: goto label_34aed0;
        case 0x34aed4u: goto label_34aed4;
        case 0x34aed8u: goto label_34aed8;
        case 0x34aedcu: goto label_34aedc;
        case 0x34aee0u: goto label_34aee0;
        case 0x34aee4u: goto label_34aee4;
        case 0x34aee8u: goto label_34aee8;
        case 0x34aeecu: goto label_34aeec;
        case 0x34aef0u: goto label_34aef0;
        case 0x34aef4u: goto label_34aef4;
        case 0x34aef8u: goto label_34aef8;
        case 0x34aefcu: goto label_34aefc;
        case 0x34af00u: goto label_34af00;
        case 0x34af04u: goto label_34af04;
        case 0x34af08u: goto label_34af08;
        case 0x34af0cu: goto label_34af0c;
        case 0x34af10u: goto label_34af10;
        case 0x34af14u: goto label_34af14;
        case 0x34af18u: goto label_34af18;
        case 0x34af1cu: goto label_34af1c;
        case 0x34af20u: goto label_34af20;
        case 0x34af24u: goto label_34af24;
        case 0x34af28u: goto label_34af28;
        case 0x34af2cu: goto label_34af2c;
        case 0x34af30u: goto label_34af30;
        case 0x34af34u: goto label_34af34;
        case 0x34af38u: goto label_34af38;
        case 0x34af3cu: goto label_34af3c;
        case 0x34af40u: goto label_34af40;
        case 0x34af44u: goto label_34af44;
        case 0x34af48u: goto label_34af48;
        case 0x34af4cu: goto label_34af4c;
        case 0x34af50u: goto label_34af50;
        case 0x34af54u: goto label_34af54;
        case 0x34af58u: goto label_34af58;
        case 0x34af5cu: goto label_34af5c;
        case 0x34af60u: goto label_34af60;
        case 0x34af64u: goto label_34af64;
        case 0x34af68u: goto label_34af68;
        case 0x34af6cu: goto label_34af6c;
        case 0x34af70u: goto label_34af70;
        case 0x34af74u: goto label_34af74;
        case 0x34af78u: goto label_34af78;
        case 0x34af7cu: goto label_34af7c;
        case 0x34af80u: goto label_34af80;
        case 0x34af84u: goto label_34af84;
        case 0x34af88u: goto label_34af88;
        case 0x34af8cu: goto label_34af8c;
        case 0x34af90u: goto label_34af90;
        case 0x34af94u: goto label_34af94;
        case 0x34af98u: goto label_34af98;
        case 0x34af9cu: goto label_34af9c;
        case 0x34afa0u: goto label_34afa0;
        case 0x34afa4u: goto label_34afa4;
        case 0x34afa8u: goto label_34afa8;
        case 0x34afacu: goto label_34afac;
        case 0x34afb0u: goto label_34afb0;
        case 0x34afb4u: goto label_34afb4;
        case 0x34afb8u: goto label_34afb8;
        case 0x34afbcu: goto label_34afbc;
        case 0x34afc0u: goto label_34afc0;
        case 0x34afc4u: goto label_34afc4;
        case 0x34afc8u: goto label_34afc8;
        case 0x34afccu: goto label_34afcc;
        case 0x34afd0u: goto label_34afd0;
        case 0x34afd4u: goto label_34afd4;
        case 0x34afd8u: goto label_34afd8;
        case 0x34afdcu: goto label_34afdc;
        case 0x34afe0u: goto label_34afe0;
        case 0x34afe4u: goto label_34afe4;
        case 0x34afe8u: goto label_34afe8;
        case 0x34afecu: goto label_34afec;
        case 0x34aff0u: goto label_34aff0;
        case 0x34aff4u: goto label_34aff4;
        case 0x34aff8u: goto label_34aff8;
        case 0x34affcu: goto label_34affc;
        case 0x34b000u: goto label_34b000;
        case 0x34b004u: goto label_34b004;
        case 0x34b008u: goto label_34b008;
        case 0x34b00cu: goto label_34b00c;
        case 0x34b010u: goto label_34b010;
        case 0x34b014u: goto label_34b014;
        case 0x34b018u: goto label_34b018;
        case 0x34b01cu: goto label_34b01c;
        case 0x34b020u: goto label_34b020;
        case 0x34b024u: goto label_34b024;
        case 0x34b028u: goto label_34b028;
        case 0x34b02cu: goto label_34b02c;
        case 0x34b030u: goto label_34b030;
        case 0x34b034u: goto label_34b034;
        case 0x34b038u: goto label_34b038;
        case 0x34b03cu: goto label_34b03c;
        case 0x34b040u: goto label_34b040;
        case 0x34b044u: goto label_34b044;
        case 0x34b048u: goto label_34b048;
        case 0x34b04cu: goto label_34b04c;
        case 0x34b050u: goto label_34b050;
        case 0x34b054u: goto label_34b054;
        case 0x34b058u: goto label_34b058;
        case 0x34b05cu: goto label_34b05c;
        case 0x34b060u: goto label_34b060;
        case 0x34b064u: goto label_34b064;
        case 0x34b068u: goto label_34b068;
        case 0x34b06cu: goto label_34b06c;
        case 0x34b070u: goto label_34b070;
        case 0x34b074u: goto label_34b074;
        case 0x34b078u: goto label_34b078;
        case 0x34b07cu: goto label_34b07c;
        case 0x34b080u: goto label_34b080;
        case 0x34b084u: goto label_34b084;
        case 0x34b088u: goto label_34b088;
        case 0x34b08cu: goto label_34b08c;
        case 0x34b090u: goto label_34b090;
        case 0x34b094u: goto label_34b094;
        case 0x34b098u: goto label_34b098;
        case 0x34b09cu: goto label_34b09c;
        case 0x34b0a0u: goto label_34b0a0;
        case 0x34b0a4u: goto label_34b0a4;
        case 0x34b0a8u: goto label_34b0a8;
        case 0x34b0acu: goto label_34b0ac;
        case 0x34b0b0u: goto label_34b0b0;
        case 0x34b0b4u: goto label_34b0b4;
        case 0x34b0b8u: goto label_34b0b8;
        case 0x34b0bcu: goto label_34b0bc;
        case 0x34b0c0u: goto label_34b0c0;
        case 0x34b0c4u: goto label_34b0c4;
        case 0x34b0c8u: goto label_34b0c8;
        case 0x34b0ccu: goto label_34b0cc;
        case 0x34b0d0u: goto label_34b0d0;
        case 0x34b0d4u: goto label_34b0d4;
        case 0x34b0d8u: goto label_34b0d8;
        case 0x34b0dcu: goto label_34b0dc;
        case 0x34b0e0u: goto label_34b0e0;
        case 0x34b0e4u: goto label_34b0e4;
        case 0x34b0e8u: goto label_34b0e8;
        case 0x34b0ecu: goto label_34b0ec;
        case 0x34b0f0u: goto label_34b0f0;
        case 0x34b0f4u: goto label_34b0f4;
        case 0x34b0f8u: goto label_34b0f8;
        case 0x34b0fcu: goto label_34b0fc;
        default: break;
    }

    ctx->pc = 0x34ae98u;

label_34ae98:
    // 0x34ae98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34ae9c:
    // 0x34ae9c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34aea0:
    // 0x34aea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34aea4:
    // 0x34aea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34aea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34aea8:
    // 0x34aea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34aeac:
    // 0x34aeac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34aeacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_34aeb0:
    // 0x34aeb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_34aeb4:
    // 0x34aeb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34aeb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34aeb8:
    // 0x34aeb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_34aebc:
    // 0x34aebc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_34aec0:
    // 0x34aec0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34aec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34aec4:
    // 0x34aec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34aec8:
    // 0x34aec8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_34aecc:
    // 0x34aecc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_34aed0:
    // 0x34aed0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x34aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_34aed4:
    // 0x34aed4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34aed8:
    // 0x34aed8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_34aedc:
    if (ctx->pc == 0x34AEDCu) {
        ctx->pc = 0x34AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AED8u;
        // 0x34aedc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AEE0u;
        goto label_34aee0;
    }
    ctx->pc = 0x34AED8u;
    {
        const bool branch_taken_0x34aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AED8u;
        // 0x34aedc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aed8) {
            ctx->pc = 0x34AEF8u;
            goto label_34aef8;
        }
    }
    ctx->pc = 0x34AEE0u;
label_34aee0:
    // 0x34aee0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34aee4:
    // 0x34aee4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34aee8:
    // 0x34aee8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34aee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34aeec:
    // 0x34aeec: 0x10000007  b           . + 4 + (0x7 << 2)
label_34aef0:
    if (ctx->pc == 0x34AEF0u) {
        ctx->pc = 0x34AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEECu;
        // 0x34aef0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AEF4u;
        goto label_34aef4;
    }
    ctx->pc = 0x34AEECu;
    {
        const bool branch_taken_0x34aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AEECu;
        // 0x34aef0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aeec) {
            ctx->pc = 0x34AF0Cu;
            goto label_34af0c;
        }
    }
    ctx->pc = 0x34AEF4u;
label_34aef4:
    // 0x34aef4: 0x0  nop
    ctx->pc = 0x34aef4u;
    // NOP
label_34aef8:
    // 0x34aef8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34aefc:
    // 0x34aefc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34af00:
    // 0x34af00: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34af04:
    // 0x34af04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34af08:
    // 0x34af08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_34af0c:
    // 0x34af0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34af10:
    // 0x34af10: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x34af10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34af14:
    // 0x34af14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34af18:
    // 0x34af18: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x34af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_34af1c:
    // 0x34af1c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x34af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_34af20:
    // 0x34af20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34af20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34af24:
    // 0x34af24: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34af24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34af28:
    // 0x34af28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34af28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34af2c:
    // 0x34af2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34af30:
    // 0x34af30: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34af30u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34af34:
    // 0x34af34: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34af34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34af38:
    // 0x34af38: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34af38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34af3c:
    // 0x34af3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_34af40:
    // 0x34af40: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34af40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_34af44:
    // 0x34af44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34af44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34af48:
    // 0x34af48: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34af48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34af4c:
    // 0x34af4c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x34af4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_34af50:
    // 0x34af50: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x34af50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_34af54:
    // 0x34af54: 0x26c20d00  addiu       $v0, $s6, 0xD00
    ctx->pc = 0x34af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3328));
label_34af58:
    // 0x34af58: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x34af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_34af5c:
    // 0x34af5c: 0x24500068  addiu       $s0, $v0, 0x68
    ctx->pc = 0x34af5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_34af60:
    // 0x34af60: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x34af60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_34af64:
    // 0x34af64: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x34af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_34af68:
    // 0x34af68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34af6c:
    if (ctx->pc == 0x34AF6Cu) {
        ctx->pc = 0x34AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF68u;
        // 0x34af6c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AF70u;
        goto label_34af70;
    }
    ctx->pc = 0x34AF68u;
    {
        const bool branch_taken_0x34af68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34af68) {
            ctx->pc = 0x34AF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AF68u;
            // 0x34af6c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AF7Cu;
            goto label_34af7c;
        }
    }
    ctx->pc = 0x34AF70u;
label_34af70:
    // 0x34af70: 0xc0c89d4  jal         func_322750
label_34af74:
    if (ctx->pc == 0x34AF74u) {
        ctx->pc = 0x34AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF70u;
        // 0x34af74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AF78u;
        goto label_34af78;
    }
    ctx->pc = 0x34AF70u;
    SET_GPR_U32(ctx, 31, 0x34AF78u);
    ctx->pc = 0x34AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF70u;
    // 0x34af74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x34AF70u, 0x34AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF78u;
label_34af78:
    // 0x34af78: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x34af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34af7c:
    // 0x34af7c: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x34af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_34af80:
    // 0x34af80: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x34af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_34af84:
    // 0x34af84: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x34af84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_34af88:
    // 0x34af88: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x34af88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_34af8c:
    // 0x34af8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_34af90:
    if (ctx->pc == 0x34AF90u) {
        ctx->pc = 0x34AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF8Cu;
        // 0x34af90: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AF94u;
        goto label_34af94;
    }
    ctx->pc = 0x34AF8Cu;
    {
        const bool branch_taken_0x34af8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF8Cu;
        // 0x34af90: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af8c) {
            ctx->pc = 0x34AFA8u;
            goto label_34afa8;
        }
    }
    ctx->pc = 0x34AF94u;
label_34af94:
    // 0x34af94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34af94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34af98:
    // 0x34af98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34af98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34af9c:
    // 0x34af9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_34afa0:
    if (ctx->pc == 0x34AFA0u) {
        ctx->pc = 0x34AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF9Cu;
        // 0x34afa0: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AFA4u;
        goto label_34afa4;
    }
    ctx->pc = 0x34AF9Cu;
    {
        const bool branch_taken_0x34af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF9Cu;
        // 0x34afa0: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34af9c) {
            ctx->pc = 0x34AFC4u;
            goto label_34afc4;
        }
    }
    ctx->pc = 0x34AFA4u;
label_34afa4:
    // 0x34afa4: 0x0  nop
    ctx->pc = 0x34afa4u;
    // NOP
label_34afa8:
    // 0x34afa8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_34afac:
    // 0x34afac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34afacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34afb0:
    // 0x34afb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34afb4:
    // 0x34afb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34afb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34afb8:
    // 0x34afb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34afb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34afbc:
    // 0x34afbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34afbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34afc0:
    // 0x34afc0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x34afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_34afc4:
    // 0x34afc4: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x34afc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_34afc8:
    // 0x34afc8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_34afcc:
    if (ctx->pc == 0x34AFCCu) {
        ctx->pc = 0x34AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFC8u;
        // 0x34afcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AFD0u;
        goto label_34afd0;
    }
    ctx->pc = 0x34AFC8u;
    {
        const bool branch_taken_0x34afc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFC8u;
        // 0x34afcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afc8) {
            ctx->pc = 0x34AFE0u;
            goto label_34afe0;
        }
    }
    ctx->pc = 0x34AFD0u;
label_34afd0:
    // 0x34afd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34afd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34afd4:
    // 0x34afd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34afd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34afd8:
    // 0x34afd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_34afdc:
    if (ctx->pc == 0x34AFDCu) {
        ctx->pc = 0x34AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFD8u;
        // 0x34afdc: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AFE0u;
        goto label_34afe0;
    }
    ctx->pc = 0x34AFD8u;
    {
        const bool branch_taken_0x34afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFD8u;
        // 0x34afdc: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afd8) {
            ctx->pc = 0x34AFF8u;
            goto label_34aff8;
        }
    }
    ctx->pc = 0x34AFE0u;
label_34afe0:
    // 0x34afe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34afe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34afe4:
    // 0x34afe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34afe8:
    // 0x34afe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34afe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34afec:
    // 0x34afec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34afecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34aff0:
    // 0x34aff0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34aff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34aff4:
    // 0x34aff4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x34aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_34aff8:
    // 0x34aff8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_34affc:
    // 0x34affc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_34b000:
    // 0x34b000: 0xc0ce5ba  jal         func_3396E8
label_34b004:
    if (ctx->pc == 0x34B004u) {
        ctx->pc = 0x34B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B000u;
        // 0x34b004: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B008u;
        goto label_34b008;
    }
    ctx->pc = 0x34B000u;
    SET_GPR_U32(ctx, 31, 0x34B008u);
    ctx->pc = 0x34B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B000u;
    // 0x34b004: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396E8u, 0x34B000u, 0x34B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B008u;
label_34b008:
    // 0x34b008: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_34b00c:
    // 0x34b00c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x34b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_34b010:
    // 0x34b010: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34b010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34b014:
    // 0x34b014: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34b018:
    // 0x34b018: 0x40f809  jalr        $v0
label_34b01c:
    if (ctx->pc == 0x34B01Cu) {
        ctx->pc = 0x34B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B018u;
        // 0x34b01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B020u;
        goto label_34b020;
    }
    ctx->pc = 0x34B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34B020u);
        ctx->pc = 0x34B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B018u;
        // 0x34b01c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B018u, 0x34B020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B020u;
label_34b020:
    // 0x34b020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_34b024:
    // 0x34b024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34b024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34b028:
    // 0x34b028: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_34b02c:
    if (ctx->pc == 0x34B02Cu) {
        ctx->pc = 0x34B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B028u;
        // 0x34b02c: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B030u;
        goto label_34b030;
    }
    ctx->pc = 0x34B028u;
    {
        const bool branch_taken_0x34b028 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34b028) {
            ctx->pc = 0x34B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B028u;
            // 0x34b02c: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B040u;
            goto label_34b040;
        }
    }
    ctx->pc = 0x34B030u;
label_34b030:
    // 0x34b030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b034:
    // 0x34b034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34b034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34b038:
    // 0x34b038: 0x10000005  b           . + 4 + (0x5 << 2)
label_34b03c:
    if (ctx->pc == 0x34B03Cu) {
        ctx->pc = 0x34B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B038u;
        // 0x34b03c: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B040u;
        goto label_34b040;
    }
    ctx->pc = 0x34B038u;
    {
        const bool branch_taken_0x34b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B038u;
        // 0x34b03c: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b038) {
            ctx->pc = 0x34B050u;
            goto label_34b050;
        }
    }
    ctx->pc = 0x34B040u;
label_34b040:
    // 0x34b040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b044:
    // 0x34b044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34b044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34b048:
    // 0x34b048: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34b048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34b04c:
    // 0x34b04c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x34b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_34b050:
    // 0x34b050: 0x26c20d00  addiu       $v0, $s6, 0xD00
    ctx->pc = 0x34b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3328));
label_34b054:
    // 0x34b054: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34b054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_34b058:
    // 0x34b058: 0xc44001f0  lwc1        $f0, 0x1F0($v0)
    ctx->pc = 0x34b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b05c:
    // 0x34b05c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x34b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_34b060:
    // 0x34b060: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34b064:
    // 0x34b064: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x34b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_34b068:
    // 0x34b068: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34b068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34b06c:
    // 0x34b06c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x34b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_34b070:
    // 0x34b070: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_34b074:
    // 0x34b074: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x34b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34b078:
    // 0x34b078: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_34b07c:
    if (ctx->pc == 0x34B07Cu) {
        ctx->pc = 0x34B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B078u;
        // 0x34b07c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B080u;
        goto label_34b080;
    }
    ctx->pc = 0x34B078u;
    {
        const bool branch_taken_0x34b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x34B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B078u;
        // 0x34b07c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b078) {
            ctx->pc = 0x34B098u;
            goto label_34b098;
        }
    }
    ctx->pc = 0x34B080u;
label_34b080:
    // 0x34b080: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34b084:
    // 0x34b084: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34b088:
    // 0x34b088: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34b088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_34b08c:
    // 0x34b08c: 0x10000007  b           . + 4 + (0x7 << 2)
label_34b090:
    if (ctx->pc == 0x34B090u) {
        ctx->pc = 0x34B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B08Cu;
        // 0x34b090: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B094u;
        goto label_34b094;
    }
    ctx->pc = 0x34B08Cu;
    {
        const bool branch_taken_0x34b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B08Cu;
        // 0x34b090: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b08c) {
            ctx->pc = 0x34B0ACu;
            goto label_34b0ac;
        }
    }
    ctx->pc = 0x34B094u;
label_34b094:
    // 0x34b094: 0x0  nop
    ctx->pc = 0x34b094u;
    // NOP
label_34b098:
    // 0x34b098: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34b09c:
    // 0x34b09c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34b0a0:
    // 0x34b0a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_34b0a4:
    // 0x34b0a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34b0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34b0a8:
    // 0x34b0a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x34b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_34b0ac:
    // 0x34b0ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34b0b0:
    // 0x34b0b0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x34b0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34b0b4:
    // 0x34b0b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x34b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34b0b8:
    // 0x34b0b8: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x34b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
label_34b0bc:
    // 0x34b0bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x34b0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_34b0c0:
    // 0x34b0c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34b0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34b0c4:
    // 0x34b0c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_34b0c8:
    // 0x34b0c8: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x34b0c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_34b0cc:
    // 0x34b0cc: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x34b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_34b0d0:
    // 0x34b0d0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x34b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34b0d4:
    // 0x34b0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b0d8:
    // 0x34b0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34b0dc:
    // 0x34b0dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34b0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b0e0:
    // 0x34b0e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34b0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34b0e4:
    // 0x34b0e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34b0e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b0e8:
    // 0x34b0e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34b0e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34b0ec:
    // 0x34b0ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34b0ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34b0f0:
    // 0x34b0f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34b0f4:
    // 0x34b0f4: 0x3e00008  jr          $ra
label_34b0f8:
    if (ctx->pc == 0x34B0F8u) {
        ctx->pc = 0x34B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0F4u;
        // 0x34b0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B0FCu;
        goto label_34b0fc;
    }
    ctx->pc = 0x34B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0F4u;
        // 0x34b0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B0FCu;
label_34b0fc:
    // 0x34b0fc: 0x0  nop
    ctx->pc = 0x34b0fcu;
    // NOP
    ctx->pc = 0x34b100u;
}
