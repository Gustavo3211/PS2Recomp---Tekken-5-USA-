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

// Function: sub_0036AB80
// Address: 0x36ab80 - 0x36abd0
void sub_0036AB80_0x36ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AB80_0x36ab80");
#endif

    switch (ctx->pc) {
        case 0x36aba4u: goto label_36aba4;
        case 0x36abb8u: goto label_36abb8;
        default: break;
    }

    ctx->pc = 0x36ab80u;

    // 0x36ab80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ab84: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ab88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ab8c: 0x24506d88  addiu       $s0, $v0, 0x6D88
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28040));
    // 0x36ab90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D88u));
    // 0x36ab94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36AB94u;
    {
        const bool branch_taken_0x36ab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB94u;
        // 0x36ab98: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab94) {
            ctx->pc = 0x36ABB8u;
            goto label_36abb8;
        }
    }
    ctx->pc = 0x36AB9Cu;
    // 0x36ab9c: 0xc0daa14  jal         func_36A850
    ctx->pc = 0x36AB9Cu;
    SET_GPR_U32(ctx, 31, 0x36ABA4u);
    ctx->pc = 0x36A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A850u, 0x36AB9Cu, 0x36ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABA4u;
label_36aba4:
    // 0x36aba4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36aba8: 0x24a59930  addiu       $a1, $a1, -0x66D0
    ctx->pc = 0x36aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
    // 0x36abac: 0x2786cc78  addiu       $a2, $gp, -0x3388
    ctx->pc = 0x36abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954104));
    // 0x36abb0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36ABB0u;
    SET_GPR_U32(ctx, 31, 0x36ABB8u);
    ctx->pc = 0x36ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABB0u;
    // 0x36abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36ABB0u, 0x36ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABB8u;
label_36abb8:
    // 0x36abb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36abb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36abbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36abc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABC4u;
        // 0x36abc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ABCCu;
    // 0x36abcc: 0x0  nop
    ctx->pc = 0x36abccu;
    // NOP
    ctx->pc = 0x36abd0u;
}
