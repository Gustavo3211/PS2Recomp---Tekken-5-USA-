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

// Function: sub_00341A48
// Address: 0x341a48 - 0x341aa0
void sub_00341A48_0x341a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341A48_0x341a48");
#endif

    ctx->pc = 0x341a48u;

    // 0x341a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341a4c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341a54: 0x24a51a68  addiu       $a1, $a1, 0x1A68
    ctx->pc = 0x341a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6760));
    // 0x341a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341a5c: 0x80d04d6  j           func_341358
    ctx->pc = 0x341A5Cu;
    ctx->pc = 0x341A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A5Cu;
    // 0x341a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341A5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341A64u;
    // 0x341a64: 0x0  nop
    ctx->pc = 0x341a64u;
    // NOP
    // 0x341a68: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x341a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x341a6c: 0x30467fff  andi        $a2, $v0, 0x7FFF
    ctx->pc = 0x341a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x341a70: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x341a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x341a74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341A74u;
    {
        const bool branch_taken_0x341a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a74) {
            ctx->pc = 0x341A98u;
            goto label_341a98;
        }
    }
    ctx->pc = 0x341A7Cu;
    // 0x341a7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x341a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x341a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x341a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341a88: 0xa4a60016  sh          $a2, 0x16($a1)
    ctx->pc = 0x341a88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x341a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x341A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341A94u;
    // 0x341a94: 0x0  nop
    ctx->pc = 0x341a94u;
    // NOP
label_341a98:
    // 0x341a98: 0x3e00008  jr          $ra
    ctx->pc = 0x341A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A98u;
        // 0x341a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341AA0u;
}
