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

// Function: sub_002D2308
// Address: 0x2d2308 - 0x2d28f0
void sub_002D2308_0x2d2308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2308_0x2d2308");
#endif

    switch (ctx->pc) {
        case 0x2d2388u: goto label_2d2388;
        case 0x2d2390u: goto label_2d2390;
        case 0x2d23c8u: goto label_2d23c8;
        case 0x2d2474u: goto label_2d2474;
        case 0x2d2488u: goto label_2d2488;
        case 0x2d2494u: goto label_2d2494;
        case 0x2d249cu: goto label_2d249c;
        case 0x2d24bcu: goto label_2d24bc;
        case 0x2d24e0u: goto label_2d24e0;
        case 0x2d24ecu: goto label_2d24ec;
        case 0x2d2504u: goto label_2d2504;
        case 0x2d2510u: goto label_2d2510;
        case 0x2d2518u: goto label_2d2518;
        case 0x2d256cu: goto label_2d256c;
        case 0x2d2578u: goto label_2d2578;
        case 0x2d2598u: goto label_2d2598;
        case 0x2d25d8u: goto label_2d25d8;
        case 0x2d2624u: goto label_2d2624;
        case 0x2d26d0u: goto label_2d26d0;
        case 0x2d26fcu: goto label_2d26fc;
        case 0x2d2708u: goto label_2d2708;
        case 0x2d2724u: goto label_2d2724;
        case 0x2d272cu: goto label_2d272c;
        case 0x2d2740u: goto label_2d2740;
        case 0x2d2768u: goto label_2d2768;
        case 0x2d2770u: goto label_2d2770;
        case 0x2d2798u: goto label_2d2798;
        case 0x2d27a0u: goto label_2d27a0;
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2838u: goto label_2d2838;
        default: break;
    }

    ctx->pc = 0x2d2308u;

    // 0x2d2308: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d2308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d230c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2d230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2d2310: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d2310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d2314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2318: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2d2318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2d231c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d231cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2320: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d2320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d2324: 0x244437e0  addiu       $a0, $v0, 0x37E0
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2d2328: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d232c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2330: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d2330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d2334: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d2334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d2338: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d233c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2d233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2d2340: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2d2340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2d2344: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2d2348: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2d2348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d234c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2d234cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d2350: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2d2354: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x2d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2d2358: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d2358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d235c: 0x8e5e00bc  lw          $fp, 0xBC($s2)
    ctx->pc = 0x2d235cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2d2360: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2d2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2d2364: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d2368: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x2d2368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    // 0x2d236c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d2370: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2d2370u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d2374: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2d2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2d2378: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x2d2378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x2d237c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d2380: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D2380u;
    SET_GPR_U32(ctx, 31, 0x2D2388u);
    ctx->pc = 0x2D2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2380u;
    // 0x2d2384: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D2380u, 0x2D2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2388u;
label_2d2388:
    // 0x2d2388: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D2388u;
    SET_GPR_U32(ctx, 31, 0x2D2390u);
    ctx->pc = 0x2D238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2388u;
    // 0x2d238c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D2388u, 0x2D2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2390u;
