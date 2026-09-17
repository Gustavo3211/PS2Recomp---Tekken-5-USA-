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

// Function: sub_00371E20
// Address: 0x371e20 - 0x371e60
void sub_00371E20_0x371e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371E20_0x371e20");
#endif

    switch (ctx->pc) {
        case 0x371e48u: goto label_371e48;
        default: break;
    }

    ctx->pc = 0x371e20u;

    // 0x371e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371e28: 0x2790cc90  addiu       $s0, $gp, -0x3370
    ctx->pc = 0x371e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x371e2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x371e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x371e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371E34u;
    {
        const bool branch_taken_0x371e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E34u;
        // 0x371e38: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e34) {
            ctx->pc = 0x371E48u;
            goto label_371e48;
        }
    }
    ctx->pc = 0x371E3Cu;
    // 0x371e3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371e40: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x371E40u;
    SET_GPR_U32(ctx, 31, 0x371E48u);
    ctx->pc = 0x371E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E40u;
    // 0x371e44: 0x24a50d38  addiu       $a1, $a1, 0xD38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x371E40u, 0x371E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E48u;
label_371e48:
    // 0x371e48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371e54: 0x3e00008  jr          $ra
    ctx->pc = 0x371E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E54u;
        // 0x371e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371E5Cu;
    // 0x371e5c: 0x0  nop
    ctx->pc = 0x371e5cu;
    // NOP
    ctx->pc = 0x371e60u;
}
