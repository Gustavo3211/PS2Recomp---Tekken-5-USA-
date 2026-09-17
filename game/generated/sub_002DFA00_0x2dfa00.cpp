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

// Function: sub_002DFA00
// Address: 0x2dfa00 - 0x2dfdb8
void sub_002DFA00_0x2dfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFA00_0x2dfa00");
#endif

    switch (ctx->pc) {
        case 0x2dfa00u: goto label_2dfa00;
        case 0x2dfa04u: goto label_2dfa04;
        case 0x2dfa08u: goto label_2dfa08;
        case 0x2dfa0cu: goto label_2dfa0c;
        case 0x2dfa10u: goto label_2dfa10;
        case 0x2dfa14u: goto label_2dfa14;
        case 0x2dfa18u: goto label_2dfa18;
        case 0x2dfa1cu: goto label_2dfa1c;
        case 0x2dfa20u: goto label_2dfa20;
        case 0x2dfa24u: goto label_2dfa24;
        case 0x2dfa28u: goto label_2dfa28;
        case 0x2dfa2cu: goto label_2dfa2c;
        case 0x2dfa30u: goto label_2dfa30;
        case 0x2dfa34u: goto label_2dfa34;
        case 0x2dfa38u: goto label_2dfa38;
        case 0x2dfa3cu: goto label_2dfa3c;
        case 0x2dfa40u: goto label_2dfa40;
        case 0x2dfa44u: goto label_2dfa44;
        case 0x2dfa48u: goto label_2dfa48;
        case 0x2dfa4cu: goto label_2dfa4c;
        case 0x2dfa50u: goto label_2dfa50;
        case 0x2dfa54u: goto label_2dfa54;
        case 0x2dfa58u: goto label_2dfa58;
        case 0x2dfa5cu: goto label_2dfa5c;
        case 0x2dfa60u: goto label_2dfa60;
        case 0x2dfa64u: goto label_2dfa64;
        case 0x2dfa68u: goto label_2dfa68;
        case 0x2dfa6cu: goto label_2dfa6c;
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa74u: goto label_2dfa74;
        case 0x2dfa78u: goto label_2dfa78;
        case 0x2dfa7cu: goto label_2dfa7c;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfa84u: goto label_2dfa84;
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfa8cu: goto label_2dfa8c;
        case 0x2dfa90u: goto label_2dfa90;
        case 0x2dfa94u: goto label_2dfa94;
        case 0x2dfa98u: goto label_2dfa98;
        case 0x2dfa9cu: goto label_2dfa9c;
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfaa4u: goto label_2dfaa4;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfab4u: goto label_2dfab4;
        case 0x2dfab8u: goto label_2dfab8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfac0u: goto label_2dfac0;
        case 0x2dfac4u: goto label_2dfac4;
        case 0x2dfac8u: goto label_2dfac8;
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfad4u: goto label_2dfad4;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfae0u: goto label_2dfae0;
        case 0x2dfae4u: goto label_2dfae4;
        case 0x2dfae8u: goto label_2dfae8;
        case 0x2dfaecu: goto label_2dfaec;
        case 0x2dfaf0u: goto label_2dfaf0;
        case 0x2dfaf4u: goto label_2dfaf4;
        case 0x2dfaf8u: goto label_2dfaf8;
        case 0x2dfafcu: goto label_2dfafc;
        case 0x2dfb00u: goto label_2dfb00;
        case 0x2dfb04u: goto label_2dfb04;
        case 0x2dfb08u: goto label_2dfb08;
        case 0x2dfb0cu: goto label_2dfb0c;
        case 0x2dfb10u: goto label_2dfb10;
        case 0x2dfb14u: goto label_2dfb14;
        case 0x2dfb18u: goto label_2dfb18;
        case 0x2dfb1cu: goto label_2dfb1c;
        case 0x2dfb20u: goto label_2dfb20;
        case 0x2dfb24u: goto label_2dfb24;
        case 0x2dfb28u: goto label_2dfb28;
        case 0x2dfb2cu: goto label_2dfb2c;
        case 0x2dfb30u: goto label_2dfb30;
        case 0x2dfb34u: goto label_2dfb34;
        case 0x2dfb38u: goto label_2dfb38;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb40u: goto label_2dfb40;
        case 0x2dfb44u: goto label_2dfb44;
        case 0x2dfb48u: goto label_2dfb48;
        case 0x2dfb4cu: goto label_2dfb4c;
        case 0x2dfb50u: goto label_2dfb50;
        case 0x2dfb54u: goto label_2dfb54;
        case 0x2dfb58u: goto label_2dfb58;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb60u: goto label_2dfb60;
        case 0x2dfb64u: goto label_2dfb64;
        case 0x2dfb68u: goto label_2dfb68;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfb70u: goto label_2dfb70;
        case 0x2dfb74u: goto label_2dfb74;
        case 0x2dfb78u: goto label_2dfb78;
        case 0x2dfb7cu: goto label_2dfb7c;
        case 0x2dfb80u: goto label_2dfb80;
        case 0x2dfb84u: goto label_2dfb84;
        case 0x2dfb88u: goto label_2dfb88;
        case 0x2dfb8cu: goto label_2dfb8c;
        case 0x2dfb90u: goto label_2dfb90;
        case 0x2dfb94u: goto label_2dfb94;
        case 0x2dfb98u: goto label_2dfb98;
        case 0x2dfb9cu: goto label_2dfb9c;
        case 0x2dfba0u: goto label_2dfba0;
        case 0x2dfba4u: goto label_2dfba4;
        case 0x2dfba8u: goto label_2dfba8;
        case 0x2dfbacu: goto label_2dfbac;
        case 0x2dfbb0u: goto label_2dfbb0;
        case 0x2dfbb4u: goto label_2dfbb4;
        case 0x2dfbb8u: goto label_2dfbb8;
        case 0x2dfbbcu: goto label_2dfbbc;
        case 0x2dfbc0u: goto label_2dfbc0;
        case 0x2dfbc4u: goto label_2dfbc4;
        case 0x2dfbc8u: goto label_2dfbc8;
        case 0x2dfbccu: goto label_2dfbcc;
        case 0x2dfbd0u: goto label_2dfbd0;
        case 0x2dfbd4u: goto label_2dfbd4;
        case 0x2dfbd8u: goto label_2dfbd8;
        case 0x2dfbdcu: goto label_2dfbdc;
        case 0x2dfbe0u: goto label_2dfbe0;
        case 0x2dfbe4u: goto label_2dfbe4;
        case 0x2dfbe8u: goto label_2dfbe8;
        case 0x2dfbecu: goto label_2dfbec;
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfbf4u: goto label_2dfbf4;
        case 0x2dfbf8u: goto label_2dfbf8;
        case 0x2dfbfcu: goto label_2dfbfc;
        case 0x2dfc00u: goto label_2dfc00;
        case 0x2dfc04u: goto label_2dfc04;
        case 0x2dfc08u: goto label_2dfc08;
        case 0x2dfc0cu: goto label_2dfc0c;
        case 0x2dfc10u: goto label_2dfc10;
        case 0x2dfc14u: goto label_2dfc14;
        case 0x2dfc18u: goto label_2dfc18;
        case 0x2dfc1cu: goto label_2dfc1c;
        case 0x2dfc20u: goto label_2dfc20;
        case 0x2dfc24u: goto label_2dfc24;
        case 0x2dfc28u: goto label_2dfc28;
        case 0x2dfc2cu: goto label_2dfc2c;
        case 0x2dfc30u: goto label_2dfc30;
        case 0x2dfc34u: goto label_2dfc34;
        case 0x2dfc38u: goto label_2dfc38;
        case 0x2dfc3cu: goto label_2dfc3c;
        case 0x2dfc40u: goto label_2dfc40;
        case 0x2dfc44u: goto label_2dfc44;
        case 0x2dfc48u: goto label_2dfc48;
        case 0x2dfc4cu: goto label_2dfc4c;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc54u: goto label_2dfc54;
        case 0x2dfc58u: goto label_2dfc58;
        case 0x2dfc5cu: goto label_2dfc5c;
        case 0x2dfc60u: goto label_2dfc60;
        case 0x2dfc64u: goto label_2dfc64;
        case 0x2dfc68u: goto label_2dfc68;
        case 0x2dfc6cu: goto label_2dfc6c;
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfc78u: goto label_2dfc78;
        case 0x2dfc7cu: goto label_2dfc7c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfc84u: goto label_2dfc84;
        case 0x2dfc88u: goto label_2dfc88;
        case 0x2dfc8cu: goto label_2dfc8c;
        case 0x2dfc90u: goto label_2dfc90;
        case 0x2dfc94u: goto label_2dfc94;
        case 0x2dfc98u: goto label_2dfc98;
        case 0x2dfc9cu: goto label_2dfc9c;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfca4u: goto label_2dfca4;
        case 0x2dfca8u: goto label_2dfca8;
        case 0x2dfcacu: goto label_2dfcac;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcb4u: goto label_2dfcb4;
        case 0x2dfcb8u: goto label_2dfcb8;
        case 0x2dfcbcu: goto label_2dfcbc;
        case 0x2dfcc0u: goto label_2dfcc0;
        case 0x2dfcc4u: goto label_2dfcc4;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcccu: goto label_2dfccc;
        case 0x2dfcd0u: goto label_2dfcd0;
        case 0x2dfcd4u: goto label_2dfcd4;
        case 0x2dfcd8u: goto label_2dfcd8;
        case 0x2dfcdcu: goto label_2dfcdc;
        case 0x2dfce0u: goto label_2dfce0;
        case 0x2dfce4u: goto label_2dfce4;
        case 0x2dfce8u: goto label_2dfce8;
        case 0x2dfcecu: goto label_2dfcec;
        case 0x2dfcf0u: goto label_2dfcf0;
        case 0x2dfcf4u: goto label_2dfcf4;
        case 0x2dfcf8u: goto label_2dfcf8;
        case 0x2dfcfcu: goto label_2dfcfc;
        case 0x2dfd00u: goto label_2dfd00;
        case 0x2dfd04u: goto label_2dfd04;
        case 0x2dfd08u: goto label_2dfd08;
        case 0x2dfd0cu: goto label_2dfd0c;
        case 0x2dfd10u: goto label_2dfd10;
        case 0x2dfd14u: goto label_2dfd14;
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfd1cu: goto label_2dfd1c;
        case 0x2dfd20u: goto label_2dfd20;
        case 0x2dfd24u: goto label_2dfd24;
        case 0x2dfd28u: goto label_2dfd28;
        case 0x2dfd2cu: goto label_2dfd2c;
        case 0x2dfd30u: goto label_2dfd30;
        case 0x2dfd34u: goto label_2dfd34;
        case 0x2dfd38u: goto label_2dfd38;
        case 0x2dfd3cu: goto label_2dfd3c;
        case 0x2dfd40u: goto label_2dfd40;
        case 0x2dfd44u: goto label_2dfd44;
        case 0x2dfd48u: goto label_2dfd48;
        case 0x2dfd4cu: goto label_2dfd4c;
        case 0x2dfd50u: goto label_2dfd50;
        case 0x2dfd54u: goto label_2dfd54;
        case 0x2dfd58u: goto label_2dfd58;
        case 0x2dfd5cu: goto label_2dfd5c;
        case 0x2dfd60u: goto label_2dfd60;
        case 0x2dfd64u: goto label_2dfd64;
        case 0x2dfd68u: goto label_2dfd68;
        case 0x2dfd6cu: goto label_2dfd6c;
        case 0x2dfd70u: goto label_2dfd70;
        case 0x2dfd74u: goto label_2dfd74;
        case 0x2dfd78u: goto label_2dfd78;
        case 0x2dfd7cu: goto label_2dfd7c;
        case 0x2dfd80u: goto label_2dfd80;
        case 0x2dfd84u: goto label_2dfd84;
        case 0x2dfd88u: goto label_2dfd88;
        case 0x2dfd8cu: goto label_2dfd8c;
        case 0x2dfd90u: goto label_2dfd90;
        case 0x2dfd94u: goto label_2dfd94;
        case 0x2dfd98u: goto label_2dfd98;
        case 0x2dfd9cu: goto label_2dfd9c;
        case 0x2dfda0u: goto label_2dfda0;
        case 0x2dfda4u: goto label_2dfda4;
        case 0x2dfda8u: goto label_2dfda8;
        case 0x2dfdacu: goto label_2dfdac;
        case 0x2dfdb0u: goto label_2dfdb0;
        case 0x2dfdb4u: goto label_2dfdb4;
        default: break;
    }

    ctx->pc = 0x2dfa00u;

