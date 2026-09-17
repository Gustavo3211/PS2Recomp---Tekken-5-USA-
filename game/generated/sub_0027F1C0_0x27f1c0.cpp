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

// Function: sub_0027F1C0
// Address: 0x27f1c0 - 0x27f298
void sub_0027F1C0_0x27f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1C0_0x27f1c0");
#endif

    switch (ctx->pc) {
        case 0x27f208u: goto label_27f208;
        case 0x27f230u: goto label_27f230;
        case 0x27f248u: goto label_27f248;
        default: break;
    }

    ctx->pc = 0x27f1c0u;

    // 0x27f1c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27f1c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x27f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x27f1cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27f1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27f1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x27f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27f1dc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27f1e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27f1e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27f1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1e8: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x27f1e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27f1ec: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x27f1ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x27f1f0: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x27f1f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27f1f4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27f1f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27f1f8: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x27f1f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f1fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27f1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27f200: 0xc04a151  jal         func_128544
    ctx->pc = 0x27F200u;
    SET_GPR_U32(ctx, 31, 0x27F208u);
    ctx->pc = 0x27F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F200u;
    // 0x27f204: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x27F200u, 0x27F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F208u;
label_27f208:
    // 0x27f208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f210: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x27f210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x27f214: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x27f214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27f218: 0x24500880  addiu       $s0, $v0, 0x880
    ctx->pc = 0x27f218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x27f21c: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x27f21cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27f220: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27f220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f224: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x27f224u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27f228: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27f22c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x27f22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27f230:
    // 0x27f230: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x27f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x27f234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F234u;
    {
        const bool branch_taken_0x27f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F234u;
        // 0x27f238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f234) {
            ctx->pc = 0x27F258u;
            goto label_27f258;
        }
    }
    ctx->pc = 0x27F23Cu;
    // 0x27f23c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f240: 0xc09fb5a  jal         func_27ED68
    ctx->pc = 0x27F240u;
    SET_GPR_U32(ctx, 31, 0x27F248u);
    ctx->pc = 0x27F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F240u;
    // 0x27f244: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ED68u, 0x27F240u, 0x27F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F248u;
label_27f248:
    // 0x27f248: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x27f248u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f24c: 0xda3f0000  lqc2        $vf31, 0x0($s1)
    ctx->pc = 0x27f24cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f250: 0x4bff8428  vadd.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x27f250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x27f254: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x27f254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_27f258:
    // 0x27f258: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27f258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27f25c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x27f25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27f260: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27F260u;
    {
        const bool branch_taken_0x27f260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F260u;
        // 0x27f264: 0x26101070  addiu       $s0, $s0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f260) {
            ctx->pc = 0x27F230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f230;
        }
    }
    ctx->pc = 0x27F268u;
    // 0x27f268: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x27f268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f26c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27f26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f270: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x27f270u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x27f274: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27f274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27f278: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27f278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f27c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x27f27cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27f280: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f284: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x27f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27f288: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x27f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f28c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x27f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f290: 0x3e00008  jr          $ra
    ctx->pc = 0x27F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F290u;
        // 0x27f294: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F298u;
}
