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

// Function: sub_003396E8
// Address: 0x3396e8 - 0x3397c8
void sub_003396E8_0x3396e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003396E8_0x3396e8");
#endif

    switch (ctx->pc) {
        case 0x339788u: goto label_339788;
        case 0x339794u: goto label_339794;
        default: break;
    }

    ctx->pc = 0x3396e8u;

    // 0x3396e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3396e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3396ec: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3396ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3396f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3396f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3396f4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3396f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3396f8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3396f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3396fc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3396fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x339700: 0xe7b40118  swc1        $f20, 0x118($sp)
    ctx->pc = 0x339700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x339704: 0xd8980040  lqc2        $vf24, 0x40($a0)
    ctx->pc = 0x339704u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x339708: 0xd8990050  lqc2        $vf25, 0x50($a0)
    ctx->pc = 0x339708u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x33970c: 0xd89a0060  lqc2        $vf26, 0x60($a0)
    ctx->pc = 0x33970cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x339710: 0xd89b0070  lqc2        $vf27, 0x70($a0)
    ctx->pc = 0x339710u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x339714: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x339714u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x339718: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x339718u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x33971c: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x33971cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x339720: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x339720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x339724: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x339724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x339728: 0xd8980080  lqc2        $vf24, 0x80($a0)
    ctx->pc = 0x339728u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x33972c: 0xd8990090  lqc2        $vf25, 0x90($a0)
    ctx->pc = 0x33972cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x339730: 0xd89a00a0  lqc2        $vf26, 0xA0($a0)
    ctx->pc = 0x339730u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x339734: 0xd89b00b0  lqc2        $vf27, 0xB0($a0)
    ctx->pc = 0x339734u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x339738: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x339738u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x33973c: 0xf8790010  sqc2        $vf25, 0x10($v1)
    ctx->pc = 0x33973cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x339740: 0xf87a0020  sqc2        $vf26, 0x20($v1)
    ctx->pc = 0x339740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x339744: 0xf87b0030  sqc2        $vf27, 0x30($v1)
    ctx->pc = 0x339744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x339748: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x339748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33974c: 0xd8980000  lqc2        $vf24, 0x0($a0)
    ctx->pc = 0x33974cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339750: 0xd8990010  lqc2        $vf25, 0x10($a0)
    ctx->pc = 0x339750u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x339754: 0xd89a0020  lqc2        $vf26, 0x20($a0)
    ctx->pc = 0x339754u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x339758: 0xd89b0030  lqc2        $vf27, 0x30($a0)
    ctx->pc = 0x339758u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x33975c: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x33975cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x339760: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x339760u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x339764: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x339764u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x339768: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x339768u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x33976c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x33976cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x339770: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x339770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x339774: 0xfbbd00d0  sqc2        $vf29, 0xD0($sp)
    ctx->pc = 0x339774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x339778: 0xfbbe00e0  sqc2        $vf30, 0xE0($sp)
    ctx->pc = 0x339778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x33977c: 0xfbbf00f0  sqc2        $vf31, 0xF0($sp)
    ctx->pc = 0x33977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x339780: 0xc0cbb5e  jal         func_32ED78
    ctx->pc = 0x339780u;
    SET_GPR_U32(ctx, 31, 0x339788u);
    ctx->pc = 0x339784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339780u;
    // 0x339784: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED78u, 0x339780u, 0x339788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339788u;
label_339788:
    // 0x339788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33978c: 0xc0cbb5e  jal         func_32ED78
    ctx->pc = 0x33978Cu;
    SET_GPR_U32(ctx, 31, 0x339794u);
    ctx->pc = 0x339790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33978Cu;
    // 0x339790: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED78u, 0x33978Cu, 0x339794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339794u;
label_339794:
    // 0x339794: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x339794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339798: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x339798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33979c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x33979cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3397a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3397a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3397a4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x3397a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3397a8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3397a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3397ac: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x3397acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3397b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3397b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3397b4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3397b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3397b8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3397b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3397bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3397BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3397C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397BCu;
        // 0x3397c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3397BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3397C4u;
    // 0x3397c4: 0x0  nop
    ctx->pc = 0x3397c4u;
    // NOP
    ctx->pc = 0x3397c8u;
}
