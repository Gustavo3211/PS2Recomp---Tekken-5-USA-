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

// Function: sub_0031E640
// Address: 0x31e640 - 0x31e678
void sub_0031E640_0x31e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E640_0x31e640");
#endif

    switch (ctx->pc) {
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        default: break;
    }

    ctx->pc = 0x31e640u;

label_31e640:
    // 0x31e640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e644:
    // 0x31e644: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x31e644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31e648:
    // 0x31e648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e64c:
    // 0x31e64c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e650:
    // 0x31e650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e654:
    // 0x31e654: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x31e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_31e658:
    // 0x31e658: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31e65c:
    // 0x31e65c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e660:
    // 0x31e660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e664:
    // 0x31e664: 0x40f809  jalr        $v0
label_31e668:
    if (ctx->pc == 0x31E668u) {
        ctx->pc = 0x31E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E664u;
        // 0x31e668: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E66Cu;
        goto label_31e66c;
    }
    ctx->pc = 0x31E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E66Cu);
        ctx->pc = 0x31E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E664u;
        // 0x31e668: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E664u, 0x31E66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E66Cu;
label_31e66c:
    // 0x31e66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e670:
    // 0x31e670: 0x3e00008  jr          $ra
label_31e674:
    if (ctx->pc == 0x31E674u) {
        ctx->pc = 0x31E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E670u;
        // 0x31e674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E678u;
        goto label_fallthrough_0x31e670;
    }
    ctx->pc = 0x31E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E670u;
        // 0x31e674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e670:
    ctx->pc = 0x31E678u;
}
