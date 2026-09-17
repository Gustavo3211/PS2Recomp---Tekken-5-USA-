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

// Function: sub_004A64B0
// Address: 0x4a64b0 - 0x4a64e0
void sub_004A64B0_0x4a64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A64B0_0x4a64b0");
#endif

    ctx->pc = 0x4a64b0u;

    // 0x4a64b0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a64b4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x4a64b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a64b8: 0x8c440c40  lw          $a0, 0xC40($v0)
    ctx->pc = 0x4a64b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a64bc: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x4a64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x4a64c0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a64c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a64c4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x4a64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4a64c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a64cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a64ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a64d0: 0x28434000  slti        $v1, $v0, 0x4000
    ctx->pc = 0x4a64d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x4a64d4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x4a64d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x4a64d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A64D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64D8u;
        // 0x4a64dc: 0xa4850000  sh          $a1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A64D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A64E0u;
}
