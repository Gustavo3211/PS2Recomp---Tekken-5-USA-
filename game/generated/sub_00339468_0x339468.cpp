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

// Function: sub_00339468
// Address: 0x339468 - 0x339530
void sub_00339468_0x339468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339468_0x339468");
#endif

    switch (ctx->pc) {
        case 0x339468u: goto label_339468;
        case 0x33946cu: goto label_33946c;
        case 0x339470u: goto label_339470;
        case 0x339474u: goto label_339474;
        case 0x339478u: goto label_339478;
        case 0x33947cu: goto label_33947c;
        case 0x339480u: goto label_339480;
        case 0x339484u: goto label_339484;
        case 0x339488u: goto label_339488;
        case 0x33948cu: goto label_33948c;
        case 0x339490u: goto label_339490;
        case 0x339494u: goto label_339494;
        case 0x339498u: goto label_339498;
        case 0x33949cu: goto label_33949c;
        case 0x3394a0u: goto label_3394a0;
        case 0x3394a4u: goto label_3394a4;
        case 0x3394a8u: goto label_3394a8;
        case 0x3394acu: goto label_3394ac;
        case 0x3394b0u: goto label_3394b0;
        case 0x3394b4u: goto label_3394b4;
        case 0x3394b8u: goto label_3394b8;
        case 0x3394bcu: goto label_3394bc;
        case 0x3394c0u: goto label_3394c0;
        case 0x3394c4u: goto label_3394c4;
        case 0x3394c8u: goto label_3394c8;
        case 0x3394ccu: goto label_3394cc;
        case 0x3394d0u: goto label_3394d0;
        case 0x3394d4u: goto label_3394d4;
        case 0x3394d8u: goto label_3394d8;
        case 0x3394dcu: goto label_3394dc;
        case 0x3394e0u: goto label_3394e0;
        case 0x3394e4u: goto label_3394e4;
        case 0x3394e8u: goto label_3394e8;
        case 0x3394ecu: goto label_3394ec;
        case 0x3394f0u: goto label_3394f0;
        case 0x3394f4u: goto label_3394f4;
        case 0x3394f8u: goto label_3394f8;
        case 0x3394fcu: goto label_3394fc;
        case 0x339500u: goto label_339500;
        case 0x339504u: goto label_339504;
        case 0x339508u: goto label_339508;
        case 0x33950cu: goto label_33950c;
        case 0x339510u: goto label_339510;
        case 0x339514u: goto label_339514;
        case 0x339518u: goto label_339518;
        case 0x33951cu: goto label_33951c;
        case 0x339520u: goto label_339520;
        case 0x339524u: goto label_339524;
        case 0x339528u: goto label_339528;
        case 0x33952cu: goto label_33952c;
        default: break;
    }

    ctx->pc = 0x339468u;

label_339468:
    // 0x339468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33946c:
    // 0x33946c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x33946cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_339470:
    // 0x339470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339474:
    // 0x339474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339478:
    // 0x339478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x339478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33947c:
    // 0x33947c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x33947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339480:
    // 0x339480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x339480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_339484:
    // 0x339484: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_339488:
    if (ctx->pc == 0x339488u) {
        ctx->pc = 0x339488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339484u;
        // 0x339488: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33948Cu;
        goto label_33948c;
    }
    ctx->pc = 0x339484u;
    {
        const bool branch_taken_0x339484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339484u;
        // 0x339488: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339484) {
            ctx->pc = 0x339498u;
            goto label_339498;
        }
    }
    ctx->pc = 0x33948Cu;
label_33948c:
    // 0x33948c: 0x10000004  b           . + 4 + (0x4 << 2)
label_339490:
    if (ctx->pc == 0x339490u) {
        ctx->pc = 0x339490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33948Cu;
        // 0x339490: 0xae0003f0  sw          $zero, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339494u;
        goto label_339494;
    }
    ctx->pc = 0x33948Cu;
    {
        const bool branch_taken_0x33948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33948Cu;
        // 0x339490: 0xae0003f0  sw          $zero, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33948c) {
            ctx->pc = 0x3394A0u;
            goto label_3394a0;
        }
    }
    ctx->pc = 0x339494u;
