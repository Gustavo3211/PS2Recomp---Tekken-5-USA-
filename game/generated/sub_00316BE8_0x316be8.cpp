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

// Function: sub_00316BE8
// Address: 0x316be8 - 0x316c3c
void sub_00316BE8_0x316be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316BE8_0x316be8");
#endif

    switch (ctx->pc) {
        case 0x316c24u: goto label_316c24;
        default: break;
    }

    ctx->pc = 0x316be8u;

    // 0x316be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316bec: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x316becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316bf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x316bf4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bf8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316bfc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x316bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x316c00: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x316c00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x316c04: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x316c04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x316c08: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316c0c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x316c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316c10: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x316c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316c14: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x316c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316c18: 0x8fc8000c  lw          $t0, 0xC($fp)
    ctx->pc = 0x316c18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316c1c: 0xc0c657b  jal         func_3195EC
    ctx->pc = 0x316C1Cu;
    SET_GPR_U32(ctx, 31, 0x316C24u);
    ctx->pc = 0x3195ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3195ECu, 0x316C1Cu, 0x316C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C24u;
label_316c24:
    // 0x316c24: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316c24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c28: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316c28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316c2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316c30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316c34: 0x3e00008  jr          $ra
    ctx->pc = 0x316C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316C3Cu;
}
