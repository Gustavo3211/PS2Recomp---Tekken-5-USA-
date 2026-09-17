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

// Function: sub_0034A9E8
// Address: 0x34a9e8 - 0x34ae10
void sub_0034A9E8_0x34a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A9E8_0x34a9e8");
#endif

    switch (ctx->pc) {
        case 0x34a9e8u: goto label_34a9e8;
        case 0x34a9ecu: goto label_34a9ec;
        case 0x34a9f0u: goto label_34a9f0;
        case 0x34a9f4u: goto label_34a9f4;
        case 0x34a9f8u: goto label_34a9f8;
        case 0x34a9fcu: goto label_34a9fc;
        case 0x34aa00u: goto label_34aa00;
        case 0x34aa04u: goto label_34aa04;
        case 0x34aa08u: goto label_34aa08;
        case 0x34aa0cu: goto label_34aa0c;
        case 0x34aa10u: goto label_34aa10;
        case 0x34aa14u: goto label_34aa14;
        case 0x34aa18u: goto label_34aa18;
        case 0x34aa1cu: goto label_34aa1c;
        case 0x34aa20u: goto label_34aa20;
        case 0x34aa24u: goto label_34aa24;
        case 0x34aa28u: goto label_34aa28;
        case 0x34aa2cu: goto label_34aa2c;
        case 0x34aa30u: goto label_34aa30;
        case 0x34aa34u: goto label_34aa34;
        case 0x34aa38u: goto label_34aa38;
        case 0x34aa3cu: goto label_34aa3c;
        case 0x34aa40u: goto label_34aa40;
        case 0x34aa44u: goto label_34aa44;
        case 0x34aa48u: goto label_34aa48;
        case 0x34aa4cu: goto label_34aa4c;
        case 0x34aa50u: goto label_34aa50;
        case 0x34aa54u: goto label_34aa54;
        case 0x34aa58u: goto label_34aa58;
        case 0x34aa5cu: goto label_34aa5c;
        case 0x34aa60u: goto label_34aa60;
        case 0x34aa64u: goto label_34aa64;
        case 0x34aa68u: goto label_34aa68;
        case 0x34aa6cu: goto label_34aa6c;
        case 0x34aa70u: goto label_34aa70;
        case 0x34aa74u: goto label_34aa74;
        case 0x34aa78u: goto label_34aa78;
        case 0x34aa7cu: goto label_34aa7c;
        case 0x34aa80u: goto label_34aa80;
        case 0x34aa84u: goto label_34aa84;
        case 0x34aa88u: goto label_34aa88;
        case 0x34aa8cu: goto label_34aa8c;
        case 0x34aa90u: goto label_34aa90;
        case 0x34aa94u: goto label_34aa94;
        case 0x34aa98u: goto label_34aa98;
        case 0x34aa9cu: goto label_34aa9c;
        case 0x34aaa0u: goto label_34aaa0;
        case 0x34aaa4u: goto label_34aaa4;
        case 0x34aaa8u: goto label_34aaa8;
        case 0x34aaacu: goto label_34aaac;
        case 0x34aab0u: goto label_34aab0;
        case 0x34aab4u: goto label_34aab4;
        case 0x34aab8u: goto label_34aab8;
        case 0x34aabcu: goto label_34aabc;
        case 0x34aac0u: goto label_34aac0;
        case 0x34aac4u: goto label_34aac4;
        case 0x34aac8u: goto label_34aac8;
        case 0x34aaccu: goto label_34aacc;
        case 0x34aad0u: goto label_34aad0;
        case 0x34aad4u: goto label_34aad4;
        case 0x34aad8u: goto label_34aad8;
        case 0x34aadcu: goto label_34aadc;
        case 0x34aae0u: goto label_34aae0;
        case 0x34aae4u: goto label_34aae4;
        case 0x34aae8u: goto label_34aae8;
        case 0x34aaecu: goto label_34aaec;
        case 0x34aaf0u: goto label_34aaf0;
        case 0x34aaf4u: goto label_34aaf4;
        case 0x34aaf8u: goto label_34aaf8;
        case 0x34aafcu: goto label_34aafc;
        case 0x34ab00u: goto label_34ab00;
        case 0x34ab04u: goto label_34ab04;
        case 0x34ab08u: goto label_34ab08;
        case 0x34ab0cu: goto label_34ab0c;
        case 0x34ab10u: goto label_34ab10;
        case 0x34ab14u: goto label_34ab14;
        case 0x34ab18u: goto label_34ab18;
        case 0x34ab1cu: goto label_34ab1c;
        case 0x34ab20u: goto label_34ab20;
        case 0x34ab24u: goto label_34ab24;
        case 0x34ab28u: goto label_34ab28;
        case 0x34ab2cu: goto label_34ab2c;
        case 0x34ab30u: goto label_34ab30;
        case 0x34ab34u: goto label_34ab34;
        case 0x34ab38u: goto label_34ab38;
        case 0x34ab3cu: goto label_34ab3c;
        case 0x34ab40u: goto label_34ab40;
        case 0x34ab44u: goto label_34ab44;
        case 0x34ab48u: goto label_34ab48;
        case 0x34ab4cu: goto label_34ab4c;
        case 0x34ab50u: goto label_34ab50;
        case 0x34ab54u: goto label_34ab54;
        case 0x34ab58u: goto label_34ab58;
        case 0x34ab5cu: goto label_34ab5c;
        case 0x34ab60u: goto label_34ab60;
        case 0x34ab64u: goto label_34ab64;
        case 0x34ab68u: goto label_34ab68;
        case 0x34ab6cu: goto label_34ab6c;
        case 0x34ab70u: goto label_34ab70;
        case 0x34ab74u: goto label_34ab74;
        case 0x34ab78u: goto label_34ab78;
        case 0x34ab7cu: goto label_34ab7c;
        case 0x34ab80u: goto label_34ab80;
        case 0x34ab84u: goto label_34ab84;
        case 0x34ab88u: goto label_34ab88;
        case 0x34ab8cu: goto label_34ab8c;
        case 0x34ab90u: goto label_34ab90;
        case 0x34ab94u: goto label_34ab94;
        case 0x34ab98u: goto label_34ab98;
        case 0x34ab9cu: goto label_34ab9c;
        case 0x34aba0u: goto label_34aba0;
        case 0x34aba4u: goto label_34aba4;
        case 0x34aba8u: goto label_34aba8;
        case 0x34abacu: goto label_34abac;
        case 0x34abb0u: goto label_34abb0;
        case 0x34abb4u: goto label_34abb4;
        case 0x34abb8u: goto label_34abb8;
        case 0x34abbcu: goto label_34abbc;
        case 0x34abc0u: goto label_34abc0;
        case 0x34abc4u: goto label_34abc4;
        case 0x34abc8u: goto label_34abc8;
        case 0x34abccu: goto label_34abcc;
        case 0x34abd0u: goto label_34abd0;
        case 0x34abd4u: goto label_34abd4;
        case 0x34abd8u: goto label_34abd8;
        case 0x34abdcu: goto label_34abdc;
        case 0x34abe0u: goto label_34abe0;
        case 0x34abe4u: goto label_34abe4;
        case 0x34abe8u: goto label_34abe8;
        case 0x34abecu: goto label_34abec;
        case 0x34abf0u: goto label_34abf0;
        case 0x34abf4u: goto label_34abf4;
        case 0x34abf8u: goto label_34abf8;
        case 0x34abfcu: goto label_34abfc;
        case 0x34ac00u: goto label_34ac00;
        case 0x34ac04u: goto label_34ac04;
        case 0x34ac08u: goto label_34ac08;
        case 0x34ac0cu: goto label_34ac0c;
        case 0x34ac10u: goto label_34ac10;
        case 0x34ac14u: goto label_34ac14;
        case 0x34ac18u: goto label_34ac18;
        case 0x34ac1cu: goto label_34ac1c;
        case 0x34ac20u: goto label_34ac20;
        case 0x34ac24u: goto label_34ac24;
        case 0x34ac28u: goto label_34ac28;
        case 0x34ac2cu: goto label_34ac2c;
        case 0x34ac30u: goto label_34ac30;
        case 0x34ac34u: goto label_34ac34;
        case 0x34ac38u: goto label_34ac38;
        case 0x34ac3cu: goto label_34ac3c;
        case 0x34ac40u: goto label_34ac40;
        case 0x34ac44u: goto label_34ac44;
        case 0x34ac48u: goto label_34ac48;
        case 0x34ac4cu: goto label_34ac4c;
        case 0x34ac50u: goto label_34ac50;
        case 0x34ac54u: goto label_34ac54;
        case 0x34ac58u: goto label_34ac58;
        case 0x34ac5cu: goto label_34ac5c;
        case 0x34ac60u: goto label_34ac60;
        case 0x34ac64u: goto label_34ac64;
        case 0x34ac68u: goto label_34ac68;
        case 0x34ac6cu: goto label_34ac6c;
        case 0x34ac70u: goto label_34ac70;
        case 0x34ac74u: goto label_34ac74;
        case 0x34ac78u: goto label_34ac78;
        case 0x34ac7cu: goto label_34ac7c;
        case 0x34ac80u: goto label_34ac80;
        case 0x34ac84u: goto label_34ac84;
        case 0x34ac88u: goto label_34ac88;
        case 0x34ac8cu: goto label_34ac8c;
        case 0x34ac90u: goto label_34ac90;
        case 0x34ac94u: goto label_34ac94;
        case 0x34ac98u: goto label_34ac98;
        case 0x34ac9cu: goto label_34ac9c;
        case 0x34aca0u: goto label_34aca0;
        case 0x34aca4u: goto label_34aca4;
        case 0x34aca8u: goto label_34aca8;
        case 0x34acacu: goto label_34acac;
        case 0x34acb0u: goto label_34acb0;
        case 0x34acb4u: goto label_34acb4;
        case 0x34acb8u: goto label_34acb8;
        case 0x34acbcu: goto label_34acbc;
        case 0x34acc0u: goto label_34acc0;
        case 0x34acc4u: goto label_34acc4;
        case 0x34acc8u: goto label_34acc8;
        case 0x34acccu: goto label_34accc;
        case 0x34acd0u: goto label_34acd0;
        case 0x34acd4u: goto label_34acd4;
        case 0x34acd8u: goto label_34acd8;
        case 0x34acdcu: goto label_34acdc;
        case 0x34ace0u: goto label_34ace0;
        case 0x34ace4u: goto label_34ace4;
        case 0x34ace8u: goto label_34ace8;
        case 0x34acecu: goto label_34acec;
        case 0x34acf0u: goto label_34acf0;
        case 0x34acf4u: goto label_34acf4;
        case 0x34acf8u: goto label_34acf8;
        case 0x34acfcu: goto label_34acfc;
        case 0x34ad00u: goto label_34ad00;
        case 0x34ad04u: goto label_34ad04;
        case 0x34ad08u: goto label_34ad08;
        case 0x34ad0cu: goto label_34ad0c;
        case 0x34ad10u: goto label_34ad10;
        case 0x34ad14u: goto label_34ad14;
        case 0x34ad18u: goto label_34ad18;
        case 0x34ad1cu: goto label_34ad1c;
        case 0x34ad20u: goto label_34ad20;
        case 0x34ad24u: goto label_34ad24;
        case 0x34ad28u: goto label_34ad28;
        case 0x34ad2cu: goto label_34ad2c;
        case 0x34ad30u: goto label_34ad30;
        case 0x34ad34u: goto label_34ad34;
        case 0x34ad38u: goto label_34ad38;
        case 0x34ad3cu: goto label_34ad3c;
        case 0x34ad40u: goto label_34ad40;
        case 0x34ad44u: goto label_34ad44;
        case 0x34ad48u: goto label_34ad48;
        case 0x34ad4cu: goto label_34ad4c;
        case 0x34ad50u: goto label_34ad50;
        case 0x34ad54u: goto label_34ad54;
        case 0x34ad58u: goto label_34ad58;
        case 0x34ad5cu: goto label_34ad5c;
        case 0x34ad60u: goto label_34ad60;
        case 0x34ad64u: goto label_34ad64;
        case 0x34ad68u: goto label_34ad68;
        case 0x34ad6cu: goto label_34ad6c;
        case 0x34ad70u: goto label_34ad70;
        case 0x34ad74u: goto label_34ad74;
        case 0x34ad78u: goto label_34ad78;
        case 0x34ad7cu: goto label_34ad7c;
        case 0x34ad80u: goto label_34ad80;
        case 0x34ad84u: goto label_34ad84;
        case 0x34ad88u: goto label_34ad88;
        case 0x34ad8cu: goto label_34ad8c;
        case 0x34ad90u: goto label_34ad90;
        case 0x34ad94u: goto label_34ad94;
        case 0x34ad98u: goto label_34ad98;
        case 0x34ad9cu: goto label_34ad9c;
        case 0x34ada0u: goto label_34ada0;
        case 0x34ada4u: goto label_34ada4;
        case 0x34ada8u: goto label_34ada8;
        case 0x34adacu: goto label_34adac;
        case 0x34adb0u: goto label_34adb0;
        case 0x34adb4u: goto label_34adb4;
        case 0x34adb8u: goto label_34adb8;
        case 0x34adbcu: goto label_34adbc;
        case 0x34adc0u: goto label_34adc0;
        case 0x34adc4u: goto label_34adc4;
        case 0x34adc8u: goto label_34adc8;
        case 0x34adccu: goto label_34adcc;
        case 0x34add0u: goto label_34add0;
        case 0x34add4u: goto label_34add4;
        case 0x34add8u: goto label_34add8;
        case 0x34addcu: goto label_34addc;
        case 0x34ade0u: goto label_34ade0;
        case 0x34ade4u: goto label_34ade4;
        case 0x34ade8u: goto label_34ade8;
        case 0x34adecu: goto label_34adec;
        case 0x34adf0u: goto label_34adf0;
        case 0x34adf4u: goto label_34adf4;
        case 0x34adf8u: goto label_34adf8;
        case 0x34adfcu: goto label_34adfc;
        case 0x34ae00u: goto label_34ae00;
        case 0x34ae04u: goto label_34ae04;
        case 0x34ae08u: goto label_34ae08;
        case 0x34ae0cu: goto label_34ae0c;
        default: break;
    }

    ctx->pc = 0x34a9e8u;

