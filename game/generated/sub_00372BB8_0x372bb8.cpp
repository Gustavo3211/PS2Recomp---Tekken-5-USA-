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

// Function: sub_00372BB8
// Address: 0x372bb8 - 0x372c08
void sub_00372BB8_0x372bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372BB8_0x372bb8");
#endif

    switch (ctx->pc) {
        case 0x372bdcu: goto label_372bdc;
        case 0x372bf4u: goto label_372bf4;
        default: break;
    }

    ctx->pc = 0x372bb8u;

    // 0x372bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372bbc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372bc4: 0x245076f0  addiu       $s0, $v0, 0x76F0
    ctx->pc = 0x372bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30448));
    // 0x372bc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D76F0u));
    // 0x372bcc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372BCCu;
    {
        const bool branch_taken_0x372bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BCCu;
        // 0x372bd0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bcc) {
            ctx->pc = 0x372BF4u;
            goto label_372bf4;
        }
    }
    ctx->pc = 0x372BD4u;
    // 0x372bd4: 0xc0dc420  jal         func_371080
    ctx->pc = 0x372BD4u;
    SET_GPR_U32(ctx, 31, 0x372BDCu);
    ctx->pc = 0x371080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371080u, 0x372BD4u, 0x372BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BDCu;
label_372bdc:
    // 0x372bdc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372be0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372be4: 0x24a51b08  addiu       $a1, $a1, 0x1B08
    ctx->pc = 0x372be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6920));
    // 0x372be8: 0x24c67550  addiu       $a2, $a2, 0x7550
    ctx->pc = 0x372be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30032));
    // 0x372bec: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372BECu;
    SET_GPR_U32(ctx, 31, 0x372BF4u);
    ctx->pc = 0x372BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BECu;
    // 0x372bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372BECu, 0x372BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BF4u;
label_372bf4:
    // 0x372bf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372bfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372c00: 0x3e00008  jr          $ra
    ctx->pc = 0x372C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C00u;
        // 0x372c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C08u;
}
