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

// Function: sub_00239098
// Address: 0x239098 - 0x2390e0
void sub_00239098_0x239098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239098_0x239098");
#endif

    ctx->pc = 0x239098u;

    // 0x239098: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23909c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2390a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2390a4: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
    // 0x2390a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2390ac: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2390b0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2390b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2390b4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2390b8: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2390b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2390bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2390bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2390c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2390c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2390c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2390c8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2390c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2390cc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2390ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2390d0: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2390d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2390d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2390D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2390D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D4u;
        // 0x2390d8: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2390D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2390DCu;
    // 0x2390dc: 0x0  nop
    ctx->pc = 0x2390dcu;
    // NOP
    ctx->pc = 0x2390e0u;
}
