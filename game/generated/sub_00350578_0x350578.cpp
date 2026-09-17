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

// Function: sub_00350578
// Address: 0x350578 - 0x350614
void sub_00350578_0x350578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350578_0x350578");
#endif

    switch (ctx->pc) {
        case 0x35058cu: goto label_35058c;
        default: break;
    }

    ctx->pc = 0x350578u;

    // 0x350578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35057c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x350580: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350580u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350584: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350588: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x350588u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_35058c:
    // 0x35058c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350590: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x350590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x350594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350594u;
    {
        const bool branch_taken_0x350594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350594) {
            ctx->pc = 0x3505A4u;
            goto label_3505a4;
        }
    }
    ctx->pc = 0x35059Cu;
    // 0x35059c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35059Cu;
    {
        const bool branch_taken_0x35059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35059c) {
            ctx->pc = 0x350600u;
            goto label_350600;
        }
    }
    ctx->pc = 0x3505A4u;
label_3505a4:
    // 0x3505a4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3505a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3505a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3505a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3505ac: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3505acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3505b0: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x3505b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x3505b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3505b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3505b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3505bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3505bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3505c0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3505C0u;
    {
        const bool branch_taken_0x3505c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3505c0) {
            ctx->pc = 0x3505ECu;
            goto label_3505ec;
        }
    }
    ctx->pc = 0x3505C8u;
    // 0x3505c8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3505cc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3505d0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3505d4: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x3505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x3505d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3505d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3505dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3505dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3505e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3505e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3505e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3505E4u;
    {
        const bool branch_taken_0x3505e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3505e4) {
            ctx->pc = 0x350600u;
            goto label_350600;
        }
    }
    ctx->pc = 0x3505ECu;
label_3505ec:
    // 0x3505ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3505ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3505f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3505f4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3505f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3505f8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x3505F8u;
    {
        const bool branch_taken_0x3505f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3505f8) {
            ctx->pc = 0x35058Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35058c;
        }
    }
    ctx->pc = 0x350600u;
label_350600:
    // 0x350600: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350600u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350604: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x350604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35060c: 0x3e00008  jr          $ra
    ctx->pc = 0x35060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350614u;
}
