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

// Function: sub_003692E8
// Address: 0x3692e8 - 0x369328
void sub_003692E8_0x3692e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003692E8_0x3692e8");
#endif

    switch (ctx->pc) {
        case 0x369310u: goto label_369310;
        default: break;
    }

    ctx->pc = 0x3692e8u;

    // 0x3692e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3692e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3692ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3692ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3692f0: 0x2790cc50  addiu       $s0, $gp, -0x33B0
    ctx->pc = 0x3692f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954064));
    // 0x3692f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3692f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3692f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3692f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3692FCu;
    {
        const bool branch_taken_0x3692fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692FCu;
        // 0x369300: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3692fc) {
            ctx->pc = 0x369310u;
            goto label_369310;
        }
    }
    ctx->pc = 0x369304u;
    // 0x369304: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369308: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x369308u;
    SET_GPR_U32(ctx, 31, 0x369310u);
    ctx->pc = 0x36930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369308u;
    // 0x36930c: 0x24a52f40  addiu       $a1, $a1, 0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x369308u, 0x369310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369310u;
label_369310:
    // 0x369310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36931c: 0x3e00008  jr          $ra
    ctx->pc = 0x36931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36931Cu;
        // 0x369320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369324u;
    // 0x369324: 0x0  nop
    ctx->pc = 0x369324u;
    // NOP
    ctx->pc = 0x369328u;
}