label_2d2390:
    // 0x2d2390: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2d2390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2394: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d2394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d2398: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d2398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d239c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d239cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d23a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d23a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d23a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d23ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d23acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d23b0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2d23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2d23b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d23b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d23b8: 0x450000f9  bc1f        . + 4 + (0xF9 << 2)
    ctx->pc = 0x2D23B8u;
    {
        const bool branch_taken_0x2d23b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23B8u;
        // 0x2d23bc: 0xafa4000c  sw          $a0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23b8) {
            ctx->pc = 0x2D27A0u;
            goto label_2d27a0;
        }
    }
    ctx->pc = 0x2D23C0u;
    // 0x2d23c0: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2D23C0u;
    SET_GPR_U32(ctx, 31, 0x2D23C8u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2D23C0u, 0x2D23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23C8u;
label_2d23c8:
    // 0x2d23c8: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2d23c8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d23cc: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2d23ccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d23d0: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2d23d0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d23d4: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2d23d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d23d8: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2d23d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d23dc: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2d23dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d23e0: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2d23e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d23e4: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x2d23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2d23e8: 0x23823  negu        $a3, $v0
    ctx->pc = 0x2d23e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d23ec: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2d23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2d23f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d23f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d23f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D23F4u;
    {
        const bool branch_taken_0x2d23f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23F4u;
        // 0x2d23f8: 0x30e53fff  andi        $a1, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23f4) {
            ctx->pc = 0x2D2404u;
            goto label_2d2404;
        }
    }
    ctx->pc = 0x2D23FCu;
    // 0x2d23fc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2400: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2d2400u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d2404:
    // 0x2d2404: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2d2404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2d2408: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d240c: 0x24890340  addiu       $t1, $a0, 0x340
    ctx->pc = 0x2d240cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x2d2410: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2d2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d2414: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d2414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d2418: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d2418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d241c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2420: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2d2420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2d2424: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2d2424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2d2428: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2428u;
    {
        const bool branch_taken_0x2d2428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2428u;
        // 0x2d242c: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2428) {
            ctx->pc = 0x2D2438u;
            goto label_2d2438;
        }
    }
    ctx->pc = 0x2D2430u;
    // 0x2d2430: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d2430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2434: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2d2434u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d2438:
    // 0x2d2438: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d243c: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2d2440: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2d2440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d2444: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d2444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d2448: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d244c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2d244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d2450: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d2450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d2454: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2d2454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d2458: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2d2458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d245c: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2d245cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d2460: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2d2460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d2464: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2d2464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d2468: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2d2468u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2d246c: 0xc08c1d0  jal         func_230740
    ctx->pc = 0x2D246Cu;
    SET_GPR_U32(ctx, 31, 0x2D2474u);
    ctx->pc = 0x2D2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D246Cu;
    // 0x2d2470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230740u, 0x2D246Cu, 0x2D2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2474u;
label_2d2474:
    // 0x2d2474: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d2474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2478: 0x4bc1e1bc  vmulax.xyz  $ACC, $vf28, $vf1x
    ctx->pc = 0x2d2478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d247c: 0x4bc1e8bd  vmadday.xyz $ACC, $vf29, $vf1y
    ctx->pc = 0x2d247cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d2480: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2D2480u;
    SET_GPR_U32(ctx, 31, 0x2D2488u);
    ctx->pc = 0x2D2484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2480u;
    // 0x2d2484: 0x4bc1f28a  vmaddz.xyz  $vf10, $vf30, $vf1z (Delay Slot)
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2D2480u, 0x2D2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2488u;
label_2d2488:
    // 0x2d2488: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d2488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d248c: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D248Cu;
    SET_GPR_U32(ctx, 31, 0x2D2494u);
    ctx->pc = 0x2D2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D248Cu;
    // 0x2d2490: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D248Cu, 0x2D2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2494u;
label_2d2494:
    // 0x2d2494: 0xc0cc05a  jal         func_330168
    ctx->pc = 0x2D2494u;
    SET_GPR_U32(ctx, 31, 0x2D249Cu);
    ctx->pc = 0x330168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330168u, 0x2D2494u, 0x2D249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D249Cu;
label_2d249c:
    // 0x2d249c: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2d249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d24a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d24a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2d24a8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2d24a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d24ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d24acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d24b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d24b4: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2D24B4u;
    SET_GPR_U32(ctx, 31, 0x2D24BCu);
    ctx->pc = 0x2D24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24B4u;
    // 0x2d24b8: 0x52940  sll         $a1, $a1, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2D24B4u, 0x2D24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24BCu;
label_2d24bc:
    // 0x2d24bc: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2d24c0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x2d24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d24c4: 0x8cd0fb00  lw          $s0, -0x500($a2)
    ctx->pc = 0x2d24c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AFB00u));
    // 0x2d24c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d24cc: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2d24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d24d0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d24d4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d24d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d24d8: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D24D8u;
    SET_GPR_U32(ctx, 31, 0x2D24E0u);
    ctx->pc = 0x2D24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24D8u;
    // 0x2d24dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D24D8u, 0x2D24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24E0u;
label_2d24e0:
    // 0x2d24e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d24e4: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D24E4u;
    SET_GPR_U32(ctx, 31, 0x2D24ECu);
    ctx->pc = 0x2D24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24E4u;
    // 0x2d24e8: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D24E4u, 0x2D24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24ECu;
label_2d24ec:
    // 0x2d24ec: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d24f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d24f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24f4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d24f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24f8: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2d24f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d24fc: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D24FCu;
    SET_GPR_U32(ctx, 31, 0x2D2504u);
    ctx->pc = 0x2D2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24FCu;
    // 0x2d2500: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D24FCu, 0x2D2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2504u;
