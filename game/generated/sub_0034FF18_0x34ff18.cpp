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

// Function: sub_0034FF18
// Address: 0x34ff18 - 0x34ffcc
void sub_0034FF18_0x34ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FF18_0x34ff18");
#endif

    switch (ctx->pc) {
        case 0x34ff44u: goto label_34ff44;
        default: break;
    }

    ctx->pc = 0x34ff18u;

    // 0x34ff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ff1c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34ff20: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ff20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ff24: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ff28: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ff2c: 0x2442ba80  addiu       $v0, $v0, -0x4580
    ctx->pc = 0x34ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
    // 0x34ff30: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34ff34: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34ff38: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34ff3c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34ff40: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x34ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_34ff44:
    // 0x34ff44: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ff48: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x34ff48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34ff4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FF4Cu;
    {
        const bool branch_taken_0x34ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ff4c) {
            ctx->pc = 0x34FF5Cu;
            goto label_34ff5c;
        }
    }
    ctx->pc = 0x34FF54u;
    // 0x34ff54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34FF54u;
    {
        const bool branch_taken_0x34ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff54) {
            ctx->pc = 0x34FF98u;
            goto label_34ff98;
        }
    }
    ctx->pc = 0x34FF5Cu;
label_34ff5c:
    // 0x34ff5c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ff60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ff64: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ff68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FF68u;
    {
        const bool branch_taken_0x34ff68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ff68) {
            ctx->pc = 0x34FF78u;
            goto label_34ff78;
        }
    }
    ctx->pc = 0x34FF70u;
    // 0x34ff70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34FF70u;
    {
        const bool branch_taken_0x34ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff70) {
            ctx->pc = 0x34FF98u;
            goto label_34ff98;
        }
    }
    ctx->pc = 0x34FF78u;
label_34ff78:
    // 0x34ff78: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ff7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ff80: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34ff84: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ff88: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x34ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x34ff8c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34ff90: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x34FF90u;
    {
        const bool branch_taken_0x34ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff90) {
            ctx->pc = 0x34FF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ff44;
        }
    }
    ctx->pc = 0x34FF98u;
label_34ff98:
    // 0x34ff98: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34ff9c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ffa0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FFA0u;
    {
        const bool branch_taken_0x34ffa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ffa0) {
            ctx->pc = 0x34FFB4u;
            goto label_34ffb4;
        }
    }
    ctx->pc = 0x34FFA8u;
    // 0x34ffa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ffa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34FFACu;
    {
        const bool branch_taken_0x34ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffac) {
            ctx->pc = 0x34FFB8u;
            goto label_34ffb8;
        }
    }
    ctx->pc = 0x34FFB4u;
label_34ffb4:
    // 0x34ffb4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34ffb8:
    // 0x34ffb8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ffb8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffbc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34ffbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ffc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x34FFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FFCCu;
}
