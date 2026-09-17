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

// Function: sub_0032CFE0
// Address: 0x32cfe0 - 0x32d1b8
void sub_0032CFE0_0x32cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CFE0_0x32cfe0");
#endif

    switch (ctx->pc) {
        case 0x32cfe0u: goto label_32cfe0;
        case 0x32cfe4u: goto label_32cfe4;
        case 0x32cfe8u: goto label_32cfe8;
        case 0x32cfecu: goto label_32cfec;
        case 0x32cff0u: goto label_32cff0;
        case 0x32cff4u: goto label_32cff4;
        case 0x32cff8u: goto label_32cff8;
        case 0x32cffcu: goto label_32cffc;
        case 0x32d000u: goto label_32d000;
        case 0x32d004u: goto label_32d004;
        case 0x32d008u: goto label_32d008;
        case 0x32d00cu: goto label_32d00c;
        case 0x32d010u: goto label_32d010;
        case 0x32d014u: goto label_32d014;
        case 0x32d018u: goto label_32d018;
        case 0x32d01cu: goto label_32d01c;
        case 0x32d020u: goto label_32d020;
        case 0x32d024u: goto label_32d024;
        case 0x32d028u: goto label_32d028;
        case 0x32d02cu: goto label_32d02c;
        case 0x32d030u: goto label_32d030;
        case 0x32d034u: goto label_32d034;
        case 0x32d038u: goto label_32d038;
        case 0x32d03cu: goto label_32d03c;
        case 0x32d040u: goto label_32d040;
        case 0x32d044u: goto label_32d044;
        case 0x32d048u: goto label_32d048;
        case 0x32d04cu: goto label_32d04c;
        case 0x32d050u: goto label_32d050;
        case 0x32d054u: goto label_32d054;
        case 0x32d058u: goto label_32d058;
        case 0x32d05cu: goto label_32d05c;
        case 0x32d060u: goto label_32d060;
        case 0x32d064u: goto label_32d064;
        case 0x32d068u: goto label_32d068;
        case 0x32d06cu: goto label_32d06c;
        case 0x32d070u: goto label_32d070;
        case 0x32d074u: goto label_32d074;
        case 0x32d078u: goto label_32d078;
        case 0x32d07cu: goto label_32d07c;
        case 0x32d080u: goto label_32d080;
        case 0x32d084u: goto label_32d084;
        case 0x32d088u: goto label_32d088;
        case 0x32d08cu: goto label_32d08c;
        case 0x32d090u: goto label_32d090;
        case 0x32d094u: goto label_32d094;
        case 0x32d098u: goto label_32d098;
        case 0x32d09cu: goto label_32d09c;
        case 0x32d0a0u: goto label_32d0a0;
        case 0x32d0a4u: goto label_32d0a4;
        case 0x32d0a8u: goto label_32d0a8;
        case 0x32d0acu: goto label_32d0ac;
        case 0x32d0b0u: goto label_32d0b0;
        case 0x32d0b4u: goto label_32d0b4;
        case 0x32d0b8u: goto label_32d0b8;
        case 0x32d0bcu: goto label_32d0bc;
        case 0x32d0c0u: goto label_32d0c0;
        case 0x32d0c4u: goto label_32d0c4;
        case 0x32d0c8u: goto label_32d0c8;
        case 0x32d0ccu: goto label_32d0cc;
        case 0x32d0d0u: goto label_32d0d0;
        case 0x32d0d4u: goto label_32d0d4;
        case 0x32d0d8u: goto label_32d0d8;
        case 0x32d0dcu: goto label_32d0dc;
        case 0x32d0e0u: goto label_32d0e0;
        case 0x32d0e4u: goto label_32d0e4;
        case 0x32d0e8u: goto label_32d0e8;
        case 0x32d0ecu: goto label_32d0ec;
        case 0x32d0f0u: goto label_32d0f0;
        case 0x32d0f4u: goto label_32d0f4;
        case 0x32d0f8u: goto label_32d0f8;
        case 0x32d0fcu: goto label_32d0fc;
        case 0x32d100u: goto label_32d100;
        case 0x32d104u: goto label_32d104;
        case 0x32d108u: goto label_32d108;
        case 0x32d10cu: goto label_32d10c;
        case 0x32d110u: goto label_32d110;
        case 0x32d114u: goto label_32d114;
        case 0x32d118u: goto label_32d118;
        case 0x32d11cu: goto label_32d11c;
        case 0x32d120u: goto label_32d120;
        case 0x32d124u: goto label_32d124;
        case 0x32d128u: goto label_32d128;
        case 0x32d12cu: goto label_32d12c;
        case 0x32d130u: goto label_32d130;
        case 0x32d134u: goto label_32d134;
        case 0x32d138u: goto label_32d138;
        case 0x32d13cu: goto label_32d13c;
        case 0x32d140u: goto label_32d140;
        case 0x32d144u: goto label_32d144;
        case 0x32d148u: goto label_32d148;
        case 0x32d14cu: goto label_32d14c;
        case 0x32d150u: goto label_32d150;
        case 0x32d154u: goto label_32d154;
        case 0x32d158u: goto label_32d158;
        case 0x32d15cu: goto label_32d15c;
        case 0x32d160u: goto label_32d160;
        case 0x32d164u: goto label_32d164;
        case 0x32d168u: goto label_32d168;
        case 0x32d16cu: goto label_32d16c;
        case 0x32d170u: goto label_32d170;
        case 0x32d174u: goto label_32d174;
        case 0x32d178u: goto label_32d178;
        case 0x32d17cu: goto label_32d17c;
        case 0x32d180u: goto label_32d180;
        case 0x32d184u: goto label_32d184;
        case 0x32d188u: goto label_32d188;
        case 0x32d18cu: goto label_32d18c;
        case 0x32d190u: goto label_32d190;
        case 0x32d194u: goto label_32d194;
        case 0x32d198u: goto label_32d198;
        case 0x32d19cu: goto label_32d19c;
        case 0x32d1a0u: goto label_32d1a0;
        case 0x32d1a4u: goto label_32d1a4;
        case 0x32d1a8u: goto label_32d1a8;
        case 0x32d1acu: goto label_32d1ac;
        case 0x32d1b0u: goto label_32d1b0;
        case 0x32d1b4u: goto label_32d1b4;
        default: break;
    }

    ctx->pc = 0x32cfe0u;

