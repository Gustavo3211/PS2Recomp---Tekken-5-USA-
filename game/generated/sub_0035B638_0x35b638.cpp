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

// Function: sub_0035B638
// Address: 0x35b638 - 0x35b680
void sub_0035B638_0x35b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B638_0x35b638");
#endif

    switch (ctx->pc) {
        case 0x35b668u: goto label_35b668;
        default: break;
    }

    ctx->pc = 0x35b638u;

label_35b638:
    // 0x35b638: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b63c: 0x24631320  addiu       $v1, $v1, 0x1320
    ctx->pc = 0x35b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
    // 0x35b640: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x35b640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D1338u));
    // 0x35b644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35b64c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B64Cu;
        // 0x35b650: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B654u;
    // 0x35b654: 0x0  nop
    ctx->pc = 0x35b654u;
    // NOP
    // 0x35b658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b660: 0xc0d6d8e  jal         func_35B638
    ctx->pc = 0x35B660u;
    SET_GPR_U32(ctx, 31, 0x35B668u);
    ctx->pc = 0x35B638u;
    goto label_35b638;
    ctx->pc = 0x35B668u;
label_35b668:
    // 0x35b668: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b670: 0x8c641334  lw          $a0, 0x1334($v1)
    ctx->pc = 0x35b670u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35b674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b678: 0x3e00008  jr          $ra
    ctx->pc = 0x35B678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B678u;
        // 0x35b67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B680u;
}
