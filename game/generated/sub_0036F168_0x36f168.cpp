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

// Function: sub_0036F168
// Address: 0x36f168 - 0x36f1b8
void sub_0036F168_0x36f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F168_0x36f168");
#endif

    switch (ctx->pc) {
        case 0x36f18cu: goto label_36f18c;
        case 0x36f1a4u: goto label_36f1a4;
        default: break;
    }

    ctx->pc = 0x36f168u;

    // 0x36f168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f16c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f174: 0x24507250  addiu       $s0, $v0, 0x7250
    ctx->pc = 0x36f174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29264));
    // 0x36f178: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7250u));
    // 0x36f17c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F17Cu;
    {
        const bool branch_taken_0x36f17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F17Cu;
        // 0x36f180: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f17c) {
            ctx->pc = 0x36F1A4u;
            goto label_36f1a4;
        }
    }
    ctx->pc = 0x36F184u;
    // 0x36f184: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F184u;
    SET_GPR_U32(ctx, 31, 0x36F18Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F184u, 0x36F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F18Cu;
label_36f18c:
    // 0x36f18c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f190: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f194: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x36f194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    // 0x36f198: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f19c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F19Cu;
    SET_GPR_U32(ctx, 31, 0x36F1A4u);
    ctx->pc = 0x36F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F19Cu;
    // 0x36f1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F19Cu, 0x36F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F1A4u;
label_36f1a4:
    // 0x36f1a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f1ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1B0u;
        // 0x36f1b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F1B8u;
}
