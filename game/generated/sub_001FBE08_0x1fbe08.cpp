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

// Function: sub_001FBE08
// Address: 0x1fbe08 - 0x1fc2f0
void sub_001FBE08_0x1fbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE08_0x1fbe08");
#endif

    switch (ctx->pc) {
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfb8u: goto label_1fbfb8;
        default: break;
    }

    ctx->pc = 0x1fbe08u;

    // 0x1fbe08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbe0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbe10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fbe10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fbe18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbe18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fbe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fbe20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fbe24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fbe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fbe28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fbe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fbe2c: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x1fbe2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
    // 0x1fbe30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FBE30u;
    {
        const bool branch_taken_0x1fbe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE30u;
        // 0x1fbe34: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe30) {
            ctx->pc = 0x1FBE64u;
            goto label_1fbe64;
        }
    }
    ctx->pc = 0x1FBE38u;
    // 0x1fbe38: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x1fbe38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1fbe3c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBE3Cu;
    {
        const bool branch_taken_0x1fbe3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE3Cu;
        // 0x1fbe40: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe3c) {
            ctx->pc = 0x1FBE58u;
            goto label_1fbe58;
        }
    }
    ctx->pc = 0x1FBE44u;
    // 0x1fbe44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbe48: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x1fbe48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x1fbe4c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbe50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBE50u;
    {
        const bool branch_taken_0x1fbe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE50u;
        // 0x1fbe54: 0xac64009c  sw          $a0, 0x9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe50) {
            ctx->pc = 0x1FBE64u;
            goto label_1fbe64;
        }
    }
    ctx->pc = 0x1FBE58u;
label_1fbe58:
    // 0x1fbe58: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1fbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x1fbe5c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbe60: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x1fbe60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
label_1fbe64:
    // 0x1fbe64: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x1fbe64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1fbe68: 0x96230158  lhu         $v1, 0x158($s1)
    ctx->pc = 0x1fbe68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1fbe6c: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x1fbe6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1fbe70: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBE70u;
    {
        const bool branch_taken_0x1fbe70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fbe70) {
            ctx->pc = 0x1FBE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBE70u;
            // 0x1fbe74: 0x92230190  lbu         $v1, 0x190($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBE9Cu;
            goto label_1fbe9c;
        }
    }
    ctx->pc = 0x1FBE78u;
    // 0x1fbe78: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1fbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1fbe7c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fbe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fbe80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbe84: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1fbe84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1fbe88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fbe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fbe8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fbe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fbe90: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FBE90u;
    {
        const bool branch_taken_0x1fbe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbe90) {
            ctx->pc = 0x1FBE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBE90u;
            // 0x1fbe94: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBEF4u;
            goto label_1fbef4;
        }
    }
    ctx->pc = 0x1FBE98u;
    // 0x1fbe98: 0x92230190  lbu         $v1, 0x190($s1)
    ctx->pc = 0x1fbe98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
label_1fbe9c:
    // 0x1fbe9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbea0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBEA0u;
    {
        const bool branch_taken_0x1fbea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fbea0) {
            ctx->pc = 0x1FBEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBEA0u;
            // 0x1fbea4: 0x9202020c  lbu         $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBEB8u;
            goto label_1fbeb8;
        }
    }
    ctx->pc = 0x1FBEA8u;
    // 0x1fbea8: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x1fbea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
    // 0x1fbeac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FBEACu;
    {
        const bool branch_taken_0x1fbeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbeac) {
            ctx->pc = 0x1FBEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBEACu;
            // 0x1fbeb0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBEF4u;
            goto label_1fbef4;
        }
    }
    ctx->pc = 0x1FBEB4u;
    // 0x1fbeb4: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x1fbeb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
label_1fbeb8:
    // 0x1fbeb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBEB8u;
    {
        const bool branch_taken_0x1fbeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbeb8) {
            ctx->pc = 0x1FBEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBEB8u;
            // 0x1fbebc: 0x8cc2003c  lw          $v0, 0x3C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBED4u;
            goto label_1fbed4;
        }
    }
    ctx->pc = 0x1FBEC0u;
    // 0x1fbec0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x1fbec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fbec4: 0x86030182  lh          $v1, 0x182($s0)
    ctx->pc = 0x1fbec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x1fbec8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fbec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fbecc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FBECCu;
    {
        const bool branch_taken_0x1fbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBECCu;
        // 0x1fbed0: 0x8cc2003c  lw          $v0, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbecc) {
            ctx->pc = 0x1FBF18u;
            goto label_1fbf18;
        }
    }
    ctx->pc = 0x1FBED4u;
