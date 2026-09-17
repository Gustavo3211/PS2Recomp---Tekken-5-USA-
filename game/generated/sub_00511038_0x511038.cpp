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

// Function: sub_00511038
// Address: 0x511038 - 0x511078
void sub_00511038_0x511038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511038_0x511038");
#endif

    ctx->pc = 0x511038u;

    // 0x511038: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x511038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51103c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x51103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x511040: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x511040u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511044: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x511044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x511048: 0xa4a60054  sh          $a2, 0x54($a1)
    ctx->pc = 0x511048u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 84), (uint16_t)GPR_U32(ctx, 6));
    // 0x51104c: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x51104cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511050: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x511050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x511054: 0x30e68000  andi        $a2, $a3, 0x8000
    ctx->pc = 0x511054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x511058: 0xa4a70058  sh          $a3, 0x58($a1)
    ctx->pc = 0x511058u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 88), (uint16_t)GPR_U32(ctx, 7));
    // 0x51105c: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x51105cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x511060: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x511060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x511064: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511068: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x511068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51106c: 0xa4a20056  sh          $v0, 0x56($a1)
    ctx->pc = 0x51106cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x511070: 0x3e00008  jr          $ra
    ctx->pc = 0x511070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511070u;
        // 0x511074: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511078u;
}
