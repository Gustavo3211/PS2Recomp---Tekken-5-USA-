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

// Function: sub_0034B8C8
// Address: 0x34b8c8 - 0x34b970
void sub_0034B8C8_0x34b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B8C8_0x34b8c8");
#endif

    switch (ctx->pc) {
        case 0x34b8f4u: goto label_34b8f4;
        case 0x34b908u: goto label_34b908;
        case 0x34b910u: goto label_34b910;
        case 0x34b944u: goto label_34b944;
        default: break;
    }

    ctx->pc = 0x34b8c8u;

    // 0x34b8c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34b8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34b8cc: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34b8d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34b8d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b8d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b8d8: 0xafc40010  sw          $a0, 0x10($fp)
    ctx->pc = 0x34b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 4));
    // 0x34b8dc: 0xafc50014  sw          $a1, 0x14($fp)
    ctx->pc = 0x34b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 5));
    // 0x34b8e0: 0xafc60018  sw          $a2, 0x18($fp)
    ctx->pc = 0x34b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 6));
    // 0x34b8e4: 0xafc7001c  sw          $a3, 0x1C($fp)
    ctx->pc = 0x34b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 7));
    // 0x34b8e8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34b8ec: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x34b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x34b8f0: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_34b8f4:
    // 0x34b8f4: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34b8f8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x34b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x34b8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b900: 0xc044cac  jal         func_1132B0
    ctx->pc = 0x34B900u;
    SET_GPR_U32(ctx, 31, 0x34B908u);
    ctx->pc = 0x1132B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1132B0u, 0x34B900u, 0x34B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B908u;
label_34b908:
    // 0x34b908: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34B908u;
    {
        const bool branch_taken_0x34b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b908) {
            ctx->pc = 0x34B8F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b8f4;
        }
    }
    ctx->pc = 0x34B910u;
label_34b910:
    // 0x34b910: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34b914: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x34b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x34b918: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x34b918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x34b91c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b920: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x34b920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34b924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b928: 0x8fc70014  lw          $a3, 0x14($fp)
    ctx->pc = 0x34b928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34b92c: 0x8fc80018  lw          $t0, 0x18($fp)
    ctx->pc = 0x34b92cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34b930: 0x8fc90014  lw          $t1, 0x14($fp)
    ctx->pc = 0x34b930u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34b934: 0x8fca001c  lw          $t2, 0x1C($fp)
    ctx->pc = 0x34b934u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34b938: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34b938u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b93c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x34B93Cu;
    SET_GPR_U32(ctx, 31, 0x34B944u);
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x34B93Cu, 0x34B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B944u;
label_34b944:
    // 0x34b944: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34b944u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34b948: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34b94c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x34B94Cu;
    {
        const bool branch_taken_0x34b94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b94c) {
            ctx->pc = 0x34B910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b910;
        }
    }
    ctx->pc = 0x34B954u;
    // 0x34b954: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34b958: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34b958u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b95c: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34b95cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b960: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34b960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b964: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34b964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34b968: 0x3e00008  jr          $ra
    ctx->pc = 0x34B968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B970u;
}
