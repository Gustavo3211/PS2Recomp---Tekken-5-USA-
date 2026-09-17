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

// Function: sub_00354C38
// Address: 0x354c38 - 0x354cb8
void sub_00354C38_0x354c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C38_0x354c38");
#endif

    switch (ctx->pc) {
        case 0x354c58u: goto label_354c58;
        default: break;
    }

    ctx->pc = 0x354c38u;

    // 0x354c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354c3c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354c40: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354c40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x354c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c48: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x354c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c4c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x354c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x354c50: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x354c50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x354c54: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x354c54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_354c58:
    // 0x354c58: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354c5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354C5Cu;
    {
        const bool branch_taken_0x354c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354c5c) {
            ctx->pc = 0x354C6Cu;
            goto label_354c6c;
        }
    }
    ctx->pc = 0x354C64u;
    // 0x354c64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x354C64u;
    {
        const bool branch_taken_0x354c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c64) {
            ctx->pc = 0x354CA4u;
            goto label_354ca4;
        }
    }
    ctx->pc = 0x354C6Cu;
label_354c6c:
    // 0x354c6c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354c70: 0x27c50004  addiu       $a1, $fp, 0x4
    ctx->pc = 0x354c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x354c74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x354c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x354c78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x354c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354c7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x354c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x354c80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x354c84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x354c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x354c88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x354c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x354c8c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354c90: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354c94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x354c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354c98: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x354c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x354c9c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x354C9Cu;
    {
        const bool branch_taken_0x354c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c9c) {
            ctx->pc = 0x354C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354c58;
        }
    }
    ctx->pc = 0x354CA4u;
label_354ca4:
    // 0x354ca4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354ca4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ca8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354ca8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354cac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x354CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354CB8u;
}
