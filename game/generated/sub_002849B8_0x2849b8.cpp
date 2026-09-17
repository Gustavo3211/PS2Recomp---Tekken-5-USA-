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

// Function: sub_002849B8
// Address: 0x2849b8 - 0x2849f8
void sub_002849B8_0x2849b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002849B8_0x2849b8");
#endif

    switch (ctx->pc) {
        case 0x2849e8u: goto label_2849e8;
        default: break;
    }

    ctx->pc = 0x2849b8u;

    // 0x2849b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2849b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2849bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2849bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2849c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2849c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2849c4: 0x244483c0  addiu       $a0, $v0, -0x7C40
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2849c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2849c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2849cc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2849CCu;
    {
        const bool branch_taken_0x2849cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2849cc) {
            ctx->pc = 0x2849D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2849CCu;
            // 0x2849d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2849ECu;
            goto label_2849ec;
        }
    }
    ctx->pc = 0x2849D4u;
    // 0x2849d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2849d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2849d8: 0xac8001a0  sw          $zero, 0x1A0($a0)
    ctx->pc = 0x2849d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
    // 0x2849dc: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x2849dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x2849e0: 0xc0a10ba  jal         func_2842E8
    ctx->pc = 0x2849E0u;
    SET_GPR_U32(ctx, 31, 0x2849E8u);
    ctx->pc = 0x2849E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2849E0u;
    // 0x2849e4: 0xac82019c  sw          $v0, 0x19C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2842E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2842E8u, 0x2849E0u, 0x2849E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849E8u;
label_2849e8:
    // 0x2849e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2849e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2849ec:
    // 0x2849ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2849ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2849F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849ECu;
        // 0x2849f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2849ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2849F4u;
    // 0x2849f4: 0x0  nop
    ctx->pc = 0x2849f4u;
    // NOP
    ctx->pc = 0x2849f8u;
}
