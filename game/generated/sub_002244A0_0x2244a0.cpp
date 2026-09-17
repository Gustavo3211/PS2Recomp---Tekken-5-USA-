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

// Function: sub_002244A0
// Address: 0x2244a0 - 0x2244d8
void sub_002244A0_0x2244a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002244A0_0x2244a0");
#endif

    switch (ctx->pc) {
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        default: break;
    }

    ctx->pc = 0x2244a0u;

label_2244a0:
    // 0x2244a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2244a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2244a4:
    // 0x2244a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2244a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2244a8:
    // 0x2244a8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2244ac:
    // 0x2244ac: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2244b0:
    // 0x2244b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2244b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2244b4:
    // 0x2244b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2244b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2244b8:
    // 0x2244b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2244b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2244bc:
    // 0x2244bc: 0x8c427080  lw          $v0, 0x7080($v0)
    ctx->pc = 0x2244bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28800)));
label_2244c0:
    // 0x2244c0: 0x40f809  jalr        $v0
label_2244c4:
    if (ctx->pc == 0x2244C4u) {
        ctx->pc = 0x2244C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244C0u;
        // 0x2244c4: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244C8u;
        goto label_2244c8;
    }
    ctx->pc = 0x2244C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2244C8u);
        ctx->pc = 0x2244C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244C0u;
        // 0x2244c4: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2244C0u, 0x2244C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2244C8u;
label_2244c8:
    // 0x2244c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2244c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2244cc:
    // 0x2244cc: 0x3e00008  jr          $ra
label_2244d0:
    if (ctx->pc == 0x2244D0u) {
        ctx->pc = 0x2244D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244CCu;
        // 0x2244d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244D4u;
        goto label_2244d4;
    }
    ctx->pc = 0x2244CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2244D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244CCu;
        // 0x2244d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2244CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2244D4u;
label_2244d4:
    // 0x2244d4: 0x0  nop
    ctx->pc = 0x2244d4u;
    // NOP
    ctx->pc = 0x2244d8u;
}
