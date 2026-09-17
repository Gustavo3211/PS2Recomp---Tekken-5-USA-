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

// Function: sub_0048CCC8
// Address: 0x48ccc8 - 0x48cd38
void sub_0048CCC8_0x48ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CCC8_0x48ccc8");
#endif

    switch (ctx->pc) {
        case 0x48cce0u: goto label_48cce0;
        default: break;
    }

    ctx->pc = 0x48ccc8u;

    // 0x48ccc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48cccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x48ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x48ccd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48ccd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ccd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x48ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x48ccd8: 0xc12334e  jal         func_48CD38
    ctx->pc = 0x48CCD8u;
    SET_GPR_U32(ctx, 31, 0x48CCE0u);
    ctx->pc = 0x48CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CCD8u;
    // 0x48ccdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CD38u, 0x48CCD8u, 0x48CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CCE0u;
label_48cce0:
    // 0x48cce0: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x48cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x48cce4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48CCE4u;
    {
        const bool branch_taken_0x48cce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CCE4u;
        // 0x48cce8: 0x24635b80  addiu       $v1, $v1, 0x5B80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cce4) {
            ctx->pc = 0x48CD24u;
            goto label_48cd24;
        }
    }
    ctx->pc = 0x48CCECu;
    // 0x48ccec: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x48ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x48ccf0: 0x34a55ac0  ori         $a1, $a1, 0x5AC0
    ctx->pc = 0x48ccf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23232);
    // 0x48ccf4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x48ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48ccf8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x48ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ccfc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x48ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48cd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48cd04: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x48cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x48cd08: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x48cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x48cd0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cd10: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x48cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x48cd14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x48cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cd18: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x48cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x48cd1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cd20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x48cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_48cd24:
    // 0x48cd24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x48cd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cd28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x48cd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x48CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD2Cu;
        // 0x48cd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CD34u;
    // 0x48cd34: 0x0  nop
    ctx->pc = 0x48cd34u;
    // NOP
    ctx->pc = 0x48cd38u;
}
