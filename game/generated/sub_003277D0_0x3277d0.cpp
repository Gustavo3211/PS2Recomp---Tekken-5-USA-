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

// Function: sub_003277D0
// Address: 0x3277d0 - 0x327878
void sub_003277D0_0x3277d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003277D0_0x3277d0");
#endif

    switch (ctx->pc) {
        case 0x3277d0u: goto label_3277d0;
        case 0x3277d4u: goto label_3277d4;
        case 0x3277d8u: goto label_3277d8;
        case 0x3277dcu: goto label_3277dc;
        case 0x3277e0u: goto label_3277e0;
        case 0x3277e4u: goto label_3277e4;
        case 0x3277e8u: goto label_3277e8;
        case 0x3277ecu: goto label_3277ec;
        case 0x3277f0u: goto label_3277f0;
        case 0x3277f4u: goto label_3277f4;
        case 0x3277f8u: goto label_3277f8;
        case 0x3277fcu: goto label_3277fc;
        case 0x327800u: goto label_327800;
        case 0x327804u: goto label_327804;
        case 0x327808u: goto label_327808;
        case 0x32780cu: goto label_32780c;
        case 0x327810u: goto label_327810;
        case 0x327814u: goto label_327814;
        case 0x327818u: goto label_327818;
        case 0x32781cu: goto label_32781c;
        case 0x327820u: goto label_327820;
        case 0x327824u: goto label_327824;
        case 0x327828u: goto label_327828;
        case 0x32782cu: goto label_32782c;
        case 0x327830u: goto label_327830;
        case 0x327834u: goto label_327834;
        case 0x327838u: goto label_327838;
        case 0x32783cu: goto label_32783c;
        case 0x327840u: goto label_327840;
        case 0x327844u: goto label_327844;
        case 0x327848u: goto label_327848;
        case 0x32784cu: goto label_32784c;
        case 0x327850u: goto label_327850;
        case 0x327854u: goto label_327854;
        case 0x327858u: goto label_327858;
        case 0x32785cu: goto label_32785c;
        case 0x327860u: goto label_327860;
        case 0x327864u: goto label_327864;
        case 0x327868u: goto label_327868;
        case 0x32786cu: goto label_32786c;
        case 0x327870u: goto label_327870;
        case 0x327874u: goto label_327874;
        default: break;
    }

    ctx->pc = 0x3277d0u;

label_3277d0:
    // 0x3277d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3277d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3277d4:
    // 0x3277d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3277d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3277d8:
    // 0x3277d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3277d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3277dc:
    // 0x3277dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3277dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3277e0:
    // 0x3277e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3277e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3277e4:
    // 0x3277e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3277e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3277e8:
    // 0x3277e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3277e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3277ec:
    // 0x3277ec: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3277ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3277f0:
    // 0x3277f0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3277f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_3277f4:
    // 0x3277f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3277f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3277f8:
    // 0x3277f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3277f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3277fc:
    // 0x3277fc: 0xc0c8864  jal         func_322190
label_327800:
    if (ctx->pc == 0x327800u) {
        ctx->pc = 0x327800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277FCu;
        // 0x327800: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327804u;
        goto label_327804;
    }
    ctx->pc = 0x3277FCu;
    SET_GPR_U32(ctx, 31, 0x327804u);
    ctx->pc = 0x327800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277FCu;
    // 0x327800: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x3277FCu, 0x327804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327804u;
label_327804:
    // 0x327804: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x327804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327808:
    // 0x327808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32780c:
    // 0x32780c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_327810:
    // 0x327810: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_327814:
    // 0x327814: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_327818:
    // 0x327818: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x327818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32781c:
    // 0x32781c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_327820:
    // 0x327820: 0x40f809  jalr        $v0
label_327824:
    if (ctx->pc == 0x327824u) {
        ctx->pc = 0x327824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327820u;
        // 0x327824: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327828u;
        goto label_327828;
    }
    ctx->pc = 0x327820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327828u);
        ctx->pc = 0x327824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327820u;
        // 0x327824: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327820u, 0x327828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327828u;
label_327828:
    // 0x327828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32782c:
    // 0x32782c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32782cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_327830:
    // 0x327830: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x327830u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_327834:
    // 0x327834: 0xc0c9f0c  jal         func_327C30
label_327838:
    if (ctx->pc == 0x327838u) {
        ctx->pc = 0x327838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327834u;
        // 0x327838: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32783Cu;
        goto label_32783c;
    }
    ctx->pc = 0x327834u;
    SET_GPR_U32(ctx, 31, 0x32783Cu);
    ctx->pc = 0x327838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327834u;
    // 0x327838: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327C30u, 0x327834u, 0x32783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32783Cu;
label_32783c:
    // 0x32783c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x32783cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_327840:
    // 0x327840: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x327840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_327844:
    // 0x327844: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x327844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_327848:
    // 0x327848: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x327848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_32784c:
    // 0x32784c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x32784cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_327850:
    // 0x327850: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x327850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_327854:
    // 0x327854: 0x4be005d4  vminix.xyzw $vf23, $vf0, $vf0x
    ctx->pc = 0x327854u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
label_327858:
    // 0x327858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32785c:
    // 0x32785c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32785cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_327860:
    // 0x327860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327864:
    // 0x327864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x327864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_327868:
    // 0x327868: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x327868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_32786c:
    // 0x32786c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_327870:
    // 0x327870: 0x3e00008  jr          $ra
label_327874:
    if (ctx->pc == 0x327874u) {
        ctx->pc = 0x327874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327870u;
        // 0x327874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327878u;
        goto label_fallthrough_0x327870;
    }
    ctx->pc = 0x327870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327870u;
        // 0x327874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x327870:
    ctx->pc = 0x327878u;
}
