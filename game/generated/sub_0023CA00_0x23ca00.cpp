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

// Function: sub_0023CA00
// Address: 0x23ca00 - 0x23ca68
void sub_0023CA00_0x23ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CA00_0x23ca00");
#endif

    switch (ctx->pc) {
        case 0x23ca4cu: goto label_23ca4c;
        default: break;
    }

    ctx->pc = 0x23ca00u;

    // 0x23ca00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ca04: 0x2784a960  addiu       $a0, $gp, -0x56A0
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945120));
    // 0x23ca08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ca0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ca10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ca14: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CA14u;
    {
        const bool branch_taken_0x23ca14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA14u;
        // 0x23ca18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca14) {
            ctx->pc = 0x23CA58u;
            goto label_23ca58;
        }
    }
    ctx->pc = 0x23CA1Cu;
    // 0x23ca1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23ca20: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23CA20u;
    {
        const bool branch_taken_0x23ca20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23ca20) {
            ctx->pc = 0x23CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CA20u;
            // 0x23ca24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CA58u;
            goto label_23ca58;
        }
    }
    ctx->pc = 0x23CA28u;
    // 0x23ca28: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x23ca2c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x23ca2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x23ca30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23ca30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ca34: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x23ca38: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23ca3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23ca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca44: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x23CA44u;
    SET_GPR_U32(ctx, 31, 0x23CA4Cu);
    ctx->pc = 0x23CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA44u;
    // 0x23ca48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x23CA44u, 0x23CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA4Cu;
label_23ca4c:
    // 0x23ca4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ca50: 0xaf82a960  sw          $v0, -0x56A0($gp)
    ctx->pc = 0x23ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945120), GPR_U32(ctx, 2));
    // 0x23ca54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca58:
    // 0x23ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA5Cu;
        // 0x23ca60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CA64u;
    // 0x23ca64: 0x0  nop
    ctx->pc = 0x23ca64u;
    // NOP
    ctx->pc = 0x23ca68u;
}
