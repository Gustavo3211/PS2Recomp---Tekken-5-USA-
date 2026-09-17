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

// Function: sub_00328448
// Address: 0x328448 - 0x3285c8
void sub_00328448_0x328448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328448_0x328448");
#endif

    switch (ctx->pc) {
        case 0x3284c0u: goto label_3284c0;
        case 0x3284dcu: goto label_3284dc;
        case 0x328528u: goto label_328528;
        case 0x3285a8u: goto label_3285a8;
        default: break;
    }

    ctx->pc = 0x328448u;

    // 0x328448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32844c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32844cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x328450: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x328450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x328454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328458: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x328458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x32845c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x32845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x328460: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x328460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x328464: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x328464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x328468: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x328468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x32846c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x328470: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x328470u;
    {
        const bool branch_taken_0x328470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x328474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328470u;
        // 0x328474: 0x8e460030  lw          $a2, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328470) {
            ctx->pc = 0x328488u;
            goto label_328488;
        }
    }
    ctx->pc = 0x328478u;
    // 0x328478: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x328478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x32847c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x328480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x328480u;
    {
        const bool branch_taken_0x328480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328480u;
        // 0x328484: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328480) {
            ctx->pc = 0x328498u;
            goto label_328498;
        }
    }
    ctx->pc = 0x328488u;
label_328488:
    // 0x328488: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x328488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x32848c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x32848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x328490: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x328490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x328494: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x328494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_328498:
    // 0x328498: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32849c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3284a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3284a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284a4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x3284a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3284a8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3284a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3284ac: 0x8e51002c  lw          $s1, 0x2C($s2)
    ctx->pc = 0x3284acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3284b0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3284B0u;
    {
        const bool branch_taken_0x3284b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B0u;
        // 0x3284b4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284b0) {
            ctx->pc = 0x328500u;
            goto label_328500;
        }
    }
    ctx->pc = 0x3284B8u;
    // 0x3284b8: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x3284b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3284bc: 0x0  nop
    ctx->pc = 0x3284bcu;
    // NOP
label_3284c0:
    // 0x3284c0: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x3284c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3284c4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3284c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284c8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x3284c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x3284cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3284ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3284d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284d4: 0xc0ca462  jal         func_329188
    ctx->pc = 0x3284D4u;
    SET_GPR_U32(ctx, 31, 0x3284DCu);
    ctx->pc = 0x3284D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284D4u;
    // 0x3284d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329188u, 0x3284D4u, 0x3284DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284DCu;
label_3284dc:
    // 0x3284dc: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3284dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3284e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3284e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284e4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3284e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3284e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3284ec: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x3284ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3284f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3284f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3284f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3284f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3284f8: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3284F8u;
    {
        const bool branch_taken_0x3284f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3284FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284F8u;
        // 0x3284fc: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284f8) {
            ctx->pc = 0x3284C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3284c0;
        }
    }
    ctx->pc = 0x328500u;
label_328500:
    // 0x328500: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x328500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x328504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x328504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328508: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x328508u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x32850c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x32850cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x328510: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x328510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x328514: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x328514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x328518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32851c: 0xaca60414  sw          $a2, 0x414($a1)
    ctx->pc = 0x32851cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x328520: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x328520u;
    SET_GPR_U32(ctx, 31, 0x328528u);
    ctx->pc = 0x328524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328520u;
    // 0x328524: 0x8e50002c  lw          $s0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x328520u, 0x328528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328528u;
label_328528:
    // 0x328528: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x328528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x32852c: 0x4b01093c  vitof0.x    $vf1, $vf1
    ctx->pc = 0x32852cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x328530: 0x4a6103bc  vdiv        $Q, $vf0w, $vf1x
    ctx->pc = 0x328530u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x328534: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x328534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328538: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x328538u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32853c: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x32853cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328540: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x328540u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328544: 0x4a0003bf  vwaitq
    ctx->pc = 0x328544u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x328548: 0x4bc0b85c  vmulq.xyz   $vf1, $vf23, $Q
    ctx->pc = 0x328548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32854c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x32854cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328550: 0x4be1e8bd  vmadday.xyzw $ACC, $vf29, $vf1y
    ctx->pc = 0x328550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328554: 0x4be1f0be  vmaddaz.xyzw $ACC, $vf30, $vf1z
    ctx->pc = 0x328554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328558: 0x4be0f84b  vmaddw.xyzw $vf1, $vf31, $vf0w
    ctx->pc = 0x328558u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32855c: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x32855cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328560: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x328560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328564: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x328564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x328568: 0x4be0384b  vmaddw.xyzw $vf1, $vf7, $vf0w
    ctx->pc = 0x328568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32856c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x32856cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x328570: 0x704213a9  pcpyud      $v0, $v0, $v0
    ctx->pc = 0x328570u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x328574: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x328574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x328578: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x328578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32857c: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x32857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x328580: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x328580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x328584: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x328584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x328588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x328588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32858c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32858cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x328590: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x328590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x328594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x328594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328598: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x328598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32859c: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x32859cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3285a0: 0xc0c819c  jal         func_320670
    ctx->pc = 0x3285A0u;
    SET_GPR_U32(ctx, 31, 0x3285A8u);
    ctx->pc = 0x3285A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285A0u;
    // 0x3285a4: 0xdc680010  ld          $t0, 0x10($v1) (Delay Slot)
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320670u, 0x3285A0u, 0x3285A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285A8u;
label_3285a8:
    // 0x3285a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3285a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3285ac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3285acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3285b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3285b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3285b4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3285b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3285b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3285b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3285bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3285BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285BCu;
        // 0x3285c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3285BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3285C4u;
    // 0x3285c4: 0x0  nop
    ctx->pc = 0x3285c4u;
    // NOP
    ctx->pc = 0x3285c8u;
}
