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

// Function: sub_00257B68
// Address: 0x257b68 - 0x258240
void sub_00257B68_0x257b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257B68_0x257b68");
#endif

    switch (ctx->pc) {
        case 0x257bccu: goto label_257bcc;
        case 0x257c90u: goto label_257c90;
        case 0x257ca8u: goto label_257ca8;
        case 0x257cb4u: goto label_257cb4;
        case 0x257cccu: goto label_257ccc;
        case 0x257d18u: goto label_257d18;
        case 0x257d40u: goto label_257d40;
        case 0x257d60u: goto label_257d60;
        case 0x257ddcu: goto label_257ddc;
        case 0x257df0u: goto label_257df0;
        case 0x257eb0u: goto label_257eb0;
        case 0x257f28u: goto label_257f28;
        case 0x257f90u: goto label_257f90;
        case 0x257fc4u: goto label_257fc4;
        case 0x258068u: goto label_258068;
        case 0x25820cu: goto label_25820c;
        default: break;
    }

    ctx->pc = 0x257b68u;

    // 0x257b68: 0x27bdf460  addiu       $sp, $sp, -0xBA0
    ctx->pc = 0x257b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964320));
    // 0x257b6c: 0xffb10b48  sd          $s1, 0xB48($sp)
    ctx->pc = 0x257b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2888), GPR_U64(ctx, 17));
    // 0x257b70: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x257b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b74: 0xffb50b68  sd          $s5, 0xB68($sp)
    ctx->pc = 0x257b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2920), GPR_U64(ctx, 21));
    // 0x257b78: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x257b78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b7c: 0xffb60b70  sd          $s6, 0xB70($sp)
    ctx->pc = 0x257b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2928), GPR_U64(ctx, 22));
    // 0x257b80: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x257b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b84: 0xffbe0b80  sd          $fp, 0xB80($sp)
    ctx->pc = 0x257b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2944), GPR_U64(ctx, 30));
    // 0x257b88: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x257b88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b8c: 0xffb00b40  sd          $s0, 0xB40($sp)
    ctx->pc = 0x257b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2880), GPR_U64(ctx, 16));
    // 0x257b90: 0xffb20b50  sd          $s2, 0xB50($sp)
    ctx->pc = 0x257b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2896), GPR_U64(ctx, 18));
    // 0x257b94: 0xffb30b58  sd          $s3, 0xB58($sp)
    ctx->pc = 0x257b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2904), GPR_U64(ctx, 19));
    // 0x257b98: 0xffb40b60  sd          $s4, 0xB60($sp)
    ctx->pc = 0x257b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2912), GPR_U64(ctx, 20));
    // 0x257b9c: 0xffb70b78  sd          $s7, 0xB78($sp)
    ctx->pc = 0x257b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2936), GPR_U64(ctx, 23));
    // 0x257ba0: 0xffbf0b88  sd          $ra, 0xB88($sp)
    ctx->pc = 0x257ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2952), GPR_U64(ctx, 31));
    // 0x257ba4: 0xe7b40b90  swc1        $f20, 0xB90($sp)
    ctx->pc = 0x257ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2960), bits); }
    // 0x257ba8: 0x97c20042  lhu         $v0, 0x42($fp)
    ctx->pc = 0x257ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 66)));
    // 0x257bac: 0xafa50b10  sw          $a1, 0xB10($sp)
    ctx->pc = 0x257bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2832), GPR_U32(ctx, 5));
    // 0x257bb0: 0xafa70b14  sw          $a3, 0xB14($sp)
    ctx->pc = 0x257bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2836), GPR_U32(ctx, 7));
    // 0x257bb4: 0x2442ffd3  addiu       $v0, $v0, -0x2D
    ctx->pc = 0x257bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
    // 0x257bb8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x257bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x257bbc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x257BBCu;
    {
        const bool branch_taken_0x257bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BBCu;
        // 0x257bc0: 0x87d00012  lh          $s0, 0x12($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bbc) {
            ctx->pc = 0x257C28u;
            goto label_257c28;
        }
    }
    ctx->pc = 0x257BC4u;
    // 0x257bc4: 0xc08215c  jal         func_208570
    ctx->pc = 0x257BC4u;
    SET_GPR_U32(ctx, 31, 0x257BCCu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x257BC4u, 0x257BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257BCCu;
label_257bcc:
    // 0x257bcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x257bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x257bd0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257BD0u;
    {
        const bool branch_taken_0x257bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x257BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BD0u;
        // 0x257bd4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bd0) {
            ctx->pc = 0x257C20u;
            goto label_257c20;
        }
    }
    ctx->pc = 0x257BD8u;
    // 0x257bd8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x257bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x257bdc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x257bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x257be0: 0x2783aa18  addiu       $v1, $gp, -0x55E8
    ctx->pc = 0x257be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945304));
    // 0x257be4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x257be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x257be8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x257be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257bec: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257BECu;
    {
        const bool branch_taken_0x257bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x257BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BECu;
        // 0x257bf0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bec) {
            ctx->pc = 0x257C00u;
            goto label_257c00;
        }
    }
    ctx->pc = 0x257BF4u;
    // 0x257bf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257BF4u;
    {
        const bool branch_taken_0x257bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BF4u;
        // 0x257bf8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bf4) {
            ctx->pc = 0x257C04u;
            goto label_257c04;
        }
    }
    ctx->pc = 0x257BFCu;
    // 0x257bfc: 0x0  nop
    ctx->pc = 0x257bfcu;
    // NOP
