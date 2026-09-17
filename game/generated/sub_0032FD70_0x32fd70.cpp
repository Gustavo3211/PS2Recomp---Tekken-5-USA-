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

// Function: sub_0032FD70
// Address: 0x32fd70 - 0x32fdb8
void sub_0032FD70_0x32fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FD70_0x32fd70");
#endif

    switch (ctx->pc) {
        case 0x32fd94u: goto label_32fd94;
        default: break;
    }

    ctx->pc = 0x32fd70u;

    // 0x32fd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32fd78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32fd80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32fd84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FD84u;
    {
        const bool branch_taken_0x32fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd84) {
            ctx->pc = 0x32FD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FD84u;
            // 0x32fd88: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FD98u;
            goto label_32fd98;
        }
    }
    ctx->pc = 0x32FD8Cu;
    // 0x32fd8c: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x32FD8Cu;
    SET_GPR_U32(ctx, 31, 0x32FD94u);
    ctx->pc = 0x32FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD8Cu;
    // 0x32fd90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x32FD8Cu, 0x32FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD94u;
label_32fd94:
    // 0x32fd94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_32fd98:
    // 0x32fd98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x32fd9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x32fda0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x32fda4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32fda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32fda8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32fda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fdac: 0x3e00008  jr          $ra
    ctx->pc = 0x32FDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDACu;
        // 0x32fdb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDB4u;
    // 0x32fdb4: 0x0  nop
    ctx->pc = 0x32fdb4u;
    // NOP
    ctx->pc = 0x32fdb8u;
}
