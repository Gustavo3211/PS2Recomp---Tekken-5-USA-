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

// Function: sub_002E0BF8
// Address: 0x2e0bf8 - 0x2e0cd0
void sub_002E0BF8_0x2e0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0BF8_0x2e0bf8");
#endif

    ctx->pc = 0x2e0bf8u;

    // 0x2e0bf8: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e0bfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C00u;
    {
        const bool branch_taken_0x2e0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C00u;
        // 0x2e0c04: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c00) {
            ctx->pc = 0x2E0C18u;
            goto label_2e0c18;
        }
    }
    ctx->pc = 0x2E0C08u;
    // 0x2e0c08: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0c0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0c10: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0C10u;
    {
        const bool branch_taken_0x2e0c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0c10) {
            ctx->pc = 0x2E0C24u;
            goto label_2e0c24;
        }
    }
    ctx->pc = 0x2E0C18u;
label_2e0c18:
    // 0x2e0c18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0c24:
    // 0x2e0c24: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0C24u;
    {
        const bool branch_taken_0x2e0c24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c24) {
            ctx->pc = 0x2E0C58u;
            goto label_2e0c58;
        }
    }
    ctx->pc = 0x2E0C2Cu;
    // 0x2e0c2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0c30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C30u;
    {
        const bool branch_taken_0x2e0c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C30u;
        // 0x2e0c34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c30) {
            ctx->pc = 0x2E0C48u;
            goto label_2e0c48;
        }
    }
    ctx->pc = 0x2E0C38u;
    // 0x2e0c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0c3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0c40: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C40u;
    {
        const bool branch_taken_0x2e0c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0c40) {
            ctx->pc = 0x2E0C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C40u;
            // 0x2e0c44: 0xacc50094  sw          $a1, 0x94($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C58u;
            goto label_2e0c58;
        }
    }
    ctx->pc = 0x2E0C48u;
label_2e0c48:
    // 0x2e0c48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0c54: 0xacc50094  sw          $a1, 0x94($a2)
    ctx->pc = 0x2e0c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x94u, _value); } while (0);
label_2e0c58:
    // 0x2e0c58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C60u;
    // 0x2e0c60: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e0c64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C68u;
    {
        const bool branch_taken_0x2e0c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C68u;
        // 0x2e0c6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c68) {
            ctx->pc = 0x2E0C80u;
            goto label_2e0c80;
        }
    }
    ctx->pc = 0x2E0C70u;
    // 0x2e0c70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0c74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0c78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0C78u;
    {
        const bool branch_taken_0x2e0c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0c78) {
            ctx->pc = 0x2E0C8Cu;
            goto label_2e0c8c;
        }
    }
    ctx->pc = 0x2E0C80u;
label_2e0c80:
    // 0x2e0c80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0c84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c88: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0c8c:
    // 0x2e0c8c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0C8Cu;
    {
        const bool branch_taken_0x2e0c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c8c) {
            ctx->pc = 0x2E0CC8u;
            goto label_2e0cc8;
        }
    }
    ctx->pc = 0x2E0C94u;
    // 0x2e0c94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0c98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C98u;
    {
        const bool branch_taken_0x2e0c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C98u;
        // 0x2e0c9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c98) {
            ctx->pc = 0x2E0CB0u;
            goto label_2e0cb0;
        }
    }
    ctx->pc = 0x2E0CA0u;
    // 0x2e0ca0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0ca4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ca8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0CA8u;
    {
        const bool branch_taken_0x2e0ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ca8) {
            ctx->pc = 0x2E0CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CA8u;
            // 0x2e0cac: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0CC0u;
            goto label_2e0cc0;
        }
    }
    ctx->pc = 0x2E0CB0u;
label_2e0cb0:
    // 0x2e0cb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cb8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0cbc: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x54u));
label_2e0cc0:
    // 0x2e0cc0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0CC0u;
    {
        const bool branch_taken_0x2e0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cc0) {
            ctx->pc = 0x2E0CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CC0u;
            // 0x2e0cc4: 0xacc50054  sw          $a1, 0x54($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0CC8u;
            goto label_2e0cc8;
        }
    }
    ctx->pc = 0x2E0CC8u;
label_2e0cc8:
    // 0x2e0cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0CD0u;
}
