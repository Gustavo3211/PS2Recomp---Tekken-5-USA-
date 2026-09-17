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

// Function: sub_003494D8
// Address: 0x3494d8 - 0x3495b0
void sub_003494D8_0x3494d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003494D8_0x3494d8");
#endif

    switch (ctx->pc) {
        case 0x34958cu: goto label_34958c;
        default: break;
    }

    ctx->pc = 0x3494d8u;

    // 0x3494d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3494d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3494dc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x3494dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x3494e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3494e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3494e4: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3494E4u;
    {
        const bool branch_taken_0x3494e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3494E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494E4u;
        // 0x3494e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494e4) {
            ctx->pc = 0x34959Cu;
            goto label_34959c;
        }
    }
    ctx->pc = 0x3494ECu;
    // 0x3494ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3494f0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3494f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x3494f4: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x3494f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3494f8: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x3494f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3494fc: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x3494fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x349500: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x349500u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x349504: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x349504u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349508: 0xd8b90010  lqc2        $vf25, 0x10($a1)
    ctx->pc = 0x349508u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x34950c: 0xd8ba0020  lqc2        $vf26, 0x20($a1)
    ctx->pc = 0x34950cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x349510: 0xd8bb0030  lqc2        $vf27, 0x30($a1)
    ctx->pc = 0x349510u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x349514: 0x4a006038  vcallms     0xC00
    ctx->pc = 0x349514u;
    {     ctx->vu0_tpc = 0xC00;     runtime->executeVU0Microprogram(rdram, ctx, 0xC00); }
    // 0x349518: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x349518u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34951c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x34951cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x349520: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x349520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x349524: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x349524u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x349528: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x349528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34952c: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x34952cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x349530: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x349530u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x349534: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x349534u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x349538: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349538u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x34953c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x34953cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349540: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x349540u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x349544: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x349544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x349548: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349548u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x34954c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x34954cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349550: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x349550u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x349554: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x349554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x349558: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x349558u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x34955c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x34955cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x349560: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x349560u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x349564: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x349564u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x349568: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x349568u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x34956c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34956Cu;
    {
        const bool branch_taken_0x34956c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34956c) {
            ctx->pc = 0x349570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34956Cu;
            // 0x349570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3495A0u;
            goto label_3495a0;
        }
    }
    ctx->pc = 0x349574u;
    // 0x349574: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x349574u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x349578: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x349578u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x34957c: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x34957cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x349580: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x349580u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x349584: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x349584u;
    SET_GPR_U32(ctx, 31, 0x34958Cu);
    ctx->pc = 0x349588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349584u;
    // 0x349588: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x349584u, 0x34958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34958Cu;
label_34958c:
    // 0x34958c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x34958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x349590: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x349590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x349594: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x349594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x349598: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x349598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_34959c:
    // 0x34959c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34959cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3495a0:
    // 0x3495a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3495a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3495a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3495A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495A4u;
        // 0x3495a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3495A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3495ACu;
    // 0x3495ac: 0x0  nop
    ctx->pc = 0x3495acu;
    // NOP
    ctx->pc = 0x3495b0u;
}
