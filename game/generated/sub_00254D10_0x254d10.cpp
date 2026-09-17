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

// Function: sub_00254D10
// Address: 0x254d10 - 0x254d68
void sub_00254D10_0x254d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D10_0x254d10");
#endif

    switch (ctx->pc) {
        case 0x254d30u: goto label_254d30;
        case 0x254d40u: goto label_254d40;
        default: break;
    }

    ctx->pc = 0x254d10u;

    // 0x254d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254d14: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x254d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x254d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254d20: 0x24501bb0  addiu       $s0, $v0, 0x1BB0
    ctx->pc = 0x254d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7088));
    // 0x254d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x254d28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x254d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d2c: 0x0  nop
    ctx->pc = 0x254d2cu;
    // NOP
label_254d30:
    // 0x254d30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x254d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254d34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x254d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x254d38: 0xc095334  jal         func_254CD0
    ctx->pc = 0x254D38u;
    SET_GPR_U32(ctx, 31, 0x254D40u);
    ctx->pc = 0x254D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D38u;
    // 0x254d3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CD0u, 0x254D38u, 0x254D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D40u;
label_254d40:
    // 0x254d40: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x254d40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x254d44: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x254d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x254d48: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x254d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x254d4c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x254D4Cu;
    {
        const bool branch_taken_0x254d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x254D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D4Cu;
        // 0x254d50: 0xa043000b  sb          $v1, 0xB($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d4c) {
            ctx->pc = 0x254D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254d30;
        }
    }
    ctx->pc = 0x254D54u;
    // 0x254d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254d60: 0x3e00008  jr          $ra
    ctx->pc = 0x254D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D60u;
        // 0x254d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D68u;
}
