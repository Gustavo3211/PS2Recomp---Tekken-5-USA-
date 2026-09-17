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

// Function: sub_0031A200
// Address: 0x31a200 - 0x31a230
void sub_0031A200_0x31a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A200_0x31a200");
#endif

    switch (ctx->pc) {
        case 0x31a220u: goto label_31a220;
        default: break;
    }

    ctx->pc = 0x31a200u;

    // 0x31a200: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31a200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a204: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a20c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a210: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x31a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x31a214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a218: 0xc0c7538  jal         func_31D4E0
    ctx->pc = 0x31A218u;
    SET_GPR_U32(ctx, 31, 0x31A220u);
    ctx->pc = 0x31A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A218u;
    // 0x31a21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4E0u, 0x31A218u, 0x31A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A220u;
label_31a220:
    // 0x31a220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a224: 0x3e00008  jr          $ra
    ctx->pc = 0x31A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A224u;
        // 0x31a228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A22Cu;
    // 0x31a22c: 0x0  nop
    ctx->pc = 0x31a22cu;
    // NOP
    ctx->pc = 0x31a230u;
}
