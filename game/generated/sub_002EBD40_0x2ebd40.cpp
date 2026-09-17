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

// Function: sub_002EBD40
// Address: 0x2ebd40 - 0x2ebd78
void sub_002EBD40_0x2ebd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBD40_0x2ebd40");
#endif

    switch (ctx->pc) {
        case 0x2ebd54u: goto label_2ebd54;
        default: break;
    }

    ctx->pc = 0x2ebd40u;

    // 0x2ebd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebd48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ebd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ebd4c: 0xc0b45b8  jal         func_2D16E0
    ctx->pc = 0x2EBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2EBD54u);
    ctx->pc = 0x2EBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD4Cu;
    // 0x2ebd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16E0u, 0x2EBD4Cu, 0x2EBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD54u;
label_2ebd54:
    // 0x2ebd54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebd58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ebd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebd5c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2ebd5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2ebd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd64: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ebd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ebd68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebd6c: 0x80bbb84  j           func_2EEE10
    ctx->pc = 0x2EBD6Cu;
    ctx->pc = 0x2EBD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD6Cu;
    // 0x2ebd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEE10u;
    sub_002EEE10_0x2eee10(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBD74u;
    // 0x2ebd74: 0x0  nop
    ctx->pc = 0x2ebd74u;
    // NOP
    ctx->pc = 0x2ebd78u;
}
