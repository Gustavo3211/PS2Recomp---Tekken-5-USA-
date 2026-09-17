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

// Function: sub_00354A20
// Address: 0x354a20 - 0x354acc
void sub_00354A20_0x354a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354A20_0x354a20");
#endif

    switch (ctx->pc) {
        case 0x354a34u: goto label_354a34;
        default: break;
    }

    ctx->pc = 0x354a20u;

    // 0x354a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354a24: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354a28: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354a28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a2c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354a30: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x354a30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_354a34:
    // 0x354a34: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354a38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354A38u;
    {
        const bool branch_taken_0x354a38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x354a38) {
            ctx->pc = 0x354A48u;
            goto label_354a48;
        }
    }
    ctx->pc = 0x354A40u;
    // 0x354a40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x354A40u;
    {
        const bool branch_taken_0x354a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a40) {
            ctx->pc = 0x354AB4u;
            goto label_354ab4;
        }
    }
    ctx->pc = 0x354A48u;
label_354a48:
    // 0x354a48: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354a4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x354a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354a58: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354a5c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354a60: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x354a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354a64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354a68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x354a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354a6c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x354a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354a70: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x354A70u;
    {
        const bool branch_taken_0x354a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354a70) {
            ctx->pc = 0x354AA0u;
            goto label_354aa0;
        }
    }
    ctx->pc = 0x354A78u;
    // 0x354a78: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x354a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354a7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x354a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x354a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354a88: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x354a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354a8c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x354a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x354a90: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x354a94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354a98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354A98u;
    {
        const bool branch_taken_0x354a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354a98) {
            ctx->pc = 0x354AB8u;
            goto label_354ab8;
        }
    }
    ctx->pc = 0x354AA0u;
label_354aa0:
    // 0x354aa0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354aa8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x354aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x354aac: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x354AACu;
    {
        const bool branch_taken_0x354aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354aac) {
            ctx->pc = 0x354A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354a34;
        }
    }
    ctx->pc = 0x354AB4u;
label_354ab4:
    // 0x354ab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354ab8:
    // 0x354ab8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354ab8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354abc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354abcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354ac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x354AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354ACCu;
}
