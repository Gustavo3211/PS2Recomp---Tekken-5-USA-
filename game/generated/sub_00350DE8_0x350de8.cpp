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

// Function: sub_00350DE8
// Address: 0x350de8 - 0x350ed8
void sub_00350DE8_0x350de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350DE8_0x350de8");
#endif

    switch (ctx->pc) {
        case 0x350e30u: goto label_350e30;
        case 0x350eb0u: goto label_350eb0;
        case 0x350ec0u: goto label_350ec0;
        default: break;
    }

    ctx->pc = 0x350de8u;

    // 0x350de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350dec: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x350decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x350df0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350df4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350df4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350df8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350dfc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350e00: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x350e00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x350e04: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x350e04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x350e08: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x350e08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x350e0c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350e10: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350E10u;
    {
        const bool branch_taken_0x350e10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350e10) {
            ctx->pc = 0x350E28u;
            goto label_350e28;
        }
    }
    ctx->pc = 0x350E18u;
    // 0x350e18: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350e1c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x350e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x350e20: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x350E20u;
    {
        const bool branch_taken_0x350e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e20) {
            ctx->pc = 0x350EC0u;
            goto label_350ec0;
        }
    }
    ctx->pc = 0x350E28u;
label_350e28:
    // 0x350e28: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x350E28u;
    SET_GPR_U32(ctx, 31, 0x350E30u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x350E28u, 0x350E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E30u;
label_350e30:
    // 0x350e30: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x350e30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x350e34: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x350e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x350e38: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x350e38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x350e3c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x350e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350E40u;
    {
        const bool branch_taken_0x350e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350e40) {
            ctx->pc = 0x350E58u;
            goto label_350e58;
        }
    }
    ctx->pc = 0x350E48u;
    // 0x350e48: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350e4c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x350e50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x350E50u;
    {
        const bool branch_taken_0x350e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e50) {
            ctx->pc = 0x350EC0u;
            goto label_350ec0;
        }
    }
    ctx->pc = 0x350E58u;
label_350e58:
    // 0x350e58: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e5c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x350e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x350e60: 0x24422288  addiu       $v0, $v0, 0x2288
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8840));
    // 0x350e64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x350e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x350e68: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e6c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350e70: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x350e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x350e74: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e78: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350e7c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x350e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x350e80: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e84: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350e88: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x350e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x350e8c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e90: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350e94: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x350e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x350e98: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350e9c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x350e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350ea0: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x350ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x350ea4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350ea8: 0xc0d4185  jal         func_350614
    ctx->pc = 0x350EA8u;
    SET_GPR_U32(ctx, 31, 0x350EB0u);
    ctx->pc = 0x350614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350614u, 0x350EA8u, 0x350EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EB0u;
label_350eb0:
    // 0x350eb0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x350eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350eb8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x350EB8u;
    SET_GPR_U32(ctx, 31, 0x350EC0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x350EB8u, 0x350EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EC0u;
label_350ec0:
    // 0x350ec0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350ec0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ec4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x350ec4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350ec8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x350ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350ecc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x350eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x350ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350ED8u;
}
