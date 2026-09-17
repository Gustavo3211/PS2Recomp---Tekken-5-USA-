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

// Function: sub_00341AA0
// Address: 0x341aa0 - 0x341af0
void sub_00341AA0_0x341aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341AA0_0x341aa0");
#endif

    ctx->pc = 0x341aa0u;

    // 0x341aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341aa4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341aac: 0x24a51ac0  addiu       $a1, $a1, 0x1AC0
    ctx->pc = 0x341aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6848));
    // 0x341ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341ab4: 0x80d04d6  j           func_341358
    ctx->pc = 0x341AB4u;
    ctx->pc = 0x341AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341AB4u;
    // 0x341ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341AB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341ABCu;
    // 0x341abc: 0x0  nop
    ctx->pc = 0x341abcu;
    // NOP
    // 0x341ac0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x341ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341ac8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x341ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x341acc: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x341accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x341ad0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x341ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x341ad4: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x341ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x341ad8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x341ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x341adc: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x341adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x341ae0: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x341ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x341ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x341AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AE4u;
        // 0x341ae8: 0xaca70010  sw          $a3, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341AECu;
    // 0x341aec: 0x0  nop
    ctx->pc = 0x341aecu;
    // NOP
    ctx->pc = 0x341af0u;
}
