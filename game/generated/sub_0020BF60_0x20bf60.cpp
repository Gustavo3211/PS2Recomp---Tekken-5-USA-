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

// Function: sub_0020BF60
// Address: 0x20bf60 - 0x20bfb0
void sub_0020BF60_0x20bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF60_0x20bf60");
#endif

    ctx->pc = 0x20bf60u;

    // 0x20bf60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bf64: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x20bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20bf68: 0x24478858  addiu       $a3, $v0, -0x77A8
    ctx->pc = 0x20bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x20bf6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20bf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf70: 0x8ce20044  lw          $v0, 0x44($a3)
    ctx->pc = 0x20bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A889Cu));
    // 0x20bf74: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x20bf74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20bf78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20BF78u;
    {
        const bool branch_taken_0x20bf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF78u;
        // 0x20bf7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf78) {
            ctx->pc = 0x20BFA4u;
            goto label_20bfa4;
        }
    }
    ctx->pc = 0x20BF80u;
    // 0x20bf80: 0x8ce50040  lw          $a1, 0x40($a3)
    ctx->pc = 0x20bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x20bf84: 0x84820090  lh          $v0, 0x90($a0)
    ctx->pc = 0x20bf84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x20bf88: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20bf88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20bf8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BF8Cu;
    {
        const bool branch_taken_0x20bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf8c) {
            ctx->pc = 0x20BF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF8Cu;
            // 0x20bf90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BFA8u;
            goto label_20bfa8;
        }
    }
    ctx->pc = 0x20BF94u;
    // 0x20bf94: 0x84c20090  lh          $v0, 0x90($a2)
    ctx->pc = 0x20bf94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x20bf98: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20bf98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20bf9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20BF9Cu;
    {
        const bool branch_taken_0x20bf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bf9c) {
            ctx->pc = 0x20BFA8u;
            goto label_20bfa8;
        }
    }
    ctx->pc = 0x20BFA4u;
label_20bfa4:
    // 0x20bfa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bfa8:
    // 0x20bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x20BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA8u;
        // 0x20bfac: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BFB0u;
}
