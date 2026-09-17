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

// Function: sub_002CD958
// Address: 0x2cd958 - 0x2cdb98
void sub_002CD958_0x2cd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD958_0x2cd958");
#endif

    switch (ctx->pc) {
        case 0x2cd9a4u: goto label_2cd9a4;
        case 0x2cd9e4u: goto label_2cd9e4;
        case 0x2cda24u: goto label_2cda24;
        case 0x2cda64u: goto label_2cda64;
        case 0x2cdaa4u: goto label_2cdaa4;
        case 0x2cdae4u: goto label_2cdae4;
        case 0x2cdb24u: goto label_2cdb24;
        case 0x2cdb64u: goto label_2cdb64;
        default: break;
    }

    ctx->pc = 0x2cd958u;

    // 0x2cd958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd95c: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2cd960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cd960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cd964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cd964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd96c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2cd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cd970: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD970u;
    {
        const bool branch_taken_0x2cd970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD970u;
        // 0x2cd974: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd970) {
            ctx->pc = 0x2CD988u;
            goto label_2cd988;
        }
    }
    ctx->pc = 0x2CD978u;
    // 0x2cd978: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cd978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cd97c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2cd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cd980: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD980u;
    {
        const bool branch_taken_0x2cd980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD980u;
        // 0x2cd984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd980) {
            ctx->pc = 0x2CD994u;
            goto label_2cd994;
        }
    }
    ctx->pc = 0x2CD988u;
label_2cd988:
    // 0x2cd988: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2cd988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2cd98c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cd98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd990: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2cd990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2cd994:
    // 0x2cd994: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cd998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd99c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD99Cu;
    SET_GPR_U32(ctx, 31, 0x2CD9A4u);
    ctx->pc = 0x2CD9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD99Cu;
    // 0x2cd9a0: 0x24a5ea00  addiu       $a1, $a1, -0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD99Cu, 0x2CD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9A4u;
label_2cd9a4:
    // 0x2cd9a4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD9A4u;
    {
        const bool branch_taken_0x2cd9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9a4) {
            ctx->pc = 0x2CD9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9A4u;
            // 0x2cd9a8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD9D8u;
            goto label_2cd9d8;
        }
    }
    ctx->pc = 0x2CD9ACu;
    // 0x2cd9ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd9b0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD9B0u;
    {
        const bool branch_taken_0x2cd9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9b0) {
            ctx->pc = 0x2CD9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9B0u;
            // 0x2cd9b4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD9D8u;
            goto label_2cd9d8;
        }
    }
    ctx->pc = 0x2CD9B8u;
    // 0x2cd9b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD9B8u;
    {
        const bool branch_taken_0x2cd9b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B8u;
        // 0x2cd9bc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b8) {
            ctx->pc = 0x2CD9C8u;
            goto label_2cd9c8;
        }
    }
    ctx->pc = 0x2CD9C0u;
    // 0x2cd9c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD9C0u;
    {
        const bool branch_taken_0x2cd9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C0u;
        // 0x2cd9c4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9c0) {
            ctx->pc = 0x2CD9D0u;
            goto label_2cd9d0;
        }
    }
    ctx->pc = 0x2CD9C8u;
label_2cd9c8:
    // 0x2cd9c8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd9cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd9d0:
    // 0x2cd9d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd9d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd9d8:
    // 0x2cd9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD9DCu;
    SET_GPR_U32(ctx, 31, 0x2CD9E4u);
    ctx->pc = 0x2CD9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9DCu;
    // 0x2cd9e0: 0x24a5e700  addiu       $a1, $a1, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD9DCu, 0x2CD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9E4u;
label_2cd9e4:
    // 0x2cd9e4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD9E4u;
    {
        const bool branch_taken_0x2cd9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9e4) {
            ctx->pc = 0x2CD9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9E4u;
            // 0x2cd9e8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA18u;
            goto label_2cda18;
        }
    }
    ctx->pc = 0x2CD9ECu;
    // 0x2cd9ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd9f0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD9F0u;
    {
        const bool branch_taken_0x2cd9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9f0) {
            ctx->pc = 0x2CD9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9F0u;
            // 0x2cd9f4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA18u;
            goto label_2cda18;
        }
    }
    ctx->pc = 0x2CD9F8u;
    // 0x2cd9f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD9F8u;
    {
        const bool branch_taken_0x2cd9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9F8u;
        // 0x2cd9fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9f8) {
            ctx->pc = 0x2CDA08u;
            goto label_2cda08;
        }
    }
    ctx->pc = 0x2CDA00u;
    // 0x2cda00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA00u;
    {
        const bool branch_taken_0x2cda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA00u;
        // 0x2cda04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda00) {
            ctx->pc = 0x2CDA10u;
            goto label_2cda10;
        }
    }
    ctx->pc = 0x2CDA08u;