label_32cfe0:
    // 0x32cfe0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_32cfe4:
    // 0x32cfe4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x32cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_32cfe8:
    // 0x32cfe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32cfec:
    // 0x32cfec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x32cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_32cff0:
    // 0x32cff0: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x32cff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32cff4:
    // 0x32cff4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x32cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_32cff8:
    // 0x32cff8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x32cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_32cffc:
    // 0x32cffc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x32cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_32d000:
    // 0x32d000: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x32d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_32d004:
    // 0x32d004: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_32d008:
    // 0x32d008: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x32d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_32d00c:
    // 0x32d00c: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_32d010:
    if (ctx->pc == 0x32D010u) {
        ctx->pc = 0x32D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D00Cu;
        // 0x32d010: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D014u;
        goto label_32d014;
    }
    ctx->pc = 0x32D00Cu;
    {
        const bool branch_taken_0x32d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d00c) {
            ctx->pc = 0x32D010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D00Cu;
            // 0x32d010: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D15Cu;
            goto label_32d15c;
        }
    }
    ctx->pc = 0x32D014u;
label_32d014:
    // 0x32d014: 0xc0c8864  jal         func_322190
label_32d018:
    if (ctx->pc == 0x32D018u) {
        ctx->pc = 0x32D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D014u;
        // 0x32d018: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D01Cu;
        goto label_32d01c;
    }
    ctx->pc = 0x32D014u;
    SET_GPR_U32(ctx, 31, 0x32D01Cu);
    ctx->pc = 0x32D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D014u;
    // 0x32d018: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32D014u, 0x32D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D01Cu;
