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

// Function: sub_004E2B68
// Address: 0x4e2b68 - 0x4e2ba8
void sub_004E2B68_0x4e2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2B68_0x4e2b68");
#endif

    switch (ctx->pc) {
        case 0x4e2b7cu: goto label_4e2b7c;
        case 0x4e2b84u: goto label_4e2b84;
        case 0x4e2b8cu: goto label_4e2b8c;
        case 0x4e2b94u: goto label_4e2b94;
        default: break;
    }

    ctx->pc = 0x4e2b68u;

    // 0x4e2b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e2b74: 0xc138e60  jal         func_4E3980
    ctx->pc = 0x4E2B74u;
    SET_GPR_U32(ctx, 31, 0x4E2B7Cu);
    ctx->pc = 0x4E2B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B74u;
    // 0x4e2b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3980u, 0x4E2B74u, 0x4E2B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B7Cu;
label_4e2b7c:
    // 0x4e2b7c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E2B7Cu;
    SET_GPR_U32(ctx, 31, 0x4E2B84u);
    ctx->pc = 0x4E2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B7Cu;
    // 0x4e2b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E2B7Cu, 0x4E2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B84u;
label_4e2b84:
    // 0x4e2b84: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E2B84u;
    SET_GPR_U32(ctx, 31, 0x4E2B8Cu);
    ctx->pc = 0x4E2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2B84u;
    // 0x4e2b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E2B84u, 0x4E2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B8Cu;
label_4e2b8c:
    // 0x4e2b8c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E2B8Cu;
    SET_GPR_U32(ctx, 31, 0x4E2B94u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E2B8Cu, 0x4E2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2B94u;
label_4e2b94:
    // 0x4e2b94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e2b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2ba0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E2BA0u;
    ctx->pc = 0x4E2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2BA0u;
    // 0x4e2ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E2BA8u;
}
