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

// Function: sub_001045D0
// Address: 0x1045d0 - 0x104618
void sub_001045D0_0x1045d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001045D0_0x1045d0");
#endif

    switch (ctx->pc) {
        case 0x1045f4u: goto label_1045f4;
        default: break;
    }

    ctx->pc = 0x1045d0u;

    // 0x1045d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1045d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1045d4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1045d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1045d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1045d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1045dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1045DCu;
    {
        const bool branch_taken_0x1045dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045DCu;
        // 0x1045e0: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045dc) {
            ctx->pc = 0x1045ECu;
            goto label_1045ec;
        }
    }
    ctx->pc = 0x1045E4u;
    // 0x1045e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1045E4u;
    {
        const bool branch_taken_0x1045e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045E4u;
        // 0x1045e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045e4) {
            ctx->pc = 0x1045F8u;
            goto label_1045f8;
        }
    }
    ctx->pc = 0x1045ECu;
label_1045ec:
    // 0x1045ec: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1045ECu;
    SET_GPR_U32(ctx, 31, 0x1045F4u);
    ctx->pc = 0x1045F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045ECu;
    // 0x1045f0: 0xac85087c  sw          $a1, 0x87C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 2172), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036B0u, 0x1045ECu, 0x1045F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045F4u;
label_1045f4:
    // 0x1045f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1045f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1045f8:
    // 0x1045f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1045f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1045fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1045FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045FCu;
        // 0x104600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104604u;
    // 0x104604: 0x0  nop
    ctx->pc = 0x104604u;
    // NOP
    // 0x104608: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x104608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10460c: 0x3e00008  jr          $ra
    ctx->pc = 0x10460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10460Cu;
        // 0x104610: 0x8c62087c  lw          $v0, 0x87C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104614u;
    // 0x104614: 0x0  nop
    ctx->pc = 0x104614u;
    // NOP
    ctx->pc = 0x104618u;
}