label_1fbed4:
    // 0x1fbed4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fbed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fbed8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbedc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1fbedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1fbee0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fbee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fbee4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fbee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fbee8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FBEE8u;
    {
        const bool branch_taken_0x1fbee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEE8u;
        // 0x1fbeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbee8) {
            ctx->pc = 0x1FBF9Cu;
            goto label_1fbf9c;
        }
    }
    ctx->pc = 0x1FBEF0u;
    // 0x1fbef0: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1fbef4:
    // 0x1fbef4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fbef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbefc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1fbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1fbf00: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fbf04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fbf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fbf08: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fbf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fbf0c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FBF0Cu;
    {
        const bool branch_taken_0x1fbf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF0Cu;
        // 0x1fbf10: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf0c) {
            ctx->pc = 0x1FBFC8u;
            goto label_1fbfc8;
        }
    }
    ctx->pc = 0x1FBF14u;
    // 0x1fbf14: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1fbf18:
    // 0x1fbf18: 0x3c120fff  lui         $s2, 0xFFF
    ctx->pc = 0x1fbf18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4095 << 16));
    // 0x1fbf1c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1fbf1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x1fbf20: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x1fbf20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    // 0x1fbf24: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1fbf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1fbf28: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1fbf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1fbf2c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FBF2Cu;
    {
        const bool branch_taken_0x1fbf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF2Cu;
        // 0x1fbf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf2c) {
            ctx->pc = 0x1FBF9Cu;
            goto label_1fbf9c;
        }
    }
    ctx->pc = 0x1FBF34u;
    // 0x1fbf34: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBF34u;
    SET_GPR_U32(ctx, 31, 0x1FBF3Cu);
    ctx->pc = 0x1FBF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF34u;
    // 0x1fbf38: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBF34u, 0x1FBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF3Cu;
