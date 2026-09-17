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

// Function: sub_00130B70
// Address: 0x130b70 - 0x130bc0
void sub_00130B70_0x130b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130B70_0x130b70");
#endif

    switch (ctx->pc) {
        case 0x130b94u: goto label_130b94;
        case 0x130bacu: goto label_130bac;
        default: break;
    }

    ctx->pc = 0x130b70u;

    // 0x130b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130b74: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x130b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130b7c: 0x24500140  addiu       $s0, $v0, 0x140
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x130b80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0140u));
    // 0x130b84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130B84u;
    {
        const bool branch_taken_0x130b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B84u;
        // 0x130b88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b84) {
            ctx->pc = 0x130BACu;
            goto label_130bac;
        }
    }
    ctx->pc = 0x130B8Cu;
    // 0x130b8c: 0xc04c2f8  jal         func_130BE0
    ctx->pc = 0x130B8Cu;
    SET_GPR_U32(ctx, 31, 0x130B94u);
    ctx->pc = 0x130BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BE0u, 0x130B8Cu, 0x130B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B94u;
label_130b94:
    // 0x130b94: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130b98: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x130b9c: 0x24a5f4b0  addiu       $a1, $a1, -0xB50
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964400));
    // 0x130ba0: 0x24c65570  addiu       $a2, $a2, 0x5570
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21872));
    // 0x130ba4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130BA4u;
    SET_GPR_U32(ctx, 31, 0x130BACu);
    ctx->pc = 0x130BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BA4u;
    // 0x130ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130BA4u, 0x130BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BACu;
label_130bac:
    // 0x130bac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130bb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x130BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BB8u;
        // 0x130bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130BC0u;
}
