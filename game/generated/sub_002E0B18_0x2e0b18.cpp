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

// Function: sub_002E0B18
// Address: 0x2e0b18 - 0x2e0b88
void sub_002E0B18_0x2e0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B18_0x2e0b18");
#endif

    ctx->pc = 0x2e0b18u;

    // 0x2e0b18: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e0b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0B20u;
    {
        const bool branch_taken_0x2e0b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B20u;
        // 0x2e0b24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b20) {
            ctx->pc = 0x2E0B38u;
            goto label_2e0b38;
        }
    }
    ctx->pc = 0x2E0B28u;
    // 0x2e0b28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0b2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0b30: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0B30u;
    {
        const bool branch_taken_0x2e0b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0b30) {
            ctx->pc = 0x2E0B44u;
            goto label_2e0b44;
        }
    }
    ctx->pc = 0x2E0B38u;
label_2e0b38:
    // 0x2e0b38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b40: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0b44:
    // 0x2e0b44: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0B44u;
    {
        const bool branch_taken_0x2e0b44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b44) {
            ctx->pc = 0x2E0B80u;
            goto label_2e0b80;
        }
    }
    ctx->pc = 0x2E0B4Cu;
    // 0x2e0b4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0b50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0B50u;
    {
        const bool branch_taken_0x2e0b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B50u;
        // 0x2e0b54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b50) {
            ctx->pc = 0x2E0B68u;
            goto label_2e0b68;
        }
    }
    ctx->pc = 0x2E0B58u;
    // 0x2e0b58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0b5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0b60: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0B60u;
    {
        const bool branch_taken_0x2e0b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0b60) {
            ctx->pc = 0x2E0B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B60u;
            // 0x2e0b64: 0x8cc2008c  lw          $v0, 0x8C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B78u;
            goto label_2e0b78;
        }
    }
    ctx->pc = 0x2E0B68u;
label_2e0b68:
    // 0x2e0b68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0b74: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x2e0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8Cu));
label_2e0b78:
    // 0x2e0b78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0B78u;
    {
        const bool branch_taken_0x2e0b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b78) {
            ctx->pc = 0x2E0B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B78u;
            // 0x2e0b7c: 0xacc5008c  sw          $a1, 0x8C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B80u;
            goto label_2e0b80;
        }
    }
    ctx->pc = 0x2E0B80u;
label_2e0b80:
    // 0x2e0b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B88u;
}
