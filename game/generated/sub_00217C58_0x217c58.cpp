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

// Function: sub_00217C58
// Address: 0x217c58 - 0x217c98
void sub_00217C58_0x217c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217C58_0x217c58");
#endif

    switch (ctx->pc) {
        case 0x217c78u: goto label_217c78;
        default: break;
    }

    ctx->pc = 0x217c58u;

    // 0x217c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217c60: 0x90a20062  lbu         $v0, 0x62($a1)
    ctx->pc = 0x217c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 98)));
    // 0x217c64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x217C64u;
    {
        const bool branch_taken_0x217c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217c64) {
            ctx->pc = 0x217C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217C64u;
            // 0x217c68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217C88u;
            goto label_217c88;
        }
    }
    ctx->pc = 0x217C6Cu;
    // 0x217c6c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x217c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x217c70: 0xc0a5e92  jal         func_297A48
    ctx->pc = 0x217C70u;
    SET_GPR_U32(ctx, 31, 0x217C78u);
    ctx->pc = 0x217C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C70u;
    // 0x217c74: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A48u, 0x217C70u, 0x217C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C78u;
label_217c78:
    // 0x217c78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217c7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x217c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217c80: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x217c80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x217c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217c88:
    // 0x217c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x217C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C8Cu;
        // 0x217c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217C94u;
    // 0x217c94: 0x0  nop
    ctx->pc = 0x217c94u;
    // NOP
    ctx->pc = 0x217c98u;
}