label_257c00:
    // 0x257c00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x257c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_257c04:
    // 0x257c04: 0xbc1021  addu        $v0, $a1, $gp
    ctx->pc = 0x257c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x257c08: 0x8c42aa18  lw          $v0, -0x55E8($v0)
    ctx->pc = 0x257c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945304)));
    // 0x257c0c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x257c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x257c10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257C10u;
    {
        const bool branch_taken_0x257c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C10u;
        // 0x257c14: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c10) {
            ctx->pc = 0x257C2Cu;
            goto label_257c2c;
        }
    }
    ctx->pc = 0x257C18u;
    // 0x257c18: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x257C18u;
    {
        const bool branch_taken_0x257c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C18u;
        // 0x257c1c: 0xdfb00b40  ld          $s0, 0xB40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c18) {
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x257C20u;
label_257c20:
    // 0x257c20: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x257c20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x257c24: 0xac20aa18  sw          $zero, -0x55E8($at)
    ctx->pc = 0x257c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945304), GPR_U32(ctx, 0));
label_257c28:
    // 0x257c28: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x257c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_257c2c:
    // 0x257c2c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x257c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x257c30: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x257c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x257c34: 0x50400176  beql        $v0, $zero, . + 4 + (0x176 << 2)
    ctx->pc = 0x257C34u;
    {
        const bool branch_taken_0x257c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c34) {
            ctx->pc = 0x257C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257C34u;
            // 0x257c38: 0xdfb00b40  ld          $s0, 0xB40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x257C3Cu;
    // 0x257c3c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x257C3Cu;
    {
        const bool branch_taken_0x257c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C3Cu;
        // 0x257c40: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c3c) {
            ctx->pc = 0x257CC0u;
            goto label_257cc0;
        }
    }
    ctx->pc = 0x257C44u;
    // 0x257c44: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x257c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257c48: 0x8fa40b10  lw          $a0, 0xB10($sp)
    ctx->pc = 0x257c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x257c4c: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x257c4cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257c50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x257c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257c54: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x257c54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x257c58: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x257c58u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x257c5c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x257c5cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x257c60: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x257c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x257c64: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x257c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x257c68: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x257c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x257c6c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x257c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x257c70: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x257c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x257c74: 0x8ec20060  lw          $v0, 0x60($s6)
    ctx->pc = 0x257c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x257c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257C78u;
    {
        const bool branch_taken_0x257c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C78u;
        // 0x257c7c: 0x26d00044  addiu       $s0, $s6, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257c78) {
            ctx->pc = 0x257C98u;
            goto label_257c98;
        }
    }
    ctx->pc = 0x257C80u;
    // 0x257c80: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x257c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257c88: 0xc095bb8  jal         func_256EE0
    ctx->pc = 0x257C88u;
    SET_GPR_U32(ctx, 31, 0x257C90u);
    ctx->pc = 0x257C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C88u;
    // 0x257c8c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EE0u, 0x257C88u, 0x257C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C90u;
label_257c90:
    // 0x257c90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x257C90u;
    {
        const bool branch_taken_0x257c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c90) {
            ctx->pc = 0x257CC4u;
            goto label_257cc4;
        }
    }
    ctx->pc = 0x257C98u;
label_257c98:
    // 0x257c98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x257c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ca0: 0xc095b82  jal         func_256E08
    ctx->pc = 0x257CA0u;
    SET_GPR_U32(ctx, 31, 0x257CA8u);
    ctx->pc = 0x257CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CA0u;
    // 0x257ca4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256E08u, 0x257CA0u, 0x257CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CA8u;
label_257ca8:
    // 0x257ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257cac: 0xc095bb0  jal         func_256EC0
    ctx->pc = 0x257CACu;
    SET_GPR_U32(ctx, 31, 0x257CB4u);
    ctx->pc = 0x257CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CACu;
    // 0x257cb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EC0u, 0x257CACu, 0x257CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CB4u;
