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

// Function: sub_0032ECE0
// Address: 0x32ece0 - 0x32ed48
void sub_0032ECE0_0x32ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ECE0_0x32ece0");
#endif

    ctx->pc = 0x32ece0u;

    // 0x32ece0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x32ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ece4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x32ece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ece8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x32ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ecec: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x32ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ecf0: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x32ecf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x32ecf4: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x32ecf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x32ecf8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32ecf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32ecfc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x32ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ed00: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x32ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ed04: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x32ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ed08: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x32ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ed0c: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x32ed0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x32ed10: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x32ed10u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x32ed14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32ed14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32ed18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ed1c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x32ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ed20: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x32ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ed24: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x32ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ed28: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x32ed28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x32ed2c: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x32ed2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x32ed30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32ed34: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32ed38: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x32ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32ed3c: 0x3e00008  jr          $ra
    ctx->pc = 0x32ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED3Cu;
        // 0x32ed40: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ED44u;
    // 0x32ed44: 0x0  nop
    ctx->pc = 0x32ed44u;
    // NOP
    ctx->pc = 0x32ed48u;
}
