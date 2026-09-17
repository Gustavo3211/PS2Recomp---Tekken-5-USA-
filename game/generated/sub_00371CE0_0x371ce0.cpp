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

// Function: sub_00371CE0
// Address: 0x371ce0 - 0x371d18
void sub_00371CE0_0x371ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371CE0_0x371ce0");
#endif

    ctx->pc = 0x371ce0u;

    // 0x371ce0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x371ce4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x371ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x371ce8: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x371ce8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x371cec: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x371cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x371cf0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x371cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x371cf4: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x371cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x371cf8: 0x8c6237cc  lw          $v0, 0x37CC($v1)
    ctx->pc = 0x371cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E37CCu));
    // 0x371cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371CFCu;
    {
        const bool branch_taken_0x371cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CFCu;
        // 0x371d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cfc) {
            ctx->pc = 0x371D0Cu;
            goto label_371d0c;
        }
    }
    ctx->pc = 0x371D04u;
    // 0x371d04: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x371d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371d08: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x371d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_371d0c:
    // 0x371d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x371D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371D14u;
    // 0x371d14: 0x0  nop
    ctx->pc = 0x371d14u;
    // NOP
    ctx->pc = 0x371d18u;
}
