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

// Function: sub_0031CEB8
// Address: 0x31ceb8 - 0x31cf48
void sub_0031CEB8_0x31ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CEB8_0x31ceb8");
#endif

    switch (ctx->pc) {
        case 0x31ceb8u: goto label_31ceb8;
        case 0x31cebcu: goto label_31cebc;
        case 0x31cec0u: goto label_31cec0;
        case 0x31cec4u: goto label_31cec4;
        case 0x31cec8u: goto label_31cec8;
        case 0x31ceccu: goto label_31cecc;
        case 0x31ced0u: goto label_31ced0;
        case 0x31ced4u: goto label_31ced4;
        case 0x31ced8u: goto label_31ced8;
        case 0x31cedcu: goto label_31cedc;
        case 0x31cee0u: goto label_31cee0;
        case 0x31cee4u: goto label_31cee4;
        case 0x31cee8u: goto label_31cee8;
        case 0x31ceecu: goto label_31ceec;
        case 0x31cef0u: goto label_31cef0;
        case 0x31cef4u: goto label_31cef4;
        case 0x31cef8u: goto label_31cef8;
        case 0x31cefcu: goto label_31cefc;
        case 0x31cf00u: goto label_31cf00;
        case 0x31cf04u: goto label_31cf04;
        case 0x31cf08u: goto label_31cf08;
        case 0x31cf0cu: goto label_31cf0c;
        case 0x31cf10u: goto label_31cf10;
        case 0x31cf14u: goto label_31cf14;
        case 0x31cf18u: goto label_31cf18;
        case 0x31cf1cu: goto label_31cf1c;
        case 0x31cf20u: goto label_31cf20;
        case 0x31cf24u: goto label_31cf24;
        case 0x31cf28u: goto label_31cf28;
        case 0x31cf2cu: goto label_31cf2c;
        case 0x31cf30u: goto label_31cf30;
        case 0x31cf34u: goto label_31cf34;
        case 0x31cf38u: goto label_31cf38;
        case 0x31cf3cu: goto label_31cf3c;
        case 0x31cf40u: goto label_31cf40;
        case 0x31cf44u: goto label_31cf44;
        default: break;
    }

    ctx->pc = 0x31ceb8u;

label_31ceb8:
    // 0x31ceb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31cebc:
    // 0x31cebc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31cec0:
    // 0x31cec0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_31cec4:
    // 0x31cec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31cec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31cec8:
    // 0x31cec8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31cecc:
    // 0x31cecc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31ced0:
    // 0x31ced0: 0xc0c8864  jal         func_322190
label_31ced4:
    if (ctx->pc == 0x31CED4u) {
        ctx->pc = 0x31CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CED0u;
        // 0x31ced4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CED8u;
        goto label_31ced8;
    }
    ctx->pc = 0x31CED0u;
    SET_GPR_U32(ctx, 31, 0x31CED8u);
    ctx->pc = 0x31CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CED0u;
    // 0x31ced4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x31CED0u, 0x31CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CED8u;
label_31ced8:
    // 0x31ced8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ced8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31cedc:
    // 0x31cedc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31cedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31cee0:
    // 0x31cee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31cee4:
    // 0x31cee4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x31cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31cee8:
    // 0x31cee8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31ceec:
    // 0x31ceec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31ceecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31cef0:
    // 0x31cef0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31cef4:
    // 0x31cef4: 0x40f809  jalr        $v0
label_31cef8:
    if (ctx->pc == 0x31CEF8u) {
        ctx->pc = 0x31CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEF4u;
        // 0x31cef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CEFCu;
        goto label_31cefc;
    }
    ctx->pc = 0x31CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CEFCu);
        ctx->pc = 0x31CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEF4u;
        // 0x31cef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CEF4u, 0x31CEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CEFCu;
label_31cefc:
    // 0x31cefc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31cf00:
    // 0x31cf00: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x31cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_31cf04:
    // 0x31cf04: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x31cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_31cf08:
    // 0x31cf08: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31cf0c:
    // 0x31cf0c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31cf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31cf10:
    // 0x31cf10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31cf14:
    // 0x31cf14: 0x40f809  jalr        $v0
label_31cf18:
    if (ctx->pc == 0x31CF18u) {
        ctx->pc = 0x31CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF14u;
        // 0x31cf18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF1Cu;
        goto label_31cf1c;
    }
    ctx->pc = 0x31CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31CF1Cu);
        ctx->pc = 0x31CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF14u;
        // 0x31cf18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF14u, 0x31CF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31CF1Cu;
label_31cf1c:
    // 0x31cf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31cf20:
    // 0x31cf20: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31cf24:
    // 0x31cf24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31cf28:
    // 0x31cf28: 0xc0c73d2  jal         func_31CF48
label_31cf2c:
    if (ctx->pc == 0x31CF2Cu) {
        ctx->pc = 0x31CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF28u;
        // 0x31cf2c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF30u;
        goto label_31cf30;
    }
    ctx->pc = 0x31CF28u;
    SET_GPR_U32(ctx, 31, 0x31CF30u);
    ctx->pc = 0x31CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF28u;
    // 0x31cf2c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CF48u, 0x31CF28u, 0x31CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF30u;
label_31cf30:
    // 0x31cf30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31cf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31cf34:
    // 0x31cf34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31cf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31cf38:
    // 0x31cf38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31cf38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31cf3c:
    // 0x31cf3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31cf40:
    // 0x31cf40: 0x3e00008  jr          $ra
label_31cf44:
    if (ctx->pc == 0x31CF44u) {
        ctx->pc = 0x31CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF40u;
        // 0x31cf44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CF48u;
        goto label_fallthrough_0x31cf40;
    }
    ctx->pc = 0x31CF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF40u;
        // 0x31cf44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31cf40:
    ctx->pc = 0x31CF48u;
}