label_257cb4:
    // 0x257cb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257CB4u;
    {
        const bool branch_taken_0x257cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257cb4) {
            ctx->pc = 0x257CC4u;
            goto label_257cc4;
        }
    }
    ctx->pc = 0x257CBCu;
    // 0x257cbc: 0x0  nop
    ctx->pc = 0x257cbcu;
    // NOP
label_257cc0:
    // 0x257cc0: 0x26d00044  addiu       $s0, $s6, 0x44
    ctx->pc = 0x257cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
label_257cc4:
    // 0x257cc4: 0xc095cde  jal         func_257378
    ctx->pc = 0x257CC4u;
    SET_GPR_U32(ctx, 31, 0x257CCCu);
    ctx->pc = 0x257CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CC4u;
    // 0x257cc8: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257378u, 0x257CC4u, 0x257CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CCCu;
label_257ccc:
    // 0x257ccc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x257cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x257cd0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x257cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257cd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x257CD4u;
    {
        const bool branch_taken_0x257cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257cd4) {
            ctx->pc = 0x257CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257CD4u;
            // 0x257cd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257CF8u;
            goto label_257cf8;
        }
    }
    ctx->pc = 0x257CDCu;
    // 0x257cdc: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x257cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x257ce0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x257ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257ce4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x257ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x257ce8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x257ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x257cec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x257cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x257cf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x257cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x257cf4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x257cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_257cf8:
    // 0x257cf8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x257cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x257cfc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x257cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x257d00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x257d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x257d04: 0x2450cbf0  addiu       $s0, $v0, -0x3410
    ctx->pc = 0x257d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953968));
    // 0x257d08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x257d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d10: 0xc095db0  jal         func_2576C0
    ctx->pc = 0x257D10u;
    SET_GPR_U32(ctx, 31, 0x257D18u);
    ctx->pc = 0x257D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D10u;
    // 0x257d14: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2576C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2576C0u, 0x257D10u, 0x257D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D18u;
label_257d18:
    // 0x257d18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x257d18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d1c: 0x12e0013c  beqz        $s7, . + 4 + (0x13C << 2)
    ctx->pc = 0x257D1Cu;
    {
        const bool branch_taken_0x257d1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D1Cu;
        // 0x257d20: 0xdfb00b40  ld          $s0, 0xB40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d1c) {
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x257D24u;
    // 0x257d24: 0x1ae00028  blez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x257D24u;
    {
        const bool branch_taken_0x257d24 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x257D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D24u;
        // 0x257d28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d24) {
            ctx->pc = 0x257DC8u;
            goto label_257dc8;
        }
    }
    ctx->pc = 0x257D2Cu;
    // 0x257d2c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x257d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257d34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x257d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x257d38: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x257d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d3c: 0x148900  sll         $s1, $s4, 4
    ctx->pc = 0x257d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_257d40:
    // 0x257d40: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x257d40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x257d44: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x257d48: 0x24e7cbf0  addiu       $a3, $a3, -0x3410
    ctx->pc = 0x257d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953968));
    // 0x257d4c: 0x8fa50b14  lw          $a1, 0xB14($sp)
    ctx->pc = 0x257d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2836)));
    // 0x257d50: 0x2273021  addu        $a2, $s1, $a3
    ctx->pc = 0x257d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x257d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d58: 0xc08491e  jal         func_212478
    ctx->pc = 0x257D58u;
    SET_GPR_U32(ctx, 31, 0x257D60u);
    ctx->pc = 0x257D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D58u;
    // 0x257d5c: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x257D58u, 0x257D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D60u;
label_257d60:
    // 0x257d60: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x257d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d64: 0x0  nop
    ctx->pc = 0x257d64u;
    // NOP
    // 0x257d68: 0x0  nop
    ctx->pc = 0x257d68u;
    // NOP
    // 0x257d6c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x257d6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x257d70: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x257d70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257d74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x257d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x257d78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x257d7c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x257d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x257d80: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x257d80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x257d84: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x257d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x257d88: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x257d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d8c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x257d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x257d90: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x257d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x257d94: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x257d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d98: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x257d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d9c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x257d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x257da0: 0x2463cd80  addiu       $v1, $v1, -0x3280
    ctx->pc = 0x257da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954368));
    // 0x257da4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x257da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x257da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257dac: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x257dacu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257db0: 0x4bf8817d  vftoi4.xyzw $vf24, $vf16
    ctx->pc = 0x257db0u;
    { __m128 src = ctx->vu0_vf[16]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x257db4: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x257db4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x257db8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x257db8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x257dbc: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x257dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x257dc0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x257DC0u;
    {
        const bool branch_taken_0x257dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257dc0) {
            ctx->pc = 0x257DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257DC0u;
            // 0x257dc4: 0x148900  sll         $s1, $s4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257d40;
        }
    }
    ctx->pc = 0x257DC8u;
