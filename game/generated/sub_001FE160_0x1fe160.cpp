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

// Function: sub_001FE160
// Address: 0x1fe160 - 0x1fe1c8
void sub_001FE160_0x1fe160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE160_0x1fe160");
#endif

    switch (ctx->pc) {
        case 0x1fe178u: goto label_1fe178;
        default: break;
    }

    ctx->pc = 0x1fe160u;

    // 0x1fe160: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fe160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fe164: 0x24890014  addiu       $t1, $a0, 0x14
    ctx->pc = 0x1fe164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1fe168: 0x8c47b584  lw          $a3, -0x4A7C($v0)
    ctx->pc = 0x1fe168u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3AB584u));
    // 0x1fe16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe170: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1fe174: 0x0  nop
    ctx->pc = 0x1fe174u;
    // NOP
label_1fe178:
    // 0x1fe178: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fe17c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1fe180: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fe184: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x1fe184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fe188: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fe188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe18c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fe18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fe190: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fe190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fe194: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fe194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fe198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe19c: 0x28c4000e  slti        $a0, $a2, 0xE
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1fe1a0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1fe1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fe1a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1fe1a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fe1a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fe1b0: 0xe4410380  swc1        $f1, 0x380($v0)
    ctx->pc = 0x1fe1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x1fe1b4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FE1B4u;
    {
        const bool branch_taken_0x1fe1b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1B4u;
        // 0x1fe1b8: 0xe4600370  swc1        $f0, 0x370($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1b4) {
            ctx->pc = 0x1FE178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe178;
        }
    }
    ctx->pc = 0x1FE1BCu;
    // 0x1fe1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1C4u;
    // 0x1fe1c4: 0x0  nop
    ctx->pc = 0x1fe1c4u;
    // NOP
    ctx->pc = 0x1fe1c8u;
}
