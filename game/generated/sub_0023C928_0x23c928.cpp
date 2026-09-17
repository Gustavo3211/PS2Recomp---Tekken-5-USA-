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

// Function: sub_0023C928
// Address: 0x23c928 - 0x23c990
void sub_0023C928_0x23c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C928_0x23c928");
#endif

    switch (ctx->pc) {
        case 0x23c964u: goto label_23c964;
        case 0x23c980u: goto label_23c980;
        default: break;
    }

    ctx->pc = 0x23c928u;

    // 0x23c928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c930: 0x2790a960  addiu       $s0, $gp, -0x56A0
    ctx->pc = 0x23c930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945120));
    // 0x23c934: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c938: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23C938u;
    {
        const bool branch_taken_0x23c938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C938u;
        // 0x23c93c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c938) {
            ctx->pc = 0x23C980u;
            goto label_23c980;
        }
    }
    ctx->pc = 0x23C940u;
    // 0x23c940: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x23c940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x23c944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c948: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x23c948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x23c94c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x23c950: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23c950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c95c: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x23C95Cu;
    SET_GPR_U32(ctx, 31, 0x23C964u);
    ctx->pc = 0x23C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C95Cu;
    // 0x23c960: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x23C95Cu, 0x23C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C964u;
label_23c964:
    // 0x23c964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c968: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23c968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c96c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c970: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x23c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x23c974: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23c974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23c978: 0xc0924a2  jal         func_249288
    ctx->pc = 0x23C978u;
    SET_GPR_U32(ctx, 31, 0x23C980u);
    ctx->pc = 0x23C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C978u;
    // 0x23c97c: 0xaf83a960  sw          $v1, -0x56A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x23C978u, 0x23C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C980u;
label_23c980:
    // 0x23c980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c988: 0x3e00008  jr          $ra
    ctx->pc = 0x23C988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C988u;
        // 0x23c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C990u;
}
