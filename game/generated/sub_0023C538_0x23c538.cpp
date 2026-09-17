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

// Function: sub_0023C538
// Address: 0x23c538 - 0x23c738
void sub_0023C538_0x23c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C538_0x23c538");
#endif

    switch (ctx->pc) {
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c620u: goto label_23c620;
        case 0x23c650u: goto label_23c650;
        case 0x23c670u: goto label_23c670;
        case 0x23c690u: goto label_23c690;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ecu: goto label_23c6ec;
        default: break;
    }

    ctx->pc = 0x23c538u;

    // 0x23c538: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23c53c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c544: 0x2450e2f0  addiu       $s0, $v0, -0x1D10
    ctx->pc = 0x23c544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959856));
    // 0x23c548: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23c54c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23c54cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c550: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x23c554: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x23c554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c558: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x23c55c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x23c55cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c560: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x23c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x23c564: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x23c564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c568: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x23c568u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x23c56c: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x23c56cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x23c570: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x23c570u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23c574: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x23c574u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x23c578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c57c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c580: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23c584: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x23c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x23c588: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x23c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x23c58c: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x23c58cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23c590: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x23c590u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23c594: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x23c594u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23c598: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x23c598u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23c59c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x23C59Cu;
    SET_GPR_U32(ctx, 31, 0x23C5A4u);
    ctx->pc = 0x23C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C59Cu;
    // 0x23c5a0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x23C59Cu, 0x23C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5A4u;
label_23c5a4:
    // 0x23c5a4: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x23c5a4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23c5a8: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x23c5a8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23c5ac: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23c5acu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23c5b0: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23c5b0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23c5b4: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x23c5b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23c5b8: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x23c5b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23c5bc: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23c5bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23c5c0: 0xc0a3b2c  jal         func_28ECB0
    ctx->pc = 0x23C5C0u;
    SET_GPR_U32(ctx, 31, 0x23C5C8u);
    ctx->pc = 0x23C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5C0u;
    // 0x23c5c4: 0x179023  negu        $s2, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ECB0u, 0x23C5C0u, 0x23C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5C8u;
label_23c5c8:
    // 0x23c5c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23c5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c5cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c5d0: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x23c5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x23c5d4: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x23c5d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x23c5d8: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x23C5D8u;
    {
        const bool branch_taken_0x23c5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D8u;
        // 0x23c5dc: 0x82980a  movz        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5d8) {
            ctx->pc = 0x23C6E4u;
            goto label_23c6e4;
        }
    }
    ctx->pc = 0x23C5E0u;
    // 0x23c5e0: 0x14f023  negu        $fp, $s4
    ctx->pc = 0x23c5e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x23c5e4: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x23c5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c5e8:
    // 0x23c5e8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x23c5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x23c5ec: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x23C5ECu;
    {
        const bool branch_taken_0x23c5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5ec) {
            ctx->pc = 0x23C5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5ECu;
            // 0x23c5f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C6D8u;
            goto label_23c6d8;
        }
    }
    ctx->pc = 0x23C5F4u;
    // 0x23c5f4: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x23c5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23c5f8: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x23c5f8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c5fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23c5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23c600: 0x4495d000  mtc1        $s5, $f26
    ctx->pc = 0x23c600u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x23c604: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x23c604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x23c608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c60c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23c60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23c610: 0x4600cd80  add.s       $f22, $f25, $f0
    ctx->pc = 0x23c610u;
    ctx->f[22] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x23c614: 0x4601b600  add.s       $f24, $f22, $f1
    ctx->pc = 0x23c614u;
    ctx->f[24] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x23c618: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x23c618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23c61c: 0x0  nop
    ctx->pc = 0x23c61cu;
    // NOP
label_23c620:
    // 0x23c620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23c624: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x23c624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x23c628: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x23c628u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x23c62c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x23c62cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x23c630: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x23c630u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x23c634: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x23c634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c638: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x23c638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x23c63c: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x23c63cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x23c640: 0x461aa540  add.s       $f21, $f20, $f26
    ctx->pc = 0x23c640u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x23c644: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x23c644u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x23c648: 0xc08f136  jal         func_23C4D8
    ctx->pc = 0x23C648u;
    SET_GPR_U32(ctx, 31, 0x23C650u);
    ctx->pc = 0x23C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C648u;
    // 0x23c64c: 0xe6140008  swc1        $f20, 0x8($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4D8u, 0x23C648u, 0x23C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C650u;