label_34a9e8:
    // 0x34a9e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34a9ec:
    // 0x34a9ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_34a9f0:
    // 0x34a9f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34a9f4:
    // 0x34a9f4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x34a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_34a9f8:
    // 0x34a9f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34a9fc:
    // 0x34a9fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34a9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34aa00:
    // 0x34aa00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_34aa04:
    // 0x34aa04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34aa04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34aa08:
    // 0x34aa08: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x34aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_34aa0c:
    // 0x34aa0c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x34aa0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34aa10:
    // 0x34aa10: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34aa14:
    // 0x34aa14: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34aa14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34aa18:
    // 0x34aa18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34aa1c:
    // 0x34aa1c: 0x26030d00  addiu       $v1, $s0, 0xD00
    ctx->pc = 0x34aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34aa20:
    // 0x34aa20: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_34aa24:
    // 0x34aa24: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_34aa28:
    // 0x34aa28: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x34aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_34aa2c:
    // 0x34aa2c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x34aa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_34aa30:
    // 0x34aa30: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_34aa34:
    // 0x34aa34: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34aa38:
    // 0x34aa38: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x34aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_34aa3c:
    // 0x34aa3c: 0x8c6701f4  lw          $a3, 0x1F4($v1)
    ctx->pc = 0x34aa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_34aa40:
    // 0x34aa40: 0xe21824  and         $v1, $a3, $v0
    ctx->pc = 0x34aa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34aa44:
    // 0x34aa44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_34aa48:
    if (ctx->pc == 0x34AA48u) {
        ctx->pc = 0x34AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA44u;
        // 0x34aa48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AA4Cu;
        goto label_34aa4c;
    }
    ctx->pc = 0x34AA44u;
    {
        const bool branch_taken_0x34aa44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA44u;
        // 0x34aa48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa44) {
            ctx->pc = 0x34AA58u;
            goto label_34aa58;
        }
    }
    ctx->pc = 0x34AA4Cu;