label_257dc8:
    // 0x257dc8: 0x8fa70b10  lw          $a3, 0xB10($sp)
    ctx->pc = 0x257dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x257dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x257dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257dd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x257dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257dd4: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x257DD4u;
    SET_GPR_U32(ctx, 31, 0x257DDCu);
    ctx->pc = 0x257DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DD4u;
    // 0x257dd8: 0x24f10010  addiu       $s1, $a3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x257DD4u, 0x257DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DDCu;
label_257ddc:
    // 0x257ddc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x257ddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x257de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x257de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257de4: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x257de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
    // 0x257de8: 0xc08c218  jal         func_230860
    ctx->pc = 0x257DE8u;
    SET_GPR_U32(ctx, 31, 0x257DF0u);
    ctx->pc = 0x257DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DE8u;
    // 0x257dec: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x257DE8u, 0x257DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DF0u;
label_257df0:
    // 0x257df0: 0x8fa20b10  lw          $v0, 0xB10($sp)
    ctx->pc = 0x257df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x257df4: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x257df8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x257df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x257dfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257e00: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x257e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x257e04: 0x2462cd80  addiu       $v0, $v1, -0x3280
    ctx->pc = 0x257e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954368));
    // 0x257e08: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x257e08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x16CD8Cu));
    // 0x257e0c: 0x0  nop
    ctx->pc = 0x257e0cu;
    // NOP
    // 0x257e10: 0x0  nop
    ctx->pc = 0x257e10u;
    // NOP
    // 0x257e14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x257e14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x257e18: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x257e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x257e1c: 0x8fa20b10  lw          $v0, 0xB10($sp)
    ctx->pc = 0x257e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x257e20: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x257e20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x257e24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x257e28: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x257e2c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x257e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x257e30: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x257e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x257e34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x257e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257e38: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x257e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x257e3c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x257e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x257e40: 0xafa601e4  sw          $a2, 0x1E4($sp)
    ctx->pc = 0x257e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 6));
    // 0x257e44: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x257e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
    // 0x257e48: 0xdfa201e0  ld          $v0, 0x1E0($sp)
    ctx->pc = 0x257e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x257e4c: 0xdfa301e8  ld          $v1, 0x1E8($sp)
    ctx->pc = 0x257e4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x257e50: 0xffa201d0  sd          $v0, 0x1D0($sp)
    ctx->pc = 0x257e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 2));
    // 0x257e54: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x257e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
    // 0x257e58: 0x2812  mflo        $a1
    ctx->pc = 0x257e58u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x257e5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x257e5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257e60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257e64: 0x1ae00057  blez        $s7, . + 4 + (0x57 << 2)
    ctx->pc = 0x257E64u;
    {
        const bool branch_taken_0x257e64 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x257E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E64u;
        // 0x257e68: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e64) {
            ctx->pc = 0x257FC4u;
            goto label_257fc4;
        }
    }
    ctx->pc = 0x257E6Cu;
    // 0x257e6c: 0x87c70042  lh          $a3, 0x42($fp)
    ctx->pc = 0x257e6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 66)));
    // 0x257e70: 0x8fa30b10  lw          $v1, 0xB10($sp)
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x257e74: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x257e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x257e78: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x257E78u;
    {
        const bool branch_taken_0x257e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E78u;
        // 0x257e7c: 0x8c700024  lw          $s0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e78) {
            ctx->pc = 0x257F98u;
            goto label_257f98;
        }
    }
    ctx->pc = 0x257E80u;
    // 0x257e80: 0x28e20012  slti        $v0, $a3, 0x12
    ctx->pc = 0x257e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x257e84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x257E84u;
    {
        const bool branch_taken_0x257e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257e84) {
            ctx->pc = 0x257E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E84u;
            // 0x257e88: 0x8fa60b10  lw          $a2, 0xB10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EA0u;
            goto label_257ea0;
        }
    }
    ctx->pc = 0x257E8Cu;
    // 0x257e8c: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x257e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x257e90: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x257E90u;
    {
        const bool branch_taken_0x257e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E90u;
        // 0x257e94: 0x28e2001e  slti        $v0, $a3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e90) {
            ctx->pc = 0x257F98u;
            goto label_257f98;
        }
    }
    ctx->pc = 0x257E98u;
    // 0x257e98: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x257E98u;
    {
        const bool branch_taken_0x257e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257E98u;
        // 0x257e9c: 0x8fa60b10  lw          $a2, 0xB10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257e98) {
            ctx->pc = 0x257F98u;
            goto label_257f98;
        }
    }
    ctx->pc = 0x257EA0u;
