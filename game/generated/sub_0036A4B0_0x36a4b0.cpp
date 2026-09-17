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

// Function: sub_0036A4B0
// Address: 0x36a4b0 - 0x36a4f8
void sub_0036A4B0_0x36a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A4B0_0x36a4b0");
#endif

    switch (ctx->pc) {
        case 0x36a4b0u: goto label_36a4b0;
        case 0x36a4b4u: goto label_36a4b4;
        case 0x36a4b8u: goto label_36a4b8;
        case 0x36a4bcu: goto label_36a4bc;
        case 0x36a4c0u: goto label_36a4c0;
        case 0x36a4c4u: goto label_36a4c4;
        case 0x36a4c8u: goto label_36a4c8;
        case 0x36a4ccu: goto label_36a4cc;
        case 0x36a4d0u: goto label_36a4d0;
        case 0x36a4d4u: goto label_36a4d4;
        case 0x36a4d8u: goto label_36a4d8;
        case 0x36a4dcu: goto label_36a4dc;
        case 0x36a4e0u: goto label_36a4e0;
        case 0x36a4e4u: goto label_36a4e4;
        case 0x36a4e8u: goto label_36a4e8;
        case 0x36a4ecu: goto label_36a4ec;
        case 0x36a4f0u: goto label_36a4f0;
        case 0x36a4f4u: goto label_36a4f4;
        default: break;
    }

    ctx->pc = 0x36a4b0u;

label_36a4b0:
    // 0x36a4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36a4b4:
    // 0x36a4b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36a4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36a4b8:
    // 0x36a4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36a4bc:
    // 0x36a4bc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x36a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36a4c0:
    // 0x36a4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36a4c4:
    // 0x36a4c4: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
label_36a4c8:
    if (ctx->pc == 0x36A4C8u) {
        ctx->pc = 0x36A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4C4u;
        // 0x36a4c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4CCu;
        goto label_36a4cc;
    }
    ctx->pc = 0x36A4C4u;
    {
        const bool branch_taken_0x36a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x36a4c4) {
            ctx->pc = 0x36A4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A4C4u;
            // 0x36a4c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A4F0u;
            goto label_36a4f0;
        }
    }
    ctx->pc = 0x36A4CCu;
label_36a4cc:
    // 0x36a4cc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x36a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_36a4d0:
    // 0x36a4d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x36a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_36a4d4:
    // 0x36a4d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36a4d8:
    // 0x36a4d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x36a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_36a4dc:
    // 0x36a4dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x36a4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_36a4e0:
    // 0x36a4e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x36a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36a4e4:
    // 0x36a4e4: 0x60f809  jalr        $v1
label_36a4e8:
    if (ctx->pc == 0x36A4E8u) {
        ctx->pc = 0x36A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4E4u;
        // 0x36a4e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4ECu;
        goto label_36a4ec;
    }
    ctx->pc = 0x36A4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36A4ECu);
        ctx->pc = 0x36A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4E4u;
        // 0x36a4e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A4E4u, 0x36A4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A4ECu;
label_36a4ec:
    // 0x36a4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36a4f0:
    // 0x36a4f0: 0x3e00008  jr          $ra
label_36a4f4:
    if (ctx->pc == 0x36A4F4u) {
        ctx->pc = 0x36A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4F0u;
        // 0x36a4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4F8u;
        goto label_fallthrough_0x36a4f0;
    }
    ctx->pc = 0x36A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4F0u;
        // 0x36a4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36a4f0:
    ctx->pc = 0x36A4F8u;
}
