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

// Function: sub_0033C458
// Address: 0x33c458 - 0x33c4a0
void sub_0033C458_0x33c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C458_0x33c458");
#endif

    switch (ctx->pc) {
        case 0x33c480u: goto label_33c480;
        default: break;
    }

    ctx->pc = 0x33c458u;

    // 0x33c458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c468: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c46c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33c470: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33c470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33c478: 0xc0dd84a  jal         func_376128
    ctx->pc = 0x33C478u;
    SET_GPR_U32(ctx, 31, 0x33C480u);
    ctx->pc = 0x33C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C478u;
    // 0x33c47c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376128u, 0x33C478u, 0x33C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C480u;
label_33c480:
    // 0x33c480: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x33c480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x33c484: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33c484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33c488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c494: 0x3e00008  jr          $ra
    ctx->pc = 0x33C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C494u;
        // 0x33c498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C49Cu;
    // 0x33c49c: 0x0  nop
    ctx->pc = 0x33c49cu;
    // NOP
    ctx->pc = 0x33c4a0u;
}