label_32d01c:
    // 0x32d01c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32d01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32d020:
    // 0x32d020: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32d024:
    // 0x32d024: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x32d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_32d028:
    // 0x32d028: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32d028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32d02c:
    // 0x32d02c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32d030:
    // 0x32d030: 0x40f809  jalr        $v0
label_32d034:
    if (ctx->pc == 0x32D034u) {
        ctx->pc = 0x32D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D030u;
        // 0x32d034: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D038u;
        goto label_32d038;
    }
    ctx->pc = 0x32D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32D038u);
        ctx->pc = 0x32D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D030u;
        // 0x32d034: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D030u, 0x32D038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32D038u;
label_32d038:
    // 0x32d038: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x32d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_32d03c:
    // 0x32d03c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x32d03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32d040:
    // 0x32d040: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x32d040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_32d044:
    // 0x32d044: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32d044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_32d048:
    // 0x32d048: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32d04c:
    // 0x32d04c: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_32d050:
    if (ctx->pc == 0x32D050u) {
        ctx->pc = 0x32D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D04Cu;
        // 0x32d050: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D054u;
        goto label_32d054;
    }
    ctx->pc = 0x32D04Cu;
    {
        const bool branch_taken_0x32d04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D04Cu;
        // 0x32d050: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d04c) {
            ctx->pc = 0x32D140u;
            goto label_32d140;
        }
    }
    ctx->pc = 0x32D054u;
label_32d054:
    // 0x32d054: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x32d054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32d058:
    // 0x32d058: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32d05c:
    // 0x32d05c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x32d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_32d060:
    // 0x32d060: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32d064:
    // 0x32d064: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x32d064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_32d068:
    // 0x32d068: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32d068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32d06c:
    // 0x32d06c: 0xc0d0f0a  jal         func_343C28
label_32d070:
    if (ctx->pc == 0x32D070u) {
        ctx->pc = 0x32D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D06Cu;
        // 0x32d070: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D074u;
        goto label_32d074;
    }
    ctx->pc = 0x32D06Cu;
    SET_GPR_U32(ctx, 31, 0x32D074u);
    ctx->pc = 0x32D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D06Cu;
    // 0x32d070: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C28u, 0x32D06Cu, 0x32D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D074u;
label_32d074:
    // 0x32d074: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_32d078:
    if (ctx->pc == 0x32D078u) {
        ctx->pc = 0x32D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D074u;
        // 0x32d078: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D07Cu;
        goto label_32d07c;
    }
    ctx->pc = 0x32D074u;
    {
        const bool branch_taken_0x32d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D074u;
        // 0x32d078: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d074) {
            ctx->pc = 0x32D140u;
            goto label_32d140;
        }
    }
    ctx->pc = 0x32D07Cu;
label_32d07c:
    // 0x32d07c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32d080:
    // 0x32d080: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32d080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32d084:
    // 0x32d084: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x32d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_32d088:
    // 0x32d088: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32d088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_32d08c:
    // 0x32d08c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32d090:
    // 0x32d090: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32d090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_32d094:
    // 0x32d094: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x32d094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_32d098:
    // 0x32d098: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
label_32d09c:
    if (ctx->pc == 0x32D09Cu) {
        ctx->pc = 0x32D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D098u;
        // 0x32d09c: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D0A0u;
        goto label_32d0a0;
    }
    ctx->pc = 0x32D098u;
    {
        const bool branch_taken_0x32d098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x32D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D098u;
        // 0x32d09c: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d098) {
            ctx->pc = 0x32D0B0u;
            goto label_32d0b0;
        }
    }
    ctx->pc = 0x32D0A0u;
label_32d0a0:
    // 0x32d0a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_32d0a4:
    // 0x32d0a4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_32d0a8:
    // 0x32d0a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_32d0ac:
    if (ctx->pc == 0x32D0ACu) {
        ctx->pc = 0x32D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0A8u;
        // 0x32d0ac: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D0B0u;
        goto label_32d0b0;
    }
    ctx->pc = 0x32D0A8u;
    {
        const bool branch_taken_0x32d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0A8u;
        // 0x32d0ac: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0a8) {
            ctx->pc = 0x32D0DCu;
            goto label_32d0dc;
        }
    }
    ctx->pc = 0x32D0B0u;
