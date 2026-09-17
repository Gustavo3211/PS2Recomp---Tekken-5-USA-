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

// Function: sub_0033F6E8
// Address: 0x33f6e8 - 0x33f738
void sub_0033F6E8_0x33f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F6E8_0x33f6e8");
#endif

    switch (ctx->pc) {
        case 0x33f708u: goto label_33f708;
        case 0x33f714u: goto label_33f714;
        default: break;
    }

    ctx->pc = 0x33f6e8u;

    // 0x33f6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f6ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x33f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33f6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f6f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f6f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f700: 0xc0cfdce  jal         func_33F738
    ctx->pc = 0x33F700u;
    SET_GPR_U32(ctx, 31, 0x33F708u);
    ctx->pc = 0x33F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F700u;
    // 0x33f704: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F738u, 0x33F700u, 0x33F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F708u;
label_33f708:
    // 0x33f708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f70c: 0xc0cfdd8  jal         func_33F760
    ctx->pc = 0x33F70Cu;
    SET_GPR_U32(ctx, 31, 0x33F714u);
    ctx->pc = 0x33F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F70Cu;
    // 0x33f710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F760u, 0x33F70Cu, 0x33F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F714u;
label_33f714:
    // 0x33f714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f718: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x33f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x33f71c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33f724: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33f728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f72c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F72Cu;
        // 0x33f730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F734u;
    // 0x33f734: 0x0  nop
    ctx->pc = 0x33f734u;
    // NOP
    ctx->pc = 0x33f738u;
}
