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

// Function: sub_00352D14
// Address: 0x352d14 - 0x352dc0
void sub_00352D14_0x352d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352D14_0x352d14");
#endif

    switch (ctx->pc) {
        case 0x352d14u: goto label_352d14;
        case 0x352d18u: goto label_352d18;
        case 0x352d1cu: goto label_352d1c;
        case 0x352d20u: goto label_352d20;
        case 0x352d24u: goto label_352d24;
        case 0x352d28u: goto label_352d28;
        case 0x352d2cu: goto label_352d2c;
        case 0x352d30u: goto label_352d30;
        case 0x352d34u: goto label_352d34;
        case 0x352d38u: goto label_352d38;
        case 0x352d3cu: goto label_352d3c;
        case 0x352d40u: goto label_352d40;
        case 0x352d44u: goto label_352d44;
        case 0x352d48u: goto label_352d48;
        case 0x352d4cu: goto label_352d4c;
        case 0x352d50u: goto label_352d50;
        case 0x352d54u: goto label_352d54;
        case 0x352d58u: goto label_352d58;
        case 0x352d5cu: goto label_352d5c;
        case 0x352d60u: goto label_352d60;
        case 0x352d64u: goto label_352d64;
        case 0x352d68u: goto label_352d68;
        case 0x352d6cu: goto label_352d6c;
        case 0x352d70u: goto label_352d70;
        case 0x352d74u: goto label_352d74;
        case 0x352d78u: goto label_352d78;
        case 0x352d7cu: goto label_352d7c;
        case 0x352d80u: goto label_352d80;
        case 0x352d84u: goto label_352d84;
        case 0x352d88u: goto label_352d88;
        case 0x352d8cu: goto label_352d8c;
        case 0x352d90u: goto label_352d90;
        case 0x352d94u: goto label_352d94;
        case 0x352d98u: goto label_352d98;
        case 0x352d9cu: goto label_352d9c;
        case 0x352da0u: goto label_352da0;
        case 0x352da4u: goto label_352da4;
        case 0x352da8u: goto label_352da8;
        case 0x352dacu: goto label_352dac;
        case 0x352db0u: goto label_352db0;
        case 0x352db4u: goto label_352db4;
        case 0x352db8u: goto label_352db8;
        case 0x352dbcu: goto label_352dbc;
        default: break;
    }

    ctx->pc = 0x352d14u;

label_352d14:
    // 0x352d14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352d18:
    // 0x352d18: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352d1c:
    // 0x352d1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352d20:
    // 0x352d20: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352d20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352d24:
    // 0x352d24: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352d28:
    // 0x352d28: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352d2c:
    // 0x352d2c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352d30:
    // 0x352d30: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352d34:
    // 0x352d34: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352d38:
    // 0x352d38: 0xc0d32f8  jal         func_34CBE0
label_352d3c:
    if (ctx->pc == 0x352D3Cu) {
        ctx->pc = 0x352D40u;
        goto label_352d40;
    }
    ctx->pc = 0x352D38u;
    SET_GPR_U32(ctx, 31, 0x352D40u);
    ctx->pc = 0x34CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CBE0u, 0x352D38u, 0x352D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D40u;
label_352d40:
    // 0x352d40: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352d40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352d44:
    // 0x352d44: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352d48:
    // 0x352d48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352d4c:
    // 0x352d4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352d50:
    if (ctx->pc == 0x352D50u) {
        ctx->pc = 0x352D54u;
        goto label_352d54;
    }
    ctx->pc = 0x352D4Cu;
    {
        const bool branch_taken_0x352d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352d4c) {
            ctx->pc = 0x352DA4u;
            goto label_352da4;
        }
    }
    ctx->pc = 0x352D54u;
label_352d54:
    // 0x352d54: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352d58:
    // 0x352d58: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352d5c:
    // 0x352d5c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352d60:
    // 0x352d60: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352d64:
    // 0x352d64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352d68:
    // 0x352d68: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352d6c:
    // 0x352d6c: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352d70:
    // 0x352d70: 0x40f809  jalr        $v0
label_352d74:
    if (ctx->pc == 0x352D74u) {
        ctx->pc = 0x352D78u;
        goto label_352d78;
    }
    ctx->pc = 0x352D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352D78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352D70u, 0x352D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352D78u;
label_352d78:
    // 0x352d78: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352d7c:
    // 0x352d7c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352d80:
    // 0x352d80: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352d84:
    if (ctx->pc == 0x352D84u) {
        ctx->pc = 0x352D88u;
        goto label_352d88;
    }
    ctx->pc = 0x352D80u;
    {
        const bool branch_taken_0x352d80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352d80) {
            ctx->pc = 0x352DA4u;
            goto label_352da4;
        }
    }
    ctx->pc = 0x352D88u;
label_352d88:
    // 0x352d88: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352d8c:
    // 0x352d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352d90:
    // 0x352d90: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352d94:
    if (ctx->pc == 0x352D94u) {
        ctx->pc = 0x352D98u;
        goto label_352d98;
    }
    ctx->pc = 0x352D90u;
    {
        const bool branch_taken_0x352d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352d90) {
            ctx->pc = 0x352DA4u;
            goto label_352da4;
        }
    }
    ctx->pc = 0x352D98u;
label_352d98:
    // 0x352d98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352d9c:
    // 0x352d9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_352da0:
    if (ctx->pc == 0x352DA0u) {
        ctx->pc = 0x352DA4u;
        goto label_352da4;
    }
    ctx->pc = 0x352D9Cu;
    {
        const bool branch_taken_0x352d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352d9c) {
            ctx->pc = 0x352DA8u;
            goto label_352da8;
        }
    }
    ctx->pc = 0x352DA4u;
label_352da4:
    // 0x352da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352da8:
    // 0x352da8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352da8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352dac:
    // 0x352dac: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352dacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352db0:
    // 0x352db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352db4:
    // 0x352db4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352db4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352db8:
    // 0x352db8: 0x3e00008  jr          $ra
label_352dbc:
    if (ctx->pc == 0x352DBCu) {
        ctx->pc = 0x352DC0u;
        goto label_fallthrough_0x352db8;
    }
    ctx->pc = 0x352DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352db8:
    ctx->pc = 0x352DC0u;
}
