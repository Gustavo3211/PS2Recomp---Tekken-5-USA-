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

// Function: sub_00352B00
// Address: 0x352b00 - 0x352bb4
void sub_00352B00_0x352b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352B00_0x352b00");
#endif

    switch (ctx->pc) {
        case 0x352b00u: goto label_352b00;
        case 0x352b04u: goto label_352b04;
        case 0x352b08u: goto label_352b08;
        case 0x352b0cu: goto label_352b0c;
        case 0x352b10u: goto label_352b10;
        case 0x352b14u: goto label_352b14;
        case 0x352b18u: goto label_352b18;
        case 0x352b1cu: goto label_352b1c;
        case 0x352b20u: goto label_352b20;
        case 0x352b24u: goto label_352b24;
        case 0x352b28u: goto label_352b28;
        case 0x352b2cu: goto label_352b2c;
        case 0x352b30u: goto label_352b30;
        case 0x352b34u: goto label_352b34;
        case 0x352b38u: goto label_352b38;
        case 0x352b3cu: goto label_352b3c;
        case 0x352b40u: goto label_352b40;
        case 0x352b44u: goto label_352b44;
        case 0x352b48u: goto label_352b48;
        case 0x352b4cu: goto label_352b4c;
        case 0x352b50u: goto label_352b50;
        case 0x352b54u: goto label_352b54;
        case 0x352b58u: goto label_352b58;
        case 0x352b5cu: goto label_352b5c;
        case 0x352b60u: goto label_352b60;
        case 0x352b64u: goto label_352b64;
        case 0x352b68u: goto label_352b68;
        case 0x352b6cu: goto label_352b6c;
        case 0x352b70u: goto label_352b70;
        case 0x352b74u: goto label_352b74;
        case 0x352b78u: goto label_352b78;
        case 0x352b7cu: goto label_352b7c;
        case 0x352b80u: goto label_352b80;
        case 0x352b84u: goto label_352b84;
        case 0x352b88u: goto label_352b88;
        case 0x352b8cu: goto label_352b8c;
        case 0x352b90u: goto label_352b90;
        case 0x352b94u: goto label_352b94;
        case 0x352b98u: goto label_352b98;
        case 0x352b9cu: goto label_352b9c;
        case 0x352ba0u: goto label_352ba0;
        case 0x352ba4u: goto label_352ba4;
        case 0x352ba8u: goto label_352ba8;
        case 0x352bacu: goto label_352bac;
        case 0x352bb0u: goto label_352bb0;
        default: break;
    }

    ctx->pc = 0x352b00u;

label_352b00:
    // 0x352b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352b04:
    // 0x352b04: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352b08:
    // 0x352b08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352b0c:
    // 0x352b0c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352b0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352b10:
    // 0x352b10: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352b10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352b14:
    // 0x352b14: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352b18:
    // 0x352b18: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352b18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352b1c:
    // 0x352b1c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b20:
    // 0x352b20: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b24:
    // 0x352b24: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352b28:
    // 0x352b28: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352b2c:
    // 0x352b2c: 0xc0d327c  jal         func_34C9F0
label_352b30:
    if (ctx->pc == 0x352B30u) {
        ctx->pc = 0x352B34u;
        goto label_352b34;
    }
    ctx->pc = 0x352B2Cu;
    SET_GPR_U32(ctx, 31, 0x352B34u);
    ctx->pc = 0x34C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C9F0u, 0x352B2Cu, 0x352B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B34u;
label_352b34:
    // 0x352b34: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352b34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352b38:
    // 0x352b38: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b3c:
    // 0x352b3c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352b40:
    // 0x352b40: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352b44:
    if (ctx->pc == 0x352B44u) {
        ctx->pc = 0x352B48u;
        goto label_352b48;
    }
    ctx->pc = 0x352B40u;
    {
        const bool branch_taken_0x352b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352b40) {
            ctx->pc = 0x352B98u;
            goto label_352b98;
        }
    }
    ctx->pc = 0x352B48u;
label_352b48:
    // 0x352b48: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b4c:
    // 0x352b4c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b50:
    // 0x352b50: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352b54:
    // 0x352b54: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352b58:
    // 0x352b58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352b5c:
    // 0x352b5c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352b60:
    // 0x352b60: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x352b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_352b64:
    // 0x352b64: 0x40f809  jalr        $v0
label_352b68:
    if (ctx->pc == 0x352B68u) {
        ctx->pc = 0x352B6Cu;
        goto label_352b6c;
    }
    ctx->pc = 0x352B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352B6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352B64u, 0x352B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352B6Cu;
label_352b6c:
    // 0x352b6c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352b70:
    // 0x352b70: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352b74:
    // 0x352b74: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352b78:
    if (ctx->pc == 0x352B78u) {
        ctx->pc = 0x352B7Cu;
        goto label_352b7c;
    }
    ctx->pc = 0x352B74u;
    {
        const bool branch_taken_0x352b74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352b74) {
            ctx->pc = 0x352B98u;
            goto label_352b98;
        }
    }
    ctx->pc = 0x352B7Cu;
label_352b7c:
    // 0x352b7c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352b80:
    // 0x352b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352b84:
    // 0x352b84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352b88:
    if (ctx->pc == 0x352B88u) {
        ctx->pc = 0x352B8Cu;
        goto label_352b8c;
    }
    ctx->pc = 0x352B84u;
    {
        const bool branch_taken_0x352b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352b84) {
            ctx->pc = 0x352B98u;
            goto label_352b98;
        }
    }
    ctx->pc = 0x352B8Cu;
label_352b8c:
    // 0x352b8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352b90:
    // 0x352b90: 0x10000002  b           . + 4 + (0x2 << 2)
label_352b94:
    if (ctx->pc == 0x352B94u) {
        ctx->pc = 0x352B98u;
        goto label_352b98;
    }
    ctx->pc = 0x352B90u;
    {
        const bool branch_taken_0x352b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352b90) {
            ctx->pc = 0x352B9Cu;
            goto label_352b9c;
        }
    }
    ctx->pc = 0x352B98u;
label_352b98:
    // 0x352b98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352b9c:
    // 0x352b9c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352b9cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352ba0:
    // 0x352ba0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352ba0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352ba4:
    // 0x352ba4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352ba8:
    // 0x352ba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352bac:
    // 0x352bac: 0x3e00008  jr          $ra
label_352bb0:
    if (ctx->pc == 0x352BB0u) {
        ctx->pc = 0x352BB4u;
        goto label_fallthrough_0x352bac;
    }
    ctx->pc = 0x352BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352bac:
    ctx->pc = 0x352BB4u;
}