label_2d2504:
    // 0x2d2504: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d2504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2508: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2508u;
    SET_GPR_U32(ctx, 31, 0x2D2510u);
    ctx->pc = 0x2D250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2508u;
    // 0x2d250c: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2508u, 0x2D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2510u;
label_2d2510:
    // 0x2d2510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2510u;
    {
        const bool branch_taken_0x2d2510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2510u;
        // 0x2d2514: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2510) {
            ctx->pc = 0x2D2528u;
            goto label_2d2528;
        }
    }
    ctx->pc = 0x2D2518u;
label_2d2518:
    // 0x2d2518: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x2d2518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x2d251c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d251cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d2520: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d2520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d2524: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2d2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2d2528:
    // 0x2d2528: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x2d2528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d252c: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2d252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2d2530: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d2530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2534: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2534u;
    {
        const bool branch_taken_0x2d2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2534u;
        // 0x2d2538: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2534) {
            ctx->pc = 0x2D25A0u;
            goto label_2d25a0;
        }
    }
    ctx->pc = 0x2D253Cu;
    // 0x2d253c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2d2540: 0x2e42821  addu        $a1, $s7, $a0
    ctx->pc = 0x2d2540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2d2544: 0x24c2fb00  addiu       $v0, $a2, -0x500
    ctx->pc = 0x2d2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966016));
    // 0x2d2548: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2d2548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d254c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2d254cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2550: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d2554: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2558: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d255c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d255cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d2560: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d2560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d2564: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D2564u;
    SET_GPR_U32(ctx, 31, 0x2D256Cu);
    ctx->pc = 0x2D2568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2564u;
    // 0x2d2568: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D2564u, 0x2D256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D256Cu;
label_2d256c:
    // 0x2d256c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d256cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2570: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2570u;
    SET_GPR_U32(ctx, 31, 0x2D2578u);
    ctx->pc = 0x2D2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2570u;
    // 0x2d2574: 0x3484d400  ori         $a0, $a0, 0xD400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2570u, 0x2D2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2578u;
label_2d2578:
    // 0x2d2578: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x2d2578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d257c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2580: 0x2e62821  addu        $a1, $s7, $a2
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2d2584: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2d2584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d2588: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2d2588u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d258c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d258cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d2590: 0xc0936e2  jal         func_24DB88
    ctx->pc = 0x2D2590u;
    SET_GPR_U32(ctx, 31, 0x2D2598u);
    ctx->pc = 0x2D2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2590u;
    // 0x2d2594: 0x3c52821  addu        $a1, $fp, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DB88u, 0x2D2590u, 0x2D2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2598u;
label_2d2598:
    // 0x2d2598: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x2d2598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d259c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d259cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2d25a0:
    // 0x2d25a0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2d25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d25a4: 0x8c70fb00  lw          $s0, -0x500($v1)
    ctx->pc = 0x2d25a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966016)));
    // 0x2d25a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d25a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25ac: 0x18800045  blez        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D25ACu;
    {
        const bool branch_taken_0x2d25ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2D25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25ACu;
        // 0x2d25b0: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25ac) {
            ctx->pc = 0x2D26C4u;
            goto label_2d26c4;
        }
    }
    ctx->pc = 0x2D25B4u;
    // 0x2d25b4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2d25b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d25b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d25b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d25bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d25bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d25c0: 0x3c1644bb  lui         $s6, 0x44BB
    ctx->pc = 0x2d25c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17595 << 16));
    // 0x2d25c4: 0x36d68000  ori         $s6, $s6, 0x8000
    ctx->pc = 0x2d25c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32768);
    // 0x2d25c8: 0x3c15451c  lui         $s5, 0x451C
    ctx->pc = 0x2d25c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)17692 << 16));
    // 0x2d25cc: 0x36b54000  ori         $s5, $s5, 0x4000
    ctx->pc = 0x2d25ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16384);
    // 0x2d25d0: 0x3c143a83  lui         $s4, 0x3A83
    ctx->pc = 0x2d25d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)14979 << 16));
    // 0x2d25d4: 0x3694126e  ori         $s4, $s4, 0x126E
    ctx->pc = 0x2d25d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4718);
