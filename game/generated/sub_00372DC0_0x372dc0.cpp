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

// Function: sub_00372DC0
// Address: 0x372dc0 - 0x372df8
void sub_00372DC0_0x372dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372DC0_0x372dc0");
#endif

    ctx->pc = 0x372dc0u;

    // 0x372dc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x372dc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372dc8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x372dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x372dcc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x372dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x372dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372dd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x372DD4u;
    {
        const bool branch_taken_0x372dd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x372DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DD4u;
        // 0x372dd8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372dd4) {
            ctx->pc = 0x372DE8u;
            goto label_372de8;
        }
    }
    ctx->pc = 0x372DDCu;
    // 0x372ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372de0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x372DE0u;
    ctx->pc = 0x372DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DE0u;
    // 0x372de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x372DE8u;
label_372de8:
    // 0x372de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372dec: 0x3e00008  jr          $ra
    ctx->pc = 0x372DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DECu;
        // 0x372df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372DF4u;
    // 0x372df4: 0x0  nop
    ctx->pc = 0x372df4u;
    // NOP
    ctx->pc = 0x372df8u;
}
