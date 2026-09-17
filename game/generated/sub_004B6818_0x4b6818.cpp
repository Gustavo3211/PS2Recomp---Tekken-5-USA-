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

// Function: sub_004B6818
// Address: 0x4b6818 - 0x4b6888
void sub_004B6818_0x4b6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6818_0x4b6818");
#endif

    ctx->pc = 0x4b6818u;

    // 0x4b6818: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4b6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4b681c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b681cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b6820: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4b6820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6824: 0x24e76e00  addiu       $a3, $a3, 0x6E00
    ctx->pc = 0x4b6824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28160));
    // 0x4b6828: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4b6828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4b682c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4b682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b6830: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4b6830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4b6834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b6834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b6838: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b683c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4b683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b6840: 0x9443ffa0  lhu         $v1, -0x60($v0)
    ctx->pc = 0x4b6840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967200)));
    // 0x4b6844: 0xa4c3232c  sh          $v1, 0x232C($a2)
    ctx->pc = 0x4b6844u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6848: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x4b6848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b684c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4b684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4b6850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b6854: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b6854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b6858: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4b6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b685c: 0x9443ffa2  lhu         $v1, -0x5E($v0)
    ctx->pc = 0x4b685cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967202)));
    // 0x4b6860: 0xa4c3232e  sh          $v1, 0x232E($a2)
    ctx->pc = 0x4b6860u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6864: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x4b6864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6868: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4b6868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4b686c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b6870: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b6870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b6874: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4b6874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b6878: 0x9443ffa4  lhu         $v1, -0x5C($v0)
    ctx->pc = 0x4b6878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967204)));
    // 0x4b687c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B687Cu;
        // 0x4b6880: 0xa4c323c4  sh          $v1, 0x23C4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6884u;
    // 0x4b6884: 0x0  nop
    ctx->pc = 0x4b6884u;
    // NOP
    ctx->pc = 0x4b6888u;
}
