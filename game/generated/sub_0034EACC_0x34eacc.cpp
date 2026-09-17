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

// Function: sub_0034EACC
// Address: 0x34eacc - 0x34eb98
void sub_0034EACC_0x34eacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EACC_0x34eacc");
#endif

    switch (ctx->pc) {
        case 0x34eb0cu: goto label_34eb0c;
        case 0x34eb48u: goto label_34eb48;
        case 0x34eb70u: goto label_34eb70;
        case 0x34eb7cu: goto label_34eb7c;
        default: break;
    }

    ctx->pc = 0x34eaccu;

    // 0x34eacc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34eaccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34ead0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34ead4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34ead8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ead8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eadc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34eae0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34eae4: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34eae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eaec: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34eaf0: 0x27c2000c  addiu       $v0, $fp, 0xC
    ctx->pc = 0x34eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x34eaf4: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34eaf8: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34eafc: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34eb00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb04: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34EB04u;
    SET_GPR_U32(ctx, 31, 0x34EB0Cu);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34EB04u, 0x34EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB0Cu;
label_34eb0c:
    // 0x34eb0c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34eb10: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34eb14: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EB14u;
    {
        const bool branch_taken_0x34eb14 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34eb14) {
            ctx->pc = 0x34EB2Cu;
            goto label_34eb2c;
        }
    }
    ctx->pc = 0x34EB1Cu;
    // 0x34eb1c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34eb20: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34eb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34eb24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34EB24u;
    {
        const bool branch_taken_0x34eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eb24) {
            ctx->pc = 0x34EB80u;
            goto label_34eb80;
        }
    }
    ctx->pc = 0x34EB2Cu;
label_34eb2c:
    // 0x34eb2c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34eb30: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34eb34: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34eb38: 0x24c6f09c  addiu       $a2, $a2, -0xF64
    ctx->pc = 0x34eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963356));
    // 0x34eb3c: 0x8fc70010  lw          $a3, 0x10($fp)
    ctx->pc = 0x34eb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34eb40: 0xc0d3ae6  jal         func_34EB98
    ctx->pc = 0x34EB40u;
    SET_GPR_U32(ctx, 31, 0x34EB48u);
    ctx->pc = 0x34EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EB98u, 0x34EB40u, 0x34EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB48u;
label_34eb48:
    // 0x34eb48: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34eb4c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34eb50: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EB50u;
    {
        const bool branch_taken_0x34eb50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34eb50) {
            ctx->pc = 0x34EB64u;
            goto label_34eb64;
        }
    }
    ctx->pc = 0x34EB58u;
    // 0x34eb58: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34eb5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34EB5Cu;
    {
        const bool branch_taken_0x34eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eb5c) {
            ctx->pc = 0x34EB80u;
            goto label_34eb80;
        }
    }
    ctx->pc = 0x34EB64u;
label_34eb64:
    // 0x34eb64: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34eb68: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34EB68u;
    SET_GPR_U32(ctx, 31, 0x34EB70u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34EB68u, 0x34EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB70u;
label_34eb70:
    // 0x34eb70: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34eb74: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34EB74u;
    SET_GPR_U32(ctx, 31, 0x34EB7Cu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34EB74u, 0x34EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB7Cu;
label_34eb7c:
    // 0x34eb7c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34eb80:
    // 0x34eb80: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34eb80u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb84: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34eb84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34eb88: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34eb8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34eb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34eb90: 0x3e00008  jr          $ra
    ctx->pc = 0x34EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EB98u;
}
