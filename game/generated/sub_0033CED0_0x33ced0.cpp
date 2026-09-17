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

// Function: sub_0033CED0
// Address: 0x33ced0 - 0x33cf68
void sub_0033CED0_0x33ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CED0_0x33ced0");
#endif

    switch (ctx->pc) {
        case 0x33ced0u: goto label_33ced0;
        case 0x33ced4u: goto label_33ced4;
        case 0x33ced8u: goto label_33ced8;
        case 0x33cedcu: goto label_33cedc;
        case 0x33cee0u: goto label_33cee0;
        case 0x33cee4u: goto label_33cee4;
        case 0x33cee8u: goto label_33cee8;
        case 0x33ceecu: goto label_33ceec;
        case 0x33cef0u: goto label_33cef0;
        case 0x33cef4u: goto label_33cef4;
        case 0x33cef8u: goto label_33cef8;
        case 0x33cefcu: goto label_33cefc;
        case 0x33cf00u: goto label_33cf00;
        case 0x33cf04u: goto label_33cf04;
        case 0x33cf08u: goto label_33cf08;
        case 0x33cf0cu: goto label_33cf0c;
        case 0x33cf10u: goto label_33cf10;
        case 0x33cf14u: goto label_33cf14;
        case 0x33cf18u: goto label_33cf18;
        case 0x33cf1cu: goto label_33cf1c;
        case 0x33cf20u: goto label_33cf20;
        case 0x33cf24u: goto label_33cf24;
        case 0x33cf28u: goto label_33cf28;
        case 0x33cf2cu: goto label_33cf2c;
        case 0x33cf30u: goto label_33cf30;
        case 0x33cf34u: goto label_33cf34;
        case 0x33cf38u: goto label_33cf38;
        case 0x33cf3cu: goto label_33cf3c;
        case 0x33cf40u: goto label_33cf40;
        case 0x33cf44u: goto label_33cf44;
        case 0x33cf48u: goto label_33cf48;
        case 0x33cf4cu: goto label_33cf4c;
        case 0x33cf50u: goto label_33cf50;
        case 0x33cf54u: goto label_33cf54;
        case 0x33cf58u: goto label_33cf58;
        case 0x33cf5cu: goto label_33cf5c;
        case 0x33cf60u: goto label_33cf60;
        case 0x33cf64u: goto label_33cf64;
        default: break;
    }

    ctx->pc = 0x33ced0u;

label_33ced0:
    // 0x33ced0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33ced4:
    // 0x33ced4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33ced8:
    // 0x33ced8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ced8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cedc:
    // 0x33cedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33cee0:
    // 0x33cee0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33cee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33cee4:
    // 0x33cee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33cee8:
    // 0x33cee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33ceec:
    // 0x33ceec: 0xc0cf424  jal         func_33D090
label_33cef0:
    if (ctx->pc == 0x33CEF0u) {
        ctx->pc = 0x33CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEECu;
        // 0x33cef0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CEF4u;
        goto label_33cef4;
    }
    ctx->pc = 0x33CEECu;
    SET_GPR_U32(ctx, 31, 0x33CEF4u);
    ctx->pc = 0x33CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEECu;
    // 0x33cef0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33CEECu, 0x33CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEF4u;
label_33cef4:
    // 0x33cef4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_33cef8:
    if (ctx->pc == 0x33CEF8u) {
        ctx->pc = 0x33CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEF4u;
        // 0x33cef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CEFCu;
        goto label_33cefc;
    }
    ctx->pc = 0x33CEF4u;
    {
        const bool branch_taken_0x33cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cef4) {
            ctx->pc = 0x33CEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CEF4u;
            // 0x33cef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CF54u;
            goto label_33cf54;
        }
    }
    ctx->pc = 0x33CEFCu;
label_33cefc:
    // 0x33cefc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33cf00:
    // 0x33cf00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33cf04:
    // 0x33cf04: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33cf08:
    // 0x33cf08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33cf0c:
    // 0x33cf0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x33cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_33cf10:
    // 0x33cf10: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x33cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_33cf14:
    // 0x33cf14: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33cf14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33cf18:
    // 0x33cf18: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x33cf18u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33cf1c:
    // 0x33cf1c: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x33cf1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33cf20:
    // 0x33cf20: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x33cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_33cf24:
    // 0x33cf24: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x33cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33cf28:
    // 0x33cf28: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33cf28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33cf2c:
    // 0x33cf2c: 0xe0f809  jalr        $a3
label_33cf30:
    if (ctx->pc == 0x33CF30u) {
        ctx->pc = 0x33CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF2Cu;
        // 0x33cf30: 0x2452806  srlv        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF34u;
        goto label_33cf34;
    }
    ctx->pc = 0x33CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x33CF34u);
        ctx->pc = 0x33CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF2Cu;
        // 0x33cf30: 0x2452806  srlv        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF2Cu, 0x33CF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CF34u;
label_33cf34:
    // 0x33cf34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33cf38:
    // 0x33cf38: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33cf3c:
    // 0x33cf3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33cf3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33cf40:
    // 0x33cf40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33cf44:
    // 0x33cf44: 0x60f809  jalr        $v1
label_33cf48:
    if (ctx->pc == 0x33CF48u) {
        ctx->pc = 0x33CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF44u;
        // 0x33cf48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF4Cu;
        goto label_33cf4c;
    }
    ctx->pc = 0x33CF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CF4Cu);
        ctx->pc = 0x33CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF44u;
        // 0x33cf48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF44u, 0x33CF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CF4Cu;
label_33cf4c:
    // 0x33cf4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cf50:
    // 0x33cf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33cf54:
    // 0x33cf54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33cf58:
    // 0x33cf58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33cf5c:
    // 0x33cf5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33cf60:
    // 0x33cf60: 0x3e00008  jr          $ra
label_33cf64:
    if (ctx->pc == 0x33CF64u) {
        ctx->pc = 0x33CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF60u;
        // 0x33cf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CF68u;
        goto label_fallthrough_0x33cf60;
    }
    ctx->pc = 0x33CF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF60u;
        // 0x33cf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33cf60:
    ctx->pc = 0x33CF68u;
}
