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

// Function: sub_00296E30
// Address: 0x296e30 - 0x296e58
void sub_00296E30_0x296e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E30_0x296e30");
#endif

    switch (ctx->pc) {
        case 0x296e40u: goto label_296e40;
        default: break;
    }

    ctx->pc = 0x296e30u;

    // 0x296e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296e38: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x296E38u;
    SET_GPR_U32(ctx, 31, 0x296E40u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x296E38u, 0x296E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E40u;
label_296e40:
    // 0x296e40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296e40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e44: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x296E44u;
    {
        const bool branch_taken_0x296e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e44) {
            ctx->pc = 0x296E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296E44u;
            // 0x296e48: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296E4Cu;
            goto label_296e4c;
        }
    }
    ctx->pc = 0x296E4Cu;
label_296e4c:
    // 0x296e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e50: 0x3e00008  jr          $ra
    ctx->pc = 0x296E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E50u;
        // 0x296e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E58u;
}
