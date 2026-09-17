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

// Function: sub_00373C54
// Address: 0x373c54 - 0x373cbc
void sub_00373C54_0x373c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373C54_0x373c54");
#endif

    ctx->pc = 0x373c54u;

    // 0x373c54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373c58: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373c5c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373c5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c60: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x373c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x373c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c68: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x373c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x373c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x373c70: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x373c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x373c74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x373c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x373c78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x373c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x373c7c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x373c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x373c80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373c88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x373c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x373c8c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x373c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373c90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x373c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x373c94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x373c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x373c98: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x373c9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x373c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x373ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373ca4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x373ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x373ca8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373ca8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cac: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373cacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373cb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x373CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373CBCu;
}
