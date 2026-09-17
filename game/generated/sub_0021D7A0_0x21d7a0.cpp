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

// Function: sub_0021D7A0
// Address: 0x21d7a0 - 0x21d7d8
void sub_0021D7A0_0x21d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D7A0_0x21d7a0");
#endif

    switch (ctx->pc) {
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7a4u: goto label_21d7a4;
        case 0x21d7a8u: goto label_21d7a8;
        case 0x21d7acu: goto label_21d7ac;
        case 0x21d7b0u: goto label_21d7b0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7b8u: goto label_21d7b8;
        case 0x21d7bcu: goto label_21d7bc;
        case 0x21d7c0u: goto label_21d7c0;
        case 0x21d7c4u: goto label_21d7c4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7ccu: goto label_21d7cc;
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d7d4u: goto label_21d7d4;
        default: break;
    }

    ctx->pc = 0x21d7a0u;

label_21d7a0:
    // 0x21d7a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_21d7a4:
    // 0x21d7a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21d7a8:
    // 0x21d7a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21d7ac:
    // 0x21d7ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d7b0:
    // 0x21d7b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21d7b4:
    // 0x21d7b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_21d7b8:
    // 0x21d7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21d7bc:
    // 0x21d7bc: 0x8c426ac8  lw          $v0, 0x6AC8($v0)
    ctx->pc = 0x21d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27336)));
label_21d7c0:
    // 0x21d7c0: 0x40f809  jalr        $v0
label_21d7c4:
    if (ctx->pc == 0x21D7C4u) {
        ctx->pc = 0x21D7C8u;
        goto label_21d7c8;
    }
    ctx->pc = 0x21D7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D7C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7C0u, 0x21D7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D7C8u;
label_21d7c8:
    // 0x21d7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d7cc:
    // 0x21d7cc: 0x3e00008  jr          $ra
label_21d7d0:
    if (ctx->pc == 0x21D7D0u) {
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7CCu;
        // 0x21d7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7D4u;
        goto label_21d7d4;
    }
    ctx->pc = 0x21D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7CCu;
        // 0x21d7d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D7D4u;
label_21d7d4:
    // 0x21d7d4: 0x0  nop
    ctx->pc = 0x21d7d4u;
    // NOP
    ctx->pc = 0x21d7d8u;
}
