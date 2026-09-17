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

// Function: sub_0020CB58
// Address: 0x20cb58 - 0x20cb80
void sub_0020CB58_0x20cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB58_0x20cb58");
#endif

    ctx->pc = 0x20cb58u;

    // 0x20cb58: 0x24820750  addiu       $v0, $a0, 0x750
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x20cb5c: 0x24840510  addiu       $a0, $a0, 0x510
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x20cb60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb64: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x20cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20cb68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cb6c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x20cb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20cb70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB74u;
        // 0x20cb78: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CB7Cu;
    // 0x20cb7c: 0x0  nop
    ctx->pc = 0x20cb7cu;
    // NOP
    ctx->pc = 0x20cb80u;
}
