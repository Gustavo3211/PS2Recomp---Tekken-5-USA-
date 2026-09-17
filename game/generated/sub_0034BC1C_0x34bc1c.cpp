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

// Function: sub_0034BC1C
// Address: 0x34bc1c - 0x34bc7c
void sub_0034BC1C_0x34bc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BC1C_0x34bc1c");
#endif

    switch (ctx->pc) {
        case 0x34bc60u: goto label_34bc60;
        default: break;
    }

    ctx->pc = 0x34bc1cu;

    // 0x34bc1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bc20: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34bc24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34bc28: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bc28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc2c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34bc30: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34bc34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bc38: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34bc3c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bc40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34bc44: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bc48: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34bc48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bc4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x34bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bc54: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x34bc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x34bc58: 0xc04a125  jal         func_128494
    ctx->pc = 0x34BC58u;
    SET_GPR_U32(ctx, 31, 0x34BC60u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34BC58u, 0x34BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC60u;
label_34bc60:
    // 0x34bc60: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bc64: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bc64u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc68: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bc68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bc6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bc70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bc74: 0x3e00008  jr          $ra
    ctx->pc = 0x34BC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BC7Cu;
}
