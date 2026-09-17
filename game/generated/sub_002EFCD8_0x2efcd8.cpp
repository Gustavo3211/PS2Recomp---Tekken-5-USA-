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

// Function: sub_002EFCD8
// Address: 0x2efcd8 - 0x2efd58
void sub_002EFCD8_0x2efcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFCD8_0x2efcd8");
#endif

    ctx->pc = 0x2efcd8u;

    // 0x2efcd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2efcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efcdc: 0x248600b8  addiu       $a2, $a0, 0xB8
    ctx->pc = 0x2efcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x2efce0: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2efce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2efce4: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x2efce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x2efce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2efce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2efcec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFCECu;
    {
        const bool branch_taken_0x2efcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCECu;
        // 0x2efcf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcec) {
            ctx->pc = 0x2EFD04u;
            goto label_2efd04;
        }
    }
    ctx->pc = 0x2EFCF4u;
    // 0x2efcf4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2efcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2efcf8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2efcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2efcfc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFCFCu;
    {
        const bool branch_taken_0x2efcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efcfc) {
            ctx->pc = 0x2EFD10u;
            goto label_2efd10;
        }
    }
    ctx->pc = 0x2EFD04u;
label_2efd04:
    // 0x2efd04: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2efd04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2efd08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd0c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2efd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2efd10:
    // 0x2efd10: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EFD10u;
    {
        const bool branch_taken_0x2efd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd10) {
            ctx->pc = 0x2EFD50u;
            goto label_2efd50;
        }
    }
    ctx->pc = 0x2EFD18u;
    // 0x2efd18: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EFD18u;
    {
        const bool branch_taken_0x2efd18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd18) {
            ctx->pc = 0x2EFD50u;
            goto label_2efd50;
        }
    }
    ctx->pc = 0x2EFD20u;
    // 0x2efd20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2efd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2efd24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFD24u;
    {
        const bool branch_taken_0x2efd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD24u;
        // 0x2efd28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd24) {
            ctx->pc = 0x2EFD3Cu;
            goto label_2efd3c;
        }
    }
    ctx->pc = 0x2EFD2Cu;
    // 0x2efd2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2efd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2efd30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2efd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2efd34: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFD34u;
    {
        const bool branch_taken_0x2efd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD34u;
        // 0x2efd38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd34) {
            ctx->pc = 0x2EFD4Cu;
            goto label_2efd4c;
        }
    }
    ctx->pc = 0x2EFD3Cu;
label_2efd3c:
    // 0x2efd3c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2efd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2efd40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd44: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2efd44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2efd48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2efd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2efd4c:
    // 0x2efd4c: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x2efd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
label_2efd50:
    // 0x2efd50: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFD58u;
}
