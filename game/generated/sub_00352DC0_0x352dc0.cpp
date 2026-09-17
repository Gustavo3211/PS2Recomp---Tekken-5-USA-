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

// Function: sub_00352DC0
// Address: 0x352dc0 - 0x352e6c
void sub_00352DC0_0x352dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352DC0_0x352dc0");
#endif

    switch (ctx->pc) {
        case 0x352dc0u: goto label_352dc0;
        case 0x352dc4u: goto label_352dc4;
        case 0x352dc8u: goto label_352dc8;
        case 0x352dccu: goto label_352dcc;
        case 0x352dd0u: goto label_352dd0;
        case 0x352dd4u: goto label_352dd4;
        case 0x352dd8u: goto label_352dd8;
        case 0x352ddcu: goto label_352ddc;
        case 0x352de0u: goto label_352de0;
        case 0x352de4u: goto label_352de4;
        case 0x352de8u: goto label_352de8;
        case 0x352decu: goto label_352dec;
        case 0x352df0u: goto label_352df0;
        case 0x352df4u: goto label_352df4;
        case 0x352df8u: goto label_352df8;
        case 0x352dfcu: goto label_352dfc;
        case 0x352e00u: goto label_352e00;
        case 0x352e04u: goto label_352e04;
        case 0x352e08u: goto label_352e08;
        case 0x352e0cu: goto label_352e0c;
        case 0x352e10u: goto label_352e10;
        case 0x352e14u: goto label_352e14;
        case 0x352e18u: goto label_352e18;
        case 0x352e1cu: goto label_352e1c;
        case 0x352e20u: goto label_352e20;
        case 0x352e24u: goto label_352e24;
        case 0x352e28u: goto label_352e28;
        case 0x352e2cu: goto label_352e2c;
        case 0x352e30u: goto label_352e30;
        case 0x352e34u: goto label_352e34;
        case 0x352e38u: goto label_352e38;
        case 0x352e3cu: goto label_352e3c;
        case 0x352e40u: goto label_352e40;
        case 0x352e44u: goto label_352e44;
        case 0x352e48u: goto label_352e48;
        case 0x352e4cu: goto label_352e4c;
        case 0x352e50u: goto label_352e50;
        case 0x352e54u: goto label_352e54;
        case 0x352e58u: goto label_352e58;
        case 0x352e5cu: goto label_352e5c;
        case 0x352e60u: goto label_352e60;
        case 0x352e64u: goto label_352e64;
        case 0x352e68u: goto label_352e68;
        default: break;
    }

    ctx->pc = 0x352dc0u;

label_352dc0:
    // 0x352dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352dc4:
    // 0x352dc4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352dc8:
    // 0x352dc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352dcc:
    // 0x352dcc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352dccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352dd0:
    // 0x352dd0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352dd4:
    // 0x352dd4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352dd8:
    // 0x352dd8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352ddc:
    // 0x352ddc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352de0:
    // 0x352de0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352de4:
    // 0x352de4: 0xc0d5049  jal         func_354124
label_352de8:
    if (ctx->pc == 0x352DE8u) {
        ctx->pc = 0x352DECu;
        goto label_352dec;
    }
    ctx->pc = 0x352DE4u;
    SET_GPR_U32(ctx, 31, 0x352DECu);
    ctx->pc = 0x354124u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354124u, 0x352DE4u, 0x352DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352DECu;
label_352dec:
    // 0x352dec: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352decu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352df0:
    // 0x352df0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352df4:
    // 0x352df4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352df8:
    // 0x352df8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352dfc:
    if (ctx->pc == 0x352DFCu) {
        ctx->pc = 0x352E00u;
        goto label_352e00;
    }
    ctx->pc = 0x352DF8u;
    {
        const bool branch_taken_0x352df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352df8) {
            ctx->pc = 0x352E50u;
            goto label_352e50;
        }
    }
    ctx->pc = 0x352E00u;
label_352e00:
    // 0x352e00: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352e04:
    // 0x352e04: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352e08:
    // 0x352e08: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352e0c:
    // 0x352e0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352e10:
    // 0x352e10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352e14:
    // 0x352e14: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352e18:
    // 0x352e18: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352e1c:
    // 0x352e1c: 0x40f809  jalr        $v0
label_352e20:
    if (ctx->pc == 0x352E20u) {
        ctx->pc = 0x352E24u;
        goto label_352e24;
    }
    ctx->pc = 0x352E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352E24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352E1Cu, 0x352E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352E24u;
label_352e24:
    // 0x352e24: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352e24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352e28:
    // 0x352e28: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352e2c:
    // 0x352e2c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352e30:
    if (ctx->pc == 0x352E30u) {
        ctx->pc = 0x352E34u;
        goto label_352e34;
    }
    ctx->pc = 0x352E2Cu;
    {
        const bool branch_taken_0x352e2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352e2c) {
            ctx->pc = 0x352E50u;
            goto label_352e50;
        }
    }
    ctx->pc = 0x352E34u;
label_352e34:
    // 0x352e34: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352e38:
    // 0x352e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352e3c:
    // 0x352e3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352e40:
    if (ctx->pc == 0x352E40u) {
        ctx->pc = 0x352E44u;
        goto label_352e44;
    }
    ctx->pc = 0x352E3Cu;
    {
        const bool branch_taken_0x352e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352e3c) {
            ctx->pc = 0x352E50u;
            goto label_352e50;
        }
    }
    ctx->pc = 0x352E44u;
label_352e44:
    // 0x352e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352e48:
    // 0x352e48: 0x10000002  b           . + 4 + (0x2 << 2)
label_352e4c:
    if (ctx->pc == 0x352E4Cu) {
        ctx->pc = 0x352E50u;
        goto label_352e50;
    }
    ctx->pc = 0x352E48u;
    {
        const bool branch_taken_0x352e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352e48) {
            ctx->pc = 0x352E54u;
            goto label_352e54;
        }
    }
    ctx->pc = 0x352E50u;
label_352e50:
    // 0x352e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352e54:
    // 0x352e54: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352e54u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352e58:
    // 0x352e58: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352e58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352e5c:
    // 0x352e5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352e60:
    // 0x352e60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352e64:
    // 0x352e64: 0x3e00008  jr          $ra
label_352e68:
    if (ctx->pc == 0x352E68u) {
        ctx->pc = 0x352E6Cu;
        goto label_fallthrough_0x352e64;
    }
    ctx->pc = 0x352E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352e64:
    ctx->pc = 0x352E6Cu;
}
