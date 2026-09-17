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

// Function: sub_00295290
// Address: 0x295290 - 0x2952d0
void sub_00295290_0x295290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295290_0x295290");
#endif

    switch (ctx->pc) {
        case 0x2952c0u: goto label_2952c0;
        default: break;
    }

    ctx->pc = 0x295290u;

    // 0x295290: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x295290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x295294: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x295294u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29529c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2952a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2952A0u;
    {
        const bool branch_taken_0x2952a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952A0u;
        // 0x2952a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952a0) {
            ctx->pc = 0x2952C0u;
            goto label_2952c0;
        }
    }
    ctx->pc = 0x2952A8u;
    // 0x2952a8: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x2952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2952ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2952ACu;
    {
        const bool branch_taken_0x2952ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952ac) {
            ctx->pc = 0x2952B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2952ACu;
            // 0x2952b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2952C4u;
            goto label_2952c4;
        }
    }
    ctx->pc = 0x2952B4u;
    // 0x2952b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2952b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2952b8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2952B8u;
    SET_GPR_U32(ctx, 31, 0x2952C0u);
    ctx->pc = 0x2952BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2952B8u;
    // 0x2952bc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2952B8u, 0x2952C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952C0u;
label_2952c0:
    // 0x2952c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2952c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2952c4:
    // 0x2952c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2952C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2952C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952C4u;
        // 0x2952c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2952C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2952CCu;
    // 0x2952cc: 0x0  nop
    ctx->pc = 0x2952ccu;
    // NOP
    ctx->pc = 0x2952d0u;
}
