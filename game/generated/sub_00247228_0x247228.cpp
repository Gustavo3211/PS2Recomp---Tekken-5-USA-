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

// Function: sub_00247228
// Address: 0x247228 - 0x247268
void sub_00247228_0x247228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247228_0x247228");
#endif

    switch (ctx->pc) {
        case 0x247250u: goto label_247250;
        case 0x247258u: goto label_247258;
        default: break;
    }

    ctx->pc = 0x247228u;

    // 0x247228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24722c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247234: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247238: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x247238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x24723c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x24723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x247240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247240u;
    {
        const bool branch_taken_0x247240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247240u;
        // 0x247244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247240) {
            ctx->pc = 0x247258u;
            goto label_247258;
        }
    }
    ctx->pc = 0x247248u;
    // 0x247248: 0xc0928fa  jal         func_24A3E8
    ctx->pc = 0x247248u;
    SET_GPR_U32(ctx, 31, 0x247250u);
    ctx->pc = 0x24A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3E8u, 0x247248u, 0x247250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247250u;
label_247250:
    // 0x247250: 0xc091c70  jal         func_2471C0
    ctx->pc = 0x247250u;
    SET_GPR_U32(ctx, 31, 0x247258u);
    ctx->pc = 0x247254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247250u;
    // 0x247254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2471C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2471C0u, 0x247250u, 0x247258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247258u;
label_247258:
    // 0x247258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24725c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247260: 0x3e00008  jr          $ra
    ctx->pc = 0x247260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247260u;
        // 0x247264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247268u;
}
