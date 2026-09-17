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

// Function: sub_0036C170
// Address: 0x36c170 - 0x36c1c0
void sub_0036C170_0x36c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C170_0x36c170");
#endif

    switch (ctx->pc) {
        case 0x36c194u: goto label_36c194;
        case 0x36c1acu: goto label_36c1ac;
        default: break;
    }

    ctx->pc = 0x36c170u;

    // 0x36c170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c174: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c17c: 0x24506f48  addiu       $s0, $v0, 0x6F48
    ctx->pc = 0x36c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28488));
    // 0x36c180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c180u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F48u));
    // 0x36c184: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C184u;
    {
        const bool branch_taken_0x36c184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C184u;
        // 0x36c188: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c184) {
            ctx->pc = 0x36C1ACu;
            goto label_36c1ac;
        }
    }
    ctx->pc = 0x36C18Cu;
    // 0x36c18c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36C18Cu;
    SET_GPR_U32(ctx, 31, 0x36C194u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36C18Cu, 0x36C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C194u;
label_36c194:
    // 0x36c194: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c198: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c19c: 0x24a5c5a8  addiu       $a1, $a1, -0x3A58
    ctx->pc = 0x36c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952360));
    // 0x36c1a0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36c1a4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C1A4u;
    SET_GPR_U32(ctx, 31, 0x36C1ACu);
    ctx->pc = 0x36C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C1A4u;
    // 0x36c1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C1A4u, 0x36C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1ACu;
label_36c1ac:
    // 0x36c1ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1B8u;
        // 0x36c1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C1C0u;
}
