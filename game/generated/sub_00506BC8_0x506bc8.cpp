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

// Function: sub_00506BC8
// Address: 0x506bc8 - 0x506c00
void sub_00506BC8_0x506bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506BC8_0x506bc8");
#endif

    ctx->pc = 0x506bc8u;

    // 0x506bc8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x506bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x506bcc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x506bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x506bd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x506bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x506bd4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x506bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x506bd8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x506bd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x506bdc: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x506bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x506be0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x506be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x506be4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506be8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x506be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x506bec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506bf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506bf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x506BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506BF8u;
        // 0x506bfc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506C00u;
}
