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

// Function: sub_00246D58
// Address: 0x246d58 - 0x246de0
void sub_00246D58_0x246d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246D58_0x246d58");
#endif

    switch (ctx->pc) {
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        default: break;
    }

    ctx->pc = 0x246d58u;

    // 0x246d58: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x246d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x246d5c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x246d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x246d64: 0x24636928  addiu       $v1, $v1, 0x6928
    ctx->pc = 0x246d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26920));
    // 0x246d68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x246d6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x246d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x246d70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x246d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246d74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x246d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246d78: 0x94870014  lhu         $a3, 0x14($a0)
    ctx->pc = 0x246d78u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x246d7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x246d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246d84: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x246d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x246d88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x246d8c: 0x8c840e18  lw          $a0, 0xE18($a0)
    ctx->pc = 0x246d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3608)));
    // 0x246d90: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x246D90u;
    {
        const bool branch_taken_0x246d90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D90u;
        // 0x246d94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d90) {
            ctx->pc = 0x246DD8u;
            goto label_246dd8;
        }
    }
    ctx->pc = 0x246D98u;
    // 0x246d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x246D98u;
    {
        const bool branch_taken_0x246d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D98u;
        // 0x246d9c: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d98) {
            ctx->pc = 0x246DB4u;
            goto label_246db4;
        }
    }
    ctx->pc = 0x246DA0u;
label_246da0:
    // 0x246da0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x246da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_246da4:
    // 0x246da4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x246da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x246da8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246DA8u;
    {
        const bool branch_taken_0x246da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA8u;
        // 0x246dac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246da8) {
            ctx->pc = 0x246DD8u;
            goto label_246dd8;
        }
    }
    ctx->pc = 0x246DB0u;
    // 0x246db0: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x246db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_246db4:
    // 0x246db4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x246db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x246db8: 0x0  nop
    ctx->pc = 0x246db8u;
    // NOP
    // 0x246dbc: 0x0  nop
    ctx->pc = 0x246dbcu;
    // NOP
    // 0x246dc0: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x246DC0u;
    {
        const bool branch_taken_0x246dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dc0) {
            ctx->pc = 0x246DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246DC0u;
            // 0x246dc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246DA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246da4;
        }
    }
    ctx->pc = 0x246DC8u;
    // 0x246dc8: 0x0  nop
    ctx->pc = 0x246dc8u;
    // NOP
    // 0x246dcc: 0x54c0fff4  bnel        $a2, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x246DCCu;
    {
        const bool branch_taken_0x246dcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x246dcc) {
            ctx->pc = 0x246DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246DCCu;
            // 0x246dd0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246da0;
        }
    }
    ctx->pc = 0x246DD4u;
    // 0x246dd4: 0x84680004  lh          $t0, 0x4($v1)
    ctx->pc = 0x246dd4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_246dd8:
    // 0x246dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x246DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DD8u;
        // 0x246ddc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246DE0u;
}
