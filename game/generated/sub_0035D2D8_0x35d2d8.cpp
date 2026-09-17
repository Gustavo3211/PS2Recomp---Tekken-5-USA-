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

// Function: sub_0035D2D8
// Address: 0x35d2d8 - 0x35d320
void sub_0035D2D8_0x35d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D2D8_0x35d2d8");
#endif

    switch (ctx->pc) {
        case 0x35d2f8u: goto label_35d2f8;
        case 0x35d300u: goto label_35d300;
        default: break;
    }

    ctx->pc = 0x35d2d8u;

    // 0x35d2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d2dc: 0xa3a40004  sb          $a0, 0x4($sp)
    ctx->pc = 0x35d2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x35d2e0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x35d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35d2e4: 0xa7a5000c  sh          $a1, 0xC($sp)
    ctx->pc = 0x35d2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x35d2e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d2f0: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35D2F0u;
    SET_GPR_U32(ctx, 31, 0x35D2F8u);
    ctx->pc = 0x35D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2F0u;
    // 0x35d2f4: 0xa7a6000e  sh          $a2, 0xE($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35D2F0u, 0x35D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2F8u;
label_35d2f8:
    // 0x35d2f8: 0xc0d6e14  jal         func_35B850
    ctx->pc = 0x35D2F8u;
    SET_GPR_U32(ctx, 31, 0x35D300u);
    ctx->pc = 0x35D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2F8u;
    // 0x35d2fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B850u, 0x35D2F8u, 0x35D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D300u;
label_35d300:
    // 0x35d300: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35d300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35d304: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x35d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x35d308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d30c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x35d30cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35d310: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35d310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d314: 0x3e00008  jr          $ra
    ctx->pc = 0x35D314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D314u;
        // 0x35d318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D31Cu;
    // 0x35d31c: 0x0  nop
    ctx->pc = 0x35d31cu;
    // NOP
    ctx->pc = 0x35d320u;
}