label_2dfa00:
    // 0x2dfa00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dfa04:
    // 0x2dfa04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2dfa08:
    // 0x2dfa08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dfa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfa0c:
    // 0x2dfa0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dfa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2dfa10:
    // 0x2dfa10: 0x26320069  addiu       $s2, $s1, 0x69
    ctx->pc = 0x2dfa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 105));
label_2dfa14:
    // 0x2dfa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dfa18:
    // 0x2dfa18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dfa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2dfa1c:
    // 0x2dfa1c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2dfa1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfa20:
    // 0x2dfa20: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2dfa24:
    if (ctx->pc == 0x2DFA24u) {
        ctx->pc = 0x2DFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA20u;
        // 0x2dfa24: 0x26300058  addiu       $s0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA28u;
        goto label_2dfa28;
    }
    ctx->pc = 0x2DFA20u;
    {
        const bool branch_taken_0x2dfa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA20u;
        // 0x2dfa24: 0x26300058  addiu       $s0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa20) {
            ctx->pc = 0x2DFA84u;
            goto label_2dfa84;
        }
    }
    ctx->pc = 0x2DFA28u;
label_2dfa28:
    // 0x2dfa28: 0x26300068  addiu       $s0, $s1, 0x68
    ctx->pc = 0x2dfa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_2dfa2c:
    // 0x2dfa2c: 0x2625006c  addiu       $a1, $s1, 0x6C
    ctx->pc = 0x2dfa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2dfa30:
    // 0x2dfa30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2dfa30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2dfa34:
    // 0x2dfa34: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2dfa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2dfa38:
    // 0x2dfa38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2dfa3c:
    if (ctx->pc == 0x2DFA3Cu) {
        ctx->pc = 0x2DFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA38u;
        // 0x2dfa3c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA40u;
        goto label_2dfa40;
    }
    ctx->pc = 0x2DFA38u;
    {
        const bool branch_taken_0x2dfa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa38) {
            ctx->pc = 0x2DFA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA38u;
            // 0x2dfa3c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA54u;
            goto label_2dfa54;
        }
    }
    ctx->pc = 0x2DFA40u;
