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

// Function: sub_00351988
// Address: 0x351988 - 0x351a30
void sub_00351988_0x351988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351988_0x351988");
#endif

    switch (ctx->pc) {
        case 0x3519acu: goto label_3519ac;
        case 0x351a18u: goto label_351a18;
        default: break;
    }

    ctx->pc = 0x351988u;

    // 0x351988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35198c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351990: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351994: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351994u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351998: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351998u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35199c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35199cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3519a0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3519a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3519a4: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3519A4u;
    SET_GPR_U32(ctx, 31, 0x3519ACu);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3519A4u, 0x3519ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3519ACu;
label_3519ac:
    // 0x3519ac: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3519acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3519b0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3519b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3519b4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3519b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3519b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3519b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3519bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3519BCu;
    {
        const bool branch_taken_0x3519bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3519bc) {
            ctx->pc = 0x3519D4u;
            goto label_3519d4;
        }
    }
    ctx->pc = 0x3519C4u;
    // 0x3519c4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3519c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3519c8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3519c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3519cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3519CCu;
    {
        const bool branch_taken_0x3519cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3519cc) {
            ctx->pc = 0x351A18u;
            goto label_351a18;
        }
    }
    ctx->pc = 0x3519D4u;
label_3519d4:
    // 0x3519d4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3519d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3519d8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3519d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x3519dc: 0x24422d14  addiu       $v0, $v0, 0x2D14
    ctx->pc = 0x3519dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11540));
    // 0x3519e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3519e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3519e4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3519e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3519e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3519e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3519ec: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3519ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3519f0: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3519f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3519f4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3519f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3519f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3519f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3519fc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x3519fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351a00: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351a04: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351a08: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351a0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351a10: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351A10u;
    SET_GPR_U32(ctx, 31, 0x351A18u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351A10u, 0x351A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A18u;
label_351a18:
    // 0x351a18: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351a18u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a1c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351a1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351a20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351a28: 0x3e00008  jr          $ra
    ctx->pc = 0x351A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351A30u;
}
