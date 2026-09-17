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

// Function: sub_0028B038
// Address: 0x28b038 - 0x28b0a8
void sub_0028B038_0x28b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B038_0x28b038");
#endif

    switch (ctx->pc) {
        case 0x28b07cu: goto label_28b07c;
        default: break;
    }

    ctx->pc = 0x28b038u;

    // 0x28b038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b03c: 0x24850158  addiu       $a1, $a0, 0x158
    ctx->pc = 0x28b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x28b040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b044: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28b048: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b04c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B04Cu;
    {
        const bool branch_taken_0x28b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B04Cu;
        // 0x28b050: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b04c) {
            ctx->pc = 0x28B064u;
            goto label_28b064;
        }
    }
    ctx->pc = 0x28B054u;
    // 0x28b054: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b058: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28b05c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B05Cu;
    {
        const bool branch_taken_0x28b05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b05c) {
            ctx->pc = 0x28B060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B05Cu;
            // 0x28b060: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B074u;
            goto label_28b074;
        }
    }
    ctx->pc = 0x28B064u;
label_28b064:
    // 0x28b064: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28b064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28b068: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b06c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28b06cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28b070: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28b070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28b074:
    // 0x28b074: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28B074u;
    SET_GPR_U32(ctx, 31, 0x28B07Cu);
    ctx->pc = 0x28B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B074u;
    // 0x28b078: 0x24a59b98  addiu       $a1, $a1, -0x6468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28B074u, 0x28B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B07Cu;
label_28b07c:
    // 0x28b07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b080: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B080u;
    {
        const bool branch_taken_0x28b080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B080u;
        // 0x28b084: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b080) {
            ctx->pc = 0x28B094u;
            goto label_28b094;
        }
    }
    ctx->pc = 0x28B088u;
    // 0x28b088: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28b08c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28b08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28b090: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28b090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28b094:
    // 0x28b094: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x28b094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x28b098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28b098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0A0u;
        // 0x28b0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B0A8u;
}
