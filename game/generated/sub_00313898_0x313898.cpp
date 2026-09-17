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

// Function: sub_00313898
// Address: 0x313898 - 0x3138d0
void sub_00313898_0x313898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313898_0x313898");
#endif

    ctx->pc = 0x313898u;

    // 0x313898: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x31389c: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x31389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x3138a0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3138a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x3138a4: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1B8158u));
    // 0x3138a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3138ac: 0x64302b  sltu        $a2, $v1, $a0
    ctx->pc = 0x3138acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3138b0: 0x66200b  movn        $a0, $v1, $a2
    ctx->pc = 0x3138b0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3138b4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3138b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3138bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3138c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3138c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3138C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3138C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138C4u;
        // 0x3138c8: 0xac450010  sw          $a1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3138C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3138CCu;
    // 0x3138cc: 0x0  nop
    ctx->pc = 0x3138ccu;
    // NOP
    ctx->pc = 0x3138d0u;
}
