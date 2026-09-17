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

// Function: sub_00344AF0
// Address: 0x344af0 - 0x344b28
void sub_00344AF0_0x344af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344AF0_0x344af0");
#endif

    switch (ctx->pc) {
        case 0x344b00u: goto label_344b00;
        case 0x344b1cu: goto label_344b1c;
        default: break;
    }

    ctx->pc = 0x344af0u;

    // 0x344af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344af8: 0xc042e40  jal         func_10B900
    ctx->pc = 0x344AF8u;
    SET_GPR_U32(ctx, 31, 0x344B00u);
    ctx->pc = 0x344AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AF8u;
    // 0x344afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B900u, 0x344AF8u, 0x344B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B00u;
label_344b00:
    // 0x344b00: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x344b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x344b04: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x344b04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x344b08: 0x24840730  addiu       $a0, $a0, 0x730
    ctx->pc = 0x344b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1840));
    // 0x344b0c: 0x24e75880  addiu       $a3, $a3, 0x5880
    ctx->pc = 0x344b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22656));
    // 0x344b10: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x344b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x344b14: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x344B14u;
    SET_GPR_U32(ctx, 31, 0x344B1Cu);
    ctx->pc = 0x344B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B14u;
    // 0x344b18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x344B14u, 0x344B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B1Cu;
label_344b1c:
    // 0x344b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b20: 0x3e00008  jr          $ra
    ctx->pc = 0x344B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B20u;
        // 0x344b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B28u;
}
