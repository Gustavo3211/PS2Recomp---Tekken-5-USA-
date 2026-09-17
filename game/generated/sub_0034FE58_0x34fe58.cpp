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

// Function: sub_0034FE58
// Address: 0x34fe58 - 0x34ff18
void sub_0034FE58_0x34fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FE58_0x34fe58");
#endif

    switch (ctx->pc) {
        case 0x34fe84u: goto label_34fe84;
        default: break;
    }

    ctx->pc = 0x34fe58u;

    // 0x34fe58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fe5c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34fe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34fe60: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fe60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe64: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34fe64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34fe68: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34fe6c: 0x2442ba80  addiu       $v0, $v0, -0x4580
    ctx->pc = 0x34fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
    // 0x34fe70: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34fe74: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34fe78: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34fe7c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34fe80: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x34fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_34fe84:
    // 0x34fe84: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fe88: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x34fe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34fe8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FE8Cu;
    {
        const bool branch_taken_0x34fe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fe8c) {
            ctx->pc = 0x34FE9Cu;
            goto label_34fe9c;
        }
    }
    ctx->pc = 0x34FE94u;
    // 0x34fe94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34FE94u;
    {
        const bool branch_taken_0x34fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe94) {
            ctx->pc = 0x34FED8u;
            goto label_34fed8;
        }
    }
    ctx->pc = 0x34FE9Cu;
label_34fe9c:
    // 0x34fe9c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34fea0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fea4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fea8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FEA8u;
    {
        const bool branch_taken_0x34fea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fea8) {
            ctx->pc = 0x34FEB8u;
            goto label_34feb8;
        }
    }
    ctx->pc = 0x34FEB0u;
    // 0x34feb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34FEB0u;
    {
        const bool branch_taken_0x34feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34feb0) {
            ctx->pc = 0x34FED8u;
            goto label_34fed8;
        }
    }
    ctx->pc = 0x34FEB8u;
label_34feb8:
    // 0x34feb8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34febc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fec0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34fec4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34fec8: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x34fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x34fecc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34feccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34fed0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x34FED0u;
    {
        const bool branch_taken_0x34fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fed0) {
            ctx->pc = 0x34FE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fe84;
        }
    }
    ctx->pc = 0x34FED8u;
label_34fed8:
    // 0x34fed8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fedc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fee0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FEE0u;
    {
        const bool branch_taken_0x34fee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fee0) {
            ctx->pc = 0x34FEF8u;
            goto label_34fef8;
        }
    }
    ctx->pc = 0x34FEE8u;
    // 0x34fee8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34feec: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x34fef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34FEF0u;
    {
        const bool branch_taken_0x34fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fef0) {
            ctx->pc = 0x34FF04u;
            goto label_34ff04;
        }
    }
    ctx->pc = 0x34FEF8u;
label_34fef8:
    // 0x34fef8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34fefc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x34fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x34ff00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ff00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ff04:
    // 0x34ff04: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ff04u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ff08: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34ff08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ff0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x34FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FF18u;
}
