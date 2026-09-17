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

// Function: sub_00230628
// Address: 0x230628 - 0x230670
void sub_00230628_0x230628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230628_0x230628");
#endif

    switch (ctx->pc) {
        case 0x230638u: goto label_230638;
        default: break;
    }

    ctx->pc = 0x230628u;

    // 0x230628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23062c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230630: 0xc08c5d4  jal         func_231750
    ctx->pc = 0x230630u;
    SET_GPR_U32(ctx, 31, 0x230638u);
    ctx->pc = 0x231750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231750u, 0x230630u, 0x230638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230638u;
label_230638:
    // 0x230638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23063c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230640: 0xc78184e4  lwc1        $f1, -0x7B1C($gp)
    ctx->pc = 0x230640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230644: 0x2442cf90  addiu       $v0, $v0, -0x3070
    ctx->pc = 0x230644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x230648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23064c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23064cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230650: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x230650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x230654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230658: 0xe441018c  swc1        $f1, 0x18C($v0)
    ctx->pc = 0x230658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D11Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D11Cu, _value); } while (0); }
    // 0x23065c: 0xe4400190  swc1        $f0, 0x190($v0)
    ctx->pc = 0x23065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D120u, _value); } while (0); }
    // 0x230660: 0xac83d310  sw          $v1, -0x2CF0($a0)
    ctx->pc = 0x230660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x15D310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D310u, _value); } while (0);
    // 0x230664: 0x3e00008  jr          $ra
    ctx->pc = 0x230664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230664u;
        // 0x230668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23066Cu;
    // 0x23066c: 0x0  nop
    ctx->pc = 0x23066cu;
    // NOP
    ctx->pc = 0x230670u;
}
