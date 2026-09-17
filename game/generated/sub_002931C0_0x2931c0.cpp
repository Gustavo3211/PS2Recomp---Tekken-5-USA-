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

// Function: sub_002931C0
// Address: 0x2931c0 - 0x293208
void sub_002931C0_0x2931c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002931C0_0x2931c0");
#endif

    switch (ctx->pc) {
        case 0x2931d0u: goto label_2931d0;
        default: break;
    }

    ctx->pc = 0x2931c0u;

    // 0x2931c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2931c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2931c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2931c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2931c8: 0xc0a4c5a  jal         func_293168
    ctx->pc = 0x2931C8u;
    SET_GPR_U32(ctx, 31, 0x2931D0u);
    ctx->pc = 0x293168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293168u, 0x2931C8u, 0x2931D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931D0u;
label_2931d0:
    // 0x2931d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2931d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2931D4u;
    {
        const bool branch_taken_0x2931d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931D4u;
        // 0x2931d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931d4) {
            ctx->pc = 0x2931F8u;
            goto label_2931f8;
        }
    }
    ctx->pc = 0x2931DCu;
    // 0x2931dc: 0x90630152  lbu         $v1, 0x152($v1)
    ctx->pc = 0x2931dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 338)));
    // 0x2931e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x2931F0u;
            goto label_2931f0;
        }
    }
    ctx->pc = 0x2931E8u;
    // 0x2931e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2931E8u;
    {
        const bool branch_taken_0x2931e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2931ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E8u;
        // 0x2931ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e8) {
            ctx->pc = 0x2931F4u;
            goto label_2931f4;
        }
    }
    ctx->pc = 0x2931F0u;
label_2931f0:
    // 0x2931f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2931f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2931f4:
    // 0x2931f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2931f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2931f8:
    // 0x2931f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2931f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2931fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2931FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931FCu;
        // 0x293200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2931FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293204u;
    // 0x293204: 0x0  nop
    ctx->pc = 0x293204u;
    // NOP
    ctx->pc = 0x293208u;
}
