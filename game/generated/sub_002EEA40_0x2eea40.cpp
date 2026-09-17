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

// Function: sub_002EEA40
// Address: 0x2eea40 - 0x2eeab8
void sub_002EEA40_0x2eea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEA40_0x2eea40");
#endif

    switch (ctx->pc) {
        case 0x2eeaacu: goto label_2eeaac;
        default: break;
    }

    ctx->pc = 0x2eea40u;

    // 0x2eea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eea44: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2eea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eea48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eea4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eea50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEA50u;
    {
        const bool branch_taken_0x2eea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA50u;
        // 0x2eea54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea50) {
            ctx->pc = 0x2EEA68u;
            goto label_2eea68;
        }
    }
    ctx->pc = 0x2EEA58u;
    // 0x2eea58: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eea5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eea60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA60u;
    {
        const bool branch_taken_0x2eea60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eea60) {
            ctx->pc = 0x2EEA74u;
            goto label_2eea74;
        }
    }
    ctx->pc = 0x2EEA68u;
label_2eea68:
    // 0x2eea68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eea68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eea6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea70: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eea70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eea74:
    // 0x2eea74: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEA74u;
    {
        const bool branch_taken_0x2eea74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA74u;
        // 0x2eea78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea74) {
            ctx->pc = 0x2EEAB0u;
            goto label_2eeab0;
        }
    }
    ctx->pc = 0x2EEA7Cu;
    // 0x2eea7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eea80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEA80u;
    {
        const bool branch_taken_0x2eea80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea80) {
            ctx->pc = 0x2EEA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA80u;
            // 0x2eea84: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA9Cu;
            goto label_2eea9c;
        }
    }
    ctx->pc = 0x2EEA88u;
    // 0x2eea88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eea8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eea90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA90u;
    {
        const bool branch_taken_0x2eea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eea90) {
            ctx->pc = 0x2EEAA4u;
            goto label_2eeaa4;
        }
    }
    ctx->pc = 0x2EEA98u;
    // 0x2eea98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eea98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eea9c:
    // 0x2eea9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeaa0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eeaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eeaa4:
    // 0x2eeaa4: 0xc0bbe18  jal         func_2EF860
    ctx->pc = 0x2EEAA4u;
    SET_GPR_U32(ctx, 31, 0x2EEAACu);
    ctx->pc = 0x2EF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF860u, 0x2EEAA4u, 0x2EEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAACu;
label_2eeaac:
    // 0x2eeaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eeaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eeab0:
    // 0x2eeab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAB0u;
        // 0x2eeab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEAB8u;
}
