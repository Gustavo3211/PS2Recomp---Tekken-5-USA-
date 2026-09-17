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

// Function: sub_0011FEE8
// Address: 0x11fee8 - 0x11ff28
void sub_0011FEE8_0x11fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FEE8_0x11fee8");
#endif

    ctx->pc = 0x11fee8u;

    // 0x11fee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11fee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11feec: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11feecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11fef0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11fef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11fef4: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x11fef4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11fef8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11fefc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11ff00: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x11ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ff04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ff04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ff08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x11ff08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11ff0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ff10: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11ff14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11ff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11ff18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11ff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF1Cu;
        // 0x11ff20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF24u;
    // 0x11ff24: 0x0  nop
    ctx->pc = 0x11ff24u;
    // NOP
    ctx->pc = 0x11ff28u;
}
