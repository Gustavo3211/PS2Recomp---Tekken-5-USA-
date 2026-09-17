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

// Function: sub_004E2BA8
// Address: 0x4e2ba8 - 0x4e2bd8
void sub_004E2BA8_0x4e2ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2BA8_0x4e2ba8");
#endif

    switch (ctx->pc) {
        case 0x4e2bbcu: goto label_4e2bbc;
        case 0x4e2bc4u: goto label_4e2bc4;
        default: break;
    }

    ctx->pc = 0x4e2ba8u;

    // 0x4e2ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e2ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e2bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e2bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e2bb4: 0xc138e60  jal         func_4E3980
    ctx->pc = 0x4E2BB4u;
    SET_GPR_U32(ctx, 31, 0x4E2BBCu);
    ctx->pc = 0x4E2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2BB4u;
    // 0x4e2bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3980u, 0x4E2BB4u, 0x4E2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2BBCu;
label_4e2bbc:
    // 0x4e2bbc: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4E2BBCu;
    SET_GPR_U32(ctx, 31, 0x4E2BC4u);
    ctx->pc = 0x4E2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2BBCu;
    // 0x4e2bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4E2BBCu, 0x4E2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2BC4u;
label_4e2bc4:
    // 0x4e2bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e2bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2bd0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E2BD0u;
    ctx->pc = 0x4E2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2BD0u;
    // 0x4e2bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E2BD8u;
}