label_23c650:
    // 0x23c650: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x23c650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x23c654: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x23c654u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x23c658: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x23c658u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x23c65c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x23c65cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x23c660: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x23c660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x23c664: 0xe6180030  swc1        $f24, 0x30($s0)
    ctx->pc = 0x23c664u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x23c668: 0xc08f136  jal         func_23C4D8
    ctx->pc = 0x23C668u;
    SET_GPR_U32(ctx, 31, 0x23C670u);
    ctx->pc = 0x23C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C668u;
    // 0x23c66c: 0xe6140038  swc1        $f20, 0x38($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4D8u, 0x23C668u, 0x23C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C670u;
label_23c670:
    // 0x23c670: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x23c670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x23c674: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x23c674u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x23c678: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x23c678u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x23c67c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x23c67cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x23c680: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x23c680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x23c684: 0xe6160060  swc1        $f22, 0x60($s0)
    ctx->pc = 0x23c684u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x23c688: 0xc08f136  jal         func_23C4D8
    ctx->pc = 0x23C688u;
    SET_GPR_U32(ctx, 31, 0x23C690u);
    ctx->pc = 0x23C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C688u;
    // 0x23c68c: 0xe6150068  swc1        $f21, 0x68($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4D8u, 0x23C688u, 0x23C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C690u;
label_23c690:
    // 0x23c690: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x23c690u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x23c694: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x23c694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x23c698: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x23c698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x23c69c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x23c69cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x23c6a0: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x23c6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x23c6a4: 0xe6180090  swc1        $f24, 0x90($s0)
    ctx->pc = 0x23c6a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x23c6a8: 0xc08f136  jal         func_23C4D8
    ctx->pc = 0x23C6A8u;
    SET_GPR_U32(ctx, 31, 0x23C6B0u);
    ctx->pc = 0x23C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6A8u;
    // 0x23c6ac: 0xe6150098  swc1        $f21, 0x98($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4D8u, 0x23C6A8u, 0x23C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6B0u;
label_23c6b0:
    // 0x23c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23c6b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23c6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6bc: 0x240702e1  addiu       $a3, $zero, 0x2E1
    ctx->pc = 0x23c6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 737));
    // 0x23c6c0: 0xc0c9700  jal         func_325C00
    ctx->pc = 0x23C6C0u;
    SET_GPR_U32(ctx, 31, 0x23C6C8u);
    ctx->pc = 0x23C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6C0u;
    // 0x23c6c4: 0xe60000ac  swc1        $f0, 0xAC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C00u, 0x23C6C0u, 0x23C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6C8u;
label_23c6c8:
    // 0x23c6c8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x23c6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x23c6cc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x23C6CCu;
    {
        const bool branch_taken_0x23c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6CCu;
        // 0x23c6d0: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6cc) {
            ctx->pc = 0x23C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c620;
        }
    }
    ctx->pc = 0x23C6D4u;
    // 0x23c6d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23c6d8:
    // 0x23c6d8: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x23c6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x23c6dc: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x23C6DCu;
    {
        const bool branch_taken_0x23c6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c6dc) {
            ctx->pc = 0x23C6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C6DCu;
            // 0x23c6e0: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c5e8;
        }
    }
    ctx->pc = 0x23C6E4u;
label_23c6e4:
    // 0x23c6e4: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x23C6E4u;
    SET_GPR_U32(ctx, 31, 0x23C6ECu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x23C6E4u, 0x23C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6ECu;
label_23c6ec:
    // 0x23c6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c6f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23c6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c6fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23c6fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c700: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23c700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c704: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23c704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c708: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x23c708u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23c70c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x23c70cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c710: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x23c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c714: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x23c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x23c718: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x23c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x23c71c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x23c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23c720: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x23c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23c724: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x23c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23c728: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x23c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23c72c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c730: 0x3e00008  jr          $ra
    ctx->pc = 0x23C730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C730u;
        // 0x23c734: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C738u;
}
