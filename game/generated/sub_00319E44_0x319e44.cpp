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

// Function: sub_00319E44
// Address: 0x319e44 - 0x319ec0
void sub_00319E44_0x319e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319E44_0x319e44");
#endif

    switch (ctx->pc) {
        case 0x319e68u: goto label_319e68;
        default: break;
    }

    ctx->pc = 0x319e44u;

    // 0x319e44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319e48: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x319e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319e4c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319e4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x319e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e54: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x319e54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x319e58: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x319e58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x319e5c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319e60: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x319e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x319e64: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x319e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_319e68:
    // 0x319e68: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x319e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319e6c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319E6Cu;
    {
        const bool branch_taken_0x319e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x319e6c) {
            ctx->pc = 0x319E7Cu;
            goto label_319e7c;
        }
    }
    ctx->pc = 0x319E74u;
    // 0x319e74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x319E74u;
    {
        const bool branch_taken_0x319e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319e74) {
            ctx->pc = 0x319EA8u;
            goto label_319ea8;
        }
    }
    ctx->pc = 0x319E7Cu;
label_319e7c:
    // 0x319e7c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319e80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x319e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e84: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x319e84u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319e88: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x319e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x319e8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x319e90: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x319e90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x319e94: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x319e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319e9c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x319e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x319ea0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x319EA0u;
    {
        const bool branch_taken_0x319ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ea0) {
            ctx->pc = 0x319E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319e68;
        }
    }
    ctx->pc = 0x319EA8u;
label_319ea8:
    // 0x319ea8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319ea8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319eac: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319eacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319eb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x319eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x319EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319EBCu;
    // 0x319ebc: 0x0  nop
    ctx->pc = 0x319ebcu;
    // NOP
    ctx->pc = 0x319ec0u;
}
