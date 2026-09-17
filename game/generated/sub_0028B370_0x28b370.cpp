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

// Function: sub_0028B370
// Address: 0x28b370 - 0x28b430
void sub_0028B370_0x28b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B370_0x28b370");
#endif

    switch (ctx->pc) {
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b408u: goto label_28b408;
        case 0x28b418u: goto label_28b418;
        default: break;
    }

    ctx->pc = 0x28b370u;

    // 0x28b370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b374: 0x24840158  addiu       $a0, $a0, 0x158
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x28b378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b37c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28b380: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x28b380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28b384: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b388: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B388u;
    {
        const bool branch_taken_0x28b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B388u;
        // 0x28b38c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b388) {
            ctx->pc = 0x28B3A0u;
            goto label_28b3a0;
        }
    }
    ctx->pc = 0x28B390u;
    // 0x28b390: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b394: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b398: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B398u;
    {
        const bool branch_taken_0x28b398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B398u;
        // 0x28b39c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b398) {
            ctx->pc = 0x28B3B0u;
            goto label_28b3b0;
        }
    }
    ctx->pc = 0x28B3A0u;
label_28b3a0:
    // 0x28b3a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28b3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b3a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28b3ac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_28b3b0:
    // 0x28b3b0: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x28b3b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28b3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28b3b8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28B3B8u;
    {
        const bool branch_taken_0x28b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B8u;
        // 0x28b3bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b8) {
            ctx->pc = 0x28B41Cu;
            goto label_28b41c;
        }
    }
    ctx->pc = 0x28B3C0u;
    // 0x28b3c0: 0x8cb000a8  lw          $s0, 0xA8($a1)
    ctx->pc = 0x28b3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x28b3c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28b3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28b3cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28b3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28b3d0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x28b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x28b3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b3d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b3d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28b3dc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28b3e0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28B3E0u;
    SET_GPR_U32(ctx, 31, 0x28B3E8u);
    ctx->pc = 0x28B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3E0u;
    // 0x28b3e4: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28B3E0u, 0x28B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3E8u;
label_28b3e8:
    // 0x28b3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b3ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x28b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28b3f0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28B3F0u;
    SET_GPR_U32(ctx, 31, 0x28B3F8u);
    ctx->pc = 0x28B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3F0u;
    // 0x28b3f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28B3F0u, 0x28B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3F8u;
label_28b3f8:
    // 0x28b3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b3fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b400: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28B400u;
    SET_GPR_U32(ctx, 31, 0x28B408u);
    ctx->pc = 0x28B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B400u;
    // 0x28b404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28B400u, 0x28B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B408u;
label_28b408:
    // 0x28b408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b40c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28b410: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28B410u;
    SET_GPR_U32(ctx, 31, 0x28B418u);
    ctx->pc = 0x28B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B410u;
    // 0x28b414: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28B410u, 0x28B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B418u;
label_28b418:
    // 0x28b418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28b41c:
    // 0x28b41c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28b41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b420: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x28b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28b424: 0x3e00008  jr          $ra
    ctx->pc = 0x28B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B424u;
        // 0x28b428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B42Cu;
    // 0x28b42c: 0x0  nop
    ctx->pc = 0x28b42cu;
    // NOP
    ctx->pc = 0x28b430u;
}