label_2dfa40:
    // 0x2dfa40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2dfa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2dfa44:
    // 0x2dfa44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2dfa48:
    // 0x2dfa48: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2dfa4c:
    if (ctx->pc == 0x2DFA4Cu) {
        ctx->pc = 0x2DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA48u;
        // 0x2dfa4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA50u;
        goto label_2dfa50;
    }
    ctx->pc = 0x2DFA48u;
    {
        const bool branch_taken_0x2dfa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA48u;
        // 0x2dfa4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa48) {
            ctx->pc = 0x2DFA5Cu;
            goto label_2dfa5c;
        }
    }
    ctx->pc = 0x2DFA50u;
label_2dfa50:
    // 0x2dfa50: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2dfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2dfa54:
    // 0x2dfa54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dfa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfa58:
    // 0x2dfa58: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2dfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2dfa5c:
    // 0x2dfa5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2dfa60:
    // 0x2dfa60: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2dfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2dfa64:
    // 0x2dfa64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2dfa64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfa68:
    // 0x2dfa68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dfa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dfa6c:
    // 0x2dfa6c: 0x60f809  jalr        $v1
label_2dfa70:
    if (ctx->pc == 0x2DFA70u) {
        ctx->pc = 0x2DFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA6Cu;
        // 0x2dfa70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA74u;
        goto label_2dfa74;
    }
    ctx->pc = 0x2DFA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DFA74u);
        ctx->pc = 0x2DFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA6Cu;
        // 0x2dfa70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFA6Cu, 0x2DFA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFA74u;
label_2dfa74:
    // 0x2dfa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfa78:
    // 0x2dfa78: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2dfa78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2dfa7c:
    // 0x2dfa7c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2dfa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_2dfa80:
    // 0x2dfa80: 0x26300058  addiu       $s0, $s1, 0x58
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2dfa84:
    // 0x2dfa84: 0xc0b7e18  jal         func_2DF860
label_2dfa88:
    if (ctx->pc == 0x2DFA88u) {
        ctx->pc = 0x2DFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA84u;
        // 0x2dfa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA8Cu;
        goto label_2dfa8c;
    }
    ctx->pc = 0x2DFA84u;
    SET_GPR_U32(ctx, 31, 0x2DFA8Cu);
    ctx->pc = 0x2DFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFA84u;
    // 0x2dfa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x2DFA84u, 0x2DFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFA8Cu;
label_2dfa8c:
    // 0x2dfa8c: 0x504000c2  beql        $v0, $zero, . + 4 + (0xC2 << 2)
label_2dfa90:
    if (ctx->pc == 0x2DFA90u) {
        ctx->pc = 0x2DFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA8Cu;
        // 0x2dfa90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFA94u;
        goto label_2dfa94;
    }
    ctx->pc = 0x2DFA8Cu;
    {
        const bool branch_taken_0x2dfa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa8c) {
            ctx->pc = 0x2DFA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFA8Cu;
            // 0x2dfa90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD98u;
            goto label_2dfd98;
        }
    }
    ctx->pc = 0x2DFA94u;
label_2dfa94:
    // 0x2dfa94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfa98:
    // 0x2dfa98: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2dfa9c:
    // 0x2dfa9c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_2dfaa0:
    if (ctx->pc == 0x2DFAA0u) {
        ctx->pc = 0x2DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA9Cu;
        // 0x2dfaa0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAA4u;
        goto label_2dfaa4;
    }
    ctx->pc = 0x2DFA9Cu;
    {
        const bool branch_taken_0x2dfa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA9Cu;
        // 0x2dfaa0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa9c) {
            ctx->pc = 0x2DFC98u;
            goto label_2dfc98;
        }
    }
    ctx->pc = 0x2DFAA4u;