label_2cda08:
    // 0x2cda08: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cda0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cda0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cda10:
    // 0x2cda10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cda10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cda14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cda14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cda18:
    // 0x2cda18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cda18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDA1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA24u);
    ctx->pc = 0x2CDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA1Cu;
    // 0x2cda20: 0x24a5e710  addiu       $a1, $a1, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDA1Cu, 0x2CDA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA24u;
label_2cda24:
    // 0x2cda24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDA24u;
    {
        const bool branch_taken_0x2cda24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda24) {
            ctx->pc = 0x2CDA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA24u;
            // 0x2cda28: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA2Cu;
    // 0x2cda2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cda30: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDA30u;
    {
        const bool branch_taken_0x2cda30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda30) {
            ctx->pc = 0x2CDA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA30u;
            // 0x2cda34: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA38u;
    // 0x2cda38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA38u;
    {
        const bool branch_taken_0x2cda38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA38u;
        // 0x2cda3c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda38) {
            ctx->pc = 0x2CDA48u;
            goto label_2cda48;
        }
    }
    ctx->pc = 0x2CDA40u;
    // 0x2cda40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA40u;
    {
        const bool branch_taken_0x2cda40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA40u;
        // 0x2cda44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda40) {
            ctx->pc = 0x2CDA50u;
            goto label_2cda50;
        }
    }
    ctx->pc = 0x2CDA48u;
label_2cda48:
    // 0x2cda48: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cda48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cda4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cda4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cda50:
    // 0x2cda50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cda50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cda54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cda54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cda58:
    // 0x2cda58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cda58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA64u);
    ctx->pc = 0x2CDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA5Cu;
    // 0x2cda60: 0x24a5e750  addiu       $a1, $a1, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDA5Cu, 0x2CDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA64u;
label_2cda64:
    // 0x2cda64: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDA64u;
    {
        const bool branch_taken_0x2cda64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda64) {
            ctx->pc = 0x2CDA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA64u;
            // 0x2cda68: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA98u;
            goto label_2cda98;
        }
    }
    ctx->pc = 0x2CDA6Cu;
    // 0x2cda6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cda70: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDA70u;
    {
        const bool branch_taken_0x2cda70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda70) {
            ctx->pc = 0x2CDA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA70u;
            // 0x2cda74: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA98u;
            goto label_2cda98;
        }
    }
    ctx->pc = 0x2CDA78u;
    // 0x2cda78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA78u;
    {
        const bool branch_taken_0x2cda78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA78u;
        // 0x2cda7c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda78) {
            ctx->pc = 0x2CDA88u;
            goto label_2cda88;
        }
    }
    ctx->pc = 0x2CDA80u;
    // 0x2cda80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA80u;
    {
        const bool branch_taken_0x2cda80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA80u;
        // 0x2cda84: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda80) {
            ctx->pc = 0x2CDA90u;
            goto label_2cda90;
        }
    }
    ctx->pc = 0x2CDA88u;
label_2cda88:
    // 0x2cda88: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cda8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cda8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cda90:
    // 0x2cda90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cda90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cda94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cda94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cda98:
    // 0x2cda98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cda98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda9c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDA9Cu;
    SET_GPR_U32(ctx, 31, 0x2CDAA4u);
    ctx->pc = 0x2CDAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA9Cu;
    // 0x2cdaa0: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDA9Cu, 0x2CDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAA4u;
label_2cdaa4:
    // 0x2cdaa4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDAA4u;
    {
        const bool branch_taken_0x2cdaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaa4) {
            ctx->pc = 0x2CDAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAA4u;
            // 0x2cdaa8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAD8u;
            goto label_2cdad8;
        }
    }
    ctx->pc = 0x2CDAACu;
    // 0x2cdaac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdab0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDAB0u;
    {
        const bool branch_taken_0x2cdab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdab0) {
            ctx->pc = 0x2CDAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAB0u;
            // 0x2cdab4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAD8u;
            goto label_2cdad8;
        }
    }
    ctx->pc = 0x2CDAB8u;
    // 0x2cdab8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDAB8u;
    {
        const bool branch_taken_0x2cdab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAB8u;
        // 0x2cdabc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdab8) {
            ctx->pc = 0x2CDAC8u;
            goto label_2cdac8;
        }
    }
    ctx->pc = 0x2CDAC0u;
    // 0x2cdac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDAC0u;
    {
        const bool branch_taken_0x2cdac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAC0u;
        // 0x2cdac4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdac0) {
            ctx->pc = 0x2CDAD0u;
            goto label_2cdad0;
        }
    }
    ctx->pc = 0x2CDAC8u;
