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

// Function: sub_003283A0
// Address: 0x3283a0 - 0x328448
void sub_003283A0_0x3283a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003283A0_0x3283a0");
#endif

    switch (ctx->pc) {
        case 0x3283a0u: goto label_3283a0;
        case 0x3283a4u: goto label_3283a4;
        case 0x3283a8u: goto label_3283a8;
        case 0x3283acu: goto label_3283ac;
        case 0x3283b0u: goto label_3283b0;
        case 0x3283b4u: goto label_3283b4;
        case 0x3283b8u: goto label_3283b8;
        case 0x3283bcu: goto label_3283bc;
        case 0x3283c0u: goto label_3283c0;
        case 0x3283c4u: goto label_3283c4;
        case 0x3283c8u: goto label_3283c8;
        case 0x3283ccu: goto label_3283cc;
        case 0x3283d0u: goto label_3283d0;
        case 0x3283d4u: goto label_3283d4;
        case 0x3283d8u: goto label_3283d8;
        case 0x3283dcu: goto label_3283dc;
        case 0x3283e0u: goto label_3283e0;
        case 0x3283e4u: goto label_3283e4;
        case 0x3283e8u: goto label_3283e8;
        case 0x3283ecu: goto label_3283ec;
        case 0x3283f0u: goto label_3283f0;
        case 0x3283f4u: goto label_3283f4;
        case 0x3283f8u: goto label_3283f8;
        case 0x3283fcu: goto label_3283fc;
        case 0x328400u: goto label_328400;
        case 0x328404u: goto label_328404;
        case 0x328408u: goto label_328408;
        case 0x32840cu: goto label_32840c;
        case 0x328410u: goto label_328410;
        case 0x328414u: goto label_328414;
        case 0x328418u: goto label_328418;
        case 0x32841cu: goto label_32841c;
        case 0x328420u: goto label_328420;
        case 0x328424u: goto label_328424;
        case 0x328428u: goto label_328428;
        case 0x32842cu: goto label_32842c;
        case 0x328430u: goto label_328430;
        case 0x328434u: goto label_328434;
        case 0x328438u: goto label_328438;
        case 0x32843cu: goto label_32843c;
        case 0x328440u: goto label_328440;
        case 0x328444u: goto label_328444;
        default: break;
    }

    ctx->pc = 0x3283a0u;

label_3283a0:
    // 0x3283a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3283a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3283a4:
    // 0x3283a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3283a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3283a8:
    // 0x3283a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3283a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3283ac:
    // 0x3283ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3283acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3283b0:
    // 0x3283b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3283b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3283b4:
    // 0x3283b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3283b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3283b8:
    // 0x3283b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3283b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3283bc:
    // 0x3283bc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3283bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3283c0:
    // 0x3283c0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3283c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_3283c4:
    // 0x3283c4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3283c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3283c8:
    // 0x3283c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3283c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3283cc:
    // 0x3283cc: 0xc0c8864  jal         func_322190
label_3283d0:
    if (ctx->pc == 0x3283D0u) {
        ctx->pc = 0x3283D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283CCu;
        // 0x3283d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283D4u;
        goto label_3283d4;
    }
    ctx->pc = 0x3283CCu;
    SET_GPR_U32(ctx, 31, 0x3283D4u);
    ctx->pc = 0x3283D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283CCu;
    // 0x3283d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x3283CCu, 0x3283D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283D4u;
label_3283d4:
    // 0x3283d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3283d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3283d8:
    // 0x3283d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3283d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3283dc:
    // 0x3283dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3283dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3283e0:
    // 0x3283e0: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x3283e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3283e4:
    // 0x3283e4: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3283e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3283e8:
    // 0x3283e8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3283ec:
    // 0x3283ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3283ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3283f0:
    // 0x3283f0: 0x40f809  jalr        $v0
label_3283f4:
    if (ctx->pc == 0x3283F4u) {
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283F8u;
        goto label_3283f8;
    }
    ctx->pc = 0x3283F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3283F8u);
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283F0u, 0x3283F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3283F8u;
label_3283f8:
    // 0x3283f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3283f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3283fc:
    // 0x3283fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3283fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_328400:
    // 0x328400: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x328400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_328404:
    // 0x328404: 0xc0ca2d0  jal         func_328B40
label_328408:
    if (ctx->pc == 0x328408u) {
        ctx->pc = 0x328408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328404u;
        // 0x328408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32840Cu;
        goto label_32840c;
    }
    ctx->pc = 0x328404u;
    SET_GPR_U32(ctx, 31, 0x32840Cu);
    ctx->pc = 0x328408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328404u;
    // 0x328408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x328404u, 0x32840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32840Cu;
label_32840c:
    // 0x32840c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x32840cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_328410:
    // 0x328410: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x328410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_328414:
    // 0x328414: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x328414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_328418:
    // 0x328418: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x328418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_32841c:
    // 0x32841c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x32841cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_328420:
    // 0x328420: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x328420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_328424:
    // 0x328424: 0x4be005d4  vminix.xyzw $vf23, $vf0, $vf0x
    ctx->pc = 0x328424u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
label_328428:
    // 0x328428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32842c:
    // 0x32842c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32842cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_328430:
    // 0x328430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328434:
    // 0x328434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_328438:
    // 0x328438: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x328438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_32843c:
    // 0x32843c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_328440:
    // 0x328440: 0x3e00008  jr          $ra
label_328444:
    if (ctx->pc == 0x328444u) {
        ctx->pc = 0x328444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328440u;
        // 0x328444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328448u;
        goto label_fallthrough_0x328440;
    }
    ctx->pc = 0x328440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328440u;
        // 0x328444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x328440:
    ctx->pc = 0x328448u;
}
