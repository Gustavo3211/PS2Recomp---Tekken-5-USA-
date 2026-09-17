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

// Function: sub_00298268
// Address: 0x298268 - 0x2982b8
void sub_00298268_0x298268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298268_0x298268");
#endif

    switch (ctx->pc) {
        case 0x298290u: goto label_298290;
        default: break;
    }

    ctx->pc = 0x298268u;

    // 0x298268: 0x3c053b9a  lui         $a1, 0x3B9A
    ctx->pc = 0x298268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15258 << 16));
    // 0x29826c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29826cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298270: 0x34a5ca00  ori         $a1, $a1, 0xCA00
    ctx->pc = 0x298270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51712);
    // 0x298274: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x298274u;
    {
        const bool branch_taken_0x298274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298274u;
        // 0x298278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298274) {
            ctx->pc = 0x2982B0u;
            goto label_2982b0;
        }
    }
    ctx->pc = 0x29827Cu;
    // 0x29827c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x29827cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x298280: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x298280u;
    {
        const bool branch_taken_0x298280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298280u;
        // 0x298284: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298280) {
            ctx->pc = 0x2982B0u;
            goto label_2982b0;
        }
    }
    ctx->pc = 0x298288u;
    // 0x298288: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x298288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29828c: 0x0  nop
    ctx->pc = 0x29828cu;
    // NOP
label_298290:
    // 0x298290: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x298290u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x298294: 0x2812  mflo        $a1
    ctx->pc = 0x298294u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x298298: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x298298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x29829c: 0x0  nop
    ctx->pc = 0x29829cu;
    // NOP
    // 0x2982a0: 0x0  nop
    ctx->pc = 0x2982a0u;
    // NOP
    // 0x2982a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2982A4u;
    {
        const bool branch_taken_0x2982a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982A4u;
        // 0x2982a8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982a4) {
            ctx->pc = 0x298290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298290;
        }
    }
    ctx->pc = 0x2982ACu;
    // 0x2982ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2982acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2982b0:
    // 0x2982b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2982B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2982B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2982B8u;
}
