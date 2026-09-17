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

// Function: sub_00236B98
// Address: 0x236b98 - 0x236be0
void sub_00236B98_0x236b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B98_0x236b98");
#endif

    ctx->pc = 0x236b98u;

    // 0x236b98: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x236b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x236b9c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236ba0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236ba4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x236ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x236ba8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236bac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x236bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x236bb0: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x236bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x236bb4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x236bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236bb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236bbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x236bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x236bc0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236bc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x236bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x236bc8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x236bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236bcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x236bccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x236bd0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x236bd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x236bd4: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x236bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x236bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x236BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BD8u;
        // 0x236bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BE0u;
}
