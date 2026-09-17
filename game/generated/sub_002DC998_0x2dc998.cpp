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

// Function: sub_002DC998
// Address: 0x2dc998 - 0x2dc9d8
void sub_002DC998_0x2dc998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC998_0x2dc998");
#endif

    switch (ctx->pc) {
        case 0x2dc9a8u: goto label_2dc9a8;
        default: break;
    }

    ctx->pc = 0x2dc998u;

    // 0x2dc998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc99c: 0x2408ffdf  addiu       $t0, $zero, -0x21
    ctx->pc = 0x2dc99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2dc9a0: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2dc9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2dc9a4: 0x0  nop
    ctx->pc = 0x2dc9a4u;
    // NOP
label_2dc9a8:
    // 0x2dc9a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dc9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dc9ac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2dc9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc9b0: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x2dc9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2dc9b4: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x2dc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x2dc9b8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2dc9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2dc9bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC9BCu;
    {
        const bool branch_taken_0x2dc9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9BCu;
        // 0x2dc9c0: 0x28e60028  slti        $a2, $a3, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9bc) {
            ctx->pc = 0x2DC9C8u;
            goto label_2dc9c8;
        }
    }
    ctx->pc = 0x2DC9C4u;
    // 0x2dc9c4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2dc9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2dc9c8:
    // 0x2dc9c8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DC9C8u;
    {
        const bool branch_taken_0x2dc9c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9C8u;
        // 0x2dc9cc: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9c8) {
            ctx->pc = 0x2DC9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc9a8;
        }
    }
    ctx->pc = 0x2DC9D0u;
    // 0x2dc9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC9D8u;
}
