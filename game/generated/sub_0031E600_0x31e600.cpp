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

// Function: sub_0031E600
// Address: 0x31e600 - 0x31e640
void sub_0031E600_0x31e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E600_0x31e600");
#endif

    switch (ctx->pc) {
        case 0x31e600u: goto label_31e600;
        case 0x31e604u: goto label_31e604;
        case 0x31e608u: goto label_31e608;
        case 0x31e60cu: goto label_31e60c;
        case 0x31e610u: goto label_31e610;
        case 0x31e614u: goto label_31e614;
        case 0x31e618u: goto label_31e618;
        case 0x31e61cu: goto label_31e61c;
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        default: break;
    }

    ctx->pc = 0x31e600u;

label_31e600:
    // 0x31e600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e604:
    // 0x31e604: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x31e604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31e608:
    // 0x31e608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e60c:
    // 0x31e60c: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x31e60cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
label_31e610:
    // 0x31e610: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x31e610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_31e614:
    // 0x31e614: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x31e614u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_31e618:
    // 0x31e618: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x31e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_31e61c:
    // 0x31e61c: 0x94860006  lhu         $a2, 0x6($a0)
    ctx->pc = 0x31e61cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_31e620:
    // 0x31e620: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_31e624:
    // 0x31e624: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31e624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e628:
    // 0x31e628: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e62c:
    // 0x31e62c: 0x60f809  jalr        $v1
label_31e630:
    if (ctx->pc == 0x31E630u) {
        ctx->pc = 0x31E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E62Cu;
        // 0x31e630: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E634u;
        goto label_31e634;
    }
    ctx->pc = 0x31E62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31E634u);
        ctx->pc = 0x31E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E62Cu;
        // 0x31e630: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E62Cu, 0x31E634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E634u;
label_31e634:
    // 0x31e634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e638:
    // 0x31e638: 0x3e00008  jr          $ra
label_31e63c:
    if (ctx->pc == 0x31E63Cu) {
        ctx->pc = 0x31E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E638u;
        // 0x31e63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E640u;
        goto label_fallthrough_0x31e638;
    }
    ctx->pc = 0x31E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E638u;
        // 0x31e63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e638:
    ctx->pc = 0x31E640u;
}
