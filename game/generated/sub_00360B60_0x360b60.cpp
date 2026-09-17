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

// Function: sub_00360B60
// Address: 0x360b60 - 0x360bb0
void sub_00360B60_0x360b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360B60_0x360b60");
#endif

    ctx->pc = 0x360b60u;

    // 0x360b60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360b64: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x360B64u;
    {
        const bool branch_taken_0x360b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x360B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B64u;
        // 0x360b68: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b64) {
            ctx->pc = 0x360BA8u;
            goto label_360ba8;
        }
    }
    ctx->pc = 0x360B6Cu;
    // 0x360b6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360b74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x360b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360b78: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x360b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x360b7c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x360b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x360b80: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x360b80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x360b84: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x360b84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x360b88: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x360b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x360b8c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x360b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x360b90: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x360b90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x360b94: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x360b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x360b98: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x360b98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x360b9c: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x360b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x360ba0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x360ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x360ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360ba8:
    // 0x360ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x360BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360BB0u;
}
