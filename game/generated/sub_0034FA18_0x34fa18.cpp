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

// Function: sub_0034FA18
// Address: 0x34fa18 - 0x34fb10
void sub_0034FA18_0x34fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FA18_0x34fa18");
#endif

    switch (ctx->pc) {
        case 0x34fa18u: goto label_34fa18;
        case 0x34fa1cu: goto label_34fa1c;
        case 0x34fa20u: goto label_34fa20;
        case 0x34fa24u: goto label_34fa24;
        case 0x34fa28u: goto label_34fa28;
        case 0x34fa2cu: goto label_34fa2c;
        case 0x34fa30u: goto label_34fa30;
        case 0x34fa34u: goto label_34fa34;
        case 0x34fa38u: goto label_34fa38;
        case 0x34fa3cu: goto label_34fa3c;
        case 0x34fa40u: goto label_34fa40;
        case 0x34fa44u: goto label_34fa44;
        case 0x34fa48u: goto label_34fa48;
        case 0x34fa4cu: goto label_34fa4c;
        case 0x34fa50u: goto label_34fa50;
        case 0x34fa54u: goto label_34fa54;
        case 0x34fa58u: goto label_34fa58;
        case 0x34fa5cu: goto label_34fa5c;
        case 0x34fa60u: goto label_34fa60;
        case 0x34fa64u: goto label_34fa64;
        case 0x34fa68u: goto label_34fa68;
        case 0x34fa6cu: goto label_34fa6c;
        case 0x34fa70u: goto label_34fa70;
        case 0x34fa74u: goto label_34fa74;
        case 0x34fa78u: goto label_34fa78;
        case 0x34fa7cu: goto label_34fa7c;
        case 0x34fa80u: goto label_34fa80;
        case 0x34fa84u: goto label_34fa84;
        case 0x34fa88u: goto label_34fa88;
        case 0x34fa8cu: goto label_34fa8c;
        case 0x34fa90u: goto label_34fa90;
        case 0x34fa94u: goto label_34fa94;
        case 0x34fa98u: goto label_34fa98;
        case 0x34fa9cu: goto label_34fa9c;
        case 0x34faa0u: goto label_34faa0;
        case 0x34faa4u: goto label_34faa4;
        case 0x34faa8u: goto label_34faa8;
        case 0x34faacu: goto label_34faac;
        case 0x34fab0u: goto label_34fab0;
        case 0x34fab4u: goto label_34fab4;
        case 0x34fab8u: goto label_34fab8;
        case 0x34fabcu: goto label_34fabc;
        case 0x34fac0u: goto label_34fac0;
        case 0x34fac4u: goto label_34fac4;
        case 0x34fac8u: goto label_34fac8;
        case 0x34faccu: goto label_34facc;
        case 0x34fad0u: goto label_34fad0;
        case 0x34fad4u: goto label_34fad4;
        case 0x34fad8u: goto label_34fad8;
        case 0x34fadcu: goto label_34fadc;
        case 0x34fae0u: goto label_34fae0;
        case 0x34fae4u: goto label_34fae4;
        case 0x34fae8u: goto label_34fae8;
        case 0x34faecu: goto label_34faec;
        case 0x34faf0u: goto label_34faf0;
        case 0x34faf4u: goto label_34faf4;
        case 0x34faf8u: goto label_34faf8;
        case 0x34fafcu: goto label_34fafc;
        case 0x34fb00u: goto label_34fb00;
        case 0x34fb04u: goto label_34fb04;
        case 0x34fb08u: goto label_34fb08;
        case 0x34fb0cu: goto label_34fb0c;
        default: break;
    }

    ctx->pc = 0x34fa18u;

label_34fa18:
    // 0x34fa18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34fa1c:
    // 0x34fa1c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34fa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34fa20:
    // 0x34fa20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34fa24:
    // 0x34fa24: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fa24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34fa28:
    // 0x34fa28: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34fa2c:
    // 0x34fa2c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34fa30:
    // 0x34fa30: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34fa34:
    // 0x34fa34: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34fa38:
    // 0x34fa38: 0xc0d3f53  jal         func_34FD4C
label_34fa3c:
    if (ctx->pc == 0x34FA3Cu) {
        ctx->pc = 0x34FA40u;
        goto label_34fa40;
    }
    ctx->pc = 0x34FA38u;
    SET_GPR_U32(ctx, 31, 0x34FA40u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34FA38u, 0x34FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA40u;
label_34fa40:
    // 0x34fa40: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34fa44:
    // 0x34fa44: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fa48:
    // 0x34fa48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34fa4c:
    if (ctx->pc == 0x34FA4Cu) {
        ctx->pc = 0x34FA50u;
        goto label_34fa50;
    }
    ctx->pc = 0x34FA48u;
    {
        const bool branch_taken_0x34fa48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34fa48) {
            ctx->pc = 0x34FA5Cu;
            goto label_34fa5c;
        }
    }
    ctx->pc = 0x34FA50u;
label_34fa50:
    // 0x34fa50: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fa54:
    // 0x34fa54: 0x10000028  b           . + 4 + (0x28 << 2)