label_2dfaa4:
    // 0x2dfaa4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dfaa8:
    // 0x2dfaa8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2dfaac:
    // 0x2dfaac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dfab0:
    // 0x2dfab0: 0x8c63f990  lw          $v1, -0x670($v1)
    ctx->pc = 0x2dfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
label_2dfab4:
    // 0x2dfab4: 0x600008  jr          $v1
label_2dfab8:
    if (ctx->pc == 0x2DFAB8u) {
        ctx->pc = 0x2DFABCu;
        goto label_2dfabc;
    }
    ctx->pc = 0x2DFAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DFAC0u: goto label_2dfac0;
            case 0x2DFAF8u: goto label_2dfaf8;
            case 0x2DFB30u: goto label_2dfb30;
            case 0x2DFB58u: goto label_2dfb58;
            case 0x2DFBA0u: goto label_2dfba0;
            case 0x2DFBF8u: goto label_2dfbf8;
            case 0x2DFC18u: goto label_2dfc18;
            case 0x2DFC68u: goto label_2dfc68;
            case 0x2DFC98u: goto label_2dfc98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFAB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DFABCu;
label_2dfabc:
    // 0x2dfabc: 0x0  nop
    ctx->pc = 0x2dfabcu;
    // NOP
label_2dfac0:
    // 0x2dfac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfac4:
    // 0x2dfac4: 0xc0b7a62  jal         func_2DE988
label_2dfac8:
    if (ctx->pc == 0x2DFAC8u) {
        ctx->pc = 0x2DFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAC4u;
        // 0x2dfac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFACCu;
        goto label_2dfacc;
    }
    ctx->pc = 0x2DFAC4u;
    SET_GPR_U32(ctx, 31, 0x2DFACCu);
    ctx->pc = 0x2DFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAC4u;
    // 0x2dfac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFAC4u, 0x2DFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFACCu;
label_2dfacc:
    // 0x2dfacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfad0:
    // 0x2dfad0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfad4:
    // 0x2dfad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfad8:
    // 0x2dfad8: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfadc:
    // 0x2dfadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfae0:
    // 0x2dfae0: 0xc0b7faa  jal         func_2DFEA8
label_2dfae4:
    if (ctx->pc == 0x2DFAE4u) {
        ctx->pc = 0x2DFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAE0u;
        // 0x2dfae4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAE8u;
        goto label_2dfae8;
    }
    ctx->pc = 0x2DFAE0u;
    SET_GPR_U32(ctx, 31, 0x2DFAE8u);
    ctx->pc = 0x2DFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAE0u;
    // 0x2dfae4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFAE0u, 0x2DFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAE8u;
label_2dfae8:
    // 0x2dfae8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfaec:
    // 0x2dfaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfaf0:
    // 0x2dfaf0: 0x10000026  b           . + 4 + (0x26 << 2)
label_2dfaf4:
    if (ctx->pc == 0x2DFAF4u) {
        ctx->pc = 0x2DFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAF0u;
        // 0x2dfaf4: 0x2442d8d0  addiu       $v0, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFAF8u;
        goto label_2dfaf8;
    }
    ctx->pc = 0x2DFAF0u;
    {
        const bool branch_taken_0x2dfaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAF0u;
        // 0x2dfaf4: 0x2442d8d0  addiu       $v0, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaf0) {
            ctx->pc = 0x2DFB8Cu;
            goto label_2dfb8c;
        }
    }
    ctx->pc = 0x2DFAF8u;
label_2dfaf8:
    // 0x2dfaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfafc:
    // 0x2dfafc: 0xc0b7a62  jal         func_2DE988
label_2dfb00:
    if (ctx->pc == 0x2DFB00u) {
        ctx->pc = 0x2DFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAFCu;
        // 0x2dfb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB04u;
        goto label_2dfb04;
    }
    ctx->pc = 0x2DFAFCu;
    SET_GPR_U32(ctx, 31, 0x2DFB04u);
    ctx->pc = 0x2DFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFAFCu;
    // 0x2dfb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFAFCu, 0x2DFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB04u;
label_2dfb04:
    // 0x2dfb04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb08:
    // 0x2dfb08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfb0c:
    // 0x2dfb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb10:
    // 0x2dfb10: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfb14:
    // 0x2dfb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb18:
    // 0x2dfb18: 0xc0b7faa  jal         func_2DFEA8
label_2dfb1c:
    if (ctx->pc == 0x2DFB1Cu) {
        ctx->pc = 0x2DFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB18u;
        // 0x2dfb1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB20u;
        goto label_2dfb20;
    }
    ctx->pc = 0x2DFB18u;
    SET_GPR_U32(ctx, 31, 0x2DFB20u);
    ctx->pc = 0x2DFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB18u;
    // 0x2dfb1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFB18u, 0x2DFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB20u;
label_2dfb20:
    // 0x2dfb20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfb24:
    // 0x2dfb24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb28:
    // 0x2dfb28: 0x10000018  b           . + 4 + (0x18 << 2)
label_2dfb2c:
    if (ctx->pc == 0x2DFB2Cu) {
        ctx->pc = 0x2DFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB28u;
        // 0x2dfb2c: 0x2442d718  addiu       $v0, $v0, -0x28E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB30u;
        goto label_2dfb30;
    }
    ctx->pc = 0x2DFB28u;
    {
        const bool branch_taken_0x2dfb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB28u;
        // 0x2dfb2c: 0x2442d718  addiu       $v0, $v0, -0x28E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb28) {
            ctx->pc = 0x2DFB8Cu;
            goto label_2dfb8c;
        }
    }
    ctx->pc = 0x2DFB30u;
label_2dfb30:
    // 0x2dfb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb34:
    // 0x2dfb34: 0xc0b7a62  jal         func_2DE988
label_2dfb38:
    if (ctx->pc == 0x2DFB38u) {
        ctx->pc = 0x2DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB34u;
        // 0x2dfb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB3Cu;
        goto label_2dfb3c;
    }
    ctx->pc = 0x2DFB34u;
    SET_GPR_U32(ctx, 31, 0x2DFB3Cu);
    ctx->pc = 0x2DFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB34u;
    // 0x2dfb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFB34u, 0x2DFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB3Cu;
