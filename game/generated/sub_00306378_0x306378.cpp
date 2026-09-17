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

// Function: sub_00306378
// Address: 0x306378 - 0x3063e8
void sub_00306378_0x306378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306378_0x306378");
#endif

    switch (ctx->pc) {
        case 0x306398u: goto label_306398;
        case 0x3063ccu: goto label_3063cc;
        default: break;
    }

    ctx->pc = 0x306378u;

    // 0x306378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30637c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x306380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x306380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30638c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x306390: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x306390u;
    SET_GPR_U32(ctx, 31, 0x306398u);
    ctx->pc = 0x306394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306390u;
    // 0x306394: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x306390u, 0x306398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306398u;
label_306398:
    // 0x306398: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x306398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x30639c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3063a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3063A0u;
    {
        const bool branch_taken_0x3063a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3063a0) {
            ctx->pc = 0x3063A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3063A0u;
            // 0x3063a4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3063BCu;
            goto label_3063bc;
        }
    }
    ctx->pc = 0x3063A8u;
    // 0x3063a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3063ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3063acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3063b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3063B0u;
    {
        const bool branch_taken_0x3063b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063b0) {
            ctx->pc = 0x3063C4u;
            goto label_3063c4;
        }
    }
    ctx->pc = 0x3063B8u;
    // 0x3063b8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3063b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_3063bc:
    // 0x3063bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3063bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3063c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3063c4:
    // 0x3063c4: 0xc0a1618  jal         func_285860
    ctx->pc = 0x3063C4u;
    SET_GPR_U32(ctx, 31, 0x3063CCu);
    ctx->pc = 0x285860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285860u, 0x3063C4u, 0x3063CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063CCu;
label_3063cc:
    // 0x3063cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3063d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3063d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3063d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3063d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3063d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3063dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3063dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3063e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3063E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3063E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063E0u;
        // 0x3063e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3063E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3063E8u;
}
