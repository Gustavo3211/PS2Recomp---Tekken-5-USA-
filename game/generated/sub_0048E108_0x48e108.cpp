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

// Function: sub_0048E108
// Address: 0x48e108 - 0x48e128
void sub_0048E108_0x48e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E108_0x48e108");
#endif

    ctx->pc = 0x48e108u;

    // 0x48e108: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e10c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e110: 0x24632382  addiu       $v1, $v1, 0x2382
    ctx->pc = 0x48e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9090));
    // 0x48e114: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FA02u));
    // 0x48e118: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x48e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x48e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E11Cu;
        // 0x48e120: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E124u;
    // 0x48e124: 0x0  nop
    ctx->pc = 0x48e124u;
    // NOP
    ctx->pc = 0x48e128u;
}
