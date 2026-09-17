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

// Function: sub_0033AD08
// Address: 0x33ad08 - 0x33aed0
void sub_0033AD08_0x33ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AD08_0x33ad08");
#endif

    switch (ctx->pc) {
        case 0x33ad08u: goto label_33ad08;
        case 0x33ad0cu: goto label_33ad0c;
        case 0x33ad10u: goto label_33ad10;
        case 0x33ad14u: goto label_33ad14;
        case 0x33ad18u: goto label_33ad18;
        case 0x33ad1cu: goto label_33ad1c;
        case 0x33ad20u: goto label_33ad20;
        case 0x33ad24u: goto label_33ad24;
        case 0x33ad28u: goto label_33ad28;
        case 0x33ad2cu: goto label_33ad2c;
        case 0x33ad30u: goto label_33ad30;
        case 0x33ad34u: goto label_33ad34;
        case 0x33ad38u: goto label_33ad38;
        case 0x33ad3cu: goto label_33ad3c;
        case 0x33ad40u: goto label_33ad40;
        case 0x33ad44u: goto label_33ad44;
        case 0x33ad48u: goto label_33ad48;
        case 0x33ad4cu: goto label_33ad4c;
        case 0x33ad50u: goto label_33ad50;
        case 0x33ad54u: goto label_33ad54;
        case 0x33ad58u: goto label_33ad58;
        case 0x33ad5cu: goto label_33ad5c;
        case 0x33ad60u: goto label_33ad60;
        case 0x33ad64u: goto label_33ad64;
        case 0x33ad68u: goto label_33ad68;
        case 0x33ad6cu: goto label_33ad6c;
        case 0x33ad70u: goto label_33ad70;
        case 0x33ad74u: goto label_33ad74;
        case 0x33ad78u: goto label_33ad78;
        case 0x33ad7cu: goto label_33ad7c;
        case 0x33ad80u: goto label_33ad80;
        case 0x33ad84u: goto label_33ad84;
        case 0x33ad88u: goto label_33ad88;
        case 0x33ad8cu: goto label_33ad8c;
        case 0x33ad90u: goto label_33ad90;
        case 0x33ad94u: goto label_33ad94;
        case 0x33ad98u: goto label_33ad98;
        case 0x33ad9cu: goto label_33ad9c;
        case 0x33ada0u: goto label_33ada0;
        case 0x33ada4u: goto label_33ada4;
        case 0x33ada8u: goto label_33ada8;
        case 0x33adacu: goto label_33adac;
        case 0x33adb0u: goto label_33adb0;
        case 0x33adb4u: goto label_33adb4;
        case 0x33adb8u: goto label_33adb8;
        case 0x33adbcu: goto label_33adbc;
        case 0x33adc0u: goto label_33adc0;
        case 0x33adc4u: goto label_33adc4;
        case 0x33adc8u: goto label_33adc8;
        case 0x33adccu: goto label_33adcc;
        case 0x33add0u: goto label_33add0;
        case 0x33add4u: goto label_33add4;
        case 0x33add8u: goto label_33add8;
        case 0x33addcu: goto label_33addc;
        case 0x33ade0u: goto label_33ade0;
        case 0x33ade4u: goto label_33ade4;
        case 0x33ade8u: goto label_33ade8;
        case 0x33adecu: goto label_33adec;
        case 0x33adf0u: goto label_33adf0;
        case 0x33adf4u: goto label_33adf4;
        case 0x33adf8u: goto label_33adf8;
        case 0x33adfcu: goto label_33adfc;
        case 0x33ae00u: goto label_33ae00;
        case 0x33ae04u: goto label_33ae04;
        case 0x33ae08u: goto label_33ae08;
        case 0x33ae0cu: goto label_33ae0c;
        case 0x33ae10u: goto label_33ae10;
        case 0x33ae14u: goto label_33ae14;
        case 0x33ae18u: goto label_33ae18;
        case 0x33ae1cu: goto label_33ae1c;
        case 0x33ae20u: goto label_33ae20;
        case 0x33ae24u: goto label_33ae24;
        case 0x33ae28u: goto label_33ae28;
        case 0x33ae2cu: goto label_33ae2c;
        case 0x33ae30u: goto label_33ae30;
        case 0x33ae34u: goto label_33ae34;
        case 0x33ae38u: goto label_33ae38;
        case 0x33ae3cu: goto label_33ae3c;
        case 0x33ae40u: goto label_33ae40;
        case 0x33ae44u: goto label_33ae44;
        case 0x33ae48u: goto label_33ae48;
        case 0x33ae4cu: goto label_33ae4c;
        case 0x33ae50u: goto label_33ae50;
        case 0x33ae54u: goto label_33ae54;
        case 0x33ae58u: goto label_33ae58;
        case 0x33ae5cu: goto label_33ae5c;
        case 0x33ae60u: goto label_33ae60;
        case 0x33ae64u: goto label_33ae64;
        case 0x33ae68u: goto label_33ae68;
        case 0x33ae6cu: goto label_33ae6c;
        case 0x33ae70u: goto label_33ae70;
        case 0x33ae74u: goto label_33ae74;
        case 0x33ae78u: goto label_33ae78;
        case 0x33ae7cu: goto label_33ae7c;
        case 0x33ae80u: goto label_33ae80;
        case 0x33ae84u: goto label_33ae84;
        case 0x33ae88u: goto label_33ae88;
        case 0x33ae8cu: goto label_33ae8c;
        case 0x33ae90u: goto label_33ae90;
        case 0x33ae94u: goto label_33ae94;
        case 0x33ae98u: goto label_33ae98;
        case 0x33ae9cu: goto label_33ae9c;
        case 0x33aea0u: goto label_33aea0;
        case 0x33aea4u: goto label_33aea4;
        case 0x33aea8u: goto label_33aea8;
        case 0x33aeacu: goto label_33aeac;
        case 0x33aeb0u: goto label_33aeb0;
        case 0x33aeb4u: goto label_33aeb4;
        case 0x33aeb8u: goto label_33aeb8;
        case 0x33aebcu: goto label_33aebc;
        case 0x33aec0u: goto label_33aec0;
        case 0x33aec4u: goto label_33aec4;
        case 0x33aec8u: goto label_33aec8;
        case 0x33aeccu: goto label_33aecc;
        default: break;
    }

    ctx->pc = 0x33ad08u;

