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

// Function: sub_0036D990
// Address: 0x36d990 - 0x36d9e0
void sub_0036D990_0x36d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D990_0x36d990");
#endif

    switch (ctx->pc) {
        case 0x36d9b4u: goto label_36d9b4;
        case 0x36d9ccu: goto label_36d9cc;
        default: break;
    }

    ctx->pc = 0x36d990u;

    // 0x36d990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d994: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36d998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d99c: 0x24507140  addiu       $s0, $v0, 0x7140
    ctx->pc = 0x36d99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28992));
    // 0x36d9a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7140u));
    // 0x36d9a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D9A4u;
    {
        const bool branch_taken_0x36d9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9A4u;
        // 0x36d9a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d9a4) {
            ctx->pc = 0x36D9CCu;
            goto label_36d9cc;
        }
    }
    ctx->pc = 0x36D9ACu;
    // 0x36d9ac: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36D9ACu;
    SET_GPR_U32(ctx, 31, 0x36D9B4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36D9ACu, 0x36D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9B4u;
label_36d9b4:
    // 0x36d9b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36d9b8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36d9bc: 0x24a5ed70  addiu       $a1, $a1, -0x1290
    ctx->pc = 0x36d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962544));
    // 0x36d9c0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36d9c4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36D9C4u;
    SET_GPR_U32(ctx, 31, 0x36D9CCu);
    ctx->pc = 0x36D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9C4u;
    // 0x36d9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36D9C4u, 0x36D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9CCu;
label_36d9cc:
    // 0x36d9cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d9d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9D8u;
        // 0x36d9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D9E0u;
}
