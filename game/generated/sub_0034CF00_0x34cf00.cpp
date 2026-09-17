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

// Function: sub_0034CF00
// Address: 0x34cf00 - 0x34cfec
void sub_0034CF00_0x34cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CF00_0x34cf00");
#endif

    switch (ctx->pc) {
        case 0x34cf54u: goto label_34cf54;
        case 0x34cf9cu: goto label_34cf9c;
        case 0x34cfc4u: goto label_34cfc4;
        case 0x34cfd0u: goto label_34cfd0;
        default: break;
    }

    ctx->pc = 0x34cf00u;

    // 0x34cf00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34cf04: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34cf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x34cf08: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34cf0c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34cf0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf10: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34cf14: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34cf18: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34cf1c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34cf20: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34cf24: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x34cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x34cf28: 0xafca0018  sw          $t2, 0x18($fp)
    ctx->pc = 0x34cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 10));
    // 0x34cf2c: 0xafc00038  sw          $zero, 0x38($fp)
    ctx->pc = 0x34cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 0));
    // 0x34cf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cf34: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34cf38: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34cf3c: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x34cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
    // 0x34cf40: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x34cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
    // 0x34cf44: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x34cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x34cf48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cf4c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34CF4Cu;
    SET_GPR_U32(ctx, 31, 0x34CF54u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34CF4Cu, 0x34CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF54u;
label_34cf54:
    // 0x34cf54: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34cf58: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34cf5c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CF5Cu;
    {
        const bool branch_taken_0x34cf5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34cf5c) {
            ctx->pc = 0x34CF74u;
            goto label_34cf74;
        }
    }
    ctx->pc = 0x34CF64u;
    // 0x34cf64: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34cf68: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34cf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34cf6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34CF6Cu;
    {
        const bool branch_taken_0x34cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf6c) {
            ctx->pc = 0x34CFD4u;
            goto label_34cfd4;
        }
    }
    ctx->pc = 0x34CF74u;
label_34cf74:
    // 0x34cf74: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34cf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34cf78: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34cf7c: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34cf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34cf80: 0x8fc70014  lw          $a3, 0x14($fp)
    ctx->pc = 0x34cf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34cf84: 0x8fc80018  lw          $t0, 0x18($fp)
    ctx->pc = 0x34cf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34cf88: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x34cf88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x34cf8c: 0x2529f09c  addiu       $t1, $t1, -0xF64
    ctx->pc = 0x34cf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963356));
    // 0x34cf90: 0x8fca0024  lw          $t2, 0x24($fp)
    ctx->pc = 0x34cf90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34cf94: 0xc0d33fb  jal         func_34CFEC
    ctx->pc = 0x34CF94u;
    SET_GPR_U32(ctx, 31, 0x34CF9Cu);
    ctx->pc = 0x34CFECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CFECu, 0x34CF94u, 0x34CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CF9Cu;
label_34cf9c:
    // 0x34cf9c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34cfa0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cfa4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CFA4u;
    {
        const bool branch_taken_0x34cfa4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34cfa4) {
            ctx->pc = 0x34CFB8u;
            goto label_34cfb8;
        }
    }
    ctx->pc = 0x34CFACu;
    // 0x34cfac: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34cfb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34CFB0u;
    {
        const bool branch_taken_0x34cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cfb0) {
            ctx->pc = 0x34CFD4u;
            goto label_34cfd4;
        }
    }
    ctx->pc = 0x34CFB8u;
label_34cfb8:
    // 0x34cfb8: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x34cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34cfbc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34CFBCu;
    SET_GPR_U32(ctx, 31, 0x34CFC4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34CFBCu, 0x34CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFC4u;
label_34cfc4:
    // 0x34cfc4: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x34cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34cfc8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34CFC8u;
    SET_GPR_U32(ctx, 31, 0x34CFD0u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34CFC8u, 0x34CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFD0u;
label_34cfd0:
    // 0x34cfd0: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_34cfd4:
    // 0x34cfd4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34cfd4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfd8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34cfd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34cfdc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34cfe0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34cfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x34CFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CFECu;
}