label_34aa4c:
    // 0x34aa4c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34aa50:
    // 0x34aa50: 0x10000004  b           . + 4 + (0x4 << 2)
label_34aa54:
    if (ctx->pc == 0x34AA54u) {
        ctx->pc = 0x34AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA50u;
        // 0x34aa54: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AA58u;
        goto label_34aa58;
    }
    ctx->pc = 0x34AA50u;
    {
        const bool branch_taken_0x34aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA50u;
        // 0x34aa54: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa50) {
            ctx->pc = 0x34AA64u;
            goto label_34aa64;
        }
    }
    ctx->pc = 0x34AA58u;
label_34aa58:
    // 0x34aa58: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34aa5c:
    // 0x34aa5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34aa60:
    // 0x34aa60: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x34aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34aa64:
    // 0x34aa64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34aa68:
    // 0x34aa68: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x34aa68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34aa6c:
    // 0x34aa6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x34aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34aa70:
    // 0x34aa70: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x34aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_34aa74:
    // 0x34aa74: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x34aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_34aa78:
    // 0x34aa78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34aa7c:
    // 0x34aa7c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34aa80:
    // 0x34aa80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34aa84:
    // 0x34aa84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34aa88:
    // 0x34aa88: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34aa88u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34aa8c:
    // 0x34aa8c: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34aa90:
    // 0x34aa90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34aa94:
    // 0x34aa94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34aa94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34aa98:
    // 0x34aa98: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x34aa98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34aa9c:
    // 0x34aa9c: 0x26040d00  addiu       $a0, $s0, 0xD00
    ctx->pc = 0x34aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34aaa0:
    // 0x34aaa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34aaa4:
    // 0x34aaa4: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x34aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_34aaa8:
    // 0x34aaa8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x34aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_34aaac:
    // 0x34aaac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x34aaacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_34aab0:
    // 0x34aab0: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x34aab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_34aab4:
    // 0x34aab4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x34aab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34aab8:
    // 0x34aab8: 0x32e80004  andi        $t0, $s7, 0x4
    ctx->pc = 0x34aab8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_34aabc:
    // 0x34aabc: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x34aabcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_34aac0:
    // 0x34aac0: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x34aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_34aac4:
    // 0x34aac4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x34aac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_34aac8:
    // 0x34aac8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x34aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_34aacc:
    // 0x34aacc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x34aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_34aad0:
    // 0x34aad0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x34aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_34aad4:
    // 0x34aad4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34aad8:
    // 0x34aad8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x34aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_34aadc:
    // 0x34aadc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_34aae0:
    // 0x34aae0: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x34aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_34aae4:
    // 0x34aae4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x34aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_34aae8:
    // 0x34aae8: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x34aae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_34aaec:
    // 0x34aaec: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x34aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
