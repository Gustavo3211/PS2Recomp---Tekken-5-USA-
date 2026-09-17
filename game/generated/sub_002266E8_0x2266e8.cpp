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

// Function: sub_002266E8
// Address: 0x2266e8 - 0x226770
void sub_002266E8_0x2266e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266E8_0x2266e8");
#endif

    switch (ctx->pc) {
        case 0x2266f8u: goto label_2266f8;
        case 0x226720u: goto label_226720;
        case 0x226740u: goto label_226740;
        case 0x226758u: goto label_226758;
        default: break;
    }

    ctx->pc = 0x2266e8u;

    // 0x2266e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2266ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2266ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2266f0: 0xc08999a  jal         func_226668
    ctx->pc = 0x2266F0u;
    SET_GPR_U32(ctx, 31, 0x2266F8u);
    ctx->pc = 0x226668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226668u, 0x2266F0u, 0x2266F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266F8u;
label_2266f8:
    // 0x2266f8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2266F8u;
    {
        const bool branch_taken_0x2266f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2266FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266F8u;
        // 0x2266fc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266f8) {
            ctx->pc = 0x226710u;
            goto label_226710;
        }
    }
    ctx->pc = 0x226700u;
    // 0x226700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226708: 0x3e00008  jr          $ra
    ctx->pc = 0x226708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226708u;
        // 0x22670c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226710u;
label_226710:
    // 0x226710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226714: 0x8089622  j           func_225888
    ctx->pc = 0x226714u;
    ctx->pc = 0x226718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226714u;
    // 0x226718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    sub_00225888_0x225888(rdram, ctx, runtime); return;
    ctx->pc = 0x22671Cu;
    // 0x22671c: 0x0  nop
    ctx->pc = 0x22671cu;
    // NOP
label_226720:
    // 0x226720: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22672c: 0x248473c8  addiu       $a0, $a0, 0x73C8
    ctx->pc = 0x22672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    // 0x226730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226734: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226738: 0xc08973a  jal         func_225CE8
    ctx->pc = 0x226738u;
    SET_GPR_U32(ctx, 31, 0x226740u);
    ctx->pc = 0x22673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226738u;
    // 0x22673c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CE8u, 0x226738u, 0x226740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226740u;
label_226740:
    // 0x226740: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226748: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226748u;
    {
        const bool branch_taken_0x226748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226748u;
        // 0x22674c: 0x248473e8  addiu       $a0, $a0, 0x73E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226748) {
            ctx->pc = 0x22675Cu;
            goto label_22675c;
        }
    }
    ctx->pc = 0x226750u;
    // 0x226750: 0xc08973a  jal         func_225CE8
    ctx->pc = 0x226750u;
    SET_GPR_U32(ctx, 31, 0x226758u);
    ctx->pc = 0x225CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CE8u, 0x226750u, 0x226758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226758u;
label_226758:
    // 0x226758: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x226758u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22675c:
    // 0x22675c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22675cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x226764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226768: 0x3e00008  jr          $ra
    ctx->pc = 0x226768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226768u;
        // 0x22676c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226770u;
}
