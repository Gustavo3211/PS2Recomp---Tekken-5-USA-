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

// Function: sub_00340758
// Address: 0x340758 - 0x340788
void sub_00340758_0x340758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340758_0x340758");
#endif

    switch (ctx->pc) {
        case 0x340778u: goto label_340778;
        default: break;
    }

    ctx->pc = 0x340758u;

    // 0x340758: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x340758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34075c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x340760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340764: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x340764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340768: 0x24840880  addiu       $a0, $a0, 0x880
    ctx->pc = 0x340768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
    // 0x34076c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340770: 0xc0dd92c  jal         func_3764B0
    ctx->pc = 0x340770u;
    SET_GPR_U32(ctx, 31, 0x340778u);
    ctx->pc = 0x340774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340770u;
    // 0x340774: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3764B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3764B0u, 0x340770u, 0x340778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340778u;
label_340778:
    // 0x340778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34077c: 0x3e00008  jr          $ra
    ctx->pc = 0x34077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34077Cu;
        // 0x340780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340784u;
    // 0x340784: 0x0  nop
    ctx->pc = 0x340784u;
    // NOP
    ctx->pc = 0x340788u;
}