label_34aaf0:
    // 0x34aaf0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x34aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_34aaf4:
    // 0x34aaf4: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x34aaf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_34aaf8:
    // 0x34aaf8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x34aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_34aafc:
    // 0x34aafc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34ab00:
    // 0x34ab00: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x34ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_34ab04:
    // 0x34ab04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ab08:
    // 0x34ab08: 0x70463389  pcpyld      $a2, $v0, $a2
    ctx->pc = 0x34ab08u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_34ab0c:
    // 0x34ab0c: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x34ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
label_34ab10:
    // 0x34ab10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34ab14:
    // 0x34ab14: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x34ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_34ab18:
    // 0x34ab18: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x34ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_34ab1c:
    // 0x34ab1c: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x34ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_34ab20:
    // 0x34ab20: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34ab24:
    if (ctx->pc == 0x34AB24u) {
        ctx->pc = 0x34AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB20u;
        // 0x34ab24: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AB28u;
        goto label_34ab28;
    }
    ctx->pc = 0x34AB20u;
    {
        const bool branch_taken_0x34ab20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB20u;
        // 0x34ab24: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab20) {
            ctx->pc = 0x34AB3Cu;
            goto label_34ab3c;
        }
    }
    ctx->pc = 0x34AB28u;
label_34ab28:
    // 0x34ab28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ab2c:
    // 0x34ab2c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x34ab2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34ab30:
    // 0x34ab30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34ab34:
    // 0x34ab34: 0x60f809  jalr        $v1
