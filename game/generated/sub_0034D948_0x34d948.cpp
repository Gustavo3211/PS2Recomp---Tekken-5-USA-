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

// Function: sub_0034D948
// Address: 0x34d948 - 0x34da0c
void sub_0034D948_0x34d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D948_0x34d948");
#endif

    switch (ctx->pc) {
        case 0x34d984u: goto label_34d984;
        case 0x34d9bcu: goto label_34d9bc;
        case 0x34d9e4u: goto label_34d9e4;
        case 0x34d9f0u: goto label_34d9f0;
        default: break;
    }

    ctx->pc = 0x34d948u;

    // 0x34d948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d94c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34d950: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34d950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34d954: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d954u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d958: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d95c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x34d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x34d960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d964: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d968: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x34d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x34d96c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d970: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x34d970u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x34d974: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34d978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d97c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34D97Cu;
    SET_GPR_U32(ctx, 31, 0x34D984u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34D97Cu, 0x34D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D984u;
label_34d984:
    // 0x34d984: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d988: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d98c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D98Cu;
    {
        const bool branch_taken_0x34d98c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34d98c) {
            ctx->pc = 0x34D9A4u;
            goto label_34d9a4;
        }
    }
    ctx->pc = 0x34D994u;
    // 0x34d994: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d998: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34d99c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34D99Cu;
    {
        const bool branch_taken_0x34d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d99c) {
            ctx->pc = 0x34D9F4u;
            goto label_34d9f4;
        }
    }
    ctx->pc = 0x34D9A4u;
label_34d9a4:
    // 0x34d9a4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d9a8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34d9ac: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34d9b0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d9b4: 0xc0d3683  jal         func_34DA0C
    ctx->pc = 0x34D9B4u;
    SET_GPR_U32(ctx, 31, 0x34D9BCu);
    ctx->pc = 0x34DA0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA0Cu, 0x34D9B4u, 0x34D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9BCu;
label_34d9bc:
    // 0x34d9bc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34d9c0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d9c4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D9C4u;
    {
        const bool branch_taken_0x34d9c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d9c4) {
            ctx->pc = 0x34D9D8u;
            goto label_34d9d8;
        }
    }
    ctx->pc = 0x34D9CCu;
    // 0x34d9cc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d9d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34D9D0u;
    {
        const bool branch_taken_0x34d9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d9d0) {
            ctx->pc = 0x34D9F4u;
            goto label_34d9f4;
        }
    }
    ctx->pc = 0x34D9D8u;
label_34d9d8:
    // 0x34d9d8: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d9dc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D9DCu;
    SET_GPR_U32(ctx, 31, 0x34D9E4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D9DCu, 0x34D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9E4u;
label_34d9e4:
    // 0x34d9e4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d9e8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34D9E8u;
    SET_GPR_U32(ctx, 31, 0x34D9F0u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34D9E8u, 0x34D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9F0u;
label_34d9f0:
    // 0x34d9f0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34d9f4:
    // 0x34d9f4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d9f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9f8: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34d9f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d9fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34da00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34da04: 0x3e00008  jr          $ra
    ctx->pc = 0x34DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DA0Cu;
}
