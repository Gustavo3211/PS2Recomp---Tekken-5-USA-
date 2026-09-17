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

// Function: sub_003395B8
// Address: 0x3395b8 - 0x339688
void sub_003395B8_0x3395b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003395B8_0x3395b8");
#endif

    switch (ctx->pc) {
        case 0x3395b8u: goto label_3395b8;
        case 0x3395bcu: goto label_3395bc;
        case 0x3395c0u: goto label_3395c0;
        case 0x3395c4u: goto label_3395c4;
        case 0x3395c8u: goto label_3395c8;
        case 0x3395ccu: goto label_3395cc;
        case 0x3395d0u: goto label_3395d0;
        case 0x3395d4u: goto label_3395d4;
        case 0x3395d8u: goto label_3395d8;
        case 0x3395dcu: goto label_3395dc;
        case 0x3395e0u: goto label_3395e0;
        case 0x3395e4u: goto label_3395e4;
        case 0x3395e8u: goto label_3395e8;
        case 0x3395ecu: goto label_3395ec;
        case 0x3395f0u: goto label_3395f0;
        case 0x3395f4u: goto label_3395f4;
        case 0x3395f8u: goto label_3395f8;
        case 0x3395fcu: goto label_3395fc;
        case 0x339600u: goto label_339600;
        case 0x339604u: goto label_339604;
        case 0x339608u: goto label_339608;
        case 0x33960cu: goto label_33960c;
        case 0x339610u: goto label_339610;
        case 0x339614u: goto label_339614;
        case 0x339618u: goto label_339618;
        case 0x33961cu: goto label_33961c;
        case 0x339620u: goto label_339620;
        case 0x339624u: goto label_339624;
        case 0x339628u: goto label_339628;
        case 0x33962cu: goto label_33962c;
        case 0x339630u: goto label_339630;
        case 0x339634u: goto label_339634;
        case 0x339638u: goto label_339638;
        case 0x33963cu: goto label_33963c;
        case 0x339640u: goto label_339640;
        case 0x339644u: goto label_339644;
        case 0x339648u: goto label_339648;
        case 0x33964cu: goto label_33964c;
        case 0x339650u: goto label_339650;
        case 0x339654u: goto label_339654;
        case 0x339658u: goto label_339658;
        case 0x33965cu: goto label_33965c;
        case 0x339660u: goto label_339660;
        case 0x339664u: goto label_339664;
        case 0x339668u: goto label_339668;
        case 0x33966cu: goto label_33966c;
        case 0x339670u: goto label_339670;
        case 0x339674u: goto label_339674;
        case 0x339678u: goto label_339678;
        case 0x33967cu: goto label_33967c;
        case 0x339680u: goto label_339680;
        case 0x339684u: goto label_339684;
        default: break;
    }

    ctx->pc = 0x3395b8u;

label_3395b8:
    // 0x3395b8: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x3395b8u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
label_3395bc:
    // 0x3395bc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3395bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3395c0:
    // 0x3395c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3395c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3395c4:
    // 0x3395c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3395c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3395c8:
    // 0x3395c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3395c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3395cc:
    // 0x3395cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3395ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3395d0:
    // 0x3395d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3395d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3395d4:
    // 0x3395d4: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x3395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3395d8:
    // 0x3395d8: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x3395d8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3395dc:
    // 0x3395dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3395dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3395e0:
    // 0x3395e0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x3395e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3395e4:
    // 0x3395e4: 0xe7af0028  swc1        $f15, 0x28($sp)
    ctx->pc = 0x3395e4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3395e8:
    // 0x3395e8: 0xe7ad0034  swc1        $f13, 0x34($sp)
    ctx->pc = 0x3395e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3395ec:
    // 0x3395ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3395ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3395f0:
    // 0x3395f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3395f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3395f4:
    // 0x3395f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3395f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3395f8:
    // 0x3395f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3395f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3395fc:
    // 0x3395fc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3395fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_339600:
    // 0x339600: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x339600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_339604:
    // 0x339604: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x339604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_339608:
    // 0x339608: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x339608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_33960c:
    // 0x33960c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x33960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_339610:
    // 0x339610: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x339610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_339614:
    // 0x339614: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x339614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_339618:
    // 0x339618: 0xdbb80000  lqc2        $vf24, 0x0($sp)
    ctx->pc = 0x339618u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33961c:
    // 0x33961c: 0xdbb90010  lqc2        $vf25, 0x10($sp)
    ctx->pc = 0x33961cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339620:
    // 0x339620: 0xdbba0020  lqc2        $vf26, 0x20($sp)
    ctx->pc = 0x339620u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339624:
    // 0x339624: 0xdbbb0030  lqc2        $vf27, 0x30($sp)
    ctx->pc = 0x339624u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339628:
    // 0x339628: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x339628u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
