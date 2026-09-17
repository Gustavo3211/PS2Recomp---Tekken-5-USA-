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

// Function: sub_0034FD4C
// Address: 0x34fd4c - 0x34fe58
void sub_0034FD4C_0x34fd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FD4C_0x34fd4c");
#endif

    switch (ctx->pc) {
        case 0x34fd74u: goto label_34fd74;
        default: break;
    }

    ctx->pc = 0x34fd4cu;

    // 0x34fd4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fd4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fd50: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34fd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34fd54: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34fd54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd58: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34fd5c: 0x2442ba80  addiu       $v0, $v0, -0x4580
    ctx->pc = 0x34fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
    // 0x34fd60: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34fd64: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fd68: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x34fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x34fd6c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34fd70: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x34fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_34fd74:
    // 0x34fd74: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34fd78: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x34fd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x34fd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FD7Cu;
    {
        const bool branch_taken_0x34fd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fd7c) {
            ctx->pc = 0x34FD8Cu;
            goto label_34fd8c;
        }
    }
    ctx->pc = 0x34FD84u;
    // 0x34fd84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34FD84u;
    {
        const bool branch_taken_0x34fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd84) {
            ctx->pc = 0x34FDC4u;
            goto label_34fdc4;
        }
    }
    ctx->pc = 0x34FD8Cu;
label_34fd8c:
    // 0x34fd8c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fd90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fd94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FD94u;
    {
        const bool branch_taken_0x34fd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fd94) {
            ctx->pc = 0x34FDA4u;
            goto label_34fda4;
        }
    }
    ctx->pc = 0x34FD9Cu;
    // 0x34fd9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34FD9Cu;
    {
        const bool branch_taken_0x34fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd9c) {
            ctx->pc = 0x34FDC4u;
            goto label_34fdc4;
        }
    }
    ctx->pc = 0x34FDA4u;
label_34fda4:
    // 0x34fda4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34fda8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fdac: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34fdb0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fdb4: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x34fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x34fdb8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x34fdbc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x34FDBCu;
    {
        const bool branch_taken_0x34fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fdbc) {
            ctx->pc = 0x34FD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fd74;
        }
    }
    ctx->pc = 0x34FDC4u;
label_34fdc4:
    // 0x34fdc4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34fdc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fdcc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FDCCu;
    {
        const bool branch_taken_0x34fdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fdcc) {
            ctx->pc = 0x34FDE4u;
            goto label_34fde4;
        }
    }
    ctx->pc = 0x34FDD4u;
    // 0x34fdd4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34fdd8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x34fdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x34fddc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34FDDCu;
    {
        const bool branch_taken_0x34fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fddc) {
            ctx->pc = 0x34FE44u;
            goto label_34fe44;
        }
    }
    ctx->pc = 0x34FDE4u;
label_34fde4:
    // 0x34fde4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fde8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fdec: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x34fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x34fdf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34fdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34fdf4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FDF4u;
    {
        const bool branch_taken_0x34fdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fdf4) {
            ctx->pc = 0x34FE10u;
            goto label_34fe10;
        }
    }
    ctx->pc = 0x34FDFCu;
    // 0x34fdfc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x34fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fe00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34fe08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34FE08u;
    {
        const bool branch_taken_0x34fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe08) {
            ctx->pc = 0x34FE24u;
            goto label_34fe24;
        }
    }
    ctx->pc = 0x34FE10u;
label_34fe10:
    // 0x34fe10: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x34fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fe14: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fe18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fe1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fe20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34fe24:
    // 0x34fe24: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fe28: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34fe2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fe30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x34fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34fe34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34fe38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34fe3c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34fe40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fe44:
    // 0x34fe44: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fe44u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe48: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34fe48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fe4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34fe4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x34FE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FE58u;
}
