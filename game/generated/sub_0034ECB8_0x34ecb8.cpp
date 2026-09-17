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

// Function: sub_0034ECB8
// Address: 0x34ecb8 - 0x34ed7c
void sub_0034ECB8_0x34ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ECB8_0x34ecb8");
#endif

    switch (ctx->pc) {
        case 0x34ecf4u: goto label_34ecf4;
        case 0x34ed2cu: goto label_34ed2c;
        case 0x34ed54u: goto label_34ed54;
        case 0x34ed60u: goto label_34ed60;
        default: break;
    }

    ctx->pc = 0x34ecb8u;

    // 0x34ecb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ecb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ecbc: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34ecc0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34ecc4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ecc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ecc8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34eccc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x34ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x34ecd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ecd4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34ecd8: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x34ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x34ecdc: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34ece0: 0xafc00020  sw          $zero, 0x20($fp)
    ctx->pc = 0x34ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 0));
    // 0x34ece4: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34ece8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ecec: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34ECECu;
    SET_GPR_U32(ctx, 31, 0x34ECF4u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34ECECu, 0x34ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ECF4u;
label_34ecf4:
    // 0x34ecf4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34ecf8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ecfc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34ECFCu;
    {
        const bool branch_taken_0x34ecfc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34ecfc) {
            ctx->pc = 0x34ED14u;
            goto label_34ed14;
        }
    }
    ctx->pc = 0x34ED04u;
    // 0x34ed04: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34ed08: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34ed0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34ED0Cu;
    {
        const bool branch_taken_0x34ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ed0c) {
            ctx->pc = 0x34ED64u;
            goto label_34ed64;
        }
    }
    ctx->pc = 0x34ED14u;
label_34ed14:
    // 0x34ed14: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ed18: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34ed1c: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34ed20: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ed24: 0xc0d3b5f  jal         func_34ED7C
    ctx->pc = 0x34ED24u;
    SET_GPR_U32(ctx, 31, 0x34ED2Cu);
    ctx->pc = 0x34ED7Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ED7Cu, 0x34ED24u, 0x34ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED2Cu;
label_34ed2c:
    // 0x34ed2c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34ed30: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ed34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34ED34u;
    {
        const bool branch_taken_0x34ed34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34ed34) {
            ctx->pc = 0x34ED48u;
            goto label_34ed48;
        }
    }
    ctx->pc = 0x34ED3Cu;
    // 0x34ed3c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ed40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34ED40u;
    {
        const bool branch_taken_0x34ed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ed40) {
            ctx->pc = 0x34ED64u;
            goto label_34ed64;
        }
    }
    ctx->pc = 0x34ED48u;
label_34ed48:
    // 0x34ed48: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ed4c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34ED4Cu;
    SET_GPR_U32(ctx, 31, 0x34ED54u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34ED4Cu, 0x34ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED54u;
label_34ed54:
    // 0x34ed54: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ed58: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34ED58u;
    SET_GPR_U32(ctx, 31, 0x34ED60u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34ED58u, 0x34ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED60u;
label_34ed60:
    // 0x34ed60: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34ed64:
    // 0x34ed64: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ed64u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed68: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34ed68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ed6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ed70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34ed74: 0x3e00008  jr          $ra
    ctx->pc = 0x34ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ED74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ED7Cu;
}