label_1fbf3c:
    // 0x1fbf3c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbf40: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBF40u;
    {
        const bool branch_taken_0x1fbf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF40u;
        // 0x1fbf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf40) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF48u;
    // 0x1fbf48: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBF48u;
    SET_GPR_U32(ctx, 31, 0x1FBF50u);
    ctx->pc = 0x1FBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF48u;
    // 0x1fbf4c: 0x34058002  ori         $a1, $zero, 0x8002 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBF48u, 0x1FBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF50u;
label_1fbf50:
    // 0x1fbf50: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbf54: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FBF54u;
    {
        const bool branch_taken_0x1fbf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF54u;
        // 0x1fbf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf54) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF5Cu;
    // 0x1fbf5c: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBF64u);
    ctx->pc = 0x1FBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF5Cu;
    // 0x1fbf60: 0x34058004  ori         $a1, $zero, 0x8004 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBF5Cu, 0x1FBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF64u;
label_1fbf64:
    // 0x1fbf64: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbf68: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FBF68u;
    {
        const bool branch_taken_0x1fbf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF68u;
        // 0x1fbf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf68) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF70u;
    // 0x1fbf70: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBF70u;
    SET_GPR_U32(ctx, 31, 0x1FBF78u);
    ctx->pc = 0x1FBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF70u;
    // 0x1fbf74: 0x34058009  ori         $a1, $zero, 0x8009 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBF70u, 0x1FBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF78u;
label_1fbf78:
    // 0x1fbf78: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbf7c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FBF7Cu;
    {
        const bool branch_taken_0x1fbf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF7Cu;
        // 0x1fbf80: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf7c) {
            ctx->pc = 0x1FBFC8u;
            goto label_1fbfc8;
        }
    }
    ctx->pc = 0x1FBF84u;
    // 0x1fbf84: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1fbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1fbf88: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fbf8c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1fbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1fbf90: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1fbf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1fbf94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FBF94u;
    {
        const bool branch_taken_0x1fbf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF94u;
        // 0x1fbf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf94) {
            ctx->pc = 0x1FBFD4u;
            goto label_1fbfd4;
        }
    }
    ctx->pc = 0x1FBF9Cu;
label_1fbf9c:
    // 0x1fbf9c: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FBFA4u);
    ctx->pc = 0x1FBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF9Cu;
    // 0x1fbfa0: 0x34058007  ori         $a1, $zero, 0x8007 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBF9Cu, 0x1FBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFA4u;
label_1fbfa4:
    // 0x1fbfa4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbfa8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBFA8u;
    {
        const bool branch_taken_0x1fbfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFA8u;
        // 0x1fbfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfa8) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBFB0u;
    // 0x1fbfb0: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FBFB0u;
    SET_GPR_U32(ctx, 31, 0x1FBFB8u);
    ctx->pc = 0x1FBFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFB0u;
    // 0x1fbfb4: 0x3405800a  ori         $a1, $zero, 0x800A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FBFB0u, 0x1FBFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFB8u;
label_1fbfb8:
    // 0x1fbfb8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fbfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fbfbc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBFBCu;
    {
        const bool branch_taken_0x1fbfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fbfbc) {
            ctx->pc = 0x1FBFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBFBCu;
            // 0x1fbfc0: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBFD8u;
            goto label_1fbfd8;
        }
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbfc8:
    // 0x1fbfc8: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x1fbfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x1fbfcc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbfd0: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x1fbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
label_1fbfd4:
    // 0x1fbfd4: 0x922201f0  lbu         $v0, 0x1F0($s1)
    ctx->pc = 0x1fbfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
label_1fbfd8:
    // 0x1fbfd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBFD8u;
    {
        const bool branch_taken_0x1fbfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFD8u;
        // 0x1fbfdc: 0x8f8397c8  lw          $v1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfd8) {
            ctx->pc = 0x1FBFE8u;
            goto label_1fbfe8;
        }
    }
    ctx->pc = 0x1FBFE0u;
    // 0x1fbfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbfe4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x1fbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_1fbfe8:
    // 0x1fbfe8: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbfec: 0x920301ef  lbu         $v1, 0x1EF($s0)
    ctx->pc = 0x1fbfecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
    // 0x1fbff0: 0x8cc20088  lw          $v0, 0x88($a2)
    ctx->pc = 0x1fbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x1fbff4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fbff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbff8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBFF8u;
    {
        const bool branch_taken_0x1fbff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFF8u;
        // 0x1fbffc: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbff8) {
            ctx->pc = 0x1FC01Cu;
            goto label_1fc01c;
        }
    }
    ctx->pc = 0x1FC000u;
    // 0x1fc000: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x1fc000u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1fc004: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1fc004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1fc008: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x1fc008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x1fc00c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc010: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fc010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fc014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC014u;
    {
        const bool branch_taken_0x1fc014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc014) {
            ctx->pc = 0x1FC034u;
            goto label_1fc034;
        }
    }
    ctx->pc = 0x1FC01Cu;
label_1fc01c:
    // 0x1fc01c: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x1fc01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1fc020: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC020u;
    {
        const bool branch_taken_0x1fc020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc020) {
            ctx->pc = 0x1FC034u;
            goto label_1fc034;
        }
    }
    ctx->pc = 0x1FC028u;
    // 0x1fc028: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x1fc028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fc02c: 0x86020182  lh          $v0, 0x182($s0)
    ctx->pc = 0x1fc02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x1fc030: 0x62a02a  slt         $s4, $v1, $v0
    ctx->pc = 0x1fc030u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fc034:
    // 0x1fc034: 0x55000004  bnel        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC034u;
    {
        const bool branch_taken_0x1fc034 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc034) {
            ctx->pc = 0x1FC038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC034u;
            // 0x1fc038: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC048u;
            goto label_1fc048;
        }
    }
    ctx->pc = 0x1FC03Cu;
    // 0x1fc03c: 0x52800026  beql        $s4, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC03Cu;
    {
        const bool branch_taken_0x1fc03c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc03c) {
            ctx->pc = 0x1FC040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC03Cu;
            // 0x1fc040: 0x86230148  lh          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC0D8u;
            goto label_1fc0d8;
        }
    }
    ctx->pc = 0x1FC044u;
    // 0x1fc044: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fc044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fc048:
    // 0x1fc048: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC048u;
    {
        const bool branch_taken_0x1fc048 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fc048) {
            ctx->pc = 0x1FC04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC048u;
            // 0x1fc04c: 0x920201ee  lbu         $v0, 0x1EE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC060u;
            goto label_1fc060;
        }
    }
    ctx->pc = 0x1FC050u;
    // 0x1fc050: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x1fc050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
    // 0x1fc054: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1FC054u;
    {
        const bool branch_taken_0x1fc054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc054) {
            ctx->pc = 0x1FC058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC054u;
            // 0x1fc058: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC134u;
            goto label_1fc134;
        }
    }
    ctx->pc = 0x1FC05Cu;
    // 0x1fc05c: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x1fc05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
