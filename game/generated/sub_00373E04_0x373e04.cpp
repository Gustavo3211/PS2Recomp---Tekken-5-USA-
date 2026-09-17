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

// Function: sub_00373E04
// Address: 0x373e04 - 0x373ec0
void sub_00373E04_0x373e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373E04_0x373e04");
#endif

    switch (ctx->pc) {
        case 0x373ea8u: goto label_373ea8;
        default: break;
    }

    ctx->pc = 0x373e04u;

    // 0x373e04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373e08: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x373e0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x373e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x373e10: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373e10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e14: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x373e14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x373e18: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x373e18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x373e1c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373e20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x373e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x373e24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373E24u;
    {
        const bool branch_taken_0x373e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373e24) {
            ctx->pc = 0x373E34u;
            goto label_373e34;
        }
    }
    ctx->pc = 0x373E2Cu;
    // 0x373e2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x373E2Cu;
    {
        const bool branch_taken_0x373e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373e2c) {
            ctx->pc = 0x373EA8u;
            goto label_373ea8;
        }
    }
    ctx->pc = 0x373E34u;
label_373e34:
    // 0x373e34: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x373e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373e3c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373e40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x373e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x373e44: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x373e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x373e48: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373e50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x373e54: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x373e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373e5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x373e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x373e60: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373e68: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x373e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x373e70: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x373e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373e78: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e7c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x373e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x373e80: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x373e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373e88: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373e8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x373e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x373e90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373e94: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373e98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x373e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x373e9c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373ea0: 0xc0dcf08  jal         func_373C20
    ctx->pc = 0x373EA0u;
    SET_GPR_U32(ctx, 31, 0x373EA8u);
    ctx->pc = 0x373C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373C20u, 0x373EA0u, 0x373EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EA8u;
label_373ea8:
    // 0x373ea8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373ea8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373eac: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373eacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373eb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x373eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373eb4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x373EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373EC0u;
}
