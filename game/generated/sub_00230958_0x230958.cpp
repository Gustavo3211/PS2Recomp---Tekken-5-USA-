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

// Function: sub_00230958
// Address: 0x230958 - 0x230990
void sub_00230958_0x230958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230958_0x230958");
#endif

    ctx->pc = 0x230958u;

    // 0x230958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23095c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23095Cu;
    {
        const bool branch_taken_0x23095c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23095Cu;
        // 0x230960: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23095c) {
            ctx->pc = 0x230978u;
            goto label_230978;
        }
    }
    ctx->pc = 0x230964u;
    // 0x230964: 0xc78184ec  lwc1        $f1, -0x7B14($gp)
    ctx->pc = 0x230964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23096c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23096cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230970u;
    {
        const bool branch_taken_0x230970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230970u;
        // 0x230974: 0x2442cf90  addiu       $v0, $v0, -0x3070 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230970) {
            ctx->pc = 0x230984u;
            goto label_230984;
        }
    }
    ctx->pc = 0x230978u;
label_230978:
    // 0x230978: 0xc78184f0  lwc1        $f1, -0x7B10($gp)
    ctx->pc = 0x230978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23097c: 0xc78084f4  lwc1        $f0, -0x7B0C($gp)
    ctx->pc = 0x23097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230980: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x230980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
label_230984:
    // 0x230984: 0xe441018c  swc1        $f1, 0x18C($v0)
    ctx->pc = 0x230984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
    // 0x230988: 0x3e00008  jr          $ra
    ctx->pc = 0x230988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230988u;
        // 0x23098c: 0xe4400190  swc1        $f0, 0x190($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230990u;
}
