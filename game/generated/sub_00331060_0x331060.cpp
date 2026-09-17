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

// Function: sub_00331060
// Address: 0x331060 - 0x3310b0
void sub_00331060_0x331060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331060_0x331060");
#endif

    switch (ctx->pc) {
        case 0x331084u: goto label_331084;
        case 0x33108cu: goto label_33108c;
        case 0x331094u: goto label_331094;
        case 0x3310a0u: goto label_3310a0;
        default: break;
    }

    ctx->pc = 0x331060u;

    // 0x331060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331064: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x331064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x331068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33106c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331070: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x331070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x331074: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x331074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x331078: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x331078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x33107c: 0xc0cc42c  jal         func_3310B0
    ctx->pc = 0x33107Cu;
    SET_GPR_U32(ctx, 31, 0x331084u);
    ctx->pc = 0x331080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33107Cu;
    // 0x331080: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3310B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3310B0u, 0x33107Cu, 0x331084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331084u;
label_331084:
    // 0x331084: 0xc0cc446  jal         func_331118
    ctx->pc = 0x331084u;
    SET_GPR_U32(ctx, 31, 0x33108Cu);
    ctx->pc = 0x331088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331084u;
    // 0x331088: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331118u, 0x331084u, 0x33108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33108Cu;
label_33108c:
    // 0x33108c: 0xc043ca4  jal         func_10F290
    ctx->pc = 0x33108Cu;
    SET_GPR_U32(ctx, 31, 0x331094u);
    ctx->pc = 0x10F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F290u, 0x33108Cu, 0x331094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331094u;
label_331094:
    // 0x331094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x331094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331098: 0xc043c8c  jal         func_10F230
    ctx->pc = 0x331098u;
    SET_GPR_U32(ctx, 31, 0x3310A0u);
    ctx->pc = 0x33109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331098u;
    // 0x33109c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x331098u, 0x3310A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310A0u;
label_3310a0:
    // 0x3310a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3310a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3310a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3310A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3310A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3310A4u;
        // 0x3310a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3310A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3310ACu;
    // 0x3310ac: 0x0  nop
    ctx->pc = 0x3310acu;
    // NOP
    ctx->pc = 0x3310b0u;
}
