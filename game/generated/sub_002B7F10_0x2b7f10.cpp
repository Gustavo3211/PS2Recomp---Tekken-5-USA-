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

// Function: sub_002B7F10
// Address: 0x2b7f10 - 0x2b7f58
void sub_002B7F10_0x2b7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7F10_0x2b7f10");
#endif

    switch (ctx->pc) {
        case 0x2b7f48u: goto label_2b7f48;
        default: break;
    }

    ctx->pc = 0x2b7f10u;

    // 0x2b7f10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b7f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7f18: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2b7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b7f1c: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x2b7f1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7f24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7F24u;
    {
        const bool branch_taken_0x2b7f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F24u;
        // 0x2b7f28: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f24) {
            ctx->pc = 0x2B7F48u;
            goto label_2b7f48;
        }
    }
    ctx->pc = 0x2B7F2Cu;
    // 0x2b7f2c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7f30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7f34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7f38: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7f3c: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7f40: 0xc0ae1ac  jal         func_2B86B0
    ctx->pc = 0x2B7F40u;
    SET_GPR_U32(ctx, 31, 0x2B7F48u);
    ctx->pc = 0x2B7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F40u;
    // 0x2b7f44: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B86B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B86B0u, 0x2B7F40u, 0x2B7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F48u;
label_2b7f48:
    // 0x2b7f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F4Cu;
        // 0x2b7f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F54u;
    // 0x2b7f54: 0x0  nop
    ctx->pc = 0x2b7f54u;
    // NOP
    ctx->pc = 0x2b7f58u;
}
