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

// Function: sub_002ED8C8
// Address: 0x2ed8c8 - 0x2ed940
void sub_002ED8C8_0x2ed8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED8C8_0x2ed8c8");
#endif

    ctx->pc = 0x2ed8c8u;

    // 0x2ed8c8: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2ed8cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED8D0u;
    {
        const bool branch_taken_0x2ed8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8D0u;
        // 0x2ed8d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8d0) {
            ctx->pc = 0x2ED8E8u;
            goto label_2ed8e8;
        }
    }
    ctx->pc = 0x2ED8D8u;
    // 0x2ed8d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed8dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ed8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed8e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED8E0u;
    {
        const bool branch_taken_0x2ed8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed8e0) {
            ctx->pc = 0x2ED8F4u;
            goto label_2ed8f4;
        }
    }
    ctx->pc = 0x2ED8E8u;
label_2ed8e8:
    // 0x2ed8e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ed8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ed8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ed8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ed8f4:
    // 0x2ed8f4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED8F4u;
    {
        const bool branch_taken_0x2ed8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8f4) {
            ctx->pc = 0x2ED934u;
            goto label_2ed934;
        }
    }
    ctx->pc = 0x2ED8FCu;
    // 0x2ed8fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED900u;
    {
        const bool branch_taken_0x2ed900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED900u;
        // 0x2ed904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed900) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED908u;
    // 0x2ed908: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed90c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed910: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED910u;
    {
        const bool branch_taken_0x2ed910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed910) {
            ctx->pc = 0x2ED914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED910u;
            // 0x2ed914: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED928u;
            goto label_2ed928;
        }
    }
    ctx->pc = 0x2ED918u;
label_2ed918:
    // 0x2ed918: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ed918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ed91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed920: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ed920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ed924: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2ed928:
    // 0x2ed928: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ed92c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ed92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ed930: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2ed930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_2ed934:
    // 0x2ed934: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED93Cu;
    // 0x2ed93c: 0x0  nop
    ctx->pc = 0x2ed93cu;
    // NOP
    ctx->pc = 0x2ed940u;
}
