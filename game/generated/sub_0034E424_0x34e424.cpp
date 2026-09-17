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

// Function: sub_0034E424
// Address: 0x34e424 - 0x34e4f0
void sub_0034E424_0x34e424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E424_0x34e424");
#endif

    switch (ctx->pc) {
        case 0x34e468u: goto label_34e468;
        case 0x34e4a0u: goto label_34e4a0;
        case 0x34e4c8u: goto label_34e4c8;
        case 0x34e4d4u: goto label_34e4d4;
        default: break;
    }

    ctx->pc = 0x34e424u;

    // 0x34e424: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34e428: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34e42c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34e430: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e430u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e434: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e438: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e438u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e43c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e440: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34e440u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34e444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e448: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e44c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34e450: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34e450u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34e454: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34e454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34e458: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34e45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e460: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34E460u;
    SET_GPR_U32(ctx, 31, 0x34E468u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34E460u, 0x34E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E468u;
label_34e468:
    // 0x34e468: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e46c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e470: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E470u;
    {
        const bool branch_taken_0x34e470 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34e470) {
            ctx->pc = 0x34E488u;
            goto label_34e488;
        }
    }
    ctx->pc = 0x34E478u;
    // 0x34e478: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e47c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34e47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34e480: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34E480u;
    {
        const bool branch_taken_0x34e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e480) {
            ctx->pc = 0x34E4D8u;
            goto label_34e4d8;
        }
    }
    ctx->pc = 0x34E488u;
label_34e488:
    // 0x34e488: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e48c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34e490: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34e494: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34e494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e498: 0xc0d393c  jal         func_34E4F0
    ctx->pc = 0x34E498u;
    SET_GPR_U32(ctx, 31, 0x34E4A0u);
    ctx->pc = 0x34E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E4F0u, 0x34E498u, 0x34E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4A0u;
label_34e4a0:
    // 0x34e4a0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e4a4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e4a8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E4A8u;
    {
        const bool branch_taken_0x34e4a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e4a8) {
            ctx->pc = 0x34E4BCu;
            goto label_34e4bc;
        }
    }
    ctx->pc = 0x34E4B0u;
    // 0x34e4b0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e4b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E4B4u;
    {
        const bool branch_taken_0x34e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e4b4) {
            ctx->pc = 0x34E4D8u;
            goto label_34e4d8;
        }
    }
    ctx->pc = 0x34E4BCu;
label_34e4bc:
    // 0x34e4bc: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e4c0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E4C0u;
    SET_GPR_U32(ctx, 31, 0x34E4C8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E4C0u, 0x34E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4C8u;
label_34e4c8:
    // 0x34e4c8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e4cc: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34E4CCu;
    SET_GPR_U32(ctx, 31, 0x34E4D4u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34E4CCu, 0x34E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4D4u;
label_34e4d4:
    // 0x34e4d4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34e4d8:
    // 0x34e4d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e4d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4dc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34e4dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e4e0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e4e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34e4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E4F0u;
}
