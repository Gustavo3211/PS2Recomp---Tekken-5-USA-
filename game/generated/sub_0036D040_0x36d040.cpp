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

// Function: sub_0036D040
// Address: 0x36d040 - 0x36d090
void sub_0036D040_0x36d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D040_0x36d040");
#endif

    switch (ctx->pc) {
        case 0x36d064u: goto label_36d064;
        case 0x36d07cu: goto label_36d07c;
        default: break;
    }

    ctx->pc = 0x36d040u;

    // 0x36d040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d044: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36d048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d04c: 0x24507008  addiu       $s0, $v0, 0x7008
    ctx->pc = 0x36d04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
    // 0x36d050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36d050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7008u));
    // 0x36d054: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D054u;
    {
        const bool branch_taken_0x36d054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D054u;
        // 0x36d058: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d054) {
            ctx->pc = 0x36D07Cu;
            goto label_36d07c;
        }
    }
    ctx->pc = 0x36D05Cu;
    // 0x36d05c: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x36D05Cu;
    SET_GPR_U32(ctx, 31, 0x36D064u);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x36D05Cu, 0x36D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D064u;
label_36d064:
    // 0x36d064: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36d064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36d068: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36d068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36d06c: 0x24a5df78  addiu       $a1, $a1, -0x2088
    ctx->pc = 0x36d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958968));
    // 0x36d070: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x36d070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x36d074: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36D074u;
    SET_GPR_U32(ctx, 31, 0x36D07Cu);
    ctx->pc = 0x36D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D074u;
    // 0x36d078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36D074u, 0x36D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D07Cu;
label_36d07c:
    // 0x36d07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d088: 0x3e00008  jr          $ra
    ctx->pc = 0x36D088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D088u;
        // 0x36d08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D090u;
}
