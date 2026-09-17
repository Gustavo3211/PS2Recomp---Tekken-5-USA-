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

// Function: sub_00208588
// Address: 0x208588 - 0x2085f0
void sub_00208588_0x208588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208588_0x208588");
#endif

    switch (ctx->pc) {
        case 0x20859cu: goto label_20859c;
        default: break;
    }

    ctx->pc = 0x208588u;

    // 0x208588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20858c: 0xaf84c8bc  sw          $a0, -0x3744($gp)
    ctx->pc = 0x20858cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953148), GPR_U32(ctx, 4));
    // 0x208590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208594: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x208594u;
    SET_GPR_U32(ctx, 31, 0x20859Cu);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x208594u, 0x20859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20859Cu;
label_20859c:
    // 0x20859c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2085a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2085A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085A0u;
        // 0x2085a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085A8u;
    // 0x2085a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2085ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2085acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2085b0: 0x24448858  addiu       $a0, $v0, -0x77A8
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2085b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2085b8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2085B8u;
    {
        const bool branch_taken_0x2085b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2085BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085B8u;
        // 0x2085bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085b8) {
            ctx->pc = 0x2085E4u;
            goto label_2085e4;
        }
    }
    ctx->pc = 0x2085C0u;
    // 0x2085c0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2085c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2085c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2085c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2085C8u;
    {
        const bool branch_taken_0x2085c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2085c8) {
            ctx->pc = 0x2085E4u;
            goto label_2085e4;
        }
    }
    ctx->pc = 0x2085D0u;
    // 0x2085d0: 0x2782c8bc  addiu       $v0, $gp, -0x3744
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953148));
    // 0x2085d4: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2085d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2085dc: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2085dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2085e0: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x2085e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2085e4:
    // 0x2085e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2085E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085E4u;
        // 0x2085e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085ECu;
    // 0x2085ec: 0x0  nop
    ctx->pc = 0x2085ecu;
    // NOP
    ctx->pc = 0x2085f0u;
}
