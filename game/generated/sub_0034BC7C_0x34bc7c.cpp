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

// Function: sub_0034BC7C
// Address: 0x34bc7c - 0x34bcf8
void sub_0034BC7C_0x34bc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BC7C_0x34bc7c");
#endif

    switch (ctx->pc) {
        case 0x34bcc4u: goto label_34bcc4;
        default: break;
    }

    ctx->pc = 0x34bc7cu;

    // 0x34bc7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34bc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34bc80: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34bc84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34bc88: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bc88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc8c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34bc90: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34bc94: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bc98: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34bc9c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bca0: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bca4: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bca8: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x34bca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bcac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34bcb0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x34bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34bcb4: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x34bcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x34bcb8: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x34bcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x34bcbc: 0xc0d2f6b  jal         func_34BDAC
    ctx->pc = 0x34BCBCu;
    SET_GPR_U32(ctx, 31, 0x34BCC4u);
    ctx->pc = 0x34BDACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BDACu, 0x34BCBCu, 0x34BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BCC4u;
label_34bcc4:
    // 0x34bcc4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34bcc8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bccc: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34bcd0: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bcd4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bcd8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34bcdc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bce0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bce0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bce4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34bce4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bce8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34bcec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34bcecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x34BCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BCF8u;
}