label_33962c:
    // 0x33962c: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x33962cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
label_339630:
    // 0x339630: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x339630u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
label_339634:
    // 0x339634: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x339634u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
label_339638:
    // 0x339638: 0xc0ce24e  jal         func_338938
label_33963c:
    if (ctx->pc == 0x33963Cu) {
        ctx->pc = 0x33963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339638u;
        // 0x33963c: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339640u;
        goto label_339640;
    }
    ctx->pc = 0x339638u;
    SET_GPR_U32(ctx, 31, 0x339640u);
    ctx->pc = 0x33963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339638u;
    // 0x33963c: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338938u, 0x339638u, 0x339640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339640u;
label_339640:
    // 0x339640: 0xc0ce270  jal         func_3389C0
label_339644:
    if (ctx->pc == 0x339644u) {
        ctx->pc = 0x339644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339640u;
        // 0x339644: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339648u;
        goto label_339648;
    }
    ctx->pc = 0x339640u;
    SET_GPR_U32(ctx, 31, 0x339648u);
    ctx->pc = 0x339644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339640u;
    // 0x339644: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C0u, 0x339640u, 0x339648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339648u;
label_339648:
    // 0x339648: 0xc0ce28c  jal         func_338A30
label_33964c:
    if (ctx->pc == 0x33964Cu) {
        ctx->pc = 0x33964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339648u;
        // 0x33964c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339650u;
        goto label_339650;
    }
    ctx->pc = 0x339648u;
    SET_GPR_U32(ctx, 31, 0x339650u);
    ctx->pc = 0x33964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339648u;
    // 0x33964c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A30u, 0x339648u, 0x339650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339650u;
label_339650:
    // 0x339650: 0xc0ce2d4  jal         func_338B50
label_339654:
    if (ctx->pc == 0x339654u) {
        ctx->pc = 0x339654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339650u;
        // 0x339654: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339658u;
        goto label_339658;
    }
    ctx->pc = 0x339650u;
    SET_GPR_U32(ctx, 31, 0x339658u);
    ctx->pc = 0x339654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339650u;
    // 0x339654: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B50u, 0x339650u, 0x339658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339658u;
label_339658:
    // 0x339658: 0x8e0503f8  lw          $a1, 0x3F8($s0)
    ctx->pc = 0x339658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_33965c:
    // 0x33965c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339660:
    // 0x339660: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x339660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_339664:
    // 0x339664: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339668:
    // 0x339668: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33966c:
    // 0x33966c: 0x40f809  jalr        $v0
label_339670:
    if (ctx->pc == 0x339670u) {
        ctx->pc = 0x339670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33966Cu;
        // 0x339670: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339674u;
        goto label_339674;
    }
    ctx->pc = 0x33966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339674u);
        ctx->pc = 0x339670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33966Cu;
        // 0x339670: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33966Cu, 0x339674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339674u;
label_339674:
    // 0x339674: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x339674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_339678:
    // 0x339678: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x339678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33967c:
    // 0x33967c: 0x3e00008  jr          $ra
label_339680:
    if (ctx->pc == 0x339680u) {
        ctx->pc = 0x339680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33967Cu;
        // 0x339680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339684u;
        goto label_339684;
    }
    ctx->pc = 0x33967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33967Cu;
        // 0x339680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33967Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339684u;
label_339684:
    // 0x339684: 0x0  nop
    ctx->pc = 0x339684u;
    // NOP
    ctx->pc = 0x339688u;
}
