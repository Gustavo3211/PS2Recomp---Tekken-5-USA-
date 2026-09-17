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

// Function: sub_00352F20
// Address: 0x352f20 - 0x352fdc
void sub_00352F20_0x352f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352F20_0x352f20");
#endif

    switch (ctx->pc) {
        case 0x352f20u: goto label_352f20;
        case 0x352f24u: goto label_352f24;
        case 0x352f28u: goto label_352f28;
        case 0x352f2cu: goto label_352f2c;
        case 0x352f30u: goto label_352f30;
        case 0x352f34u: goto label_352f34;
        case 0x352f38u: goto label_352f38;
        case 0x352f3cu: goto label_352f3c;
        case 0x352f40u: goto label_352f40;
        case 0x352f44u: goto label_352f44;
        case 0x352f48u: goto label_352f48;
        case 0x352f4cu: goto label_352f4c;
        case 0x352f50u: goto label_352f50;
        case 0x352f54u: goto label_352f54;
        case 0x352f58u: goto label_352f58;
        case 0x352f5cu: goto label_352f5c;
        case 0x352f60u: goto label_352f60;
        case 0x352f64u: goto label_352f64;
        case 0x352f68u: goto label_352f68;
        case 0x352f6cu: goto label_352f6c;
        case 0x352f70u: goto label_352f70;
        case 0x352f74u: goto label_352f74;
        case 0x352f78u: goto label_352f78;
        case 0x352f7cu: goto label_352f7c;
        case 0x352f80u: goto label_352f80;
        case 0x352f84u: goto label_352f84;
        case 0x352f88u: goto label_352f88;
        case 0x352f8cu: goto label_352f8c;
        case 0x352f90u: goto label_352f90;
        case 0x352f94u: goto label_352f94;
        case 0x352f98u: goto label_352f98;
        case 0x352f9cu: goto label_352f9c;
        case 0x352fa0u: goto label_352fa0;
        case 0x352fa4u: goto label_352fa4;
        case 0x352fa8u: goto label_352fa8;
        case 0x352facu: goto label_352fac;
        case 0x352fb0u: goto label_352fb0;
        case 0x352fb4u: goto label_352fb4;
        case 0x352fb8u: goto label_352fb8;
        case 0x352fbcu: goto label_352fbc;
        case 0x352fc0u: goto label_352fc0;
        case 0x352fc4u: goto label_352fc4;
        case 0x352fc8u: goto label_352fc8;
        case 0x352fccu: goto label_352fcc;
        case 0x352fd0u: goto label_352fd0;
        case 0x352fd4u: goto label_352fd4;
        case 0x352fd8u: goto label_352fd8;
        default: break;
    }

    ctx->pc = 0x352f20u;

label_352f20:
    // 0x352f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352f24:
    // 0x352f24: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352f28:
    // 0x352f28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352f2c:
    // 0x352f2c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352f2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352f30:
    // 0x352f30: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352f30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352f34:
    // 0x352f34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352f38:
    // 0x352f38: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352f38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352f3c:
    // 0x352f3c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f40:
    // 0x352f40: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f44:
    // 0x352f44: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f48:
    // 0x352f48: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352f4c:
    // 0x352f4c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352f50:
    // 0x352f50: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352f54:
    // 0x352f54: 0xc0d50b0  jal         func_3542C0
label_352f58:
    if (ctx->pc == 0x352F58u) {
        ctx->pc = 0x352F5Cu;
        goto label_352f5c;
    }
    ctx->pc = 0x352F54u;
    SET_GPR_U32(ctx, 31, 0x352F5Cu);
    ctx->pc = 0x3542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3542C0u, 0x352F54u, 0x352F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F5Cu;
label_352f5c:
    // 0x352f5c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352f60:
    // 0x352f60: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f64:
    // 0x352f64: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352f68:
    // 0x352f68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352f6c:
    if (ctx->pc == 0x352F6Cu) {
        ctx->pc = 0x352F70u;
        goto label_352f70;
    }
    ctx->pc = 0x352F68u;
    {
        const bool branch_taken_0x352f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352f68) {
            ctx->pc = 0x352FC0u;
            goto label_352fc0;
        }
    }
    ctx->pc = 0x352F70u;
label_352f70:
    // 0x352f70: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f74:
    // 0x352f74: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f78:
    // 0x352f78: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352f7c:
    // 0x352f7c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352f80:
    // 0x352f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352f84:
    // 0x352f84: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352f88:
    // 0x352f88: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x352f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_352f8c:
    // 0x352f8c: 0x40f809  jalr        $v0
label_352f90:
    if (ctx->pc == 0x352F90u) {
        ctx->pc = 0x352F94u;
        goto label_352f94;
    }
    ctx->pc = 0x352F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352F94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352F8Cu, 0x352F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352F94u;
label_352f94:
    // 0x352f94: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352f94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352f98:
    // 0x352f98: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352f9c:
    // 0x352f9c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352fa0:
    if (ctx->pc == 0x352FA0u) {
        ctx->pc = 0x352FA4u;
        goto label_352fa4;
    }
    ctx->pc = 0x352F9Cu;
    {
        const bool branch_taken_0x352f9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352f9c) {
            ctx->pc = 0x352FC0u;
            goto label_352fc0;
        }
    }
    ctx->pc = 0x352FA4u;
label_352fa4:
    // 0x352fa4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352fa8:
    // 0x352fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352fac:
    // 0x352fac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352fb0:
    if (ctx->pc == 0x352FB0u) {
        ctx->pc = 0x352FB4u;
        goto label_352fb4;
    }
    ctx->pc = 0x352FACu;
    {
        const bool branch_taken_0x352fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352fac) {
            ctx->pc = 0x352FC0u;
            goto label_352fc0;
        }
    }
    ctx->pc = 0x352FB4u;
label_352fb4:
    // 0x352fb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352fb8:
    // 0x352fb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_352fbc:
    if (ctx->pc == 0x352FBCu) {
        ctx->pc = 0x352FC0u;
        goto label_352fc0;
    }
    ctx->pc = 0x352FB8u;
    {
        const bool branch_taken_0x352fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352fb8) {
            ctx->pc = 0x352FC4u;
            goto label_352fc4;
        }
    }
    ctx->pc = 0x352FC0u;
label_352fc0:
    // 0x352fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352fc4:
    // 0x352fc4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352fc4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352fc8:
    // 0x352fc8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352fcc:
    // 0x352fcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352fd0:
    // 0x352fd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352fd4:
    // 0x352fd4: 0x3e00008  jr          $ra
label_352fd8:
    if (ctx->pc == 0x352FD8u) {
        ctx->pc = 0x352FDCu;
        goto label_fallthrough_0x352fd4;
    }
    ctx->pc = 0x352FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352fd4:
    ctx->pc = 0x352FDCu;
}
