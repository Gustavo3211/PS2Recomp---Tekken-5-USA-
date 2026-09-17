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

// Function: sub_0032DB80
// Address: 0x32db80 - 0x32dc38
void sub_0032DB80_0x32db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DB80_0x32db80");
#endif

    ctx->pc = 0x32db80u;

    // 0x32db80: 0x460c6800  add.s       $f0, $f13, $f12
    ctx->pc = 0x32db80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x32db84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32db84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32db88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32db88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32db8c: 0x460e7840  add.s       $f1, $f15, $f14
    ctx->pc = 0x32db8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x32db90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32db90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32db94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32db94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32db98: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x32db98u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x32db9c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x32db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32dba0: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x32dba0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x32dba4: 0xe442003c  swc1        $f2, 0x3C($v0)
    ctx->pc = 0x32dba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x32dba8: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x32dba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x32dbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32dbb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32dbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32dbb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32dbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32dbb8: 0x0  nop
    ctx->pc = 0x32dbb8u;
    // NOP
    // 0x32dbbc: 0x0  nop
    ctx->pc = 0x32dbbcu;
    // NOP
    // 0x32dbc0: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x32dbc0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x32dbc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x32dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x32dbc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x32dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x32dbcc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x32dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x32dbd0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x32dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x32dbd4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x32dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x32dbd8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x32dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x32dbdc: 0x0  nop
    ctx->pc = 0x32dbdcu;
    // NOP
    // 0x32dbe0: 0x0  nop
    ctx->pc = 0x32dbe0u;
    // NOP
    // 0x32dbe4: 0x460f0843  div.s       $f1, $f1, $f15
    ctx->pc = 0x32dbe4u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[15];
    // 0x32dbe8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x32dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x32dbec: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x32dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x32dbf0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32dbf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x32dbf4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x32dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x32dbf8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x32dbfc: 0x0  nop
    ctx->pc = 0x32dbfcu;
    // NOP
    // 0x32dc00: 0x0  nop
    ctx->pc = 0x32dc00u;
    // NOP
    // 0x32dc04: 0x460f18c3  div.s       $f3, $f3, $f15
    ctx->pc = 0x32dc04u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[15];
    // 0x32dc08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x32dc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x32dc0c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x32dc0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x32dc10: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x32dc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x32dc14: 0x0  nop
    ctx->pc = 0x32dc14u;
    // NOP
    // 0x32dc18: 0x0  nop
    ctx->pc = 0x32dc18u;
    // NOP
    // 0x32dc1c: 0x460d1083  div.s       $f2, $f2, $f13
    ctx->pc = 0x32dc1cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[13];
    // 0x32dc20: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x32dc20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x32dc24: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x32dc24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x32dc28: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x32dc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x32dc2c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x32dc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x32DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC30u;
        // 0x32dc34: 0xac8300e4  sw          $v1, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DC38u;
}
