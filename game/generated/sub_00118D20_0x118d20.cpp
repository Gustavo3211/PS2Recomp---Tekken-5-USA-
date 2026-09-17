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

// Function: sub_00118D20
// Address: 0x118d20 - 0x118d88
void sub_00118D20_0x118d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D20_0x118d20");
#endif

    switch (ctx->pc) {
        case 0x118d34u: goto label_118d34;
        case 0x118d58u: goto label_118d58;
        case 0x118d60u: goto label_118d60;
        case 0x118d68u: goto label_118d68;
        default: break;
    }

    ctx->pc = 0x118d20u;

    // 0x118d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118d24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x118d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x118d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118d2c: 0xc043d14  jal         func_10F450
    ctx->pc = 0x118D2Cu;
    SET_GPR_U32(ctx, 31, 0x118D34u);
    ctx->pc = 0x118D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D2Cu;
    // 0x118d30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x118D2Cu, 0x118D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D34u;
label_118d34:
    // 0x118d34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118d3c: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x118d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x118d40: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x118d44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x118d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d4c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x118d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x118d50: 0xc043d10  jal         func_10F440
    ctx->pc = 0x118D50u;
    SET_GPR_U32(ctx, 31, 0x118D58u);
    ctx->pc = 0x118D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D50u;
    // 0x118d54: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F440u, 0x118D50u, 0x118D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D58u;
label_118d58:
    // 0x118d58: 0xc043d14  jal         func_10F450
    ctx->pc = 0x118D58u;
    SET_GPR_U32(ctx, 31, 0x118D60u);
    ctx->pc = 0x118D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D58u;
    // 0x118d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x118D58u, 0x118D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D60u;
label_118d60:
    // 0x118d60: 0xc043d10  jal         func_10F440
    ctx->pc = 0x118D60u;
    SET_GPR_U32(ctx, 31, 0x118D68u);
    ctx->pc = 0x118D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D60u;
    // 0x118d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F440u, 0x118D60u, 0x118D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D68u;
label_118d68:
    // 0x118d68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x118d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118d6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118d70: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x118d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x118d74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d78: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x118d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x118d7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x118d80: 0x3e00008  jr          $ra
    ctx->pc = 0x118D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D80u;
        // 0x118d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D88u;
}
