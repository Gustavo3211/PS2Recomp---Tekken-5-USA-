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

// Function: sub_00358E68
// Address: 0x358e68 - 0x358ea8
void sub_00358E68_0x358e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E68_0x358e68");
#endif

    ctx->pc = 0x358e68u;

    // 0x358e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358e74: 0x80d8568  j           func_3615A0
    ctx->pc = 0x358E74u;
    ctx->pc = 0x358E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E74u;
    // 0x358e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3615A0u;
    sub_003615A0_0x3615a0(rdram, ctx, runtime); return;
    ctx->pc = 0x358E7Cu;
    // 0x358e7c: 0x0  nop
    ctx->pc = 0x358e7cu;
    // NOP
    // 0x358e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358e84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x358e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358e8c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x358e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x358e90: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x358e90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x358e94: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x358e94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x358e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358e9c: 0x80d85dc  j           func_361770
    ctx->pc = 0x358E9Cu;
    ctx->pc = 0x358EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E9Cu;
    // 0x358ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361770u, 0x358E9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358EA4u;
    // 0x358ea4: 0x0  nop
    ctx->pc = 0x358ea4u;
    // NOP
    ctx->pc = 0x358ea8u;
}
