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

// Function: sub_00350ED8
// Address: 0x350ed8 - 0x351188
void sub_00350ED8_0x350ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350ED8_0x350ed8");
#endif

    switch (ctx->pc) {
        case 0x350f20u: goto label_350f20;
        case 0x350fa0u: goto label_350fa0;
        case 0x350fb0u: goto label_350fb0;
        case 0x350fc8u: goto label_350fc8;
        case 0x351010u: goto label_351010;
        case 0x351090u: goto label_351090;
        case 0x3510a0u: goto label_3510a0;
        case 0x3510f8u: goto label_3510f8;
        case 0x351160u: goto label_351160;
        case 0x351170u: goto label_351170;
        default: break;
    }

    ctx->pc = 0x350ed8u;

    // 0x350ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350edc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x350edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x350ee0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350ee4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350ee4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ee8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350eec: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350eecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350ef0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x350ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x350ef4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x350ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x350ef8: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x350ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x350efc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350f00: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350F00u;
    {
        const bool branch_taken_0x350f00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350f00) {
            ctx->pc = 0x350F18u;
            goto label_350f18;
        }
    }
    ctx->pc = 0x350F08u;
    // 0x350f08: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350f0c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x350f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x350f10: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x350F10u;
    {
        const bool branch_taken_0x350f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f10) {
            ctx->pc = 0x350FB0u;
            goto label_350fb0;
        }
    }
    ctx->pc = 0x350F18u;
label_350f18:
    // 0x350f18: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x350F18u;
    SET_GPR_U32(ctx, 31, 0x350F20u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x350F18u, 0x350F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F20u;
label_350f20:
    // 0x350f20: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x350f20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x350f24: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x350f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x350f28: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x350f28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x350f2c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x350f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350F30u;
    {
        const bool branch_taken_0x350f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350f30) {
            ctx->pc = 0x350F48u;
            goto label_350f48;
        }
    }
    ctx->pc = 0x350F38u;
    // 0x350f38: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350f3c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x350f40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x350F40u;
    {
        const bool branch_taken_0x350f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f40) {
            ctx->pc = 0x350FB0u;
            goto label_350fb0;
        }
    }
    ctx->pc = 0x350F48u;
label_350f48:
    // 0x350f48: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f4c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x350f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x350f50: 0x24422344  addiu       $v0, $v0, 0x2344
    ctx->pc = 0x350f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9028));
    // 0x350f54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x350f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x350f58: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f5c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350f60: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x350f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x350f64: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f68: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350f6c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x350f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x350f70: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f74: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350f78: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x350f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x350f7c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f80: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350f84: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x350f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x350f88: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x350f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350f8c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x350f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350f90: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x350f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x350f94: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350f98: 0xc0d4185  jal         func_350614
    ctx->pc = 0x350F98u;
    SET_GPR_U32(ctx, 31, 0x350FA0u);
    ctx->pc = 0x350614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350614u, 0x350F98u, 0x350FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FA0u;
label_350fa0:
    // 0x350fa0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x350fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fa8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x350FA8u;
    SET_GPR_U32(ctx, 31, 0x350FB0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x350FA8u, 0x350FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FB0u;
label_350fb0:
    // 0x350fb0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350fb0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fb4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x350fb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350fb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x350fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350fbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x350fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x350FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350FC8u;
label_350fc8:
    // 0x350fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350fcc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x350fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x350fd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350fd4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350fd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350fd8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350fdc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350fe0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x350fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x350fe4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x350fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x350fe8: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x350fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x350fec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350ff0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350FF0u;
    {
        const bool branch_taken_0x350ff0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350ff0) {
            ctx->pc = 0x351008u;
            goto label_351008;
        }
    }
    ctx->pc = 0x350FF8u;
    // 0x350ff8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350ffc: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x350ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x351000: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x351000u;
    {
        const bool branch_taken_0x351000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351000) {
            ctx->pc = 0x3510A0u;
            goto label_3510a0;
        }
    }
    ctx->pc = 0x351008u;
