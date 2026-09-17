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

// Function: sub_00512738
// Address: 0x512738 - 0x5127a8
void sub_00512738_0x512738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512738_0x512738");
#endif

    switch (ctx->pc) {
        case 0x512778u: goto label_512778;
        case 0x51278cu: goto label_51278c;
        default: break;
    }

    ctx->pc = 0x512738u;

    // 0x512738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51273c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x51273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x512740: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x512740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x512744: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x512744u;
    {
        const bool branch_taken_0x512744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x512748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512744u;
        // 0x512748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512744) {
            ctx->pc = 0x512760u;
            goto label_512760;
        }
    }
    ctx->pc = 0x51274Cu;
    // 0x51274c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x51274Cu;
    {
        const bool branch_taken_0x51274c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x512750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51274Cu;
        // 0x512750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51274c) {
            ctx->pc = 0x512770u;
            goto label_512770;
        }
    }
    ctx->pc = 0x512754u;
    // 0x512754: 0x3e00008  jr          $ra
    ctx->pc = 0x512754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512754u;
        // 0x512758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51275Cu;
    // 0x51275c: 0x0  nop
    ctx->pc = 0x51275cu;
    // NOP
label_512760:
    // 0x512760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x512760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512764: 0x8144900  j           func_512400
    ctx->pc = 0x512764u;
    ctx->pc = 0x512768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512764u;
    // 0x512768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512400u, 0x512764u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x51276Cu;
    // 0x51276c: 0x0  nop
    ctx->pc = 0x51276cu;
    // NOP
label_512770:
    // 0x512770: 0x8144986  j           func_512618
    ctx->pc = 0x512770u;
    ctx->pc = 0x512774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512770u;
    // 0x512774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512618u, 0x512770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x512778u;
label_512778:
    // 0x512778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51277c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x51277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x512780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x512784: 0xc124620  jal         func_491880
    ctx->pc = 0x512784u;
    SET_GPR_U32(ctx, 31, 0x51278Cu);
    ctx->pc = 0x512788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512784u;
    // 0x512788: 0xa440f08a  sh          $zero, -0xF76($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963338), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x512784u, 0x51278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51278Cu;
label_51278c:
    // 0x51278c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51278cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512790: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x512790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x512794: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x512794u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x512798: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x512798u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x51279c: 0x3e00008  jr          $ra
    ctx->pc = 0x51279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5127A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51279Cu;
        // 0x5127a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5127A4u;
    // 0x5127a4: 0x0  nop
    ctx->pc = 0x5127a4u;
    // NOP
    ctx->pc = 0x5127a8u;
}
