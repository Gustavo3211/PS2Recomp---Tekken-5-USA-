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

// Function: sub_00360400
// Address: 0x360400 - 0x360448
void sub_00360400_0x360400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360400_0x360400");
#endif

    switch (ctx->pc) {
        case 0x36041cu: goto label_36041c;
        case 0x360434u: goto label_360434;
        default: break;
    }

    ctx->pc = 0x360400u;

    // 0x360400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36040c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x360410: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x360410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x360414: 0xc0d8112  jal         func_360448
    ctx->pc = 0x360414u;
    SET_GPR_U32(ctx, 31, 0x36041Cu);
    ctx->pc = 0x360418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360414u;
    // 0x360418: 0x92050006  lbu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360448u, 0x360414u, 0x36041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36041Cu;
label_36041c:
    // 0x36041c: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x36041cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x360420: 0x96040018  lhu         $a0, 0x18($s0)
    ctx->pc = 0x360420u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x360424: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x360424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x360428: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x360428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x36042c: 0xc0d80e6  jal         func_360398
    ctx->pc = 0x36042Cu;
    SET_GPR_U32(ctx, 31, 0x360434u);
    ctx->pc = 0x360430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36042Cu;
    // 0x360430: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360398u, 0x36042Cu, 0x360434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360434u;
label_360434:
    // 0x360434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36043c: 0x3e00008  jr          $ra
    ctx->pc = 0x36043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36043Cu;
        // 0x360440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360444u;
    // 0x360444: 0x0  nop
    ctx->pc = 0x360444u;
    // NOP
    ctx->pc = 0x360448u;
}
