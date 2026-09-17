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

// Function: sub_002225F8
// Address: 0x2225f8 - 0x222668
void sub_002225F8_0x2225f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225F8_0x2225f8");
#endif

    switch (ctx->pc) {
        case 0x222630u: goto label_222630;
        case 0x222648u: goto label_222648;
        case 0x222650u: goto label_222650;
        default: break;
    }

    ctx->pc = 0x2225f8u;

    // 0x2225f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2225fc: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x222600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x222600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222608: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x222608u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x22260c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x222610: 0x26105f90  addiu       $s0, $s0, 0x5F90
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24464));
    // 0x222614: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x222614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x222618: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22261c: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x222620: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x222620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x222624: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x222624u;
    { uint32_t bits = FAST_READ32(0x155F90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222628: 0xc08891a  jal         func_222468
    ctx->pc = 0x222628u;
    SET_GPR_U32(ctx, 31, 0x222630u);
    ctx->pc = 0x22262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222628u;
    // 0x22262c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222468u, 0x222628u, 0x222630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222630u;
label_222630:
    // 0x222630: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x222634: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x222634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x222638: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x222638u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x22263c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x222640: 0xc08891a  jal         func_222468
    ctx->pc = 0x222640u;
    SET_GPR_U32(ctx, 31, 0x222648u);
    ctx->pc = 0x222644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222640u;
    // 0x222644: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222468u, 0x222640u, 0x222648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222648u;
label_222648:
    // 0x222648: 0xc08c1ba  jal         func_2306E8
    ctx->pc = 0x222648u;
    SET_GPR_U32(ctx, 31, 0x222650u);
    ctx->pc = 0x22264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222648u;
    // 0x22264c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306E8u, 0x222648u, 0x222650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222650u;
label_222650:
    // 0x222650: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x222650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x222654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x222654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22265c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x22265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222660: 0x3e00008  jr          $ra
    ctx->pc = 0x222660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222660u;
        // 0x222664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222668u;
}
