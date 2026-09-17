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

// Function: sub_002FE028
// Address: 0x2fe028 - 0x2fe098
void sub_002FE028_0x2fe028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE028_0x2fe028");
#endif

    switch (ctx->pc) {
        case 0x2fe058u: goto label_2fe058;
        case 0x2fe068u: goto label_2fe068;
        case 0x2fe080u: goto label_2fe080;
        default: break;
    }

    ctx->pc = 0x2fe028u;

    // 0x2fe028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe02c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2fe02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fe034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fe038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fe03c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FE03Cu;
    {
        const bool branch_taken_0x2fe03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE03Cu;
        // 0x2fe040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe03c) {
            ctx->pc = 0x2FE084u;
            goto label_2fe084;
        }
    }
    ctx->pc = 0x2FE044u;
    // 0x2fe044: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2fe044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2fe048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE048u;
    {
        const bool branch_taken_0x2fe048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe048) {
            ctx->pc = 0x2FE060u;
            goto label_2fe060;
        }
    }
    ctx->pc = 0x2FE050u;
    // 0x2fe050: 0xc0bf84a  jal         func_2FE128
    ctx->pc = 0x2FE050u;
    SET_GPR_U32(ctx, 31, 0x2FE058u);
    ctx->pc = 0x2FE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE128u, 0x2FE050u, 0x2FE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE058u;
label_2fe058:
    // 0x2fe058: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FE058u;
    {
        const bool branch_taken_0x2fe058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE058u;
        // 0x2fe05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe058) {
            ctx->pc = 0x2FE084u;
            goto label_2fe084;
        }
    }
    ctx->pc = 0x2FE060u;
label_2fe060:
    // 0x2fe060: 0xc0bf7a8  jal         func_2FDEA0
    ctx->pc = 0x2FE060u;
    SET_GPR_U32(ctx, 31, 0x2FE068u);
    ctx->pc = 0x2FE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE060u;
    // 0x2fe064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDEA0u, 0x2FE060u, 0x2FE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE068u;
label_2fe068:
    // 0x2fe068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe06c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe06cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe070: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE070u;
    {
        const bool branch_taken_0x2fe070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE070u;
        // 0x2fe074: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe070) {
            ctx->pc = 0x2FE084u;
            goto label_2fe084;
        }
    }
    ctx->pc = 0x2FE078u;
    // 0x2fe078: 0xc0bf83e  jal         func_2FE0F8
    ctx->pc = 0x2FE078u;
    SET_GPR_U32(ctx, 31, 0x2FE080u);
    ctx->pc = 0x2FE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0F8u, 0x2FE078u, 0x2FE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE080u;
label_2fe080:
    // 0x2fe080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe084:
    // 0x2fe084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE08Cu;
        // 0x2fe090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE094u;
    // 0x2fe094: 0x0  nop
    ctx->pc = 0x2fe094u;
    // NOP
    ctx->pc = 0x2fe098u;
}
