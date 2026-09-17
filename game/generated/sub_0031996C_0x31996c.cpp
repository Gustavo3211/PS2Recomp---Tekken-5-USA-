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

// Function: sub_0031996C
// Address: 0x31996c - 0x3199b8
void sub_0031996C_0x31996c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031996C_0x31996c");
#endif

    ctx->pc = 0x31996cu;

    // 0x31996c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31996cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319970: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x319970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319974: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319974u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319978: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x319978u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x31997c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319980: 0x8c4343c4  lw          $v1, 0x43C4($v0)
    ctx->pc = 0x319980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x319984: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319988: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319988u;
    {
        const bool branch_taken_0x319988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x319988) {
            ctx->pc = 0x31999Cu;
            goto label_31999c;
        }
    }
    ctx->pc = 0x319990u;
    // 0x319990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319994u;
    {
        const bool branch_taken_0x319994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319994) {
            ctx->pc = 0x3199A4u;
            goto label_3199a4;
        }
    }
    ctx->pc = 0x31999Cu;
label_31999c:
    // 0x31999c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x31999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3199a0: 0x8c6244bc  lw          $v0, 0x44BC($v1)
    ctx->pc = 0x3199a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17596)));
label_3199a4:
    // 0x3199a4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3199a4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3199a8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3199a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3199ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3199acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3199b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3199B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3199B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3199B8u;
}
