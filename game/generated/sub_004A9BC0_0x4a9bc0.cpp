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

// Function: sub_004A9BC0
// Address: 0x4a9bc0 - 0x4a9be0
void sub_004A9BC0_0x4a9bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BC0_0x4a9bc0");
#endif

    ctx->pc = 0x4a9bc0u;

    // 0x4a9bc0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a9bc4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4a9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a9bc8: 0xa440009c  sh          $zero, 0x9C($v0)
    ctx->pc = 0x4a9bc8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D71Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D71Cu, _value); } while (0);
    // 0x4a9bcc: 0x2444009e  addiu       $a0, $v0, 0x9E
    ctx->pc = 0x4a9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 158));
    // 0x4a9bd0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a9bd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D71Eu));
    // 0x4a9bd4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4a9bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x4a9bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BD8u;
        // 0x4a9bdc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BE0u;
}
