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

// Function: sub_00353EC0
// Address: 0x353ec0 - 0x353f74
void sub_00353EC0_0x353ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353EC0_0x353ec0");
#endif

    switch (ctx->pc) {
        case 0x353ee0u: goto label_353ee0;
        case 0x353f3cu: goto label_353f3c;
        default: break;
    }

    ctx->pc = 0x353ec0u;

    // 0x353ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353ec4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353ec8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353ecc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353eccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ed0: 0xaf80cbe0  sw          $zero, -0x3420($gp)
    ctx->pc = 0x353ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953952), GPR_U32(ctx, 0));
    // 0x353ed4: 0xaf80cbe8  sw          $zero, -0x3418($gp)
    ctx->pc = 0x353ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953960), GPR_U32(ctx, 0));
    // 0x353ed8: 0xaf80cbf0  sw          $zero, -0x3410($gp)
    ctx->pc = 0x353ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953968), GPR_U32(ctx, 0));
    // 0x353edc: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x353edcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_353ee0:
    // 0x353ee0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353ee4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353EE4u;
    {
        const bool branch_taken_0x353ee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x353ee4) {
            ctx->pc = 0x353EF4u;
            goto label_353ef4;
        }
    }
    ctx->pc = 0x353EECu;
    // 0x353eec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x353EECu;
    {
        const bool branch_taken_0x353eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353eec) {
            ctx->pc = 0x353F30u;
            goto label_353f30;
        }
    }
    ctx->pc = 0x353EF4u;
label_353ef4:
    // 0x353ef4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x353ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353ef8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x353ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353efc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x353efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x353f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x353f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353f04: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x353f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x353f08: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x353f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x353f0c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x353f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x353f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x353f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x353f14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x353f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x353f1c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353f20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353f24: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353f24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353f28: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x353F28u;
    {
        const bool branch_taken_0x353f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f28) {
            ctx->pc = 0x353EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353ee0;
        }
    }
    ctx->pc = 0x353F30u;
label_353f30:
    // 0x353f30: 0xaf80cbf8  sw          $zero, -0x3408($gp)
    ctx->pc = 0x353f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953976), GPR_U32(ctx, 0));
    // 0x353f34: 0xc0d532e  jal         func_354CB8
    ctx->pc = 0x353F34u;
    SET_GPR_U32(ctx, 31, 0x353F3Cu);
    ctx->pc = 0x354CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354CB8u, 0x353F34u, 0x353F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F3Cu;
label_353f3c:
    // 0x353f3c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x353f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x353f40: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353f44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353F44u;
    {
        const bool branch_taken_0x353f44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353f44) {
            ctx->pc = 0x353F58u;
            goto label_353f58;
        }
    }
    ctx->pc = 0x353F4Cu;
    // 0x353f4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353f50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353F50u;
    {
        const bool branch_taken_0x353f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353f50) {
            ctx->pc = 0x353F5Cu;
            goto label_353f5c;
        }
    }
    ctx->pc = 0x353F58u;
label_353f58:
    // 0x353f58: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_353f5c:
    // 0x353f5c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353f5cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f60: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353f60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353f64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353f68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x353F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F74u;
}
