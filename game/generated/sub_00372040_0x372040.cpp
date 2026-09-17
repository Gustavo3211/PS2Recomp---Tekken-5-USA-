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

// Function: sub_00372040
// Address: 0x372040 - 0x372090
void sub_00372040_0x372040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372040_0x372040");
#endif

    switch (ctx->pc) {
        case 0x372064u: goto label_372064;
        case 0x372078u: goto label_372078;
        default: break;
    }

    ctx->pc = 0x372040u;

    // 0x372040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372044: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37204c: 0x24507590  addiu       $s0, $v0, 0x7590
    ctx->pc = 0x37204cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30096));
    // 0x372050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7590u));
    // 0x372054: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x372054u;
    {
        const bool branch_taken_0x372054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372054u;
        // 0x372058: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372054) {
            ctx->pc = 0x372078u;
            goto label_372078;
        }
    }
    ctx->pc = 0x37205Cu;
    // 0x37205c: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x37205Cu;
    SET_GPR_U32(ctx, 31, 0x372064u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x37205Cu, 0x372064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372064u;
label_372064:
    // 0x372064: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372068: 0x24a50e00  addiu       $a1, $a1, 0xE00
    ctx->pc = 0x372068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3584));
    // 0x37206c: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x37206cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x372070: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372070u;
    SET_GPR_U32(ctx, 31, 0x372078u);
    ctx->pc = 0x372074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372070u;
    // 0x372074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372070u, 0x372078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372078u;
label_372078:
    // 0x372078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37207c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37207cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372084: 0x3e00008  jr          $ra
    ctx->pc = 0x372084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372084u;
        // 0x372088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37208Cu;
    // 0x37208c: 0x0  nop
    ctx->pc = 0x37208cu;
    // NOP
    ctx->pc = 0x372090u;
}
