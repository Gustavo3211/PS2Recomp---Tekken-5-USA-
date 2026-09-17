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

// Function: sub_00329148
// Address: 0x329148 - 0x329188
void sub_00329148_0x329148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329148_0x329148");
#endif

    ctx->pc = 0x329148u;

    // 0x329148: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x329148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32914c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x329150: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x329150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x329154: 0x2463cc28  addiu       $v1, $v1, -0x33D8
    ctx->pc = 0x329154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954024));
    // 0x329158: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x329158u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32915c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32915cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329160: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x329164: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x329164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x329168: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x329168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32916c: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x32916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x329170: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x329174: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x329174u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x329178: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x329178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x32917c: 0x3e00008  jr          $ra
    ctx->pc = 0x32917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32917Cu;
        // 0x329180: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329184u;
    // 0x329184: 0x0  nop
    ctx->pc = 0x329184u;
    // NOP
    ctx->pc = 0x329188u;
}