label_339494:
    // 0x339494: 0x0  nop
    ctx->pc = 0x339494u;
    // NOP
label_339498:
    // 0x339498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33949c:
    // 0x33949c: 0xae0203f0  sw          $v0, 0x3F0($s0)
    ctx->pc = 0x33949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
label_3394a0:
    // 0x3394a0: 0xd8b80000  lqc2        $vf24, 0x0($a1)
    ctx->pc = 0x3394a0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3394a4:
    // 0x3394a4: 0xd8b90010  lqc2        $vf25, 0x10($a1)
    ctx->pc = 0x3394a4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_3394a8:
    // 0x3394a8: 0xd8ba0020  lqc2        $vf26, 0x20($a1)
    ctx->pc = 0x3394a8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_3394ac:
    // 0x3394ac: 0xd8bb0030  lqc2        $vf27, 0x30($a1)
    ctx->pc = 0x3394acu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_3394b0:
    // 0x3394b0: 0xf8780000  sqc2        $vf24, 0x0($v1)
    ctx->pc = 0x3394b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[24]));
label_3394b4:
    // 0x3394b4: 0xf8790010  sqc2        $vf25, 0x10($v1)
    ctx->pc = 0x3394b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[25]));
label_3394b8:
    // 0x3394b8: 0xf87a0020  sqc2        $vf26, 0x20($v1)
    ctx->pc = 0x3394b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[26]));
label_3394bc:
    // 0x3394bc: 0xf87b0030  sqc2        $vf27, 0x30($v1)
    ctx->pc = 0x3394bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[27]));
label_3394c0:
    // 0x3394c0: 0xc0ce24e  jal         func_338938
label_3394c4:
    if (ctx->pc == 0x3394C4u) {
        ctx->pc = 0x3394C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394C0u;
        // 0x3394c4: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394C8u;
        goto label_3394c8;
    }
    ctx->pc = 0x3394C0u;
    SET_GPR_U32(ctx, 31, 0x3394C8u);
    ctx->pc = 0x3394C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394C0u;
    // 0x3394c4: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338938u, 0x3394C0u, 0x3394C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394C8u;
label_3394c8:
    // 0x3394c8: 0xc0ce270  jal         func_3389C0
label_3394cc:
    if (ctx->pc == 0x3394CCu) {
        ctx->pc = 0x3394CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394C8u;
        // 0x3394cc: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394D0u;
        goto label_3394d0;
    }
    ctx->pc = 0x3394C8u;
    SET_GPR_U32(ctx, 31, 0x3394D0u);
    ctx->pc = 0x3394CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394C8u;
    // 0x3394cc: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389C0u, 0x3394C8u, 0x3394D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394D0u;
label_3394d0:
    // 0x3394d0: 0xc0ce28c  jal         func_338A30
label_3394d4:
    if (ctx->pc == 0x3394D4u) {
        ctx->pc = 0x3394D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394D0u;
        // 0x3394d4: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394D8u;
        goto label_3394d8;
    }
    ctx->pc = 0x3394D0u;
    SET_GPR_U32(ctx, 31, 0x3394D8u);
    ctx->pc = 0x3394D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394D0u;
    // 0x3394d4: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A30u, 0x3394D0u, 0x3394D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394D8u;
label_3394d8:
    // 0x3394d8: 0xc0ce2b8  jal         func_338AE0
label_3394dc:
    if (ctx->pc == 0x3394DCu) {
        ctx->pc = 0x3394DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394D8u;
        // 0x3394dc: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394E0u;
        goto label_3394e0;
    }
    ctx->pc = 0x3394D8u;
    SET_GPR_U32(ctx, 31, 0x3394E0u);
    ctx->pc = 0x3394DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394D8u;
    // 0x3394dc: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338AE0u, 0x3394D8u, 0x3394E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394E0u;
