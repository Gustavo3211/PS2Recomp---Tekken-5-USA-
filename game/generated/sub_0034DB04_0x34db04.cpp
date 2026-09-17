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

// Function: sub_0034DB04
// Address: 0x34db04 - 0x34dbd0
void sub_0034DB04_0x34db04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DB04_0x34db04");
#endif

    switch (ctx->pc) {
        case 0x34db48u: goto label_34db48;
        case 0x34db80u: goto label_34db80;
        case 0x34dba8u: goto label_34dba8;
        case 0x34dbb4u: goto label_34dbb4;
        default: break;
    }

    ctx->pc = 0x34db04u;

    // 0x34db04: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34db08: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34db0c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34db10: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34db10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db14: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34db14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34db18: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34db18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34db1c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34db20: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34db20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34db24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34db28: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34db28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34db2c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34db30: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34db30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34db34: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34db34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34db38: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34db3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db40: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34DB40u;
    SET_GPR_U32(ctx, 31, 0x34DB48u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34DB40u, 0x34DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB48u;
label_34db48:
    // 0x34db48: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34db48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34db4c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34db50: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DB50u;
    {
        const bool branch_taken_0x34db50 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34db50) {
            ctx->pc = 0x34DB68u;
            goto label_34db68;
        }
    }
    ctx->pc = 0x34DB58u;
    // 0x34db58: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34db5c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34db60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34DB60u;
    {
        const bool branch_taken_0x34db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db60) {
            ctx->pc = 0x34DBB8u;
            goto label_34dbb8;
        }
    }
    ctx->pc = 0x34DB68u;
label_34db68:
    // 0x34db68: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34db6c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34db70: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34db74: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34db74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34db78: 0xc0d36f4  jal         func_34DBD0
    ctx->pc = 0x34DB78u;
    SET_GPR_U32(ctx, 31, 0x34DB80u);
    ctx->pc = 0x34DBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DBD0u, 0x34DB78u, 0x34DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB80u;
label_34db80:
    // 0x34db80: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34db80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34db84: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34db88: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DB88u;
    {
        const bool branch_taken_0x34db88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34db88) {
            ctx->pc = 0x34DB9Cu;
            goto label_34db9c;
        }
    }
    ctx->pc = 0x34DB90u;
    // 0x34db90: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34db94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34DB94u;
    {
        const bool branch_taken_0x34db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db94) {
            ctx->pc = 0x34DBB8u;
            goto label_34dbb8;
        }
    }
    ctx->pc = 0x34DB9Cu;
label_34db9c:
    // 0x34db9c: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34dba0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34DBA0u;
    SET_GPR_U32(ctx, 31, 0x34DBA8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34DBA0u, 0x34DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBA8u;
label_34dba8:
    // 0x34dba8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34dbac: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34DBACu;
    SET_GPR_U32(ctx, 31, 0x34DBB4u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34DBACu, 0x34DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBB4u;
label_34dbb4:
    // 0x34dbb4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34dbb8:
    // 0x34dbb8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34dbb8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbbc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34dbbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34dbc0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34dbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34dbc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34dbc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34dbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x34DBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DBD0u;
}
