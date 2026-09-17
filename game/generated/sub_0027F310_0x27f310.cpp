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

// Function: sub_0027F310
// Address: 0x27f310 - 0x27f3d8
void sub_0027F310_0x27f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F310_0x27f310");
#endif

    switch (ctx->pc) {
        case 0x27f350u: goto label_27f350;
        case 0x27f360u: goto label_27f360;
        case 0x27f370u: goto label_27f370;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f3acu: goto label_27f3ac;
        case 0x27f3b8u: goto label_27f3b8;
        default: break;
    }

    ctx->pc = 0x27f310u;

    // 0x27f310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f314: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x27f318: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x27f318u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f31c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x27f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x27f320: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x27f320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f324: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x27f324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x27f328: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27f328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27f32c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x27f32cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27f330: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27f330u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27f334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f33c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x27f33cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x27f340: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x27f340u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27f344: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x27f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x27f348: 0xc096eca  jal         func_25BB28
    ctx->pc = 0x27F348u;
    SET_GPR_U32(ctx, 31, 0x27F350u);
    ctx->pc = 0x27F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F348u;
    // 0x27f34c: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB28u, 0x27F348u, 0x27F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F350u;
label_27f350:
    // 0x27f350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f354: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f354u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27f358: 0xc084a46  jal         func_212918
    ctx->pc = 0x27F358u;
    SET_GPR_U32(ctx, 31, 0x27F360u);
    ctx->pc = 0x27F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F358u;
    // 0x27f35c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x27F358u, 0x27F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F360u;
label_27f360:
    // 0x27f360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f368: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F368u;
    SET_GPR_U32(ctx, 31, 0x27F370u);
    ctx->pc = 0x27F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F368u;
    // 0x27f36c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F368u, 0x27F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F370u;
label_27f370:
    // 0x27f370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f374: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27f374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f378: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27f37c: 0x242139d0  addiu       $at, $at, 0x39D0
    ctx->pc = 0x27f37cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14800));
    // 0x27f380: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x27f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x27f384: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F384u;
    SET_GPR_U32(ctx, 31, 0x27F38Cu);
    ctx->pc = 0x27F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F384u;
    // 0x27f388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F384u, 0x27F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F38Cu;
label_27f38c:
    // 0x27f38c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f394: 0xc78c8e50  lwc1        $f12, -0x71B0($gp)
    ctx->pc = 0x27f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f39c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27f3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a4: 0xc097110  jal         func_25C440
    ctx->pc = 0x27F3A4u;
    SET_GPR_U32(ctx, 31, 0x27F3ACu);
    ctx->pc = 0x27F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3A4u;
    // 0x27f3a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x27F3A4u, 0x27F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3ACu;
label_27f3ac:
    // 0x27f3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b0: 0xc097084  jal         func_25C210
    ctx->pc = 0x27F3B0u;
    SET_GPR_U32(ctx, 31, 0x27F3B8u);
    ctx->pc = 0x27F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3B0u;
    // 0x27f3b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x27F3B0u, 0x27F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3B8u;
label_27f3b8:
    // 0x27f3b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x27f3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f3bc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x27f3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27f3c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27f3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f3c4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x27f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27f3c8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3CCu;
        // 0x27f3d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F3D4u;
    // 0x27f3d4: 0x0  nop
    ctx->pc = 0x27f3d4u;
    // NOP
    ctx->pc = 0x27f3d8u;
}
