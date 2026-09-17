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

// Function: sub_0027EBE8
// Address: 0x27ebe8 - 0x27ec68
void sub_0027EBE8_0x27ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EBE8_0x27ebe8");
#endif

    ctx->pc = 0x27ebe8u;

    // 0x27ebe8: 0xc4880058  lwc1        $f8, 0x58($a0)
    ctx->pc = 0x27ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27ebec: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x27ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ebf0: 0xc487005c  lwc1        $f7, 0x5C($a0)
    ctx->pc = 0x27ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ebf4: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x27ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x27ebf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ebf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ebfc: 0x46024141  sub.s       $f5, $f8, $f2
    ctx->pc = 0x27ebfcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x27ec00: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x27ec04: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x27ec04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x27ec08: 0x46081102  mul.s       $f4, $f2, $f8
    ctx->pc = 0x27ec08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x27ec0c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x27ec0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x27ec10: 0xc7838e2c  lwc1        $f3, -0x71D4($gp)
    ctx->pc = 0x27ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ec14: 0xc7868e30  lwc1        $f6, -0x71D0($gp)
    ctx->pc = 0x27ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ec18: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x27ec18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x27ec1c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x27ec1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x27ec20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ec20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ec24: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x27ec24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x27ec28: 0xc78a8e34  lwc1        $f10, -0x71CC($gp)
    ctx->pc = 0x27ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x27ec2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27ec2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27ec30: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x27ec30u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x27ec34: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x27ec34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x27ec38: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x27ec38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x27ec3c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x27ec3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x27ec40: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x27ec40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x27ec44: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27ec44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x27ec48: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x27ec48u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x27ec4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x27ec4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27ec50: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x27ec50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x27ec54: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x27ec54u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x27ec58: 0xe487005c  swc1        $f7, 0x5C($a0)
    ctx->pc = 0x27ec58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x27ec5c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x27ec5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x27ec60: 0x3e00008  jr          $ra
    ctx->pc = 0x27EC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC60u;
        // 0x27ec64: 0xe4880058  swc1        $f8, 0x58($a0) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EC68u;
}
