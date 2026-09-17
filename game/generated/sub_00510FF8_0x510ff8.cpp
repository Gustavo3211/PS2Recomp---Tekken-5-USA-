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

// Function: sub_00510FF8
// Address: 0x510ff8 - 0x511038
void sub_00510FF8_0x510ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510FF8_0x510ff8");
#endif

    ctx->pc = 0x510ff8u;

    // 0x510ff8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x510ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x510ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x511000: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x511000u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511004: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x511004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x511008: 0xa4a6004e  sh          $a2, 0x4E($a1)
    ctx->pc = 0x511008u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 78), (uint16_t)GPR_U32(ctx, 6));
    // 0x51100c: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x51100cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511010: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x511010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x511014: 0x30e68000  andi        $a2, $a3, 0x8000
    ctx->pc = 0x511014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x511018: 0xa4a70052  sh          $a3, 0x52($a1)
    ctx->pc = 0x511018u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 82), (uint16_t)GPR_U32(ctx, 7));
    // 0x51101c: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x51101cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x511020: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x511020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x511024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511028: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x511028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51102c: 0xa4a20050  sh          $v0, 0x50($a1)
    ctx->pc = 0x51102cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x511030: 0x3e00008  jr          $ra
    ctx->pc = 0x511030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511030u;
        // 0x511034: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511038u;
}
