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

// Function: sub_0031DAA8
// Address: 0x31daa8 - 0x31db28
void sub_0031DAA8_0x31daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DAA8_0x31daa8");
#endif

    switch (ctx->pc) {
        case 0x31dad8u: goto label_31dad8;
        default: break;
    }

    ctx->pc = 0x31daa8u;

    // 0x31daa8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31daac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31daacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dab0: 0x2448f890  addiu       $t0, $v0, -0x770
    ctx->pc = 0x31dab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965392));
    // 0x31dab4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x31dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31dab8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x31dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF890u));
    // 0x31dabc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31dac0: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x31DAC0u;
    {
        const bool branch_taken_0x31dac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x31DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC0u;
        // 0x31dac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dac0) {
            ctx->pc = 0x31DAFCu;
            goto label_31dafc;
        }
    }
    ctx->pc = 0x31DAC8u;
    // 0x31dac8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x31dac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dacc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x31daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dad0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31dad4: 0x0  nop
    ctx->pc = 0x31dad4u;
    // NOP
label_31dad8:
    // 0x31dad8: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x31dad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x31dadc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DADCu;
    {
        const bool branch_taken_0x31dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DADCu;
        // 0x31dae0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dadc) {
            ctx->pc = 0x31DAFCu;
            goto label_31dafc;
        }
    }
    ctx->pc = 0x31DAE4u;
    // 0x31dae4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31dae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31daec: 0x0  nop
    ctx->pc = 0x31daecu;
    // NOP
    // 0x31daf0: 0x0  nop
    ctx->pc = 0x31daf0u;
    // NOP
    // 0x31daf4: 0x5467fff8  bnel        $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31DAF4u;
    {
        const bool branch_taken_0x31daf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x31daf4) {
            ctx->pc = 0x31DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAF4u;
            // 0x31daf8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dad8;
        }
    }
    ctx->pc = 0x31DAFCu;
label_31dafc:
    // 0x31dafc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31db00: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DB00u;
    {
        const bool branch_taken_0x31db00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x31DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB00u;
        // 0x31db04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db00) {
            ctx->pc = 0x31DB20u;
            goto label_31db20;
        }
    }
    ctx->pc = 0x31DB08u;
    // 0x31db08: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x31db08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31db0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31db10: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DB10u;
    {
        const bool branch_taken_0x31db10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31db10) {
            ctx->pc = 0x31DB20u;
            goto label_31db20;
        }
    }
    ctx->pc = 0x31DB18u;
    // 0x31db18: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x31db18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x31db1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31db1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_31db20:
    // 0x31db20: 0x3e00008  jr          $ra
    ctx->pc = 0x31DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DB28u;
}
