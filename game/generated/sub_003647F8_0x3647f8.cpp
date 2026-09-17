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

// Function: sub_003647F8
// Address: 0x3647f8 - 0x364838
void sub_003647F8_0x3647f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003647F8_0x3647f8");
#endif

    switch (ctx->pc) {
        case 0x364824u: goto label_364824;
        default: break;
    }

    ctx->pc = 0x3647f8u;

    // 0x3647f8: 0x8f83c818  lw          $v1, -0x37E8($gp)
    ctx->pc = 0x3647f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952984)));
    // 0x3647fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3647fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364804: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x364804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364808: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x364808u;
    {
        const bool branch_taken_0x364808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364808u;
        // 0x36480c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364808) {
            ctx->pc = 0x364828u;
            goto label_364828;
        }
    }
    ctx->pc = 0x364810u;
    // 0x364810: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x364810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x364814: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x364814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x364818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x364818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36481c: 0xc0d9102  jal         func_364408
    ctx->pc = 0x36481Cu;
    SET_GPR_U32(ctx, 31, 0x364824u);
    ctx->pc = 0x364820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36481Cu;
    // 0x364820: 0xaf82c818  sw          $v0, -0x37E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364408u, 0x36481Cu, 0x364824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364824u;
label_364824:
    // 0x364824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364828:
    // 0x364828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36482c: 0x3e00008  jr          $ra
    ctx->pc = 0x36482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36482Cu;
        // 0x364830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364834u;
    // 0x364834: 0x0  nop
    ctx->pc = 0x364834u;
    // NOP
    ctx->pc = 0x364838u;
}
