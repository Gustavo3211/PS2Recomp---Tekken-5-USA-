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

// Function: sub_0036B050
// Address: 0x36b050 - 0x36b0b0
void sub_0036B050_0x36b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B050_0x36b050");
#endif

    switch (ctx->pc) {
        case 0x36b074u: goto label_36b074;
        case 0x36b08cu: goto label_36b08c;
        default: break;
    }

    ctx->pc = 0x36b050u;

    // 0x36b050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b054: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b05c: 0x24506df8  addiu       $s0, $v0, 0x6DF8
    ctx->pc = 0x36b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28152));
    // 0x36b060: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b060u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DF8u));
    // 0x36b064: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B064u;
    {
        const bool branch_taken_0x36b064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B064u;
        // 0x36b068: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b064) {
            ctx->pc = 0x36B08Cu;
            goto label_36b08c;
        }
    }
    ctx->pc = 0x36B06Cu;
    // 0x36b06c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B06Cu;
    SET_GPR_U32(ctx, 31, 0x36B074u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B06Cu, 0x36B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B074u;
label_36b074:
    // 0x36b074: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b078: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b07c: 0x24a5ae88  addiu       $a1, $a1, -0x5178
    ctx->pc = 0x36b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946440));
    // 0x36b080: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b084: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B084u;
    SET_GPR_U32(ctx, 31, 0x36B08Cu);
    ctx->pc = 0x36B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B084u;
    // 0x36b088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B084u, 0x36B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B08Cu;
label_36b08c:
    // 0x36b08c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b098: 0x3e00008  jr          $ra
    ctx->pc = 0x36B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B098u;
        // 0x36b09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B0A0u;
    // 0x36b0a0: 0x8c82016c  lw          $v0, 0x16C($a0)
    ctx->pc = 0x36b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x36b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0A4u;
        // 0x36b0a8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B0ACu;
    // 0x36b0ac: 0x0  nop
    ctx->pc = 0x36b0acu;
    // NOP
    ctx->pc = 0x36b0b0u;
}
