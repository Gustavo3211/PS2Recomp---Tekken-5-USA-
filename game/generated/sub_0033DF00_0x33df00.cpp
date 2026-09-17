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

// Function: sub_0033DF00
// Address: 0x33df00 - 0x33df40
void sub_0033DF00_0x33df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DF00_0x33df00");
#endif

    switch (ctx->pc) {
        case 0x33df00u: goto label_33df00;
        case 0x33df04u: goto label_33df04;
        case 0x33df08u: goto label_33df08;
        case 0x33df0cu: goto label_33df0c;
        case 0x33df10u: goto label_33df10;
        case 0x33df14u: goto label_33df14;
        case 0x33df18u: goto label_33df18;
        case 0x33df1cu: goto label_33df1c;
        case 0x33df20u: goto label_33df20;
        case 0x33df24u: goto label_33df24;
        case 0x33df28u: goto label_33df28;
        case 0x33df2cu: goto label_33df2c;
        case 0x33df30u: goto label_33df30;
        case 0x33df34u: goto label_33df34;
        case 0x33df38u: goto label_33df38;
        case 0x33df3cu: goto label_33df3c;
        default: break;
    }

    ctx->pc = 0x33df00u;

label_33df00:
    // 0x33df00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33df04:
    // 0x33df04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33df04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33df08:
    // 0x33df08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33df0c:
    // 0x33df0c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x33df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_33df10:
    // 0x33df10: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_33df14:
    // 0x33df14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33df18:
    if (ctx->pc == 0x33DF18u) {
        ctx->pc = 0x33DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF14u;
        // 0x33df18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF1Cu;
        goto label_33df1c;
    }
    ctx->pc = 0x33DF14u;
    {
        const bool branch_taken_0x33df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df14) {
            ctx->pc = 0x33DF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DF14u;
            // 0x33df18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF38u;
            goto label_33df38;
        }
    }
    ctx->pc = 0x33DF1Cu;
label_33df1c:
    // 0x33df1c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x33df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_33df20:
    // 0x33df20: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33df24:
    // 0x33df24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33df24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33df28:
    // 0x33df28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33df2c:
    // 0x33df2c: 0x60f809  jalr        $v1
label_33df30:
    if (ctx->pc == 0x33DF30u) {
        ctx->pc = 0x33DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF2Cu;
        // 0x33df30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF34u;
        goto label_33df34;
    }
    ctx->pc = 0x33DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DF34u);
        ctx->pc = 0x33DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF2Cu;
        // 0x33df30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF2Cu, 0x33DF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DF34u;
label_33df34:
    // 0x33df34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33df34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33df38:
    // 0x33df38: 0x3e00008  jr          $ra
label_33df3c:
    if (ctx->pc == 0x33DF3Cu) {
        ctx->pc = 0x33DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF38u;
        // 0x33df3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DF40u;
        goto label_fallthrough_0x33df38;
    }
    ctx->pc = 0x33DF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF38u;
        // 0x33df3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33df38:
    ctx->pc = 0x33DF40u;
}
