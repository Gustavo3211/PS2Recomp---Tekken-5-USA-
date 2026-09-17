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

// Function: sub_002CAD00
// Address: 0x2cad00 - 0x2caea8
void sub_002CAD00_0x2cad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD00_0x2cad00");
#endif

    switch (ctx->pc) {
        case 0x2cad38u: goto label_2cad38;
        case 0x2cae58u: goto label_2cae58;
        default: break;
    }

    ctx->pc = 0x2cad00u;

    // 0x2cad00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cad04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cad08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cad08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cad10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2cad10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cad18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cad18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cad20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cad20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cad28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cad28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad2c: 0x1a400055  blez        $s2, . + 4 + (0x55 << 2)
    ctx->pc = 0x2CAD2Cu;
    {
        const bool branch_taken_0x2cad2c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2CAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD2Cu;
        // 0x2cad30: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad2c) {
            ctx->pc = 0x2CAE84u;
            goto label_2cae84;
        }
    }
    ctx->pc = 0x2CAD34u;
    // 0x2cad34: 0x0  nop
    ctx->pc = 0x2cad34u;
    // NOP
label_2cad38:
    // 0x2cad38: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2cad3c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2cad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2cad40: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cad44: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2cad44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2cad48: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2cad48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cad4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cad50: 0x2ca30014  sltiu       $v1, $a1, 0x14
    ctx->pc = 0x2cad50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2cad54: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CAD54u;
    {
        const bool branch_taken_0x2cad54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD54u;
        // 0x2cad58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad54) {
            ctx->pc = 0x2CAE74u;
            goto label_2cae74;
        }
    }
    ctx->pc = 0x2CAD5Cu;
    // 0x2cad5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2cad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cad60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2cad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2cad64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cad68: 0x8c63e400  lw          $v1, -0x1C00($v1)
    ctx->pc = 0x2cad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960128)));
    // 0x2cad6c: 0x600008  jr          $v1
    ctx->pc = 0x2CAD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CAD78u: goto label_2cad78;
            case 0x2CADA0u: goto label_2cada0;
            case 0x2CADC8u: goto label_2cadc8;
            case 0x2CADF0u: goto label_2cadf0;
            case 0x2CAE50u: goto label_2cae50;
            case 0x2CAE60u: goto label_2cae60;
            case 0x2CAE74u: goto label_2cae74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CAD74u;
    // 0x2cad74: 0x0  nop
    ctx->pc = 0x2cad74u;
    // NOP
label_2cad78:
    // 0x2cad78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cad78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2cad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cad80: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cad80u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cad84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cad84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cad88: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cad88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2cad8c: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2cad8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cad90: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cad90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cad94: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2CAD94u;
    {
        const bool branch_taken_0x2cad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD94u;
        // 0x2cad98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad94) {
            ctx->pc = 0x2CAE78u;
            goto label_2cae78;
        }
    }
    ctx->pc = 0x2CAD9Cu;
    // 0x2cad9c: 0x0  nop
    ctx->pc = 0x2cad9cu;
    // NOP
label_2cada0:
    // 0x2cada0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2cada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2cada4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2cada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cada8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cada8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cadac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cadacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cadb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cadb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2cadb4: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2cadb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cadb8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cadbc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2CADBCu;
    {
        const bool branch_taken_0x2cadbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADBCu;
        // 0x2cadc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadbc) {
            ctx->pc = 0x2CAE78u;
            goto label_2cae78;
        }
    }
    ctx->pc = 0x2CADC4u;
    // 0x2cadc4: 0x0  nop
    ctx->pc = 0x2cadc4u;
    // NOP
label_2cadc8:
    // 0x2cadc8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2cadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2cadcc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadd0: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cadd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cadd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cadd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cadd8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cadd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2caddc: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2caddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cade0: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cade0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cade4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2CADE4u;
    {
        const bool branch_taken_0x2cade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADE4u;
        // 0x2cade8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cade4) {
            ctx->pc = 0x2CAE78u;
            goto label_2cae78;
        }
    }
    ctx->pc = 0x2CADECu;
    // 0x2cadec: 0x0  nop
    ctx->pc = 0x2cadecu;
    // NOP
label_2cadf0:
    // 0x2cadf0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cadf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadf4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2cadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadf8: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2cadf8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cadfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2cadfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cae00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cae00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2cae04: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2cae04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cae08: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2cae08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cae0c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cae10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2cae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae14: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cae14u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cae18: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2cae18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cae1c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2cae1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2cae20: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2cae20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cae24: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2cae24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cae28: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2cae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2cae2c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae30: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2cae30u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cae34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2cae34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cae38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cae38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2cae3c: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2cae3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2cae40: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2cae40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2cae44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CAE44u;
    {
        const bool branch_taken_0x2cae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE44u;
        // 0x2cae48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae44) {
            ctx->pc = 0x2CAE78u;
            goto label_2cae78;
        }
    }
    ctx->pc = 0x2CAE4Cu;
    // 0x2cae4c: 0x0  nop
    ctx->pc = 0x2cae4cu;
    // NOP
label_2cae50:
    // 0x2cae50: 0xc097084  jal         func_25C210
    ctx->pc = 0x2CAE50u;
    SET_GPR_U32(ctx, 31, 0x2CAE58u);
    ctx->pc = 0x2CAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE50u;
    // 0x2cae54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2CAE50u, 0x2CAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE58u;
label_2cae58:
    // 0x2cae58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CAE58u;
    {
        const bool branch_taken_0x2cae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE58u;
        // 0x2cae5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae58) {
            ctx->pc = 0x2CAE78u;
            goto label_2cae78;
        }
    }
    ctx->pc = 0x2CAE60u;
label_2cae60:
    // 0x2cae60: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2cae60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cae64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cae68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cae68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae6c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2cae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2cae70: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2cae70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_2cae74:
    // 0x2cae74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cae74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cae78:
    // 0x2cae78: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2cae78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2cae7c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2CAE7Cu;
    {
        const bool branch_taken_0x2cae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE7Cu;
        // 0x2cae80: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae7c) {
            ctx->pc = 0x2CAD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cad38;
        }
    }
    ctx->pc = 0x2CAE84u;
label_2cae84:
    // 0x2cae84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cae84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cae88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cae88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cae8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cae8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cae90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cae90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cae94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cae94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cae98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE9Cu;
        // 0x2caea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAEA4u;
    // 0x2caea4: 0x0  nop
    ctx->pc = 0x2caea4u;
    // NOP
    ctx->pc = 0x2caea8u;
}
