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

// Function: sub_002818B8
// Address: 0x2818b8 - 0x281918
void sub_002818B8_0x2818b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002818B8_0x2818b8");
#endif

    ctx->pc = 0x2818b8u;

    // 0x2818b8: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2818bc: 0x8c860310  lw          $a2, 0x310($a0)
    ctx->pc = 0x2818bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x2818c0: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2818C0u;
    {
        const bool branch_taken_0x2818c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2818C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818C0u;
        // 0x2818c4: 0x94420024  lhu         $v0, 0x24($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818c0) {
            ctx->pc = 0x281910u;
            goto label_281910;
        }
    }
    ctx->pc = 0x2818C8u;
    // 0x2818c8: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x2818cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2818d0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2818d4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2818d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2818d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2818D8u;
    {
        const bool branch_taken_0x2818d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2818d8) {
            ctx->pc = 0x281910u;
            goto label_281910;
        }
    }
    ctx->pc = 0x2818E0u;
    // 0x2818e0: 0x84820146  lh          $v0, 0x146($a0)
    ctx->pc = 0x2818e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 326)));
    // 0x2818e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2818e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2818e8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2818e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2818ec: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2818ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2818f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2818F0u;
    {
        const bool branch_taken_0x2818f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2818F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818F0u;
        // 0x2818f4: 0x53300  sll         $a2, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818f0) {
            ctx->pc = 0x281910u;
            goto label_281910;
        }
    }
    ctx->pc = 0x2818F8u;
    // 0x2818f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2818f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2818fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281900: 0xac8607c4  sw          $a2, 0x7C4($a0)
    ctx->pc = 0x281900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1988), GPR_U32(ctx, 6));
    // 0x281904: 0xac8507c0  sw          $a1, 0x7C0($a0)
    ctx->pc = 0x281904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 5));
    // 0x281908: 0xac8307c8  sw          $v1, 0x7C8($a0)
    ctx->pc = 0x281908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1992), GPR_U32(ctx, 3));
    // 0x28190c: 0xa0820204  sb          $v0, 0x204($a0)
    ctx->pc = 0x28190cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 516), (uint8_t)GPR_U32(ctx, 2));
label_281910:
    // 0x281910: 0x3e00008  jr          $ra
    ctx->pc = 0x281910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281910u;
        // 0x281914: 0x90820204  lbu         $v0, 0x204($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281918u;
}
