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

// Function: sub_0024C4C0
// Address: 0x24c4c0 - 0x24c500
void sub_0024C4C0_0x24c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C4C0_0x24c4c0");
#endif

    ctx->pc = 0x24c4c0u;

    // 0x24c4c0: 0x80850020  lb          $a1, 0x20($a0)
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24c4c4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24c4c8: 0x24631880  addiu       $v1, $v1, 0x1880
    ctx->pc = 0x24c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6272));
    // 0x24c4cc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x24c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x24c4d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24c4d4: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x24c4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c4d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x24c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24c4dc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x24c4dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4e0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x24c4e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c4e4: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x24c4e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x24c4e8: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x24c4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x24c4ec: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x24c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x24c4f0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x24c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x24c4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4F4u;
        // 0x24c4f8: 0xac870034  sw          $a3, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C4FCu;
    // 0x24c4fc: 0x0  nop
    ctx->pc = 0x24c4fcu;
    // NOP
    ctx->pc = 0x24c500u;
}
