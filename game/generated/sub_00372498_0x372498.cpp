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

// Function: sub_00372498
// Address: 0x372498 - 0x3724e8
void sub_00372498_0x372498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372498_0x372498");
#endif

    switch (ctx->pc) {
        case 0x3724bcu: goto label_3724bc;
        case 0x3724d4u: goto label_3724d4;
        default: break;
    }

    ctx->pc = 0x372498u;

    // 0x372498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37249c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3724a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3724a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3724a4: 0x24507640  addiu       $s0, $v0, 0x7640
    ctx->pc = 0x3724a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30272));
    // 0x3724a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3724a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7640u));
    // 0x3724ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3724ACu;
    {
        const bool branch_taken_0x3724ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724ACu;
        // 0x3724b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3724ac) {
            ctx->pc = 0x3724D4u;
            goto label_3724d4;
        }
    }
    ctx->pc = 0x3724B4u;
    // 0x3724b4: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x3724B4u;
    SET_GPR_U32(ctx, 31, 0x3724BCu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x3724B4u, 0x3724BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724BCu;
label_3724bc:
    // 0x3724bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3724bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3724c0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3724c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3724c4: 0x24a51328  addiu       $a1, $a1, 0x1328
    ctx->pc = 0x3724c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4904));
    // 0x3724c8: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x3724c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x3724cc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3724CCu;
    SET_GPR_U32(ctx, 31, 0x3724D4u);
    ctx->pc = 0x3724D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3724CCu;
    // 0x3724d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3724CCu, 0x3724D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3724D4u;
label_3724d4:
    // 0x3724d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3724d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3724d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3724dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3724dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3724e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3724E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3724E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3724E0u;
        // 0x3724e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3724E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3724E8u;
}
