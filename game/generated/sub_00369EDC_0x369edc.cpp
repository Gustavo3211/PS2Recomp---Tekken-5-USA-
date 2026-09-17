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

// Function: sub_00369EDC
// Address: 0x369edc - 0x369f10
void sub_00369EDC_0x369edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369EDC_0x369edc");
#endif

    ctx->pc = 0x369edcu;

    // 0x369edc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x369edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x369ee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369ee4: 0x2463d770  addiu       $v1, $v1, -0x2890
    ctx->pc = 0x369ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956912));
    // 0x369ee8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x369ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x369eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x369EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EF0u;
        // 0x369ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369EF8u;
    // 0x369ef8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369efc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x369efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x369f00: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x369f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x369f04: 0x2484fb9c  addiu       $a0, $a0, -0x464
    ctx->pc = 0x369f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966172));
    // 0x369f08: 0xc048b90  jal         func_122E40
    ctx->pc = 0x369F08u;
    SET_GPR_U32(ctx, 31, 0x369F10u);
    ctx->pc = 0x369F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F08u;
    // 0x369f0c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x369F08u, 0x369F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F10u;
}
