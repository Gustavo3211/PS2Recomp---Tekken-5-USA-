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

// Function: sub_00236B30
// Address: 0x236b30 - 0x236b98
void sub_00236B30_0x236b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B30_0x236b30");
#endif

    ctx->pc = 0x236b30u;

    // 0x236b30: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x236b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x236b34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236b38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x236b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236b3c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x236b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236b44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x236b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x236b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x236b4c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236b50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x236b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x236b54: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x236b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x236b58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236b5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x236b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x236b60: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236b64: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x236b64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x236b68: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x236b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236b6c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x236b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236b70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x236b70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x236b74: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x236b74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x236b78: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x236b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236b7c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x236b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236b80: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x236b80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x236b84: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x236b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x236b88: 0x46000004  c1          0x4
    ctx->pc = 0x236b88u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x236b8c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x236b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x236b90: 0x3e00008  jr          $ra
    ctx->pc = 0x236B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B90u;
        // 0x236b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B98u;
}
