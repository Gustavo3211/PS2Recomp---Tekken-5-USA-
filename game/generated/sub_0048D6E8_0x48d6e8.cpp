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

// Function: sub_0048D6E8
// Address: 0x48d6e8 - 0x48d728
void sub_0048D6E8_0x48d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D6E8_0x48d6e8");
#endif

    switch (ctx->pc) {
        case 0x48d704u: goto label_48d704;
        default: break;
    }

    ctx->pc = 0x48d6e8u;

    // 0x48d6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48d6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48d6f0: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x48d6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48d6f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D6F4u;
    {
        const bool branch_taken_0x48d6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D6F4u;
        // 0x48d6f8: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d6f4) {
            ctx->pc = 0x48D718u;
            goto label_48d718;
        }
    }
    ctx->pc = 0x48D6FCu;
    // 0x48d6fc: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x48D6FCu;
    SET_GPR_U32(ctx, 31, 0x48D704u);
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x48D6FCu, 0x48D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D704u;
label_48d704:
    // 0x48d704: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x48d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x48d708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d70c: 0x812413e  j           func_4904F8
    ctx->pc = 0x48D70Cu;
    ctx->pc = 0x48D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D70Cu;
    // 0x48d710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    sub_004904F8_0x4904f8(rdram, ctx, runtime); return;
    ctx->pc = 0x48D714u;
    // 0x48d714: 0x0  nop
    ctx->pc = 0x48d714u;
    // NOP
label_48d718:
    // 0x48d718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x48D71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D71Cu;
        // 0x48d720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D724u;
    // 0x48d724: 0x0  nop
    ctx->pc = 0x48d724u;
    // NOP
    ctx->pc = 0x48d728u;
}
