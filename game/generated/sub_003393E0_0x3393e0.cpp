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

// Function: sub_003393E0
// Address: 0x3393e0 - 0x339468
void sub_003393E0_0x3393e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003393E0_0x3393e0");
#endif

    switch (ctx->pc) {
        case 0x3393e0u: goto label_3393e0;
        case 0x3393e4u: goto label_3393e4;
        case 0x3393e8u: goto label_3393e8;
        case 0x3393ecu: goto label_3393ec;
        case 0x3393f0u: goto label_3393f0;
        case 0x3393f4u: goto label_3393f4;
        case 0x3393f8u: goto label_3393f8;
        case 0x3393fcu: goto label_3393fc;
        case 0x339400u: goto label_339400;
        case 0x339404u: goto label_339404;
        case 0x339408u: goto label_339408;
        case 0x33940cu: goto label_33940c;
        case 0x339410u: goto label_339410;
        case 0x339414u: goto label_339414;
        case 0x339418u: goto label_339418;
        case 0x33941cu: goto label_33941c;
        case 0x339420u: goto label_339420;
        case 0x339424u: goto label_339424;
        case 0x339428u: goto label_339428;
        case 0x33942cu: goto label_33942c;
        case 0x339430u: goto label_339430;
        case 0x339434u: goto label_339434;
        case 0x339438u: goto label_339438;
        case 0x33943cu: goto label_33943c;
        case 0x339440u: goto label_339440;
        case 0x339444u: goto label_339444;
        case 0x339448u: goto label_339448;
        case 0x33944cu: goto label_33944c;
        case 0x339450u: goto label_339450;
        case 0x339454u: goto label_339454;
        case 0x339458u: goto label_339458;
        case 0x33945cu: goto label_33945c;
        case 0x339460u: goto label_339460;
        case 0x339464u: goto label_339464;
        default: break;
    }

    ctx->pc = 0x3393e0u;

label_3393e0:
    // 0x3393e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3393e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3393e4:
    // 0x3393e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3393e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3393e8:
    // 0x3393e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3393e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3393ec:
    // 0x3393ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3393ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3393f0:
    // 0x3393f0: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x3393f0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3393f4:
    // 0x3393f4: 0xd8b90010  lqc2        $vf25, 0x10($a1)
    ctx->pc = 0x3393f4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_3393f8:
    // 0x3393f8: 0xd8ba0020  lqc2        $vf26, 0x20($a1)
    ctx->pc = 0x3393f8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_3393fc:
    // 0x3393fc: 0xd8bb0030  lqc2        $vf27, 0x30($a1)
    ctx->pc = 0x3393fcu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_339400:
    // 0x339400: 0xfa180000  sqc2        $vf24, 0x0($s0)
    ctx->pc = 0x339400u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[24]));
label_339404:
    // 0x339404: 0xfa190010  sqc2        $vf25, 0x10($s0)
    ctx->pc = 0x339404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[25]));
label_339408:
    // 0x339408: 0xfa1a0020  sqc2        $vf26, 0x20($s0)
    ctx->pc = 0x339408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[26]));
label_33940c:
    // 0x33940c: 0xfa1b0030  sqc2        $vf27, 0x30($s0)
    ctx->pc = 0x33940cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[27]));
label_339410:
    // 0x339410: 0xc0ce24e  jal         func_338938
label_339414:
    if (ctx->pc == 0x339414u) {
        ctx->pc = 0x339414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339410u;
        // 0x339414: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339418u;
        goto label_339418;
    }
    ctx->pc = 0x339410u;
    SET_GPR_U32(ctx, 31, 0x339418u);
    ctx->pc = 0x339414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339410u;
    // 0x339414: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338938u, 0x339410u, 0x339418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339418u;
label_339418:
    // 0x339418: 0xc0ce2b8  jal         func_338AE0
label_33941c:
    if (ctx->pc == 0x33941Cu) {
        ctx->pc = 0x33941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339418u;
        // 0x33941c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339420u;
        goto label_339420;
    }
    ctx->pc = 0x339418u;
    SET_GPR_U32(ctx, 31, 0x339420u);
    ctx->pc = 0x33941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339418u;
    // 0x33941c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338AE0u, 0x339418u, 0x339420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339420u;
label_339420:
    // 0x339420: 0xc0ce330  jal         func_338CC0
label_339424:
    if (ctx->pc == 0x339424u) {
        ctx->pc = 0x339424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339420u;
        // 0x339424: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339428u;
        goto label_339428;
    }
    ctx->pc = 0x339420u;
    SET_GPR_U32(ctx, 31, 0x339428u);
    ctx->pc = 0x339424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339420u;
    // 0x339424: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338CC0u, 0x339420u, 0x339428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339428u;
label_339428:
    // 0x339428: 0xc0ce458  jal         func_339160
label_33942c:
    if (ctx->pc == 0x33942Cu) {
        ctx->pc = 0x33942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339428u;
        // 0x33942c: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339430u;
        goto label_339430;
    }
    ctx->pc = 0x339428u;
    SET_GPR_U32(ctx, 31, 0x339430u);
    ctx->pc = 0x33942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339428u;
    // 0x33942c: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339160u, 0x339428u, 0x339430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339430u;
label_339430:
    // 0x339430: 0xc0ce4a6  jal         func_339298
label_339434:
    if (ctx->pc == 0x339434u) {
        ctx->pc = 0x339434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339430u;
        // 0x339434: 0x260403d0  addiu       $a0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339438u;
        goto label_339438;
    }
    ctx->pc = 0x339430u;
    SET_GPR_U32(ctx, 31, 0x339438u);
    ctx->pc = 0x339434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339430u;
    // 0x339434: 0x260403d0  addiu       $a0, $s0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339298u, 0x339430u, 0x339438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339438u;
label_339438:
    // 0x339438: 0x8e0503f8  lw          $a1, 0x3F8($s0)
    ctx->pc = 0x339438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_33943c:
    // 0x33943c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339440:
    // 0x339440: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x339440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_339444:
    // 0x339444: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339448:
    // 0x339448: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33944c:
    // 0x33944c: 0x40f809  jalr        $v0
label_339450:
    if (ctx->pc == 0x339450u) {
        ctx->pc = 0x339450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33944Cu;
        // 0x339450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339454u;
        goto label_339454;
    }
    ctx->pc = 0x33944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339454u);
        ctx->pc = 0x339450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33944Cu;
        // 0x339450: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33944Cu, 0x339454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339454u;
label_339454:
    // 0x339454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339458:
    // 0x339458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x339458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33945c:
    // 0x33945c: 0x3e00008  jr          $ra
label_339460:
    if (ctx->pc == 0x339460u) {
        ctx->pc = 0x339460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33945Cu;
        // 0x339460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339464u;
        goto label_339464;
    }
    ctx->pc = 0x33945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33945Cu;
        // 0x339460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339464u;
label_339464:
    // 0x339464: 0x0  nop
    ctx->pc = 0x339464u;
    // NOP
    ctx->pc = 0x339468u;
}
