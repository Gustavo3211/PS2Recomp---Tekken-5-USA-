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

// Function: sub_002F9AE0
// Address: 0x2f9ae0 - 0x2f9b10
void sub_002F9AE0_0x2f9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9AE0_0x2f9ae0");
#endif

    switch (ctx->pc) {
        case 0x2f9b00u: goto label_2f9b00;
        default: break;
    }

    ctx->pc = 0x2f9ae0u;

    // 0x2f9ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9aec: 0x90830168  lbu         $v1, 0x168($a0)
    ctx->pc = 0x2f9aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x2f9af0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9AF0u;
    {
        const bool branch_taken_0x2f9af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9af0) {
            ctx->pc = 0x2F9AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9AF0u;
            // 0x2f9af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9B04u;
            goto label_2f9b04;
        }
    }
    ctx->pc = 0x2F9AF8u;
    // 0x2f9af8: 0xc0be62c  jal         func_2F98B0
    ctx->pc = 0x2F9AF8u;
    SET_GPR_U32(ctx, 31, 0x2F9B00u);
    ctx->pc = 0x2F98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F98B0u, 0x2F9AF8u, 0x2F9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B00u;
label_2f9b00:
    // 0x2f9b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9b04:
    // 0x2f9b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B04u;
        // 0x2f9b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9B0Cu;
    // 0x2f9b0c: 0x0  nop
    ctx->pc = 0x2f9b0cu;
    // NOP
    ctx->pc = 0x2f9b10u;
}
