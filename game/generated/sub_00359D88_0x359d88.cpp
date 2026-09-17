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

// Function: sub_00359D88
// Address: 0x359d88 - 0x359dc0
void sub_00359D88_0x359d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359D88_0x359d88");
#endif

    switch (ctx->pc) {
        case 0x359da0u: goto label_359da0;
        default: break;
    }

    ctx->pc = 0x359d88u;

    // 0x359d88: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x359d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x359d8c: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359d98: 0xc0d9d2c  jal         func_3674B0
    ctx->pc = 0x359D98u;
    SET_GPR_U32(ctx, 31, 0x359DA0u);
    ctx->pc = 0x359D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D98u;
    // 0x359d9c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3674B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3674B0u, 0x359D98u, 0x359DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DA0u;
label_359da0:
    // 0x359da0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x359da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x359da4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x359da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x359da8: 0x3463002e  ori         $v1, $v1, 0x2E
    ctx->pc = 0x359da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46);
    // 0x359dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359db0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x359db0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x359db4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x359db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359db8: 0x3e00008  jr          $ra
    ctx->pc = 0x359DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359DB8u;
        // 0x359dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359DC0u;
}
