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

// Function: sub_0023A6B8
// Address: 0x23a6b8 - 0x23a6d8
void sub_0023A6B8_0x23a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A6B8_0x23a6b8");
#endif

    ctx->pc = 0x23a6b8u;

    // 0x23a6b8: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x23a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a6bc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23a6c0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x23a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a6c4: 0x2442d730  addiu       $v0, $v0, -0x28D0
    ctx->pc = 0x23a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x23a6c8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x23a6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D738u, _value); } while (0); }
    // 0x23a6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6CCu;
        // 0x23a6d0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6D4u;
    // 0x23a6d4: 0x0  nop
    ctx->pc = 0x23a6d4u;
    // NOP
    ctx->pc = 0x23a6d8u;
}
