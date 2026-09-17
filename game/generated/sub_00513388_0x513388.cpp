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

// Function: sub_00513388
// Address: 0x513388 - 0x5133d0
void sub_00513388_0x513388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513388_0x513388");
#endif

    ctx->pc = 0x513388u;

    // 0x513388: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x513388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x51338c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x51338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x513390: 0x52c43  sra         $a1, $a1, 17
    ctx->pc = 0x513390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 17));
    // 0x513394: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x513394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x513398: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x513398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x51339c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x51339cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5133a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x5133a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x5133a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5133a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5133a8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x5133a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x5133ac: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x5133acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5133b0: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x5133b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5133b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x5133b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x5133b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5133b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5133bc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x5133bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x5133c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5133c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5133c4: 0x3e00008  jr          $ra
    ctx->pc = 0x5133C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5133C4u;
        // 0x5133c8: 0xc21024  and         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5133C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5133CCu;
    // 0x5133cc: 0x0  nop
    ctx->pc = 0x5133ccu;
    // NOP
    ctx->pc = 0x5133d0u;
}
