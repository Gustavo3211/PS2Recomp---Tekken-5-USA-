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

// Function: sub_002BC198
// Address: 0x2bc198 - 0x2bc208
void sub_002BC198_0x2bc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC198_0x2bc198");
#endif

    switch (ctx->pc) {
        case 0x2bc1c8u: goto label_2bc1c8;
        case 0x2bc1f8u: goto label_2bc1f8;
        default: break;
    }

    ctx->pc = 0x2bc198u;

    // 0x2bc198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc19c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2bc19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc1a4: 0x24c40720  addiu       $a0, $a2, 0x720
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1824));
    // 0x2bc1a8: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x2bc1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2bc1ac: 0x8cc30894  lw          $v1, 0x894($a2)
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x2bc1b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2bc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bc1b4: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x2bc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x2bc1b8: 0x8cc30894  lw          $v1, 0x894($a2)
    ctx->pc = 0x2bc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x2bc1bc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x2bc1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2bc1c0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2bc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bc1c4: 0x0  nop
    ctx->pc = 0x2bc1c4u;
    // NOP
label_2bc1c8:
    // 0x2bc1c8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc1cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2bc1d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2bc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2bc1d4: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2bc1d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bc1d8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2bc1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2bc1dc: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2bc1dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bc1e0: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2bc1e4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2bc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2bc1e8: 0x1ce0fff7  bgtz        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BC1E8u;
    {
        const bool branch_taken_0x2bc1e8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2BC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1E8u;
        // 0x2bc1ec: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1e8) {
            ctx->pc = 0x2BC1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc1c8;
        }
    }
    ctx->pc = 0x2BC1F0u;
    // 0x2bc1f0: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x2BC1F0u;
    SET_GPR_U32(ctx, 31, 0x2BC1F8u);
    ctx->pc = 0x2BC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC1F0u;
    // 0x2bc1f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x2BC1F0u, 0x2BC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1F8u;
label_2bc1f8:
    // 0x2bc1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1FCu;
        // 0x2bc200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC204u;
    // 0x2bc204: 0x0  nop
    ctx->pc = 0x2bc204u;
    // NOP
    ctx->pc = 0x2bc208u;
}
