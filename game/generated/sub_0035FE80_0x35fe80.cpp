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

// Function: sub_0035FE80
// Address: 0x35fe80 - 0x35feb0
void sub_0035FE80_0x35fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FE80_0x35fe80");
#endif

    ctx->pc = 0x35fe80u;

    // 0x35fe80: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35fe84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35fe88: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35fe88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35fe8c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x35fe8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35fe90: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x35fe90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x35fe94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35FE94u;
    {
        const bool branch_taken_0x35fe94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE94u;
        // 0x35fe98: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe94) {
            ctx->pc = 0x35FEA8u;
            goto label_35fea8;
        }
    }
    ctx->pc = 0x35FE9Cu;
    // 0x35fe9c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x35fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x35fea0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35fea4: 0x8442bb80  lh          $v0, -0x4480($v0)
    ctx->pc = 0x35fea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949760)));
label_35fea8:
    // 0x35fea8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FEB0u;
}