label_2d25d8:
    // 0x2d25d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d25dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d25e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d25e4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2d25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d25e8: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x2d25e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d25ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D25ECu;
    {
        const bool branch_taken_0x2d25ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25ECu;
        // 0x2d25f0: 0x8e460084  lw          $a2, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25ec) {
            ctx->pc = 0x2D2610u;
            goto label_2d2610;
        }
    }
    ctx->pc = 0x2D25F4u;
    // 0x2d25f4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2d25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d25f8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2d25f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d25fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D25FCu;
    {
        const bool branch_taken_0x2d25fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d25fc) {
            ctx->pc = 0x2D2600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25FCu;
            // 0x2d2600: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2630u;
            goto label_2d2630;
        }
    }
    ctx->pc = 0x2D2604u;
    // 0x2d2604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2604u;
    {
        const bool branch_taken_0x2d2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2604u;
        // 0x2d2608: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2604) {
            ctx->pc = 0x2D2614u;
            goto label_2d2614;
        }
    }
    ctx->pc = 0x2D260Cu;
    // 0x2d260c: 0x0  nop
    ctx->pc = 0x2d260cu;
    // NOP
label_2d2610:
    // 0x2d2610: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2d2610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2d2614:
    // 0x2d2614: 0x2f32021  addu        $a0, $s7, $s3
    ctx->pc = 0x2d2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x2d2618: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d2618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d261c: 0xc0b47aa  jal         func_2D1EA8
    ctx->pc = 0x2D261Cu;
    SET_GPR_U32(ctx, 31, 0x2D2624u);
    ctx->pc = 0x2D2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D261Cu;
    // 0x2d2620: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1EA8u, 0x2D261Cu, 0x2D2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2624u;
label_2d2624:
    // 0x2d2624: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D2624u;
    {
        const bool branch_taken_0x2d2624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2624u;
        // 0x2d2628: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2624) {
            ctx->pc = 0x2D26B0u;
            goto label_2d26b0;
        }
    }
    ctx->pc = 0x2D262Cu;
    // 0x2d262c: 0x0  nop
    ctx->pc = 0x2d262cu;
    // NOP
label_2d2630:
    // 0x2d2630: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2d2630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2634: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2d2634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2638: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d2638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d263c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2d263cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d2640: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d2640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2644: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2d2644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d2648: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2d2648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d264c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2d264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2650: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d2650u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d2654: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2d2654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d2658: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2d2658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d265c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2d265cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2d2660: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d2660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d2664: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d2668: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x2d2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x2d266c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d2670: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d2670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2674: 0x48b61000  qmtc2.ni    $s6, $vf2
    ctx->pc = 0x2d2674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 22));
    // 0x2d2678: 0x48b51800  qmtc2.ni    $s5, $vf3
    ctx->pc = 0x2d2678u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x2d267c: 0x48b42000  qmtc2.ni    $s4, $vf4
    ctx->pc = 0x2d267cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 20));
    // 0x2d2680: 0x4bca086c  vsub.xyz    $vf1, $vf1, $vf10
    ctx->pc = 0x2d2680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2684: 0x4bc109fd  vabs.xyz    $vf1, $vf1
    ctx->pc = 0x2d2684u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2688: 0x4b010852  vmaxz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x2d2688u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d268c: 0x4b010851  vmaxy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x2d268cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2690: 0x4b03086f  vmini.x     $vf1, $vf1, $vf3
    ctx->pc = 0x2d2690u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2694: 0x4b02086c  vsub.x      $vf1, $vf1, $vf2
    ctx->pc = 0x2d2694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2698: 0x4b00086b  vmax.x      $vf1, $vf1, $vf0
    ctx->pc = 0x2d2698u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d269c: 0x4b04086a  vmul.x      $vf1, $vf1, $vf4
    ctx->pc = 0x2d269cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d26a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d26a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d26a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d26a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d26a8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2d26a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d26ac: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2d26acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2d26b0:
    // 0x2d26b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d26b4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d26b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d26b8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2d26b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d26bc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2D26BCu;
    {
        const bool branch_taken_0x2d26bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26BCu;
        // 0x2d26c0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26bc) {
            ctx->pc = 0x2D25D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d25d8;
        }
    }
    ctx->pc = 0x2D26C4u;
label_2d26c4:
    // 0x2d26c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d26c8: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D26C8u;
    SET_GPR_U32(ctx, 31, 0x2D26D0u);
    ctx->pc = 0x2D26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26C8u;
    // 0x2d26cc: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D26C8u, 0x2D26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26D0u;
