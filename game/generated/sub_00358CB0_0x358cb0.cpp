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

// Function: sub_00358CB0
// Address: 0x358cb0 - 0x358cf0
void sub_00358CB0_0x358cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358CB0_0x358cb0");
#endif

    ctx->pc = 0x358cb0u;

    // 0x358cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358cb4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x358cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x358cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358cbc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x358cbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x358cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358cc4: 0x80d8ade  j           func_362B78
    ctx->pc = 0x358CC4u;
    ctx->pc = 0x358CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CC4u;
    // 0x358cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B78u, 0x358CC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358CCCu;
    // 0x358ccc: 0x0  nop
    ctx->pc = 0x358cccu;
    // NOP
    // 0x358cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358cd4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x358cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x358cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358cdc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x358cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x358ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ce4: 0x80d832e  j           func_360CB8
    ctx->pc = 0x358CE4u;
    ctx->pc = 0x358CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CE4u;
    // 0x358ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CB8u, 0x358CE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358CECu;
    // 0x358cec: 0x0  nop
    ctx->pc = 0x358cecu;
    // NOP
    ctx->pc = 0x358cf0u;
}
