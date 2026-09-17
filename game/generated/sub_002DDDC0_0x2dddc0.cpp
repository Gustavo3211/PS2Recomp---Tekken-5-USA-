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

// Function: sub_002DDDC0
// Address: 0x2dddc0 - 0x2dde30
void sub_002DDDC0_0x2dddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDDC0_0x2dddc0");
#endif

    switch (ctx->pc) {
        case 0x2dddd4u: goto label_2dddd4;
        case 0x2ddddcu: goto label_2ddddc;
        default: break;
    }

    ctx->pc = 0x2dddc0u;

    // 0x2dddc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dddc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dddc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dddcc: 0xc0c6894  jal         func_31A250
    ctx->pc = 0x2DDDCCu;
    SET_GPR_U32(ctx, 31, 0x2DDDD4u);
    ctx->pc = 0x31A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A250u, 0x2DDDCCu, 0x2DDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDD4u;
label_2dddd4:
    // 0x2dddd4: 0xc0cc54e  jal         func_331538
    ctx->pc = 0x2DDDD4u;
    SET_GPR_U32(ctx, 31, 0x2DDDDCu);
    ctx->pc = 0x2DDDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDD4u;
    // 0x2dddd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331538u, 0x2DDDD4u, 0x2DDDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDDCu;
label_2ddddc:
    // 0x2ddddc: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x2ddddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ddde0: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ddde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ddde4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDDE4u;
    {
        const bool branch_taken_0x2ddde4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2DDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDE4u;
        // 0x2ddde8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddde4) {
            ctx->pc = 0x2DDDF8u;
            goto label_2dddf8;
        }
    }
    ctx->pc = 0x2DDDECu;
    // 0x2dddec: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2dddecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dddf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDDF0u;
    {
        const bool branch_taken_0x2dddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDF0u;
        // 0x2dddf4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddf0) {
            ctx->pc = 0x2DDE04u;
            goto label_2dde04;
        }
    }
    ctx->pc = 0x2DDDF8u;
label_2dddf8:
    // 0x2dddf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dddf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dddfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dddfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dde00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2dde00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2dde04:
    // 0x2dde04: 0x0  nop
    ctx->pc = 0x2dde04u;
    // NOP
    // 0x2dde08: 0x0  nop
    ctx->pc = 0x2dde08u;
    // NOP
    // 0x2dde0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2dde0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2dde10: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2dde10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2dde14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dde14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dde18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dde18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dde1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dde20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dde20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dde24: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE24u;
        // 0x2dde28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE2Cu;
    // 0x2dde2c: 0x0  nop
    ctx->pc = 0x2dde2cu;
    // NOP
    ctx->pc = 0x2dde30u;
}
