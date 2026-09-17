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

// Function: sub_002DFF80
// Address: 0x2dff80 - 0x2dfff8
void sub_002DFF80_0x2dff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFF80_0x2dff80");
#endif

    switch (ctx->pc) {
        case 0x2dffa8u: goto label_2dffa8;
        case 0x2dffe4u: goto label_2dffe4;
        default: break;
    }

    ctx->pc = 0x2dff80u;

    // 0x2dff80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dff84: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2dff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2dff88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dff8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dff8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dff94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dff94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff98: 0x244437e0  addiu       $a0, $v0, 0x37E0
    ctx->pc = 0x2dff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2dff9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dffa0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2DFFA0u;
    SET_GPR_U32(ctx, 31, 0x2DFFA8u);
    ctx->pc = 0x2DFFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFFA0u;
    // 0x2dffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2DFFA0u, 0x2DFFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFA8u;
label_2dffa8:
    // 0x2dffa8: 0x24480060  addiu       $t0, $v0, 0x60
    ctx->pc = 0x2dffa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2dffac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffb0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2dffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2dffb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dffb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFFB8u;
    {
        const bool branch_taken_0x2dffb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFB8u;
        // 0x2dffbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffb8) {
            ctx->pc = 0x2DFFD0u;
            goto label_2dffd0;
        }
    }
    ctx->pc = 0x2DFFC0u;
    // 0x2dffc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2dffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2dffc4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2dffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2dffc8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFFC8u;
    {
        const bool branch_taken_0x2dffc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dffc8) {
            ctx->pc = 0x2DFFDCu;
            goto label_2dffdc;
        }
    }
    ctx->pc = 0x2DFFD0u;
label_2dffd0:
    // 0x2dffd0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2dffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2dffd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffd8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2dffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2dffdc:
    // 0x2dffdc: 0xc0b7e3c  jal         func_2DF8F0
    ctx->pc = 0x2DFFDCu;
    SET_GPR_U32(ctx, 31, 0x2DFFE4u);
    ctx->pc = 0x2DF8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8F0u, 0x2DFFDCu, 0x2DFFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFFE4u;
label_2dffe4:
    // 0x2dffe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dffe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dffe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dffe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dffec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFF0u;
        // 0x2dfff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFFF8u;
}
