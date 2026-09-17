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

// Function: sub_00344A10
// Address: 0x344a10 - 0x344a48
void sub_00344A10_0x344a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344A10_0x344a10");
#endif

    ctx->pc = 0x344a10u;

    // 0x344a10: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x344a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x344a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x344a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x344a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x344a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x344a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344a28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x344a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x344a2c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x344a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x344a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x344a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x344a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x344a3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x344a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x344a40: 0x80d1546  j           func_345518
    ctx->pc = 0x344A40u;
    ctx->pc = 0x344A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A40u;
    // 0x344a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345518u, 0x344A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344A48u;
}
