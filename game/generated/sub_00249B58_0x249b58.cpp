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

// Function: sub_00249B58
// Address: 0x249b58 - 0x249b80
void sub_00249B58_0x249b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249B58_0x249b58");
#endif

    switch (ctx->pc) {
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        default: break;
    }

    ctx->pc = 0x249b58u;

label_249b58:
    // 0x249b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249b5c:
    // 0x249b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249b60:
    // 0x249b60: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_249b64:
    // 0x249b64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_249b68:
    if (ctx->pc == 0x249B68u) {
        ctx->pc = 0x249B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B64u;
        // 0x249b68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B6Cu;
        goto label_249b6c;
    }
    ctx->pc = 0x249B64u;
    {
        const bool branch_taken_0x249b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b64) {
            ctx->pc = 0x249B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B64u;
            // 0x249b68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B78u;
            goto label_249b78;
        }
    }
    ctx->pc = 0x249B6Cu;
label_249b6c:
    // 0x249b6c: 0x40f809  jalr        $v0
label_249b70:
    if (ctx->pc == 0x249B70u) {
        ctx->pc = 0x249B74u;
        goto label_249b74;
    }
    ctx->pc = 0x249B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249B74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B6Cu, 0x249B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249B74u;
label_249b74:
    // 0x249b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249b78:
    // 0x249b78: 0x3e00008  jr          $ra
label_249b7c:
    if (ctx->pc == 0x249B7Cu) {
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B78u;
        // 0x249b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B80u;
        goto label_fallthrough_0x249b78;
    }
    ctx->pc = 0x249B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B78u;
        // 0x249b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249b78:
    ctx->pc = 0x249B80u;
}
