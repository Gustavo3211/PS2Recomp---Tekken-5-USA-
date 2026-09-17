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

// Function: sub_004B6888
// Address: 0x4b6888 - 0x4b68b8
void sub_004B6888_0x4b6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6888_0x4b6888");
#endif

    switch (ctx->pc) {
        case 0x4b689cu: goto label_4b689c;
        case 0x4b68a4u: goto label_4b68a4;
        default: break;
    }

    ctx->pc = 0x4b6888u;

    // 0x4b6888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b6888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b688c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b6890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b6890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b6894: 0xc12da06  jal         func_4B6818
    ctx->pc = 0x4B6894u;
    SET_GPR_U32(ctx, 31, 0x4B689Cu);
    ctx->pc = 0x4B6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6894u;
    // 0x4b6898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6818u, 0x4B6894u, 0x4B689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B689Cu;
label_4b689c:
    // 0x4b689c: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B689Cu;
    SET_GPR_U32(ctx, 31, 0x4B68A4u);
    ctx->pc = 0x4B68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B689Cu;
    // 0x4b68a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B689Cu, 0x4B68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B68A4u;
label_4b68a4:
    // 0x4b68a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b68a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b68a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b68a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b68ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b68acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b68b0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B68B0u;
    ctx->pc = 0x4B68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B68B0u;
    // 0x4b68b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B68B8u;
}
