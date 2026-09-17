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

// Function: sub_00294F18
// Address: 0x294f18 - 0x294f58
void sub_00294F18_0x294f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294F18_0x294f18");
#endif

    switch (ctx->pc) {
        case 0x294f48u: goto label_294f48;
        default: break;
    }

    ctx->pc = 0x294f18u;

    // 0x294f18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294f1c: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294f1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294f28: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294F28u;
    {
        const bool branch_taken_0x294f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F28u;
        // 0x294f2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f28) {
            ctx->pc = 0x294F48u;
            goto label_294f48;
        }
    }
    ctx->pc = 0x294F30u;
    // 0x294f30: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x294f34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x294F34u;
    {
        const bool branch_taken_0x294f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f34) {
            ctx->pc = 0x294F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F34u;
            // 0x294f38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F4Cu;
            goto label_294f4c;
        }
    }
    ctx->pc = 0x294F3Cu;
    // 0x294f3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294f40: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x294F40u;
    SET_GPR_U32(ctx, 31, 0x294F48u);
    ctx->pc = 0x294F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294F40u;
    // 0x294f44: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x294F40u, 0x294F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F48u;
label_294f48:
    // 0x294f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294f4c:
    // 0x294f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x294F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F4Cu;
        // 0x294f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F54u;
    // 0x294f54: 0x0  nop
    ctx->pc = 0x294f54u;
    // NOP
    ctx->pc = 0x294f58u;
}
