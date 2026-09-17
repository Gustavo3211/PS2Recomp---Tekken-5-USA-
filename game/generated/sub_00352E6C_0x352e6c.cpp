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

// Function: sub_00352E6C
// Address: 0x352e6c - 0x352f20
void sub_00352E6C_0x352e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352E6C_0x352e6c");
#endif

    switch (ctx->pc) {
        case 0x352e6cu: goto label_352e6c;
        case 0x352e70u: goto label_352e70;
        case 0x352e74u: goto label_352e74;
        case 0x352e78u: goto label_352e78;
        case 0x352e7cu: goto label_352e7c;
        case 0x352e80u: goto label_352e80;
        case 0x352e84u: goto label_352e84;
        case 0x352e88u: goto label_352e88;
        case 0x352e8cu: goto label_352e8c;
        case 0x352e90u: goto label_352e90;
        case 0x352e94u: goto label_352e94;
        case 0x352e98u: goto label_352e98;
        case 0x352e9cu: goto label_352e9c;
        case 0x352ea0u: goto label_352ea0;
        case 0x352ea4u: goto label_352ea4;
        case 0x352ea8u: goto label_352ea8;
        case 0x352eacu: goto label_352eac;
        case 0x352eb0u: goto label_352eb0;
        case 0x352eb4u: goto label_352eb4;
        case 0x352eb8u: goto label_352eb8;
        case 0x352ebcu: goto label_352ebc;
        case 0x352ec0u: goto label_352ec0;
        case 0x352ec4u: goto label_352ec4;
        case 0x352ec8u: goto label_352ec8;
        case 0x352eccu: goto label_352ecc;
        case 0x352ed0u: goto label_352ed0;
        case 0x352ed4u: goto label_352ed4;
        case 0x352ed8u: goto label_352ed8;
        case 0x352edcu: goto label_352edc;
        case 0x352ee0u: goto label_352ee0;
        case 0x352ee4u: goto label_352ee4;
        case 0x352ee8u: goto label_352ee8;
        case 0x352eecu: goto label_352eec;
        case 0x352ef0u: goto label_352ef0;
        case 0x352ef4u: goto label_352ef4;
        case 0x352ef8u: goto label_352ef8;
        case 0x352efcu: goto label_352efc;
        case 0x352f00u: goto label_352f00;
        case 0x352f04u: goto label_352f04;
        case 0x352f08u: goto label_352f08;
        case 0x352f0cu: goto label_352f0c;
        case 0x352f10u: goto label_352f10;
        case 0x352f14u: goto label_352f14;
        case 0x352f18u: goto label_352f18;
        case 0x352f1cu: goto label_352f1c;
        default: break;
    }

    ctx->pc = 0x352e6cu;

label_352e6c:
    // 0x352e6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352e70:
    // 0x352e70: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352e74:
    // 0x352e74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352e78:
    // 0x352e78: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352e78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352e7c:
    // 0x352e7c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352e80:
    // 0x352e80: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352e84:
    // 0x352e84: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352e84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352e88:
    // 0x352e88: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352e8c:
    // 0x352e8c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352e90:
    // 0x352e90: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352e94:
    // 0x352e94: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352e98:
    // 0x352e98: 0xc0d506c  jal         func_3541B0
label_352e9c:
    if (ctx->pc == 0x352E9Cu) {
        ctx->pc = 0x352EA0u;
        goto label_352ea0;
    }
    ctx->pc = 0x352E98u;
    SET_GPR_U32(ctx, 31, 0x352EA0u);
    ctx->pc = 0x3541B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541B0u, 0x352E98u, 0x352EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352EA0u;
label_352ea0:
    // 0x352ea0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352ea4:
    // 0x352ea4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352ea8:
    // 0x352ea8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352eac:
    // 0x352eac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352eb0:
    if (ctx->pc == 0x352EB0u) {
        ctx->pc = 0x352EB4u;
        goto label_352eb4;
    }
    ctx->pc = 0x352EACu;
    {
        const bool branch_taken_0x352eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352eac) {
            ctx->pc = 0x352F04u;
            goto label_352f04;
        }
    }
    ctx->pc = 0x352EB4u;
label_352eb4:
    // 0x352eb4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352eb8:
    // 0x352eb8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352ebc:
    // 0x352ebc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352ec0:
    // 0x352ec0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352ec4:
    // 0x352ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352ec8:
    // 0x352ec8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352ecc:
    // 0x352ecc: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x352eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_352ed0:
    // 0x352ed0: 0x40f809  jalr        $v0
label_352ed4:
    if (ctx->pc == 0x352ED4u) {
        ctx->pc = 0x352ED8u;
        goto label_352ed8;
    }
    ctx->pc = 0x352ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352ED8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352ED0u, 0x352ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352ED8u;
label_352ed8:
    // 0x352ed8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352edc:
    // 0x352edc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352ee0:
    // 0x352ee0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352ee4:
    if (ctx->pc == 0x352EE4u) {
        ctx->pc = 0x352EE8u;
        goto label_352ee8;
    }
    ctx->pc = 0x352EE0u;
    {
        const bool branch_taken_0x352ee0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352ee0) {
            ctx->pc = 0x352F04u;
            goto label_352f04;
        }
    }
    ctx->pc = 0x352EE8u;
label_352ee8:
    // 0x352ee8: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352eec:
    // 0x352eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352ef0:
    // 0x352ef0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352ef4:
    if (ctx->pc == 0x352EF4u) {
        ctx->pc = 0x352EF8u;
        goto label_352ef8;
    }
    ctx->pc = 0x352EF0u;
    {
        const bool branch_taken_0x352ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352ef0) {
            ctx->pc = 0x352F04u;
            goto label_352f04;
        }
    }
    ctx->pc = 0x352EF8u;
label_352ef8:
    // 0x352ef8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352efc:
    // 0x352efc: 0x10000002  b           . + 4 + (0x2 << 2)
label_352f00:
    if (ctx->pc == 0x352F00u) {
        ctx->pc = 0x352F04u;
        goto label_352f04;
    }
    ctx->pc = 0x352EFCu;
    {
        const bool branch_taken_0x352efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352efc) {
            ctx->pc = 0x352F08u;
            goto label_352f08;
        }
    }
    ctx->pc = 0x352F04u;
label_352f04:
    // 0x352f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352f08:
    // 0x352f08: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352f08u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352f0c:
    // 0x352f0c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352f0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352f10:
    // 0x352f10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352f14:
    // 0x352f14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352f18:
    // 0x352f18: 0x3e00008  jr          $ra
label_352f1c:
    if (ctx->pc == 0x352F1Cu) {
        ctx->pc = 0x352F20u;
        goto label_fallthrough_0x352f18;
    }
    ctx->pc = 0x352F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352f18:
    ctx->pc = 0x352F20u;
}
