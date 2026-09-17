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

// Function: sub_0034F09C
// Address: 0x34f09c - 0x34f110
void sub_0034F09C_0x34f09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F09C_0x34f09c");
#endif

    switch (ctx->pc) {
        case 0x34f0d4u: goto label_34f0d4;
        case 0x34f0f4u: goto label_34f0f4;
        default: break;
    }

    ctx->pc = 0x34f09cu;

    // 0x34f09c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34f09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34f0a0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34f0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34f0a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34f0a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f0a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0ac: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34f0b0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34f0b4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34f0b8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34f0bc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34f0c0: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34f0c4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34f0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0cc: 0xc043d04  jal         func_10F410
    ctx->pc = 0x34F0CCu;
    SET_GPR_U32(ctx, 31, 0x34F0D4u);
    ctx->pc = 0x10F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F410u, 0x34F0CCu, 0x34F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0D4u;
label_34f0d4:
    // 0x34f0d4: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x34f0d8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34f0dc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x34f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34f0e0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34f0e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f0e8: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34f0ec: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34F0ECu;
    SET_GPR_U32(ctx, 31, 0x34F0F4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34F0ECu, 0x34F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0F4u;
label_34f0f4:
    // 0x34f0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0f8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34f0f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0fc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34f0fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f100: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34f104: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34f104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f108: 0x3e00008  jr          $ra
    ctx->pc = 0x34F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F110u;
}
