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

// Function: sub_00309AB8
// Address: 0x309ab8 - 0x309af8
void sub_00309AB8_0x309ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309AB8_0x309ab8");
#endif

    ctx->pc = 0x309ab8u;

    // 0x309ab8: 0x9086037c  lbu         $a2, 0x37C($a0)
    ctx->pc = 0x309ab8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 892)));
    // 0x309abc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x309abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x309ac0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x309ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x309ac4: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x309ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x309ac8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x309ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x309acc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x309accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x309ad0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x309ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x309ad4: 0x8ca4036c  lw          $a0, 0x36C($a1)
    ctx->pc = 0x309ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x309ad8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x309ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x309adc: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x309adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x309ae0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x309ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x309ae4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x309ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309ae8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x309ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x309aec: 0xac83117c  sw          $v1, 0x117C($a0)
    ctx->pc = 0x309aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4476), GPR_U32(ctx, 3));
    // 0x309af0: 0x3e00008  jr          $ra
    ctx->pc = 0x309AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AF0u;
        // 0x309af4: 0xac821170  sw          $v0, 0x1170($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309AF8u;
}