label_3394e0:
    // 0x3394e0: 0xc0ce346  jal         func_338D18
label_3394e4:
    if (ctx->pc == 0x3394E4u) {
        ctx->pc = 0x3394E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394E0u;
        // 0x3394e4: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394E8u;
        goto label_3394e8;
    }
    ctx->pc = 0x3394E0u;
    SET_GPR_U32(ctx, 31, 0x3394E8u);
    ctx->pc = 0x3394E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394E0u;
    // 0x3394e4: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D18u, 0x3394E0u, 0x3394E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394E8u;
label_3394e8:
    // 0x3394e8: 0xc0ce372  jal         func_338DC8
label_3394ec:
    if (ctx->pc == 0x3394ECu) {
        ctx->pc = 0x3394ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394E8u;
        // 0x3394ec: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394F0u;
        goto label_3394f0;
    }
    ctx->pc = 0x3394E8u;
    SET_GPR_U32(ctx, 31, 0x3394F0u);
    ctx->pc = 0x3394ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394E8u;
    // 0x3394ec: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DC8u, 0x3394E8u, 0x3394F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394F0u;
label_3394f0:
    // 0x3394f0: 0xc0ce47c  jal         func_3391F0
label_3394f4:
    if (ctx->pc == 0x3394F4u) {
        ctx->pc = 0x3394F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394F0u;
        // 0x3394f4: 0x260403c0  addiu       $a0, $s0, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3394F8u;
        goto label_3394f8;
    }
    ctx->pc = 0x3394F0u;
    SET_GPR_U32(ctx, 31, 0x3394F8u);
    ctx->pc = 0x3394F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394F0u;
    // 0x3394f4: 0x260403c0  addiu       $a0, $s0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3391F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3391F0u, 0x3394F0u, 0x3394F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394F8u;
label_3394f8:
    // 0x3394f8: 0xc0ce4d4  jal         func_339350
label_3394fc:
    if (ctx->pc == 0x3394FCu) {
        ctx->pc = 0x3394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394F8u;
        // 0x3394fc: 0x260403e0  addiu       $a0, $s0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339500u;
        goto label_339500;
    }
    ctx->pc = 0x3394F8u;
    SET_GPR_U32(ctx, 31, 0x339500u);
    ctx->pc = 0x3394FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394F8u;
    // 0x3394fc: 0x260403e0  addiu       $a0, $s0, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339350u, 0x3394F8u, 0x339500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339500u;
label_339500:
    // 0x339500: 0x8e0503f8  lw          $a1, 0x3F8($s0)
    ctx->pc = 0x339500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_339504:
    // 0x339504: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339508:
    // 0x339508: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x339508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_33950c:
    // 0x33950c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33950cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339510:
    // 0x339510: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339514:
    // 0x339514: 0x40f809  jalr        $v0
label_339518:
    if (ctx->pc == 0x339518u) {
        ctx->pc = 0x339518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339514u;
        // 0x339518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33951Cu;
        goto label_33951c;
    }
    ctx->pc = 0x339514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33951Cu);
        ctx->pc = 0x339518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339514u;
        // 0x339518: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339514u, 0x33951Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33951Cu;
label_33951c:
    // 0x33951c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33951cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339520:
    // 0x339520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x339520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339524:
    // 0x339524: 0x3e00008  jr          $ra
label_339528:
    if (ctx->pc == 0x339528u) {
        ctx->pc = 0x339528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339524u;
        // 0x339528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33952Cu;
        goto label_33952c;
    }
    ctx->pc = 0x339524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339524u;
        // 0x339528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33952Cu;
label_33952c:
    // 0x33952c: 0x0  nop
    ctx->pc = 0x33952cu;
    // NOP
    ctx->pc = 0x339530u;
}
