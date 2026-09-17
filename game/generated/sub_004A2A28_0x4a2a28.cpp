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

// Function: sub_004A2A28
// Address: 0x4a2a28 - 0x4a2ad0
void sub_004A2A28_0x4a2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2A28_0x4a2a28");
#endif

    ctx->pc = 0x4a2a28u;

    // 0x4a2a28: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x4a2a28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4a2a2c: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x4a2a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4a2a30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2a34: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4a2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a2a38: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a3c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a40: 0x94a70006  lhu         $a3, 0x6($a1)
    ctx->pc = 0x4a2a40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4a2a44: 0x84c30016  lh          $v1, 0x16($a2)
    ctx->pc = 0x4a2a44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x4a2a48: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4a2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a2a4c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a50: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a54: 0x94a7000a  lhu         $a3, 0xA($a1)
    ctx->pc = 0x4a2a54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x4a2a58: 0x84c3001a  lh          $v1, 0x1A($a2)
    ctx->pc = 0x4a2a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4a2a5c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4a2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4a2a60: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a68: 0x94c30022  lhu         $v1, 0x22($a2)
    ctx->pc = 0x4a2a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x4a2a6c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4a2a70: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a74: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a78: 0x94c30024  lhu         $v1, 0x24($a2)
    ctx->pc = 0x4a2a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x4a2a7c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a80: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a84: 0x94c30026  lhu         $v1, 0x26($a2)
    ctx->pc = 0x4a2a84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x4a2a88: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a8c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a90: 0x94c30028  lhu         $v1, 0x28($a2)
    ctx->pc = 0x4a2a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x4a2a94: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2a98: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2a9c: 0x94c3002a  lhu         $v1, 0x2A($a2)
    ctx->pc = 0x4a2a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x4a2aa0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4a2aa4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2aa8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2aac: 0x94c3002c  lhu         $v1, 0x2C($a2)
    ctx->pc = 0x4a2aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x4a2ab0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2ab4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2ab8: 0x94c3002e  lhu         $v1, 0x2E($a2)
    ctx->pc = 0x4a2ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x4a2abc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2ac0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2AC4u;
        // 0x4a2ac8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2ACCu;
    // 0x4a2acc: 0x0  nop
    ctx->pc = 0x4a2accu;
    // NOP
    ctx->pc = 0x4a2ad0u;
}
