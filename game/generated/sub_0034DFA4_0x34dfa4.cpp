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

// Function: sub_0034DFA4
// Address: 0x34dfa4 - 0x34e070
void sub_0034DFA4_0x34dfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DFA4_0x34dfa4");
#endif

    switch (ctx->pc) {
        case 0x34dfe8u: goto label_34dfe8;
        case 0x34e020u: goto label_34e020;
        case 0x34e048u: goto label_34e048;
        case 0x34e054u: goto label_34e054;
        default: break;
    }

    ctx->pc = 0x34dfa4u;

    // 0x34dfa4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34dfa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34dfa8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34dfac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34dfb0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34dfb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dfb4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34dfb8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34dfbc: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34dfc0: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34dfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dfc8: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34dfcc: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34dfd0: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34dfd4: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34dfd8: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34dfdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dfe0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34DFE0u;
    SET_GPR_U32(ctx, 31, 0x34DFE8u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34DFE0u, 0x34DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DFE8u;
label_34dfe8:
    // 0x34dfe8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34dfec: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34dff0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DFF0u;
    {
        const bool branch_taken_0x34dff0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34dff0) {
            ctx->pc = 0x34E008u;
            goto label_34e008;
        }
    }
    ctx->pc = 0x34DFF8u;
    // 0x34dff8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34dffc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34e000: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34E000u;
    {
        const bool branch_taken_0x34e000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e000) {
            ctx->pc = 0x34E058u;
            goto label_34e058;
        }
    }
    ctx->pc = 0x34E008u;
label_34e008:
    // 0x34e008: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34e008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e00c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34e010: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34e010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34e014: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34e014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e018: 0xc0d381c  jal         func_34E070
    ctx->pc = 0x34E018u;
    SET_GPR_U32(ctx, 31, 0x34E020u);
    ctx->pc = 0x34E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E070u, 0x34E018u, 0x34E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E020u;
label_34e020:
    // 0x34e020: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e020u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e024: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e028: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E028u;
    {
        const bool branch_taken_0x34e028 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e028) {
            ctx->pc = 0x34E03Cu;
            goto label_34e03c;
        }
    }
    ctx->pc = 0x34E030u;
    // 0x34e030: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E034u;
    {
        const bool branch_taken_0x34e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e034) {
            ctx->pc = 0x34E058u;
            goto label_34e058;
        }
    }
    ctx->pc = 0x34E03Cu;
label_34e03c:
    // 0x34e03c: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e040: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E040u;
    SET_GPR_U32(ctx, 31, 0x34E048u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E040u, 0x34E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E048u;
label_34e048:
    // 0x34e048: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e04c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34E04Cu;
    SET_GPR_U32(ctx, 31, 0x34E054u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34E04Cu, 0x34E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E054u;
label_34e054:
    // 0x34e054: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34e058:
    // 0x34e058: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e058u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e05c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34e05cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e060: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34e060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e064: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34e064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e068: 0x3e00008  jr          $ra
    ctx->pc = 0x34E068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E070u;
}
