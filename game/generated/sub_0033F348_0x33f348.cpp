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

// Function: sub_0033F348
// Address: 0x33f348 - 0x33f378
void sub_0033F348_0x33f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F348_0x33f348");
#endif

    switch (ctx->pc) {
        case 0x33f36cu: goto label_33f36c;
        default: break;
    }

    ctx->pc = 0x33f348u;

    // 0x33f348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f350: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33f350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33f354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33f358: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x33f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x33f35c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F35Cu;
    {
        const bool branch_taken_0x33f35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f35c) {
            ctx->pc = 0x33F360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F35Cu;
            // 0x33f360: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F370u;
            goto label_33f370;
        }
    }
    ctx->pc = 0x33F364u;
    // 0x33f364: 0xc0cfb28  jal         func_33ECA0
    ctx->pc = 0x33F364u;
    SET_GPR_U32(ctx, 31, 0x33F36Cu);
    ctx->pc = 0x33ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ECA0u, 0x33F364u, 0x33F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F36Cu;
label_33f36c:
    // 0x33f36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f370:
    // 0x33f370: 0x3e00008  jr          $ra
    ctx->pc = 0x33F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F370u;
        // 0x33f374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F378u;
}
