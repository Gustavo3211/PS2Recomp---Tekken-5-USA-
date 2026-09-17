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

// Function: sub_00513340
// Address: 0x513340 - 0x513388
void sub_00513340_0x513340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513340_0x513340");
#endif

    ctx->pc = 0x513340u;

    // 0x513340: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x513340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x513344: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x513344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x513348: 0x52c43  sra         $a1, $a1, 17
    ctx->pc = 0x513348u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 17));
    // 0x51334c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x51334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x513350: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x513350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x513354: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x513354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x513358: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x513358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x51335c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x51335cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x513360: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x513360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x513364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x513364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x513368: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x513368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x51336c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x51336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x513370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x513370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x513374: 0x42023  negu        $a0, $a0
    ctx->pc = 0x513374u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x513378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x513378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x51337c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x51337cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x513380: 0x3e00008  jr          $ra
    ctx->pc = 0x513380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513380u;
        // 0x513384: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513388u;
}