label_33ad08:
    // 0x33ad08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_33ad0c:
    // 0x33ad0c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x33ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_33ad10:
    // 0x33ad10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33ad10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ad14:
    // 0x33ad14: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x33ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_33ad18:
    // 0x33ad18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x33ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_33ad1c:
    // 0x33ad1c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x33ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_33ad20:
    // 0x33ad20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x33ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_33ad24:
    // 0x33ad24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33ad28:
    // 0x33ad28: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x33ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33ad2c:
    // 0x33ad2c: 0xc0cb06e  jal         func_32C1B8
label_33ad30:
    if (ctx->pc == 0x33AD30u) {
        ctx->pc = 0x33AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD2Cu;
        // 0x33ad30: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD34u;
        goto label_33ad34;
    }
    ctx->pc = 0x33AD2Cu;
    SET_GPR_U32(ctx, 31, 0x33AD34u);
    ctx->pc = 0x33AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AD2Cu;
    // 0x33ad30: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C1B8u, 0x33AD2Cu, 0x33AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD34u;
label_33ad34:
    // 0x33ad34: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x33ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_33ad38:
    // 0x33ad38: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x33ad38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33ad3c:
    // 0x33ad3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33ad40:
    // 0x33ad40: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x33ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_33ad44:
    // 0x33ad44: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x33ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_33ad48:
    // 0x33ad48: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x33ad48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33ad4c:
    // 0x33ad4c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_33ad50:
    // 0x33ad50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33ad54:
    // 0x33ad54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33ad58:
    // 0x33ad58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x33ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_33ad5c:
    // 0x33ad5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33ad60:
    // 0x33ad60: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_33ad64:
    // 0x33ad64: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ad68:
    // 0x33ad68: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x33ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33ad6c:
    // 0x33ad6c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x33ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33ad70:
    // 0x33ad70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33ad74:
    // 0x33ad74: 0x1446000e  bne         $v0, $a2, . + 4 + (0xE << 2)
label_33ad78:
    if (ctx->pc == 0x33AD78u) {
        ctx->pc = 0x33AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD74u;
        // 0x33ad78: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AD7Cu;
        goto label_33ad7c;
    }
    ctx->pc = 0x33AD74u;
    {
        const bool branch_taken_0x33ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x33AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD74u;
        // 0x33ad78: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad74) {
            ctx->pc = 0x33ADB0u;
            goto label_33adb0;
        }
    }
    ctx->pc = 0x33AD7Cu;
