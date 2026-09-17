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

// Function: sub_004A8A60
// Address: 0x4a8a60 - 0x4a8a98
void sub_004A8A60_0x4a8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8A60_0x4a8a60");
#endif

    switch (ctx->pc) {
        case 0x4a8a74u: goto label_4a8a74;
        default: break;
    }

    ctx->pc = 0x4a8a60u;

    // 0x4a8a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a8a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a8a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a8a68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4a8a6c: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x4A8A6Cu;
    SET_GPR_U32(ctx, 31, 0x4A8A74u);
    ctx->pc = 0x4A8A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8A6Cu;
    // 0x4a8a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x4A8A6Cu, 0x4A8A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8A74u;
label_4a8a74:
    // 0x4a8a74: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4a8a78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a8a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a8a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a8a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8a84: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a8a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a8a88: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a8a88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8a8c: 0x8123392  j           func_48CE48
    ctx->pc = 0x4A8A8Cu;
    ctx->pc = 0x4A8A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8A8Cu;
    // 0x4a8a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A8A94u;
    // 0x4a8a94: 0x0  nop
    ctx->pc = 0x4a8a94u;
    // NOP
    ctx->pc = 0x4a8a98u;
}
