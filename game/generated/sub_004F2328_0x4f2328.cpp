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

// Function: sub_004F2328
// Address: 0x4f2328 - 0x4f2380
void sub_004F2328_0x4f2328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2328_0x4f2328");
#endif

    ctx->pc = 0x4f2328u;

    // 0x4f2328: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x4f2328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x4f232c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f232cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f2330: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x4f2330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x4f2334: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x4f2334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4f2338: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f2338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1210u, _value); } while (0);
    // 0x4f233c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x4f233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4f2340: 0x24880018  addiu       $t0, $a0, 0x18
    ctx->pc = 0x4f2340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4f2344: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f2344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f234c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4f234cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4f2350: 0x8c830128  lw          $v1, 0x128($a0)
    ctx->pc = 0x4f2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x4f2354: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f2354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1210u, _value); } while (0);
    // 0x4f2358: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f235c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f2360: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f2360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f2364: 0x8c83012c  lw          $v1, 0x12C($a0)
    ctx->pc = 0x4f2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x4f2368: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f2368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1210u, _value); } while (0);
    // 0x4f236c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f2370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f2370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f2374: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2374u;
        // 0x4f2378: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F237Cu;
    // 0x4f237c: 0x0  nop
    ctx->pc = 0x4f237cu;
    // NOP
    ctx->pc = 0x4f2380u;
}
