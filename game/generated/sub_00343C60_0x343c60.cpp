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

// Function: sub_00343C60
// Address: 0x343c60 - 0x343cb8
void sub_00343C60_0x343c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343C60_0x343c60");
#endif

    switch (ctx->pc) {
        case 0x343c74u: goto label_343c74;
        case 0x343c84u: goto label_343c84;
        case 0x343c8cu: goto label_343c8c;
        default: break;
    }

    ctx->pc = 0x343c60u;

    // 0x343c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x343c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x343c6c: 0xc0d0ede  jal         func_343B78
    ctx->pc = 0x343C6Cu;
    SET_GPR_U32(ctx, 31, 0x343C74u);
    ctx->pc = 0x343C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C6Cu;
    // 0x343c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343B78u, 0x343C6Cu, 0x343C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C74u;
label_343c74:
    // 0x343c74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x343C74u;
    {
        const bool branch_taken_0x343c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C74u;
        // 0x343c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c74) {
            ctx->pc = 0x343CA4u;
            goto label_343ca4;
        }
    }
    ctx->pc = 0x343C7Cu;
    // 0x343c7c: 0xc0d0fcc  jal         func_343F30
    ctx->pc = 0x343C7Cu;
    SET_GPR_U32(ctx, 31, 0x343C84u);
    ctx->pc = 0x343F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343F30u, 0x343C7Cu, 0x343C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C84u;
label_343c84:
    // 0x343c84: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x343C84u;
    SET_GPR_U32(ctx, 31, 0x343C8Cu);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x343C84u, 0x343C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C8Cu;
label_343c8c:
    // 0x343c8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x343c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343c90: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x343c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x343c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c98: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x343c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x343c9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x343c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x343ca0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x343ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_343ca4:
    // 0x343ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343ca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x343ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343cac: 0x3e00008  jr          $ra
    ctx->pc = 0x343CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CACu;
        // 0x343cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343CB4u;
    // 0x343cb4: 0x0  nop
    ctx->pc = 0x343cb4u;
    // NOP
    ctx->pc = 0x343cb8u;
}
