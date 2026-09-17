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

// Function: sub_002BE5E8
// Address: 0x2be5e8 - 0x2be678
void sub_002BE5E8_0x2be5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE5E8_0x2be5e8");
#endif

    switch (ctx->pc) {
        case 0x2be664u: goto label_2be664;
        default: break;
    }

    ctx->pc = 0x2be5e8u;

    // 0x2be5e8: 0x8f82bae8  lw          $v0, -0x4518($gp)
    ctx->pc = 0x2be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949608)));
    // 0x2be5ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be5f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2be5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5f8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BE5F8u;
    {
        const bool branch_taken_0x2be5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5F8u;
        // 0x2be5fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5f8) {
            ctx->pc = 0x2BE668u;
            goto label_2be668;
        }
    }
    ctx->pc = 0x2BE600u;
    // 0x2be600: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2be600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be604: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2be604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be608: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2be608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be60c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2be60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be610: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2be610u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2be614: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2be614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be618: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2be618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2be61c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2be61cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2be620: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2be624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be628: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2be628u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2be62c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be630: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2be630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2be634: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2be634u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2be638: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2be638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2be63c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be640: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2be640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2be644: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2be644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2be648: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2be648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2be64c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2be64cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2be650: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2be650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be654: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2be654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be658: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2be658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2be65c: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2BE65Cu;
    SET_GPR_U32(ctx, 31, 0x2BE664u);
    ctx->pc = 0x2BE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE65Cu;
    // 0x2be660: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2BE65Cu, 0x2BE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE664u;
label_2be664:
    // 0x2be664: 0xe780cb00  swc1        $f0, -0x3500($gp)
    ctx->pc = 0x2be664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953728), bits); }
label_2be668:
    // 0x2be668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE66Cu;
        // 0x2be670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE674u;
    // 0x2be674: 0x0  nop
    ctx->pc = 0x2be674u;
    // NOP
    ctx->pc = 0x2be678u;
}
