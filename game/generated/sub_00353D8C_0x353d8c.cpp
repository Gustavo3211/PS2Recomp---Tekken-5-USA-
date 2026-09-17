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

// Function: sub_00353D8C
// Address: 0x353d8c - 0x353ec0
void sub_00353D8C_0x353d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353D8C_0x353d8c");
#endif

    switch (ctx->pc) {
        case 0x353db4u: goto label_353db4;
        default: break;
    }

    ctx->pc = 0x353d8cu;

    // 0x353d8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353d90: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x353d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353d94: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353d94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d98: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353d98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353d9c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353da0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353da0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x353da4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x353da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353da8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353dac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x353dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x353db0: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x353db0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_353db4:
    // 0x353db4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353db8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x353db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x353dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353DBCu;
    {
        const bool branch_taken_0x353dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353dbc) {
            ctx->pc = 0x353DCCu;
            goto label_353dcc;
        }
    }
    ctx->pc = 0x353DC4u;
    // 0x353dc4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x353DC4u;
    {
        const bool branch_taken_0x353dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353dc4) {
            ctx->pc = 0x353E1Cu;
            goto label_353e1c;
        }
    }
    ctx->pc = 0x353DCCu;
label_353dcc:
    // 0x353dcc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x353dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353dd0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353dd4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x353dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x353dd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x353dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x353ddc: 0x2442bb4c  addiu       $v0, $v0, -0x44B4
    ctx->pc = 0x353ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949708));
    // 0x353de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353de4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x353de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x353de8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353dec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x353DECu;
    {
        const bool branch_taken_0x353dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353dec) {
            ctx->pc = 0x353E08u;
            goto label_353e08;
        }
    }
    ctx->pc = 0x353DF4u;
    // 0x353df4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x353df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353df8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353dfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x353dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x353e00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x353E00u;
    {
        const bool branch_taken_0x353e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e00) {
            ctx->pc = 0x353E1Cu;
            goto label_353e1c;
        }
    }
    ctx->pc = 0x353E08u;
label_353e08:
    // 0x353e08: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353e10: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353e10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353e14: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x353E14u;
    {
        const bool branch_taken_0x353e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e14) {
            ctx->pc = 0x353DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353db4;
        }
    }
    ctx->pc = 0x353E1Cu;
label_353e1c:
    // 0x353e1c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353e24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353e28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353E28u;
    {
        const bool branch_taken_0x353e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353e28) {
            ctx->pc = 0x353E40u;
            goto label_353e40;
        }
    }
    ctx->pc = 0x353E30u;
    // 0x353e30: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x353e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x353e38: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x353E38u;
    {
        const bool branch_taken_0x353e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e38) {
            ctx->pc = 0x353EACu;
            goto label_353eac;
        }
    }
    ctx->pc = 0x353E40u;
label_353e40:
    // 0x353e40: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353e44: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353e48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x353e4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x353e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x353e50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353e54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353e58: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x353e58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x353e5c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x353e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x353e60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x353e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x353e64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x353E64u;
    {
        const bool branch_taken_0x353e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e64) {
            ctx->pc = 0x353E98u;
            goto label_353e98;
        }
    }
    ctx->pc = 0x353E6Cu;
    // 0x353e6c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x353e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x353e70: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x353E70u;
    {
        const bool branch_taken_0x353e70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x353e70) {
            ctx->pc = 0x353E98u;
            goto label_353e98;
        }
    }
    ctx->pc = 0x353E78u;
    // 0x353e78: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x353e7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353e80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x353E80u;
    {
        const bool branch_taken_0x353e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e80) {
            ctx->pc = 0x353EA8u;
            goto label_353ea8;
        }
    }
    ctx->pc = 0x353E88u;
    // 0x353e88: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353e8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x353e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x353e90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x353E90u;
    {
        const bool branch_taken_0x353e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353e90) {
            ctx->pc = 0x353EACu;
            goto label_353eac;
        }
    }
    ctx->pc = 0x353E98u;
label_353e98:
    // 0x353e98: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353e9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x353e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x353ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353EA0u;
    {
        const bool branch_taken_0x353ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ea0) {
            ctx->pc = 0x353EACu;
            goto label_353eac;
        }
    }
    ctx->pc = 0x353EA8u;
label_353ea8:
    // 0x353ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353eac:
    // 0x353eac: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353eacu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353eb0: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x353eb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353eb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x353eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x353EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353EC0u;
}
