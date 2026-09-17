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

// Function: sub_002ED438
// Address: 0x2ed438 - 0x2ed480
void sub_002ED438_0x2ed438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED438_0x2ed438");
#endif

    switch (ctx->pc) {
        case 0x2ed448u: goto label_2ed448;
        case 0x2ed450u: goto label_2ed450;
        case 0x2ed458u: goto label_2ed458;
        case 0x2ed460u: goto label_2ed460;
        case 0x2ed468u: goto label_2ed468;
        case 0x2ed470u: goto label_2ed470;
        default: break;
    }

    ctx->pc = 0x2ed438u;

    // 0x2ed438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed440: 0xc042ee4  jal         func_10BB90
    ctx->pc = 0x2ED440u;
    SET_GPR_U32(ctx, 31, 0x2ED448u);
    ctx->pc = 0x10BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB90u, 0x2ED440u, 0x2ED448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED448u;
label_2ed448:
    // 0x2ed448: 0xc0d2d9b  jal         func_34B66C
    ctx->pc = 0x2ED448u;
    SET_GPR_U32(ctx, 31, 0x2ED450u);
    ctx->pc = 0x34B66Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B66Cu, 0x2ED448u, 0x2ED450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED450u;
label_2ed450:
    // 0x2ed450: 0xc092182  jal         func_248608
    ctx->pc = 0x2ED450u;
    SET_GPR_U32(ctx, 31, 0x2ED458u);
    ctx->pc = 0x248608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248608u, 0x2ED450u, 0x2ED458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED458u;
label_2ed458:
    // 0x2ed458: 0xc0c6812  jal         func_31A048
    ctx->pc = 0x2ED458u;
    SET_GPR_U32(ctx, 31, 0x2ED460u);
    ctx->pc = 0x31A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A048u, 0x2ED458u, 0x2ED460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED460u;
label_2ed460:
    // 0x2ed460: 0xc0b42e4  jal         func_2D0B90
    ctx->pc = 0x2ED460u;
    SET_GPR_U32(ctx, 31, 0x2ED468u);
    ctx->pc = 0x2D0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B90u, 0x2ED460u, 0x2ED468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED468u;
label_2ed468:
    // 0x2ed468: 0xc08ffb0  jal         func_23FEC0
    ctx->pc = 0x2ED468u;
    SET_GPR_U32(ctx, 31, 0x2ED470u);
    ctx->pc = 0x23FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FEC0u, 0x2ED468u, 0x2ED470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED470u;
label_2ed470:
    // 0x2ed470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed474: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED474u;
        // 0x2ed478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED47Cu;
    // 0x2ed47c: 0x0  nop
    ctx->pc = 0x2ed47cu;
    // NOP
    ctx->pc = 0x2ed480u;
}
