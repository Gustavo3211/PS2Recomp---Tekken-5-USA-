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

// Function: sub_0048F890
// Address: 0x48f890 - 0x48f8b8
void sub_0048F890_0x48f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F890_0x48f890");
#endif

    ctx->pc = 0x48f890u;

    // 0x48f890: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x48f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x48f894: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48f898: 0x2442c6c0  addiu       $v0, $v0, -0x3940
    ctx->pc = 0x48f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
    // 0x48f89c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f8a0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x48f8a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x83C6C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6C0u, _value); } while (0);
    // 0x48f8a4: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x48f8a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6C2u, _value); } while (0);
    // 0x48f8a8: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x48f8a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6C6u, _value); } while (0);
    // 0x48f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x48F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F8ACu;
        // 0x48f8b0: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F8B4u;
    // 0x48f8b4: 0x0  nop
    ctx->pc = 0x48f8b4u;
    // NOP
    ctx->pc = 0x48f8b8u;
}