label_2d26d0:
    // 0x2d26d0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d26d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d26d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d26d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d26dc: 0x8c90fb00  lw          $s0, -0x500($a0)
    ctx->pc = 0x2d26dcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AFB00u));
    // 0x2d26e0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x2d26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d26e4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x2d26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d26e8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2d26e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d26ec: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d26f0: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x2d26f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2d26f4: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D26F4u;
    SET_GPR_U32(ctx, 31, 0x2D26FCu);
    ctx->pc = 0x2D26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26F4u;
    // 0x2d26f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D26F4u, 0x2D26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26FCu;
label_2d26fc:
    // 0x2d26fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2700: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2700u;
    SET_GPR_U32(ctx, 31, 0x2D2708u);
    ctx->pc = 0x2D2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2700u;
    // 0x2d2704: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2700u, 0x2D2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2708u;
label_2d2708:
    // 0x2d2708: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x2d2708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d270c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d2710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2714: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2d2714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d2718: 0x3c32821  addu        $a1, $fp, $v1
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2d271c: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D271Cu;
    SET_GPR_U32(ctx, 31, 0x2D2724u);
    ctx->pc = 0x2D2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D271Cu;
    // 0x2d2720: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D271Cu, 0x2D2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2724u;
label_2d2724:
    // 0x2d2724: 0xc09368c  jal         func_24DA30
    ctx->pc = 0x2D2724u;
    SET_GPR_U32(ctx, 31, 0x2D272Cu);
    ctx->pc = 0x24DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DA30u, 0x2D2724u, 0x2D272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D272Cu;
label_2d272c:
    // 0x2d272c: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d2730: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d2730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2734: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x2d2734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x2d2738: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2738u;
    SET_GPR_U32(ctx, 31, 0x2D2740u);
    ctx->pc = 0x2D273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2738u;
    // 0x2d273c: 0x2e3b821  addu        $s7, $s7, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2738u, 0x2D2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2740u;
label_2d2740:
    // 0x2d2740: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2d2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2d2744: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2d2748: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2d274c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d274cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d2750: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2750u;
    {
        const bool branch_taken_0x2d2750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2750) {
            ctx->pc = 0x2D2754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2750u;
            // 0x2d2754: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2790u;
            goto label_2d2790;
        }
    }
    ctx->pc = 0x2D2758u;
    // 0x2d2758: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x2d2758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x2d275c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d275cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2760: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D2760u;
    SET_GPR_U32(ctx, 31, 0x2D2768u);
    ctx->pc = 0x2D2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2760u;
    // 0x2d2764: 0x24c437e0  addiu       $a0, $a2, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D2760u, 0x2D2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2768u;
label_2d2768:
    // 0x2d2768: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D2768u;
    SET_GPR_U32(ctx, 31, 0x2D2770u);
    ctx->pc = 0x2D276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2768u;
    // 0x2d276c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D2768u, 0x2D2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2770u;
label_2d2770:
    // 0x2d2770: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2d2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2774: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d2774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d2778: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d2778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d277c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d277cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2780: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d2780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2784: 0x4501ff64  bc1t        . + 4 + (-0x9C << 2)
    ctx->pc = 0x2D2784u;
    {
        const bool branch_taken_0x2d2784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2784u;
        // 0x2d2788: 0x171100  sll         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2784) {
            ctx->pc = 0x2D2518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2518;
        }
    }
    ctx->pc = 0x2D278Cu;
    // 0x2d278c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2d2790:
    // 0x2d2790: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2790u;
    SET_GPR_U32(ctx, 31, 0x2D2798u);
    ctx->pc = 0x2D2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2790u;
    // 0x2d2794: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2790u, 0x2D2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2798u;
label_2d2798:
    // 0x2d2798: 0xc0cc08e  jal         func_330238
    ctx->pc = 0x2D2798u;
    SET_GPR_U32(ctx, 31, 0x2D27A0u);
    ctx->pc = 0x330238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330238u, 0x2D2798u, 0x2D27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27A0u;
