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

// Function: sub_0026B9D8
// Address: 0x26b9d8 - 0x26bb48
void sub_0026B9D8_0x26b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B9D8_0x26b9d8");
#endif

    ctx->pc = 0x26b9d8u;

    // 0x26b9d8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26b9dc: 0x94860010  lhu         $a2, 0x10($a0)
    ctx->pc = 0x26b9dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26b9e0: 0x8c44032c  lw          $a0, 0x32C($v0)
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x26b9e4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B9E4u;
    {
        const bool branch_taken_0x26b9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9E4u;
        // 0x26b9e8: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9e4) {
            ctx->pc = 0x26BA00u;
            goto label_26ba00;
        }
    }
    ctx->pc = 0x26B9ECu;
    // 0x26b9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b9f0: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26B9F0u;
    {
        const bool branch_taken_0x26b9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9F0u;
        // 0x26b9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9f0) {
            ctx->pc = 0x26BA88u;
            goto label_26ba88;
        }
    }
    ctx->pc = 0x26B9F8u;
    // 0x26b9f8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26B9F8u;
    {
        const bool branch_taken_0x26b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9f8) {
            ctx->pc = 0x26BB40u;
            goto label_26bb40;
        }
    }
    ctx->pc = 0x26BA00u;
label_26ba00:
    // 0x26ba00: 0x24037402  addiu       $v1, $zero, 0x7402
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x26ba04: 0x10e3004e  beq         $a3, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x26BA04u;
    {
        const bool branch_taken_0x26ba04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA04u;
        // 0x26ba08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba04) {
            ctx->pc = 0x26BB40u;
            goto label_26bb40;
        }
    }
    ctx->pc = 0x26BA0Cu;
    // 0x26ba0c: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x26ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x26ba10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26BA10u;
    {
        const bool branch_taken_0x26ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA10u;
        // 0x26ba14: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba10) {
            ctx->pc = 0x26BA38u;
            goto label_26ba38;
        }
    }
    ctx->pc = 0x26BA18u;
    // 0x26ba18: 0x10c20045  beq         $a2, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x26BA18u;
    {
        const bool branch_taken_0x26ba18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA18u;
        // 0x26ba1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba18) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BA20u;
    // 0x26ba20: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x26ba24: 0x50c20043  beql        $a2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26BA24u;
    {
        const bool branch_taken_0x26ba24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ba24) {
            ctx->pc = 0x26BA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA24u;
            // 0x26ba28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB34u;
            goto label_26bb34;
        }
    }
    ctx->pc = 0x26BA2Cu;
    // 0x26ba2c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x26BA2Cu;
    {
        const bool branch_taken_0x26ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA2Cu;
        // 0x26ba30: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba2c) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BA34u;
    // 0x26ba34: 0x0  nop
    ctx->pc = 0x26ba34u;
    // NOP
label_26ba38:
    // 0x26ba38: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x26ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x26ba3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BA3Cu;
    {
        const bool branch_taken_0x26ba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA3Cu;
        // 0x26ba40: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba3c) {
            ctx->pc = 0x26BA58u;
            goto label_26ba58;
        }
    }
    ctx->pc = 0x26BA44u;
    // 0x26ba44: 0x10c2003a  beq         $a2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26BA44u;
    {
        const bool branch_taken_0x26ba44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA44u;
        // 0x26ba48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba44) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BA4Cu;
    // 0x26ba4c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26BA4Cu;
    {
        const bool branch_taken_0x26ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA4Cu;
        // 0x26ba50: 0x2402061f  addiu       $v0, $zero, 0x61F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba4c) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BA54u;
    // 0x26ba54: 0x0  nop
    ctx->pc = 0x26ba54u;
    // NOP
label_26ba58:
    // 0x26ba58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x26ba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x26ba5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA5Cu;
    {
        const bool branch_taken_0x26ba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA5Cu;
        // 0x26ba60: 0x38c20217  xori        $v0, $a2, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba5c) {
            ctx->pc = 0x26BA70u;
            goto label_26ba70;
        }
    }
    ctx->pc = 0x26BA64u;
    // 0x26ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x26BA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA64u;
        // 0x26ba68: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BA6Cu;
    // 0x26ba6c: 0x0  nop
    ctx->pc = 0x26ba6cu;
    // NOP
label_26ba70:
    // 0x26ba70: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x26ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x26ba74: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x26BA74u;
    {
        const bool branch_taken_0x26ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba74) {
            ctx->pc = 0x26BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA74u;
            // 0x26ba78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB40u;
            goto label_26bb40;
        }
    }
    ctx->pc = 0x26BA7Cu;
    // 0x26ba7c: 0x38c2010f  xori        $v0, $a2, 0x10F
    ctx->pc = 0x26ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)271);
    // 0x26ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x26BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA80u;
        // 0x26ba84: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BA88u;
