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

// Function: sub_00363FD8
// Address: 0x363fd8 - 0x364010
void sub_00363FD8_0x363fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363FD8_0x363fd8");
#endif

    switch (ctx->pc) {
        case 0x363fe8u: goto label_363fe8;
        default: break;
    }

    ctx->pc = 0x363fd8u;

    // 0x363fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363fe0: 0xc0d8fb2  jal         func_363EC8
    ctx->pc = 0x363FE0u;
    SET_GPR_U32(ctx, 31, 0x363FE8u);
    ctx->pc = 0x363EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363EC8u, 0x363FE0u, 0x363FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FE8u;
label_363fe8:
    // 0x363fe8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x363fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x363FECu;
    {
        const bool branch_taken_0x363fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FECu;
        // 0x363ff0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363fec) {
            ctx->pc = 0x364000u;
            goto label_364000;
        }
    }
    ctx->pc = 0x363FF4u;
    // 0x363ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363ff8: 0x8049d7e  j           func_1275F8
    ctx->pc = 0x363FF8u;
    ctx->pc = 0x363FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FF8u;
    // 0x363ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    sub_001275F8_0x1275f8(rdram, ctx, runtime); return;
    ctx->pc = 0x364000u;
label_364000:
    // 0x364000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364004: 0x3e00008  jr          $ra
    ctx->pc = 0x364004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364004u;
        // 0x364008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36400Cu;
    // 0x36400c: 0x0  nop
    ctx->pc = 0x36400cu;
    // NOP
    ctx->pc = 0x364010u;
}
