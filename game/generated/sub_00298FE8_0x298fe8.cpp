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

// Function: sub_00298FE8
// Address: 0x298fe8 - 0x299008
void sub_00298FE8_0x298fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298FE8_0x298fe8");
#endif

    switch (ctx->pc) {
        case 0x298ffcu: goto label_298ffc;
        default: break;
    }

    ctx->pc = 0x298fe8u;

    // 0x298fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298fec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298ff4: 0xc0a63ec  jal         func_298FB0
    ctx->pc = 0x298FF4u;
    SET_GPR_U32(ctx, 31, 0x298FFCu);
    ctx->pc = 0x298FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FF4u;
    // 0x298ff8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x298FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298FB0u, 0x298FF4u, 0x298FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FFCu;
label_298ffc:
    // 0x298ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299000: 0x3e00008  jr          $ra
    ctx->pc = 0x299000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299000u;
        // 0x299004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299008u;
}
