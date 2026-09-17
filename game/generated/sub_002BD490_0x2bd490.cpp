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

// Function: sub_002BD490
// Address: 0x2bd490 - 0x2bd528
void sub_002BD490_0x2bd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD490_0x2bd490");
#endif

    switch (ctx->pc) {
        case 0x2bd4ccu: goto label_2bd4cc;
        case 0x2bd4f0u: goto label_2bd4f0;
        default: break;
    }

    ctx->pc = 0x2bd490u;

    // 0x2bd490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd494: 0x2782cae8  addiu       $v0, $gp, -0x3518
    ctx->pc = 0x2bd494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953704));
    // 0x2bd498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bd498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd49c: 0x2790caf0  addiu       $s0, $gp, -0x3510
    ctx->pc = 0x2bd49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953712));
    // 0x2bd4a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bd4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bd4a4: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2bd4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2bd4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd4ac: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x2bd4acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bd4b0: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2bd4b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bd4b4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2bd4b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bd4b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2bd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2bd4bc: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x2bd4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x2bd4c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2bd4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2bd4c4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2BD4C4u;
    SET_GPR_U32(ctx, 31, 0x2BD4CCu);
    ctx->pc = 0x2BD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4C4u;
    // 0x2bd4c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2BD4C4u, 0x2BD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4CCu;
label_2bd4cc:
    // 0x2bd4cc: 0xc794921c  lwc1        $f20, -0x6DE4($gp)
    ctx->pc = 0x2bd4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd4d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd4d8: 0xc7959220  lwc1        $f21, -0x6DE0($gp)
    ctx->pc = 0x2bd4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd4dc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2bd4dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2bd4e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bd4e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2bd4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2bd4e8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2BD4E8u;
    SET_GPR_U32(ctx, 31, 0x2BD4F0u);
    ctx->pc = 0x2BD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4E8u;
    // 0x2bd4ec: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2BD4E8u, 0x2BD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4F0u;
label_2bd4f0:
    // 0x2bd4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd4f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bd4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd500: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2bd500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2bd504: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x2bd504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bd508: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bd50c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2bd50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd510: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2bd510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2bd514: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2bd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd518: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2bd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2bd51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bd51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bd520: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD520u;
        // 0x2bd524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD528u;
}