label_351008:
    // 0x351008: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351008u;
    SET_GPR_U32(ctx, 31, 0x351010u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351008u, 0x351010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351010u;
label_351010:
    // 0x351010: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351010u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351014: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351018: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x351018u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x35101c: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x35101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351020: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351020u;
    {
        const bool branch_taken_0x351020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351020) {
            ctx->pc = 0x351038u;
            goto label_351038;
        }
    }
    ctx->pc = 0x351028u;
    // 0x351028: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x35102c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x35102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351030: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x351030u;
    {
        const bool branch_taken_0x351030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351030) {
            ctx->pc = 0x3510A0u;
            goto label_3510a0;
        }
    }
    ctx->pc = 0x351038u;
label_351038:
    // 0x351038: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35103c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x35103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351040: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x351040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x351044: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351048: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35104c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351050: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351054: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351058: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35105c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x35105cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351060: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351064: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351068: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x35106c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x351070: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351074: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351078: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x351078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35107c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x35107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351080: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x351080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x351084: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x351084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351088: 0xc0d4185  jal         func_350614
    ctx->pc = 0x351088u;
    SET_GPR_U32(ctx, 31, 0x351090u);
    ctx->pc = 0x350614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350614u, 0x351088u, 0x351090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351090u;
label_351090:
    // 0x351090: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x351090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351098: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351098u;
    SET_GPR_U32(ctx, 31, 0x3510A0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351098u, 0x3510A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3510A0u;
label_3510a0:
    // 0x3510a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3510a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3510a4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3510a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3510a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3510a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3510ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3510acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3510b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3510B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3510B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3510B8u;
    // 0x3510b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3510b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3510bc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3510bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3510c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3510c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3510c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3510c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3510c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3510c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3510cc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3510ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3510d0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3510d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3510d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3510d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3510d8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3510D8u;
    {
        const bool branch_taken_0x3510d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3510d8) {
            ctx->pc = 0x3510F0u;
            goto label_3510f0;
        }
    }
    ctx->pc = 0x3510E0u;
    // 0x3510e0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3510e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3510e4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3510e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3510e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3510E8u;
    {
        const bool branch_taken_0x3510e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510e8) {
            ctx->pc = 0x351170u;
            goto label_351170;
        }
    }
    ctx->pc = 0x3510F0u;
label_3510f0:
    // 0x3510f0: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x3510F0u;
    SET_GPR_U32(ctx, 31, 0x3510F8u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x3510F0u, 0x3510F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3510F8u;
label_3510f8:
    // 0x3510f8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3510f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3510fc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3510fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351100: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351100u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351104: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351108u;
    {
        const bool branch_taken_0x351108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351108) {
            ctx->pc = 0x351120u;
            goto label_351120;
        }
    }
    ctx->pc = 0x351110u;
    // 0x351110: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351114: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351118: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351118u;
    {
        const bool branch_taken_0x351118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351118) {
            ctx->pc = 0x351170u;
            goto label_351170;
        }
    }
    ctx->pc = 0x351120u;
label_351120:
    // 0x351120: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351124: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351128: 0x244224bc  addiu       $v0, $v0, 0x24BC
    ctx->pc = 0x351128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9404));
    // 0x35112c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x35112cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351130: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351134: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351138: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x35113c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351140: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351144: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351148: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35114c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351150: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351154: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351158: 0xc0d4185  jal         func_350614
    ctx->pc = 0x351158u;
    SET_GPR_U32(ctx, 31, 0x351160u);
    ctx->pc = 0x350614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350614u, 0x351158u, 0x351160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351160u;
label_351160:
    // 0x351160: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351168: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351168u;
    SET_GPR_U32(ctx, 31, 0x351170u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351168u, 0x351170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351170u;
label_351170:
    // 0x351170: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351170u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351174: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351174u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351178: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35117c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35117cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351180: 0x3e00008  jr          $ra
    ctx->pc = 0x351180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351188u;
}
