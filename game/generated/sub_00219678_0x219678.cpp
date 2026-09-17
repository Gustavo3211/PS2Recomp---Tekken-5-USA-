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

// Function: sub_00219678
// Address: 0x219678 - 0x2196a0
void sub_00219678_0x219678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219678_0x219678");
#endif

    switch (ctx->pc) {
        case 0x21968cu: goto label_21968c;
        default: break;
    }

    ctx->pc = 0x219678u;

    // 0x219678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21967c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219680: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219684: 0xc086620  jal         func_219880
    ctx->pc = 0x219684u;
    SET_GPR_U32(ctx, 31, 0x21968Cu);
    ctx->pc = 0x219688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219684u;
    // 0x219688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x219684u, 0x21968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21968Cu;
label_21968c:
    // 0x21968c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x21968cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x219690: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219698: 0x3e00008  jr          $ra
    ctx->pc = 0x219698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219698u;
        // 0x21969c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2196A0u;
}
