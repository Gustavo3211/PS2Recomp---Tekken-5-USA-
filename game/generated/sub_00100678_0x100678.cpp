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

// Function: sub_00100678
// Address: 0x100678 - 0x1006b0
void sub_00100678_0x100678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100678_0x100678");
#endif

    ctx->pc = 0x100678u;

    // 0x100678: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10067c: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x10067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100680: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x100680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA274u, _value); } while (0);
    // 0x100684: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x100684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA24Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA24Cu, _value); } while (0);
    // 0x100688: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x100688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA250u, _value); } while (0);
    // 0x10068c: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x10068cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA254u, _value); } while (0);
    // 0x100690: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x100690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA258u, _value); } while (0);
    // 0x100694: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x100694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA25Cu, _value); } while (0);
    // 0x100698: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x100698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA260u, _value); } while (0);
    // 0x10069c: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x10069cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA264u, _value); } while (0);
    // 0x1006a0: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x1006a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA268u, _value); } while (0);
    // 0x1006a4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1006a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA26Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA26Cu, _value); } while (0);
    // 0x1006a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1006A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1006ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006A8u;
        // 0x1006ac: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1006B0u;
}
