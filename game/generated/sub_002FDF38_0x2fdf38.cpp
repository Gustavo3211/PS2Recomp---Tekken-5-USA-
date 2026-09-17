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

// Function: sub_002FDF38
// Address: 0x2fdf38 - 0x2fe028
void sub_002FDF38_0x2fdf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDF38_0x2fdf38");
#endif

    switch (ctx->pc) {
        case 0x2fdf54u: goto label_2fdf54;
        case 0x2fdff4u: goto label_2fdff4;
        case 0x2fdffcu: goto label_2fdffc;
        case 0x2fe014u: goto label_2fe014;
        default: break;
    }

    ctx->pc = 0x2fdf38u;

label_2fdf38:
    // 0x2fdf38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdf3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fdf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fdf40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fdf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdf44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fdf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fdf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdf4c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF54u);
    ctx->pc = 0x2FDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF4Cu;
    // 0x2fdf50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FDF4Cu, 0x2FDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF54u;
label_2fdf54:
    // 0x2fdf54: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2fdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fdf58: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FDF58u;
    {
        const bool branch_taken_0x2fdf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf58) {
            ctx->pc = 0x2FDF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDF58u;
            // 0x2fdf5c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDFE4u;
            goto label_2fdfe4;
        }
    }
    ctx->pc = 0x2FDF60u;
    // 0x2fdf60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fdf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fdf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fdf68: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FDF68u;
    {
        const bool branch_taken_0x2fdf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf68) {
            ctx->pc = 0x2FDF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDF68u;
            // 0x2fdf6c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDFE4u;
            goto label_2fdfe4;
        }
    }
    ctx->pc = 0x2FDF70u;
    // 0x2fdf70: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FDF70u;
    {
        const bool branch_taken_0x2fdf70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf70) {
            ctx->pc = 0x2FDF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDF70u;
            // 0x2fdf74: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDFB8u;
            goto label_2fdfb8;
        }
    }
    ctx->pc = 0x2FDF78u;
    // 0x2fdf78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fdf7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fdf80: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2fdf80u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdf84: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2fdf84u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fdf88: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x2fdf88u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2fdf8c: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x2fdf8cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2fdf90: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x2fdf90u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x2fdf94: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x2fdf94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2fdf98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fdf9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fdfa0: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2fdfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2fdfa4: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2fdfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2fdfa8: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2fdfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2fdfac: 0xf85f0030  sqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2fdfacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2fdfb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FDFB0u;
    {
        const bool branch_taken_0x2fdfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFB0u;
        // 0x2fdfb4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfb0) {
            ctx->pc = 0x2FDFE4u;
            goto label_2fdfe4;
        }
    }
    ctx->pc = 0x2FDFB8u;
label_2fdfb8:
    // 0x2fdfb8: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2fdfb8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdfbc: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2fdfbcu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fdfc0: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x2fdfc0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2fdfc4: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x2fdfc4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2fdfc8: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x2fdfc8u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x2fdfcc: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x2fdfccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2fdfd0: 0xf87c0000  sqc2        $vf28, 0x0($v1)
    ctx->pc = 0x2fdfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2fdfd4: 0xf87d0010  sqc2        $vf29, 0x10($v1)
    ctx->pc = 0x2fdfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2fdfd8: 0xf87e0020  sqc2        $vf30, 0x20($v1)
    ctx->pc = 0x2fdfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2fdfdc: 0xf87f0030  sqc2        $vf31, 0x30($v1)
    ctx->pc = 0x2fdfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2fdfe0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2fdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2fdfe4:
    // 0x2fdfe4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDFE4u;
    {
        const bool branch_taken_0x2fdfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdfe4) {
            ctx->pc = 0x2FDFF4u;
            goto label_2fdff4;
        }
    }
    ctx->pc = 0x2FDFECu;
    // 0x2fdfec: 0xc0bf7ce  jal         func_2FDF38
    ctx->pc = 0x2FDFECu;
    SET_GPR_U32(ctx, 31, 0x2FDFF4u);
    ctx->pc = 0x2FDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFECu;
    // 0x2fdff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF38u;
    goto label_2fdf38;
    ctx->pc = 0x2FDFF4u;
label_2fdff4:
    // 0x2fdff4: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FDFF4u;
    SET_GPR_U32(ctx, 31, 0x2FDFFCu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FDFF4u, 0x2FDFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFFCu;
label_2fdffc:
    // 0x2fdffc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2fdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fe000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE004u;
    {
        const bool branch_taken_0x2fe004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE004u;
        // 0x2fe008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe004) {
            ctx->pc = 0x2FE014u;
            goto label_2fe014;
        }
    }
    ctx->pc = 0x2FE00Cu;
    // 0x2fe00c: 0xc0bf7ce  jal         func_2FDF38
    ctx->pc = 0x2FE00Cu;
    SET_GPR_U32(ctx, 31, 0x2FE014u);
    ctx->pc = 0x2FDF38u;
    goto label_2fdf38;
    ctx->pc = 0x2FE014u;
label_2fe014:
    // 0x2fe014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fe018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe020: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE020u;
        // 0x2fe024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE028u;
}
