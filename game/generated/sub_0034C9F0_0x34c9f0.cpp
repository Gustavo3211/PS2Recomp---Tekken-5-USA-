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

// Function: sub_0034C9F0
// Address: 0x34c9f0 - 0x34cae0
void sub_0034C9F0_0x34c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C9F0_0x34c9f0");
#endif

    switch (ctx->pc) {
        case 0x34c9f0u: goto label_34c9f0;
        case 0x34c9f4u: goto label_34c9f4;
        case 0x34c9f8u: goto label_34c9f8;
        case 0x34c9fcu: goto label_34c9fc;
        case 0x34ca00u: goto label_34ca00;
        case 0x34ca04u: goto label_34ca04;
        case 0x34ca08u: goto label_34ca08;
        case 0x34ca0cu: goto label_34ca0c;
        case 0x34ca10u: goto label_34ca10;
        case 0x34ca14u: goto label_34ca14;
        case 0x34ca18u: goto label_34ca18;
        case 0x34ca1cu: goto label_34ca1c;
        case 0x34ca20u: goto label_34ca20;
        case 0x34ca24u: goto label_34ca24;
        case 0x34ca28u: goto label_34ca28;
        case 0x34ca2cu: goto label_34ca2c;
        case 0x34ca30u: goto label_34ca30;
        case 0x34ca34u: goto label_34ca34;
        case 0x34ca38u: goto label_34ca38;
        case 0x34ca3cu: goto label_34ca3c;
        case 0x34ca40u: goto label_34ca40;
        case 0x34ca44u: goto label_34ca44;
        case 0x34ca48u: goto label_34ca48;
        case 0x34ca4cu: goto label_34ca4c;
        case 0x34ca50u: goto label_34ca50;
        case 0x34ca54u: goto label_34ca54;
        case 0x34ca58u: goto label_34ca58;
        case 0x34ca5cu: goto label_34ca5c;
        case 0x34ca60u: goto label_34ca60;
        case 0x34ca64u: goto label_34ca64;
        case 0x34ca68u: goto label_34ca68;
        case 0x34ca6cu: goto label_34ca6c;
        case 0x34ca70u: goto label_34ca70;
        case 0x34ca74u: goto label_34ca74;
        case 0x34ca78u: goto label_34ca78;
        case 0x34ca7cu: goto label_34ca7c;
        case 0x34ca80u: goto label_34ca80;
        case 0x34ca84u: goto label_34ca84;
        case 0x34ca88u: goto label_34ca88;
        case 0x34ca8cu: goto label_34ca8c;
        case 0x34ca90u: goto label_34ca90;
        case 0x34ca94u: goto label_34ca94;
        case 0x34ca98u: goto label_34ca98;
        case 0x34ca9cu: goto label_34ca9c;
        case 0x34caa0u: goto label_34caa0;
        case 0x34caa4u: goto label_34caa4;
        case 0x34caa8u: goto label_34caa8;
        case 0x34caacu: goto label_34caac;
        case 0x34cab0u: goto label_34cab0;
        case 0x34cab4u: goto label_34cab4;
        case 0x34cab8u: goto label_34cab8;
        case 0x34cabcu: goto label_34cabc;
        case 0x34cac0u: goto label_34cac0;
        case 0x34cac4u: goto label_34cac4;
        case 0x34cac8u: goto label_34cac8;
        case 0x34caccu: goto label_34cacc;
        case 0x34cad0u: goto label_34cad0;
        case 0x34cad4u: goto label_34cad4;
        case 0x34cad8u: goto label_34cad8;
        case 0x34cadcu: goto label_34cadc;
        default: break;
    }

    ctx->pc = 0x34c9f0u;

label_34c9f0:
    // 0x34c9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34c9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34c9f4:
    // 0x34c9f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34c9f8:
    // 0x34c9f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34c9fc:
    // 0x34c9fc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c9fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34ca00:
    // 0x34ca00: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34ca04:
    // 0x34ca04: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34ca08:
    // 0x34ca08: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34ca0c:
    // 0x34ca0c: 0x27c3000c  addiu       $v1, $fp, 0xC
    ctx->pc = 0x34ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_34ca10:
    // 0x34ca10: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34ca14:
    // 0x34ca14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ca18:
    // 0x34ca18: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34ca1c:
    // 0x34ca1c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34ca1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34ca20:
    // 0x34ca20: 0xc0d3332  jal         func_34CCC8
label_34ca24:
    if (ctx->pc == 0x34CA24u) {
        ctx->pc = 0x34CA28u;
        goto label_34ca28;
    }
    ctx->pc = 0x34CA20u;
    SET_GPR_U32(ctx, 31, 0x34CA28u);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34CA20u, 0x34CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA28u;
