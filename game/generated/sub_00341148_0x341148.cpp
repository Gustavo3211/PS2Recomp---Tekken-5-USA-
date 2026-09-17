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

// Function: sub_00341148
// Address: 0x341148 - 0x341188
void sub_00341148_0x341148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341148_0x341148");
#endif

    ctx->pc = 0x341148u;

    // 0x341148: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x341148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34114c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x34114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x341150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x341150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x341154: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x341154u;
    {
        const bool branch_taken_0x341154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341154) {
            ctx->pc = 0x34117Cu;
            goto label_34117c;
        }
    }
    ctx->pc = 0x34115Cu;
    // 0x34115c: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x34115cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x341160: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x341160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x341164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x341164u;
    {
        const bool branch_taken_0x341164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341164) {
            ctx->pc = 0x34117Cu;
            goto label_34117c;
        }
    }
    ctx->pc = 0x34116Cu;
    // 0x34116c: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x34116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341170: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x341170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341174: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x341174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x341178: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x341178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_34117c:
    // 0x34117c: 0x3e00008  jr          $ra
    ctx->pc = 0x34117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34117Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341184u;
    // 0x341184: 0x0  nop
    ctx->pc = 0x341184u;
    // NOP
    ctx->pc = 0x341188u;
}
