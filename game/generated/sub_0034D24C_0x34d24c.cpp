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

// Function: sub_0034D24C
// Address: 0x34d24c - 0x34d344
void sub_0034D24C_0x34d24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D24C_0x34d24c");
#endif

    switch (ctx->pc) {
        case 0x34d2a0u: goto label_34d2a0;
        case 0x34d2e8u: goto label_34d2e8;
        case 0x34d2fcu: goto label_34d2fc;
        default: break;
    }

    ctx->pc = 0x34d24cu;

    // 0x34d24c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d24cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d250: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34d254: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34d258: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d258u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d25c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d260: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d260u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d264: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d264u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d268: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d26c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34d270: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d274: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x34d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34d278: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d278u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d27c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d280: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34d280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d284: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d28c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d290: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d294: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d298: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D298u;
    SET_GPR_U32(ctx, 31, 0x34D2A0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D298u, 0x34D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2A0u;
label_34d2a0:
    // 0x34d2a0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d2a4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d2a8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d2ac: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d2b0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d2b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34d2b8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d2bc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d2c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d2c4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d2c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d2cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34d2d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d2d4: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x34d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d2d8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d2dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d2e0: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34D2E0u;
    SET_GPR_U32(ctx, 31, 0x34D2E8u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34D2E0u, 0x34D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2E8u;
label_34d2e8:
    // 0x34d2e8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34d2ec: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d2f0: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d2f4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34D2F4u;
    SET_GPR_U32(ctx, 31, 0x34D2FCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34D2F4u, 0x34D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2FCu;
label_34d2fc:
    // 0x34d2fc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34d300: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D300u;
    {
        const bool branch_taken_0x34d300 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d300) {
            ctx->pc = 0x34D318u;
            goto label_34d318;
        }
    }
    ctx->pc = 0x34D308u;
    // 0x34d308: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d30c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34d30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34d310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D310u;
    {
        const bool branch_taken_0x34d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d310) {
            ctx->pc = 0x34D32Cu;
            goto label_34d32c;
        }
    }
    ctx->pc = 0x34D318u;
label_34d318:
    // 0x34d318: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d31c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d320: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34d320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34d324: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34d328: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34d32c:
    // 0x34d32c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d32cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d330: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34d330u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d334: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34d338: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D344u;
}