label_33ad7c:
    // 0x33ad7c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33ad80:
    // 0x33ad80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33ad84:
    // 0x33ad84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33ad88:
    // 0x33ad88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33ad8c:
    // 0x33ad8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33ad90:
    // 0x33ad90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33ad94:
    // 0x33ad94: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x33ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33ad98:
    // 0x33ad98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x33ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33ad9c:
    // 0x33ad9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ada0:
    // 0x33ada0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x33ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_33ada4:
    // 0x33ada4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x33ada4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33ada8:
    // 0x33ada8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33adac:
    // 0x33adac: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33adacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_33adb0:
    // 0x33adb0: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x33adb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_33adb4:
    // 0x33adb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33adb8:
    // 0x33adb8: 0x8cd10008  lw          $s1, 0x8($a2)
    ctx->pc = 0x33adb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33adbc:
    // 0x33adbc: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x33adbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_33adc0:
    // 0x33adc0: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x33adc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_33adc4:
    // 0x33adc4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x33adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_33adc8:
    // 0x33adc8: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_33adcc:
    // 0x33adcc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x33adccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33add0:
    // 0x33add0: 0x8cd0000c  lw          $s0, 0xC($a2)
    ctx->pc = 0x33add0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33add4:
    // 0x33add4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_33add8:
    if (ctx->pc == 0x33ADD8u) {
        ctx->pc = 0x33ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADD4u;
        // 0x33add8: 0x42102  srl         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADDCu;
        goto label_33addc;
    }
    ctx->pc = 0x33ADD4u;
    {
        const bool branch_taken_0x33add4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADD4u;
        // 0x33add8: 0x42102  srl         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33add4) {
            ctx->pc = 0x33AE10u;
            goto label_33ae10;
        }
    }
    ctx->pc = 0x33ADDCu;
label_33addc:
    // 0x33addc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x33addcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33ade0:
    // 0x33ade0: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_33ade4:
    if (ctx->pc == 0x33ADE4u) {
        ctx->pc = 0x33ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADE0u;
        // 0x33ade4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ADE8u;
        goto label_33ade8;
    }
    ctx->pc = 0x33ADE0u;
    {
        const bool branch_taken_0x33ade0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADE0u;
        // 0x33ade4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ade0) {
            ctx->pc = 0x33AE48u;
            goto label_33ae48;
        }
    }
    ctx->pc = 0x33ADE8u;
label_33ade8:
    // 0x33ade8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33ade8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_33adec:
    // 0x33adec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33adf0:
    // 0x33adf0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_33adf4:
    // 0x33adf4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_33adf8:
    // 0x33adf8: 0x0  nop
    ctx->pc = 0x33adf8u;
    // NOP
label_33adfc:
    // 0x33adfc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_33ae00:
    if (ctx->pc == 0x33AE00u) {
        ctx->pc = 0x33AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADFCu;
        // 0x33ae00: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE04u;
        goto label_33ae04;
    }
    ctx->pc = 0x33ADFCu;
    {
        const bool branch_taken_0x33adfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADFCu;
        // 0x33ae00: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33adfc) {
            ctx->pc = 0x33ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ade8;
        }
    }
    ctx->pc = 0x33AE04u;
label_33ae04:
    // 0x33ae04: 0x10000010  b           . + 4 + (0x10 << 2)
label_33ae08:
    if (ctx->pc == 0x33AE08u) {
        ctx->pc = 0x33AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE04u;
        // 0x33ae08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE0Cu;
        goto label_33ae0c;
    }
    ctx->pc = 0x33AE04u;
    {
        const bool branch_taken_0x33ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE04u;
        // 0x33ae08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae04) {
            ctx->pc = 0x33AE48u;
            goto label_33ae48;
        }
    }
    ctx->pc = 0x33AE0Cu;
label_33ae0c:
    // 0x33ae0c: 0x0  nop
    ctx->pc = 0x33ae0cu;
    // NOP
label_33ae10:
    // 0x33ae10: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x33ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_33ae14:
    // 0x33ae14: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x33ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_33ae18:
    // 0x33ae18: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_33ae1c:
    // 0x33ae1c: 0x2446fff0  addiu       $a2, $v0, -0x10
    ctx->pc = 0x33ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_33ae20:
    // 0x33ae20: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_33ae24:
    if (ctx->pc == 0x33AE24u) {
        ctx->pc = 0x33AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE20u;
        // 0x33ae24: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE28u;
        goto label_33ae28;
    }
    ctx->pc = 0x33AE20u;
    {
        const bool branch_taken_0x33ae20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE20u;
        // 0x33ae24: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae20) {
            ctx->pc = 0x33AE48u;
            goto label_33ae48;
        }
    }
    ctx->pc = 0x33AE28u;
