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

// Function: sub_0048EF20
// Address: 0x48ef20 - 0x48ef48
void sub_0048EF20_0x48ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EF20_0x48ef20");
#endif

    ctx->pc = 0x48ef20u;

    // 0x48ef20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ef24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ef28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ef2c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48ef30: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48ef30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48ef34: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48ef34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48ef38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ef3c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48ef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48ef40: 0x8123b9c  j           func_48EE70
    ctx->pc = 0x48EF40u;
    ctx->pc = 0x48EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EF40u;
    // 0x48ef44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EE70u, 0x48EF40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48EF48u;
}
