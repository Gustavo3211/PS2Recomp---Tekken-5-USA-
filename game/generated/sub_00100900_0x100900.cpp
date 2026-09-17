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

// Function: sub_00100900
// Address: 0x100900 - 0x100930
void sub_00100900_0x100900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100900_0x100900");
#endif

    ctx->pc = 0x100900u;

    // 0x100900: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100904: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x100908: 0x3463dc40  ori         $v1, $v1, 0xDC40
    ctx->pc = 0x100908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56384);
    // 0x10090c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100910: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100914: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x100918: 0x34a5bc40  ori         $a1, $a1, 0xBC40
    ctx->pc = 0x100918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48192);
    // 0x10091c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x10091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x100920: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x100920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA234u, _value); } while (0);
    // 0x100924: 0xac450124  sw          $a1, 0x124($v0)
    ctx->pc = 0x100924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA2E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2E4u, _value); } while (0);
    // 0x100928: 0x3e00008  jr          $ra
    ctx->pc = 0x100928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100928u;
        // 0x10092c: 0xac440120  sw          $a0, 0x120($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100930u;
}
