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

// Function: sub_00315AA8
// Address: 0x315aa8 - 0x315af0
void sub_00315AA8_0x315aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315AA8_0x315aa8");
#endif

    switch (ctx->pc) {
        case 0x315accu: goto label_315acc;
        case 0x315ad4u: goto label_315ad4;
        default: break;
    }

    ctx->pc = 0x315aa8u;

    // 0x315aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x315aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315aac: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x315aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x315ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x315ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x315ab4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x315ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x315ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x315abc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x315abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x315ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x315ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315ac4: 0xc0c543c  jal         func_3150F0
    ctx->pc = 0x315AC4u;
    SET_GPR_U32(ctx, 31, 0x315ACCu);
    ctx->pc = 0x315AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AC4u;
    // 0x315ac8: 0x8c50007c  lw          $s0, 0x7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3150F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3150F0u, 0x315AC4u, 0x315ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315ACCu;
label_315acc:
    // 0x315acc: 0xc043d88  jal         func_10F620
    ctx->pc = 0x315ACCu;
    SET_GPR_U32(ctx, 31, 0x315AD4u);
    ctx->pc = 0x315AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315ACCu;
    // 0x315ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x315ACCu, 0x315AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AD4u;
label_315ad4:
    // 0x315ad4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x315ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x315ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x315ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x315adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x315ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ae4: 0x80cbf98  j           func_32FE60
    ctx->pc = 0x315AE4u;
    ctx->pc = 0x315AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AE4u;
    // 0x315ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    sub_0032FE60_0x32fe60(rdram, ctx, runtime); return;
    ctx->pc = 0x315AECu;
    // 0x315aec: 0x0  nop
    ctx->pc = 0x315aecu;
    // NOP
    ctx->pc = 0x315af0u;
}