label_2cdac8:
    // 0x2cdac8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdacc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdad0:
    // 0x2cdad0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdad4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdad8:
    // 0x2cdad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdadc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDADCu;
    SET_GPR_U32(ctx, 31, 0x2CDAE4u);
    ctx->pc = 0x2CDAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDADCu;
    // 0x2cdae0: 0x24a5ea18  addiu       $a1, $a1, -0x15E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDADCu, 0x2CDAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAE4u;
label_2cdae4:
    // 0x2cdae4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDAE4u;
    {
        const bool branch_taken_0x2cdae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdae4) {
            ctx->pc = 0x2CDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAE4u;
            // 0x2cdae8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB18u;
            goto label_2cdb18;
        }
    }
    ctx->pc = 0x2CDAECu;
    // 0x2cdaec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdaf0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDAF0u;
    {
        const bool branch_taken_0x2cdaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaf0) {
            ctx->pc = 0x2CDAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAF0u;
            // 0x2cdaf4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB18u;
            goto label_2cdb18;
        }
    }
    ctx->pc = 0x2CDAF8u;
    // 0x2cdaf8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDAF8u;
    {
        const bool branch_taken_0x2cdaf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAF8u;
        // 0x2cdafc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdaf8) {
            ctx->pc = 0x2CDB08u;
            goto label_2cdb08;
        }
    }
    ctx->pc = 0x2CDB00u;
    // 0x2cdb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDB00u;
    {
        const bool branch_taken_0x2cdb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB00u;
        // 0x2cdb04: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb00) {
            ctx->pc = 0x2CDB10u;
            goto label_2cdb10;
        }
    }
    ctx->pc = 0x2CDB08u;
label_2cdb08:
    // 0x2cdb08: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdb0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdb10:
    // 0x2cdb10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdb14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdb18:
    // 0x2cdb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB24u);
    ctx->pc = 0x2CDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB1Cu;
    // 0x2cdb20: 0x24a5e728  addiu       $a1, $a1, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDB1Cu, 0x2CDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB24u;
label_2cdb24:
    // 0x2cdb24: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDB24u;
    {
        const bool branch_taken_0x2cdb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb24) {
            ctx->pc = 0x2CDB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB24u;
            // 0x2cdb28: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB58u;
            goto label_2cdb58;
        }
    }
    ctx->pc = 0x2CDB2Cu;
    // 0x2cdb2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb30: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDB30u;
    {
        const bool branch_taken_0x2cdb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb30) {
            ctx->pc = 0x2CDB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB30u;
            // 0x2cdb34: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB58u;
            goto label_2cdb58;
        }
    }
    ctx->pc = 0x2CDB38u;
    // 0x2cdb38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDB38u;
    {
        const bool branch_taken_0x2cdb38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB38u;
        // 0x2cdb3c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb38) {
            ctx->pc = 0x2CDB48u;
            goto label_2cdb48;
        }
    }
    ctx->pc = 0x2CDB40u;
    // 0x2cdb40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDB40u;
    {
        const bool branch_taken_0x2cdb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB40u;
        // 0x2cdb44: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb40) {
            ctx->pc = 0x2CDB50u;
            goto label_2cdb50;
        }
    }
    ctx->pc = 0x2CDB48u;
label_2cdb48:
    // 0x2cdb48: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdb4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdb50:
    // 0x2cdb50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdb54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdb58:
    // 0x2cdb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB64u);
    ctx->pc = 0x2CDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB5Cu;
    // 0x2cdb60: 0x24a5e738  addiu       $a1, $a1, -0x18C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDB5Cu, 0x2CDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB64u;
label_2cdb64:
    // 0x2cdb64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CDB64u;
    {
        const bool branch_taken_0x2cdb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB64u;
        // 0x2cdb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb64) {
            ctx->pc = 0x2CDB88u;
            goto label_2cdb88;
        }
    }
    ctx->pc = 0x2CDB6Cu;
    // 0x2cdb6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdb70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDB70u;
    {
        const bool branch_taken_0x2cdb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB70u;
        // 0x2cdb74: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb70) {
            ctx->pc = 0x2CDB88u;
            goto label_2cdb88;
        }
    }
    ctx->pc = 0x2CDB78u;
    // 0x2cdb78: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cdb7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cdb80: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cdb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cdb88:
    // 0x2cdb88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cdb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cdb8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cdb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB90u;
        // 0x2cdb94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDB98u;
}
