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

// Function: sub_002FC3D8
// Address: 0x2fc3d8 - 0x2fc4e0
void sub_002FC3D8_0x2fc3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC3D8_0x2fc3d8");
#endif

    switch (ctx->pc) {
        case 0x2fc400u: goto label_2fc400;
        case 0x2fc410u: goto label_2fc410;
        case 0x2fc460u: goto label_2fc460;
        case 0x2fc470u: goto label_2fc470;
        case 0x2fc4b8u: goto label_2fc4b8;
        default: break;
    }

    ctx->pc = 0x2fc3d8u;

    // 0x2fc3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc3dc: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x2fc3dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc3e0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC3E0u;
    {
        const bool branch_taken_0x2fc3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3E0u;
        // 0x2fc3e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3e0) {
            ctx->pc = 0x2FC410u;
            goto label_2fc410;
        }
    }
    ctx->pc = 0x2FC3E8u;
    // 0x2fc3e8: 0xc780952c  lwc1        $f0, -0x6AD4($gp)
    ctx->pc = 0x2fc3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc3ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fc3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc3f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC3F0u;
    {
        const bool branch_taken_0x2fc3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc3f0) {
            ctx->pc = 0x2FC408u;
            goto label_2fc408;
        }
    }
    ctx->pc = 0x2FC3F8u;
    // 0x2fc3f8: 0xc0c8e56  jal         func_323958
    ctx->pc = 0x2FC3F8u;
    SET_GPR_U32(ctx, 31, 0x2FC400u);
    ctx->pc = 0x2FC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3F8u;
    // 0x2fc3fc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323958u, 0x2FC3F8u, 0x2FC400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC400u;
label_2fc400:
    // 0x2fc400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC400u;
    {
        const bool branch_taken_0x2fc400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC400u;
        // 0x2fc404: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc400) {
            ctx->pc = 0x2FC414u;
            goto label_2fc414;
        }
    }
    ctx->pc = 0x2FC408u;
label_2fc408:
    // 0x2fc408: 0xc0c8e88  jal         func_323A20
    ctx->pc = 0x2FC408u;
    SET_GPR_U32(ctx, 31, 0x2FC410u);
    ctx->pc = 0x2FC40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC408u;
    // 0x2fc40c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A20u, 0x2FC408u, 0x2FC410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC410u;
label_2fc410:
    // 0x2fc410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc414:
    // 0x2fc414: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC414u;
        // 0x2fc418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC41Cu;
    // 0x2fc41c: 0x0  nop
    ctx->pc = 0x2fc41cu;
    // NOP
    // 0x2fc420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fc428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fc428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc42c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fc42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fc430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc43c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2fc43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2fc440: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FC440u;
    {
        const bool branch_taken_0x2fc440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC440u;
        // 0x2fc444: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc440) {
            ctx->pc = 0x2FC480u;
            goto label_2fc480;
        }
    }
    ctx->pc = 0x2FC448u;
    // 0x2fc448: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x2fc448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2fc44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc450: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC450u;
    {
        const bool branch_taken_0x2fc450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC450u;
        // 0x2fc454: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc450) {
            ctx->pc = 0x2FC480u;
            goto label_2fc480;
        }
    }
    ctx->pc = 0x2FC458u;
    // 0x2fc458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc45c: 0x0  nop
    ctx->pc = 0x2fc45cu;
    // NOP
label_2fc460:
    // 0x2fc460: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2fc460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2fc464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fc464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc468: 0xc0bec06  jal         func_2FB018
    ctx->pc = 0x2FC468u;
    SET_GPR_U32(ctx, 31, 0x2FC470u);
    ctx->pc = 0x2FC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC468u;
    // 0x2fc46c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB018u, 0x2FC468u, 0x2FC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC470u;
label_2fc470:
    // 0x2fc470: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x2fc470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2fc474: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fc474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fc478: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FC478u;
    {
        const bool branch_taken_0x2fc478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC478u;
        // 0x2fc47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc478) {
            ctx->pc = 0x2FC460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc460;
        }
    }
    ctx->pc = 0x2FC480u;
label_2fc480:
    // 0x2fc480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fc488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc48c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fc48cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fc490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc494: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC494u;
        // 0x2fc498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC49Cu;
    // 0x2fc49c: 0x0  nop
    ctx->pc = 0x2fc49cu;
    // NOP
    // 0x2fc4a0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2fc4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fc4a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC4A4u;
    {
        const bool branch_taken_0x2fc4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc4a4) {
            ctx->pc = 0x2FC4D4u;
            goto label_2fc4d4;
        }
    }
    ctx->pc = 0x2FC4ACu;
    // 0x2fc4ac: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x2fc4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fc4b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC4B0u;
    {
        const bool branch_taken_0x2fc4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4B0u;
        // 0x2fc4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4b0) {
            ctx->pc = 0x2FC4D4u;
            goto label_2fc4d4;
        }
    }
    ctx->pc = 0x2FC4B8u;
label_2fc4b8:
    // 0x2fc4b8: 0xe46c0030  swc1        $f12, 0x30($v1)
    ctx->pc = 0x2fc4b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2fc4bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fc4c0: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x2fc4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fc4c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2fc4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fc4c8: 0x0  nop
    ctx->pc = 0x2fc4c8u;
    // NOP
    // 0x2fc4cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FC4CCu;
    {
        const bool branch_taken_0x2fc4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4CCu;
        // 0x2fc4d0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4cc) {
            ctx->pc = 0x2FC4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc4b8;
        }
    }
    ctx->pc = 0x2FC4D4u;
label_2fc4d4:
    // 0x2fc4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC4DCu;
    // 0x2fc4dc: 0x0  nop
    ctx->pc = 0x2fc4dcu;
    // NOP
    ctx->pc = 0x2fc4e0u;
}