label_2dfb3c:
    // 0x2dfb3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb40:
    // 0x2dfb40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb44:
    // 0x2dfb44: 0xc085f8a  jal         func_217E28
label_2dfb48:
    if (ctx->pc == 0x2DFB48u) {
        ctx->pc = 0x2DFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB44u;
        // 0x2dfb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB4Cu;
        goto label_2dfb4c;
    }
    ctx->pc = 0x2DFB44u;
    SET_GPR_U32(ctx, 31, 0x2DFB4Cu);
    ctx->pc = 0x2DFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB44u;
    // 0x2dfb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E28u, 0x2DFB44u, 0x2DFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB4Cu;
label_2dfb4c:
    // 0x2dfb4c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2dfb50:
    if (ctx->pc == 0x2DFB50u) {
        ctx->pc = 0x2DFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB4Cu;
        // 0x2dfb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB54u;
        goto label_2dfb54;
    }
    ctx->pc = 0x2DFB4Cu;
    {
        const bool branch_taken_0x2dfb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB4Cu;
        // 0x2dfb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb4c) {
            ctx->pc = 0x2DFC88u;
            goto label_2dfc88;
        }
    }
    ctx->pc = 0x2DFB54u;
label_2dfb54:
    // 0x2dfb54: 0x0  nop
    ctx->pc = 0x2dfb54u;
    // NOP
label_2dfb58:
    // 0x2dfb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb5c:
    // 0x2dfb5c: 0xc0b7a62  jal         func_2DE988
label_2dfb60:
    if (ctx->pc == 0x2DFB60u) {
        ctx->pc = 0x2DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB5Cu;
        // 0x2dfb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB64u;
        goto label_2dfb64;
    }
    ctx->pc = 0x2DFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB64u);
    ctx->pc = 0x2DFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB5Cu;
    // 0x2dfb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFB5Cu, 0x2DFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB64u;
label_2dfb64:
    // 0x2dfb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb68:
    // 0x2dfb68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfb6c:
    // 0x2dfb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb70:
    // 0x2dfb70: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfb74:
    // 0x2dfb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb78:
    // 0x2dfb78: 0xc0b7faa  jal         func_2DFEA8
label_2dfb7c:
    if (ctx->pc == 0x2DFB7Cu) {
        ctx->pc = 0x2DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB78u;
        // 0x2dfb7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB80u;
        goto label_2dfb80;
    }
    ctx->pc = 0x2DFB78u;
    SET_GPR_U32(ctx, 31, 0x2DFB80u);
    ctx->pc = 0x2DFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB78u;
    // 0x2dfb7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFB78u, 0x2DFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB80u;
label_2dfb80:
    // 0x2dfb80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfb84:
    // 0x2dfb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb88:
    // 0x2dfb88: 0x2442d770  addiu       $v0, $v0, -0x2890
    ctx->pc = 0x2dfb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
label_2dfb8c:
    // 0x2dfb8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb90:
    // 0x2dfb90: 0xc0b7e5a  jal         func_2DF968
label_2dfb94:
    if (ctx->pc == 0x2DFB94u) {
        ctx->pc = 0x2DFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB90u;
        // 0x2dfb94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFB98u;
        goto label_2dfb98;
    }
    ctx->pc = 0x2DFB90u;
    SET_GPR_U32(ctx, 31, 0x2DFB98u);
    ctx->pc = 0x2DFB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB90u;
    // 0x2dfb94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF968u, 0x2DFB90u, 0x2DFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB98u;
label_2dfb98:
    // 0x2dfb98: 0x10000054  b           . + 4 + (0x54 << 2)
label_2dfb9c:
    if (ctx->pc == 0x2DFB9Cu) {
        ctx->pc = 0x2DFBA0u;
        goto label_2dfba0;
    }
    ctx->pc = 0x2DFB98u;
    {
        const bool branch_taken_0x2dfb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfb98) {
            ctx->pc = 0x2DFCECu;
            goto label_2dfcec;
        }
    }
    ctx->pc = 0x2DFBA0u;
label_2dfba0:
    // 0x2dfba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfba4:
    // 0x2dfba4: 0xc0b7a62  jal         func_2DE988
label_2dfba8:
    if (ctx->pc == 0x2DFBA8u) {
        ctx->pc = 0x2DFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBA4u;
        // 0x2dfba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBACu;
        goto label_2dfbac;
    }
    ctx->pc = 0x2DFBA4u;
    SET_GPR_U32(ctx, 31, 0x2DFBACu);
    ctx->pc = 0x2DFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBA4u;
    // 0x2dfba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFBA4u, 0x2DFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBACu;
label_2dfbac:
    // 0x2dfbac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbb0:
    // 0x2dfbb0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfbb4:
    // 0x2dfbb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbb8:
    // 0x2dfbb8: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfbbc:
    // 0x2dfbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbc0:
    // 0x2dfbc0: 0xc0b7faa  jal         func_2DFEA8
label_2dfbc4:
    if (ctx->pc == 0x2DFBC4u) {
        ctx->pc = 0x2DFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBC0u;
        // 0x2dfbc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBC8u;
        goto label_2dfbc8;
    }
    ctx->pc = 0x2DFBC0u;
    SET_GPR_U32(ctx, 31, 0x2DFBC8u);
    ctx->pc = 0x2DFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBC0u;
    // 0x2dfbc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFBC0u, 0x2DFBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBC8u;
label_2dfbc8:
    // 0x2dfbc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfbcc:
    // 0x2dfbcc: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_2dfbd0:
    // 0x2dfbd0: 0x2442d668  addiu       $v0, $v0, -0x2998
    ctx->pc = 0x2dfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956648));
label_2dfbd4:
    // 0x2dfbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbd8:
    // 0x2dfbd8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2dfbdc:
    // 0x2dfbdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbe0:
    // 0x2dfbe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dfbe4:
    // 0x2dfbe4: 0xc0b7e5a  jal         func_2DF968
