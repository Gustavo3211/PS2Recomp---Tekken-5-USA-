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

// Function: sub_002E1CF8
// Address: 0x2e1cf8 - 0x2e1d50
void sub_002E1CF8_0x2e1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1CF8_0x2e1cf8");
#endif

    switch (ctx->pc) {
        case 0x2e1d1cu: goto label_2e1d1c;
        default: break;
    }

    ctx->pc = 0x2e1cf8u;

    // 0x2e1cf8: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2e1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2e1cfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e1d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e1d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1D0Cu;
    {
        const bool branch_taken_0x2e1d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D0Cu;
        // 0x2e1d10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d0c) {
            ctx->pc = 0x2E1D28u;
            goto label_2e1d28;
        }
    }
    ctx->pc = 0x2E1D14u;
    // 0x2e1d14: 0xc087c9c  jal         func_21F270
    ctx->pc = 0x2E1D14u;
    SET_GPR_U32(ctx, 31, 0x2E1D1Cu);
    ctx->pc = 0x21F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F270u, 0x2E1D14u, 0x2E1D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D1Cu;
label_2e1d1c:
    // 0x2e1d1c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e1d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1D20u;
    {
        const bool branch_taken_0x2e1d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D20u;
        // 0x2e1d24: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d20) {
            ctx->pc = 0x2E1D34u;
            goto label_2e1d34;
        }
    }
    ctx->pc = 0x2E1D28u;
label_2e1d28:
    // 0x2e1d28: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e1d2c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1d30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e1d34:
    // 0x2e1d34: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2e1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2e1d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D44u;
        // 0x2e1d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D4Cu;
    // 0x2e1d4c: 0x0  nop
    ctx->pc = 0x2e1d4cu;
    // NOP
    ctx->pc = 0x2e1d50u;
}