label_34fa58:
    if (ctx->pc == 0x34FA58u) {
        ctx->pc = 0x34FA5Cu;
        goto label_34fa5c;
    }
    ctx->pc = 0x34FA54u;
    {
        const bool branch_taken_0x34fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa54) {
            ctx->pc = 0x34FAF8u;
            goto label_34faf8;
        }
    }
    ctx->pc = 0x34FA5Cu;
label_34fa5c:
    // 0x34fa5c: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34fa60:
    // 0x34fa60: 0xc0d3fc6  jal         func_34FF18
label_34fa64:
    if (ctx->pc == 0x34FA64u) {
        ctx->pc = 0x34FA68u;
        goto label_34fa68;
    }
    ctx->pc = 0x34FA60u;
    SET_GPR_U32(ctx, 31, 0x34FA68u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34FA60u, 0x34FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA68u;
label_34fa68:
    // 0x34fa68: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_34fa6c:
    // 0x34fa6c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34fa70:
    // 0x34fa70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34fa74:
    if (ctx->pc == 0x34FA74u) {
        ctx->pc = 0x34FA78u;
        goto label_34fa78;
    }
    ctx->pc = 0x34FA70u;
    {
        const bool branch_taken_0x34fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fa70) {
            ctx->pc = 0x34FA88u;
            goto label_34fa88;
        }
    }
    ctx->pc = 0x34FA78u;
label_34fa78:
    // 0x34fa78: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34fa7c:
    // 0x34fa7c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34fa80:
    // 0x34fa80: 0x1000001d  b           . + 4 + (0x1D << 2)
label_34fa84:
    if (ctx->pc == 0x34FA84u) {
        ctx->pc = 0x34FA88u;
        goto label_34fa88;
    }
    ctx->pc = 0x34FA80u;
    {
        const bool branch_taken_0x34fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa80) {
            ctx->pc = 0x34FAF8u;
            goto label_34faf8;
        }
    }
    ctx->pc = 0x34FA88u;
label_34fa88:
    // 0x34fa88: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34fa8c:
    // 0x34fa8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34fa90:
    // 0x34fa90: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34fa94:
    // 0x34fa94: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34fa98:
    // 0x34fa98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34fa9c:
    // 0x34fa9c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34faa0:
    // 0x34faa0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34faa4:
    // 0x34faa4: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34faa8:
    // 0x34faa8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34faac:
    // 0x34faac: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_34fab0:
    // 0x34fab0: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34fab4:
    // 0x34fab4: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34fab8:
    // 0x34fab8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fabc:
    // 0x34fabc: 0x40f809  jalr        $v0
label_34fac0:
    if (ctx->pc == 0x34FAC0u) {
        ctx->pc = 0x34FAC4u;
        goto label_34fac4;
    }
    ctx->pc = 0x34FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FAC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FABCu, 0x34FAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FAC4u;
label_34fac4:
    // 0x34fac4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34fac8:
    // 0x34fac8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34facc:
    // 0x34facc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_34fad0:
    if (ctx->pc == 0x34FAD0u) {
        ctx->pc = 0x34FAD4u;
        goto label_34fad4;
    }
    ctx->pc = 0x34FACCu;
    {
        const bool branch_taken_0x34facc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34facc) {
            ctx->pc = 0x34FAF0u;
            goto label_34faf0;
        }
    }
    ctx->pc = 0x34FAD4u;
label_34fad4:
    // 0x34fad4: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34fad8:
    // 0x34fad8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fadc:
    // 0x34fadc: 0xc0d3f96  jal         func_34FE58
label_34fae0:
    if (ctx->pc == 0x34FAE0u) {
        ctx->pc = 0x34FAE4u;
        goto label_34fae4;
    }
    ctx->pc = 0x34FADCu;
    SET_GPR_U32(ctx, 31, 0x34FAE4u);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34FADCu, 0x34FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FAE4u;
label_34fae4:
    // 0x34fae4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34fae8:
    // 0x34fae8: 0x10000003  b           . + 4 + (0x3 << 2)
label_34faec:
    if (ctx->pc == 0x34FAECu) {
        ctx->pc = 0x34FAF0u;
        goto label_34faf0;
    }
    ctx->pc = 0x34FAE8u;
    {
        const bool branch_taken_0x34fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fae8) {
            ctx->pc = 0x34FAF8u;
            goto label_34faf8;
        }
    }
    ctx->pc = 0x34FAF0u;
label_34faf0:
    // 0x34faf0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34faf4:
    // 0x34faf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34faf8:
    // 0x34faf8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34faf8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34fafc:
    // 0x34fafc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34fafcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34fb00:
    // 0x34fb00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34fb04:
    // 0x34fb04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34fb04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34fb08:
    // 0x34fb08: 0x3e00008  jr          $ra
label_34fb0c:
    if (ctx->pc == 0x34FB0Cu) {
        ctx->pc = 0x34FB10u;
        goto label_fallthrough_0x34fb08;
    }
    ctx->pc = 0x34FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fb08:
    ctx->pc = 0x34FB10u;
}
