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

// Function: sub_002607D8
// Address: 0x2607d8 - 0x260888
void sub_002607D8_0x2607d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002607D8_0x2607d8");
#endif

    switch (ctx->pc) {
        case 0x2607d8u: goto label_2607d8;
        case 0x2607dcu: goto label_2607dc;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607e4u: goto label_2607e4;
        case 0x2607e8u: goto label_2607e8;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f0u: goto label_2607f0;
        case 0x2607f4u: goto label_2607f4;
        case 0x2607f8u: goto label_2607f8;
        case 0x2607fcu: goto label_2607fc;
        case 0x260800u: goto label_260800;
        case 0x260804u: goto label_260804;
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        default: break;
    }

    ctx->pc = 0x2607d8u;

label_2607d8:
    // 0x2607d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2607d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2607dc:
    // 0x2607dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2607dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2607e0:
    // 0x2607e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2607e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2607e4:
    // 0x2607e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2607e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2607e8:
    // 0x2607e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2607e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2607ec:
    // 0x2607ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2607ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2607f0:
    // 0x2607f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2607f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2607f4:
    // 0x2607f4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2607f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2607f8:
    // 0x2607f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2607f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2607fc:
    // 0x2607fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2607fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260800:
    // 0x260800: 0x60f809  jalr        $v1
label_260804:
    if (ctx->pc == 0x260804u) {
        ctx->pc = 0x260804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260800u;
        // 0x260804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260808u;
        goto label_260808;
    }
    ctx->pc = 0x260800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260808u);
        ctx->pc = 0x260804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260800u;
        // 0x260804: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260800u, 0x260808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260808u;
label_260808:
    // 0x260808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26080c:
    // 0x26080c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260810:
    // 0x260810: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_260814:
    // 0x260814: 0x8c4623b4  lw          $a2, 0x23B4($v0)
    ctx->pc = 0x260814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9140)));
label_260818:
    // 0x260818: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x260818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26081c:
    // 0x26081c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26081cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_260820:
    // 0x260820: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x260820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_260824:
    // 0x260824: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x260824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_260828:
    // 0x260828: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x260828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26082c:
    // 0x26082c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x26082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_260830:
    // 0x260830: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x260830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_260834:
    // 0x260834: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x260834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_260838:
    // 0x260838: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x260838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_26083c:
    // 0x26083c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26083cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_260840:
    // 0x260840: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_260844:
    // 0x260844: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x260844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260848:
    // 0x260848: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26084c:
    if (ctx->pc == 0x26084Cu) {
        ctx->pc = 0x26084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260848u;
        // 0x26084c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260850u;
        goto label_260850;
    }
    ctx->pc = 0x260848u;
    {
        const bool branch_taken_0x260848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260848u;
        // 0x26084c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260848) {
            ctx->pc = 0x26085Cu;
            goto label_26085c;
        }
    }
    ctx->pc = 0x260850u;
label_260850:
    // 0x260850: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x260850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_260854:
    // 0x260854: 0xc7808c00  lwc1        $f0, -0x7400($gp)
    ctx->pc = 0x260854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260858:
    // 0x260858: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x260858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_26085c:
    // 0x26085c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_260860:
    // 0x260860: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_260864:
    if (ctx->pc == 0x260864u) {
        ctx->pc = 0x260864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260860u;
        // 0x260864: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260868u;
        goto label_260868;
    }
    ctx->pc = 0x260860u;
    {
        const bool branch_taken_0x260860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260860) {
            ctx->pc = 0x260864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260860u;
            // 0x260864: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260874u;
            goto label_260874;
        }
    }
    ctx->pc = 0x260868u;
label_260868:
    // 0x260868: 0xc098336  jal         func_260CD8
label_26086c:
    if (ctx->pc == 0x26086Cu) {
        ctx->pc = 0x260870u;
        goto label_260870;
    }
    ctx->pc = 0x260868u;
    SET_GPR_U32(ctx, 31, 0x260870u);
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x260868u, 0x260870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260870u;
label_260870:
    // 0x260870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260874:
    // 0x260874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_260878:
    // 0x260878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26087c:
    // 0x26087c: 0x3e00008  jr          $ra
label_260880:
    if (ctx->pc == 0x260880u) {
        ctx->pc = 0x260880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26087Cu;
        // 0x260880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260884u;
        goto label_260884;
    }
    ctx->pc = 0x26087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26087Cu;
        // 0x260880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260884u;
label_260884:
    // 0x260884: 0x0  nop
    ctx->pc = 0x260884u;
    // NOP
    ctx->pc = 0x260888u;
}
