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

// Function: sub_00339530
// Address: 0x339530 - 0x3395b8
void sub_00339530_0x339530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339530_0x339530");
#endif

    switch (ctx->pc) {
        case 0x339530u: goto label_339530;
        case 0x339534u: goto label_339534;
        case 0x339538u: goto label_339538;
        case 0x33953cu: goto label_33953c;
        case 0x339540u: goto label_339540;
        case 0x339544u: goto label_339544;
        case 0x339548u: goto label_339548;
        case 0x33954cu: goto label_33954c;
        case 0x339550u: goto label_339550;
        case 0x339554u: goto label_339554;
        case 0x339558u: goto label_339558;
        case 0x33955cu: goto label_33955c;
        case 0x339560u: goto label_339560;
        case 0x339564u: goto label_339564;
        case 0x339568u: goto label_339568;
        case 0x33956cu: goto label_33956c;
        case 0x339570u: goto label_339570;
        case 0x339574u: goto label_339574;
        case 0x339578u: goto label_339578;
        case 0x33957cu: goto label_33957c;
        case 0x339580u: goto label_339580;
        case 0x339584u: goto label_339584;
        case 0x339588u: goto label_339588;
        case 0x33958cu: goto label_33958c;
        case 0x339590u: goto label_339590;
        case 0x339594u: goto label_339594;
        case 0x339598u: goto label_339598;
        case 0x33959cu: goto label_33959c;
        case 0x3395a0u: goto label_3395a0;
        case 0x3395a4u: goto label_3395a4;
        case 0x3395a8u: goto label_3395a8;
        case 0x3395acu: goto label_3395ac;
        case 0x3395b0u: goto label_3395b0;
        case 0x3395b4u: goto label_3395b4;
        default: break;
    }

    ctx->pc = 0x339530u;

label_339530:
    // 0x339530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339534:
    // 0x339534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339538:
    // 0x339538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33953c:
    // 0x33953c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_339540:
    // 0x339540: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x339540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_339544:
    // 0x339544: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x339544u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_339548:
    // 0x339548: 0xd8b90010  lqc2        $vf25, 0x10($a1)
    ctx->pc = 0x339548u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_33954c:
    // 0x33954c: 0xd8ba0020  lqc2        $vf26, 0x20($a1)
    ctx->pc = 0x33954cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_339550:
    // 0x339550: 0xd8bb0030  lqc2        $vf27, 0x30($a1)
    ctx->pc = 0x339550u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_339554:
    // 0x339554: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x339554u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
label_339558:
    // 0x339558: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x339558u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
label_33955c:
    // 0x33955c: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x33955cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
label_339560:
    // 0x339560: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x339560u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
label_339564:
    // 0x339564: 0xc0ce24e  jal         func_338938
label_339568:
    if (ctx->pc == 0x339568u) {
        ctx->pc = 0x339568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339564u;
        // 0x339568: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33956Cu;
        goto label_33956c;
    }
    ctx->pc = 0x339564u;
    SET_GPR_U32(ctx, 31, 0x33956Cu);
    ctx->pc = 0x339568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339564u;
    // 0x339568: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338938u, 0x339564u, 0x33956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33956Cu;
label_33956c:
    // 0x33956c: 0xc0ce270  jal         func_3389C0
label_339570:
    if (ctx->pc == 0x339570u) {
        ctx->pc = 0x339570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33956Cu;
        // 0x339570: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339574u;
        goto label_339574;
    }
    ctx->pc = 0x33956Cu;
    SET_GPR_U32(ctx, 31, 0x339574u);
    ctx->pc = 0x339570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33956Cu;
    // 0x339570: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C0u, 0x33956Cu, 0x339574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339574u;
label_339574:
    // 0x339574: 0xc0ce28c  jal         func_338A30
label_339578:
    if (ctx->pc == 0x339578u) {
        ctx->pc = 0x339578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339574u;
        // 0x339578: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33957Cu;
        goto label_33957c;
    }
    ctx->pc = 0x339574u;
    SET_GPR_U32(ctx, 31, 0x33957Cu);
    ctx->pc = 0x339578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339574u;
    // 0x339578: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A30u, 0x339574u, 0x33957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33957Cu;
label_33957c:
    // 0x33957c: 0xc0ce2d4  jal         func_338B50
label_339580:
    if (ctx->pc == 0x339580u) {
        ctx->pc = 0x339580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33957Cu;
        // 0x339580: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339584u;
        goto label_339584;
    }
    ctx->pc = 0x33957Cu;
    SET_GPR_U32(ctx, 31, 0x339584u);
    ctx->pc = 0x339580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33957Cu;
    // 0x339580: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B50u, 0x33957Cu, 0x339584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339584u;
label_339584:
    // 0x339584: 0xc0ce35c  jal         func_338D70
label_339588:
    if (ctx->pc == 0x339588u) {
        ctx->pc = 0x339588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339584u;
        // 0x339588: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33958Cu;
        goto label_33958c;
    }
    ctx->pc = 0x339584u;
    SET_GPR_U32(ctx, 31, 0x33958Cu);
    ctx->pc = 0x339588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339584u;
    // 0x339588: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D70u, 0x339584u, 0x33958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33958Cu;
label_33958c:
    // 0x33958c: 0x8e0503f8  lw          $a1, 0x3F8($s0)
    ctx->pc = 0x33958cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_339590:
    // 0x339590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339594:
    // 0x339594: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x339594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_339598:
    // 0x339598: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33959c:
    // 0x33959c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3395a0:
    // 0x3395a0: 0x40f809  jalr        $v0
label_3395a4:
    if (ctx->pc == 0x3395A4u) {
        ctx->pc = 0x3395A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395A0u;
        // 0x3395a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3395A8u;
        goto label_3395a8;
    }
    ctx->pc = 0x3395A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3395A8u);
        ctx->pc = 0x3395A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395A0u;
        // 0x3395a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395A0u, 0x3395A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3395A8u;
label_3395a8:
    // 0x3395a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3395a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3395ac:
    // 0x3395ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3395acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3395b0:
    // 0x3395b0: 0x3e00008  jr          $ra
label_3395b4:
    if (ctx->pc == 0x3395B4u) {
        ctx->pc = 0x3395B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395B0u;
        // 0x3395b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3395B8u;
        goto label_fallthrough_0x3395b0;
    }
    ctx->pc = 0x3395B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3395B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395B0u;
        // 0x3395b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3395b0:
    ctx->pc = 0x3395B8u;
}
