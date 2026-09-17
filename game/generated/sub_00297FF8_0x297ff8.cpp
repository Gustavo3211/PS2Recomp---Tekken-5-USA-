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

// Function: sub_00297FF8
// Address: 0x297ff8 - 0x298040
void sub_00297FF8_0x297ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297FF8_0x297ff8");
#endif

    switch (ctx->pc) {
        case 0x298028u: goto label_298028;
        case 0x298030u: goto label_298030;
        default: break;
    }

    ctx->pc = 0x297ff8u;

    // 0x297ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298004: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x298004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x298008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x298008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29800c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29800Cu;
    {
        const bool branch_taken_0x29800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29800Cu;
        // 0x298010: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29800c) {
            ctx->pc = 0x298030u;
            goto label_298030;
        }
    }
    ctx->pc = 0x298014u;
    // 0x298014: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x298014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x298018: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x298018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
    // 0x29801c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x298020: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x298020u;
    SET_GPR_U32(ctx, 31, 0x298028u);
    ctx->pc = 0x298024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298020u;
    // 0x298024: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x298020u, 0x298028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298028u;
label_298028:
    // 0x298028: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x298028u;
    SET_GPR_U32(ctx, 31, 0x298030u);
    ctx->pc = 0x29802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298028u;
    // 0x29802c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x298028u, 0x298030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298030u;
label_298030:
    // 0x298030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x298034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298038: 0x3e00008  jr          $ra
    ctx->pc = 0x298038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298038u;
        // 0x29803c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298040u;
}
