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

// Function: sub_0049C060
// Address: 0x49c060 - 0x49c0a8
void sub_0049C060_0x49c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C060_0x49c060");
#endif

    ctx->pc = 0x49c060u;

    // 0x49c060: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49c064: 0x24430bac  addiu       $v1, $v0, 0xBAC
    ctx->pc = 0x49c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2988));
    // 0x49c068: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x49c068u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c06c: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x49c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49c070: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49c070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c074: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49C074u;
    {
        const bool branch_taken_0x49c074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C074u;
        // 0x49c078: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c074) {
            ctx->pc = 0x49C098u;
            goto label_49c098;
        }
    }
    ctx->pc = 0x49C07Cu;
    // 0x49c07c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x49c07cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x49c080: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49c080u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c088: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49c088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49c090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x49C090u;
    {
        const bool branch_taken_0x49c090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C090u;
        // 0x49c094: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c090) {
            ctx->pc = 0x49C0A0u;
            goto label_49c0a0;
        }
    }
    ctx->pc = 0x49C098u;
label_49c098:
    // 0x49c098: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x49c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x49c09c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49c09cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_49c0a0:
    // 0x49c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x49C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0A0u;
        // 0x49c0a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C0A8u;
}
