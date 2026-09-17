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

// Function: sub_0023DA88
// Address: 0x23da88 - 0x23dad8
void sub_0023DA88_0x23da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA88_0x23da88");
#endif

    switch (ctx->pc) {
        case 0x23daccu: goto label_23dacc;
        default: break;
    }

    ctx->pc = 0x23da88u;

    // 0x23da88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23da8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x23da8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23da94: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x23da98: 0x8cc700c4  lw          $a3, 0xC4($a2)
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x23da9c: 0x8cc30894  lw          $v1, 0x894($a2)
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2196)));
    // 0x23daa0: 0x90e50040  lbu         $a1, 0x40($a3)
    ctx->pc = 0x23daa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x23daa4: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DAA4u;
    {
        const bool branch_taken_0x23daa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAA4u;
        // 0x23daa8: 0x8c68001c  lw          $t0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daa4) {
            ctx->pc = 0x23DACCu;
            goto label_23dacc;
        }
    }
    ctx->pc = 0x23DAACu;
    // 0x23daac: 0x84c30096  lh          $v1, 0x96($a2)
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x23dab0: 0x94e20044  lhu         $v0, 0x44($a3)
    ctx->pc = 0x23dab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x23dab4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DAB4u;
    {
        const bool branch_taken_0x23dab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dab4) {
            ctx->pc = 0x23DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAB4u;
            // 0x23dab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DAD0u;
            goto label_23dad0;
        }
    }
    ctx->pc = 0x23DABCu;
    // 0x23dabc: 0x94e60046  lhu         $a2, 0x46($a3)
    ctx->pc = 0x23dabcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 70)));
    // 0x23dac0: 0x250530a0  addiu       $a1, $t0, 0x30A0
    ctx->pc = 0x23dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12448));
    // 0x23dac4: 0xc08f666  jal         func_23D998
    ctx->pc = 0x23DAC4u;
    SET_GPR_U32(ctx, 31, 0x23DACCu);
    ctx->pc = 0x23DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAC4u;
    // 0x23dac8: 0xc33023  subu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D998u, 0x23DAC4u, 0x23DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DACCu;
label_23dacc:
    // 0x23dacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dad0:
    // 0x23dad0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD0u;
        // 0x23dad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DAD8u;
}
