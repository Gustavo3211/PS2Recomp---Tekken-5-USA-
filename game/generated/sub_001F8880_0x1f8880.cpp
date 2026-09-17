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

// Function: sub_001F8880
// Address: 0x1f8880 - 0x1f88c8
void sub_001F8880_0x1f8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8880_0x1f8880");
#endif

    ctx->pc = 0x1f8880u;

    // 0x1f8880: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f8884: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8888: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x1f8888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f888c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1f888cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1555C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555C8u, _value); } while (0);
    // 0x1f8890: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1f8890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555F4u, _value); } while (0);
    // 0x1f8894: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f8894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555B0u, _value); } while (0);
    // 0x1f8898: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555B4u, _value); } while (0);
    // 0x1f889c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f889cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555B8u, _value); } while (0);
    // 0x1f88a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f88a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555BCu, _value); } while (0);
    // 0x1f88a4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1f88a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555C0u, _value); } while (0);
    // 0x1f88a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f88a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555CCu, _value); } while (0);
    // 0x1f88ac: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1f88acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D0u, _value); } while (0);
    // 0x1f88b0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1f88b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D4u, _value); } while (0);
    // 0x1f88b4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f88b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555D8u, _value); } while (0);
    // 0x1f88b8: 0xa440002c  sh          $zero, 0x2C($v0)
    ctx->pc = 0x1f88b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555DCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1555DCu, _value); } while (0);
    // 0x1f88bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F88BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88BCu;
        // 0x1f88c0: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F88C4u;
    // 0x1f88c4: 0x0  nop
    ctx->pc = 0x1f88c4u;
    // NOP
    ctx->pc = 0x1f88c8u;
}
