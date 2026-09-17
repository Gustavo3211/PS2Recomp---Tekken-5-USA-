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

// Function: sub_00220488
// Address: 0x220488 - 0x2204b8
void sub_00220488_0x220488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220488_0x220488");
#endif

    ctx->pc = 0x220488u;

    // 0x220488: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x220488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22048c: 0x2c84006b  sltiu       $a0, $a0, 0x6B
    ctx->pc = 0x22048cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
    // 0x220490: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220490u;
    {
        const bool branch_taken_0x220490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220490u;
        // 0x220494: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220490) {
            ctx->pc = 0x2204A4u;
            goto label_2204a4;
        }
    }
    ctx->pc = 0x220498u;
    // 0x220498: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x22049c: 0x24636ea8  addiu       $v1, $v1, 0x6EA8
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28328));
    // 0x2204a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2204a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2204a4:
    // 0x2204a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2204A4u;
    {
        const bool branch_taken_0x2204a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204A4u;
        // 0x2204a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204a4) {
            ctx->pc = 0x2204B0u;
            goto label_2204b0;
        }
    }
    ctx->pc = 0x2204ACu;
    // 0x2204ac: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2204b0:
    // 0x2204b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2204B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2204B8u;
}
