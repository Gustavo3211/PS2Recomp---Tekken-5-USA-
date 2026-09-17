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

// Function: sub_0028DA90
// Address: 0x28da90 - 0x28dae8
void sub_0028DA90_0x28da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DA90_0x28da90");
#endif

    switch (ctx->pc) {
        case 0x28dad8u: goto label_28dad8;
        default: break;
    }

    ctx->pc = 0x28da90u;

    // 0x28da90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28da94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28da94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28da98: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x28da98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28da9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28daa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DAA0u;
    {
        const bool branch_taken_0x28daa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA0u;
        // 0x28daa4: 0x38430003  xori        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daa0) {
            ctx->pc = 0x28DABCu;
            goto label_28dabc;
        }
    }
    ctx->pc = 0x28DAA8u;
    // 0x28daa8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DAA8u;
    {
        const bool branch_taken_0x28daa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28daa8) {
            ctx->pc = 0x28DAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DAA8u;
            // 0x28daac: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DAC0u;
            goto label_28dac0;
        }
    }
    ctx->pc = 0x28DAB0u;
    // 0x28dab0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x28dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x28dab4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DAB4u;
    {
        const bool branch_taken_0x28dab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB4u;
        // 0x28dab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab4) {
            ctx->pc = 0x28DADCu;
            goto label_28dadc;
        }
    }
    ctx->pc = 0x28DABCu;
label_28dabc:
    // 0x28dabc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28dac0:
    // 0x28dac0: 0x24426f88  addiu       $v0, $v0, 0x6F88
    ctx->pc = 0x28dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x28dac4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28dac8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DAC8u;
    {
        const bool branch_taken_0x28dac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC8u;
        // 0x28dacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac8) {
            ctx->pc = 0x28DAD8u;
            goto label_28dad8;
        }
    }
    ctx->pc = 0x28DAD0u;
    // 0x28dad0: 0xc0a35c2  jal         func_28D708
    ctx->pc = 0x28DAD0u;
    SET_GPR_U32(ctx, 31, 0x28DAD8u);
    ctx->pc = 0x28D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D708u, 0x28DAD0u, 0x28DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAD8u;
label_28dad8:
    // 0x28dad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28dad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28dadc:
    // 0x28dadc: 0x3e00008  jr          $ra
    ctx->pc = 0x28DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DADCu;
        // 0x28dae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DAE4u;
    // 0x28dae4: 0x0  nop
    ctx->pc = 0x28dae4u;
    // NOP
    ctx->pc = 0x28dae8u;
}
