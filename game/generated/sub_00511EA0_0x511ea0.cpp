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

// Function: sub_00511EA0
// Address: 0x511ea0 - 0x512070
void sub_00511EA0_0x511ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511EA0_0x511ea0");
#endif

    switch (ctx->pc) {
        case 0x511f20u: goto label_511f20;
        case 0x511f60u: goto label_511f60;
        case 0x511f78u: goto label_511f78;
        case 0x511f90u: goto label_511f90;
        case 0x511fa4u: goto label_511fa4;
        case 0x511fc0u: goto label_511fc0;
        case 0x511fd4u: goto label_511fd4;
        case 0x511fecu: goto label_511fec;
        case 0x512000u: goto label_512000;
        case 0x512040u: goto label_512040;
        default: break;
    }

    ctx->pc = 0x511ea0u;

    // 0x511ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x511ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x511ea4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x511ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x511ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x511ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511eac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x511eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x511eb0: 0x3c130090  lui         $s3, 0x90
    ctx->pc = 0x511eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
    // 0x511eb4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x511eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x511eb8: 0x2663f080  addiu       $v1, $s3, -0xF80
    ctx->pc = 0x511eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x511ebc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x511ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x511ec0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x511ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x511ec4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x511ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x511ec8: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x511ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x511ecc: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x511eccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x511ed0: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x511ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x511ed4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x511ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x511ed8: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x511ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x511edc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x511edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x511ee0: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x511ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x511ee4: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x511ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x511ee8: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x511ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x511eec: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x511eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511ef0: 0x8611000c  lh          $s1, 0xC($s0)
    ctx->pc = 0x511ef0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x511ef4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x511ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x511ef8: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x511ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x511efc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x511efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x511f00: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x511f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x511f04: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x511f04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x511f08: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x511f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x511f0c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x511f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x511f10: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x511F10u;
    {
        const bool branch_taken_0x511f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F10u;
        // 0x511f14: 0xa7a30000  sh          $v1, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f10) {
            ctx->pc = 0x512014u;
            goto label_512014;
        }
    }
    ctx->pc = 0x511F18u;
    // 0x511f18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511f1c: 0x0  nop
    ctx->pc = 0x511f1cu;
    // NOP
label_511f20:
    // 0x511f20: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x511f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x511f24: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x511F24u;
    {
        const bool branch_taken_0x511f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F24u;
        // 0x511f28: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f24) {
            ctx->pc = 0x512000u;
            goto label_512000;
        }
    }
    ctx->pc = 0x511F2Cu;
    // 0x511f2c: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x511F2Cu;
    {
        const bool branch_taken_0x511f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x511f2c) {
            ctx->pc = 0x511F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511F2Cu;
            // 0x511f30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511F34u;
    // 0x511f34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x511f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x511f38: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x511f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x511f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x511f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x511f40: 0x8c63d4a0  lw          $v1, -0x2B60($v1)
    ctx->pc = 0x511f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956192)));
    // 0x511f44: 0x600008  jr          $v1
    ctx->pc = 0x511F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x511F50u: goto label_511f50;
            case 0x511F70u: goto label_511f70;
            case 0x511F80u: goto label_511f80;
            case 0x511F98u: goto label_511f98;
            case 0x511FB0u: goto label_511fb0;
            case 0x511FC8u: goto label_511fc8;
            case 0x511FE0u: goto label_511fe0;
            case 0x511FF8u: goto label_511ff8;
            case 0x512000u: goto label_512000;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511F44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x511F4Cu;
    // 0x511f4c: 0x0  nop
    ctx->pc = 0x511f4cu;
    // NOP
label_511f50:
    // 0x511f50: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x511f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x511f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511f58: 0xc144646  jal         func_511918
    ctx->pc = 0x511F58u;
    SET_GPR_U32(ctx, 31, 0x511F60u);
    ctx->pc = 0x511F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511F58u;
    // 0x511f5c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511918u, 0x511F58u, 0x511F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511F60u;
label_511f60:
    // 0x511f60: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x511F60u;
    {
        const bool branch_taken_0x511f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F60u;
        // 0x511f64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f60) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511F68u;
    // 0x511f68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x511F68u;
    {
        const bool branch_taken_0x511f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F68u;
        // 0x511f6c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f68) {
            ctx->pc = 0x512058u;
            goto label_512058;
        }
    }
    ctx->pc = 0x511F70u;
label_511f70:
    // 0x511f70: 0xc1445be  jal         func_5116F8
    ctx->pc = 0x511F70u;
    SET_GPR_U32(ctx, 31, 0x511F78u);
    ctx->pc = 0x511F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511F70u;
    // 0x511f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5116F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5116F8u, 0x511F70u, 0x511F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511F78u;