label_2d27a0:
    // 0x2d27a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d27a4: 0x2ae50169  slti        $a1, $s7, 0x169
    ctx->pc = 0x2d27a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x2d27a8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2d27a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d27ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d27b0: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x2d27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2d27b4: 0x45b80a  movz        $s7, $v0, $a1
    ctx->pc = 0x2d27b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x2d27b8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2d27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d27bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d27c0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2d27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d27c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d27c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2d27c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d27cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d27d0: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x2d27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2d27d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2d27d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d27d8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2d27dc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d27e0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2d27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d27e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d27e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d27ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d27f0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2d27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x2d27f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d27f8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2d27f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d27fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2800: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d2800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d2804: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2d2804u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d2808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d280c: 0x28640012  slti        $a0, $v1, 0x12
    ctx->pc = 0x2d280cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2d2810: 0x8012  mflo        $s0
    ctx->pc = 0x2d2810u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d2814: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2814u;
    {
        const bool branch_taken_0x2d2814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2814u;
        // 0x2d2818: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2814) {
            ctx->pc = 0x2D2820u;
            goto label_2d2820;
        }
    }
    ctx->pc = 0x2D281Cu;
    // 0x2d281c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d281cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2d2820:
    // 0x2d2820: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2d2820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2d2824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2828: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2D2828u;
    SET_GPR_U32(ctx, 31, 0x2D2830u);
    ctx->pc = 0x2D282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2828u;
    // 0x2d282c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2D2828u, 0x2D2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2830u;
label_2d2830:
    // 0x2d2830: 0xc0b7700  jal         func_2DDC00
    ctx->pc = 0x2D2830u;
    SET_GPR_U32(ctx, 31, 0x2D2838u);
    ctx->pc = 0x2D2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2830u;
    // 0x2d2834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC00u, 0x2D2830u, 0x2D2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2838u;
label_2d2838:
    // 0x2d2838: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2d2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d283c: 0x3c0142bd  lui         $at, 0x42BD
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17085 << 16));
    // 0x2d2840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d2840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d2844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2848: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d2848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d284c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2D284Cu;
    {
        const bool branch_taken_0x2d284c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D284Cu;
        // 0x2d2850: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d284c) {
            ctx->pc = 0x2D2888u;
            goto label_2d2888;
        }
    }
    ctx->pc = 0x2D2854u;
    // 0x2d2854: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2d2858: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d285c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2d285cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d2860: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2860u;
    {
        const bool branch_taken_0x2d2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2860) {
            ctx->pc = 0x2D2864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2860u;
            // 0x2d2864: 0x204001a  div         $zero, $s0, $a0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D288Cu;
            goto label_2d288c;
        }
    }
    ctx->pc = 0x2D2868u;
    // 0x2d2868: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2d2868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2d286c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2870: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2d2870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x2d2874: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d2874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2878: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2878u;
    {
        const bool branch_taken_0x2d2878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2878) {
            ctx->pc = 0x2D287Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2878u;
            // 0x2d287c: 0xae450080  sw          $a1, 0x80($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2898u;
            goto label_2d2898;
        }
    }
    ctx->pc = 0x2D2880u;
    // 0x2d2880: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2880u;
    {
        const bool branch_taken_0x2d2880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2880u;
        // 0x2d2884: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2880) {
            ctx->pc = 0x2D289Cu;
            goto label_2d289c;
        }
    }
    ctx->pc = 0x2D2888u;
label_2d2888:
    // 0x2d2888: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x2d2888u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2d288c:
    // 0x2d288c: 0x1012  mflo        $v0
    ctx->pc = 0x2d288cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d2890: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2d2890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d2894: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2d2894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_2d2898:
    // 0x2d2898: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2d289c:
    // 0x2d289c: 0x28420169  slti        $v0, $v0, 0x169
    ctx->pc = 0x2d289cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x2d28a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D28A0u;
    {
        const bool branch_taken_0x2d28a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d28a0) {
            ctx->pc = 0x2D28A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D28A0u;
            // 0x2d28a4: 0xae57005c  sw          $s7, 0x5C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28B4u;
            goto label_2d28b4;
        }
    }
    ctx->pc = 0x2D28A8u;
    // 0x2d28a8: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x2d28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2d28ac: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2d28acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x2d28b0: 0xae57005c  sw          $s7, 0x5C($s2)
    ctx->pc = 0x2d28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 23));
label_2d28b4:
    // 0x2d28b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d28b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d28b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d28b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d28bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d28bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d28c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d28c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d28c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d28c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d28c8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d28c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d28cc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2d28ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d28d0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2d28d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d28d4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2d28d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d28d8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d28d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d28dc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2d28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d28e0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2d28e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D28E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28E4u;
        // 0x2d28e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D28E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D28ECu;
    // 0x2d28ec: 0x0  nop
    ctx->pc = 0x2d28ecu;
    // NOP
    ctx->pc = 0x2d28f0u;
}
