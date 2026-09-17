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

// Function: sub_00371F00
// Address: 0x371f00 - 0x371f50
void sub_00371F00_0x371f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371F00_0x371f00");
#endif

    switch (ctx->pc) {
        case 0x371f24u: goto label_371f24;
        case 0x371f38u: goto label_371f38;
        default: break;
    }

    ctx->pc = 0x371f00u;

    // 0x371f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371f04: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371f0c: 0x24507600  addiu       $s0, $v0, 0x7600
    ctx->pc = 0x371f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30208));
    // 0x371f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371f10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7600u));
    // 0x371f14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x371F14u;
    {
        const bool branch_taken_0x371f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F14u;
        // 0x371f18: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f14) {
            ctx->pc = 0x371F38u;
            goto label_371f38;
        }
    }
    ctx->pc = 0x371F1Cu;
    // 0x371f1c: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x371F1Cu;
    SET_GPR_U32(ctx, 31, 0x371F24u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x371F1Cu, 0x371F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F24u;
label_371f24:
    // 0x371f24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371f28: 0x24a50d88  addiu       $a1, $a1, 0xD88
    ctx->pc = 0x371f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
    // 0x371f2c: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x371f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x371f30: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371F30u;
    SET_GPR_U32(ctx, 31, 0x371F38u);
    ctx->pc = 0x371F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F30u;
    // 0x371f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371F30u, 0x371F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F38u;
label_371f38:
    // 0x371f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371f40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371f44: 0x3e00008  jr          $ra
    ctx->pc = 0x371F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F44u;
        // 0x371f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371F4Cu;
    // 0x371f4c: 0x0  nop
    ctx->pc = 0x371f4cu;
    // NOP
    ctx->pc = 0x371f50u;
}