label_26ba88:
    // 0x26ba88: 0x24037402  addiu       $v1, $zero, 0x7402
    ctx->pc = 0x26ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x26ba8c: 0x10e3002c  beq         $a3, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x26BA8Cu;
    {
        const bool branch_taken_0x26ba8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA8Cu;
        // 0x26ba90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba8c) {
            ctx->pc = 0x26BB40u;
            goto label_26bb40;
        }
    }
    ctx->pc = 0x26BA94u;
    // 0x26ba94: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x26ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x26ba98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26BA98u;
    {
        const bool branch_taken_0x26ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA98u;
        // 0x26ba9c: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba98) {
            ctx->pc = 0x26BAC0u;
            goto label_26bac0;
        }
    }
    ctx->pc = 0x26BAA0u;
    // 0x26baa0: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26BAA0u;
    {
        const bool branch_taken_0x26baa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAA0u;
        // 0x26baa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baa0) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BAA8u;
    // 0x26baa8: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x26baac: 0x50c20021  beql        $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26BAACu;
    {
        const bool branch_taken_0x26baac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x26baac) {
            ctx->pc = 0x26BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BAACu;
            // 0x26bab0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB34u;
            goto label_26bb34;
        }
    }
    ctx->pc = 0x26BAB4u;
    // 0x26bab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26BAB4u;
    {
        const bool branch_taken_0x26bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAB4u;
        // 0x26bab8: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bab4) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BABCu;
    // 0x26babc: 0x0  nop
    ctx->pc = 0x26babcu;
    // NOP
label_26bac0:
    // 0x26bac0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x26bac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x26bac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BAC4u;
    {
        const bool branch_taken_0x26bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAC4u;
        // 0x26bac8: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bac4) {
            ctx->pc = 0x26BAE0u;
            goto label_26bae0;
        }
    }
    ctx->pc = 0x26BACCu;
    // 0x26bacc: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26BACCu;
    {
        const bool branch_taken_0x26bacc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BACCu;
        // 0x26bad0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bacc) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BAD4u;
    // 0x26bad4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26BAD4u;
    {
        const bool branch_taken_0x26bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAD4u;
        // 0x26bad8: 0x2402061f  addiu       $v0, $zero, 0x61F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bad4) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BADCu;
    // 0x26badc: 0x0  nop
    ctx->pc = 0x26badcu;
    // NOP
label_26bae0:
    // 0x26bae0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x26bae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x26bae4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BAE4u;
    {
        const bool branch_taken_0x26bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAE4u;
        // 0x26bae8: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bae4) {
            ctx->pc = 0x26BB00u;
            goto label_26bb00;
        }
    }
    ctx->pc = 0x26BAECu;
    // 0x26baec: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BAECu;
    {
        const bool branch_taken_0x26baec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAECu;
        // 0x26baf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baec) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BAF4u;
    // 0x26baf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26BAF4u;
    {
        const bool branch_taken_0x26baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAF4u;
        // 0x26baf8: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baf4) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BAFCu;
    // 0x26bafc: 0x0  nop
    ctx->pc = 0x26bafcu;
    // NOP
label_26bb00:
    // 0x26bb00: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x26bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x26bb04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26BB04u;
    {
        const bool branch_taken_0x26bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB04u;
        // 0x26bb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb04) {
            ctx->pc = 0x26BB40u;
            goto label_26bb40;
        }
    }
    ctx->pc = 0x26BB0Cu;
    // 0x26bb0c: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x26bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26bb10: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BB10u;
    {
        const bool branch_taken_0x26bb10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB10u;
        // 0x26bb14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb10) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BB18u;
    // 0x26bb18: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x26bb1c: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BB1Cu;
    {
        const bool branch_taken_0x26bb1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x26bb1c) {
            ctx->pc = 0x26BB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB1Cu;
            // 0x26bb20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB34u;
            goto label_26bb34;
        }
    }
    ctx->pc = 0x26BB24u;
    // 0x26bb24: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x26bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
label_26bb28:
    // 0x26bb28: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BB28u;
    {
        const bool branch_taken_0x26bb28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x26bb28) {
            ctx->pc = 0x26BB34u;
            goto label_26bb34;
        }
    }
    ctx->pc = 0x26BB30u;
label_26bb30:
    // 0x26bb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bb34:
    // 0x26bb34: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB34u;
        // 0x26bb38: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BB3Cu;
    // 0x26bb3c: 0x0  nop
    ctx->pc = 0x26bb3cu;
    // NOP
label_26bb40:
    // 0x26bb40: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BB48u;
}
