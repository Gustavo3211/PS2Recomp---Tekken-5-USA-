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

// Function: sub_0024DC00
// Address: 0x24dc00 - 0x24dc40
void sub_0024DC00_0x24dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DC00_0x24dc00");
#endif

    switch (ctx->pc) {
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc34u: goto label_24dc34;
        default: break;
    }

    ctx->pc = 0x24dc00u;

    // 0x24dc00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24dc04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24dc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24dc08: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x24dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x24dc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24dc10: 0xac400278  sw          $zero, 0x278($v0)
    ctx->pc = 0x24dc10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD88u, _value); } while (0);
    // 0x24dc14: 0xac400260  sw          $zero, 0x260($v0)
    ctx->pc = 0x24dc14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD70u, _value); } while (0);
    // 0x24dc18: 0xac400264  sw          $zero, 0x264($v0)
    ctx->pc = 0x24dc18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD74u, _value); } while (0);
    // 0x24dc1c: 0xac40026c  sw          $zero, 0x26C($v0)
    ctx->pc = 0x24dc1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD7Cu, _value); } while (0);
    // 0x24dc20: 0xac400270  sw          $zero, 0x270($v0)
    ctx->pc = 0x24dc20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD80u, _value); } while (0);
    // 0x24dc24: 0xc08be34  jal         func_22F8D0
    ctx->pc = 0x24DC24u;
    SET_GPR_U32(ctx, 31, 0x24DC2Cu);
    ctx->pc = 0x24DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC24u;
    // 0x24dc28: 0xac400274  sw          $zero, 0x274($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D0u, 0x24DC24u, 0x24DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC2Cu;
label_24dc2c:
    // 0x24dc2c: 0xc0946e4  jal         func_251B90
    ctx->pc = 0x24DC2Cu;
    SET_GPR_U32(ctx, 31, 0x24DC34u);
    ctx->pc = 0x251B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251B90u, 0x24DC2Cu, 0x24DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC34u;
label_24dc34:
    // 0x24dc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dc38: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC38u;
        // 0x24dc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DC40u;
}
