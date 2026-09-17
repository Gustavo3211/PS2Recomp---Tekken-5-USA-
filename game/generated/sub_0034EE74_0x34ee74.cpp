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

// Function: sub_0034EE74
// Address: 0x34ee74 - 0x34ef40
void sub_0034EE74_0x34ee74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EE74_0x34ee74");
#endif

    switch (ctx->pc) {
        case 0x34eeb8u: goto label_34eeb8;
        case 0x34eef0u: goto label_34eef0;
        case 0x34ef18u: goto label_34ef18;
        case 0x34ef24u: goto label_34ef24;
        default: break;
    }

    ctx->pc = 0x34ee74u;

    // 0x34ee74: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34ee74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34ee78: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34ee7c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34ee80: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ee80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee84: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ee88: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34ee8c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34ee90: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34ee94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ee98: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34ee9c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34eea0: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34eea4: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34eea8: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34eeac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eeb0: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34EEB0u;
    SET_GPR_U32(ctx, 31, 0x34EEB8u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34EEB0u, 0x34EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EEB8u;
label_34eeb8:
    // 0x34eeb8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34eebc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34eec0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EEC0u;
    {
        const bool branch_taken_0x34eec0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34eec0) {
            ctx->pc = 0x34EED8u;
            goto label_34eed8;
        }
    }
    ctx->pc = 0x34EEC8u;
    // 0x34eec8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34eecc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34eed0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34EED0u;
    {
        const bool branch_taken_0x34eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eed0) {
            ctx->pc = 0x34EF28u;
            goto label_34ef28;
        }
    }
    ctx->pc = 0x34EED8u;
label_34eed8:
    // 0x34eed8: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34eedc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34eee0: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34eee4: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34eee8: 0xc0d3bd0  jal         func_34EF40
    ctx->pc = 0x34EEE8u;
    SET_GPR_U32(ctx, 31, 0x34EEF0u);
    ctx->pc = 0x34EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EF40u, 0x34EEE8u, 0x34EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EEF0u;
label_34eef0:
    // 0x34eef0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34eef4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34eef8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EEF8u;
    {
        const bool branch_taken_0x34eef8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34eef8) {
            ctx->pc = 0x34EF0Cu;
            goto label_34ef0c;
        }
    }
    ctx->pc = 0x34EF00u;
    // 0x34ef00: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ef04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34EF04u;
    {
        const bool branch_taken_0x34ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ef04) {
            ctx->pc = 0x34EF28u;
            goto label_34ef28;
        }
    }
    ctx->pc = 0x34EF0Cu;
label_34ef0c:
    // 0x34ef0c: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ef10: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34EF10u;
    SET_GPR_U32(ctx, 31, 0x34EF18u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34EF10u, 0x34EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF18u;
label_34ef18:
    // 0x34ef18: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ef1c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34EF1Cu;
    SET_GPR_U32(ctx, 31, 0x34EF24u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34EF1Cu, 0x34EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF24u;
label_34ef24:
    // 0x34ef24: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34ef28:
    // 0x34ef28: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ef28u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef2c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34ef2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ef30: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34ef34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34ef34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ef38: 0x3e00008  jr          $ra
    ctx->pc = 0x34EF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EF40u;
}
