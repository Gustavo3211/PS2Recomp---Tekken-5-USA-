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

// Function: sub_00110CB0
// Address: 0x110cb0 - 0x110ce8
void sub_00110CB0_0x110cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110CB0_0x110cb0");
#endif

    switch (ctx->pc) {
        case 0x110cc8u: goto label_110cc8;
        default: break;
    }

    ctx->pc = 0x110cb0u;

    // 0x110cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110cb4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x110cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x110cb8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110CB8u;
    {
        const bool branch_taken_0x110cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x110CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CB8u;
        // 0x110cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cb8) {
            ctx->pc = 0x110CD8u;
            goto label_110cd8;
        }
    }
    ctx->pc = 0x110CC0u;
    // 0x110cc0: 0xc0442f2  jal         func_110BC8
    ctx->pc = 0x110CC0u;
    SET_GPR_U32(ctx, 31, 0x110CC8u);
    ctx->pc = 0x110CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CC0u;
    // 0x110cc4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110BC8u, 0x110CC0u, 0x110CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CC8u;
label_110cc8:
    // 0x110cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ccc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x110cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x110cd0: 0x80442f2  j           func_110BC8
    ctx->pc = 0x110CD0u;
    ctx->pc = 0x110CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CD0u;
    // 0x110cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110BC8u;
    sub_00110BC8_0x110bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x110CD8u;
label_110cd8:
    // 0x110cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cdc: 0x80442f2  j           func_110BC8
    ctx->pc = 0x110CDCu;
    ctx->pc = 0x110CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CDCu;
    // 0x110ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110BC8u;
    sub_00110BC8_0x110bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x110CE4u;
    // 0x110ce4: 0x0  nop
    ctx->pc = 0x110ce4u;
    // NOP
    ctx->pc = 0x110ce8u;
}