label_2dfbe8:
    if (ctx->pc == 0x2DFBE8u) {
        ctx->pc = 0x2DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBE4u;
        // 0x2dfbe8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFBECu;
        goto label_2dfbec;
    }
    ctx->pc = 0x2DFBE4u;
    SET_GPR_U32(ctx, 31, 0x2DFBECu);
    ctx->pc = 0x2DFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBE4u;
    // 0x2dfbe8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF968u, 0x2DFBE4u, 0x2DFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBECu;
label_2dfbec:
    // 0x2dfbec: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2dfbf0:
    if (ctx->pc == 0x2DFBF0u) {
        ctx->pc = 0x2DFBF4u;
        goto label_2dfbf4;
    }
    ctx->pc = 0x2DFBECu;
    {
        const bool branch_taken_0x2dfbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfbec) {
            ctx->pc = 0x2DFCECu;
            goto label_2dfcec;
        }
    }
    ctx->pc = 0x2DFBF4u;
label_2dfbf4:
    // 0x2dfbf4: 0x0  nop
    ctx->pc = 0x2dfbf4u;
    // NOP
label_2dfbf8:
    // 0x2dfbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbfc:
    // 0x2dfbfc: 0xc0b7a62  jal         func_2DE988
label_2dfc00:
    if (ctx->pc == 0x2DFC00u) {
        ctx->pc = 0x2DFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBFCu;
        // 0x2dfc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC04u;
        goto label_2dfc04;
    }
    ctx->pc = 0x2DFBFCu;
    SET_GPR_U32(ctx, 31, 0x2DFC04u);
    ctx->pc = 0x2DFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBFCu;
    // 0x2dfc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFBFCu, 0x2DFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC04u;
label_2dfc04:
    // 0x2dfc04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc08:
    // 0x2dfc08: 0xc0a4e3a  jal         func_2938E8
label_2dfc0c:
    if (ctx->pc == 0x2DFC0Cu) {
        ctx->pc = 0x2DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC08u;
        // 0x2dfc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC10u;
        goto label_2dfc10;
    }
    ctx->pc = 0x2DFC08u;
    SET_GPR_U32(ctx, 31, 0x2DFC10u);
    ctx->pc = 0x2DFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC08u;
    // 0x2dfc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E8u, 0x2DFC08u, 0x2DFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC10u;
label_2dfc10:
    // 0x2dfc10: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2dfc14:
    if (ctx->pc == 0x2DFC14u) {
        ctx->pc = 0x2DFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC10u;
        // 0x2dfc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC18u;
        goto label_2dfc18;
    }
    ctx->pc = 0x2DFC10u;
    {
        const bool branch_taken_0x2dfc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC10u;
        // 0x2dfc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc10) {
            ctx->pc = 0x2DFC88u;
            goto label_2dfc88;
        }
    }
    ctx->pc = 0x2DFC18u;
label_2dfc18:
    // 0x2dfc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc1c:
    // 0x2dfc1c: 0xc0b7a62  jal         func_2DE988
label_2dfc20:
    if (ctx->pc == 0x2DFC20u) {
        ctx->pc = 0x2DFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC1Cu;
        // 0x2dfc20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC24u;
        goto label_2dfc24;
    }
    ctx->pc = 0x2DFC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC24u);
    ctx->pc = 0x2DFC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC1Cu;
    // 0x2dfc20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFC1Cu, 0x2DFC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC24u;
label_2dfc24:
    // 0x2dfc24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc28:
    // 0x2dfc28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfc2c:
    // 0x2dfc2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc30:
    // 0x2dfc30: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfc34:
    // 0x2dfc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc38:
    // 0x2dfc38: 0xc0b7faa  jal         func_2DFEA8
label_2dfc3c:
    if (ctx->pc == 0x2DFC3Cu) {
        ctx->pc = 0x2DFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC38u;
        // 0x2dfc3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC40u;
        goto label_2dfc40;
    }
    ctx->pc = 0x2DFC38u;
    SET_GPR_U32(ctx, 31, 0x2DFC40u);
    ctx->pc = 0x2DFC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC38u;
    // 0x2dfc3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFC38u, 0x2DFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC40u;
label_2dfc40:
    // 0x2dfc40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfc44:
    // 0x2dfc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc48:
    // 0x2dfc48: 0x2442e938  addiu       $v0, $v0, -0x16C8
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961464));
label_2dfc4c:
    // 0x2dfc4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc50:
    // 0x2dfc50: 0xc0b7e5a  jal         func_2DF968
label_2dfc54:
    if (ctx->pc == 0x2DFC54u) {
        ctx->pc = 0x2DFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC50u;
        // 0x2dfc54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC58u;
        goto label_2dfc58;
    }
    ctx->pc = 0x2DFC50u;
    SET_GPR_U32(ctx, 31, 0x2DFC58u);
    ctx->pc = 0x2DFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC50u;
    // 0x2dfc54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF968u, 0x2DFC50u, 0x2DFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC58u;
label_2dfc58:
    // 0x2dfc58: 0xc040440  jal         func_101100
label_2dfc5c:
    if (ctx->pc == 0x2DFC5Cu) {
        ctx->pc = 0x2DFC60u;
        goto label_2dfc60;
    }
    ctx->pc = 0x2DFC58u;
    SET_GPR_U32(ctx, 31, 0x2DFC60u);
    ctx->pc = 0x101100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101100u, 0x2DFC58u, 0x2DFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC60u;
label_2dfc60:
    // 0x2dfc60: 0x10000022  b           . + 4 + (0x22 << 2)
label_2dfc64:
    if (ctx->pc == 0x2DFC64u) {
        ctx->pc = 0x2DFC68u;
        goto label_2dfc68;
    }
    ctx->pc = 0x2DFC60u;
    {
        const bool branch_taken_0x2dfc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc60) {
            ctx->pc = 0x2DFCECu;
            goto label_2dfcec;
        }
    }
    ctx->pc = 0x2DFC68u;
label_2dfc68:
    // 0x2dfc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc6c:
    // 0x2dfc6c: 0xc0b7a62  jal         func_2DE988
label_2dfc70:
    if (ctx->pc == 0x2DFC70u) {
        ctx->pc = 0x2DFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC6Cu;
        // 0x2dfc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC74u;
        goto label_2dfc74;
    }
    ctx->pc = 0x2DFC6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC74u);
    ctx->pc = 0x2DFC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC6Cu;
    // 0x2dfc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFC6Cu, 0x2DFC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC74u;
