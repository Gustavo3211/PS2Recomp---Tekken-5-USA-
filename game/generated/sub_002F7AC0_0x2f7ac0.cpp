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

// Function: sub_002F7AC0
// Address: 0x2f7ac0 - 0x2f7b70
void sub_002F7AC0_0x2f7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7AC0_0x2f7ac0");
#endif

    ctx->pc = 0x2f7ac0u;

    // 0x2f7ac0: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2f7ac4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f7ac8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F7AC8u;
    {
        const bool branch_taken_0x2f7ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AC8u;
        // 0x2f7acc: 0x2862001f  slti        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ac8) {
            ctx->pc = 0x2F7B48u;
            goto label_2f7b48;
        }
    }
    ctx->pc = 0x2F7AD0u;
    // 0x2f7ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7AD0u;
    {
        const bool branch_taken_0x2f7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AD0u;
        // 0x2f7ad4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ad0) {
            ctx->pc = 0x2F7AF0u;
            goto label_2f7af0;
        }
    }
    ctx->pc = 0x2F7AD8u;
    // 0x2f7ad8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2f7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f7adc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F7ADCu;
    {
        const bool branch_taken_0x2f7adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7ADCu;
        // 0x2f7ae0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7adc) {
            ctx->pc = 0x2F7B30u;
            goto label_2f7b30;
        }
    }
    ctx->pc = 0x2F7AE4u;
    // 0x2f7ae4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F7AE4u;
    {
        const bool branch_taken_0x2f7ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ae4) {
            ctx->pc = 0x2F7B68u;
            goto label_2f7b68;
        }
    }
    ctx->pc = 0x2F7AECu;
    // 0x2f7aec: 0x0  nop
    ctx->pc = 0x2f7aecu;
    // NOP
label_2f7af0:
    // 0x2f7af0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7AF0u;
    {
        const bool branch_taken_0x2f7af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF0u;
        // 0x2f7af4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7af0) {
            ctx->pc = 0x2F7B08u;
            goto label_2f7b08;
        }
    }
    ctx->pc = 0x2F7AF8u;
    // 0x2f7af8: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F7AF8u;
    {
        const bool branch_taken_0x2f7af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7af8) {
            ctx->pc = 0x2F7AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7AF8u;
            // 0x2f7afc: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B60u;
            goto label_2f7b60;
        }
    }
    ctx->pc = 0x2F7B00u;
    // 0x2f7b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B00u;
        // 0x2f7b04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7B08u;
label_2f7b08:
    // 0x2f7b08: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7B08u;
    {
        const bool branch_taken_0x2f7b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b08) {
            ctx->pc = 0x2F7B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B08u;
            // 0x2f7b0c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B18u;
            goto label_2f7b18;
        }
    }
    ctx->pc = 0x2F7B10u;
    // 0x2f7b10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F7B10u;
    {
        const bool branch_taken_0x2f7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B10u;
        // 0x2f7b14: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b10) {
            ctx->pc = 0x2F7B64u;
            goto label_2f7b64;
        }
    }
    ctx->pc = 0x2F7B18u;
label_2f7b18:
    // 0x2f7b18: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x2f7b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2f7b1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2f7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f7b20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F7B24u;
    {
        const bool branch_taken_0x2f7b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B24u;
        // 0x2f7b28: 0x64280b  movn        $a1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b24) {
            ctx->pc = 0x2F7B64u;
            goto label_2f7b64;
        }
    }
    ctx->pc = 0x2F7B2Cu;
    // 0x2f7b2c: 0x0  nop
    ctx->pc = 0x2f7b2cu;
    // NOP
label_2f7b30:
    // 0x2f7b30: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f7b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7b34: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2F7B34u;
    {
        const bool branch_taken_0x2f7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b34) {
            ctx->pc = 0x2F7B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B34u;
            // 0x2f7b38: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B64u;
            goto label_2f7b64;
        }
    }
    ctx->pc = 0x2F7B3Cu;
    // 0x2f7b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B3Cu;
        // 0x2f7b40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7B44u;
    // 0x2f7b44: 0x0  nop
    ctx->pc = 0x2f7b44u;
    // NOP
label_2f7b48:
    // 0x2f7b48: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f7b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7b4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7B4Cu;
    {
        const bool branch_taken_0x2f7b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b4c) {
            ctx->pc = 0x2F7B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B4Cu;
            // 0x2f7b50: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B64u;
            goto label_2f7b64;
        }
    }
    ctx->pc = 0x2F7B54u;
    // 0x2f7b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B54u;
        // 0x2f7b58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7B5Cu;
    // 0x2f7b5c: 0x0  nop
    ctx->pc = 0x2f7b5cu;
    // NOP
label_2f7b60:
    // 0x2f7b60: 0x8045014c  lb          $a1, 0x14C($v0)
    ctx->pc = 0x2f7b60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 332)));
label_2f7b64:
    // 0x2f7b64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f7b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b68:
    // 0x2f7b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7B70u;
}
