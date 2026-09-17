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

// Function: sub_0034CE68
// Address: 0x34ce68 - 0x34cf00
void sub_0034CE68_0x34ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CE68_0x34ce68");
#endif

    switch (ctx->pc) {
        case 0x34ce98u: goto label_34ce98;
        case 0x34cebcu: goto label_34cebc;
        default: break;
    }

    ctx->pc = 0x34ce68u;

    // 0x34ce68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ce6c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34ce70: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34ce74: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ce74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce78: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ce7c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34ce80: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34ce84: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x34ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34ce88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ce88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ce8c: 0x24060408  addiu       $a2, $zero, 0x408
    ctx->pc = 0x34ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    // 0x34ce90: 0xc04a151  jal         func_128544
    ctx->pc = 0x34CE90u;
    SET_GPR_U32(ctx, 31, 0x34CE98u);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x34CE90u, 0x34CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CE98u;
label_34ce98:
    // 0x34ce98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ce9c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34cea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cea4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34cea8: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x34cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x34ceac: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x34ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x34ceb0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x34ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ceb4: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34CEB4u;
    SET_GPR_U32(ctx, 31, 0x34CEBCu);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34CEB4u, 0x34CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CEBCu;
label_34cebc:
    // 0x34cebc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34cebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cec0: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34cec4: 0xac430404  sw          $v1, 0x404($v0)
    ctx->pc = 0x34cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 3));
    // 0x34cec8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34cecc: 0x8c420404  lw          $v0, 0x404($v0)
    ctx->pc = 0x34ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34ced0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CED0u;
    {
        const bool branch_taken_0x34ced0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34ced0) {
            ctx->pc = 0x34CEE4u;
            goto label_34cee4;
        }
    }
    ctx->pc = 0x34CED8u;
    // 0x34ced8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34cedc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34CEDCu;
    {
        const bool branch_taken_0x34cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cedc) {
            ctx->pc = 0x34CEE8u;
            goto label_34cee8;
        }
    }
    ctx->pc = 0x34CEE4u;
label_34cee4:
    // 0x34cee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34cee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34cee8:
    // 0x34cee8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34cee8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ceec: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34ceecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34cef0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34cef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34cef4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34cef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x34CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CF00u;
}