label_32d0b0:
    // 0x32d0b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32d0b4:
    // 0x32d0b4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_32d0b8:
    if (ctx->pc == 0x32D0B8u) {
        ctx->pc = 0x32D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0B4u;
        // 0x32d0b8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D0BCu;
        goto label_32d0bc;
    }
    ctx->pc = 0x32D0B4u;
    {
        const bool branch_taken_0x32d0b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0B4u;
        // 0x32d0b8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0b4) {
            ctx->pc = 0x32D0C8u;
            goto label_32d0c8;
        }
    }
    ctx->pc = 0x32D0BCu;
label_32d0bc:
    // 0x32d0bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32d0c0:
    // 0x32d0c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_32d0c4:
    if (ctx->pc == 0x32D0C4u) {
        ctx->pc = 0x32D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0C0u;
        // 0x32d0c4: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D0C8u;
        goto label_32d0c8;
    }
    ctx->pc = 0x32D0C0u;
    {
        const bool branch_taken_0x32d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0C0u;
        // 0x32d0c4: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0c0) {
            ctx->pc = 0x32D0DCu;
            goto label_32d0dc;
        }
    }
    ctx->pc = 0x32D0C8u;
label_32d0c8:
    // 0x32d0c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_32d0cc:
    // 0x32d0cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x32d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_32d0d0:
    // 0x32d0d0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x32d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32d0d4:
    // 0x32d0d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_32d0d8:
    // 0x32d0d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_32d0dc:
    // 0x32d0dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32d0e0:
    // 0x32d0e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32d0e4:
    // 0x32d0e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x32d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_32d0e8:
    // 0x32d0e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32d0ec:
    // 0x32d0ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_32d0f0:
    if (ctx->pc == 0x32D0F0u) {
        ctx->pc = 0x32D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0ECu;
        // 0x32d0f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D0F4u;
        goto label_32d0f4;
    }
    ctx->pc = 0x32D0ECu;
    {
        const bool branch_taken_0x32d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d0ec) {
            ctx->pc = 0x32D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D0ECu;
            // 0x32d0f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D100u;
            goto label_32d100;
        }
    }
    ctx->pc = 0x32D0F4u;
label_32d0f4:
    // 0x32d0f4: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x32d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_32d0f8:
    // 0x32d0f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_32d0fc:
    if (ctx->pc == 0x32D0FCu) {
        ctx->pc = 0x32D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0F8u;
        // 0x32d0fc: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D100u;
        goto label_32d100;
    }
    ctx->pc = 0x32D0F8u;
    {
        const bool branch_taken_0x32d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0F8u;
        // 0x32d0fc: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0f8) {
            ctx->pc = 0x32D10Cu;
            goto label_32d10c;
        }
    }
    ctx->pc = 0x32D100u;
label_32d100:
    // 0x32d100: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x32d100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_32d104:
    // 0x32d104: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32d108:
    // 0x32d108: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32d108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_32d10c:
    // 0x32d10c: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x32d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_32d110:
    // 0x32d110: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32d114:
    // 0x32d114: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32d118:
    // 0x32d118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32d11c:
    // 0x32d11c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x32d11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32d120:
    // 0x32d120: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x32d120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_32d124:
    // 0x32d124: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x32d124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_32d128:
    // 0x32d128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x32d128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_32d12c:
    // 0x32d12c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32d130:
    // 0x32d130: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x32d130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_32d134:
    // 0x32d134: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x32d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32d138:
    // 0x32d138: 0x5443ffc9  bnel        $v0, $v1, . + 4 + (-0x37 << 2)
