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

// Function: sub_001F6B40
// Address: 0x1f6b40 - 0x1f6b70
void sub_001F6B40_0x1f6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B40_0x1f6b40");
#endif

    ctx->pc = 0x1f6b40u;

    // 0x1f6b40: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1f6b44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b48: 0x24820848  addiu       $v0, $a0, 0x848
    ctx->pc = 0x1f6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2120));
    // 0x1f6b4c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f6b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f6b50: 0x24840834  addiu       $a0, $a0, 0x834
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2100));
    // 0x1f6b54: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x1f6b54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f6b58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f6b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f6b5c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1f6b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6b60: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x1f6b60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f6b64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f6b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f6b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B68u;
        // 0x1f6b6c: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B70u;
}
