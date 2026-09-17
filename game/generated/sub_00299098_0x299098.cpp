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

// Function: sub_00299098
// Address: 0x299098 - 0x2990c8
void sub_00299098_0x299098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299098_0x299098");
#endif

    ctx->pc = 0x299098u;

    // 0x299098: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x299098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x29909c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2990a0: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x2990a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2990a4: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x2990a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x2990a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2990ac: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2990acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2990b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2990b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2990b4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2990b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2990b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2990b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2990bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2990BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2990C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990BCu;
        // 0x2990c0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2990BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2990C4u;
    // 0x2990c4: 0x0  nop
    ctx->pc = 0x2990c4u;
    // NOP
    ctx->pc = 0x2990c8u;
}
