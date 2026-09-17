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

// Function: sub_00316AAC
// Address: 0x316aac - 0x316b14
void sub_00316AAC_0x316aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316AAC_0x316aac");
#endif

    switch (ctx->pc) {
        case 0x316ac8u: goto label_316ac8;
        case 0x316afcu: goto label_316afc;
        default: break;
    }

    ctx->pc = 0x316aacu;

    // 0x316aac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316ab0: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316ab4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316ab8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316ab8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316abc: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316ac0: 0xc0c64b5  jal         func_3192D4
    ctx->pc = 0x316AC0u;
    SET_GPR_U32(ctx, 31, 0x316AC8u);
    ctx->pc = 0x3192D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3192D4u, 0x316AC0u, 0x316AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AC8u;
label_316ac8:
    // 0x316ac8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316ac8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316acc: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316accu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316ad0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316ad4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x316AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316AE0u;
    // 0x316ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316ae4: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316aec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316aecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316af0: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316af4: 0xc0c64cb  jal         func_31932C
    ctx->pc = 0x316AF4u;
    SET_GPR_U32(ctx, 31, 0x316AFCu);
    ctx->pc = 0x31932Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31932Cu, 0x316AF4u, 0x316AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AFCu;
label_316afc:
    // 0x316afc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316afcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b00: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316b00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316b08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x316B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B14u;
}
