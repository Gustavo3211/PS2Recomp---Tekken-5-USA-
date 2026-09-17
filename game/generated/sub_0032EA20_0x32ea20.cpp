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

// Function: sub_0032EA20
// Address: 0x32ea20 - 0x32ea58
void sub_0032EA20_0x32ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA20_0x32ea20");
#endif

    ctx->pc = 0x32ea20u;

    // 0x32ea20: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x32ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ea24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ea24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea28: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x32ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ea2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ea30: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x32ea30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32ea34: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x32ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea38: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x32ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ea3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32ea3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32ea40: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x32ea40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32ea44: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x32ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea48: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x32ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ea4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ea4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ea50: 0x3e00008  jr          $ra
    ctx->pc = 0x32EA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA50u;
        // 0x32ea54: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA58u;
}