label_34ab38:
    if (ctx->pc == 0x34AB38u) {
        ctx->pc = 0x34AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB34u;
        // 0x34ab38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AB3Cu;
        goto label_34ab3c;
    }
    ctx->pc = 0x34AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34AB3Cu);
        ctx->pc = 0x34AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB34u;
        // 0x34ab38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AB34u, 0x34AB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34AB3Cu;
label_34ab3c:
    // 0x34ab3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ab40:
    // 0x34ab40: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x34ab40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34ab44:
    // 0x34ab44: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34ab48:
    // 0x34ab48: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x34ab48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_34ab4c:
    // 0x34ab4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_34ab50:
    if (ctx->pc == 0x34AB50u) {
        ctx->pc = 0x34AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB4Cu;
        // 0x34ab50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AB54u;
        goto label_34ab54;
    }
    ctx->pc = 0x34AB4Cu;
    {
        const bool branch_taken_0x34ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB4Cu;
        // 0x34ab50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab4c) {
            ctx->pc = 0x34AB68u;
            goto label_34ab68;
        }
    }
    ctx->pc = 0x34AB54u;
label_34ab54:
    // 0x34ab54: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34ab58:
    // 0x34ab58: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34ab5c:
    // 0x34ab5c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34ab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34ab60:
    // 0x34ab60: 0x10000006  b           . + 4 + (0x6 << 2)
label_34ab64:
    if (ctx->pc == 0x34AB64u) {
        ctx->pc = 0x34AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB60u;
        // 0x34ab64: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AB68u;
        goto label_34ab68;
    }
    ctx->pc = 0x34AB60u;
    {
        const bool branch_taken_0x34ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB60u;
        // 0x34ab64: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab60) {
            ctx->pc = 0x34AB7Cu;
            goto label_34ab7c;
        }
    }
    ctx->pc = 0x34AB68u;
label_34ab68:
    // 0x34ab68: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34ab6c:
    // 0x34ab6c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34ab70:
    // 0x34ab70: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34ab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34ab74:
    // 0x34ab74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34ab78:
    // 0x34ab78: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x34ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34ab7c:
    // 0x34ab7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ab80:
    // 0x34ab80: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x34ab80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34ab84:
    // 0x34ab84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34ab88:
    // 0x34ab88: 0x3c026804  lui         $v0, 0x6804
    ctx->pc = 0x34ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26628 << 16));
label_34ab8c:
    // 0x34ab8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x34ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_34ab90:
    // 0x34ab90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34ab94:
    // 0x34ab94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_34ab98:
    // 0x34ab98: 0x70673b89  pcpyld      $a3, $v1, $a3
    ctx->pc = 0x34ab98u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_34ab9c:
    // 0x34ab9c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x34ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_34aba0:
    // 0x34aba0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34aba4:
    // 0x34aba4: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x34aba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_34aba8:
    // 0x34aba8: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x34aba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_34abac:
    // 0x34abac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_34abb0:
    // 0x34abb0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34abb4:
    if (ctx->pc == 0x34ABB4u) {
        ctx->pc = 0x34ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABB0u;
        // 0x34abb4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ABB8u;
        goto label_34abb8;
    }
    ctx->pc = 0x34ABB0u;
    {
        const bool branch_taken_0x34abb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABB0u;
        // 0x34abb4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abb0) {
            ctx->pc = 0x34ABCCu;
            goto label_34abcc;
        }
    }
    ctx->pc = 0x34ABB8u;
label_34abb8:
    // 0x34abb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34abb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34abbc:
    // 0x34abbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34abc0:
    // 0x34abc0: 0xc0d2b84  jal         func_34AE10
label_34abc4:
    if (ctx->pc == 0x34ABC4u) {
        ctx->pc = 0x34ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABC0u;
        // 0x34abc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ABC8u;
        goto label_34abc8;
    }
    ctx->pc = 0x34ABC0u;
    SET_GPR_U32(ctx, 31, 0x34ABC8u);
    ctx->pc = 0x34ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ABC0u;
    // 0x34abc4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE10u, 0x34ABC0u, 0x34ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ABC8u;
