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

// Function: sub_002318E0
// Address: 0x2318e0 - 0x2319e8
void sub_002318E0_0x2318e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002318E0_0x2318e0");
#endif

    switch (ctx->pc) {
        case 0x231998u: goto label_231998;
        default: break;
    }

    ctx->pc = 0x2318e0u;

    // 0x2318e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2318e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2318e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2318e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2318e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2318e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2318ec: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x2318ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x2318f0: 0xe7b90038  swc1        $f25, 0x38($sp)
    ctx->pc = 0x2318f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2318f4: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x2318f4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x2318f8: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x2318f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2318fc: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2318fcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x231900: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x231900u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x231904: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x231904u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x231908: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x231908u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23190c: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x23190cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x231910: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x231910u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x231914: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x231914u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x231918: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x231918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23191c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231920: 0x2604d320  addiu       $a0, $s0, -0x2CE0
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955808));
    // 0x231924: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x15D320u));
    // 0x231928: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x231928u;
    {
        const bool branch_taken_0x231928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231928u;
        // 0x23192c: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231928) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231930u;
    // 0x231930: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x231930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231934: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x231934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231938: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x231938u;
    {
        const bool branch_taken_0x231938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231938) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231940u;
    // 0x231940: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x231940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231944: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x231944u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231948: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x231948u;
    {
        const bool branch_taken_0x231948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231948) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231950u;
    // 0x231950: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x231950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231954: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x231954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231958: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x231958u;
    {
        const bool branch_taken_0x231958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231958) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231960u;
    // 0x231960: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x231960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231964: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x231964u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231968: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x231968u;
    {
        const bool branch_taken_0x231968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231968) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231970u;
    // 0x231970: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x231970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231974: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x231974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231978: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x231978u;
    {
        const bool branch_taken_0x231978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231978) {
            ctx->pc = 0x231990u;
            goto label_231990;
        }
    }
    ctx->pc = 0x231980u;
    // 0x231980: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x231980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231984: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x231984u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231988: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x231988u;
    {
        const bool branch_taken_0x231988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231988) {
            ctx->pc = 0x23198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231988u;
            // 0x23198c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2319C0u;
            goto label_2319c0;
        }
    }
    ctx->pc = 0x231990u;
label_231990:
    // 0x231990: 0xc0cae3c  jal         func_32B8F0
    ctx->pc = 0x231990u;
    SET_GPR_U32(ctx, 31, 0x231998u);
    ctx->pc = 0x231994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231990u;
    // 0x231994: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B8F0u, 0x231990u, 0x231998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231998u;
label_231998:
    // 0x231998: 0x2602d320  addiu       $v0, $s0, -0x2CE0
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955808));
    // 0x23199c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2319a0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2319a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2319a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2319a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2319a8: 0xe4590014  swc1        $f25, 0x14($v0)
    ctx->pc = 0x2319a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2319ac: 0xe4570018  swc1        $f23, 0x18($v0)
    ctx->pc = 0x2319acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2319b0: 0xe4580020  swc1        $f24, 0x20($v0)
    ctx->pc = 0x2319b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2319b4: 0xe455001c  swc1        $f21, 0x1C($v0)
    ctx->pc = 0x2319b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2319b8: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x2319b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2319bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2319bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2319c0:
    // 0x2319c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2319c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2319c4: 0xc7b90038  lwc1        $f25, 0x38($sp)
    ctx->pc = 0x2319c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2319c8: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x2319c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2319cc: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2319ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2319d0: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2319d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2319d4: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2319d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2319d8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2319d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2319dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2319DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2319E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319DCu;
        // 0x2319e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2319E4u;
    // 0x2319e4: 0x0  nop
    ctx->pc = 0x2319e4u;
    // NOP
    ctx->pc = 0x2319e8u;
}
