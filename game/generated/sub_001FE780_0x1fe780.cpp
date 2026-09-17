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

// Function: sub_001FE780
// Address: 0x1fe780 - 0x1fe7c0
void sub_001FE780_0x1fe780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE780_0x1fe780");
#endif

    ctx->pc = 0x1fe780u;

    // 0x1fe780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe784: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1fe784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe788: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1fe788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fe78c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE78Cu;
    {
        const bool branch_taken_0x1fe78c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE78Cu;
        // 0x1fe790: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe78c) {
            ctx->pc = 0x1FE7B4u;
            goto label_1fe7b4;
        }
    }
    ctx->pc = 0x1FE794u;
    // 0x1fe794: 0x908201b3  lbu         $v0, 0x1B3($a0)
    ctx->pc = 0x1fe794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 435)));
    // 0x1fe798: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE798u;
    {
        const bool branch_taken_0x1fe798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe798) {
            ctx->pc = 0x1FE7B4u;
            goto label_1fe7b4;
        }
    }
    ctx->pc = 0x1FE7A0u;
    // 0x1fe7a0: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x1fe7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe7a4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1fe7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1fe7a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe7ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fe7acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fe7b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fe7b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fe7b4:
    // 0x1fe7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7B4u;
        // 0x1fe7b8: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE7BCu;
    // 0x1fe7bc: 0x0  nop
    ctx->pc = 0x1fe7bcu;
    // NOP
    ctx->pc = 0x1fe7c0u;
}
