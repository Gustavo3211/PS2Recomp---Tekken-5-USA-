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

// Function: sub_00351B90
// Address: 0x351b90 - 0x351c58
void sub_00351B90_0x351b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351B90_0x351b90");
#endif

    switch (ctx->pc) {
        case 0x351bbcu: goto label_351bbc;
        case 0x351c40u: goto label_351c40;
        default: break;
    }

    ctx->pc = 0x351b90u;

    // 0x351b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351b94: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351b98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351b9c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351b9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351ba0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351ba4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351ba8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351bac: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351bacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351bb0: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x351bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x351bb4: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351BB4u;
    SET_GPR_U32(ctx, 31, 0x351BBCu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351BB4u, 0x351BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BBCu;
label_351bbc:
    // 0x351bbc: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351bc0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351bc4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x351bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x351bc8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x351bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351bcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351BCCu;
    {
        const bool branch_taken_0x351bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351bcc) {
            ctx->pc = 0x351BE4u;
            goto label_351be4;
        }
    }
    ctx->pc = 0x351BD4u;
    // 0x351bd4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351bd8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351bdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x351BDCu;
    {
        const bool branch_taken_0x351bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bdc) {
            ctx->pc = 0x351C40u;
            goto label_351c40;
        }
    }
    ctx->pc = 0x351BE4u;
label_351be4:
    // 0x351be4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351be8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351bec: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x351becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x351bf0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351bf4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351bf8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351bfc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351c00: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351c04: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351c08: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351c0c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351c10: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351c14: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351c18: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351c1c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351c20: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351c24: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351c28: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351c2c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x351c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x351c30: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x351c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351c34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351c38: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351C38u;
    SET_GPR_U32(ctx, 31, 0x351C40u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351C38u, 0x351C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C40u;
label_351c40:
    // 0x351c40: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351c40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c44: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351c44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351c48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351c4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351c50: 0x3e00008  jr          $ra
    ctx->pc = 0x351C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351C58u;
}
