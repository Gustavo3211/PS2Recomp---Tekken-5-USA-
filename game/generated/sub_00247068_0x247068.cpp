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

// Function: sub_00247068
// Address: 0x247068 - 0x2470f0
void sub_00247068_0x247068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247068_0x247068");
#endif

    switch (ctx->pc) {
        case 0x24707cu: goto label_24707c;
        case 0x2470d8u: goto label_2470d8;
        default: break;
    }

    ctx->pc = 0x247068u;

    // 0x247068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24706c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247074: 0xc091c0e  jal         func_247038
    ctx->pc = 0x247074u;
    SET_GPR_U32(ctx, 31, 0x24707Cu);
    ctx->pc = 0x247078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247074u;
    // 0x247078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247038u, 0x247074u, 0x24707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24707Cu;
label_24707c:
    // 0x24707c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24707cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247080: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x247080u;
    {
        const bool branch_taken_0x247080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247080) {
            ctx->pc = 0x247084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247080u;
            // 0x247084: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470B8u;
            goto label_2470b8;
        }
    }
    ctx->pc = 0x247088u;
    // 0x247088: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x247088u;
    {
        const bool branch_taken_0x247088 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247088) {
            ctx->pc = 0x2470B4u;
            goto label_2470b4;
        }
    }
    ctx->pc = 0x247090u;
    // 0x247090: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x247090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x247094: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x247094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x247098: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x247098u;
    {
        const bool branch_taken_0x247098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247098) {
            ctx->pc = 0x24709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247098u;
            // 0x24709c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470A8u;
            goto label_2470a8;
        }
    }
    ctx->pc = 0x2470A0u;
    // 0x2470a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2470A0u;
    {
        const bool branch_taken_0x2470a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A0u;
        // 0x2470a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470a0) {
            ctx->pc = 0x2470B4u;
            goto label_2470b4;
        }
    }
    ctx->pc = 0x2470A8u;
label_2470a8:
    // 0x2470a8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2470a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2470ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2470acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2470b0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2470b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2470b4:
    // 0x2470b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2470b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2470b8:
    // 0x2470b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2470b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2470bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2470BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470BCu;
        // 0x2470c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470C4u;
    // 0x2470c4: 0x0  nop
    ctx->pc = 0x2470c4u;
    // NOP
    // 0x2470c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2470cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2470ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2470d0: 0xc091c0e  jal         func_247038
    ctx->pc = 0x2470D0u;
    SET_GPR_U32(ctx, 31, 0x2470D8u);
    ctx->pc = 0x247038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247038u, 0x2470D0u, 0x2470D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470D8u;
label_2470d8:
    // 0x2470d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2470d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470dc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2470DCu;
    {
        const bool branch_taken_0x2470dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2470dc) {
            ctx->pc = 0x2470E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470DCu;
            // 0x2470e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470E4u;
            goto label_2470e4;
        }
    }
    ctx->pc = 0x2470E4u;
label_2470e4:
    // 0x2470e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2470e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2470E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470E8u;
        // 0x2470ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470F0u;
}
