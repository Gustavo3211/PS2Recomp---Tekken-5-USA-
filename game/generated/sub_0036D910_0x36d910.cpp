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

// Function: sub_0036D910
// Address: 0x36d910 - 0x36d958
void sub_0036D910_0x36d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D910_0x36d910");
#endif

    switch (ctx->pc) {
        case 0x36d910u: goto label_36d910;
        case 0x36d914u: goto label_36d914;
        case 0x36d918u: goto label_36d918;
        case 0x36d91cu: goto label_36d91c;
        case 0x36d920u: goto label_36d920;
        case 0x36d924u: goto label_36d924;
        case 0x36d928u: goto label_36d928;
        case 0x36d92cu: goto label_36d92c;
        case 0x36d930u: goto label_36d930;
        case 0x36d934u: goto label_36d934;
        case 0x36d938u: goto label_36d938;
        case 0x36d93cu: goto label_36d93c;
        case 0x36d940u: goto label_36d940;
        case 0x36d944u: goto label_36d944;
        case 0x36d948u: goto label_36d948;
        case 0x36d94cu: goto label_36d94c;
        case 0x36d950u: goto label_36d950;
        case 0x36d954u: goto label_36d954;
        default: break;
    }

    ctx->pc = 0x36d910u;

label_36d910:
    // 0x36d910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36d914:
    // 0x36d914: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36d914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36d918:
    // 0x36d918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36d91c:
    // 0x36d91c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x36d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_36d920:
    // 0x36d920: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x36d920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_36d924:
    // 0x36d924: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
label_36d928:
    if (ctx->pc == 0x36D928u) {
        ctx->pc = 0x36D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D924u;
        // 0x36d928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D92Cu;
        goto label_36d92c;
    }
    ctx->pc = 0x36D924u;
    {
        const bool branch_taken_0x36d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x36d924) {
            ctx->pc = 0x36D928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D924u;
            // 0x36d928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D950u;
            goto label_36d950;
        }
    }
    ctx->pc = 0x36D92Cu;
label_36d92c:
    // 0x36d92c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x36d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
label_36d930:
    // 0x36d930: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x36d930u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_36d934:
    // 0x36d934: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x36d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_36d938:
    // 0x36d938: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_36d93c:
    // 0x36d93c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x36d93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_36d940:
    // 0x36d940: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x36d940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36d944:
    // 0x36d944: 0x60f809  jalr        $v1
label_36d948:
    if (ctx->pc == 0x36D948u) {
        ctx->pc = 0x36D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D944u;
        // 0x36d948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D94Cu;
        goto label_36d94c;
    }
    ctx->pc = 0x36D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36D94Cu);
        ctx->pc = 0x36D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D944u;
        // 0x36d948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D944u, 0x36D94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36D94Cu;
label_36d94c:
    // 0x36d94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d950:
    // 0x36d950: 0x3e00008  jr          $ra
label_36d954:
    if (ctx->pc == 0x36D954u) {
        ctx->pc = 0x36D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D950u;
        // 0x36d954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36D958u;
        goto label_fallthrough_0x36d950;
    }
    ctx->pc = 0x36D950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D950u;
        // 0x36d954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36d950:
    ctx->pc = 0x36D958u;
}