label_257ea0:
    // 0x257ea0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x257ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ea4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x257ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ea8: 0xc096348  jal         func_258D20
    ctx->pc = 0x257EA8u;
    SET_GPR_U32(ctx, 31, 0x257EB0u);
    ctx->pc = 0x257EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EA8u;
    // 0x257eac: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x257EA8u, 0x257EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EB0u;
label_257eb0:
    // 0x257eb0: 0x97c30042  lhu         $v1, 0x42($fp)
    ctx->pc = 0x257eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 66)));
    // 0x257eb4: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x257eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x257eb8: 0x175900  sll         $t3, $s7, 4
    ctx->pc = 0x257eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x257ebc: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x257ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x257ec0: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x257ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x257ec4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x257ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x257ec8: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x257ecc: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x257eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x257ed0: 0x2404fce0  addiu       $a0, $zero, -0x320
    ctx->pc = 0x257ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966496));
    // 0x257ed4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x257ed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x257ed8: 0x8fa80220  lw          $t0, 0x220($sp)
    ctx->pc = 0x257ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x257edc: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x257edcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x257ee0: 0x2402f448  addiu       $v0, $zero, -0xBB8
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964296));
    // 0x257ee4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x257ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x257ee8: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x257ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
    // 0x257eec: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x257eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x257ef0: 0x8d4acd78  lw          $t2, -0x3288($t2)
    ctx->pc = 0x257ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294954360)));
    // 0x257ef4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x257ef4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x257ef8: 0x27ac0230  addiu       $t4, $sp, 0x230
    ctx->pc = 0x257ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x257efc: 0xafa70244  sw          $a3, 0x244($sp)
    ctx->pc = 0x257efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 7));
    // 0x257f00: 0x1505821  addu        $t3, $t2, $s0
    ctx->pc = 0x257f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x257f04: 0xafa60260  sw          $a2, 0x260($sp)
    ctx->pc = 0x257f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 6));
    // 0x257f08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f0c: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x257f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
    // 0x257f10: 0xafa70234  sw          $a3, 0x234($sp)
    ctx->pc = 0x257f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 7));
    // 0x257f14: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x257f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
    // 0x257f18: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x257f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x257f1c: 0xafa80250  sw          $t0, 0x250($sp)
    ctx->pc = 0x257f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 8));
    // 0x257f20: 0xafa80230  sw          $t0, 0x230($sp)
    ctx->pc = 0x257f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 8));
    // 0x257f24: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x257f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_257f28:
    // 0x257f28: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x257f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x257f2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x257f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x257f30: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x257f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x257f34: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x257f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x257f38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x257f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f3c: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x257f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x257f40: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x257F40u;
    {
        const bool branch_taken_0x257f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F40u;
        // 0x257f44: 0xac8a000c  sw          $t2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f40) {
            ctx->pc = 0x257F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257f28;
        }
    }
    ctx->pc = 0x257F48u;
    // 0x257f48: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x257f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x257f4c: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x257f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x257f50: 0x244220c0  addiu       $v0, $v0, 0x20C0
    ctx->pc = 0x257f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8384));
    // 0x257f54: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x257f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f58: 0x244d0030  addiu       $t5, $v0, 0x30
    ctx->pc = 0x257f58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x257f5c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x257f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x257f60: 0x244c0020  addiu       $t4, $v0, 0x20
    ctx->pc = 0x257f60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x257f64: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x257f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x257f68: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x257f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x257f6c: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x257f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x257f70: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x257f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f74: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x257f74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f78: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x257f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f7c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x257f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x257f80: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x257f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x257f84: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x257f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x257f88: 0xc095ce6  jal         func_257398
    ctx->pc = 0x257F88u;
    SET_GPR_U32(ctx, 31, 0x257F90u);
    ctx->pc = 0x257F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F88u;
    // 0x257f8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257398u, 0x257F88u, 0x257F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F90u;
label_257f90:
    // 0x257f90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x257F90u;
    {
        const bool branch_taken_0x257f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F90u;
        // 0x257f94: 0x2ae20006  slti        $v0, $s7, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f90) {
            ctx->pc = 0x257FC8u;
            goto label_257fc8;
        }
    }
    ctx->pc = 0x257F98u;
label_257f98:
    // 0x257f98: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x257f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x257f9c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x257f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x257fa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x257fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fa4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x257fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x257fa8: 0x175900  sll         $t3, $s7, 4
    ctx->pc = 0x257fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x257fac: 0x2445cd80  addiu       $a1, $v0, -0x3280
    ctx->pc = 0x257facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
    // 0x257fb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x257fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fb4: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x257fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x257fb8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x257fbc: 0xc095e1e  jal         func_257878
    ctx->pc = 0x257FBCu;
    SET_GPR_U32(ctx, 31, 0x257FC4u);
    ctx->pc = 0x257FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FBCu;
    // 0x257fc0: 0x1652821  addu        $a1, $t3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257878u, 0x257FBCu, 0x257FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FC4u;
