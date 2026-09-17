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

// Function: sub_00330D08
// Address: 0x330d08 - 0x330d88
void sub_00330D08_0x330d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330D08_0x330d08");
#endif

    ctx->pc = 0x330d08u;

    // 0x330d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330d14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330d1c: 0x80cc2d2  j           func_330B48
    ctx->pc = 0x330D1Cu;
    ctx->pc = 0x330D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D1Cu;
    // 0x330d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B48u, 0x330D1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330D24u;
    // 0x330d24: 0x0  nop
    ctx->pc = 0x330d24u;
    // NOP
    // 0x330d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x330d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x330d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330d3c: 0x80cc2d2  j           func_330B48
    ctx->pc = 0x330D3Cu;
    ctx->pc = 0x330D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D3Cu;
    // 0x330d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B48u, 0x330D3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330D44u;
    // 0x330d44: 0x0  nop
    ctx->pc = 0x330d44u;
    // NOP
    // 0x330d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330d4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x330d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x330d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330d5c: 0x80cc2d2  j           func_330B48
    ctx->pc = 0x330D5Cu;
    ctx->pc = 0x330D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D5Cu;
    // 0x330d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B48u, 0x330D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330D64u;
    // 0x330d64: 0x0  nop
    ctx->pc = 0x330d64u;
    // NOP
    // 0x330d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330d6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x330d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330d74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x330d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330d7c: 0x80cc2d2  j           func_330B48
    ctx->pc = 0x330D7Cu;
    ctx->pc = 0x330D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D7Cu;
    // 0x330d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330B48u, 0x330D7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330D84u;
    // 0x330d84: 0x0  nop
    ctx->pc = 0x330d84u;
    // NOP
    ctx->pc = 0x330d88u;
}
