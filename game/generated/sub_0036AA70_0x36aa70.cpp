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

// Function: sub_0036AA70
// Address: 0x36aa70 - 0x36aac0
void sub_0036AA70_0x36aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AA70_0x36aa70");
#endif

    switch (ctx->pc) {
        case 0x36aa94u: goto label_36aa94;
        case 0x36aaacu: goto label_36aaac;
        default: break;
    }

    ctx->pc = 0x36aa70u;

    // 0x36aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36aa74: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36aa78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36aa7c: 0x24506d78  addiu       $s0, $v0, 0x6D78
    ctx->pc = 0x36aa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28024));
    // 0x36aa80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D78u));
    // 0x36aa84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AA84u;
    {
        const bool branch_taken_0x36aa84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA84u;
        // 0x36aa88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa84) {
            ctx->pc = 0x36AAACu;
            goto label_36aaac;
        }
    }
    ctx->pc = 0x36AA8Cu;
    // 0x36aa8c: 0xc0daa58  jal         func_36A960
    ctx->pc = 0x36AA8Cu;
    SET_GPR_U32(ctx, 31, 0x36AA94u);
    ctx->pc = 0x36A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A960u, 0x36AA8Cu, 0x36AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA94u;
label_36aa94:
    // 0x36aa94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36aa98: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36aa9c: 0x24a598c0  addiu       $a1, $a1, -0x6740
    ctx->pc = 0x36aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940864));
    // 0x36aaa0: 0x24c66d68  addiu       $a2, $a2, 0x6D68
    ctx->pc = 0x36aaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28008));
    // 0x36aaa4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AAA4u;
    SET_GPR_U32(ctx, 31, 0x36AAACu);
    ctx->pc = 0x36AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAA4u;
    // 0x36aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AAA4u, 0x36AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAACu;
label_36aaac:
    // 0x36aaac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36aaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36aab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36aab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x36AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAB8u;
        // 0x36aabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AAC0u;
}
