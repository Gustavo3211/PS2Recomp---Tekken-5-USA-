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

// Function: sub_00353414
// Address: 0x353414 - 0x3534b0
void sub_00353414_0x353414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353414_0x353414");
#endif

    switch (ctx->pc) {
        case 0x35342cu: goto label_35342c;
        case 0x353464u: goto label_353464;
        default: break;
    }

    ctx->pc = 0x353414u;

    // 0x353414: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353418: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x35341c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353420: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353420u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353424: 0x0  nop
    ctx->pc = 0x353424u;
    // NOP
    // 0x353428: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x353428u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_35342c:
    // 0x35342c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353430: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x353430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x353434: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353434u;
    {
        const bool branch_taken_0x353434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353434) {
            ctx->pc = 0x353444u;
            goto label_353444;
        }
    }
    ctx->pc = 0x35343Cu;
    // 0x35343c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35343Cu;
    {
        const bool branch_taken_0x35343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35343c) {
            ctx->pc = 0x353494u;
            goto label_353494;
        }
    }
    ctx->pc = 0x353444u;
label_353444:
    // 0x353444: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353448: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x353448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35344c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x35344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x353450: 0x2442bb48  addiu       $v0, $v0, -0x44B8
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x353454: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x353458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35345c: 0xc0d400c  jal         func_350030
    ctx->pc = 0x35345Cu;
    SET_GPR_U32(ctx, 31, 0x353464u);
    ctx->pc = 0x350030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350030u, 0x35345Cu, 0x353464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353464u;
label_353464:
    // 0x353464: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x353464u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x353468: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35346c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35346Cu;
    {
        const bool branch_taken_0x35346c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35346c) {
            ctx->pc = 0x353480u;
            goto label_353480;
        }
    }
    ctx->pc = 0x353474u;
    // 0x353474: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x353478u;
    {
        const bool branch_taken_0x353478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353478) {
            ctx->pc = 0x353498u;
            goto label_353498;
        }
    }
    ctx->pc = 0x353480u;
label_353480:
    // 0x353480: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353488: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x35348c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x35348Cu;
    {
        const bool branch_taken_0x35348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35348c) {
            ctx->pc = 0x35342Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35342c;
        }
    }
    ctx->pc = 0x353494u;
label_353494:
    // 0x353494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353498:
    // 0x353498: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353498u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35349c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35349cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3534a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3534a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3534a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3534a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3534a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3534A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3534A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3534B0u;
}
