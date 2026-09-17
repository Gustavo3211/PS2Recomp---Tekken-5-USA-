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

// Function: sub_0036A028
// Address: 0x36a028 - 0x36a080
void sub_0036A028_0x36a028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A028_0x36a028");
#endif

    switch (ctx->pc) {
        case 0x36a04cu: goto label_36a04c;
        case 0x36a064u: goto label_36a064;
        default: break;
    }

    ctx->pc = 0x36a028u;

    // 0x36a028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a02c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a034: 0x24506c88  addiu       $s0, $v0, 0x6C88
    ctx->pc = 0x36a034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27784));
    // 0x36a038: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C88u));
    // 0x36a03c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A03Cu;
    {
        const bool branch_taken_0x36a03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A03Cu;
        // 0x36a040: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a03c) {
            ctx->pc = 0x36A064u;
            goto label_36a064;
        }
    }
    ctx->pc = 0x36A044u;
    // 0x36a044: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36A044u;
    SET_GPR_U32(ctx, 31, 0x36A04Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36A044u, 0x36A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A04Cu;
label_36a04c:
    // 0x36a04c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a050: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a054: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x36a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x36a058: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36a05c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A05Cu;
    SET_GPR_U32(ctx, 31, 0x36A064u);
    ctx->pc = 0x36A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A05Cu;
    // 0x36a060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A05Cu, 0x36A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A064u;
label_36a064:
    // 0x36a064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a06c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a070: 0x3e00008  jr          $ra
    ctx->pc = 0x36A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A070u;
        // 0x36a074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A078u;
    // 0x36a078: 0x3e00008  jr          $ra
    ctx->pc = 0x36A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A078u;
        // 0x36a07c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A080u;
}