label_2dfc74:
    // 0x2dfc74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dfc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc78:
    // 0x2dfc78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc7c:
    // 0x2dfc7c: 0xc0bb3de  jal         func_2ECF78
label_2dfc80:
    if (ctx->pc == 0x2DFC80u) {
        ctx->pc = 0x2DFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC7Cu;
        // 0x2dfc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC84u;
        goto label_2dfc84;
    }
    ctx->pc = 0x2DFC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC84u);
    ctx->pc = 0x2DFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC7Cu;
    // 0x2dfc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECF78u, 0x2DFC7Cu, 0x2DFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC84u;
label_2dfc84:
    // 0x2dfc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc88:
    // 0x2dfc88: 0xc0b7e5a  jal         func_2DF968
label_2dfc8c:
    if (ctx->pc == 0x2DFC8Cu) {
        ctx->pc = 0x2DFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC88u;
        // 0x2dfc8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC90u;
        goto label_2dfc90;
    }
    ctx->pc = 0x2DFC88u;
    SET_GPR_U32(ctx, 31, 0x2DFC90u);
    ctx->pc = 0x2DFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC88u;
    // 0x2dfc8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF968u, 0x2DFC88u, 0x2DFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC90u;
label_2dfc90:
    // 0x2dfc90: 0x10000016  b           . + 4 + (0x16 << 2)
label_2dfc94:
    if (ctx->pc == 0x2DFC94u) {
        ctx->pc = 0x2DFC98u;
        goto label_2dfc98;
    }
    ctx->pc = 0x2DFC90u;
    {
        const bool branch_taken_0x2dfc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc90) {
            ctx->pc = 0x2DFCECu;
            goto label_2dfcec;
        }
    }
    ctx->pc = 0x2DFC98u;
label_2dfc98:
    // 0x2dfc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc9c:
    // 0x2dfc9c: 0xc0b7a62  jal         func_2DE988
label_2dfca0:
    if (ctx->pc == 0x2DFCA0u) {
        ctx->pc = 0x2DFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC9Cu;
        // 0x2dfca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCA4u;
        goto label_2dfca4;
    }
    ctx->pc = 0x2DFC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DFCA4u);
    ctx->pc = 0x2DFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC9Cu;
    // 0x2dfca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2DFC9Cu, 0x2DFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCA4u;
label_2dfca4:
    // 0x2dfca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfca8:
    // 0x2dfca8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfcac:
    // 0x2dfcac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dfcb0:
    // 0x2dfcb0: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2dfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
label_2dfcb4:
    // 0x2dfcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfcb8:
    // 0x2dfcb8: 0xc0b7faa  jal         func_2DFEA8
label_2dfcbc:
    if (ctx->pc == 0x2DFCBCu) {
        ctx->pc = 0x2DFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCB8u;
        // 0x2dfcbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCC0u;
        goto label_2dfcc0;
    }
    ctx->pc = 0x2DFCB8u;
    SET_GPR_U32(ctx, 31, 0x2DFCC0u);
    ctx->pc = 0x2DFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCB8u;
    // 0x2dfcbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2DFCB8u, 0x2DFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCC0u;
label_2dfcc0:
    // 0x2dfcc0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2dfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2dfcc4:
    // 0x2dfcc4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2dfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2dfcc8:
    // 0x2dfcc8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2dfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2dfccc:
    // 0x2dfccc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dfcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2dfcd0:
    // 0x2dfcd0: 0x2484d568  addiu       $a0, $a0, -0x2A98
    ctx->pc = 0x2dfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956392));
label_2dfcd4:
    // 0x2dfcd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dfcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dfcd8:
    // 0x2dfcd8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2dfcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_2dfcdc:
    // 0x2dfcdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfce0:
    // 0x2dfce0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2dfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2dfce4:
    // 0x2dfce4: 0xc0b7e5a  jal         func_2DF968
label_2dfce8:
    if (ctx->pc == 0x2DFCE8u) {
        ctx->pc = 0x2DFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCE4u;
        // 0x2dfce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCECu;
        goto label_2dfcec;
    }
    ctx->pc = 0x2DFCE4u;
    SET_GPR_U32(ctx, 31, 0x2DFCECu);
    ctx->pc = 0x2DFCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCE4u;
    // 0x2dfce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF968u, 0x2DFCE4u, 0x2DFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCECu;
label_2dfcec:
    // 0x2dfcec: 0xc0b636a  jal         func_2D8DA8
label_2dfcf0:
    if (ctx->pc == 0x2DFCF0u) {
        ctx->pc = 0x2DFCF4u;
        goto label_2dfcf4;
    }
    ctx->pc = 0x2DFCECu;
    SET_GPR_U32(ctx, 31, 0x2DFCF4u);
    ctx->pc = 0x2D8DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8DA8u, 0x2DFCECu, 0x2DFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCF4u;
label_2dfcf4:
    // 0x2dfcf4: 0xc0a5f78  jal         func_297DE0
label_2dfcf8:
    if (ctx->pc == 0x2DFCF8u) {
        ctx->pc = 0x2DFCFCu;
        goto label_2dfcfc;
    }
    ctx->pc = 0x2DFCF4u;
    SET_GPR_U32(ctx, 31, 0x2DFCFCu);
    ctx->pc = 0x297DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DE0u, 0x2DFCF4u, 0x2DFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCFCu;
label_2dfcfc:
    // 0x2dfcfc: 0x10000026  b           . + 4 + (0x26 << 2)
label_2dfd00:
    if (ctx->pc == 0x2DFD00u) {
        ctx->pc = 0x2DFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCFCu;
        // 0x2dfd00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD04u;
        goto label_2dfd04;
    }
    ctx->pc = 0x2DFCFCu;
    {
        const bool branch_taken_0x2dfcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCFCu;
        // 0x2dfd00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfcfc) {
            ctx->pc = 0x2DFD98u;
            goto label_2dfd98;
        }
    }
    ctx->pc = 0x2DFD04u;
