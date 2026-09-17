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

// Function: sub_0048ADF8
// Address: 0x48adf8 - 0x48b0b8
void sub_0048ADF8_0x48adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ADF8_0x48adf8");
#endif

    switch (ctx->pc) {
        case 0x48ae18u: goto label_48ae18;
        case 0x48ae20u: goto label_48ae20;
        case 0x48ae28u: goto label_48ae28;
        case 0x48af48u: goto label_48af48;
        case 0x48b028u: goto label_48b028;
        default: break;
    }

    ctx->pc = 0x48adf8u;

    // 0x48adf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48adfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x48adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x48ae00: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x48ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x48ae04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x48ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x48ae08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x48ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x48ae0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48ae10: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48AE10u;
    SET_GPR_U32(ctx, 31, 0x48AE18u);
    ctx->pc = 0x48AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AE10u;
    // 0x48ae14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48AE10u, 0x48AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AE18u;
label_48ae18:
    // 0x48ae18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48ae18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ae1c: 0x0  nop
    ctx->pc = 0x48ae1cu;
    // NOP
label_48ae20:
    // 0x48ae20: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x48AE20u;
    SET_GPR_U32(ctx, 31, 0x48AE28u);
    ctx->pc = 0x48AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AE20u;
    // 0x48ae24: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x48AE20u, 0x48AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AE28u;
label_48ae28:
    // 0x48ae28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ae2c: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x48ae2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48ae30: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x48AE30u;
    {
        const bool branch_taken_0x48ae30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ae30) {
            ctx->pc = 0x48AE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48AE30u;
            // 0x48ae34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48AECCu;
            goto label_48aecc;
        }
    }
    ctx->pc = 0x48AE38u;
    // 0x48ae38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x48ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48ae3c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48ae40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48ae44: 0x8c639e70  lw          $v1, -0x6190($v1)
    ctx->pc = 0x48ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942320)));
    // 0x48ae48: 0x600008  jr          $v1
    ctx->pc = 0x48AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48AE50u: goto label_48ae50;
            case 0x48AE60u: goto label_48ae60;
            case 0x48AE70u: goto label_48ae70;
            case 0x48AE80u: goto label_48ae80;
            case 0x48AE90u: goto label_48ae90;
            case 0x48AEA0u: goto label_48aea0;
            case 0x48AEB0u: goto label_48aeb0;
            case 0x48AEC0u: goto label_48aec0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AE48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48AE50u;
label_48ae50:
    // 0x48ae50: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ae54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x48AE54u;
    {
        const bool branch_taken_0x48ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE54u;
        // 0x48ae58: 0xa444d620  sh          $a0, -0x29E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956576), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae54) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AE5Cu;
    // 0x48ae5c: 0x0  nop
    ctx->pc = 0x48ae5cu;
    // NOP
label_48ae60:
    // 0x48ae60: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ae64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x48AE64u;
    {
        const bool branch_taken_0x48ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE64u;
        // 0x48ae68: 0xa444d622  sh          $a0, -0x29DE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956578), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae64) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AE6Cu;
    // 0x48ae6c: 0x0  nop
    ctx->pc = 0x48ae6cu;
    // NOP
label_48ae70:
    // 0x48ae70: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ae74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48AE74u;
    {
        const bool branch_taken_0x48ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE74u;
        // 0x48ae78: 0xa444d624  sh          $a0, -0x29DC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956580), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae74) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AE7Cu;
    // 0x48ae7c: 0x0  nop
    ctx->pc = 0x48ae7cu;
    // NOP
label_48ae80:
    // 0x48ae80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ae84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48AE84u;
    {
        const bool branch_taken_0x48ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE84u;
        // 0x48ae88: 0xa444d626  sh          $a0, -0x29DA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956582), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae84) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AE8Cu;
    // 0x48ae8c: 0x0  nop
    ctx->pc = 0x48ae8cu;
    // NOP
label_48ae90:
    // 0x48ae90: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ae94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48AE94u;
    {
        const bool branch_taken_0x48ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AE94u;
        // 0x48ae98: 0xa444d628  sh          $a0, -0x29D8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956584), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae94) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AE9Cu;
    // 0x48ae9c: 0x0  nop
    ctx->pc = 0x48ae9cu;
    // NOP
label_48aea0:
    // 0x48aea0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48aea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48AEA4u;
    {
        const bool branch_taken_0x48aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AEA4u;
        // 0x48aea8: 0xa444d62a  sh          $a0, -0x29D6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956586), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aea4) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AEACu;
    // 0x48aeac: 0x0  nop
    ctx->pc = 0x48aeacu;
    // NOP
label_48aeb0:
    // 0x48aeb0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48aeb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48AEB4u;
    {
        const bool branch_taken_0x48aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AEB4u;
        // 0x48aeb8: 0xa444d62c  sh          $a0, -0x29D4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294956588), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aeb4) {
            ctx->pc = 0x48AEC8u;
            goto label_48aec8;
        }
    }
    ctx->pc = 0x48AEBCu;
    // 0x48aebc: 0x0  nop
    ctx->pc = 0x48aebcu;
    // NOP
label_48aec0:
    // 0x48aec0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48aec4: 0xa444d62e  sh          $a0, -0x29D2($v0)
    ctx->pc = 0x48aec4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72D62Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D62Eu, _value); } while (0);
label_48aec8:
    // 0x48aec8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48aec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48aecc:
    // 0x48aecc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x48aeccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x48aed0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x48AED0u;
    {
        const bool branch_taken_0x48aed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AED0u;
        // 0x48aed4: 0x263200b2  addiu       $s2, $s1, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aed0) {
            ctx->pc = 0x48AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ae20;
        }
    }
    ctx->pc = 0x48AED8u;
    // 0x48aed8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48aedc: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x48aedcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48aee0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x48aee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x48aee4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48aee8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x48aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48aeec: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x48aeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x48aef0: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x48aef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x48aef4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x48aef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48aef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48aefc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x48af00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x48af00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48af04: 0x862200b6  lh          $v0, 0xB6($s1)
    ctx->pc = 0x48af04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 182)));
    // 0x48af08: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x48af08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48af0c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48af10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48af14: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48af14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48af18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48af18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48af1c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x48af1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48af20: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x48af20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48af24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48af28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48af2c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48af30: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x48af30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48af34: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x48AF34u;
    {
        const bool branch_taken_0x48af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AF34u;
        // 0x48af38: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48af34) {
            ctx->pc = 0x48AFBCu;
            goto label_48afbc;
        }
    }
    ctx->pc = 0x48AF3Cu;
    // 0x48af3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x48af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48af40: 0xc13e4ae  jal         func_4F92B8
    ctx->pc = 0x48AF40u;
    SET_GPR_U32(ctx, 31, 0x48AF48u);
    ctx->pc = 0x48AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AF40u;
    // 0x48af44: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F92B8u, 0x48AF40u, 0x48AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AF48u;
