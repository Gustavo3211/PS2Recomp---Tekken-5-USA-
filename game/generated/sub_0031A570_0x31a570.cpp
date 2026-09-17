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

// Function: sub_0031A570
// Address: 0x31a570 - 0x31a588
void sub_0031A570_0x31a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A570_0x31a570");
#endif

    ctx->pc = 0x31a570u;

    // 0x31a570: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A570u;
    {
        const bool branch_taken_0x31a570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A570u;
        // 0x31a574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a570) {
            ctx->pc = 0x31A580u;
            goto label_31a580;
        }
    }
    ctx->pc = 0x31A578u;
    // 0x31a578: 0x80c8f06  j           func_323C18
    ctx->pc = 0x31A578u;
    ctx->pc = 0x31A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A578u;
    // 0x31a57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C18u, 0x31A578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A580u;
label_31a580:
    // 0x31a580: 0x80c8f0e  j           func_323C38
    ctx->pc = 0x31A580u;
    ctx->pc = 0x31A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A580u;
    // 0x31a584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C38u, 0x31A580u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A588u;
}
