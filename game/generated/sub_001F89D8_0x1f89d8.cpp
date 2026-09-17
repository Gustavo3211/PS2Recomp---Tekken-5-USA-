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

// Function: sub_001F89D8
// Address: 0x1f89d8 - 0x1f8a18
void sub_001F89D8_0x1f89d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F89D8_0x1f89d8");
#endif

    switch (ctx->pc) {
        case 0x1f8a08u: goto label_1f8a08;
        default: break;
    }

    ctx->pc = 0x1f89d8u;

    // 0x1f89d8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f89dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f89e0: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f89e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f89e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f89e8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1f89e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555E0u, _value); } while (0);
    // 0x1f89ec: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1f89ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555E4u, _value); } while (0);
    // 0x1f89f0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f89f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555CCu, _value); } while (0);
    // 0x1f89f4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1f89f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D0u, _value); } while (0);
    // 0x1f89f8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1f89f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D4u, _value); } while (0);
    // 0x1f89fc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f89fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D8u, _value); } while (0);
    // 0x1f8a00: 0xc07e786  jal         func_1F9E18
    ctx->pc = 0x1F8A00u;
    SET_GPR_U32(ctx, 31, 0x1F8A08u);
    ctx->pc = 0x1F8A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A00u;
    // 0x1f8a04: 0xa440002c  sh          $zero, 0x2C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E18u, 0x1F8A00u, 0x1F8A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A08u;
label_1f8a08:
    // 0x1f8a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A0Cu;
        // 0x1f8a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A14u;
    // 0x1f8a14: 0x0  nop
    ctx->pc = 0x1f8a14u;
    // NOP
    ctx->pc = 0x1f8a18u;
}