label_257fc4:
    // 0x257fc4: 0x2ae20006  slti        $v0, $s7, 0x6
    ctx->pc = 0x257fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)6) ? 1 : 0);
label_257fc8:
    // 0x257fc8: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x257FC8u;
    {
        const bool branch_taken_0x257fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FC8u;
        // 0x257fcc: 0xdfb00b40  ld          $s0, 0xB40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fc8) {
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x257FD0u;
    // 0x257fd0: 0x27a608b0  addiu       $a2, $sp, 0x8B0
    ctx->pc = 0x257fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x257fd4: 0x27b409e0  addiu       $s4, $sp, 0x9E0
    ctx->pc = 0x257fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2528));
    // 0x257fd8: 0xafa601f0  sw          $a2, 0x1F0($sp)
    ctx->pc = 0x257fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
    // 0x257fdc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x257fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x257fe0: 0xafb401f4  sw          $s4, 0x1F4($sp)
    ctx->pc = 0x257fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 20));
    // 0x257fe4: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x257fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x257fe8: 0xafa00b24  sw          $zero, 0xB24($sp)
    ctx->pc = 0x257fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2852), GPR_U32(ctx, 0));
    // 0x257fec: 0x6ba401f7  ldl         $a0, 0x1F7($sp)
    ctx->pc = 0x257fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x257ff0: 0x6fa401f0  ldr         $a0, 0x1F0($sp)
    ctx->pc = 0x257ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x257ff4: 0xb3a401e7  sdl         $a0, 0x1E7($sp)
    ctx->pc = 0x257ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257ff8: 0xb7a401e0  sdr         $a0, 0x1E0($sp)
    ctx->pc = 0x257ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257ffc: 0xafa30b20  sw          $v1, 0xB20($sp)
    ctx->pc = 0x257ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2848), GPR_U32(ctx, 3));
    // 0x258000: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x258004: 0xafa00b18  sw          $zero, 0xB18($sp)
    ctx->pc = 0x258004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2840), GPR_U32(ctx, 0));
    // 0x258008: 0x1ae00076  blez        $s7, . + 4 + (0x76 << 2)
    ctx->pc = 0x258008u;
    {
        const bool branch_taken_0x258008 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x25800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258008u;
        // 0x25800c: 0xafa30b1c  sw          $v1, 0xB1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258008) {
            ctx->pc = 0x2581E4u;
            goto label_2581e4;
        }
    }
    ctx->pc = 0x258010u;
    // 0x258010: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x258010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x258014: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x258014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x258018: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x258018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25801c: 0x245ecd80  addiu       $fp, $v0, -0x3280
    ctx->pc = 0x25801cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954368));
    // 0x258020: 0x175900  sll         $t3, $s7, 4
    ctx->pc = 0x258020u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x258024: 0x17e1821  addu        $v1, $t3, $fp
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 30)));
    // 0x258028: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x258028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25802c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25802cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x258030: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x258030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258038: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x258038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25803c: 0x8c42fff0  lw          $v0, -0x10($v0)
    ctx->pc = 0x25803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x258040: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x258040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x258044: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x258048: 0x27b60270  addiu       $s6, $sp, 0x270
    ctx->pc = 0x258048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x25804c: 0xafa20b28  sw          $v0, 0xB28($sp)
    ctx->pc = 0x25804cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2856), GPR_U32(ctx, 2));
    // 0x258050: 0xafa40b30  sw          $a0, 0xB30($sp)
    ctx->pc = 0x258050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2864), GPR_U32(ctx, 4));
    // 0x258054: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x258054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x258058: 0x8c63fff4  lw          $v1, -0xC($v1)
    ctx->pc = 0x258058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x25805c: 0xafb10b34  sw          $s1, 0xB34($sp)
    ctx->pc = 0x25805cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2868), GPR_U32(ctx, 17));
    // 0x258060: 0xafa30b2c  sw          $v1, 0xB2C($sp)
    ctx->pc = 0x258060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2860), GPR_U32(ctx, 3));
    // 0x258064: 0x0  nop
    ctx->pc = 0x258064u;
    // NOP
