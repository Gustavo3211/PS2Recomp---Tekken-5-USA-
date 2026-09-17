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

// Function: sub_0033D028
// Address: 0x33d028 - 0x33d080
void sub_0033D028_0x33d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D028_0x33d028");
#endif

    switch (ctx->pc) {
        case 0x33d028u: goto label_33d028;
        case 0x33d02cu: goto label_33d02c;
        case 0x33d030u: goto label_33d030;
        case 0x33d034u: goto label_33d034;
        case 0x33d038u: goto label_33d038;
        case 0x33d03cu: goto label_33d03c;
        case 0x33d040u: goto label_33d040;
        case 0x33d044u: goto label_33d044;
        case 0x33d048u: goto label_33d048;
        case 0x33d04cu: goto label_33d04c;
        case 0x33d050u: goto label_33d050;
        case 0x33d054u: goto label_33d054;
        case 0x33d058u: goto label_33d058;
        case 0x33d05cu: goto label_33d05c;
        case 0x33d060u: goto label_33d060;
        case 0x33d064u: goto label_33d064;
        case 0x33d068u: goto label_33d068;
        case 0x33d06cu: goto label_33d06c;
        case 0x33d070u: goto label_33d070;
        case 0x33d074u: goto label_33d074;
        case 0x33d078u: goto label_33d078;
        case 0x33d07cu: goto label_33d07c;
        default: break;
    }

    ctx->pc = 0x33d028u;

label_33d028:
    // 0x33d028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d02c:
    // 0x33d02c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33d02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d030:
    // 0x33d030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33d034:
    // 0x33d034: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x33d034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_33d038:
    // 0x33d038: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x33d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_33d03c:
    // 0x33d03c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x33d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33d040:
    // 0x33d040: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33d044:
    // 0x33d044: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_33d048:
    if (ctx->pc == 0x33D048u) {
        ctx->pc = 0x33D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D044u;
        // 0x33d048: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D04Cu;
        goto label_33d04c;
    }
    ctx->pc = 0x33D044u;
    {
        const bool branch_taken_0x33d044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D044u;
        // 0x33d048: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d044) {
            ctx->pc = 0x33D054u;
            goto label_33d054;
        }
    }
    ctx->pc = 0x33D04Cu;
label_33d04c:
    // 0x33d04c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x33d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_33d050:
    // 0x33d050: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d054:
    // 0x33d054: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_33d058:
    if (ctx->pc == 0x33D058u) {
        ctx->pc = 0x33D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D054u;
        // 0x33d058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D05Cu;
        goto label_33d05c;
    }
    ctx->pc = 0x33D054u;
    {
        const bool branch_taken_0x33d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D054u;
        // 0x33d058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d054) {
            ctx->pc = 0x33D078u;
            goto label_33d078;
        }
    }
    ctx->pc = 0x33D05Cu;
label_33d05c:
    // 0x33d05c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x33d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_33d060:
    // 0x33d060: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33d064:
    // 0x33d064: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d068:
    // 0x33d068: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d06c:
    // 0x33d06c: 0x60f809  jalr        $v1
label_33d070:
    if (ctx->pc == 0x33D070u) {
        ctx->pc = 0x33D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D06Cu;
        // 0x33d070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D074u;
        goto label_33d074;
    }
    ctx->pc = 0x33D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D074u);
        ctx->pc = 0x33D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D06Cu;
        // 0x33d070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D06Cu, 0x33D074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D074u;
label_33d074:
    // 0x33d074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d078:
    // 0x33d078: 0x3e00008  jr          $ra
label_33d07c:
    if (ctx->pc == 0x33D07Cu) {
        ctx->pc = 0x33D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D078u;
        // 0x33d07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D080u;
        goto label_fallthrough_0x33d078;
    }
    ctx->pc = 0x33D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D078u;
        // 0x33d07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d078:
    ctx->pc = 0x33D080u;
}
