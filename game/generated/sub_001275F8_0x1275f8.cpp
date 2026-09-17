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

// Function: sub_001275F8
// Address: 0x1275f8 - 0x127620
void sub_001275F8_0x1275f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001275F8_0x1275f8");
#endif

    switch (ctx->pc) {
        case 0x12760cu: goto label_12760c;
        default: break;
    }

    ctx->pc = 0x1275f8u;

    // 0x1275f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1275fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1275fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127604: 0xc04aa66  jal         func_12A998
    ctx->pc = 0x127604u;
    SET_GPR_U32(ctx, 31, 0x12760Cu);
    ctx->pc = 0x127608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127604u;
    // 0x127608: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A998u, 0x127604u, 0x12760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12760Cu;
label_12760c:
    // 0x12760c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127610: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127614: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x127614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x127618: 0x3e00008  jr          $ra
    ctx->pc = 0x127618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127618u;
        // 0x12761c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127620u;
}
