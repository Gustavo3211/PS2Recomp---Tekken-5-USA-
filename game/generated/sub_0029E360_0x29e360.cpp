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

// Function: sub_0029E360
// Address: 0x29e360 - 0x29e428
void sub_0029E360_0x29e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E360_0x29e360");
#endif

    switch (ctx->pc) {
        case 0x29e418u: goto label_29e418;
        default: break;
    }

    ctx->pc = 0x29e360u;

    // 0x29e360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e368: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29e36c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x29E36Cu;
    {
        const bool branch_taken_0x29e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e36c) {
            ctx->pc = 0x29E370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E36Cu;
            // 0x29e370: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E41Cu;
            goto label_29e41c;
        }
    }
    ctx->pc = 0x29E374u;
    // 0x29e374: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29e378: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x29e378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x29e37c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e380: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x29e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e388: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29e38c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29e38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29e390: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29e394: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29e394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29e398: 0x0  nop
    ctx->pc = 0x29e398u;
    // NOP
    // 0x29e39c: 0x0  nop
    ctx->pc = 0x29e39cu;
    // NOP
    // 0x29e3a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29e3a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x29e3a4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x29e3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29e3a8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x29e3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e3ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e3b0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29e3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29e3b4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x29E3B4u;
    {
        const bool branch_taken_0x29e3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e3b4) {
            ctx->pc = 0x29E3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E3B4u;
            // 0x29e3b8: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E3D4u;
            goto label_29e3d4;
        }
    }
    ctx->pc = 0x29E3BCu;
    // 0x29e3bc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29e3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29e3c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29e3c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e3c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e3c8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29e3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29e3cc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e3ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e3d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29e3d4:
    // 0x29e3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e3d8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29E3D8u;
    {
        const bool branch_taken_0x29e3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3D8u;
        // 0x29e3dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3d8) {
            ctx->pc = 0x29E41Cu;
            goto label_29e41c;
        }
    }
    ctx->pc = 0x29E3E0u;
    // 0x29e3e0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29e3e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e3e8: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e3ec: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e3f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29e3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29e3f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e3f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e3f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e3fc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e400: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e404: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e408: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x29e408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29e40c: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x29e40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29e410: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E410u;
    SET_GPR_U32(ctx, 31, 0x29E418u);
    ctx->pc = 0x29E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E410u;
    // 0x29e414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E410u, 0x29E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E418u;
label_29e418:
    // 0x29e418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e41c:
    // 0x29e41c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E41Cu;
        // 0x29e420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E424u;
    // 0x29e424: 0x0  nop
    ctx->pc = 0x29e424u;
    // NOP
    ctx->pc = 0x29e428u;
}