label_34abc8:
    // 0x34abc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34abc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34abcc:
    // 0x34abcc: 0x26020d00  addiu       $v0, $s0, 0xD00
    ctx->pc = 0x34abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34abd0:
    // 0x34abd0: 0x244200d4  addiu       $v0, $v0, 0xD4
    ctx->pc = 0x34abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
label_34abd4:
    // 0x34abd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34abd8:
    // 0x34abd8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_34abdc:
    // 0x34abdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_34abe0:
    // 0x34abe0: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34abe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34abe4:
    // 0x34abe4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x34abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_34abe8:
    // 0x34abe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34abec:
    if (ctx->pc == 0x34ABECu) {
        ctx->pc = 0x34ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABE8u;
        // 0x34abec: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ABF0u;
        goto label_34abf0;
    }
    ctx->pc = 0x34ABE8u;
    {
        const bool branch_taken_0x34abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABE8u;
        // 0x34abec: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abe8) {
            ctx->pc = 0x34ABF8u;
            goto label_34abf8;
        }
    }
    ctx->pc = 0x34ABF0u;
label_34abf0:
    // 0x34abf0: 0x1000000f  b           . + 4 + (0xF << 2)
label_34abf4:
    if (ctx->pc == 0x34ABF4u) {
        ctx->pc = 0x34ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABF0u;
        // 0x34abf4: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ABF8u;
        goto label_34abf8;
    }
    ctx->pc = 0x34ABF0u;
    {
        const bool branch_taken_0x34abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABF0u;
        // 0x34abf4: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34abf0) {
            ctx->pc = 0x34AC30u;
            goto label_34ac30;
        }
    }
    ctx->pc = 0x34ABF8u;
label_34abf8:
    // 0x34abf8: 0xc0c8864  jal         func_322190
label_34abfc:
    if (ctx->pc == 0x34ABFCu) {
        ctx->pc = 0x34AC00u;
        goto label_34ac00;
    }
    ctx->pc = 0x34ABF8u;
    SET_GPR_U32(ctx, 31, 0x34AC00u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x34ABF8u, 0x34AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC00u;
label_34ac00:
    // 0x34ac00: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x34ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34ac04:
    // 0x34ac04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34ac04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ac08:
    // 0x34ac08: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x34ac08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_34ac0c:
    // 0x34ac0c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_34ac10:
    // 0x34ac10: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x34ac10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34ac14:
    // 0x34ac14: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x34ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_34ac18:
    // 0x34ac18: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34ac18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34ac1c:
    // 0x34ac1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34ac20:
    // 0x34ac20: 0x40f809  jalr        $v0
label_34ac24:
    if (ctx->pc == 0x34AC24u) {
        ctx->pc = 0x34AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC20u;
        // 0x34ac24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AC28u;
        goto label_34ac28;
    }
    ctx->pc = 0x34AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34AC28u);
        ctx->pc = 0x34AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC20u;
        // 0x34ac24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AC20u, 0x34AC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34AC28u;
label_34ac28:
    // 0x34ac28: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34ac28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34ac2c:
    // 0x34ac2c: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x34ac2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34ac30:
    // 0x34ac30: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x34ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_34ac34:
    // 0x34ac34: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_34ac38:
    if (ctx->pc == 0x34AC38u) {
        ctx->pc = 0x34AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC34u;
        // 0x34ac38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AC3Cu;
        goto label_34ac3c;
    }
    ctx->pc = 0x34AC34u;
    {
        const bool branch_taken_0x34ac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC34u;
        // 0x34ac38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac34) {
            ctx->pc = 0x34AD20u;
            goto label_34ad20;
        }
    }
    ctx->pc = 0x34AC3Cu;
label_34ac3c:
    // 0x34ac3c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x34ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34ac40:
    // 0x34ac40: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34ac44:
    // 0x34ac44: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34ac48:
    // 0x34ac48: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_34ac4c:
    if (ctx->pc == 0x34AC4Cu) {
        ctx->pc = 0x34AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC48u;
        // 0x34ac4c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AC50u;
        goto label_34ac50;
    }
    ctx->pc = 0x34AC48u;
    {
        const bool branch_taken_0x34ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ac48) {
            ctx->pc = 0x34AC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34AC48u;
            // 0x34ac4c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AC68u;
            goto label_34ac68;
        }
    }
    ctx->pc = 0x34AC50u;
label_34ac50:
    // 0x34ac50: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34ac54:
    // 0x34ac54: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34ac58:
    // 0x34ac58: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34ac5c:
    // 0x34ac5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_34ac60:
    if (ctx->pc == 0x34AC60u) {
        ctx->pc = 0x34AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC5Cu;
        // 0x34ac60: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AC64u;
        goto label_34ac64;
    }
    ctx->pc = 0x34AC5Cu;
    {
        const bool branch_taken_0x34ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC5Cu;
        // 0x34ac60: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac5c) {
            ctx->pc = 0x34AC78u;
            goto label_34ac78;
        }
    }
    ctx->pc = 0x34AC64u;
label_34ac64:
    // 0x34ac64: 0x0  nop
    ctx->pc = 0x34ac64u;
    // NOP
