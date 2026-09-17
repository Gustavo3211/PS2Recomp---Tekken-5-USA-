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

// Function: sub_00293208
// Address: 0x293208 - 0x293228
void sub_00293208_0x293208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293208_0x293208");
#endif

    switch (ctx->pc) {
        case 0x293218u: goto label_293218;
        default: break;
    }

    ctx->pc = 0x293208u;

    // 0x293208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29320c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293210: 0xc0a4c5a  jal         func_293168
    ctx->pc = 0x293210u;
    SET_GPR_U32(ctx, 31, 0x293218u);
    ctx->pc = 0x293168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293168u, 0x293210u, 0x293218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293218u;
label_293218:
    // 0x293218: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29321c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29321Cu;
    {
        const bool branch_taken_0x29321c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29321Cu;
        // 0x293220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29321c) {
            ctx->pc = 0x293228u;
            return;
        }
    }
    ctx->pc = 0x293224u;
    // 0x293224: 0x90620156  lbu         $v0, 0x156($v1)
    ctx->pc = 0x293224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 342)));
    ctx->pc = 0x293228u;
}
