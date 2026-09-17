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

// Function: sub_002CBA78
// Address: 0x2cba78 - 0x2cbbf8
void sub_002CBA78_0x2cba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBA78_0x2cba78");
#endif

    switch (ctx->pc) {
        case 0x2cbad8u: goto label_2cbad8;
        case 0x2cbb04u: goto label_2cbb04;
        case 0x2cbb34u: goto label_2cbb34;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbbb0u: goto label_2cbbb0;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbbd0u: goto label_2cbbd0;
        case 0x2cbbe0u: goto label_2cbbe0;
        case 0x2cbbf0u: goto label_2cbbf0;
        default: break;
    }

    ctx->pc = 0x2cba78u;

    // 0x2cba78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cba7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cba80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cba80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cba88: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2cba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2cba8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cba90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cba94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBA94u;
    {
        const bool branch_taken_0x2cba94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba94) {
            ctx->pc = 0x2CBA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBA94u;
            // 0x2cba98: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBAB0u;
            goto label_2cbab0;
        }
    }
    ctx->pc = 0x2CBA9Cu;
    // 0x2cba9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cbaa0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cbaa4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBAA4u;
    {
        const bool branch_taken_0x2cbaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAA4u;
        // 0x2cbaa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaa4) {
            ctx->pc = 0x2CBAB8u;
            goto label_2cbab8;
        }
    }
    ctx->pc = 0x2CBAACu;
    // 0x2cbaac: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2cbab0:
    // 0x2cbab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cbab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbab4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2cbab8:
    // 0x2cbab8: 0x52000052  beql        $s0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x2CBAB8u;
    {
        const bool branch_taken_0x2cbab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbab8) {
            ctx->pc = 0x2CBABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBAB8u;
            // 0x2cbabc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBAC0u;
    // 0x2cbac0: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x2cbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2cbac4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2CBAC4u;
    {
        const bool branch_taken_0x2cbac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAC4u;
        // 0x2cbac8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbac4) {
            ctx->pc = 0x2CBC00u;
            return;
        }
    }
    ctx->pc = 0x2CBACCu;
    // 0x2cbacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbad0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBAD0u;
    SET_GPR_U32(ctx, 31, 0x2CBAD8u);
    ctx->pc = 0x2CBAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAD0u;
    // 0x2cbad4: 0x24a5e680  addiu       $a1, $a1, -0x1980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBAD0u, 0x2CBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAD8u;
label_2cbad8:
    // 0x2cbad8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBAD8u;
    {
        const bool branch_taken_0x2cbad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAD8u;
        // 0x2cbadc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbad8) {
            ctx->pc = 0x2CBAF8u;
            goto label_2cbaf8;
        }
    }
    ctx->pc = 0x2CBAE0u;
    // 0x2cbae0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBAE4u;
    {
        const bool branch_taken_0x2cbae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbae4) {
            ctx->pc = 0x2CBAF8u;
            goto label_2cbaf8;
        }
    }
    ctx->pc = 0x2CBAECu;
    // 0x2cbaec: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cbaf0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cbaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cbaf4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cbaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2cbaf8:
    // 0x2cbaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbafc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBAFCu;
    SET_GPR_U32(ctx, 31, 0x2CBB04u);
    ctx->pc = 0x2CBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAFCu;
    // 0x2cbb00: 0x24a5e690  addiu       $a1, $a1, -0x1970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBAFCu, 0x2CBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB04u;
label_2cbb04:
    // 0x2cbb04: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBB04u;
    {
        const bool branch_taken_0x2cbb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb04) {
            ctx->pc = 0x2CBB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBB04u;
            // 0x2cbb08: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB28u;
            goto label_2cbb28;
        }
    }
    ctx->pc = 0x2CBB0Cu;
    // 0x2cbb0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbb10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBB10u;
    {
        const bool branch_taken_0x2cbb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB10u;
        // 0x2cbb14: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb10) {
            ctx->pc = 0x2CBB24u;
            goto label_2cbb24;
        }
    }
    ctx->pc = 0x2CBB18u;
    // 0x2cbb18: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cbb1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cbb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cbb20: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cbb24:
    // 0x2cbb24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cbb28:
    // 0x2cbb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb2c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBB2Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB34u);
    ctx->pc = 0x2CBB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB2Cu;
    // 0x2cbb30: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBB2Cu, 0x2CBB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB34u;
label_2cbb34:
    // 0x2cbb34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBB34u;
    {
        const bool branch_taken_0x2cbb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB34u;
        // 0x2cbb38: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb34) {
            ctx->pc = 0x2CBB54u;
            goto label_2cbb54;
        }
    }
    ctx->pc = 0x2CBB3Cu;
    // 0x2cbb3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbb40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBB40u;
    {
        const bool branch_taken_0x2cbb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb40) {
            ctx->pc = 0x2CBB54u;
            goto label_2cbb54;
        }
    }
    ctx->pc = 0x2CBB48u;
    // 0x2cbb48: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cbb4c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cbb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cbb50: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2cbb54:
    // 0x2cbb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb58: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBB58u;
    SET_GPR_U32(ctx, 31, 0x2CBB60u);
    ctx->pc = 0x2CBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB58u;
    // 0x2cbb5c: 0x24a5e6b0  addiu       $a1, $a1, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBB58u, 0x2CBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB60u;
