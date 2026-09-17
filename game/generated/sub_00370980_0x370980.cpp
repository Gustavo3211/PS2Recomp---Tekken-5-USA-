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

// Function: sub_00370980
// Address: 0x370980 - 0x3709b8
void sub_00370980_0x370980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370980_0x370980");
#endif

    ctx->pc = 0x370980u;

    // 0x370980: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370984: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370988: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x37098c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37098cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370994: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370994u;
    {
        const bool branch_taken_0x370994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370994u;
        // 0x370998: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370994) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x37099Cu;
    // 0x37099c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3709a0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3709A0u;
    ctx->pc = 0x3709A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709A0u;
    // 0x3709a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3709A8u;
label_3709a8:
    // 0x3709a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3709a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3709ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3709ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3709B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709ACu;
        // 0x3709b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3709ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3709B4u;
    // 0x3709b4: 0x0  nop
    ctx->pc = 0x3709b4u;
    // NOP
    ctx->pc = 0x3709b8u;
}
