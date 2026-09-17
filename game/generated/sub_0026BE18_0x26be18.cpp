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

// Function: sub_0026BE18
// Address: 0x26be18 - 0x26bee8
void sub_0026BE18_0x26be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BE18_0x26be18");
#endif

    switch (ctx->pc) {
        case 0x26beb8u: goto label_26beb8;
        default: break;
    }

    ctx->pc = 0x26be18u;

    // 0x26be18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26be1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26be20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26be24: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26be28: 0x94a20026  lhu         $v0, 0x26($a1)
    ctx->pc = 0x26be28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x26be2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26BE2Cu;
    {
        const bool branch_taken_0x26be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE2Cu;
        // 0x26be30: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be2c) {
            ctx->pc = 0x26BE58u;
            goto label_26be58;
        }
    }
    ctx->pc = 0x26BE34u;
    // 0x26be34: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26be38: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26be3c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BE3Cu;
    {
        const bool branch_taken_0x26be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26be3c) {
            ctx->pc = 0x26BE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BE3Cu;
            // 0x26be40: 0x94a20044  lhu         $v0, 0x44($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE5Cu;
            goto label_26be5c;
        }
    }
    ctx->pc = 0x26BE44u;
    // 0x26be44: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x26be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26be48: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x26be48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x26be4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26be4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26be50: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26BE50u;
    {
        const bool branch_taken_0x26be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE50u;
        // 0x26be54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be50) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE58u;
label_26be58:
    // 0x26be58: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x26be58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
label_26be5c:
    // 0x26be5c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26BE5Cu;
    {
        const bool branch_taken_0x26be5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE5Cu;
        // 0x26be60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be5c) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE64u;
    // 0x26be64: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x26be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x26be68: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x26be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x26be6c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x26be6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26be70: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26BE70u;
    {
        const bool branch_taken_0x26be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE70u;
        // 0x26be74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be70) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE78u;
    // 0x26be78: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x26be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x26be7c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26BE7Cu;
    {
        const bool branch_taken_0x26be7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE7Cu;
        // 0x26be80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be7c) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE84u;
    // 0x26be84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26be88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26be8c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BE8Cu;
    {
        const bool branch_taken_0x26be8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE8Cu;
        // 0x26be90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be8c) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BE94u;
    // 0x26be94: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26be98: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26be9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26BE9Cu;
    {
        const bool branch_taken_0x26be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE9Cu;
        // 0x26bea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be9c) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BEA4u;
    // 0x26bea4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26bea8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26beacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26beb0: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26BEB0u;
    SET_GPR_U32(ctx, 31, 0x26BEB8u);
    ctx->pc = 0x26BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEB0u;
    // 0x26beb4: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26BEB0u, 0x26BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEB8u;
label_26beb8:
    // 0x26beb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BEB8u;
    {
        const bool branch_taken_0x26beb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEB8u;
        // 0x26bebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beb8) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BEC0u;
    // 0x26bec0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26bec4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x26bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x26bec8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BEC8u;
    {
        const bool branch_taken_0x26bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bec8) {
            ctx->pc = 0x26BECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BEC8u;
            // 0x26becc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BED0u;
    // 0x26bed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bed4:
    // 0x26bed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bed8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26bed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bedc: 0x3e00008  jr          $ra
    ctx->pc = 0x26BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEDCu;
        // 0x26bee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BEE4u;
    // 0x26bee4: 0x0  nop
    ctx->pc = 0x26bee4u;
    // NOP
    ctx->pc = 0x26bee8u;
}