label_48af48:
    // 0x48af48: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x48af48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48af4c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x48af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x48af50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x48af50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48af54: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x48af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48af58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48af58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48af5c: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x48af5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48af60: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x48af60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x48af64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48af64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48af68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48af6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48af6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48af70: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48af70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x48af74: 0xa4a60032  sh          $a2, 0x32($a1)
    ctx->pc = 0x48af74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x48af78: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48af7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48af80: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48af84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48af84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48af88: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x48af88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48af8c: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x48af8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48af90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48af94: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48af98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48af98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48af9c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48afa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48afa4: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x48afa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48afa8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48afac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48afb0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48afb4: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x48afb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48afb8: 0xa4a20022  sh          $v0, 0x22($a1)
    ctx->pc = 0x48afb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 2));
label_48afbc:
    // 0x48afbc: 0x263200bc  addiu       $s2, $s1, 0xBC
    ctx->pc = 0x48afbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x48afc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x48afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48afc4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x48afc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48afc8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x48afc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x48afcc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x48afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48afd0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48afd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48afd4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48afd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48afd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48afd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48afdc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48afe0: 0x862200b8  lh          $v0, 0xB8($s1)
    ctx->pc = 0x48afe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x48afe4: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x48afe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48afe8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48afec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48afecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48aff0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48aff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48aff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48aff8: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x48aff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48affc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x48affcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48b000: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48b000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48b004: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b008: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48b00c: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x48b00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b010: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x48B010u;
    {
        const bool branch_taken_0x48b010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B010u;
        // 0x48b014: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b010) {
            ctx->pc = 0x48B09Cu;
            goto label_48b09c;
        }
    }
    ctx->pc = 0x48B018u;
    // 0x48b018: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x48b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x48b01c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x48b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48b020: 0xc13e4ae  jal         func_4F92B8
    ctx->pc = 0x48B020u;
    SET_GPR_U32(ctx, 31, 0x48B028u);
    ctx->pc = 0x48B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B020u;
    // 0x48b024: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F92B8u, 0x48B020u, 0x48B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B028u;
label_48b028:
    // 0x48b028: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x48b028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x48b02c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x48b02cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b030: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x48b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x48b034: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x48b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b038: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48b038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48b03c: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x48b03cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b040: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x48b040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x48b044: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x48b044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48b048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48b04c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b050: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x48b050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x48b054: 0xa4a60034  sh          $a2, 0x34($a1)
    ctx->pc = 0x48b054u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x48b058: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48b058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48b05c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b060: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48b060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48b064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b068: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x48b068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48b06c: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x48b06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b070: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48b074: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48b078: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b07c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48b080: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x48b084: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x48b084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b088: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x48b088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x48b08c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48b08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48b090: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x48b090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x48b094: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x48b094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x48b098: 0xa4a20024  sh          $v0, 0x24($a1)
    ctx->pc = 0x48b098u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 36), (uint16_t)GPR_U32(ctx, 2));
label_48b09c:
    // 0x48b09c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48b09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b0a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x48b0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48b0a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x48b0a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b0a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x48b0a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48b0ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x48B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B0B0u;
        // 0x48b0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B0B8u;
}
