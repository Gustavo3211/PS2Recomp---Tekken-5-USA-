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

// Function: sub_0036AF88
// Address: 0x36af88 - 0x36afd8
void sub_0036AF88_0x36af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AF88_0x36af88");
#endif

    switch (ctx->pc) {
        case 0x36afacu: goto label_36afac;
        case 0x36afc4u: goto label_36afc4;
        default: break;
    }

    ctx->pc = 0x36af88u;

    // 0x36af88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36af8c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36af90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36af94: 0x24506dd8  addiu       $s0, $v0, 0x6DD8
    ctx->pc = 0x36af94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28120));
    // 0x36af98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36af98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DD8u));
    // 0x36af9c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AF9Cu;
    {
        const bool branch_taken_0x36af9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF9Cu;
        // 0x36afa0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af9c) {
            ctx->pc = 0x36AFC4u;
            goto label_36afc4;
        }
    }
    ctx->pc = 0x36AFA4u;
    // 0x36afa4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36AFA4u;
    SET_GPR_U32(ctx, 31, 0x36AFACu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36AFA4u, 0x36AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFACu;
label_36afac:
    // 0x36afac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36afacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36afb0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36afb4: 0x24a5a1a8  addiu       $a1, $a1, -0x5E58
    ctx->pc = 0x36afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943144));
    // 0x36afb8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36afbc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AFBCu;
    SET_GPR_U32(ctx, 31, 0x36AFC4u);
    ctx->pc = 0x36AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFBCu;
    // 0x36afc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AFBCu, 0x36AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFC4u;
label_36afc4:
    // 0x36afc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36afc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36afc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36afcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36afccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x36AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFD0u;
        // 0x36afd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AFD8u;
}