label_1fc060:
    // 0x1fc060: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1FC060u;
    {
        const bool branch_taken_0x1fc060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc060) {
            ctx->pc = 0x1FC064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC060u;
            // 0x1fc064: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC134u;
            goto label_1fc134;
        }
    }
    ctx->pc = 0x1FC068u;
    // 0x1fc068: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x1fc068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc06c: 0x4430016  bgezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC06Cu;
    {
        const bool branch_taken_0x1fc06c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fc06c) {
            ctx->pc = 0x1FC070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC06Cu;
            // 0x1fc070: 0x8ce20080  lw          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC0C8u;
            goto label_1fc0c8;
        }
    }
    ctx->pc = 0x1FC074u;
    // 0x1fc074: 0x8ce20084  lw          $v0, 0x84($a3)
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x1fc078: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC078u;
    {
        const bool branch_taken_0x1fc078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc078) {
            ctx->pc = 0x1FC07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC078u;
            // 0x1fc07c: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC098u;
            goto label_1fc098;
        }
    }
    ctx->pc = 0x1FC080u;
    // 0x1fc080: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x1fc084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc088: 0xace20080  sw          $v0, 0x80($a3)
    ctx->pc = 0x1fc088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 2));
    // 0x1fc08c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc090: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC090u;
    {
        const bool branch_taken_0x1fc090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC090u;
        // 0x1fc094: 0xac600084  sw          $zero, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc090) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC098u;
label_1fc098:
    // 0x1fc098: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fc09c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fc09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fc0a0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1fc0a4: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fc0a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fc0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fc0ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fc0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fc0b0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC0B0u;
    {
        const bool branch_taken_0x1fc0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc0b0) {
            ctx->pc = 0x1FC0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC0B0u;
            // 0x1fc0b4: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC134u;
            goto label_1fc134;
        }
    }
    ctx->pc = 0x1FC0B8u;
    // 0x1fc0b8: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x1fc0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc0c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC0C0u;
    {
        const bool branch_taken_0x1fc0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0C0u;
        // 0x1fc0c4: 0xace20080  sw          $v0, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0c0) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC0C8u;
label_1fc0c8:
    // 0x1fc0c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc0cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC0CCu;
    {
        const bool branch_taken_0x1fc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0CCu;
        // 0x1fc0d0: 0xace20080  sw          $v0, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0cc) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC0D4u;
    // 0x1fc0d4: 0x0  nop
    ctx->pc = 0x1fc0d4u;
    // NOP
label_1fc0d8:
    // 0x1fc0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc0dc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC0DCu;
    {
        const bool branch_taken_0x1fc0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc0dc) {
            ctx->pc = 0x1FC0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC0DCu;
            // 0x1fc0e0: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC0F8u;
            goto label_1fc0f8;
        }
    }
    ctx->pc = 0x1FC0E4u;
    // 0x1fc0e4: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc0e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc0ec: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC0ECu;
    {
        const bool branch_taken_0x1fc0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc0ec) {
            ctx->pc = 0x1FC0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC0ECu;
            // 0x1fc0f0: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC104u;
            goto label_1fc104;
        }
    }
    ctx->pc = 0x1FC0F4u;
    // 0x1fc0f4: 0x920201b5  lbu         $v0, 0x1B5($s0)
    ctx->pc = 0x1fc0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
