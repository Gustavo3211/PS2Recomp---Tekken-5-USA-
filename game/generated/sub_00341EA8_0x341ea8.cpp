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

// Function: sub_00341EA8
// Address: 0x341ea8 - 0x341ed8
void sub_00341EA8_0x341ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341EA8_0x341ea8");
#endif

    ctx->pc = 0x341ea8u;

    // 0x341ea8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x341eac: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x341eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x341eb0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x341eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x341eb4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x341eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x341eb8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x341eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x341ebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x341ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x341ec0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x341ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x341ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341ec8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x341ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x341ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x341ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341ECCu;
        // 0x341ed0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341ED4u;
    // 0x341ed4: 0x0  nop
    ctx->pc = 0x341ed4u;
    // NOP
    ctx->pc = 0x341ed8u;
}