label_2dfd04:
    // 0x2dfd04: 0x0  nop
    ctx->pc = 0x2dfd04u;
    // NOP
label_2dfd08:
    // 0x2dfd08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd0c:
    // 0x2dfd0c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd10:
    // 0x2dfd10: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd14:
    // 0x2dfd14: 0x24840304  addiu       $a0, $a0, 0x304
    ctx->pc = 0x2dfd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
label_2dfd18:
    // 0x2dfd18: 0xc048b90  jal         func_122E40
label_2dfd1c:
    if (ctx->pc == 0x2DFD1Cu) {
        ctx->pc = 0x2DFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD18u;
        // 0x2dfd1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD20u;
        goto label_2dfd20;
    }
    ctx->pc = 0x2DFD18u;
    SET_GPR_U32(ctx, 31, 0x2DFD20u);
    ctx->pc = 0x2DFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD18u;
    // 0x2dfd1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD18u, 0x2DFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD20u;
label_2dfd20:
    // 0x2dfd20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd24:
    // 0x2dfd24: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd28:
    // 0x2dfd28: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd2c:
    // 0x2dfd2c: 0x24840314  addiu       $a0, $a0, 0x314
    ctx->pc = 0x2dfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 788));
label_2dfd30:
    // 0x2dfd30: 0xc048b90  jal         func_122E40
label_2dfd34:
    if (ctx->pc == 0x2DFD34u) {
        ctx->pc = 0x2DFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD30u;
        // 0x2dfd34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD38u;
        goto label_2dfd38;
    }
    ctx->pc = 0x2DFD30u;
    SET_GPR_U32(ctx, 31, 0x2DFD38u);
    ctx->pc = 0x2DFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD30u;
    // 0x2dfd34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD30u, 0x2DFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD38u;
label_2dfd38:
    // 0x2dfd38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd3c:
    // 0x2dfd3c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd40:
    // 0x2dfd40: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd44:
    // 0x2dfd44: 0x24840324  addiu       $a0, $a0, 0x324
    ctx->pc = 0x2dfd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 804));
label_2dfd48:
    // 0x2dfd48: 0xc048b90  jal         func_122E40
label_2dfd4c:
    if (ctx->pc == 0x2DFD4Cu) {
        ctx->pc = 0x2DFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD48u;
        // 0x2dfd4c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD50u;
        goto label_2dfd50;
    }
    ctx->pc = 0x2DFD48u;
    SET_GPR_U32(ctx, 31, 0x2DFD50u);
    ctx->pc = 0x2DFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD48u;
    // 0x2dfd4c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD48u, 0x2DFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD50u;
label_2dfd50:
    // 0x2dfd50: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd54:
    // 0x2dfd54: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd58:
    // 0x2dfd58: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd5c:
    // 0x2dfd5c: 0x24840334  addiu       $a0, $a0, 0x334
    ctx->pc = 0x2dfd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 820));
label_2dfd60:
    // 0x2dfd60: 0xc048b90  jal         func_122E40
label_2dfd64:
    if (ctx->pc == 0x2DFD64u) {
        ctx->pc = 0x2DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD60u;
        // 0x2dfd64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD68u;
        goto label_2dfd68;
    }
    ctx->pc = 0x2DFD60u;
    SET_GPR_U32(ctx, 31, 0x2DFD68u);
    ctx->pc = 0x2DFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD60u;
    // 0x2dfd64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD60u, 0x2DFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD68u;
label_2dfd68:
    // 0x2dfd68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd6c:
    // 0x2dfd6c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd70:
    // 0x2dfd70: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd74:
    // 0x2dfd74: 0x24840344  addiu       $a0, $a0, 0x344
    ctx->pc = 0x2dfd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 836));
label_2dfd78:
    // 0x2dfd78: 0xc048b90  jal         func_122E40
label_2dfd7c:
    if (ctx->pc == 0x2DFD7Cu) {
        ctx->pc = 0x2DFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD78u;
        // 0x2dfd7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD80u;
        goto label_2dfd80;
    }
    ctx->pc = 0x2DFD78u;
    SET_GPR_U32(ctx, 31, 0x2DFD80u);
    ctx->pc = 0x2DFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD78u;
    // 0x2dfd7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD78u, 0x2DFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD80u;
label_2dfd80:
    // 0x2dfd80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2dfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2dfd84:
    // 0x2dfd84: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2dfd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2dfd88:
    // 0x2dfd88: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2dfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2dfd8c:
    // 0x2dfd8c: 0x24840354  addiu       $a0, $a0, 0x354
    ctx->pc = 0x2dfd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 852));
label_2dfd90:
    // 0x2dfd90: 0xc048b90  jal         func_122E40
label_2dfd94:
    if (ctx->pc == 0x2DFD94u) {
        ctx->pc = 0x2DFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD90u;
        // 0x2dfd94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFD98u;
        goto label_2dfd98;
    }
    ctx->pc = 0x2DFD90u;
    SET_GPR_U32(ctx, 31, 0x2DFD98u);
    ctx->pc = 0x2DFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD90u;
    // 0x2dfd94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DFD90u, 0x2DFD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD98u;
label_2dfd98:
    // 0x2dfd98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dfd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dfd9c:
    // 0x2dfd9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dfd9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dfda0:
    // 0x2dfda0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dfda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2dfda4:
    // 0x2dfda4: 0x3e00008  jr          $ra
label_2dfda8:
    if (ctx->pc == 0x2DFDA8u) {
        ctx->pc = 0x2DFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDA4u;
        // 0x2dfda8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFDACu;
        goto label_2dfdac;
    }
    ctx->pc = 0x2DFDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDA4u;
        // 0x2dfda8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFDACu;
label_2dfdac:
    // 0x2dfdac: 0x0  nop
    ctx->pc = 0x2dfdacu;
    // NOP
label_2dfdb0:
    // 0x2dfdb0: 0x3e00008  jr          $ra
label_2dfdb4:
    if (ctx->pc == 0x2DFDB4u) {
        ctx->pc = 0x2DFDB8u;
        goto label_fallthrough_0x2dfdb0;
    }
    ctx->pc = 0x2DFDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dfdb0:
    ctx->pc = 0x2DFDB8u;
}
