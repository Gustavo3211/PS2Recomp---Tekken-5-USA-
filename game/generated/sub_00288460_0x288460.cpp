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

// Function: sub_00288460
// Address: 0x288460 - 0x288490
void sub_00288460_0x288460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288460_0x288460");
#endif

    switch (ctx->pc) {
        case 0x288474u: goto label_288474;
        case 0x28847cu: goto label_28847c;
        default: break;
    }

    ctx->pc = 0x288460u;

    // 0x288460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x288468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28846c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28846Cu;
    SET_GPR_U32(ctx, 31, 0x288474u);
    ctx->pc = 0x288470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28846Cu;
    // 0x288470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28846Cu, 0x288474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288474u;
label_288474:
    // 0x288474: 0xc0a2124  jal         func_288490
    ctx->pc = 0x288474u;
    SET_GPR_U32(ctx, 31, 0x28847Cu);
    ctx->pc = 0x288478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288474u;
    // 0x288478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288490u, 0x288474u, 0x28847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28847Cu;
label_28847c:
    // 0x28847c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28847cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x288480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288484: 0x3e00008  jr          $ra
    ctx->pc = 0x288484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288484u;
        // 0x288488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28848Cu;
    // 0x28848c: 0x0  nop
    ctx->pc = 0x28848cu;
    // NOP
    ctx->pc = 0x288490u;
}
