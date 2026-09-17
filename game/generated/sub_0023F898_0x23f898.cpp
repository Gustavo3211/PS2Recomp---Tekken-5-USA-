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

// Function: sub_0023F898
// Address: 0x23f898 - 0x23f8e0
void sub_0023F898_0x23f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F898_0x23f898");
#endif

    switch (ctx->pc) {
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d4u: goto label_23f8d4;
        default: break;
    }

    ctx->pc = 0x23f898u;

    // 0x23f898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f89c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f8a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f8a8: 0x24503580  addiu       $s0, $v0, 0x3580
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
    // 0x23f8ac: 0x0  nop
    ctx->pc = 0x23f8acu;
    // NOP
label_23f8b0:
    // 0x23f8b0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x23F8B0u;
    SET_GPR_U32(ctx, 31, 0x23F8B8u);
    ctx->pc = 0x23F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8B0u;
    // 0x23f8b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x23F8B0u, 0x23F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8B8u;
label_23f8b8:
    // 0x23f8b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f8bc: 0x1443fffc  bne         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23F8BCu;
    {
        const bool branch_taken_0x23f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f8bc) {
            ctx->pc = 0x23F8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f8b0;
        }
    }
    ctx->pc = 0x23F8C4u;
    // 0x23f8c4: 0xc08fd70  jal         func_23F5C0
    ctx->pc = 0x23F8C4u;
    SET_GPR_U32(ctx, 31, 0x23F8CCu);
    ctx->pc = 0x23F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5C0u, 0x23F8C4u, 0x23F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8CCu;
label_23f8cc:
    // 0x23f8cc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x23F8CCu;
    SET_GPR_U32(ctx, 31, 0x23F8D4u);
    ctx->pc = 0x23F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8CCu;
    // 0x23f8d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x23F8CCu, 0x23F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8D4u;
label_23f8d4:
    // 0x23f8d4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x23F8D4u;
    {
        const bool branch_taken_0x23f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8d4) {
            ctx->pc = 0x23F8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f8b0;
        }
    }
    ctx->pc = 0x23F8DCu;
    // 0x23f8dc: 0x0  nop
    ctx->pc = 0x23f8dcu;
    // NOP
    ctx->pc = 0x23f8e0u;
}
