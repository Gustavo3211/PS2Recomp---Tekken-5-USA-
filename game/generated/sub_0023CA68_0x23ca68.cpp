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

// Function: sub_0023CA68
// Address: 0x23ca68 - 0x23cac8
void sub_0023CA68_0x23ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CA68_0x23ca68");
#endif

    switch (ctx->pc) {
        case 0x23cab4u: goto label_23cab4;
        default: break;
    }

    ctx->pc = 0x23ca68u;

    // 0x23ca68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ca6c: 0x2784a960  addiu       $a0, $gp, -0x56A0
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945120));
    // 0x23ca70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ca74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ca78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ca7c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x23CA7Cu;
    {
        const bool branch_taken_0x23ca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA7Cu;
        // 0x23ca80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca7c) {
            ctx->pc = 0x23CABCu;
            goto label_23cabc;
        }
    }
    ctx->pc = 0x23CA84u;
    // 0x23ca84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23ca88: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CA88u;
    {
        const bool branch_taken_0x23ca88 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23ca88) {
            ctx->pc = 0x23CA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CA88u;
            // 0x23ca8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CABCu;
            goto label_23cabc;
        }
    }
    ctx->pc = 0x23CA90u;
    // 0x23ca90: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x23ca94: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x23ca98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23ca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ca9c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x23ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x23caa0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23caa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23caa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23caa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caac: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x23CAACu;
    SET_GPR_U32(ctx, 31, 0x23CAB4u);
    ctx->pc = 0x23CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAACu;
    // 0x23cab0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x23CAACu, 0x23CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAB4u;
label_23cab4:
    // 0x23cab4: 0xaf80a960  sw          $zero, -0x56A0($gp)
    ctx->pc = 0x23cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945120), GPR_U32(ctx, 0));
    // 0x23cab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cabc:
    // 0x23cabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cac0: 0x3e00008  jr          $ra
    ctx->pc = 0x23CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAC0u;
        // 0x23cac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CAC8u;
}
