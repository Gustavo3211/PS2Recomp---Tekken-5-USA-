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

// Function: sub_00369C98
// Address: 0x369c98 - 0x369ce8
void sub_00369C98_0x369c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369C98_0x369c98");
#endif

    switch (ctx->pc) {
        case 0x369cbcu: goto label_369cbc;
        case 0x369cd4u: goto label_369cd4;
        default: break;
    }

    ctx->pc = 0x369c98u;

    // 0x369c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369c9c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369ca4: 0x24506c48  addiu       $s0, $v0, 0x6C48
    ctx->pc = 0x369ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27720));
    // 0x369ca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C48u));
    // 0x369cac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369CACu;
    {
        const bool branch_taken_0x369cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CACu;
        // 0x369cb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369cac) {
            ctx->pc = 0x369CD4u;
            goto label_369cd4;
        }
    }
    ctx->pc = 0x369CB4u;
    // 0x369cb4: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x369CB4u;
    SET_GPR_U32(ctx, 31, 0x369CBCu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x369CB4u, 0x369CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369CBCu;
label_369cbc:
    // 0x369cbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369cc0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x369cc4: 0x24a55b38  addiu       $a1, $a1, 0x5B38
    ctx->pc = 0x369cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23352));
    // 0x369cc8: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x369cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x369ccc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369CCCu;
    SET_GPR_U32(ctx, 31, 0x369CD4u);
    ctx->pc = 0x369CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369CCCu;
    // 0x369cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369CCCu, 0x369CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369CD4u;
label_369cd4:
    // 0x369cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369cdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x369CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CE0u;
        // 0x369ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369CE8u;
}