label_34ac68:
    // 0x34ac68: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34ac6c:
    // 0x34ac6c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34ac6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34ac70:
    // 0x34ac70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34ac74:
    // 0x34ac74: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_34ac78:
    // 0x34ac78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ac7c:
    // 0x34ac7c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x34ac7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34ac80:
    // 0x34ac80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34ac84:
    // 0x34ac84: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x34ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_34ac88:
    // 0x34ac88: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x34ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_34ac8c:
    // 0x34ac8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34ac90:
    // 0x34ac90: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34ac90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34ac94:
    // 0x34ac94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34ac98:
    // 0x34ac98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ac9c:
    // 0x34ac9c: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34ac9cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34aca0:
    // 0x34aca0: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34aca4:
    // 0x34aca4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x34aca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34aca8:
    // 0x34aca8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_34acac:
    // 0x34acac: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x34acacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_34acb0:
    // 0x34acb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34acb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34acb4:
    // 0x34acb4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x34acb4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_34acb8:
    // 0x34acb8: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x34acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_34acbc:
    // 0x34acbc: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x34acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_34acc0:
    // 0x34acc0: 0x26150d00  addiu       $s5, $s0, 0xD00
    ctx->pc = 0x34acc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34acc4:
    // 0x34acc4: 0x26b000d4  addiu       $s0, $s5, 0xD4
    ctx->pc = 0x34acc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 212));
label_34acc8:
    // 0x34acc8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_34accc:
    // 0x34accc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34acccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34acd0:
    // 0x34acd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34acd4:
    // 0x34acd4: 0x40f809  jalr        $v0
label_34acd8:
    if (ctx->pc == 0x34ACD8u) {
        ctx->pc = 0x34ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACD4u;
        // 0x34acd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ACDCu;
        goto label_34acdc;
    }
    ctx->pc = 0x34ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34ACDCu);
        ctx->pc = 0x34ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACD4u;
        // 0x34acd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ACD4u, 0x34ACDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34ACDCu;
label_34acdc:
    // 0x34acdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34ace0:
    if (ctx->pc == 0x34ACE0u) {
        ctx->pc = 0x34ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACDCu;
        // 0x34ace0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ACE4u;
        goto label_34ace4;
    }
    ctx->pc = 0x34ACDCu;
    {
        const bool branch_taken_0x34acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACDCu;
        // 0x34ace0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34acdc) {
            ctx->pc = 0x34ACECu;
            goto label_34acec;
        }
    }
    ctx->pc = 0x34ACE4u;
label_34ace4:
    // 0x34ace4: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_34ace8:
    // 0x34ace8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x34ace8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_34acec:
    // 0x34acec: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x34acecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_34acf0:
    // 0x34acf0: 0x26b00068  addiu       $s0, $s5, 0x68
    ctx->pc = 0x34acf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
label_34acf4:
    // 0x34acf4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x34acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_34acf8:
    // 0x34acf8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34acfc:
    if (ctx->pc == 0x34ACFCu) {
        ctx->pc = 0x34ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACF8u;
        // 0x34acfc: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD00u;
        goto label_34ad00;
    }
    ctx->pc = 0x34ACF8u;
    {
        const bool branch_taken_0x34acf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34acf8) {
            ctx->pc = 0x34ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ACF8u;
            // 0x34acfc: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34AD0Cu;
            goto label_34ad0c;
        }
    }
    ctx->pc = 0x34AD00u;
label_34ad00:
    // 0x34ad00: 0xc0c89d4  jal         func_322750
label_34ad04:
    if (ctx->pc == 0x34AD04u) {
        ctx->pc = 0x34AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD00u;
        // 0x34ad04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD08u;
        goto label_34ad08;
    }
    ctx->pc = 0x34AD00u;
    SET_GPR_U32(ctx, 31, 0x34AD08u);
    ctx->pc = 0x34AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD00u;
    // 0x34ad04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x34AD00u, 0x34AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD08u;
label_34ad08:
    // 0x34ad08: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x34ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ad0c:
    // 0x34ad0c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_34ad10:
    // 0x34ad10: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x34ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_34ad14:
    // 0x34ad14: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x34ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_34ad18:
    // 0x34ad18: 0x10000007  b           . + 4 + (0x7 << 2)
label_34ad1c:
    if (ctx->pc == 0x34AD1Cu) {
        ctx->pc = 0x34AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD18u;
        // 0x34ad1c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD20u;
        goto label_34ad20;
    }
    ctx->pc = 0x34AD18u;
    {
        const bool branch_taken_0x34ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD18u;
        // 0x34ad1c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad18) {
            ctx->pc = 0x34AD38u;
            goto label_34ad38;
        }
    }
    ctx->pc = 0x34AD20u;
label_34ad20:
    // 0x34ad20: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x34ad20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34ad24:
    // 0x34ad24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34ad28:
    // 0x34ad28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34ad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34ad2c:
    // 0x34ad2c: 0xc0d2ba6  jal         func_34AE98