label_33ae28:
    // 0x33ae28: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33ae28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_33ae2c:
    // 0x33ae2c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_33ae30:
    // 0x33ae30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_33ae34:
    // 0x33ae34: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_33ae38:
    // 0x33ae38: 0x0  nop
    ctx->pc = 0x33ae38u;
    // NOP
label_33ae3c:
    // 0x33ae3c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_33ae40:
    if (ctx->pc == 0x33AE40u) {
        ctx->pc = 0x33AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE3Cu;
        // 0x33ae40: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE44u;
        goto label_33ae44;
    }
    ctx->pc = 0x33AE3Cu;
    {
        const bool branch_taken_0x33ae3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE3Cu;
        // 0x33ae40: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae3c) {
            ctx->pc = 0x33AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ae28;
        }
    }
    ctx->pc = 0x33AE44u;
label_33ae44:
    // 0x33ae44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ae48:
    // 0x33ae48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33ae4c:
    // 0x33ae4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_33ae50:
    // 0x33ae50: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33ae54:
    // 0x33ae54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33ae54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33ae58:
    // 0x33ae58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33ae5c:
    // 0x33ae5c: 0x60f809  jalr        $v1
label_33ae60:
    if (ctx->pc == 0x33AE60u) {
        ctx->pc = 0x33AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE5Cu;
        // 0x33ae60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AE64u;
        goto label_33ae64;
    }
    ctx->pc = 0x33AE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33AE64u);
        ctx->pc = 0x33AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE5Cu;
        // 0x33ae60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AE5Cu, 0x33AE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AE64u;
label_33ae64:
    // 0x33ae64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33ae68:
    // 0x33ae68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ae6c:
    // 0x33ae6c: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x33ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_33ae70:
    // 0x33ae70: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33ae74:
    // 0x33ae74: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x33ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33ae78:
    // 0x33ae78: 0x1111821  addu        $v1, $t0, $s1
    ctx->pc = 0x33ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_33ae7c:
    // 0x33ae7c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x33ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33ae80:
    // 0x33ae80: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x33ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_33ae84:
    // 0x33ae84: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33ae88:
    // 0x33ae88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x33ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_33ae8c:
    // 0x33ae8c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x33ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33ae90:
    // 0x33ae90: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_33ae94:
    // 0x33ae94: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x33ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_33ae98:
    // 0x33ae98: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x33ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_33ae9c:
    // 0x33ae9c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x33ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_33aea0:
    // 0x33aea0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x33aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_33aea4:
    // 0x33aea4: 0xad110008  sw          $s1, 0x8($t0)
    ctx->pc = 0x33aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 17));
label_33aea8:
    // 0x33aea8: 0xc0cb0da  jal         func_32C368
label_33aeac:
    if (ctx->pc == 0x33AEACu) {
        ctx->pc = 0x33AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEA8u;
        // 0x33aeac: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AEB0u;
        goto label_33aeb0;
    }
    ctx->pc = 0x33AEA8u;
    SET_GPR_U32(ctx, 31, 0x33AEB0u);
    ctx->pc = 0x33AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEA8u;
    // 0x33aeac: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C368u, 0x33AEA8u, 0x33AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEB0u;
label_33aeb0:
    // 0x33aeb0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x33aeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33aeb4:
    // 0x33aeb4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x33aeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33aeb8:
    // 0x33aeb8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x33aeb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33aebc:
    // 0x33aebc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x33aebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_33aec0:
    // 0x33aec0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x33aec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_33aec4:
    // 0x33aec4: 0x3e00008  jr          $ra
label_33aec8:
    if (ctx->pc == 0x33AEC8u) {
        ctx->pc = 0x33AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEC4u;
        // 0x33aec8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AECCu;
        goto label_33aecc;
    }
    ctx->pc = 0x33AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEC4u;
        // 0x33aec8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AECCu;
label_33aecc:
    // 0x33aecc: 0x0  nop
    ctx->pc = 0x33aeccu;
    // NOP
    ctx->pc = 0x33aed0u;
}
