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

// Function: sub_002CE1E8
// Address: 0x2ce1e8 - 0x2ce228
void sub_002CE1E8_0x2ce1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE1E8_0x2ce1e8");
#endif

    switch (ctx->pc) {
        case 0x2ce1f8u: goto label_2ce1f8;
        default: break;
    }

    ctx->pc = 0x2ce1e8u;

    // 0x2ce1e8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce1f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE1F0u;
    {
        const bool branch_taken_0x2ce1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1F0u;
        // 0x2ce1f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1f0) {
            ctx->pc = 0x2CE208u;
            goto label_2ce208;
        }
    }
    ctx->pc = 0x2CE1F8u;
label_2ce1f8:
    // 0x2ce1f8: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x2ce1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2ce1fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE1FCu;
    {
        const bool branch_taken_0x2ce1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1FCu;
        // 0x2ce200: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1fc) {
            ctx->pc = 0x2CE220u;
            goto label_2ce220;
        }
    }
    ctx->pc = 0x2CE204u;
    // 0x2ce204: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2ce204u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce208:
    // 0x2ce208: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE208u;
    {
        const bool branch_taken_0x2ce208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce208) {
            ctx->pc = 0x2CE220u;
            goto label_2ce220;
        }
    }
    ctx->pc = 0x2CE210u;
    // 0x2ce210: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce214: 0x5062fff8  beql        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE214u;
    {
        const bool branch_taken_0x2ce214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce214) {
            ctx->pc = 0x2CE218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE214u;
            // 0x2ce218: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce1f8;
        }
    }
    ctx->pc = 0x2CE21Cu;
    // 0x2ce21c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce220:
    // 0x2ce220: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE220u;
        // 0x2ce224: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE228u;
}
