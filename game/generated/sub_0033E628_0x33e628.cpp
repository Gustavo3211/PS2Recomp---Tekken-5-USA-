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

// Function: sub_0033E628
// Address: 0x33e628 - 0x33e670
void sub_0033E628_0x33e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E628_0x33e628");
#endif

    switch (ctx->pc) {
        case 0x33e64cu: goto label_33e64c;
        case 0x33e65cu: goto label_33e65c;
        default: break;
    }

    ctx->pc = 0x33e628u;

    // 0x33e628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e634: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33e638: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x33e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33e63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E63Cu;
    {
        const bool branch_taken_0x33e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E63Cu;
        // 0x33e640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e63c) {
            ctx->pc = 0x33E64Cu;
            goto label_33e64c;
        }
    }
    ctx->pc = 0x33E644u;
    // 0x33e644: 0xc0cfa68  jal         func_33E9A0
    ctx->pc = 0x33E644u;
    SET_GPR_U32(ctx, 31, 0x33E64Cu);
    ctx->pc = 0x33E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E9A0u, 0x33E644u, 0x33E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E64Cu;
label_33e64c:
    // 0x33e64c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x33e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x33e650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e654: 0xc0c79c0  jal         func_31E700
    ctx->pc = 0x33E654u;
    SET_GPR_U32(ctx, 31, 0x33E65Cu);
    ctx->pc = 0x33E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E654u;
    // 0x33e658: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E700u, 0x33E654u, 0x33E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E65Cu;
label_33e65c:
    // 0x33e65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e664: 0x3e00008  jr          $ra
    ctx->pc = 0x33E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E664u;
        // 0x33e668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E66Cu;
    // 0x33e66c: 0x0  nop
    ctx->pc = 0x33e66cu;
    // NOP
    ctx->pc = 0x33e670u;
}
