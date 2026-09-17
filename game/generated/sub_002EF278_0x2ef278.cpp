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

// Function: sub_002EF278
// Address: 0x2ef278 - 0x2ef2b0
void sub_002EF278_0x2ef278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF278_0x2ef278");
#endif

    switch (ctx->pc) {
        case 0x2ef2a0u: goto label_2ef2a0;
        default: break;
    }

    ctx->pc = 0x2ef278u;

    // 0x2ef278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ef27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef280: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x2ef280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2ef284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF284u;
    {
        const bool branch_taken_0x2ef284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF284u;
        // 0x2ef288: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef284) {
            ctx->pc = 0x2EF298u;
            goto label_2ef298;
        }
    }
    ctx->pc = 0x2EF28Cu;
    // 0x2ef28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef290: 0x8092940  j           func_24A500
    ctx->pc = 0x2EF290u;
    ctx->pc = 0x2EF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF290u;
    // 0x2ef294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF298u;
label_2ef298:
    // 0x2ef298: 0xc092940  jal         func_24A500
    ctx->pc = 0x2EF298u;
    SET_GPR_U32(ctx, 31, 0x2EF2A0u);
    ctx->pc = 0x2EF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF298u;
    // 0x2ef29c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2EF298u, 0x2EF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2A0u;
label_2ef2a0:
    // 0x2ef2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2A4u;
        // 0x2ef2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF2ACu;
    // 0x2ef2ac: 0x0  nop
    ctx->pc = 0x2ef2acu;
    // NOP
    ctx->pc = 0x2ef2b0u;
}
