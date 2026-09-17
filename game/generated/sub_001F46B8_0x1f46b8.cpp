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

// Function: sub_001F46B8
// Address: 0x1f46b8 - 0x1f4780
void sub_001F46B8_0x1f46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F46B8_0x1f46b8");
#endif

    ctx->pc = 0x1f46b8u;

    // 0x1f46b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f46bc: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f46c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f46c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f46c8: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x1f46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x1f46cc: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x1f46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1f46d0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f46d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f46d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1f46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f46dc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f46e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f46e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f46e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f46e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f46e8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1f46e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1f46ec: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f46ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f46f0: 0x46000084  c1          0x84
    ctx->pc = 0x1f46f0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f46f4: 0xe7829724  swc1        $f2, -0x68DC($gp)
    ctx->pc = 0x1f46f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940452), bits); }
    // 0x1f46f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f46fc: 0x244688d0  addiu       $a2, $v0, -0x7730
    ctx->pc = 0x1f46fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f4700: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f4704: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1f4704u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f4708: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1f4708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f470c: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x1f470cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1f4710: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x1f4710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f4714: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1f4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1f4718: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1f4718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1f471c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f471cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4720: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f4724: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1f4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1f4728: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f4728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f472c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f472cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f4730: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1f4730u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f4734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f473c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f473cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4740: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x1f4740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f4744: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1f4744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4748: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F4748u;
    {
        const bool branch_taken_0x1f4748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4748) {
            ctx->pc = 0x1F474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4748u;
            // 0x1f474c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4750u;
            goto label_1f4750;
        }
    }
    ctx->pc = 0x1F4750u;
label_1f4750:
    // 0x1f4750: 0xe4e201e4  swc1        $f2, 0x1E4($a3)
    ctx->pc = 0x1f4750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 484), bits); }
    // 0x1f4754: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1f4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f4758: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x1f4758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f475c: 0xe46001e4  swc1        $f0, 0x1E4($v1)
    ctx->pc = 0x1f475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 484), bits); }
    // 0x1f4760: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f4760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f4764: 0xe44101c8  swc1        $f1, 0x1C8($v0)
    ctx->pc = 0x1f4764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 456), bits); }
    // 0x1f4768: 0xe44101cc  swc1        $f1, 0x1CC($v0)
    ctx->pc = 0x1f4768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 460), bits); }
    // 0x1f476c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f4770: 0xe46101c8  swc1        $f1, 0x1C8($v1)
    ctx->pc = 0x1f4770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 456), bits); }
    // 0x1f4774: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4774u;
        // 0x1f4778: 0xe46101cc  swc1        $f1, 0x1CC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F477Cu;
    // 0x1f477c: 0x0  nop
    ctx->pc = 0x1f477cu;
    // NOP
    ctx->pc = 0x1f4780u;
}
