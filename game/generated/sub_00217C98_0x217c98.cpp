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

// Function: sub_00217C98
// Address: 0x217c98 - 0x217cd8
void sub_00217C98_0x217c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217C98_0x217c98");
#endif

    switch (ctx->pc) {
        case 0x217cacu: goto label_217cac;
        case 0x217cb8u: goto label_217cb8;
        default: break;
    }

    ctx->pc = 0x217c98u;

    // 0x217c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217ca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217ca4: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x217CA4u;
    SET_GPR_U32(ctx, 31, 0x217CACu);
    ctx->pc = 0x217CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CA4u;
    // 0x217ca8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x217CA4u, 0x217CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CACu;
label_217cac:
    // 0x217cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217cb0: 0xc0b6708  jal         func_2D9C20
    ctx->pc = 0x217CB0u;
    SET_GPR_U32(ctx, 31, 0x217CB8u);
    ctx->pc = 0x217CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CB0u;
    // 0x217cb4: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C20u, 0x217CB0u, 0x217CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CB8u;
label_217cb8:
    // 0x217cb8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x217cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x217cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217cc0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x217cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217ccc: 0xac83886c  sw          $v1, -0x7794($a0)
    ctx->pc = 0x217cccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x217cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x217CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD0u;
        // 0x217cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217CD8u;
}
