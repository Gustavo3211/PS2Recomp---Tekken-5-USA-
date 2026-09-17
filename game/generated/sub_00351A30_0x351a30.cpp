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

// Function: sub_00351A30
// Address: 0x351a30 - 0x351ad8
void sub_00351A30_0x351a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351A30_0x351a30");
#endif

    switch (ctx->pc) {
        case 0x351a54u: goto label_351a54;
        case 0x351ac0u: goto label_351ac0;
        default: break;
    }

    ctx->pc = 0x351a30u;

    // 0x351a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351a34: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351a38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351a3c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351a3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a40: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351a40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351a44: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351a44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351a48: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351a48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351a4c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351A4Cu;
    SET_GPR_U32(ctx, 31, 0x351A54u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351A4Cu, 0x351A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A54u;
label_351a54:
    // 0x351a54: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x351a54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x351a58: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351a5c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351a60: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351a64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351A64u;
    {
        const bool branch_taken_0x351a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351a64) {
            ctx->pc = 0x351A7Cu;
            goto label_351a7c;
        }
    }
    ctx->pc = 0x351A6Cu;
    // 0x351a6c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351a70: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351a74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x351A74u;
    {
        const bool branch_taken_0x351a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351a74) {
            ctx->pc = 0x351AC0u;
            goto label_351ac0;
        }
    }
    ctx->pc = 0x351A7Cu;
label_351a7c:
    // 0x351a7c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351a80: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351a84: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x351a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x351a88: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351a8c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351a90: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351a94: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351a98: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351a9c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351aa0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351aa4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351aa8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351aac: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351ab0: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351ab4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351ab8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351AB8u;
    SET_GPR_U32(ctx, 31, 0x351AC0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351AB8u, 0x351AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351AC0u;
label_351ac0:
    // 0x351ac0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351ac0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351ac4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351ac4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351ac8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351acc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x351AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351AD8u;
}
