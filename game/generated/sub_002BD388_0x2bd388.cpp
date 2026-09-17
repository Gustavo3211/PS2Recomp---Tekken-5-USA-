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

// Function: sub_002BD388
// Address: 0x2bd388 - 0x2bd490
void sub_002BD388_0x2bd388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD388_0x2bd388");
#endif

    switch (ctx->pc) {
        case 0x2bd3b4u: goto label_2bd3b4;
        case 0x2bd458u: goto label_2bd458;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd478u: goto label_2bd478;
        default: break;
    }

    ctx->pc = 0x2bd388u;

    // 0x2bd388: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bd388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bd38c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2bd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2bd390: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bd390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bd394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd398: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2bd398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2bd39c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bd3a0: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x2bd3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2bd3a4: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2BD3A4u;
    {
        const bool branch_taken_0x2bd3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bd3a4) {
            ctx->pc = 0x2BD3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD3A4u;
            // 0x2bd3a8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD47Cu;
            goto label_2bd47c;
        }
    }
    ctx->pc = 0x2BD3ACu;
    // 0x2bd3ac: 0xc08215c  jal         func_208570
    ctx->pc = 0x2BD3ACu;
    SET_GPR_U32(ctx, 31, 0x2BD3B4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2BD3ACu, 0x2BD3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3B4u;
label_2bd3b4:
    // 0x2bd3b4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2bd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bd3b8: 0x54430030  bnel        $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BD3B8u;
    {
        const bool branch_taken_0x2bd3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bd3b8) {
            ctx->pc = 0x2BD3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD3B8u;
            // 0x2bd3bc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD47Cu;
            goto label_2bd47c;
        }
    }
    ctx->pc = 0x2BD3C0u;
    // 0x2bd3c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2bd3c4: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2bd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x2bd3c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD3C8u;
    {
        const bool branch_taken_0x2bd3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3C8u;
        // 0x2bd3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3c8) {
            ctx->pc = 0x2BD3E0u;
            goto label_2bd3e0;
        }
    }
    ctx->pc = 0x2BD3D0u;
    // 0x2bd3d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bd3d4: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2bd3d8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2bd3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bd3dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2bd3dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2bd3e0:
    // 0x2bd3e0: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BD3E0u;
    {
        const bool branch_taken_0x2bd3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3e0) {
            ctx->pc = 0x2BD3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD3E0u;
            // 0x2bd3e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD47Cu;
            goto label_2bd47c;
        }
    }
    ctx->pc = 0x2BD3E8u;
    // 0x2bd3e8: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x2bd3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2bd3ec: 0x8e030894  lw          $v1, 0x894($s0)
    ctx->pc = 0x2bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x2bd3f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd3f4: 0xc782920c  lwc1        $f2, -0x6DF4($gp)
    ctx->pc = 0x2bd3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd3f8: 0x2790cae8  addiu       $s0, $gp, -0x3518
    ctx->pc = 0x2bd3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953704));
    // 0x2bd3fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bd3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bd400: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2bd404: 0xc421caf0  lwc1        $f1, -0x3510($at)
    ctx->pc = 0x2bd404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd408: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd40c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2bd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bd410: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2bd410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd414: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x2bd414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2bd418: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2bd418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd41c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD41Cu;
    {
        const bool branch_taken_0x2bd41c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD41Cu;
        // 0x2bd420: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd41c) {
            ctx->pc = 0x2BD430u;
            goto label_2bd430;
        }
    }
    ctx->pc = 0x2BD424u;
    // 0x2bd424: 0xc7809210  lwc1        $f0, -0x6DF0($gp)
    ctx->pc = 0x2bd424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bd428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd42c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2bd430:
    // 0x2bd430: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2bd430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd434: 0xc7809214  lwc1        $f0, -0x6DEC($gp)
    ctx->pc = 0x2bd434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd43c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD43Cu;
    {
        const bool branch_taken_0x2bd43c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd43c) {
            ctx->pc = 0x2BD450u;
            goto label_2bd450;
        }
    }
    ctx->pc = 0x2BD444u;
    // 0x2bd444: 0xc7809218  lwc1        $f0, -0x6DE8($gp)
    ctx->pc = 0x2bd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd44c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2bd450:
    // 0x2bd450: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BD450u;
    SET_GPR_U32(ctx, 31, 0x2BD458u);
    ctx->pc = 0x2BD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD450u;
    // 0x2bd454: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BD450u, 0x2BD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD458u;
label_2bd458:
    // 0x2bd458: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2bd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bd45c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd460: 0xc084a46  jal         func_212918
    ctx->pc = 0x2BD460u;
    SET_GPR_U32(ctx, 31, 0x2BD468u);
    ctx->pc = 0x2BD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD460u;
    // 0x2bd464: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x2BD460u, 0x2BD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD468u;
label_2bd468:
    // 0x2bd468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd46c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd470: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2BD470u;
    SET_GPR_U32(ctx, 31, 0x2BD478u);
    ctx->pc = 0x2BD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD470u;
    // 0x2bd474: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2BD470u, 0x2BD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD478u;
label_2bd478:
    // 0x2bd478: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bd478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bd47c:
    // 0x2bd47c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2bd47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bd480: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bd480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd484: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD484u;
        // 0x2bd488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD48Cu;
    // 0x2bd48c: 0x0  nop
    ctx->pc = 0x2bd48cu;
    // NOP
    ctx->pc = 0x2bd490u;
}
