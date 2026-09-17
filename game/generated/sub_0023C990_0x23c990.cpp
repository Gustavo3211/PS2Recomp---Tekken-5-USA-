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

// Function: sub_0023C990
// Address: 0x23c990 - 0x23ca00
void sub_0023C990_0x23c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C990_0x23c990");
#endif

    switch (ctx->pc) {
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9f0u: goto label_23c9f0;
        default: break;
    }

    ctx->pc = 0x23c990u;

    // 0x23c990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c994: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c99c: 0x2790a960  addiu       $s0, $gp, -0x56A0
    ctx->pc = 0x23c99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945120));
    // 0x23c9a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c9a4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x23C9A4u;
    {
        const bool branch_taken_0x23c9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A4u;
        // 0x23c9a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9a4) {
            ctx->pc = 0x23C9F0u;
            goto label_23c9f0;
        }
    }
    ctx->pc = 0x23C9ACu;
    // 0x23c9ac: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x23c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x23c9b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c9b4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x23c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x23c9b8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x23c9bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x23c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23c9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9c8: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x23C9C8u;
    SET_GPR_U32(ctx, 31, 0x23C9D0u);
    ctx->pc = 0x23C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9C8u;
    // 0x23c9cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x23C9C8u, 0x23C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9D0u;
label_23c9d0:
    // 0x23c9d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c9d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23c9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c9dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23c9e0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x23c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x23c9e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23c9e8: 0xc0924a2  jal         func_249288
    ctx->pc = 0x23C9E8u;
    SET_GPR_U32(ctx, 31, 0x23C9F0u);
    ctx->pc = 0x23C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9E8u;
    // 0x23c9ec: 0xaf83a960  sw          $v1, -0x56A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x23C9E8u, 0x23C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9F0u;
label_23c9f0:
    // 0x23c9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c9f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9F8u;
        // 0x23c9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CA00u;
}
