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

// Function: sub_00200890
// Address: 0x200890 - 0x2008c8
void sub_00200890_0x200890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200890_0x200890");
#endif

    ctx->pc = 0x200890u;

    // 0x200890: 0xc4820318  lwc1        $f2, 0x318($a0)
    ctx->pc = 0x200890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200894: 0xc4830324  lwc1        $f3, 0x324($a0)
    ctx->pc = 0x200894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x200898: 0xc4810328  lwc1        $f1, 0x328($a0)
    ctx->pc = 0x200898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20089c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x20089cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2008a0: 0xc4820320  lwc1        $f2, 0x320($a0)
    ctx->pc = 0x2008a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2008a4: 0xc484031c  lwc1        $f4, 0x31C($a0)
    ctx->pc = 0x2008a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2008a8: 0xc480032c  lwc1        $f0, 0x32C($a0)
    ctx->pc = 0x2008a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2008ac: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2008acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2008b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2008b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2008b4: 0xe4830678  swc1        $f3, 0x678($a0)
    ctx->pc = 0x2008b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1656), bits); }
    // 0x2008b8: 0xe481067c  swc1        $f1, 0x67C($a0)
    ctx->pc = 0x2008b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1660), bits); }
    // 0x2008bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2008BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2008C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008BCu;
        // 0x2008c0: 0xe4800680  swc1        $f0, 0x680($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1664), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008C4u;
    // 0x2008c4: 0x0  nop
    ctx->pc = 0x2008c4u;
    // NOP
    ctx->pc = 0x2008c8u;
}
