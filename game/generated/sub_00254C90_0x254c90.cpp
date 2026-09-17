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

// Function: sub_00254C90
// Address: 0x254c90 - 0x254cd0
void sub_00254C90_0x254c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254C90_0x254c90");
#endif

    switch (ctx->pc) {
        case 0x254cbcu: goto label_254cbc;
        default: break;
    }

    ctx->pc = 0x254c90u;

    // 0x254c90: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x254c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254c94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254c98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x254c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x254ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254ca4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x254ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ca8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x254ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254cac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254cb0: 0x2444007d  addiu       $a0, $v0, 0x7D
    ctx->pc = 0x254cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 125));
    // 0x254cb4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x254CB4u;
    SET_GPR_U32(ctx, 31, 0x254CBCu);
    ctx->pc = 0x254CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CB4u;
    // 0x254cb8: 0x1081c0  sll         $s0, $s0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x254CB4u, 0x254CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CBCu;
label_254cbc:
    // 0x254cbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x254cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x254CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CC8u;
        // 0x254ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254CD0u;
}
