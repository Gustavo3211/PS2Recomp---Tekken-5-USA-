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

// Function: sub_002126B8
// Address: 0x2126b8 - 0x212700
void sub_002126B8_0x2126b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002126B8_0x2126b8");
#endif

    ctx->pc = 0x2126b8u;

    // 0x2126b8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2126b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2126bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2126bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2126c0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2126c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2126c4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2126c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2126c8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2126c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2126cc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2126ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2126d0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2126d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2126d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2126D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126D4u;
        // 0x2126d8: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126DCu;
    // 0x2126dc: 0x0  nop
    ctx->pc = 0x2126dcu;
    // NOP
    // 0x2126e0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2126e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2126e4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2126e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2126e8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2126e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2126ec: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2126ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2126f0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2126f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2126f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2126F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126F4u;
        // 0x2126f8: 0x7c820020  sq          $v0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2126F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126FCu;
    // 0x2126fc: 0x0  nop
    ctx->pc = 0x2126fcu;
    // NOP
    ctx->pc = 0x212700u;
}
