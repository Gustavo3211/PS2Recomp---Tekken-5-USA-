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

// Function: sub_00110680
// Address: 0x110680 - 0x1106a8
void sub_00110680_0x110680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110680_0x110680");
#endif

    ctx->pc = 0x110680u;

    // 0x110680: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x110680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x110684: 0x24438380  addiu       $v1, $v0, -0x7C80
    ctx->pc = 0x110684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935424));
    // 0x110688: 0xac448380  sw          $a0, -0x7C80($v0)
    ctx->pc = 0x110688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1E8380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E8380u, _value); } while (0);
    // 0x11068c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x11068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x110690: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110694: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x110694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1E8388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E8388u, _value); } while (0);
    // 0x110698: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x110698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1E8384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1E8384u, _value); } while (0);
    // 0x11069c: 0x3e00008  jr          $ra
    ctx->pc = 0x11069Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1106A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11069Cu;
        // 0x1106a0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11069Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1106A4u;
    // 0x1106a4: 0x0  nop
    ctx->pc = 0x1106a4u;
    // NOP
    ctx->pc = 0x1106a8u;
}
