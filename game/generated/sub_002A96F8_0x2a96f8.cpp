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

// Function: sub_002A96F8
// Address: 0x2a96f8 - 0x2a97d0
void sub_002A96F8_0x2a96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A96F8_0x2a96f8");
#endif

    switch (ctx->pc) {
        case 0x2a9758u: goto label_2a9758;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a97a0u: goto label_2a97a0;
        default: break;
    }

    ctx->pc = 0x2a96f8u;

    // 0x2a96f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a96f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a96fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a9700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a970c: 0x2451cde0  addiu       $s1, $v0, -0x3220
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x2a9710: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x2a9710u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a9714: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x2a9714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a9718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a971c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2a971cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9720: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2a9720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9724: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BCDF8u));
    // 0x2a9728: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a972c: 0xc6140050  lwc1        $f20, 0x50($s0)
    ctx->pc = 0x2a972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9730: 0xc6150054  lwc1        $f21, 0x54($s0)
    ctx->pc = 0x2a9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9734: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a9734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a9738: 0x4600a587  neg.s       $f22, $f20
    ctx->pc = 0x2a9738u;
    ctx->f[22] = FPU_NEG_S(ctx->f[20]);
    // 0x2a973c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A973Cu;
    {
        const bool branch_taken_0x2a973c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A973Cu;
        // 0x2a9740: 0x4600adc7  neg.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a973c) {
            ctx->pc = 0x2A9758u;
            goto label_2a9758;
        }
    }
    ctx->pc = 0x2A9744u;
    // 0x2a9744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9748: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a974c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a974cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9750: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9750u;
    SET_GPR_U32(ctx, 31, 0x2A9758u);
    ctx->pc = 0x2A9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9750u;
    // 0x2a9754: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9750u, 0x2A9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9758u;
label_2a9758:
    // 0x2a9758: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2a9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2a975c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2a975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a9760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a9764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9764u;
    {
        const bool branch_taken_0x2a9764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9764) {
            ctx->pc = 0x2A9780u;
            goto label_2a9780;
        }
    }
    ctx->pc = 0x2A976Cu;
    // 0x2a976c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9770: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9774: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a9774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9778: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9778u;
    SET_GPR_U32(ctx, 31, 0x2A9780u);
    ctx->pc = 0x2A977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9778u;
    // 0x2a977c: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9778u, 0x2A9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9780u;
label_2a9780:
    // 0x2a9780: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a9780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a9784: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2a9784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2a9788: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2a9788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2a978c: 0xc7919080  lwc1        $f17, -0x6F80($gp)
    ctx->pc = 0x2a978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a9790: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2a9790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9794: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2a9794u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x2a9798: 0xc08c638  jal         func_2318E0
    ctx->pc = 0x2A9798u;
    SET_GPR_U32(ctx, 31, 0x2A97A0u);
    ctx->pc = 0x2A979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9798u;
    // 0x2a979c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2318E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318E0u, 0x2A9798u, 0x2A97A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97A0u;
label_2a97a0:
    // 0x2a97a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a97a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a97a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a97a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a97a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a97a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a97ac: 0xc7b70030  lwc1        $f23, 0x30($sp)
    ctx->pc = 0x2a97acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a97b0: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x2a97b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a97b4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2a97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a97b8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2a97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a97bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A97BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97BCu;
        // 0x2a97c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A97BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A97C4u;
    // 0x2a97c4: 0x0  nop
    ctx->pc = 0x2a97c4u;
    // NOP
    // 0x2a97c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A97C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A97C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A97D0u;
}
