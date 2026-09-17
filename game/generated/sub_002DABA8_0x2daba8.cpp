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

// Function: sub_002DABA8
// Address: 0x2daba8 - 0x2dabf8
void sub_002DABA8_0x2daba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DABA8_0x2daba8");
#endif

    switch (ctx->pc) {
        case 0x2dabb8u: goto label_2dabb8;
        default: break;
    }

    ctx->pc = 0x2daba8u;

    // 0x2daba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2daba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dabac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dabacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dabb0: 0xc089622  jal         func_225888
    ctx->pc = 0x2DABB0u;
    SET_GPR_U32(ctx, 31, 0x2DABB8u);
    ctx->pc = 0x2DABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABB0u;
    // 0x2dabb4: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2DABB0u, 0x2DABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABB8u;
label_2dabb8:
    // 0x2dabb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dabbc: 0x8f83bbdc  lw          $v1, -0x4424($gp)
    ctx->pc = 0x2dabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x2dabc0: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2dabc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2dabc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dabc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dabc8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2dabc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2dabcc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DABCCu;
    {
        const bool branch_taken_0x2dabcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABCCu;
        // 0x2dabd0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabcc) {
            ctx->pc = 0x2DABE0u;
            goto label_2dabe0;
        }
    }
    ctx->pc = 0x2DABD4u;
    // 0x2dabd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DABD4u;
    {
        const bool branch_taken_0x2dabd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABD4u;
        // 0x2dabd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabd4) {
            ctx->pc = 0x2DABE4u;
            goto label_2dabe4;
        }
    }
    ctx->pc = 0x2DABDCu;
    // 0x2dabdc: 0x0  nop
    ctx->pc = 0x2dabdcu;
    // NOP
label_2dabe0:
    // 0x2dabe0: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x2dabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
label_2dabe4:
    // 0x2dabe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dabe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dabe8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dabe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dabec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABECu;
        // 0x2dabf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DABF4u;
    // 0x2dabf4: 0x0  nop
    ctx->pc = 0x2dabf4u;
    // NOP
    ctx->pc = 0x2dabf8u;
}
