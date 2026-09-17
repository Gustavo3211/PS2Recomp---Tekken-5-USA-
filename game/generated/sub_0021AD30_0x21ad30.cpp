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

// Function: sub_0021AD30
// Address: 0x21ad30 - 0x21af28
void sub_0021AD30_0x21ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AD30_0x21ad30");
#endif

    switch (ctx->pc) {
        case 0x21ada8u: goto label_21ada8;
        case 0x21ade8u: goto label_21ade8;
        case 0x21ae30u: goto label_21ae30;
        case 0x21ae50u: goto label_21ae50;
        case 0x21ae84u: goto label_21ae84;
        default: break;
    }

    ctx->pc = 0x21ad30u;

    // 0x21ad30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x21ad34: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x21ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x21ad38: 0x2492004c  addiu       $s2, $a0, 0x4C
    ctx->pc = 0x21ad38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x21ad3c: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x21ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x21ad40: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x21ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x21ad44: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x21ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x21ad48: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x21ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x21ad4c: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x21ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x21ad50: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x21ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ad54: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AD54u;
    {
        const bool branch_taken_0x21ad54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD54u;
        // 0x21ad58: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad54) {
            ctx->pc = 0x21AD78u;
            goto label_21ad78;
        }
    }
    ctx->pc = 0x21AD5Cu;
    // 0x21ad5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ad60: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AD60u;
    {
        const bool branch_taken_0x21ad60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD60u;
        // 0x21ad64: 0x28a30008  slti        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad60) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21AD68u;
    // 0x21ad68: 0x2492004c  addiu       $s2, $a0, 0x4C
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x21ad6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AD6Cu;
    {
        const bool branch_taken_0x21ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD6Cu;
        // 0x21ad70: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad6c) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21AD74u;
    // 0x21ad74: 0x0  nop
    ctx->pc = 0x21ad74u;
    // NOP
label_21ad78:
    // 0x21ad78: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x21ad78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_21ad7c:
    // 0x21ad7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x21ad80: 0x3442bfff  ori         $v0, $v0, 0xBFFF
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49151);
    // 0x21ad84: 0x24061eff  addiu       $a2, $zero, 0x1EFF
    ctx->pc = 0x21ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
    // 0x21ad88: 0x26530004  addiu       $s3, $s2, 0x4
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21ad8c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x21ad8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x21ad90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad98: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21ad9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21ad9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ada0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21ada4: 0x0  nop
    ctx->pc = 0x21ada4u;
    // NOP
label_21ada8:
    // 0x21ada8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ada8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21adac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21adb0: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x21adb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21adb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21adb8: 0x10a80003  beq         $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ADB8u;
    {
        const bool branch_taken_0x21adb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x21ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADB8u;
        // 0x21adbc: 0xa71004  sllv        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adb8) {
            ctx->pc = 0x21ADC8u;
            goto label_21adc8;
        }
    }
    ctx->pc = 0x21ADC0u;
    // 0x21adc0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21adc0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21adc4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x21adc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_21adc8:
    // 0x21adc8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21ADC8u;
    {
        const bool branch_taken_0x21adc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADC8u;
        // 0x21adcc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adc8) {
            ctx->pc = 0x21ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ada8;
        }
    }
    ctx->pc = 0x21ADD0u;
    // 0x21add0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21add4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21add4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21add8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21add8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21addc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21addcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ade0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ade4: 0xa81004  sllv        $v0, $t0, $a1
    ctx->pc = 0x21ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
label_21ade8:
    // 0x21ade8: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x21ade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x21adec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21ADECu;
    {
        const bool branch_taken_0x21adec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADECu;
        // 0x21adf0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21adec) {
            ctx->pc = 0x21AE0Cu;
            goto label_21ae0c;
        }
    }
    ctx->pc = 0x21ADF4u;
    // 0x21adf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21adf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21adf8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x21adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21adfc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x21adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21ae00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x21ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x21ae04: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x21ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x21ae08: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21ae0c:
    // 0x21ae0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ae10: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x21ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21ae14: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x21AE14u;
    {
        const bool branch_taken_0x21ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae14) {
            ctx->pc = 0x21AE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AE14u;
            // 0x21ae18: 0xa81004  sllv        $v0, $t0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ade8;
        }
    }
    ctx->pc = 0x21AE1Cu;
    // 0x21ae1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21ae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ae28: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x21AE28u;
    SET_GPR_U32(ctx, 31, 0x21AE30u);
    ctx->pc = 0x21AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE28u;
    // 0x21ae2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x21AE28u, 0x21AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE30u;
label_21ae30:
    // 0x21ae30: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21ae34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae38: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x21AE38u;
    {
        const bool branch_taken_0x21ae38 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x21AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE38u;
        // 0x21ae3c: 0x541821  addu        $v1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae38) {
            ctx->pc = 0x21AE74u;
            goto label_21ae74;
        }
    }
    ctx->pc = 0x21AE40u;
    // 0x21ae40: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x21ae40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21ae44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AE44u;
    {
        const bool branch_taken_0x21ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae44) {
            ctx->pc = 0x21AE74u;
            goto label_21ae74;
        }
    }
    ctx->pc = 0x21AE4Cu;
    // 0x21ae4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ae4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ae50:
    // 0x21ae50: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x21ae50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21ae54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AE54u;
    {
        const bool branch_taken_0x21ae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE54u;
        // 0x21ae58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae54) {
            ctx->pc = 0x21AE74u;
            goto label_21ae74;
        }
    }
    ctx->pc = 0x21AE5Cu;
    // 0x21ae5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21ae60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x21ae60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21ae64: 0x0  nop
    ctx->pc = 0x21ae64u;
    // NOP
    // 0x21ae68: 0x0  nop
    ctx->pc = 0x21ae68u;
    // NOP
    // 0x21ae6c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21AE6Cu;
    {
        const bool branch_taken_0x21ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae6c) {
            ctx->pc = 0x21AE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AE6Cu;
            // 0x21ae70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ae50;
        }
    }
    ctx->pc = 0x21AE74u;
label_21ae74:
    // 0x21ae74: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21AE74u;
    {
        const bool branch_taken_0x21ae74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE74u;
        // 0x21ae78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae74) {
            ctx->pc = 0x21AEBCu;
            goto label_21aebc;
        }
    }
    ctx->pc = 0x21AE7Cu;
    // 0x21ae7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21AE7Cu;
    SET_GPR_U32(ctx, 31, 0x21AE84u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21AE7Cu, 0x21AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE84u;
label_21ae84:
    // 0x21ae84: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21ae88: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x21ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x21ae8c: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x21ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21ae90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21ae94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21ae98: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21ae9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21aea0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21aea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21aea4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21aea8: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x21aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x21aeac: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21aeb0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21aeb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21aeb4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21aeb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21aeb8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21aebc:
    // 0x21aebc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21aec0: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x21aec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21aec4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21aec8: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x21aec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21aecc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x21aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21aed0: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x21aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21aed4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x21aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21aed8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21aed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aedc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21aee0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x21aee4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21aee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aeec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21aef0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x21aef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21aef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21aef8: 0x2a040004  slti        $a0, $s0, 0x4
    ctx->pc = 0x21aef8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21aefc: 0x4800a  movz        $s0, $zero, $a0
    ctx->pc = 0x21aefcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x21af00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21af04: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x21af04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x21af08: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x21af0c: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x21af0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21af10: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x21af10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21af14: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x21af14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21af18: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21af18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF1Cu;
        // 0x21af20: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AF24u;
    // 0x21af24: 0x0  nop
    ctx->pc = 0x21af24u;
    // NOP
    ctx->pc = 0x21af28u;
}
