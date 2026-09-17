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

// Function: sub_00212700
// Address: 0x212700 - 0x212728
void sub_00212700_0x212700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212700_0x212700");
#endif

    ctx->pc = 0x212700u;

    // 0x212700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x212704: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x212704u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x212708: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x212708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x21270c: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x21270cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x212710: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x212710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x212714: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x212714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x212718: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x212718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21271c: 0x3e00008  jr          $ra
    ctx->pc = 0x21271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21271Cu;
        // 0x212720: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212724u;
    // 0x212724: 0x0  nop
    ctx->pc = 0x212724u;
    // NOP
    ctx->pc = 0x212728u;
}
