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

// Function: sub_00225CE8
// Address: 0x225ce8 - 0x225d50
void sub_00225CE8_0x225ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225CE8_0x225ce8");
#endif

    switch (ctx->pc) {
        case 0x225d18u: goto label_225d18;
        case 0x225d20u: goto label_225d20;
        default: break;
    }

    ctx->pc = 0x225ce8u;

    // 0x225ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225cec: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225d00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225d04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225d08: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x225D08u;
    {
        const bool branch_taken_0x225d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x225D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D08u;
        // 0x225d0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d08) {
            ctx->pc = 0x225D34u;
            goto label_225d34;
        }
    }
    ctx->pc = 0x225D10u;
    // 0x225d10: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x225d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225d14: 0x0  nop
    ctx->pc = 0x225d14u;
    // NOP
label_225d18:
    // 0x225d18: 0xc089622  jal         func_225888
    ctx->pc = 0x225D18u;
    SET_GPR_U32(ctx, 31, 0x225D20u);
    ctx->pc = 0x225D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D18u;
    // 0x225d1c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x225D18u, 0x225D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D20u;
label_225d20:
    // 0x225d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225D20u;
    {
        const bool branch_taken_0x225d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D20u;
        // 0x225d24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d20) {
            ctx->pc = 0x225D38u;
            goto label_225d38;
        }
    }
    ctx->pc = 0x225D28u;
    // 0x225d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225d2c: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225D2Cu;
    {
        const bool branch_taken_0x225d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x225D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D2Cu;
        // 0x225d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d2c) {
            ctx->pc = 0x225D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225d18;
        }
    }
    ctx->pc = 0x225D34u;
label_225d34:
    // 0x225d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225d38:
    // 0x225d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225d40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225d44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225d48: 0x3e00008  jr          $ra
    ctx->pc = 0x225D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D48u;
        // 0x225d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225D50u;
}
