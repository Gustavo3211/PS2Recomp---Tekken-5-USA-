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

// Function: sub_002E0E90
// Address: 0x2e0e90 - 0x2e0f00
void sub_002E0E90_0x2e0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E90_0x2e0e90");
#endif

    ctx->pc = 0x2e0e90u;

    // 0x2e0e90: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x2e0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x2e0e94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0E98u;
    {
        const bool branch_taken_0x2e0e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E98u;
        // 0x2e0e9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e98) {
            ctx->pc = 0x2E0EB0u;
            goto label_2e0eb0;
        }
    }
    ctx->pc = 0x2E0EA0u;
    // 0x2e0ea0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0ea4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ea8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0EA8u;
    {
        const bool branch_taken_0x2e0ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ea8) {
            ctx->pc = 0x2E0EBCu;
            goto label_2e0ebc;
        }
    }
    ctx->pc = 0x2E0EB0u;
label_2e0eb0:
    // 0x2e0eb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0eb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e0ebc:
    // 0x2e0ebc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0EBCu;
    {
        const bool branch_taken_0x2e0ebc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ebc) {
            ctx->pc = 0x2E0EF8u;
            goto label_2e0ef8;
        }
    }
    ctx->pc = 0x2E0EC4u;
    // 0x2e0ec4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0EC8u;
    {
        const bool branch_taken_0x2e0ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC8u;
        // 0x2e0ecc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ec8) {
            ctx->pc = 0x2E0EE0u;
            goto label_2e0ee0;
        }
    }
    ctx->pc = 0x2E0ED0u;
    // 0x2e0ed0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0ed4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0ed8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0ED8u;
    {
        const bool branch_taken_0x2e0ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0ed8) {
            ctx->pc = 0x2E0EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0ED8u;
            // 0x2e0edc: 0x8cc2005c  lw          $v0, 0x5C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0EF0u;
            goto label_2e0ef0;
        }
    }
    ctx->pc = 0x2E0EE0u;
label_2e0ee0:
    // 0x2e0ee0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e0ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ee8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0eec: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5Cu));
label_2e0ef0:
    // 0x2e0ef0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0EF0u;
    {
        const bool branch_taken_0x2e0ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ef0) {
            ctx->pc = 0x2E0EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0EF0u;
            // 0x2e0ef4: 0xacc5005c  sw          $a1, 0x5C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0EF8u;
            goto label_2e0ef8;
        }
    }
    ctx->pc = 0x2E0EF8u;
label_2e0ef8:
    // 0x2e0ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F00u;
}