label_34ca28:
    // 0x34ca28: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34ca2c:
    // 0x34ca2c: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34ca30:
    // 0x34ca30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34ca34:
    if (ctx->pc == 0x34CA34u) {
        ctx->pc = 0x34CA38u;
        goto label_34ca38;
    }
    ctx->pc = 0x34CA30u;
    {
        const bool branch_taken_0x34ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ca30) {
            ctx->pc = 0x34CA48u;
            goto label_34ca48;
        }
    }
    ctx->pc = 0x34CA38u;
label_34ca38:
    // 0x34ca38: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34ca3c:
    // 0x34ca3c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34ca40:
    // 0x34ca40: 0x10000021  b           . + 4 + (0x21 << 2)
label_34ca44:
    if (ctx->pc == 0x34CA44u) {
        ctx->pc = 0x34CA48u;
        goto label_34ca48;
    }
    ctx->pc = 0x34CA40u;
    {
        const bool branch_taken_0x34ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca40) {
            ctx->pc = 0x34CAC8u;
            goto label_34cac8;
        }
    }
    ctx->pc = 0x34CA48u;
label_34ca48:
    // 0x34ca48: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34ca4c:
    // 0x34ca4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ca50:
    // 0x34ca50: 0xc0d407a  jal         func_3501E8
label_34ca54:
    if (ctx->pc == 0x34CA54u) {
        ctx->pc = 0x34CA58u;
        goto label_34ca58;
    }
    ctx->pc = 0x34CA50u;
    SET_GPR_U32(ctx, 31, 0x34CA58u);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34CA50u, 0x34CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA58u;
label_34ca58:
    // 0x34ca58: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x34ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_34ca5c:
    // 0x34ca5c: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x34ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34ca60:
    // 0x34ca60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34ca64:
    if (ctx->pc == 0x34CA64u) {
        ctx->pc = 0x34CA68u;
        goto label_34ca68;
    }
    ctx->pc = 0x34CA60u;
    {
        const bool branch_taken_0x34ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ca60) {
            ctx->pc = 0x34CA84u;
            goto label_34ca84;
        }
    }
    ctx->pc = 0x34CA68u;
label_34ca68:
    // 0x34ca68: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x34ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_34ca6c:
    // 0x34ca6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34ca70:
    // 0x34ca70: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34ca74:
    // 0x34ca74: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34ca78:
    // 0x34ca78: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34ca7c:
    // 0x34ca7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_34ca80:
    if (ctx->pc == 0x34CA80u) {
        ctx->pc = 0x34CA84u;
        goto label_34ca84;
    }
    ctx->pc = 0x34CA7Cu;
    {
        const bool branch_taken_0x34ca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca7c) {
            ctx->pc = 0x34CA8Cu;
            goto label_34ca8c;
        }
    }
    ctx->pc = 0x34CA84u;
label_34ca84:
    // 0x34ca84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ca88:
    // 0x34ca88: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34ca8c:
    // 0x34ca8c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34ca90:
    // 0x34ca90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34ca94:
    // 0x34ca94: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x34ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_34ca98:
    // 0x34ca98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34ca9c:
    // 0x34ca9c: 0x2442ba48  addiu       $v0, $v0, -0x45B8
    ctx->pc = 0x34ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949448));
label_34caa0:
    // 0x34caa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34caa4:
    // 0x34caa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34caa8:
    // 0x34caa8: 0x8fc40044  lw          $a0, 0x44($fp)
    ctx->pc = 0x34caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34caac:
    // 0x34caac: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34caacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34cab0:
    // 0x34cab0: 0x8fc60040  lw          $a2, 0x40($fp)
    ctx->pc = 0x34cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34cab4:
    // 0x34cab4: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34cab8:
    // 0x34cab8: 0x40f809  jalr        $v0
label_34cabc:
    if (ctx->pc == 0x34CABCu) {
        ctx->pc = 0x34CAC0u;
        goto label_34cac0;
    }
    ctx->pc = 0x34CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CAC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CAB8u, 0x34CAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CAC0u;
label_34cac0:
    // 0x34cac0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34cac4:
    // 0x34cac4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34cac8:
    // 0x34cac8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34cac8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34cacc:
    // 0x34cacc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34caccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34cad0:
    // 0x34cad0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34cad4:
    // 0x34cad4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34cad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_34cad8:
    // 0x34cad8: 0x3e00008  jr          $ra
label_34cadc:
    if (ctx->pc == 0x34CADCu) {
        ctx->pc = 0x34CAE0u;
        goto label_fallthrough_0x34cad8;
    }
    ctx->pc = 0x34CAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34cad8:
    ctx->pc = 0x34CAE0u;
}
