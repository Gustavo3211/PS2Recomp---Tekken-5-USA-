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

// Function: sub_00331750
// Address: 0x331750 - 0x331798
void sub_00331750_0x331750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331750_0x331750");
#endif

    ctx->pc = 0x331750u;

    // 0x331750: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x331754: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x331754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x331758: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x331758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33175c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x33175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331760: 0xa486000a  sh          $a2, 0xA($a0)
    ctx->pc = 0x331760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x331764: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x331764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x331768: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x331768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x33176c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x33176cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x331770: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x331770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x331774: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x331774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x331778: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x331778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x33177c: 0xa4860008  sh          $a2, 0x8($a0)
    ctx->pc = 0x33177cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x331780: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x331780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x331784: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x331784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x331788: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x331788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x33178c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x33178cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x331790: 0x3e00008  jr          $ra
    ctx->pc = 0x331790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331790u;
        // 0x331794: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331798u;
}
