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

// Function: sub_0028E630
// Address: 0x28e630 - 0x28e680
void sub_0028E630_0x28e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E630_0x28e630");
#endif

    switch (ctx->pc) {
        case 0x28e644u: goto label_28e644;
        case 0x28e658u: goto label_28e658;
        default: break;
    }

    ctx->pc = 0x28e630u;

    // 0x28e630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e638: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28e63c: 0xc08215c  jal         func_208570
    ctx->pc = 0x28E63Cu;
    SET_GPR_U32(ctx, 31, 0x28E644u);
    ctx->pc = 0x28E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E63Cu;
    // 0x28e640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x28E63Cu, 0x28E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E644u;
label_28e644:
    // 0x28e644: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e648: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E648u;
    {
        const bool branch_taken_0x28e648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28e648) {
            ctx->pc = 0x28E64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E648u;
            // 0x28e64c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E668u;
            goto label_28e668;
        }
    }
    ctx->pc = 0x28E650u;
    // 0x28e650: 0xc08215c  jal         func_208570
    ctx->pc = 0x28E650u;
    SET_GPR_U32(ctx, 31, 0x28E658u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x28E650u, 0x28E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E658u;
label_28e658:
    // 0x28e658: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28e65c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E65Cu;
    {
        const bool branch_taken_0x28e65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E65Cu;
        // 0x28e660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e65c) {
            ctx->pc = 0x28E66Cu;
            goto label_28e66c;
        }
    }
    ctx->pc = 0x28E664u;
    // 0x28e664: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e668:
    // 0x28e668: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28e668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e66c:
    // 0x28e66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e674: 0x3e00008  jr          $ra
    ctx->pc = 0x28E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E674u;
        // 0x28e678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E67Cu;
    // 0x28e67c: 0x0  nop
    ctx->pc = 0x28e67cu;
    // NOP
    ctx->pc = 0x28e680u;
}
