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

// Function: sub_0035B6E8
// Address: 0x35b6e8 - 0x35b738
void sub_0035B6E8_0x35b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B6E8_0x35b6e8");
#endif

    switch (ctx->pc) {
        case 0x35b6f8u: goto label_35b6f8;
        case 0x35b708u: goto label_35b708;
        case 0x35b71cu: goto label_35b71c;
        default: break;
    }

    ctx->pc = 0x35b6e8u;

    // 0x35b6e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6ECu;
        // 0x35b6f0: 0xac44134c  sw          $a0, 0x134C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6F4u;
    // 0x35b6f4: 0x0  nop
    ctx->pc = 0x35b6f4u;
    // NOP
label_35b6f8:
    // 0x35b6f8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35b6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6FCu;
        // 0x35b700: 0x8c62134c  lw          $v0, 0x134C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4940)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B704u;
    // 0x35b704: 0x0  nop
    ctx->pc = 0x35b704u;
    // NOP
label_35b708:
    // 0x35b708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35b710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35b714: 0xc0d6dae  jal         func_35B6B8
    ctx->pc = 0x35B714u;
    SET_GPR_U32(ctx, 31, 0x35B71Cu);
    ctx->pc = 0x35B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B714u;
    // 0x35b718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6B8u, 0x35B714u, 0x35B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B71Cu;
label_35b71c:
    // 0x35b71c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x35b71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x35b720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35b724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b728: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x35b72c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B72Cu;
        // 0x35b730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B734u;
    // 0x35b734: 0x0  nop
    ctx->pc = 0x35b734u;
    // NOP
    ctx->pc = 0x35b738u;
}
