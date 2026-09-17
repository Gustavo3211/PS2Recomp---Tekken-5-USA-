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

// Function: sub_00509418
// Address: 0x509418 - 0x509460
void sub_00509418_0x509418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509418_0x509418");
#endif

    switch (ctx->pc) {
        case 0x509444u: goto label_509444;
        case 0x50944cu: goto label_50944c;
        default: break;
    }

    ctx->pc = 0x509418u;

    // 0x509418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x509418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50941c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509424: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x509424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x509428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x509428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50942c: 0x24504e00  addiu       $s0, $v0, 0x4E00
    ctx->pc = 0x50942cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x509430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x509430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x903E80u));
    // 0x509434: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x509434u;
    {
        const bool branch_taken_0x509434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x509434) {
            ctx->pc = 0x509438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x509434u;
            // 0x509438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509454u;
            goto label_509454;
        }
    }
    ctx->pc = 0x50943Cu;
    // 0x50943c: 0xc1444c6  jal         func_511318
    ctx->pc = 0x50943Cu;
    SET_GPR_U32(ctx, 31, 0x509444u);
    ctx->pc = 0x509440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50943Cu;
    // 0x509440: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511318u, 0x50943Cu, 0x509444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509444u;
label_509444:
    // 0x509444: 0xc144b20  jal         func_512C80
    ctx->pc = 0x509444u;
    SET_GPR_U32(ctx, 31, 0x50944Cu);
    ctx->pc = 0x509448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509444u;
    // 0x509448: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512C80u, 0x509444u, 0x50944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50944Cu;
label_50944c:
    // 0x50944c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x50944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x509450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_509454:
    // 0x509454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x509454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509458: 0x3e00008  jr          $ra
    ctx->pc = 0x509458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509458u;
        // 0x50945c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509460u;
}