label_1fc0f8:
    // 0x1fc0f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC0F8u;
    {
        const bool branch_taken_0x1fc0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc0f8) {
            ctx->pc = 0x1FC0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC0F8u;
            // 0x1fc0fc: 0xace00080  sw          $zero, 0x80($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC100u;
    // 0x1fc100: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fc104:
    // 0x1fc104: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC104u;
    {
        const bool branch_taken_0x1fc104 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fc104) {
            ctx->pc = 0x1FC108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC104u;
            // 0x1fc108: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC120u;
            goto label_1fc120;
        }
    }
    ctx->pc = 0x1FC10Cu;
    // 0x1fc10c: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x1fc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x1fc110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC114u;
    {
        const bool branch_taken_0x1fc114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC114u;
        // 0x1fc118: 0xace20080  sw          $v0, 0x80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc114) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC11Cu;
    // 0x1fc11c: 0x0  nop
    ctx->pc = 0x1fc11cu;
    // NOP
label_1fc120:
    // 0x1fc120: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC120u;
    {
        const bool branch_taken_0x1fc120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc120) {
            ctx->pc = 0x1FC124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC120u;
            // 0x1fc124: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC134u;
            goto label_1fc134;
        }
    }
    ctx->pc = 0x1FC128u;
    // 0x1fc128: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x1fc128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
label_1fc12c:
    // 0x1fc12c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc130: 0x922201f0  lbu         $v0, 0x1F0($s1)
    ctx->pc = 0x1fc130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
label_1fc134:
    // 0x1fc134: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC134u;
    {
        const bool branch_taken_0x1fc134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC134u;
        // 0x1fc138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc134) {
            ctx->pc = 0x1FC154u;
            goto label_1fc154;
        }
    }
    ctx->pc = 0x1FC13Cu;
    // 0x1fc13c: 0x8622022a  lh          $v0, 0x22A($s1)
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 554)));
    // 0x1fc140: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC140u;
    {
        const bool branch_taken_0x1fc140 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC140u;
        // 0x1fc144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc140) {
            ctx->pc = 0x1FC154u;
            goto label_1fc154;
        }
    }
    ctx->pc = 0x1FC148u;
    // 0x1fc148: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fc148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fc14c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC14Cu;
    {
        const bool branch_taken_0x1fc14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC14Cu;
        // 0x1fc150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc14c) {
            ctx->pc = 0x1FC15Cu;
            goto label_1fc15c;
        }
    }
    ctx->pc = 0x1FC154u;
label_1fc154:
    // 0x1fc154: 0xacc200a0  sw          $v0, 0xA0($a2)
    ctx->pc = 0x1fc154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 2));
    // 0x1fc158: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fc15c:
    // 0x1fc15c: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x1fc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x1fc160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fc164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc168: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC168u;
    {
        const bool branch_taken_0x1fc168 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC168u;
        // 0x1fc16c: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc168) {
            ctx->pc = 0x1FC17Cu;
            goto label_1fc17c;
        }
    }
    ctx->pc = 0x1FC170u;
    // 0x1fc170: 0x9202018d  lbu         $v0, 0x18D($s0)
    ctx->pc = 0x1fc170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 397)));
    // 0x1fc174: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC174u;
    {
        const bool branch_taken_0x1fc174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc174) {
            ctx->pc = 0x1FC180u;
            goto label_1fc180;
        }
    }
    ctx->pc = 0x1FC17Cu;
