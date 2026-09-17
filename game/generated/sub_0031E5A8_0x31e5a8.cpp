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

// Function: sub_0031E5A8
// Address: 0x31e5a8 - 0x31e5d8
void sub_0031E5A8_0x31e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E5A8_0x31e5a8");
#endif

    switch (ctx->pc) {
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        default: break;
    }

    ctx->pc = 0x31e5a8u;

label_31e5a8:
    // 0x31e5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e5ac:
    // 0x31e5ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e5b0:
    // 0x31e5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e5b4:
    // 0x31e5b4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x31e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_31e5b8:
    // 0x31e5b8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x31e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31e5bc:
    // 0x31e5bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31e5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e5c0:
    // 0x31e5c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e5c4:
    // 0x31e5c4: 0x60f809  jalr        $v1
label_31e5c8:
    if (ctx->pc == 0x31E5C8u) {
        ctx->pc = 0x31E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5C4u;
        // 0x31e5c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5CCu;
        goto label_31e5cc;
    }
    ctx->pc = 0x31E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31E5CCu);
        ctx->pc = 0x31E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5C4u;
        // 0x31e5c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5C4u, 0x31E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E5CCu;
label_31e5cc:
    // 0x31e5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e5d0:
    // 0x31e5d0: 0x3e00008  jr          $ra
label_31e5d4:
    if (ctx->pc == 0x31E5D4u) {
        ctx->pc = 0x31E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5D0u;
        // 0x31e5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5D8u;
        goto label_fallthrough_0x31e5d0;
    }
    ctx->pc = 0x31E5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5D0u;
        // 0x31e5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e5d0:
    ctx->pc = 0x31E5D8u;
}
