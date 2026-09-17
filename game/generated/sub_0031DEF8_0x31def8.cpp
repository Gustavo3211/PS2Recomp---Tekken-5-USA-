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

// Function: sub_0031DEF8
// Address: 0x31def8 - 0x31df58
void sub_0031DEF8_0x31def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DEF8_0x31def8");
#endif

    switch (ctx->pc) {
        case 0x31def8u: goto label_31def8;
        case 0x31defcu: goto label_31defc;
        case 0x31df00u: goto label_31df00;
        case 0x31df04u: goto label_31df04;
        case 0x31df08u: goto label_31df08;
        case 0x31df0cu: goto label_31df0c;
        case 0x31df10u: goto label_31df10;
        case 0x31df14u: goto label_31df14;
        case 0x31df18u: goto label_31df18;
        case 0x31df1cu: goto label_31df1c;
        case 0x31df20u: goto label_31df20;
        case 0x31df24u: goto label_31df24;
        case 0x31df28u: goto label_31df28;
        case 0x31df2cu: goto label_31df2c;
        case 0x31df30u: goto label_31df30;
        case 0x31df34u: goto label_31df34;
        case 0x31df38u: goto label_31df38;
        case 0x31df3cu: goto label_31df3c;
        case 0x31df40u: goto label_31df40;
        case 0x31df44u: goto label_31df44;
        case 0x31df48u: goto label_31df48;
        case 0x31df4cu: goto label_31df4c;
        case 0x31df50u: goto label_31df50;
        case 0x31df54u: goto label_31df54;
        default: break;
    }

    ctx->pc = 0x31def8u;

label_31def8:
    // 0x31def8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31defc:
    // 0x31defc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31df00:
    // 0x31df00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31df00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31df04:
    // 0x31df04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_31df08:
    // 0x31df08: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x31df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31df0c:
    // 0x31df0c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x31df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31df10:
    // 0x31df10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31df10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31df14:
    // 0x31df14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31df14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31df18:
    // 0x31df18: 0x60f809  jalr        $v1
label_31df1c:
    if (ctx->pc == 0x31DF1Cu) {
        ctx->pc = 0x31DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF18u;
        // 0x31df1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DF20u;
        goto label_31df20;
    }
    ctx->pc = 0x31DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31DF20u);
        ctx->pc = 0x31DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF18u;
        // 0x31df1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF18u, 0x31DF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DF20u;
label_31df20:
    // 0x31df20: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x31df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31df24:
    // 0x31df24: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x31df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_31df28:
    // 0x31df28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31df28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31df2c:
    // 0x31df2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31df30:
    // 0x31df30: 0x60f809  jalr        $v1
label_31df34:
    if (ctx->pc == 0x31DF34u) {
        ctx->pc = 0x31DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF30u;
        // 0x31df34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DF38u;
        goto label_31df38;
    }
    ctx->pc = 0x31DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31DF38u);
        ctx->pc = 0x31DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF30u;
        // 0x31df34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF30u, 0x31DF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DF38u;
label_31df38:
    // 0x31df38: 0x8f84cce0  lw          $a0, -0x3320($gp)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954208)));
label_31df3c:
    // 0x31df3c: 0xc0cf0a2  jal         func_33C288
label_31df40:
    if (ctx->pc == 0x31DF40u) {
        ctx->pc = 0x31DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF3Cu;
        // 0x31df40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DF44u;
        goto label_31df44;
    }
    ctx->pc = 0x31DF3Cu;
    SET_GPR_U32(ctx, 31, 0x31DF44u);
    ctx->pc = 0x31DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF3Cu;
    // 0x31df40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C288u, 0x31DF3Cu, 0x31DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF44u;
label_31df44:
    // 0x31df44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31df44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31df48:
    // 0x31df48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31df4c:
    // 0x31df4c: 0x3e00008  jr          $ra
label_31df50:
    if (ctx->pc == 0x31DF50u) {
        ctx->pc = 0x31DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF4Cu;
        // 0x31df50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DF54u;
        goto label_31df54;
    }
    ctx->pc = 0x31DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF4Cu;
        // 0x31df50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DF54u;
label_31df54:
    // 0x31df54: 0x0  nop
    ctx->pc = 0x31df54u;
    // NOP
    ctx->pc = 0x31df58u;
}
