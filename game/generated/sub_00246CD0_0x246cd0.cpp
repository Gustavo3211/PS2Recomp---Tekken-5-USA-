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

// Function: sub_00246CD0
// Address: 0x246cd0 - 0x246d58
void sub_00246CD0_0x246cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246CD0_0x246cd0");
#endif

    switch (ctx->pc) {
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        default: break;
    }

    ctx->pc = 0x246cd0u;

    // 0x246cd0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x246cd4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x246cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x246cd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x246cdc: 0x24636928  addiu       $v1, $v1, 0x6928
    ctx->pc = 0x246cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26920));
    // 0x246ce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x246ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x246ce4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x246ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x246ce8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246cec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246cf0: 0x94870014  lhu         $a3, 0x14($a0)
    ctx->pc = 0x246cf0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x246cf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x246cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246cfc: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x246cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x246d00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x246d04: 0x8c840e18  lw          $a0, 0xE18($a0)
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3608)));
    // 0x246d08: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x246D08u;
    {
        const bool branch_taken_0x246d08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D08u;
        // 0x246d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d08) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246D10u;
    // 0x246d10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x246D10u;
    {
        const bool branch_taken_0x246d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D10u;
        // 0x246d14: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d10) {
            ctx->pc = 0x246D2Cu;
            goto label_246d2c;
        }
    }
    ctx->pc = 0x246D18u;
label_246d18:
    // 0x246d18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x246d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_246d1c:
    // 0x246d1c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x246d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x246d20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x246D20u;
    {
        const bool branch_taken_0x246d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D20u;
        // 0x246d24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d20) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246D28u;
    // 0x246d28: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x246d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_246d2c:
    // 0x246d2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x246d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x246d30: 0x0  nop
    ctx->pc = 0x246d30u;
    // NOP
    // 0x246d34: 0x0  nop
    ctx->pc = 0x246d34u;
    // NOP
    // 0x246d38: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x246D38u;
    {
        const bool branch_taken_0x246d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d38) {
            ctx->pc = 0x246D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D38u;
            // 0x246d3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d1c;
        }
    }
    ctx->pc = 0x246D40u;
    // 0x246d40: 0x0  nop
    ctx->pc = 0x246d40u;
    // NOP
    // 0x246d44: 0x54c0fff4  bnel        $a2, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x246D44u;
    {
        const bool branch_taken_0x246d44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d44) {
            ctx->pc = 0x246D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246D44u;
            // 0x246d48: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246d18;
        }
    }
    ctx->pc = 0x246D4Cu;
    // 0x246d4c: 0x84680002  lh          $t0, 0x2($v1)
    ctx->pc = 0x246d4cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_246d50:
    // 0x246d50: 0x3e00008  jr          $ra
    ctx->pc = 0x246D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D50u;
        // 0x246d54: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246D58u;
}