label_258068:
    // 0x258068: 0x8fa20b24  lw          $v0, 0xB24($sp)
    ctx->pc = 0x258068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
    // 0x25806c: 0x8fa40b2c  lw          $a0, 0xB2C($sp)
    ctx->pc = 0x25806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2860)));
    // 0x258070: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x258070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258074: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x258074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x258078: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x258078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25807c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x25807cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258080: 0x8c780004  lw          $t8, 0x4($v1)
    ctx->pc = 0x258080u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x258084: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x258084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258088: 0x8fa30b28  lw          $v1, 0xB28($sp)
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2856)));
    // 0x25808c: 0x3231023  subu        $v0, $t9, $v1
    ctx->pc = 0x25808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x258090: 0x3041823  subu        $v1, $t8, $a0
    ctx->pc = 0x258090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x258094: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x258094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x258098: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x258098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25809c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2580a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2580a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2580a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2580a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2580a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2580a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2580ac: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x2580ACu;
    {
        const bool branch_taken_0x2580ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2580B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580ACu;
        // 0x2580b0: 0x8fa30b24  lw          $v1, 0xB24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580ac) {
            ctx->pc = 0x2581D4u;
            goto label_2581d4;
        }
    }
    ctx->pc = 0x2580B4u;
    // 0x2580b4: 0x8fa70b24  lw          $a3, 0xB24($sp)
    ctx->pc = 0x2580b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
    // 0x2580b8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2580B8u;
    {
        const bool branch_taken_0x2580b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580B8u;
        // 0x2580bc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580b8) {
            ctx->pc = 0x2580F0u;
            goto label_2580f0;
        }
    }
    ctx->pc = 0x2580C0u;
    // 0x2580c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2580c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580c4: 0x8c44fff0  lw          $a0, -0x10($v0)
    ctx->pc = 0x2580c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x2580c8: 0x8c65fff4  lw          $a1, -0xC($v1)
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x2580cc: 0x3241023  subu        $v0, $t9, $a0
    ctx->pc = 0x2580ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x2580d0: 0x3051823  subu        $v1, $t8, $a1
    ctx->pc = 0x2580d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x2580d4: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x2580d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2580d8: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x2580d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2580dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2580dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2580e0: 0x8fa30b20  lw          $v1, 0xB20($sp)
    ctx->pc = 0x2580e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2848)));
    // 0x2580e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2580e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2580e8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2580E8u;
    {
        const bool branch_taken_0x2580e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580E8u;
        // 0x2580ec: 0x8fa40b18  lw          $a0, 0xB18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580e8) {
            ctx->pc = 0x2581E8u;
            goto label_2581e8;
        }
    }
    ctx->pc = 0x2580F0u;
label_2580f0:
    // 0x2580f0: 0x8fa20b1c  lw          $v0, 0xB1C($sp)
    ctx->pc = 0x2580f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2844)));
    // 0x2580f4: 0x8fa30b24  lw          $v1, 0xB24($sp)
    ctx->pc = 0x2580f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
    // 0x2580f8: 0x8fa70b10  lw          $a3, 0xB10($sp)
    ctx->pc = 0x2580f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x2580fc: 0x434018  mult        $t0, $v0, $v1
    ctx->pc = 0x2580fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x258100: 0x8fa20b30  lw          $v0, 0xB30($sp)
    ctx->pc = 0x258100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x258104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x258104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258108: 0x8fa50b18  lw          $a1, 0xB18($sp)
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
    // 0x25810c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x25810cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x258110: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x258110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x258114: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x258118: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25811c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x258120: 0x8fa50b34  lw          $a1, 0xB34($sp)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2868)));
    // 0x258124: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x258124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x258128: 0x27a20590  addiu       $v0, $sp, 0x590
    ctx->pc = 0x258128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x25812c: 0x766821  addu        $t5, $v1, $s6
    ctx->pc = 0x25812cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x258130: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x258130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258134: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x258134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258138: 0x8fa20b18  lw          $v0, 0xB18($sp)
    ctx->pc = 0x258138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
    // 0x25813c: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x25813cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258140: 0x78ab0000  lq          $t3, 0x0($a1)
    ctx->pc = 0x258140u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258144: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x258144u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258148: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x258148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25814c: 0x27a509e0  addiu       $a1, $sp, 0x9E0
    ctx->pc = 0x25814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2528));
    // 0x258150: 0x27a708b0  addiu       $a3, $sp, 0x8B0
    ctx->pc = 0x258150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x258154: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x258154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258158: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x258158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x25815c: 0xafa20b18  sw          $v0, 0xB18($sp)
    ctx->pc = 0x25815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2840), GPR_U32(ctx, 2));
    // 0x258160: 0xa6a021  addu        $s4, $a1, $a2
    ctx->pc = 0x258160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x258164: 0xaaa821  addu        $s5, $a1, $t2
    ctx->pc = 0x258164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x258168: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x25816c: 0x2c36021  addu        $t4, $s6, $v1
    ctx->pc = 0x25816cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x258170: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x258170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258174: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x258178: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x258178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25817c: 0x2012  mflo        $a0
    ctx->pc = 0x25817cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x258180: 0x117001a  div         $zero, $t0, $s7
    ctx->pc = 0x258180u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x258184: 0x3043823  subu        $a3, $t8, $a0
    ctx->pc = 0x258184u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x258188: 0x3242823  subu        $a1, $t9, $a0
    ctx->pc = 0x258188u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x25818c: 0x3241021  addu        $v0, $t9, $a0
    ctx->pc = 0x25818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x258190: 0x3042021  addu        $a0, $t8, $a0
    ctx->pc = 0x258190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x258194: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x258194u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x258198: 0xada40004  sw          $a0, 0x4($t5)
    ctx->pc = 0x258198u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
    // 0x25819c: 0xadc90008  sw          $t1, 0x8($t6)
    ctx->pc = 0x25819cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 9));
    // 0x2581a0: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x2581a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x2581a4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2581a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x2581a8: 0xae290018  sw          $t1, 0x18($s1)
    ctx->pc = 0x2581a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x2581ac: 0x7e4b0010  sq          $t3, 0x10($s2)
    ctx->pc = 0x2581acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 11));
    // 0x2581b0: 0x7e4b0000  sq          $t3, 0x0($s2)
    ctx->pc = 0x2581b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 11));
    // 0x2581b4: 0x4012  mflo        $t0
    ctx->pc = 0x2581b4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2581b8: 0xae68001c  sw          $t0, 0x1C($s3)
    ctx->pc = 0x2581b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 8));
    // 0x2581bc: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2581bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2581c0: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2581c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2581c4: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2581c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2581c8: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x2581c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2581cc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2581ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x2581d0: 0x8fa30b24  lw          $v1, 0xB24($sp)
    ctx->pc = 0x2581d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
