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

// Function: sub_00293190
// Address: 0x293190 - 0x2931c0
void sub_00293190_0x293190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293190_0x293190");
#endif

    switch (ctx->pc) {
        case 0x2931a0u: goto label_2931a0;
        default: break;
    }

    ctx->pc = 0x293190u;

    // 0x293190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x293194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293198: 0xc0a4c5a  jal         func_293168
    ctx->pc = 0x293198u;
    SET_GPR_U32(ctx, 31, 0x2931A0u);
    ctx->pc = 0x293168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293168u, 0x293198u, 0x2931A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931A0u;
label_2931a0:
    // 0x2931a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2931a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2931A4u;
    {
        const bool branch_taken_0x2931a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931A4u;
        // 0x2931a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931a4) {
            ctx->pc = 0x2931B0u;
            goto label_2931b0;
        }
    }
    ctx->pc = 0x2931ACu;
    // 0x2931ac: 0x90620151  lbu         $v0, 0x151($v1)
    ctx->pc = 0x2931acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 337)));
label_2931b0:
    // 0x2931b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2931b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2931b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2931B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2931B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931B4u;
        // 0x2931b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2931B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2931BCu;
    // 0x2931bc: 0x0  nop
    ctx->pc = 0x2931bcu;
    // NOP
    ctx->pc = 0x2931c0u;
}
