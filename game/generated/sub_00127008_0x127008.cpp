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

// Function: sub_00127008
// Address: 0x127008 - 0x127040
void sub_00127008_0x127008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127008_0x127008");
#endif

    switch (ctx->pc) {
        case 0x127018u: goto label_127018;
        default: break;
    }

    ctx->pc = 0x127008u;

    // 0x127008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12700c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127010: 0xc048762  jal         func_121D88
    ctx->pc = 0x127010u;
    SET_GPR_U32(ctx, 31, 0x127018u);
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x127010u, 0x127018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127018u;
label_127018:
    // 0x127018: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12701c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12701Cu;
    {
        const bool branch_taken_0x12701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12701Cu;
        // 0x127020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12701c) {
            ctx->pc = 0x12702Cu;
            goto label_12702c;
        }
    }
    ctx->pc = 0x127024u;
    // 0x127024: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x127024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x127028: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x127028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12702c:
    // 0x12702c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12702cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127030: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x127030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127034: 0x3e00008  jr          $ra
    ctx->pc = 0x127034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127034u;
        // 0x127038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12703Cu;
    // 0x12703c: 0x0  nop
    ctx->pc = 0x12703cu;
    // NOP
    ctx->pc = 0x127040u;
}
