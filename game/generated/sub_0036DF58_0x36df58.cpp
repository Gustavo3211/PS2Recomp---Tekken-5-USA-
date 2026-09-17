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

// Function: sub_0036DF58
// Address: 0x36df58 - 0x36dfb0
void sub_0036DF58_0x36df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DF58_0x36df58");
#endif

    switch (ctx->pc) {
        case 0x36df7cu: goto label_36df7c;
        case 0x36df94u: goto label_36df94;
        default: break;
    }

    ctx->pc = 0x36df58u;

    // 0x36df58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36df5c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36df60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36df64: 0x24507180  addiu       $s0, $v0, 0x7180
    ctx->pc = 0x36df64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29056));
    // 0x36df68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36df68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7180u));
    // 0x36df6c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36DF6Cu;
    {
        const bool branch_taken_0x36df6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF6Cu;
        // 0x36df70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36df6c) {
            ctx->pc = 0x36DF94u;
            goto label_36df94;
        }
    }
    ctx->pc = 0x36DF74u;
    // 0x36df74: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36DF74u;
    SET_GPR_U32(ctx, 31, 0x36DF7Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36DF74u, 0x36DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF7Cu;
label_36df7c:
    // 0x36df7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36df80: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36df80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36df84: 0x24a5f9d8  addiu       $a1, $a1, -0x628
    ctx->pc = 0x36df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965720));
    // 0x36df88: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36df88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36df8c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36DF8Cu;
    SET_GPR_U32(ctx, 31, 0x36DF94u);
    ctx->pc = 0x36DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DF8Cu;
    // 0x36df90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36DF8Cu, 0x36DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF94u;
label_36df94:
    // 0x36df94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36df94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36df98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36df9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFA0u;
        // 0x36dfa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFA8u;
    // 0x36dfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFA8u;
        // 0x36dfac: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFB0u;
}
