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

// Function: sub_0034E1CC
// Address: 0x34e1cc - 0x34e2a0
void sub_0034E1CC_0x34e1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E1CC_0x34e1cc");
#endif

    switch (ctx->pc) {
        case 0x34e214u: goto label_34e214;
        case 0x34e250u: goto label_34e250;
        case 0x34e278u: goto label_34e278;
        case 0x34e284u: goto label_34e284;
        default: break;
    }

    ctx->pc = 0x34e1ccu;

    // 0x34e1cc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34e1d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34e1d4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34e1d8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e1d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1dc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e1e0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e1e4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e1e8: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34e1ec: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34e1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e1f4: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e1f8: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x34e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x34e1fc: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34e200: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34e200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34e204: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34e208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e20c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34E20Cu;
    SET_GPR_U32(ctx, 31, 0x34E214u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34E20Cu, 0x34E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E214u;
label_34e214:
    // 0x34e214: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e214u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e218: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e21c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E21Cu;
    {
        const bool branch_taken_0x34e21c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34e21c) {
            ctx->pc = 0x34E234u;
            goto label_34e234;
        }
    }
    ctx->pc = 0x34E224u;
    // 0x34e224: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e228: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34e22c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34E22Cu;
    {
        const bool branch_taken_0x34e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e22c) {
            ctx->pc = 0x34E288u;
            goto label_34e288;
        }
    }
    ctx->pc = 0x34E234u;
label_34e234:
    // 0x34e234: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e238: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e23c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34e240: 0x24c6f09c  addiu       $a2, $a2, -0xF64
    ctx->pc = 0x34e240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963356));
    // 0x34e244: 0x8fc70018  lw          $a3, 0x18($fp)
    ctx->pc = 0x34e244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e248: 0xc0d38a8  jal         func_34E2A0
    ctx->pc = 0x34E248u;
    SET_GPR_U32(ctx, 31, 0x34E250u);
    ctx->pc = 0x34E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E2A0u, 0x34E248u, 0x34E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E250u;
label_34e250:
    // 0x34e250: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e254: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e258: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E258u;
    {
        const bool branch_taken_0x34e258 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e258) {
            ctx->pc = 0x34E26Cu;
            goto label_34e26c;
        }
    }
    ctx->pc = 0x34E260u;
    // 0x34e260: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E264u;
    {
        const bool branch_taken_0x34e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e264) {
            ctx->pc = 0x34E288u;
            goto label_34e288;
        }
    }
    ctx->pc = 0x34E26Cu;
label_34e26c:
    // 0x34e26c: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e270: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E270u;
    SET_GPR_U32(ctx, 31, 0x34E278u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E270u, 0x34E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E278u;
label_34e278:
    // 0x34e278: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e27c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34E27Cu;
    SET_GPR_U32(ctx, 31, 0x34E284u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34E27Cu, 0x34E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E284u;
label_34e284:
    // 0x34e284: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34e288:
    // 0x34e288: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e288u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e28c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34e28cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e290: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34e290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e294: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e298: 0x3e00008  jr          $ra
    ctx->pc = 0x34E298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E2A0u;
}
