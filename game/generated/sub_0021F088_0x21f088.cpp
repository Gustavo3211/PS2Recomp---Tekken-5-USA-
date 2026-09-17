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

// Function: sub_0021F088
// Address: 0x21f088 - 0x21f0c0
void sub_0021F088_0x21f088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F088_0x21f088");
#endif

    ctx->pc = 0x21f088u;

    // 0x21f088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f090: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F090u;
    {
        const bool branch_taken_0x21f090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F090u;
        // 0x21f094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f090) {
            ctx->pc = 0x21F0B0u;
            goto label_21f0b0;
        }
    }
    ctx->pc = 0x21F098u;
    // 0x21f098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f09c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F09Cu;
    {
        const bool branch_taken_0x21f09c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F09Cu;
        // 0x21f0a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f09c) {
            ctx->pc = 0x21F0B4u;
            goto label_21f0b4;
        }
    }
    ctx->pc = 0x21F0A4u;
    // 0x21f0a4: 0x8087e98  j           func_21FA60
    ctx->pc = 0x21F0A4u;
    ctx->pc = 0x21F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0A4u;
    // 0x21f0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA60u, 0x21F0A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21F0ACu;
    // 0x21f0ac: 0x0  nop
    ctx->pc = 0x21f0acu;
    // NOP
label_21f0b0:
    // 0x21f0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f0b4:
    // 0x21f0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0B4u;
        // 0x21f0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F0BCu;
    // 0x21f0bc: 0x0  nop
    ctx->pc = 0x21f0bcu;
    // NOP
    ctx->pc = 0x21f0c0u;
}