label_32d13c:
    if (ctx->pc == 0x32D13Cu) {
        ctx->pc = 0x32D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D138u;
        // 0x32d13c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D140u;
        goto label_32d140;
    }
    ctx->pc = 0x32D138u;
    {
        const bool branch_taken_0x32d138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d138) {
            ctx->pc = 0x32D13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D138u;
            // 0x32d13c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d060;
        }
    }
    ctx->pc = 0x32D140u;
label_32d140:
    // 0x32d140: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_32d144:
    // 0x32d144: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x32d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_32d148:
    // 0x32d148: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32d148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32d14c:
    // 0x32d14c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32d150:
    // 0x32d150: 0x40f809  jalr        $v0
label_32d154:
    if (ctx->pc == 0x32D154u) {
        ctx->pc = 0x32D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D150u;
        // 0x32d154: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D158u;
        goto label_32d158;
    }
    ctx->pc = 0x32D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32D158u);
        ctx->pc = 0x32D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D150u;
        // 0x32d154: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D150u, 0x32D158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32D158u;
label_32d158:
    // 0x32d158: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x32d158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32d15c:
    // 0x32d15c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x32d15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_32d160:
    // 0x32d160: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x32d160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_32d164:
    // 0x32d164: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x32d164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_32d168:
    // 0x32d168: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x32d168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_32d16c:
    // 0x32d16c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x32d16cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_32d170:
    // 0x32d170: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_32d174:
    // 0x32d174: 0x3e00008  jr          $ra
label_32d178:
    if (ctx->pc == 0x32D178u) {
        ctx->pc = 0x32D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D174u;
        // 0x32d178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D17Cu;
        goto label_32d17c;
    }
    ctx->pc = 0x32D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D174u;
        // 0x32d178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D17Cu;
label_32d17c:
    // 0x32d17c: 0x0  nop
    ctx->pc = 0x32d17cu;
    // NOP
label_32d180:
    // 0x32d180: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32d180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d184:
    // 0x32d184: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_32d188:
    // 0x32d188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32d18c:
    // 0x32d18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32d190:
    // 0x32d190: 0xc0cb628  jal         func_32D8A0
label_32d194:
    if (ctx->pc == 0x32D194u) {
        ctx->pc = 0x32D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D190u;
        // 0x32d194: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D198u;
        goto label_32d198;
    }
    ctx->pc = 0x32D190u;
    SET_GPR_U32(ctx, 31, 0x32D198u);
    ctx->pc = 0x32D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D190u;
    // 0x32d194: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D190u, 0x32D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D198u;
label_32d198:
    // 0x32d198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32d19c:
    if (ctx->pc == 0x32D19Cu) {
        ctx->pc = 0x32D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D198u;
        // 0x32d19c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D1A0u;
        goto label_32d1a0;
    }
    ctx->pc = 0x32D198u;
    {
        const bool branch_taken_0x32d198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D198u;
        // 0x32d19c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d198) {
            ctx->pc = 0x32D1A8u;
            goto label_32d1a8;
        }
    }
    ctx->pc = 0x32D1A0u;
label_32d1a0:
    // 0x32d1a0: 0xc0caf7a  jal         func_32BDE8
label_32d1a4:
    if (ctx->pc == 0x32D1A4u) {
        ctx->pc = 0x32D1A8u;
        goto label_32d1a8;
    }
    ctx->pc = 0x32D1A0u;
    SET_GPR_U32(ctx, 31, 0x32D1A8u);
    ctx->pc = 0x32BDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDE8u, 0x32D1A0u, 0x32D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1A8u;
label_32d1a8:
    // 0x32d1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32d1ac:
    // 0x32d1ac: 0x3e00008  jr          $ra
label_32d1b0:
    if (ctx->pc == 0x32D1B0u) {
        ctx->pc = 0x32D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1ACu;
        // 0x32d1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32D1B4u;
        goto label_32d1b4;
    }
    ctx->pc = 0x32D1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1ACu;
        // 0x32d1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D1B4u;
label_32d1b4:
    // 0x32d1b4: 0x0  nop
    ctx->pc = 0x32d1b4u;
    // NOP
    ctx->pc = 0x32d1b8u;
}
