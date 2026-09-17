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

// Function: sub_0033C618
// Address: 0x33c618 - 0x33c670
void sub_0033C618_0x33c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C618_0x33c618");
#endif

    switch (ctx->pc) {
        case 0x33c63cu: goto label_33c63c;
        case 0x33c64cu: goto label_33c64c;
        default: break;
    }

    ctx->pc = 0x33c618u;

    // 0x33c618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c628: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c62c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33c630: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33c634: 0xc0cf1d2  jal         func_33C748
    ctx->pc = 0x33C634u;
    SET_GPR_U32(ctx, 31, 0x33C63Cu);
    ctx->pc = 0x33C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C634u;
    // 0x33c638: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C748u, 0x33C634u, 0x33C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C63Cu;
label_33c63c:
    // 0x33c63c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33c640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c644: 0xc0dd86c  jal         func_3761B0
    ctx->pc = 0x33C644u;
    SET_GPR_U32(ctx, 31, 0x33C64Cu);
    ctx->pc = 0x33C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C644u;
    // 0x33c648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3761B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761B0u, 0x33C644u, 0x33C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C64Cu;
label_33c64c:
    // 0x33c64c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33c650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33c658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c65c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33c660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c664: 0x3e00008  jr          $ra
    ctx->pc = 0x33C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C664u;
        // 0x33c668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C66Cu;
    // 0x33c66c: 0x0  nop
    ctx->pc = 0x33c66cu;
    // NOP
    ctx->pc = 0x33c670u;
}
