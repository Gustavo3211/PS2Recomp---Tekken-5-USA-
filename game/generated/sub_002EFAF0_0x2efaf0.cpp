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

// Function: sub_002EFAF0
// Address: 0x2efaf0 - 0x2efb38
void sub_002EFAF0_0x2efaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFAF0_0x2efaf0");
#endif

    switch (ctx->pc) {
        case 0x2efb04u: goto label_2efb04;
        case 0x2efb24u: goto label_2efb24;
        default: break;
    }

    ctx->pc = 0x2efaf0u;

    // 0x2efaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2efaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2efaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efaf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2efaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2efafc: 0xc0bbece  jal         func_2EFB38
    ctx->pc = 0x2EFAFCu;
    SET_GPR_U32(ctx, 31, 0x2EFB04u);
    ctx->pc = 0x2EFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAFCu;
    // 0x2efb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFB38u, 0x2EFAFCu, 0x2EFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB04u;
label_2efb04:
    // 0x2efb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2efb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efb0c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2efb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2efb10: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x2efb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2efb14: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2efb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2efb18: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2efb1c: 0xc0bbeec  jal         func_2EFBB0
    ctx->pc = 0x2EFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB24u);
    ctx->pc = 0x2EFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB1Cu;
    // 0x2efb20: 0x240a0014  addiu       $t2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFBB0u, 0x2EFB1Cu, 0x2EFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB24u;
label_2efb24:
    // 0x2efb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efb28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2efb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB2Cu;
        // 0x2efb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFB34u;
    // 0x2efb34: 0x0  nop
    ctx->pc = 0x2efb34u;
    // NOP
    ctx->pc = 0x2efb38u;
}
