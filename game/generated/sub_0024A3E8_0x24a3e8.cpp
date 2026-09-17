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

// Function: sub_0024A3E8
// Address: 0x24a3e8 - 0x24a418
void sub_0024A3E8_0x24a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A3E8_0x24a3e8");
#endif

    ctx->pc = 0x24a3e8u;

    // 0x24a3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a3ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A3ECu;
    {
        const bool branch_taken_0x24a3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3ECu;
        // 0x24a3f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3ec) {
            ctx->pc = 0x24A408u;
            goto label_24a408;
        }
    }
    ctx->pc = 0x24A3F4u;
    // 0x24a3f4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A3F4u;
    {
        const bool branch_taken_0x24a3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3F4u;
        // 0x24a3f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3f4) {
            ctx->pc = 0x24A40Cu;
            goto label_24a40c;
        }
    }
    ctx->pc = 0x24A3FCu;
    // 0x24a3fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a400: 0x80d638c  j           func_358E30
    ctx->pc = 0x24A400u;
    ctx->pc = 0x24A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A400u;
    // 0x24a404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E30u;
    sub_00358E30_0x358e30(rdram, ctx, runtime); return;
    ctx->pc = 0x24A408u;
label_24a408:
    // 0x24a408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a40c:
    // 0x24a40c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A40Cu;
        // 0x24a410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A414u;
    // 0x24a414: 0x0  nop
    ctx->pc = 0x24a414u;
    // NOP
    ctx->pc = 0x24a418u;
}
