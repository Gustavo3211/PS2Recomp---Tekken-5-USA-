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

// Function: sub_0024D568
// Address: 0x24d568 - 0x24d590
void sub_0024D568_0x24d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D568_0x24d568");
#endif

    ctx->pc = 0x24d568u;

    // 0x24d568: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24d56c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D56Cu;
    {
        const bool branch_taken_0x24d56c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d56c) {
            ctx->pc = 0x24D57Cu;
            goto label_24d57c;
        }
    }
    ctx->pc = 0x24D574u;
    // 0x24d574: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D574u;
    {
        const bool branch_taken_0x24d574 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x24D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D574u;
        // 0x24d578: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d574) {
            ctx->pc = 0x24D588u;
            goto label_24d588;
        }
    }
    ctx->pc = 0x24D57Cu;
label_24d57c:
    // 0x24d57c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24d580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d584: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x24d584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
label_24d588:
    // 0x24d588: 0x3e00008  jr          $ra
    ctx->pc = 0x24D588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D590u;
}
