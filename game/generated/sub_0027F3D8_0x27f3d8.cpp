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

// Function: sub_0027F3D8
// Address: 0x27f3d8 - 0x27f4e8
void sub_0027F3D8_0x27f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3D8_0x27f3d8");
#endif

    switch (ctx->pc) {
        case 0x27f434u: goto label_27f434;
        case 0x27f450u: goto label_27f450;
        case 0x27f460u: goto label_27f460;
        case 0x27f470u: goto label_27f470;
        case 0x27f480u: goto label_27f480;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f49cu: goto label_27f49c;
        case 0x27f4bcu: goto label_27f4bc;
        case 0x27f4c8u: goto label_27f4c8;
        default: break;
    }

    ctx->pc = 0x27f3d8u;

    // 0x27f3d8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x27f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f3dc: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f3e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27f3e4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x27f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x27f3e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f3ec: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27f3f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27f3f4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x27f3f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27f3f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f3fc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x27f3fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27f400: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x27f400u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x27f404: 0xc78c8e54  lwc1        $f12, -0x71AC($gp)
    ctx->pc = 0x27f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f408: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x27f40c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27f40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f410: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x27f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x27f414: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x27f414u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x27f418: 0x263139d0  addiu       $s1, $s1, 0x39D0
    ctx->pc = 0x27f418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14800));
    // 0x27f41c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x27f41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f420: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F420u;
    {
        const bool branch_taken_0x27f420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F420u;
        // 0x27f424: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f420) {
            ctx->pc = 0x27F440u;
            goto label_27f440;
        }
    }
    ctx->pc = 0x27F428u;
    // 0x27f428: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f42c: 0xc084cc6  jal         func_213318
    ctx->pc = 0x27F42Cu;
    SET_GPR_U32(ctx, 31, 0x27F434u);
    ctx->pc = 0x27F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F42Cu;
    // 0x27f430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213318u, 0x27F42Cu, 0x27F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F434u;
label_27f434:
    // 0x27f434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F434u;
    {
        const bool branch_taken_0x27f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F434u;
        // 0x27f438: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f434) {
            ctx->pc = 0x27F454u;
            goto label_27f454;
        }
    }
    ctx->pc = 0x27F43Cu;
    // 0x27f43c: 0x0  nop
    ctx->pc = 0x27f43cu;
    // NOP
label_27f440:
    // 0x27f440: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x27f440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f444: 0xc78c8e58  lwc1        $f12, -0x71A8($gp)
    ctx->pc = 0x27f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f448: 0xc084cc6  jal         func_213318
    ctx->pc = 0x27F448u;
    SET_GPR_U32(ctx, 31, 0x27F450u);
    ctx->pc = 0x27F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F448u;
    // 0x27f44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213318u, 0x27F448u, 0x27F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F450u;
label_27f450:
    // 0x27f450: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27f454:
    // 0x27f454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f458: 0xc084a62  jal         func_212988
    ctx->pc = 0x27F458u;
    SET_GPR_U32(ctx, 31, 0x27F460u);
    ctx->pc = 0x27F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F458u;
    // 0x27f45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x27F458u, 0x27F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F460u;
label_27f460:
    // 0x27f460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f468: 0xc084a46  jal         func_212918
    ctx->pc = 0x27F468u;
    SET_GPR_U32(ctx, 31, 0x27F470u);
    ctx->pc = 0x27F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F468u;
    // 0x27f46c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x27F468u, 0x27F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F470u;
label_27f470:
    // 0x27f470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f474: 0xc78c8e5c  lwc1        $f12, -0x71A4($gp)
    ctx->pc = 0x27f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f478: 0xc084a62  jal         func_212988
    ctx->pc = 0x27F478u;
    SET_GPR_U32(ctx, 31, 0x27F480u);
    ctx->pc = 0x27F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F478u;
    // 0x27f47c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x27F478u, 0x27F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F480u;
label_27f480:
    // 0x27f480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f484: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F484u;
    SET_GPR_U32(ctx, 31, 0x27F48Cu);
    ctx->pc = 0x27F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F484u;
    // 0x27f488: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F484u, 0x27F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F48Cu;
label_27f48c:
    // 0x27f48c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f490: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x27f490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f494: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F494u;
    SET_GPR_U32(ctx, 31, 0x27F49Cu);
    ctx->pc = 0x27F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F494u;
    // 0x27f498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F494u, 0x27F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F49Cu;
label_27f49c:
    // 0x27f49c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x27f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f4a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f4a4: 0xc78c8e60  lwc1        $f12, -0x71A0($gp)
    ctx->pc = 0x27f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f4a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27f4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4b4: 0xc097110  jal         func_25C440
    ctx->pc = 0x27F4B4u;
    SET_GPR_U32(ctx, 31, 0x27F4BCu);
    ctx->pc = 0x27F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4B4u;
    // 0x27f4b8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x27F4B4u, 0x27F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4BCu;
label_27f4bc:
    // 0x27f4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4c0: 0xc097084  jal         func_25C210
    ctx->pc = 0x27F4C0u;
    SET_GPR_U32(ctx, 31, 0x27F4C8u);
    ctx->pc = 0x27F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4C0u;
    // 0x27f4c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x27F4C0u, 0x27F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4C8u;
label_27f4c8:
    // 0x27f4c8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x27f4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f4cc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x27f4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27f4d0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27f4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f4d4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x27f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27f4d8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x27f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f4dc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4E0u;
        // 0x27f4e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4E8u;
}