label_511f78:
    // 0x511f78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x511F78u;
    {
        const bool branch_taken_0x511f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F78u;
        // 0x511f7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f78) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511F80u;
label_511f80:
    // 0x511f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511f84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x511f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511f88: 0xc1445f2  jal         func_5117C8
    ctx->pc = 0x511F88u;
    SET_GPR_U32(ctx, 31, 0x511F90u);
    ctx->pc = 0x511F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511F88u;
    // 0x511f8c: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5117C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5117C8u, 0x511F88u, 0x511F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511F90u;
label_511f90:
    // 0x511f90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x511F90u;
    {
        const bool branch_taken_0x511f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511F90u;
        // 0x511f94: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511f90) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511F98u;
label_511f98:
    // 0x511f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511f9c: 0xc144630  jal         func_5118C0
    ctx->pc = 0x511F9Cu;
    SET_GPR_U32(ctx, 31, 0x511FA4u);
    ctx->pc = 0x511FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511F9Cu;
    // 0x511fa0: 0x27a50002  addiu       $a1, $sp, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5118C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5118C0u, 0x511F9Cu, 0x511FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511FA4u;
label_511fa4:
    // 0x511fa4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x511FA4u;
    {
        const bool branch_taken_0x511fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511FA4u;
        // 0x511fa8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511fa4) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511FACu;
    // 0x511fac: 0x0  nop
    ctx->pc = 0x511facu;
    // NOP
label_511fb0:
    // 0x511fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511fb4: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x511fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x511fb8: 0xc144658  jal         func_511960
    ctx->pc = 0x511FB8u;
    SET_GPR_U32(ctx, 31, 0x511FC0u);
    ctx->pc = 0x511FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511FB8u;
    // 0x511fbc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511960u, 0x511FB8u, 0x511FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511FC0u;
label_511fc0:
    // 0x511fc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x511FC0u;
    {
        const bool branch_taken_0x511fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511FC0u;
        // 0x511fc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511fc0) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511FC8u;
label_511fc8:
    // 0x511fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511fcc: 0xc144670  jal         func_5119C0
    ctx->pc = 0x511FCCu;
    SET_GPR_U32(ctx, 31, 0x511FD4u);
    ctx->pc = 0x511FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511FCCu;
    // 0x511fd0: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5119C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5119C0u, 0x511FCCu, 0x511FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511FD4u;
label_511fd4:
    // 0x511fd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x511FD4u;
    {
        const bool branch_taken_0x511fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511FD4u;
        // 0x511fd8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511fd4) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511FDCu;
    // 0x511fdc: 0x0  nop
    ctx->pc = 0x511fdcu;
    // NOP
label_511fe0:
    // 0x511fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x511fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511fe4: 0xc1446b6  jal         func_511AD8
    ctx->pc = 0x511FE4u;
    SET_GPR_U32(ctx, 31, 0x511FECu);
    ctx->pc = 0x511FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511FE4u;
    // 0x511fe8: 0x27a50006  addiu       $a1, $sp, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511AD8u, 0x511FE4u, 0x511FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511FECu;
label_511fec:
    // 0x511fec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x511FECu;
    {
        const bool branch_taken_0x511fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511FECu;
        // 0x511ff0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511fec) {
            ctx->pc = 0x512004u;
            goto label_512004;
        }
    }
    ctx->pc = 0x511FF4u;
    // 0x511ff4: 0x0  nop
    ctx->pc = 0x511ff4u;
    // NOP
label_511ff8:
    // 0x511ff8: 0xc1446fc  jal         func_511BF0
    ctx->pc = 0x511FF8u;
    SET_GPR_U32(ctx, 31, 0x512000u);
    ctx->pc = 0x511FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511FF8u;
    // 0x511ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511BF0u, 0x511FF8u, 0x512000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512000u;
label_512000:
    // 0x512000: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x512000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_512004:
    // 0x512004: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x512004u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x512008: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x512008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x51200c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x51200Cu;
    {
        const bool branch_taken_0x51200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x512010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51200Cu;
        // 0x512010: 0x32317fff  andi        $s1, $s1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51200c) {
            ctx->pc = 0x511F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511f20;
        }
    }
    ctx->pc = 0x512014u;
label_512014:
    // 0x512014: 0x87a20002  lh          $v0, 0x2($sp)
    ctx->pc = 0x512014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x512018: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x512018u;
    {
        const bool branch_taken_0x512018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512018u;
        // 0x51201c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512018) {
            ctx->pc = 0x512044u;
            goto label_512044;
        }
    }
    ctx->pc = 0x512020u;
    // 0x512020: 0x87a80000  lh          $t0, 0x0($sp)
    ctx->pc = 0x512020u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x512024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512028: 0x87a90004  lh          $t1, 0x4($sp)
    ctx->pc = 0x512028u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x51202c: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x51202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x512030: 0x87aa0006  lh          $t2, 0x6($sp)
    ctx->pc = 0x512030u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x512034: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x512034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x512038: 0xc144730  jal         func_511CC0
    ctx->pc = 0x512038u;
    SET_GPR_U32(ctx, 31, 0x512040u);
    ctx->pc = 0x51203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512038u;
    // 0x51203c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511CC0u, 0x512038u, 0x512040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512040u;
label_512040:
    // 0x512040: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x512040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_512044:
    // 0x512044: 0x2663f080  addiu       $v1, $s3, -0xF80
    ctx->pc = 0x512044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x512048: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x512048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51204c: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x51204cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x512050: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x512050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x512054: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x512054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_512058:
    // 0x512058: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x512058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x51205c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x51205cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x512060: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x512060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x512064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x512064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x512068: 0x3e00008  jr          $ra
    ctx->pc = 0x512068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512068u;
        // 0x51206c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512070u;
}
