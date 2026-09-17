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

// Function: sub_00373D0C
// Address: 0x373d0c - 0x373db0
void sub_00373D0C_0x373d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373D0C_0x373d0c");
#endif

    ctx->pc = 0x373d0cu;

    // 0x373d0c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373d10: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x373d14: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373d14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d18: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x373d18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x373d1c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x373d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x373d20: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x373d28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x373D28u;
    {
        const bool branch_taken_0x373d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373d28) {
            ctx->pc = 0x373D50u;
            goto label_373d50;
        }
    }
    ctx->pc = 0x373D30u;
    // 0x373d30: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x373d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x373d3c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d40: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x373d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x373d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x373d48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x373D48u;
    {
        const bool branch_taken_0x373d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d48) {
            ctx->pc = 0x373D70u;
            goto label_373d70;
        }
    }
    ctx->pc = 0x373D50u;
label_373d50:
    // 0x373d50: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373d58: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x373d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x373d60: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373d68: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x373d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_373d70:
    // 0x373d70: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d74: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x373d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d78: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x373d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x373d7c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373d80: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x373d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x373d88: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x373d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x373d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373d94: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373d98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x373d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x373d9c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373d9cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373da0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373da0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373da4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373da8: 0x3e00008  jr          $ra
    ctx->pc = 0x373DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373DB0u;
}
