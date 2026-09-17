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

// Function: sub_00328238
// Address: 0x328238 - 0x328278
void sub_00328238_0x328238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328238_0x328238");
#endif

    ctx->pc = 0x328238u;

    // 0x328238: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x328238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32823c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x328240: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x328240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x328244: 0x2463cc28  addiu       $v1, $v1, -0x33D8
    ctx->pc = 0x328244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954024));
    // 0x328248: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x328248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32824c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32824cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328250: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x328250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x328254: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x328254u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x328258: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x328258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32825c: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x32825cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x328260: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x328260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x328264: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x328264u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x328268: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x328268u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x32826c: 0x3e00008  jr          $ra
    ctx->pc = 0x32826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32826Cu;
        // 0x328270: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328274u;
    // 0x328274: 0x0  nop
    ctx->pc = 0x328274u;
    // NOP
    ctx->pc = 0x328278u;
}