label_2581d4:
    // 0x2581d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2581d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2581d8: 0x77102a  slt         $v0, $v1, $s7
    ctx->pc = 0x2581d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2581dc: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2581DCu;
    {
        const bool branch_taken_0x2581dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581DCu;
        // 0x2581e0: 0xafa30b24  sw          $v1, 0xB24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581dc) {
            ctx->pc = 0x258068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258068;
        }
    }
    ctx->pc = 0x2581E4u;
label_2581e4:
    // 0x2581e4: 0x8fa40b18  lw          $a0, 0xB18($sp)
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
label_2581e8:
    // 0x2581e8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2581e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2581ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2581ECu;
    {
        const bool branch_taken_0x2581ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2581F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581ECu;
        // 0x2581f0: 0xdfb00b40  ld          $s0, 0xB40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581ec) {
            ctx->pc = 0x258210u;
            goto label_258210;
        }
    }
    ctx->pc = 0x2581F4u;
    // 0x2581f4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2581f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2581f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2581f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2581fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2581fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258200: 0x27a50590  addiu       $a1, $sp, 0x590
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x258204: 0xc09622e  jal         func_2588B8
    ctx->pc = 0x258204u;
    SET_GPR_U32(ctx, 31, 0x25820Cu);
    ctx->pc = 0x258208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258204u;
    // 0x258208: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2588B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588B8u, 0x258204u, 0x25820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25820Cu;
label_25820c:
    // 0x25820c: 0xdfb00b40  ld          $s0, 0xB40($sp)
    ctx->pc = 0x25820cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2880)));
label_258210:
    // 0x258210: 0xdfb10b48  ld          $s1, 0xB48($sp)
    ctx->pc = 0x258210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2888)));
    // 0x258214: 0xdfb20b50  ld          $s2, 0xB50($sp)
    ctx->pc = 0x258214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x258218: 0xdfb30b58  ld          $s3, 0xB58($sp)
    ctx->pc = 0x258218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2904)));
    // 0x25821c: 0xdfb40b60  ld          $s4, 0xB60($sp)
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2912)));
    // 0x258220: 0xdfb50b68  ld          $s5, 0xB68($sp)
    ctx->pc = 0x258220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2920)));
    // 0x258224: 0xdfb60b70  ld          $s6, 0xB70($sp)
    ctx->pc = 0x258224u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x258228: 0xdfb70b78  ld          $s7, 0xB78($sp)
    ctx->pc = 0x258228u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2936)));
    // 0x25822c: 0xdfbe0b80  ld          $fp, 0xB80($sp)
    ctx->pc = 0x25822cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x258230: 0xdfbf0b88  ld          $ra, 0xB88($sp)
    ctx->pc = 0x258230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2952)));
    // 0x258234: 0xc7b40b90  lwc1        $f20, 0xB90($sp)
    ctx->pc = 0x258234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258238: 0x3e00008  jr          $ra
    ctx->pc = 0x258238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258238u;
        // 0x25823c: 0x27bd0ba0  addiu       $sp, $sp, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258240u;
}
