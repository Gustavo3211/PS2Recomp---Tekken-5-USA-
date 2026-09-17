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

// Function: sub_00372090
// Address: 0x372090 - 0x3720e0
void sub_00372090_0x372090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372090_0x372090");
#endif

    switch (ctx->pc) {
        case 0x3720b4u: goto label_3720b4;
        case 0x3720c8u: goto label_3720c8;
        default: break;
    }

    ctx->pc = 0x372090u;

    // 0x372090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372094: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37209c: 0x24507610  addiu       $s0, $v0, 0x7610
    ctx->pc = 0x37209cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30224));
    // 0x3720a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3720a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7610u));
    // 0x3720a4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3720A4u;
    {
        const bool branch_taken_0x3720a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3720A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720A4u;
        // 0x3720a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720a4) {
            ctx->pc = 0x3720C8u;
            goto label_3720c8;
        }
    }
    ctx->pc = 0x3720ACu;
    // 0x3720ac: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x3720ACu;
    SET_GPR_U32(ctx, 31, 0x3720B4u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x3720ACu, 0x3720B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720B4u;
label_3720b4:
    // 0x3720b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3720b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3720b8: 0x24a50e18  addiu       $a1, $a1, 0xE18
    ctx->pc = 0x3720b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3608));
    // 0x3720bc: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x3720bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x3720c0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3720C0u;
    SET_GPR_U32(ctx, 31, 0x3720C8u);
    ctx->pc = 0x3720C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3720C0u;
    // 0x3720c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3720C0u, 0x3720C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3720C8u;
label_3720c8:
    // 0x3720c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3720c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3720cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3720ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3720d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3720d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3720d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3720D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3720D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720D4u;
        // 0x3720d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3720D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3720DCu;
    // 0x3720dc: 0x0  nop
    ctx->pc = 0x3720dcu;
    // NOP
    ctx->pc = 0x3720e0u;
}
