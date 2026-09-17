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

// Function: sub_0036CDE0
// Address: 0x36cde0 - 0x36ce30
void sub_0036CDE0_0x36cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CDE0_0x36cde0");
#endif

    switch (ctx->pc) {
        case 0x36ce04u: goto label_36ce04;
        case 0x36ce1cu: goto label_36ce1c;
        default: break;
    }

    ctx->pc = 0x36cde0u;

    // 0x36cde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cde4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36cde8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cdec: 0x24506ff8  addiu       $s0, $v0, 0x6FF8
    ctx->pc = 0x36cdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28664));
    // 0x36cdf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6FF8u));
    // 0x36cdf4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CDF4u;
    {
        const bool branch_taken_0x36cdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDF4u;
        // 0x36cdf8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cdf4) {
            ctx->pc = 0x36CE1Cu;
            goto label_36ce1c;
        }
    }
    ctx->pc = 0x36CDFCu;
    // 0x36cdfc: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36CDFCu;
    SET_GPR_U32(ctx, 31, 0x36CE04u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36CDFCu, 0x36CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE04u;
label_36ce04:
    // 0x36ce04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ce08: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ce08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ce0c: 0x24a5dac8  addiu       $a1, $a1, -0x2538
    ctx->pc = 0x36ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957768));
    // 0x36ce10: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36ce14: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CE14u;
    SET_GPR_U32(ctx, 31, 0x36CE1Cu);
    ctx->pc = 0x36CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE14u;
    // 0x36ce18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CE14u, 0x36CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE1Cu;
label_36ce1c:
    // 0x36ce1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ce1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ce20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ce24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x36CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE28u;
        // 0x36ce2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CE30u;
}
