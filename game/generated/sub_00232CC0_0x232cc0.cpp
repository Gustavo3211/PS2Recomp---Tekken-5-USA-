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

// Function: sub_00232CC0
// Address: 0x232cc0 - 0x232d18
void sub_00232CC0_0x232cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232CC0_0x232cc0");
#endif

    ctx->pc = 0x232cc0u;

    // 0x232cc0: 0x84820148  lh          $v0, 0x148($a0)
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x232cc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x232CC4u;
    {
        const bool branch_taken_0x232cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CC4u;
        // 0x232cc8: 0x908201f9  lbu         $v0, 0x1F9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cc4) {
            ctx->pc = 0x232CF0u;
            goto label_232cf0;
        }
    }
    ctx->pc = 0x232CCCu;
    // 0x232ccc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x232CCCu;
    {
        const bool branch_taken_0x232ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CCCu;
        // 0x232cd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ccc) {
            ctx->pc = 0x232D08u;
            goto label_232d08;
        }
    }
    ctx->pc = 0x232CD4u;
    // 0x232cd4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x232cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x232cd8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x232cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x232cdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x232CDCu;
    {
        const bool branch_taken_0x232cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CDCu;
        // 0x232ce0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cdc) {
            ctx->pc = 0x232D08u;
            goto label_232d08;
        }
    }
    ctx->pc = 0x232CE4u;
    // 0x232ce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x232CE4u;
    {
        const bool branch_taken_0x232ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CE4u;
        // 0x232ce8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ce4) {
            ctx->pc = 0x232D08u;
            goto label_232d08;
        }
    }
    ctx->pc = 0x232CECu;
    // 0x232cec: 0x0  nop
    ctx->pc = 0x232cecu;
    // NOP
label_232cf0:
    // 0x232cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232CF0u;
    {
        const bool branch_taken_0x232cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CF0u;
        // 0x232cf4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cf0) {
            ctx->pc = 0x232D08u;
            goto label_232d08;
        }
    }
    ctx->pc = 0x232CF8u;
    // 0x232cf8: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x232cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x232cfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232d00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x232d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x232d04: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x232d04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_232d08:
    // 0x232d08: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x232d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x232d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x232D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D0Cu;
        // 0x232d10: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D14u;
    // 0x232d14: 0x0  nop
    ctx->pc = 0x232d14u;
    // NOP
    ctx->pc = 0x232d18u;
}
