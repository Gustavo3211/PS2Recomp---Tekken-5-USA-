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

// Function: sub_0020CB10
// Address: 0x20cb10 - 0x20cb58
void sub_0020CB10_0x20cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB10_0x20cb10");
#endif

    switch (ctx->pc) {
        case 0x20cb28u: goto label_20cb28;
        default: break;
    }

    ctx->pc = 0x20cb10u;

    // 0x20cb10: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x20cb14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cb18: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x20cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x20cb1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb20: 0xe4800510  swc1        $f0, 0x510($a0)
    ctx->pc = 0x20cb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1296), bits); }
    // 0x20cb24: 0x0  nop
    ctx->pc = 0x20cb24u;
    // NOP
label_20cb28:
    // 0x20cb28: 0xc4810750  lwc1        $f1, 0x750($a0)
    ctx->pc = 0x20cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cb2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20cb30: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x20cb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20cb34: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x20cb34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20cb38: 0xc4800754  lwc1        $f0, 0x754($a0)
    ctx->pc = 0x20cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb3c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x20cb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x20cb40: 0xc4810758  lwc1        $f1, 0x758($a0)
    ctx->pc = 0x20cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cb44: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x20cb44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20cb48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20CB48u;
    {
        const bool branch_taken_0x20cb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB48u;
        // 0x20cb4c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb48) {
            ctx->pc = 0x20CB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cb28;
        }
    }
    ctx->pc = 0x20CB50u;
    // 0x20cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB50u;
        // 0x20cb54: 0xaf80c8d8  sw          $zero, -0x3728($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CB58u;
}
