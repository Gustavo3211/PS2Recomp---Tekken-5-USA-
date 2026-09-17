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

// Function: sub_0034BE38
// Address: 0x34be38 - 0x34bf3c
void sub_0034BE38_0x34be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BE38_0x34be38");
#endif

    switch (ctx->pc) {
        case 0x34be38u: goto label_34be38;
        case 0x34be3cu: goto label_34be3c;
        case 0x34be40u: goto label_34be40;
        case 0x34be44u: goto label_34be44;
        case 0x34be48u: goto label_34be48;
        case 0x34be4cu: goto label_34be4c;
        case 0x34be50u: goto label_34be50;
        case 0x34be54u: goto label_34be54;
        case 0x34be58u: goto label_34be58;
        case 0x34be5cu: goto label_34be5c;
        case 0x34be60u: goto label_34be60;
        case 0x34be64u: goto label_34be64;
        case 0x34be68u: goto label_34be68;
        case 0x34be6cu: goto label_34be6c;
        case 0x34be70u: goto label_34be70;
        case 0x34be74u: goto label_34be74;
        case 0x34be78u: goto label_34be78;
        case 0x34be7cu: goto label_34be7c;
        case 0x34be80u: goto label_34be80;
        case 0x34be84u: goto label_34be84;
        case 0x34be88u: goto label_34be88;
        case 0x34be8cu: goto label_34be8c;
        case 0x34be90u: goto label_34be90;
        case 0x34be94u: goto label_34be94;
        case 0x34be98u: goto label_34be98;
        case 0x34be9cu: goto label_34be9c;
        case 0x34bea0u: goto label_34bea0;
        case 0x34bea4u: goto label_34bea4;
        case 0x34bea8u: goto label_34bea8;
        case 0x34beacu: goto label_34beac;
        case 0x34beb0u: goto label_34beb0;
        case 0x34beb4u: goto label_34beb4;
        case 0x34beb8u: goto label_34beb8;
        case 0x34bebcu: goto label_34bebc;
        case 0x34bec0u: goto label_34bec0;
        case 0x34bec4u: goto label_34bec4;
        case 0x34bec8u: goto label_34bec8;
        case 0x34beccu: goto label_34becc;
        case 0x34bed0u: goto label_34bed0;
        case 0x34bed4u: goto label_34bed4;
        case 0x34bed8u: goto label_34bed8;
        case 0x34bedcu: goto label_34bedc;
        case 0x34bee0u: goto label_34bee0;
        case 0x34bee4u: goto label_34bee4;
        case 0x34bee8u: goto label_34bee8;
        case 0x34beecu: goto label_34beec;
        case 0x34bef0u: goto label_34bef0;
        case 0x34bef4u: goto label_34bef4;
        case 0x34bef8u: goto label_34bef8;
        case 0x34befcu: goto label_34befc;
        case 0x34bf00u: goto label_34bf00;
        case 0x34bf04u: goto label_34bf04;
        case 0x34bf08u: goto label_34bf08;
        case 0x34bf0cu: goto label_34bf0c;
        case 0x34bf10u: goto label_34bf10;
        case 0x34bf14u: goto label_34bf14;
        case 0x34bf18u: goto label_34bf18;
        case 0x34bf1cu: goto label_34bf1c;
        case 0x34bf20u: goto label_34bf20;
        case 0x34bf24u: goto label_34bf24;
        case 0x34bf28u: goto label_34bf28;
        case 0x34bf2cu: goto label_34bf2c;
        case 0x34bf30u: goto label_34bf30;
        case 0x34bf34u: goto label_34bf34;
        case 0x34bf38u: goto label_34bf38;
        default: break;
    }

    ctx->pc = 0x34be38u;

label_34be38:
    // 0x34be38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34be3c:
    // 0x34be3c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34be40:
    // 0x34be40: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34be44:
    // 0x34be44: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34be44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34be48:
    // 0x34be48: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34be48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34be4c:
    // 0x34be4c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34be50:
    // 0x34be50: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34be50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34be54:
    // 0x34be54: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34be54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34be58:
    // 0x34be58: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34be58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_34be5c:
    // 0x34be5c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34be60:
    // 0x34be60: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x34be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
label_34be64:
    // 0x34be64: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34be68:
    // 0x34be68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34be68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34be6c:
    // 0x34be6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34be70:
    // 0x34be70: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34be70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34be74:
    // 0x34be74: 0xc0d3332  jal         func_34CCC8
label_34be78:
    if (ctx->pc == 0x34BE78u) {
        ctx->pc = 0x34BE7Cu;
        goto label_34be7c;
    }
    ctx->pc = 0x34BE74u;
    SET_GPR_U32(ctx, 31, 0x34BE7Cu);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34BE74u, 0x34BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE7Cu;
