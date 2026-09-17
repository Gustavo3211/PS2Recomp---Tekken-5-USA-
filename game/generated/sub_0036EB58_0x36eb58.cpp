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

// Function: sub_0036EB58
// Address: 0x36eb58 - 0x36ebc0
void sub_0036EB58_0x36eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB58_0x36eb58");
#endif

    switch (ctx->pc) {
        case 0x36eb7cu: goto label_36eb7c;
        case 0x36eb94u: goto label_36eb94;
        default: break;
    }

    ctx->pc = 0x36eb58u;

    // 0x36eb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36eb5c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36eb60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36eb64: 0x24507230  addiu       $s0, $v0, 0x7230
    ctx->pc = 0x36eb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
    // 0x36eb68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7230u));
    // 0x36eb6c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EB6Cu;
    {
        const bool branch_taken_0x36eb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB6Cu;
        // 0x36eb70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb6c) {
            ctx->pc = 0x36EB94u;
            goto label_36eb94;
        }
    }
    ctx->pc = 0x36EB74u;
    // 0x36eb74: 0xc0dbc5a  jal         func_36F168
    ctx->pc = 0x36EB74u;
    SET_GPR_U32(ctx, 31, 0x36EB7Cu);
    ctx->pc = 0x36F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F168u, 0x36EB74u, 0x36EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB7Cu;
label_36eb7c:
    // 0x36eb7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36eb80: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36eb84: 0x24a5fc98  addiu       $a1, $a1, -0x368
    ctx->pc = 0x36eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966424));
    // 0x36eb88: 0x24c67250  addiu       $a2, $a2, 0x7250
    ctx->pc = 0x36eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29264));
    // 0x36eb8c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36EB8Cu;
    SET_GPR_U32(ctx, 31, 0x36EB94u);
    ctx->pc = 0x36EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB8Cu;
    // 0x36eb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36EB8Cu, 0x36EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB94u;
label_36eb94:
    // 0x36eb94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36eb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36eb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x36EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBA0u;
        // 0x36eba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EBA8u;
    // 0x36eba8: 0x3e00008  jr          $ra
    ctx->pc = 0x36EBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBA8u;
        // 0x36ebac: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EBB0u;
    // 0x36ebb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36EBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBB0u;
        // 0x36ebb4: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EBB8u;
    // 0x36ebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x36EBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBB8u;
        // 0x36ebbc: 0x24820074  addiu       $v0, $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EBC0u;
}
