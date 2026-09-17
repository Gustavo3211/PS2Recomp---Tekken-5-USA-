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

// Function: sub_003376D8
// Address: 0x3376d8 - 0x337718
void sub_003376D8_0x3376d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003376D8_0x3376d8");
#endif

    ctx->pc = 0x3376d8u;

    // 0x3376d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3376dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3376DCu;
    {
        const bool branch_taken_0x3376dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376DCu;
        // 0x3376e0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376dc) {
            ctx->pc = 0x3376F0u;
            goto label_3376f0;
        }
    }
    ctx->pc = 0x3376E4u;
    // 0x3376e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3376E4u;
    {
        const bool branch_taken_0x3376e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376E4u;
        // 0x3376e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376e4) {
            ctx->pc = 0x3376F8u;
            goto label_3376f8;
        }
    }
    ctx->pc = 0x3376ECu;
    // 0x3376ec: 0x0  nop
    ctx->pc = 0x3376ecu;
    // NOP
label_3376f0:
    // 0x3376f0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3376f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3376f4: 0xac430a78  sw          $v1, 0xA78($v0)
    ctx->pc = 0x3376f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x440A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440A78u, _value); } while (0);
label_3376f8:
    // 0x3376f8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3376F8u;
    {
        const bool branch_taken_0x3376f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376f8) {
            ctx->pc = 0x3376FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3376F8u;
            // 0x3376fc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33770Cu;
            goto label_33770c;
        }
    }
    ctx->pc = 0x337700u;
    // 0x337700: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x337700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337704: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x337704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x337708: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x337708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_33770c:
    // 0x33770c: 0x3e00008  jr          $ra
    ctx->pc = 0x33770Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33770Cu;
        // 0x337710: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33770Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337714u;
    // 0x337714: 0x0  nop
    ctx->pc = 0x337714u;
    // NOP
    ctx->pc = 0x337718u;
}
