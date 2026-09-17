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

// Function: sub_00294B08
// Address: 0x294b08 - 0x294b48
void sub_00294B08_0x294b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B08_0x294b08");
#endif

    switch (ctx->pc) {
        case 0x294b38u: goto label_294b38;
        default: break;
    }

    ctx->pc = 0x294b08u;

    // 0x294b08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x294b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b0c: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x294b0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x294b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b14: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x294b14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x294b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x294b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294b20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x294b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x294b24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x294b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294b28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294B28u;
    {
        const bool branch_taken_0x294b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B28u;
        // 0x294b2c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b28) {
            ctx->pc = 0x294B38u;
            goto label_294b38;
        }
    }
    ctx->pc = 0x294B30u;
    // 0x294b30: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x294B30u;
    SET_GPR_U32(ctx, 31, 0x294B38u);
    ctx->pc = 0x294B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B30u;
    // 0x294b34: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x294B30u, 0x294B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B38u;
label_294b38:
    // 0x294b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x294B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B3Cu;
        // 0x294b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B44u;
    // 0x294b44: 0x0  nop
    ctx->pc = 0x294b44u;
    // NOP
    ctx->pc = 0x294b48u;
}
