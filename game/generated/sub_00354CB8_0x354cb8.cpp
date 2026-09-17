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

// Function: sub_00354CB8
// Address: 0x354cb8 - 0x354e20
void sub_00354CB8_0x354cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354CB8_0x354cb8");
#endif

    switch (ctx->pc) {
        case 0x354cf4u: goto label_354cf4;
        case 0x354d34u: goto label_354d34;
        case 0x354d98u: goto label_354d98;
        case 0x354dccu: goto label_354dcc;
        case 0x354dd8u: goto label_354dd8;
        case 0x354df0u: goto label_354df0;
        default: break;
    }

    ctx->pc = 0x354cb8u;

    // 0x354cb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x354cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x354cbc: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x354cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x354cc0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x354cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x354cc4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354cc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cc8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x354cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x354ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354cd0: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x354cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x354cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354cd8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x354cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x354cdc: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x354cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x354ce0: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x354ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x354ce4: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x354ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cec: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x354CECu;
    SET_GPR_U32(ctx, 31, 0x354CF4u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x354CECu, 0x354CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354CF4u;
label_354cf4:
    // 0x354cf4: 0xaf82c728  sw          $v0, -0x38D8($gp)
    ctx->pc = 0x354cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952744), GPR_U32(ctx, 2));
    // 0x354cf8: 0x8f82c728  lw          $v0, -0x38D8($gp)
    ctx->pc = 0x354cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x354cfc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354CFCu;
    {
        const bool branch_taken_0x354cfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354cfc) {
            ctx->pc = 0x354D10u;
            goto label_354d10;
        }
    }
    ctx->pc = 0x354D04u;
    // 0x354d04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354d08: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x354D08u;
    {
        const bool branch_taken_0x354d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d08) {
            ctx->pc = 0x354E08u;
            goto label_354e08;
        }
    }
    ctx->pc = 0x354D10u;
label_354d10:
    // 0x354d10: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x354d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x354d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354d18: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x354d18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x354d1c: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x354d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x354d20: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x354d20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x354d24: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x354d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d2c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x354D2Cu;
    SET_GPR_U32(ctx, 31, 0x354D34u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x354D2Cu, 0x354D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D34u;
label_354d34:
    // 0x354d34: 0xaf82c72c  sw          $v0, -0x38D4($gp)
    ctx->pc = 0x354d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952748), GPR_U32(ctx, 2));
    // 0x354d38: 0x8f82c728  lw          $v0, -0x38D8($gp)
    ctx->pc = 0x354d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x354d3c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354D3Cu;
    {
        const bool branch_taken_0x354d3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354d3c) {
            ctx->pc = 0x354D50u;
            goto label_354d50;
        }
    }
    ctx->pc = 0x354D44u;
    // 0x354d44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354d48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x354D48u;
    {
        const bool branch_taken_0x354d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354d48) {
            ctx->pc = 0x354E08u;
            goto label_354e08;
        }
    }
    ctx->pc = 0x354D50u;
label_354d50:
    // 0x354d50: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x354d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x354d54: 0x244250d4  addiu       $v0, $v0, 0x50D4
    ctx->pc = 0x354d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20692));
    // 0x354d58: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x354d58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x354d5c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354d60: 0x2442d780  addiu       $v0, $v0, -0x2880
    ctx->pc = 0x354d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956928));
    // 0x354d64: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x354d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x354d68: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x354d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x354d6c: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x354d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x354d70: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x354d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x354d74: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x354d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x354d78: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x354d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x354d7c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x354d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x354d80: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x354d80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
    // 0x354d84: 0xafc00050  sw          $zero, 0x50($fp)
    ctx->pc = 0x354d84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 0));
    // 0x354d88: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x354d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x354d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d90: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x354D90u;
    SET_GPR_U32(ctx, 31, 0x354D98u);
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x354D90u, 0x354D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D98u;
label_354d98:
    // 0x354d98: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x354d98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x354d9c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354da0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354DA0u;
    {
        const bool branch_taken_0x354da0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354da0) {
            ctx->pc = 0x354DB4u;
            goto label_354db4;
        }
    }
    ctx->pc = 0x354DA8u;
    // 0x354da8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354dac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x354DACu;
    {
        const bool branch_taken_0x354dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354dac) {
            ctx->pc = 0x354E08u;
            goto label_354e08;
        }
    }
    ctx->pc = 0x354DB4u;
label_354db4:
    // 0x354db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354db8: 0xaf82c734  sw          $v0, -0x38CC($gp)
    ctx->pc = 0x354db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952756), GPR_U32(ctx, 2));
    // 0x354dbc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354dc4: 0xc044138  jal         func_1104E0
    ctx->pc = 0x354DC4u;
    SET_GPR_U32(ctx, 31, 0x354DCCu);
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x354DC4u, 0x354DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DCCu;
label_354dcc:
    // 0x354dcc: 0x2784c738  addiu       $a0, $gp, -0x38C8
    ctx->pc = 0x354dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952760));
    // 0x354dd0: 0xc045ff4  jal         func_117FD0
    ctx->pc = 0x354DD0u;
    SET_GPR_U32(ctx, 31, 0x354DD8u);
    ctx->pc = 0x117FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FD0u, 0x354DD0u, 0x354DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DD8u;
label_354dd8:
    // 0x354dd8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x354dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x354ddc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354de0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354DE0u;
    {
        const bool branch_taken_0x354de0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x354de0) {
            ctx->pc = 0x354DFCu;
            goto label_354dfc;
        }
    }
    ctx->pc = 0x354DE8u;
    // 0x354de8: 0xc04340c  jal         func_10D030
    ctx->pc = 0x354DE8u;
    SET_GPR_U32(ctx, 31, 0x354DF0u);
    ctx->pc = 0x10D030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D030u, 0x354DE8u, 0x354DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DF0u;
label_354df0:
    // 0x354df0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x354df0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x354df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354DF4u;
    {
        const bool branch_taken_0x354df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354df4) {
            ctx->pc = 0x354E04u;
            goto label_354e04;
        }
    }
    ctx->pc = 0x354DFCu;
label_354dfc:
    // 0x354dfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354e00: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x354e00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_354e04:
    // 0x354e04: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_354e08:
    // 0x354e08: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354e08u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354e0c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x354e0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354e10: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x354e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x354e14: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x354e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x354e18: 0x3e00008  jr          $ra
    ctx->pc = 0x354E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354E20u;
}