label_2cbb60:
    // 0x2cbb60: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBB60u;
    {
        const bool branch_taken_0x2cbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbb60) {
            ctx->pc = 0x2CBB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBB60u;
            // 0x2cbb64: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBB84u;
            goto label_2cbb84;
        }
    }
    ctx->pc = 0x2CBB68u;
    // 0x2cbb68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cbb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbb6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBB6Cu;
    {
        const bool branch_taken_0x2cbb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB6Cu;
        // 0x2cbb70: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb6c) {
            ctx->pc = 0x2CBB80u;
            goto label_2cbb80;
        }
    }
    ctx->pc = 0x2CBB74u;
    // 0x2cbb74: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cbb78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cbb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cbb7c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cbb80:
    // 0x2cbb80: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2cbb84:
    // 0x2cbb84: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2cbb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cbb88: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CBB88u;
    {
        const bool branch_taken_0x2cbb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB88u;
        // 0x2cbb8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb88) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBB90u;
    // 0x2cbb90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cbb94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2cbb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2cbb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbb9c: 0x8c63e6d0  lw          $v1, -0x1930($v1)
    ctx->pc = 0x2cbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960848)));
    // 0x2cbba0: 0x600008  jr          $v1
    ctx->pc = 0x2CBBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBBA8u: goto label_2cbba8;
            case 0x2CBBB8u: goto label_2cbbb8;
            case 0x2CBBC8u: goto label_2cbbc8;
            case 0x2CBBD8u: goto label_2cbbd8;
            case 0x2CBBE8u: goto label_2cbbe8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBBA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CBBA8u;
label_2cbba8:
    // 0x2cbba8: 0xc0b2f34  jal         func_2CBCD0
    ctx->pc = 0x2CBBA8u;
    SET_GPR_U32(ctx, 31, 0x2CBBB0u);
    ctx->pc = 0x2CBBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBA8u;
    // 0x2cbbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCD0u, 0x2CBBA8u, 0x2CBBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBB0u;
label_2cbbb0:
    // 0x2cbbb0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBBB0u;
    {
        const bool branch_taken_0x2cbbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBB0u;
        // 0x2cbbb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbb0) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBBB8u;
label_2cbbb8:
    // 0x2cbbb8: 0xc0b2f06  jal         func_2CBC18
    ctx->pc = 0x2CBBB8u;
    SET_GPR_U32(ctx, 31, 0x2CBBC0u);
    ctx->pc = 0x2CBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBB8u;
    // 0x2cbbbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC18u, 0x2CBBB8u, 0x2CBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBC0u;
label_2cbbc0:
    // 0x2cbbc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBBC0u;
    {
        const bool branch_taken_0x2cbbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBC0u;
        // 0x2cbbc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbc0) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBBC8u;
label_2cbbc8:
    // 0x2cbbc8: 0xc0b305a  jal         func_2CC168
    ctx->pc = 0x2CBBC8u;
    SET_GPR_U32(ctx, 31, 0x2CBBD0u);
    ctx->pc = 0x2CBBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBC8u;
    // 0x2cbbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC168u, 0x2CBBC8u, 0x2CBBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBD0u;
label_2cbbd0:
    // 0x2cbbd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CBBD0u;
    {
        const bool branch_taken_0x2cbbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBD0u;
        // 0x2cbbd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbd0) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBBD8u;
label_2cbbd8:
    // 0x2cbbd8: 0xc0b31dc  jal         func_2CC770
    ctx->pc = 0x2CBBD8u;
    SET_GPR_U32(ctx, 31, 0x2CBBE0u);
    ctx->pc = 0x2CBBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBD8u;
    // 0x2cbbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC770u, 0x2CBBD8u, 0x2CBBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBE0u;
label_2cbbe0:
    // 0x2cbbe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBBE0u;
    {
        const bool branch_taken_0x2cbbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBE0u;
        // 0x2cbbe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbe0) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBBE8u;
label_2cbbe8:
    // 0x2cbbe8: 0xc0b3308  jal         func_2CCC20
    ctx->pc = 0x2CBBE8u;
    SET_GPR_U32(ctx, 31, 0x2CBBF0u);
    ctx->pc = 0x2CBBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBE8u;
    // 0x2cbbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCC20u, 0x2CBBE8u, 0x2CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBF0u;
label_2cbbf0:
    // 0x2cbbf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBBF0u;
    {
        const bool branch_taken_0x2cbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBF0u;
        // 0x2cbbf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbf0) {
            ctx->pc = 0x2CBC04u;
            return;
        }
    }
    ctx->pc = 0x2CBBF8u;
}
