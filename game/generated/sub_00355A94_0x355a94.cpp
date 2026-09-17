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

// Function: sub_00355A94
// Address: 0x355a94 - 0x355be0
void sub_00355A94_0x355a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355A94_0x355a94");
#endif

    switch (ctx->pc) {
        case 0x355ab4u: goto label_355ab4;
        case 0x355b20u: goto label_355b20;
        case 0x355bc4u: goto label_355bc4;
        default: break;
    }

    ctx->pc = 0x355a94u;

    // 0x355a94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355a98: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x355a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x355a9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x355a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x355aa0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355aa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355aa4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355aa8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355aac: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355AACu;
    SET_GPR_U32(ctx, 31, 0x355AB4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355AACu, 0x355AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AB4u;
label_355ab4:
    // 0x355ab4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355ab8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355abc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355ac0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x355ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355ac4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x355ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x355ac8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x355ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355acc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355ad0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355ad4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355ad8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x355ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x355adc: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x355adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x355ae0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355ae4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x355ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x355ae8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355aec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355af0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355AF0u;
    {
        const bool branch_taken_0x355af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355af0) {
            ctx->pc = 0x355B04u;
            goto label_355b04;
        }
    }
    ctx->pc = 0x355AF8u;
    // 0x355af8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x355af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355b00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x355b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_355b04:
    // 0x355b04: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355b08: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355b0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355b10: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x355b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355b14: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x355b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b18: 0xc0d557b  jal         func_3555EC
    ctx->pc = 0x355B18u;
    SET_GPR_U32(ctx, 31, 0x355B20u);
    ctx->pc = 0x3555ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3555ECu, 0x355B18u, 0x355B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B20u;
label_355b20:
    // 0x355b20: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b24: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x355b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x355b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355b2c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x355B2Cu;
    {
        const bool branch_taken_0x355b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355b2c) {
            ctx->pc = 0x355BA0u;
            goto label_355ba0;
        }
    }
    ctx->pc = 0x355B34u;
    // 0x355b34: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b38: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x355b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x355b3c: 0x2402ff01  addiu       $v0, $zero, -0xFF
    ctx->pc = 0x355b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x355b40: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x355B40u;
    {
        const bool branch_taken_0x355b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355b40) {
            ctx->pc = 0x355B8Cu;
            goto label_355b8c;
        }
    }
    ctx->pc = 0x355B48u;
    // 0x355b48: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b4c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x355b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x355b50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x355B50u;
    {
        const bool branch_taken_0x355b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b50) {
            ctx->pc = 0x355B8Cu;
            goto label_355b8c;
        }
    }
    ctx->pc = 0x355B58u;
    // 0x355b58: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b5c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x355b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x355b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355b64: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x355B64u;
    {
        const bool branch_taken_0x355b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355b64) {
            ctx->pc = 0x355B8Cu;
            goto label_355b8c;
        }
    }
    ctx->pc = 0x355B6Cu;
    // 0x355b6c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b70: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x355b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x355b74: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x355b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x355b78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355B78u;
    {
        const bool branch_taken_0x355b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355b78) {
            ctx->pc = 0x355B8Cu;
            goto label_355b8c;
        }
    }
    ctx->pc = 0x355B80u;
    // 0x355b80: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x355b80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x355b84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x355B84u;
    {
        const bool branch_taken_0x355b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b84) {
            ctx->pc = 0x355BACu;
            goto label_355bac;
        }
    }
    ctx->pc = 0x355B8Cu;
label_355b8c:
    // 0x355b8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355b90: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x355b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x355b94: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x355b94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x355b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355B98u;
    {
        const bool branch_taken_0x355b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b98) {
            ctx->pc = 0x355BACu;
            goto label_355bac;
        }
    }
    ctx->pc = 0x355BA0u;
label_355ba0:
    // 0x355ba0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355ba4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x355ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x355ba8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x355ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_355bac:
    // 0x355bac: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355bb0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355bb4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x355bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x355bb8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355bbc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x355BBCu;
    SET_GPR_U32(ctx, 31, 0x355BC4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x355BBCu, 0x355BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BC4u;
label_355bc4:
    // 0x355bc4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355bc8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355bc8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355bcc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x355bccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355bd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355bd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x355BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355BE0u;
}
