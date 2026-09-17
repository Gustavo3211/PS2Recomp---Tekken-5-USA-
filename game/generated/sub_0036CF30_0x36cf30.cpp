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

// Function: sub_0036CF30
// Address: 0x36cf30 - 0x36cf80
void sub_0036CF30_0x36cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CF30_0x36cf30");
#endif

    switch (ctx->pc) {
        case 0x36cf54u: goto label_36cf54;
        case 0x36cf6cu: goto label_36cf6c;
        default: break;
    }

    ctx->pc = 0x36cf30u;

    // 0x36cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cf34: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36cf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cf3c: 0x24507038  addiu       $s0, $v0, 0x7038
    ctx->pc = 0x36cf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28728));
    // 0x36cf40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7038u));
    // 0x36cf44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CF44u;
    {
        const bool branch_taken_0x36cf44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF44u;
        // 0x36cf48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cf44) {
            ctx->pc = 0x36CF6Cu;
            goto label_36cf6c;
        }
    }
    ctx->pc = 0x36CF4Cu;
    // 0x36cf4c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36CF4Cu;
    SET_GPR_U32(ctx, 31, 0x36CF54u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36CF4Cu, 0x36CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF54u;
label_36cf54:
    // 0x36cf54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36cf58: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36cf5c: 0x24a5df40  addiu       $a1, $a1, -0x20C0
    ctx->pc = 0x36cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    // 0x36cf60: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36cf64: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CF64u;
    SET_GPR_U32(ctx, 31, 0x36CF6Cu);
    ctx->pc = 0x36CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CF64u;
    // 0x36cf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CF64u, 0x36CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CF6Cu;
label_36cf6c:
    // 0x36cf6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36cf6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cf74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x36CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CF78u;
        // 0x36cf7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CF80u;
}
