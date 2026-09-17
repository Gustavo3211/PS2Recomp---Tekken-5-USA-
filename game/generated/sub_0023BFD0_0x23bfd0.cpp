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

// Function: sub_0023BFD0
// Address: 0x23bfd0 - 0x23c088
void sub_0023BFD0_0x23bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BFD0_0x23bfd0");
#endif

    switch (ctx->pc) {
        case 0x23c004u: goto label_23c004;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c048u: goto label_23c048;
        case 0x23c068u: goto label_23c068;
        case 0x23c070u: goto label_23c070;
        default: break;
    }

    ctx->pc = 0x23bfd0u;

    // 0x23bfd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bfd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23bfd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23bfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bfdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bfe0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x23bfe4: 0x2610e2a0  addiu       $s0, $s0, -0x1D60
    ctx->pc = 0x23bfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959776));
    // 0x23bfe8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x23bfe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23bfec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bff0: 0x240400f5  addiu       $a0, $zero, 0xF5
    ctx->pc = 0x23bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x23bff4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x23bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3AE2DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE2DCu, _value); } while (0); }
    // 0x23bff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bffc: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x23BFFCu;
    SET_GPR_U32(ctx, 31, 0x23C004u);
    ctx->pc = 0x23C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFFCu;
    // 0x23c000: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x23BFFCu, 0x23C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C004u;
label_23c004:
    // 0x23c004: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x23C004u;
    SET_GPR_U32(ctx, 31, 0x23C00Cu);
    ctx->pc = 0x23C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C004u;
    // 0x23c008: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x23C004u, 0x23C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C00Cu;
label_23c00c:
    // 0x23c00c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x23c00cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23c010: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x23c010u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23c014: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23c014u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23c018: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23c018u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23c01c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x23c01cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23c020: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x23c020u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23c024: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23c024u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23c028: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x23c02c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23c02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c034: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23c034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23c038: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x23c038u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23c03c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23c040: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x23C040u;
    SET_GPR_U32(ctx, 31, 0x23C048u);
    ctx->pc = 0x23C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C040u;
    // 0x23c044: 0xe6140024  swc1        $f20, 0x24($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x23C040u, 0x23C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C048u;
label_23c048:
    // 0x23c048: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x23c048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x23c04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23c04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c054: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x23c054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x23c058: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x23c058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x23c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c060: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x23C060u;
    SET_GPR_U32(ctx, 31, 0x23C068u);
    ctx->pc = 0x23C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C060u;
    // 0x23c064: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x23C060u, 0x23C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C068u;
label_23c068:
    // 0x23c068: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x23C068u;
    SET_GPR_U32(ctx, 31, 0x23C070u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x23C068u, 0x23C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C070u;
label_23c070:
    // 0x23c070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c074: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c078: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x23c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C07Cu;
        // 0x23c080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C084u;
    // 0x23c084: 0x0  nop
    ctx->pc = 0x23c084u;
    // NOP
    ctx->pc = 0x23c088u;
}
