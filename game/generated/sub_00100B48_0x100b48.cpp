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

// Function: sub_00100B48
// Address: 0x100b48 - 0x100ba0
void sub_00100B48_0x100b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B48_0x100b48");
#endif

    ctx->pc = 0x100b48u;

    // 0x100b48: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100b4c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x100b50: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x100b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x100b54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100b58: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100b5c: 0x24851000  addiu       $a1, $a0, 0x1000
    ctx->pc = 0x100b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    // 0x100b60: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x100b64: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x100b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x100b68: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x100b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x100b6c: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x100b70: 0x34e73000  ori         $a3, $a3, 0x3000
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12288);
    // 0x100b74: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x100b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x100b78: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x100b7c: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x100b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x100b80: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x100b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x100b84: 0xac430160  sw          $v1, 0x160($v0)
    ctx->pc = 0x100b84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA320u, _value); } while (0);
    // 0x100b88: 0xac450150  sw          $a1, 0x150($v0)
    ctx->pc = 0x100b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA310u, _value); } while (0);
    // 0x100b8c: 0xac460154  sw          $a2, 0x154($v0)
    ctx->pc = 0x100b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA314u, _value); } while (0);
    // 0x100b90: 0xac470158  sw          $a3, 0x158($v0)
    ctx->pc = 0x100b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1BCA318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA318u, _value); } while (0);
    // 0x100b94: 0xac48015c  sw          $t0, 0x15C($v0)
    ctx->pc = 0x100b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1BCA31Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA31Cu, _value); } while (0);
    // 0x100b98: 0x3e00008  jr          $ra
    ctx->pc = 0x100B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B98u;
        // 0x100b9c: 0xac44014c  sw          $a0, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100BA0u;
}