label_1fc17c:
    // 0x1fc17c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc180:
    // 0x1fc180: 0x55000004  bnel        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC180u;
    {
        const bool branch_taken_0x1fc180 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc180) {
            ctx->pc = 0x1FC184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC180u;
            // 0x1fc184: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC194u;
            goto label_1fc194;
        }
    }
    ctx->pc = 0x1FC188u;
    // 0x1fc188: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC188u;
    {
        const bool branch_taken_0x1fc188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc188) {
            ctx->pc = 0x1FC18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC188u;
            // 0x1fc18c: 0x86230148  lh          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC228u;
            goto label_1fc228;
        }
    }
    ctx->pc = 0x1FC190u;
    // 0x1fc190: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fc194:
    // 0x1fc194: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC194u;
    {
        const bool branch_taken_0x1fc194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc194) {
            ctx->pc = 0x1FC198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC194u;
            // 0x1fc198: 0x920201ee  lbu         $v0, 0x1EE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1ACu;
            goto label_1fc1ac;
        }
    }
    ctx->pc = 0x1FC19Cu;
    // 0x1fc19c: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x1fc19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
    // 0x1fc1a0: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FC1A0u;
    {
        const bool branch_taken_0x1fc1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1a0) {
            ctx->pc = 0x1FC1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1A0u;
            // 0x1fc1a4: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC284u;
            goto label_1fc284;
        }
    }
    ctx->pc = 0x1FC1A8u;
    // 0x1fc1a8: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x1fc1a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
label_1fc1ac:
    // 0x1fc1ac: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FC1ACu;
    {
        const bool branch_taken_0x1fc1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1ac) {
            ctx->pc = 0x1FC1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1ACu;
            // 0x1fc1b0: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC284u;
            goto label_1fc284;
        }
    }
    ctx->pc = 0x1FC1B4u;
    // 0x1fc1b4: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x1fc1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc1b8: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC1B8u;
    {
        const bool branch_taken_0x1fc1b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fc1b8) {
            ctx->pc = 0x1FC1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1B8u;
            // 0x1fc1bc: 0x8cc20098  lw          $v0, 0x98($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC218u;
            goto label_1fc218;
        }
    }
    ctx->pc = 0x1FC1C0u;
    // 0x1fc1c0: 0x8cc2009c  lw          $v0, 0x9C($a2)
    ctx->pc = 0x1fc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    // 0x1fc1c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC1C4u;
    {
        const bool branch_taken_0x1fc1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c4) {
            ctx->pc = 0x1FC1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1C4u;
            // 0x1fc1c8: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1E8u;
            goto label_1fc1e8;
        }
    }
    ctx->pc = 0x1FC1CCu;
    // 0x1fc1cc: 0x8cc20098  lw          $v0, 0x98($a2)
    ctx->pc = 0x1fc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x1fc1d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc1d4: 0xacc20098  sw          $v0, 0x98($a2)
    ctx->pc = 0x1fc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
    // 0x1fc1d8: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc1dc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC1DCu;
    {
        const bool branch_taken_0x1fc1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1DCu;
        // 0x1fc1e0: 0xac60009c  sw          $zero, 0x9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1dc) {
            ctx->pc = 0x1FC27Cu;
            goto label_1fc27c;
        }
    }
    ctx->pc = 0x1FC1E4u;
    // 0x1fc1e4: 0x0  nop
    ctx->pc = 0x1fc1e4u;
    // NOP
label_1fc1e8:
    // 0x1fc1e8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fc1ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fc1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fc1f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1fc1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1fc1f4: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fc1f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fc1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fc1fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fc1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fc200: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC200u;
    {
        const bool branch_taken_0x1fc200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc200) {
            ctx->pc = 0x1FC204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC200u;
            // 0x1fc204: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC284u;
            goto label_1fc284;
        }
    }
    ctx->pc = 0x1FC208u;
    // 0x1fc208: 0x8cc20098  lw          $v0, 0x98($a2)
    ctx->pc = 0x1fc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x1fc20c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc210: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC210u;
    {
        const bool branch_taken_0x1fc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC210u;
        // 0x1fc214: 0xacc20098  sw          $v0, 0x98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc210) {
            ctx->pc = 0x1FC27Cu;
            goto label_1fc27c;
        }
    }
    ctx->pc = 0x1FC218u;
label_1fc218:
    // 0x1fc218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc21c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC21Cu;
    {
        const bool branch_taken_0x1fc21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC21Cu;
        // 0x1fc220: 0xacc20098  sw          $v0, 0x98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc21c) {
            ctx->pc = 0x1FC27Cu;
            goto label_1fc27c;
        }
    }
    ctx->pc = 0x1FC224u;
    // 0x1fc224: 0x0  nop
    ctx->pc = 0x1fc224u;
    // NOP