label_34be7c:
    // 0x34be7c: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34be80:
    // 0x34be80: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34be84:
    // 0x34be84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34be88:
    if (ctx->pc == 0x34BE88u) {
        ctx->pc = 0x34BE8Cu;
        goto label_34be8c;
    }
    ctx->pc = 0x34BE84u;
    {
        const bool branch_taken_0x34be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34be84) {
            ctx->pc = 0x34BE9Cu;
            goto label_34be9c;
        }
    }
    ctx->pc = 0x34BE8Cu;
label_34be8c:
    // 0x34be8c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34be90:
    // 0x34be90: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34be90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34be94:
    // 0x34be94: 0x10000023  b           . + 4 + (0x23 << 2)
label_34be98:
    if (ctx->pc == 0x34BE98u) {
        ctx->pc = 0x34BE9Cu;
        goto label_34be9c;
    }
    ctx->pc = 0x34BE94u;
    {
        const bool branch_taken_0x34be94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34be94) {
            ctx->pc = 0x34BF24u;
            goto label_34bf24;
        }
    }
    ctx->pc = 0x34BE9Cu;
label_34be9c:
    // 0x34be9c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34bea0:
    // 0x34bea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34bea4:
    // 0x34bea4: 0xc0d407a  jal         func_3501E8
label_34bea8:
    if (ctx->pc == 0x34BEA8u) {
        ctx->pc = 0x34BEACu;
        goto label_34beac;
    }
    ctx->pc = 0x34BEA4u;
    SET_GPR_U32(ctx, 31, 0x34BEACu);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34BEA4u, 0x34BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BEACu;
label_34beac:
    // 0x34beac: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x34beacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_34beb0:
    // 0x34beb0: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x34beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34beb4:
    // 0x34beb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34beb8:
    if (ctx->pc == 0x34BEB8u) {
        ctx->pc = 0x34BEBCu;
        goto label_34bebc;
    }
    ctx->pc = 0x34BEB4u;
    {
        const bool branch_taken_0x34beb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34beb4) {
            ctx->pc = 0x34BED8u;
            goto label_34bed8;
        }
    }
    ctx->pc = 0x34BEBCu;
label_34bebc:
    // 0x34bebc: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x34bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_34bec0:
    // 0x34bec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34bec4:
    // 0x34bec4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_34bec8:
    // 0x34bec8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34becc:
    // 0x34becc: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34beccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34bed0:
    // 0x34bed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_34bed4:
    if (ctx->pc == 0x34BED4u) {
        ctx->pc = 0x34BED8u;
        goto label_34bed8;
    }
    ctx->pc = 0x34BED0u;
    {
        const bool branch_taken_0x34bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bed0) {
            ctx->pc = 0x34BEE0u;
            goto label_34bee0;
        }
    }
    ctx->pc = 0x34BED8u;
label_34bed8:
    // 0x34bed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34bedc:
    // 0x34bedc: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_34bee0:
    // 0x34bee0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_34bee4:
    // 0x34bee4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x34bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34bee8:
    // 0x34bee8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34beec:
    // 0x34beec: 0x2442ba48  addiu       $v0, $v0, -0x45B8
    ctx->pc = 0x34beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949448));
label_34bef0:
    // 0x34bef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34bef4:
    // 0x34bef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34bef8:
    // 0x34bef8: 0x8fc40044  lw          $a0, 0x44($fp)
    ctx->pc = 0x34bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34befc:
    // 0x34befc: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34befcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34bf00:
    // 0x34bf00: 0x8fc60040  lw          $a2, 0x40($fp)
    ctx->pc = 0x34bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34bf04:
    // 0x34bf04: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x34bf04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34bf08:
    // 0x34bf08: 0x8fc80008  lw          $t0, 0x8($fp)
    ctx->pc = 0x34bf08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34bf0c:
    // 0x34bf0c: 0x8fc9000c  lw          $t1, 0xC($fp)
    ctx->pc = 0x34bf0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34bf10:
    // 0x34bf10: 0x8fca0010  lw          $t2, 0x10($fp)
    ctx->pc = 0x34bf10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34bf14:
    // 0x34bf14: 0x40f809  jalr        $v0
label_34bf18:
    if (ctx->pc == 0x34BF18u) {
        ctx->pc = 0x34BF1Cu;
        goto label_34bf1c;
    }
    ctx->pc = 0x34BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34BF1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF14u, 0x34BF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BF1Cu;
label_34bf1c:
    // 0x34bf1c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34bf20:
    // 0x34bf20: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34bf24:
    // 0x34bf24: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bf24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34bf28:
    // 0x34bf28: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34bf28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34bf2c:
    // 0x34bf2c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34bf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34bf30:
    // 0x34bf30: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_34bf34:
    // 0x34bf34: 0x3e00008  jr          $ra
label_34bf38:
    if (ctx->pc == 0x34BF38u) {
        ctx->pc = 0x34BF3Cu;
        goto label_fallthrough_0x34bf34;
    }
    ctx->pc = 0x34BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34bf34:
    ctx->pc = 0x34BF3Cu;
}
