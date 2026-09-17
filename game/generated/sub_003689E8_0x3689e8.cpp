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

// Function: sub_003689E8
// Address: 0x3689e8 - 0x368a58
void sub_003689E8_0x3689e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003689E8_0x3689e8");
#endif

    ctx->pc = 0x3689e8u;

    // 0x3689e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3689e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3689ec: 0x24456428  addiu       $a1, $v0, 0x6428
    ctx->pc = 0x3689ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25640));
    // 0x3689f0: 0x8c426428  lw          $v0, 0x6428($v0)
    ctx->pc = 0x3689f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D6428u));
    // 0x3689f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3689f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3689f8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x3689f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3689fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3689FCu;
    {
        const bool branch_taken_0x3689fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x368A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689FCu;
        // 0x368a00: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3689fc) {
            ctx->pc = 0x368A18u;
            goto label_368a18;
        }
    }
    ctx->pc = 0x368A04u;
    // 0x368a04: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x368a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x368a08: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x368a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x368a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x368A0Cu;
    {
        const bool branch_taken_0x368a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368a0c) {
            ctx->pc = 0x368A24u;
            goto label_368a24;
        }
    }
    ctx->pc = 0x368A14u;
    // 0x368a14: 0x0  nop
    ctx->pc = 0x368a14u;
    // NOP
label_368a18:
    // 0x368a18: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x368a18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x368a1c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x368a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x368a20: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x368a20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_368a24:
    // 0x368a24: 0xc78196bc  lwc1        $f1, -0x6944($gp)
    ctx->pc = 0x368a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368a28: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x368a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368a2c: 0x3c0143aa  lui         $at, 0x43AA
    ctx->pc = 0x368a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17322 << 16));
    // 0x368a30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x368a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x368a34: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x368a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x368a38: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x368a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x368a3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x368a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x368a40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368a44: 0x0  nop
    ctx->pc = 0x368a44u;
    // NOP
    // 0x368a48: 0x0  nop
    ctx->pc = 0x368a48u;
    // NOP
    // 0x368a4c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x368a4cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x368a50: 0x3e00008  jr          $ra
    ctx->pc = 0x368A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368A58u;
}
