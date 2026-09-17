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

// Function: sub_00345758
// Address: 0x345758 - 0x345790
void sub_00345758_0x345758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345758_0x345758");
#endif

    ctx->pc = 0x345758u;

    // 0x345758: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x345758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x34575c: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x345760: 0x429c2  srl         $a1, $a0, 7
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x345764: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345768: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x345768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34576c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345770: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x345770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x345774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x345774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x345778: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x345778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34577c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x345780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x345780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345784: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x345788: 0x3e00008  jr          $ra
    ctx->pc = 0x345788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345788u;
        // 0x34578c: 0x24429b82  addiu       $v0, $v0, -0x647E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941570));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345790u;
}
