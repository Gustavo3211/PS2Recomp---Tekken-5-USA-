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

// Function: sub_00512E38
// Address: 0x512e38 - 0x512e78
void sub_00512E38_0x512e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512E38_0x512e38");
#endif

    ctx->pc = 0x512e38u;

    // 0x512e38: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x512e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x512e40: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512e44: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512e48: 0xa443021e  sh          $v1, 0x21E($v0)
    ctx->pc = 0x512e48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DF86Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DF86Eu, _value); } while (0);
    // 0x512e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x512E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512E4Cu;
        // 0x512e50: 0xa444021c  sh          $a0, 0x21C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 540), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512E54u;
    // 0x512e54: 0x0  nop
    ctx->pc = 0x512e54u;
    // NOP
    // 0x512e58: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512e5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x512e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x512e60: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512e64: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512e68: 0xa4430806  sh          $v1, 0x806($v0)
    ctx->pc = 0x512e68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFE56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFE56u, _value); } while (0);
    // 0x512e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x512E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512E6Cu;
        // 0x512e70: 0xa4440804  sh          $a0, 0x804($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2052), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512E74u;
    // 0x512e74: 0x0  nop
    ctx->pc = 0x512e74u;
    // NOP
    ctx->pc = 0x512e78u;
}