label_1fc228:
    // 0x1fc228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc22c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC22Cu;
    {
        const bool branch_taken_0x1fc22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc22c) {
            ctx->pc = 0x1FC230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC22Cu;
            // 0x1fc230: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC248u;
            goto label_1fc248;
        }
    }
    ctx->pc = 0x1FC234u;
    // 0x1fc234: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1fc234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc23c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC23Cu;
    {
        const bool branch_taken_0x1fc23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc23c) {
            ctx->pc = 0x1FC240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC23Cu;
            // 0x1fc240: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC254u;
            goto label_1fc254;
        }
    }
    ctx->pc = 0x1FC244u;
    // 0x1fc244: 0x920201b5  lbu         $v0, 0x1B5($s0)
    ctx->pc = 0x1fc244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
label_1fc248:
    // 0x1fc248: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC248u;
    {
        const bool branch_taken_0x1fc248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc248) {
            ctx->pc = 0x1FC24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC248u;
            // 0x1fc24c: 0xacc00098  sw          $zero, 0x98($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC27Cu;
            goto label_1fc27c;
        }
    }
    ctx->pc = 0x1FC250u;
    // 0x1fc250: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fc250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fc254:
    // 0x1fc254: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC254u;
    {
        const bool branch_taken_0x1fc254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc254) {
            ctx->pc = 0x1FC258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC254u;
            // 0x1fc258: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC270u;
            goto label_1fc270;
        }
    }
    ctx->pc = 0x1FC25Cu;
    // 0x1fc25c: 0x8cc20098  lw          $v0, 0x98($a2)
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x1fc260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC264u;
    {
        const bool branch_taken_0x1fc264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC264u;
        // 0x1fc268: 0xacc20098  sw          $v0, 0x98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc264) {
            ctx->pc = 0x1FC27Cu;
            goto label_1fc27c;
        }
    }
    ctx->pc = 0x1FC26Cu;
    // 0x1fc26c: 0x0  nop
    ctx->pc = 0x1fc26cu;
    // NOP
label_1fc270:
    // 0x1fc270: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC270u;
    {
        const bool branch_taken_0x1fc270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc270) {
            ctx->pc = 0x1FC274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC270u;
            // 0x1fc274: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC284u;
            goto label_1fc284;
        }
    }
    ctx->pc = 0x1FC278u;
    // 0x1fc278: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x1fc278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
label_1fc27c:
    // 0x1fc27c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc280: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x1fc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
label_1fc284:
    // 0x1fc284: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1fc284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fc288: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC288u;
    {
        const bool branch_taken_0x1fc288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc288) {
            ctx->pc = 0x1FC28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC288u;
            // 0x1fc28c: 0x8cc20098  lw          $v0, 0x98($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC2A0u;
            goto label_1fc2a0;
        }
    }
    ctx->pc = 0x1FC290u;
    // 0x1fc290: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1fc290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fc294: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x1fc294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    // 0x1fc298: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc29c: 0x8cc20098  lw          $v0, 0x98($a2)
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_1fc2a0:
    // 0x1fc2a0: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1fc2a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fc2a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2A4u;
    {
        const bool branch_taken_0x1fc2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A4u;
        // 0x1fc2a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a4) {
            ctx->pc = 0x1FC2B4u;
            goto label_1fc2b4;
        }
    }
    ctx->pc = 0x1FC2ACu;
    // 0x1fc2ac: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1fc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fc2b0: 0xacc20098  sw          $v0, 0x98($a2)
    ctx->pc = 0x1fc2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
label_1fc2b4:
    // 0x1fc2b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc2b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc2b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc2c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc2c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc2c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C8u;
        // 0x1fc2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC2D0u;
    // 0x1fc2d0: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D4u;
        // 0x1fc2d8: 0xac4400c8  sw          $a0, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC2DCu;
    // 0x1fc2dc: 0x0  nop
    ctx->pc = 0x1fc2dcu;
    // NOP
    // 0x1fc2e0: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2E4u;
        // 0x1fc2e8: 0x8c6200c8  lw          $v0, 0xC8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC2ECu;
    // 0x1fc2ec: 0x0  nop
    ctx->pc = 0x1fc2ecu;
    // NOP
    ctx->pc = 0x1fc2f0u;
}
