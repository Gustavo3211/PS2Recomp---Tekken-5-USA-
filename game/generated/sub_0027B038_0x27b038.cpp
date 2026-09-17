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

// Function: sub_0027B038
// Address: 0x27b038 - 0x27b0b0
void sub_0027B038_0x27b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B038_0x27b038");
#endif

    switch (ctx->pc) {
        case 0x27b068u: goto label_27b068;
        case 0x27b074u: goto label_27b074;
        case 0x27b088u: goto label_27b088;
        default: break;
    }

    ctx->pc = 0x27b038u;

    // 0x27b038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b03c: 0x24030141  addiu       $v1, $zero, 0x141
    ctx->pc = 0x27b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27b040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b04c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27b050: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x27b050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27b054: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27b054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b058: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27B058u;
    {
        const bool branch_taken_0x27b058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B058u;
        // 0x27b05c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b058) {
            ctx->pc = 0x27B094u;
            goto label_27b094;
        }
    }
    ctx->pc = 0x27B060u;
    // 0x27b060: 0x24120141  addiu       $s2, $zero, 0x141
    ctx->pc = 0x27b060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x27b064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b068:
    // 0x27b068: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27b068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b06c: 0xc083892  jal         func_20E248
    ctx->pc = 0x27B06Cu;
    SET_GPR_U32(ctx, 31, 0x27B074u);
    ctx->pc = 0x27B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B06Cu;
    // 0x27b070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x27B06Cu, 0x27B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B074u;
label_27b074:
    // 0x27b074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b080: 0xc083892  jal         func_20E248
    ctx->pc = 0x27B080u;
    SET_GPR_U32(ctx, 31, 0x27B088u);
    ctx->pc = 0x27B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B080u;
    // 0x27b084: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x27B080u, 0x27B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B088u;
label_27b088:
    // 0x27b088: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x27b088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b08c: 0x1452fff6  bne         $v0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x27B08Cu;
    {
        const bool branch_taken_0x27b08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x27B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B08Cu;
        // 0x27b090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b08c) {
            ctx->pc = 0x27B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b068;
        }
    }
    ctx->pc = 0x27B094u;
label_27b094:
    // 0x27b094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b09c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0A4u;
        // 0x27b0a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0ACu;
    // 0x27b0ac: 0x0  nop
    ctx->pc = 0x27b0acu;
    // NOP
    ctx->pc = 0x27b0b0u;
}
