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

// Function: sub_0031A710
// Address: 0x31a710 - 0x31a818
void sub_0031A710_0x31a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A710_0x31a710");
#endif

    switch (ctx->pc) {
        case 0x31a7dcu: goto label_31a7dc;
        case 0x31a7f4u: goto label_31a7f4;
        default: break;
    }

    ctx->pc = 0x31a710u;

    // 0x31a710: 0x461088c1  sub.s       $f3, $f17, $f16
    ctx->pc = 0x31a710u;
    ctx->f[3] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x31a714: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31a714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31a718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31a71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a720: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a724: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x31a724u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a728: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x31a728u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x31a72c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x31a72cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31a730: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x31a730u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x31a734: 0x4600b982  mul.s       $f6, $f23, $f0
    ctx->pc = 0x31a734u;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x31a738: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x31a738u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a73c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x31a73cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31a740: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x31a740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31a744: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x31a744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x31a748: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x31a748u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x31a74c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x31a74cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x31a750: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x31a750u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x31a754: 0x46163100  add.s       $f4, $f6, $f22
    ctx->pc = 0x31a754u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[22]);
    // 0x31a758: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x31a75c: 0x46101940  add.s       $f5, $f3, $f16
    ctx->pc = 0x31a75cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[16]);
    // 0x31a760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a764: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x31a764u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x31a768: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x31a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x31a76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31a76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31a770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31a774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a778: 0xe6100010  swc1        $f16, 0x10($s0)
    ctx->pc = 0x31a778u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x31a77c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a780: 0xe6110014  swc1        $f17, 0x14($s0)
    ctx->pc = 0x31a780u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x31a784: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x31a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x31a788: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x31a788u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x31a78c: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x31a78cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x31a790: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x31a790u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x31a794: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x31a794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x31a798: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x31a798u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31a79c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x31a79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31a7a0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x31a7a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31a7a4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x31a7a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31a7a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31a7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31a7ac: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x31a7acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31a7b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x31a7b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x31a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31a7b8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x31a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x31a7bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x31a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x31a7c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x31a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x31a7c4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x31a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x31a7c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x31a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x31a7cc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x31a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x31a7d0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x31a7d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31a7d4: 0xc0ce54c  jal         func_339530
    ctx->pc = 0x31A7D4u;
    SET_GPR_U32(ctx, 31, 0x31A7DCu);
    ctx->pc = 0x31A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7D4u;
    // 0x31a7d8: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339530u, 0x31A7D4u, 0x31A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7DCu;
label_31a7dc:
    // 0x31a7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x31a7e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x31a7e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x31a7e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x31a7e8: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x31a7e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x31a7ec: 0xc0c6a20  jal         func_31A880
    ctx->pc = 0x31A7ECu;
    SET_GPR_U32(ctx, 31, 0x31A7F4u);
    ctx->pc = 0x31A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7ECu;
    // 0x31a7f0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A880u, 0x31A7ECu, 0x31A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7F4u;
label_31a7f4:
    // 0x31a7f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31a7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a7f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x31a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31a7fc: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x31a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x31a800: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x31a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31a804: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x31a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31a808: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x31a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a80c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A80Cu;
        // 0x31a810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A814u;
    // 0x31a814: 0x0  nop
    ctx->pc = 0x31a814u;
    // NOP
    ctx->pc = 0x31a818u;
}
