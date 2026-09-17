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

// Function: sub_002DE790
// Address: 0x2de790 - 0x2de7d8
void sub_002DE790_0x2de790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE790_0x2de790");
#endif

    switch (ctx->pc) {
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        case 0x2de7a0u: goto label_2de7a0;
        case 0x2de7a4u: goto label_2de7a4;
        case 0x2de7a8u: goto label_2de7a8;
        case 0x2de7acu: goto label_2de7ac;
        case 0x2de7b0u: goto label_2de7b0;
        case 0x2de7b4u: goto label_2de7b4;
        case 0x2de7b8u: goto label_2de7b8;
        case 0x2de7bcu: goto label_2de7bc;
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        default: break;
    }

    ctx->pc = 0x2de790u;

label_2de790:
    // 0x2de790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2de794:
    // 0x2de794: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2de794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de798:
    // 0x2de798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2de79c:
    // 0x2de79c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2de79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2de7a0:
    // 0x2de7a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2de7a4:
    if (ctx->pc == 0x2DE7A4u) {
        ctx->pc = 0x2DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A0u;
        // 0x2de7a4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7A8u;
        goto label_2de7a8;
    }
    ctx->pc = 0x2DE7A0u;
    {
        const bool branch_taken_0x2de7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7a0) {
            ctx->pc = 0x2DE7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE7A0u;
            // 0x2de7a4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE7B8u;
            goto label_2de7b8;
        }
    }
    ctx->pc = 0x2DE7A8u;
label_2de7a8:
    // 0x2de7a8: 0x40f809  jalr        $v0
label_2de7ac:
    if (ctx->pc == 0x2DE7ACu) {
        ctx->pc = 0x2DE7B0u;
        goto label_2de7b0;
    }
    ctx->pc = 0x2DE7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE7B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7A8u, 0x2DE7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE7B0u;
label_2de7b0:
    // 0x2de7b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de7b4:
    if (ctx->pc == 0x2DE7B4u) {
        ctx->pc = 0x2DE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B0u;
        // 0x2de7b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7B8u;
        goto label_2de7b8;
    }
    ctx->pc = 0x2DE7B0u;
    {
        const bool branch_taken_0x2de7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B0u;
        // 0x2de7b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7b0) {
            ctx->pc = 0x2DE7D0u;
            goto label_2de7d0;
        }
    }
    ctx->pc = 0x2DE7B8u;
label_2de7b8:
    // 0x2de7b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2de7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2de7bc:
    // 0x2de7bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2de7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2de7c0:
    // 0x2de7c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2de7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2de7c4:
    // 0x2de7c4: 0x40f809  jalr        $v0
label_2de7c8:
    if (ctx->pc == 0x2DE7C8u) {
        ctx->pc = 0x2DE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7C4u;
        // 0x2de7c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7CCu;
        goto label_2de7cc;
    }
    ctx->pc = 0x2DE7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE7CCu);
        ctx->pc = 0x2DE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7C4u;
        // 0x2de7c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7C4u, 0x2DE7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE7CCu;
label_2de7cc:
    // 0x2de7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de7d0:
    // 0x2de7d0: 0x3e00008  jr          $ra
label_2de7d4:
    if (ctx->pc == 0x2DE7D4u) {
        ctx->pc = 0x2DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7D0u;
        // 0x2de7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7D8u;
        goto label_fallthrough_0x2de7d0;
    }
    ctx->pc = 0x2DE7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7D0u;
        // 0x2de7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de7d0:
    ctx->pc = 0x2DE7D8u;
}
