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

// Function: sub_0036DBE0
// Address: 0x36dbe0 - 0x36dc18
void sub_0036DBE0_0x36dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DBE0_0x36dbe0");
#endif

    ctx->pc = 0x36dbe0u;

    // 0x36dbe0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36dbe4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dbe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dbe8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36dbec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36dbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36dbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dbf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36DBF4u;
    {
        const bool branch_taken_0x36dbf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBF4u;
        // 0x36dbf8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dbf4) {
            ctx->pc = 0x36DC08u;
            goto label_36dc08;
        }
    }
    ctx->pc = 0x36DBFCu;
    // 0x36dbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc00: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36DC00u;
    ctx->pc = 0x36DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DC00u;
    // 0x36dc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36DC08u;
label_36dc08:
    // 0x36dc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC0Cu;
        // 0x36dc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC14u;
    // 0x36dc14: 0x0  nop
    ctx->pc = 0x36dc14u;
    // NOP
    ctx->pc = 0x36dc18u;
}
