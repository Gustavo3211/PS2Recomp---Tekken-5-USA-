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

// Function: sub_00293268
// Address: 0x293268 - 0x293298
void sub_00293268_0x293268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293268_0x293268");
#endif

    switch (ctx->pc) {
        case 0x293278u: goto label_293278;
        default: break;
    }

    ctx->pc = 0x293268u;

    // 0x293268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29326c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293270: 0xc0a4c5a  jal         func_293168
    ctx->pc = 0x293270u;
    SET_GPR_U32(ctx, 31, 0x293278u);
    ctx->pc = 0x293168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293168u, 0x293270u, 0x293278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293278u;
label_293278:
    // 0x293278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x293278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29327c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29327Cu;
    {
        const bool branch_taken_0x29327c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29327Cu;
        // 0x293280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29327c) {
            ctx->pc = 0x293288u;
            goto label_293288;
        }
    }
    ctx->pc = 0x293284u;
    // 0x293284: 0xa0620150  sb          $v0, 0x150($v1)
    ctx->pc = 0x293284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 336), (uint8_t)GPR_U32(ctx, 2));
label_293288:
    // 0x293288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29328c: 0x3e00008  jr          $ra
    ctx->pc = 0x29328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29328Cu;
        // 0x293290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293294u;
    // 0x293294: 0x0  nop
    ctx->pc = 0x293294u;
    // NOP
    ctx->pc = 0x293298u;
}