label_34ad30:
    if (ctx->pc == 0x34AD30u) {
        ctx->pc = 0x34AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD2Cu;
        // 0x34ad30: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD34u;
        goto label_34ad34;
    }
    ctx->pc = 0x34AD2Cu;
    SET_GPR_U32(ctx, 31, 0x34AD34u);
    ctx->pc = 0x34AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AD2Cu;
    // 0x34ad30: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE98u, 0x34AD2Cu, 0x34AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD34u;
label_34ad34:
    // 0x34ad34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34ad34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ad38:
    // 0x34ad38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_34ad3c:
    // 0x34ad3c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_34ad40:
    // 0x34ad40: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_34ad44:
    // 0x34ad44: 0x2442cc28  addiu       $v0, $v0, -0x33D8
    ctx->pc = 0x34ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954024));
label_34ad48:
    // 0x34ad48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34ad4c:
    // 0x34ad4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_34ad50:
    // 0x34ad50: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x34ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_34ad54:
    // 0x34ad54: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34ad54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_34ad58:
    // 0x34ad58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34ad5c:
    // 0x34ad5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ad60:
    // 0x34ad60: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34ad60u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34ad64:
    // 0x34ad64: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x34ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_34ad68:
    // 0x34ad68: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x34ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_34ad6c:
    // 0x34ad6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_34ad70:
    // 0x34ad70: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x34ad70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_34ad74:
    // 0x34ad74: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x34ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_34ad78:
    // 0x34ad78: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x34ad78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_34ad7c:
    // 0x34ad7c: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x34ad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34ad80:
    // 0x34ad80: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_34ad84:
    if (ctx->pc == 0x34AD84u) {
        ctx->pc = 0x34AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD80u;
        // 0x34ad84: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD88u;
        goto label_34ad88;
    }
    ctx->pc = 0x34AD80u;
    {
        const bool branch_taken_0x34ad80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x34AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD80u;
        // 0x34ad84: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad80) {
            ctx->pc = 0x34AD98u;
            goto label_34ad98;
        }
    }
    ctx->pc = 0x34AD88u;
label_34ad88:
    // 0x34ad88: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34ad8c:
    // 0x34ad8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_34ad90:
    if (ctx->pc == 0x34AD90u) {
        ctx->pc = 0x34AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD8Cu;
        // 0x34ad90: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AD94u;
        goto label_34ad94;
    }
    ctx->pc = 0x34AD8Cu;
    {
        const bool branch_taken_0x34ad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AD8Cu;
        // 0x34ad90: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad8c) {
            ctx->pc = 0x34ADA4u;
            goto label_34ada4;
        }
    }
    ctx->pc = 0x34AD94u;
label_34ad94:
    // 0x34ad94: 0x0  nop
    ctx->pc = 0x34ad94u;
    // NOP
label_34ad98:
    // 0x34ad98: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34ad9c:
    // 0x34ad9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34ada0:
    // 0x34ada0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x34ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_34ada4:
    // 0x34ada4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34ada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34ada8:
    // 0x34ada8: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x34ada8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_34adac:
    // 0x34adac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34adb0:
    // 0x34adb0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34adb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34adb4:
    // 0x34adb4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x34adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_34adb8:
    // 0x34adb8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x34adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_34adbc:
    // 0x34adbc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34adbcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34adc0:
    // 0x34adc0: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x34adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
label_34adc4:
    // 0x34adc4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34adc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34adc8:
    // 0x34adc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34adcc:
    // 0x34adcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34adccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34add0:
    // 0x34add0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x34add0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34add4:
    // 0x34add4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x34add4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34add8:
    // 0x34add8: 0xc0d29f2  jal         func_34A7C8
label_34addc:
    if (ctx->pc == 0x34ADDCu) {
        ctx->pc = 0x34ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADD8u;
        // 0x34addc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34ADE0u;
        goto label_34ade0;
    }
    ctx->pc = 0x34ADD8u;
    SET_GPR_U32(ctx, 31, 0x34ADE0u);
    ctx->pc = 0x34ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADD8u;
    // 0x34addc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A7C8u, 0x34ADD8u, 0x34ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADE0u;
label_34ade0:
    // 0x34ade0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34ade0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34ade4:
    // 0x34ade4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34ade4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34ade8:
    // 0x34ade8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34ade8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34adec:
    // 0x34adec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34adecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34adf0:
    // 0x34adf0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34adf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34adf4:
    // 0x34adf4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34adf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34adf8:
    // 0x34adf8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34adf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34adfc:
    // 0x34adfc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34adfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34ae00:
    // 0x34ae00: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34ae00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34ae04:
    // 0x34ae04: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34ae08:
    // 0x34ae08: 0x3e00008  jr          $ra
label_34ae0c:
    if (ctx->pc == 0x34AE0Cu) {
        ctx->pc = 0x34AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE08u;
        // 0x34ae0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34AE10u;
        goto label_fallthrough_0x34ae08;
    }
    ctx->pc = 0x34AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE08u;
        // 0x34ae0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34ae08:
    ctx->pc = 0x34AE10u;
}
