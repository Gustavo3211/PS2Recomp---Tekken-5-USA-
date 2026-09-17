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

// Function: sub_00369E68
// Address: 0x369e68 - 0x369eb8
void sub_00369E68_0x369e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369E68_0x369e68");
#endif

    switch (ctx->pc) {
        case 0x369e8cu: goto label_369e8c;
        case 0x369ea4u: goto label_369ea4;
        default: break;
    }

    ctx->pc = 0x369e68u;

    // 0x369e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369e6c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369e74: 0x24506c68  addiu       $s0, $v0, 0x6C68
    ctx->pc = 0x369e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27752));
    // 0x369e78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369e78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C68u));
    // 0x369e7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369E7Cu;
    {
        const bool branch_taken_0x369e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E7Cu;
        // 0x369e80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e7c) {
            ctx->pc = 0x369EA4u;
            goto label_369ea4;
        }
    }
    ctx->pc = 0x369E84u;
    // 0x369e84: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x369E84u;
    SET_GPR_U32(ctx, 31, 0x369E8Cu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x369E84u, 0x369E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E8Cu;
label_369e8c:
    // 0x369e8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369e90: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x369e94: 0x24a56818  addiu       $a1, $a1, 0x6818
    ctx->pc = 0x369e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26648));
    // 0x369e98: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x369e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x369e9c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369E9Cu;
    SET_GPR_U32(ctx, 31, 0x369EA4u);
    ctx->pc = 0x369EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E9Cu;
    // 0x369ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369E9Cu, 0x369EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EA4u;
label_369ea4:
    // 0x369ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369eac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x369EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EB0u;
        // 0x369eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369EB8u;
}
