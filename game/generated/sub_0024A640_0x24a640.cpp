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

// Function: sub_0024A640
// Address: 0x24a640 - 0x24a678
void sub_0024A640_0x24a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A640_0x24a640");
#endif

    switch (ctx->pc) {
        case 0x24a668u: goto label_24a668;
        default: break;
    }

    ctx->pc = 0x24a640u;

    // 0x24a640: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24a640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a644: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24a644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24a648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a64c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x24a64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a650: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x24a650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a654: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24a658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a660: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A660u;
    SET_GPR_U32(ctx, 31, 0x24A668u);
    ctx->pc = 0x24A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A660u;
    // 0x24a664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A660u, 0x24A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A668u;
label_24a668:
    // 0x24a668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a66c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A66Cu;
        // 0x24a670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A674u;
    // 0x24a674: 0x0  nop
    ctx->pc = 0x24a674u;
    // NOP
    ctx->pc = 0x24a678u;
}
