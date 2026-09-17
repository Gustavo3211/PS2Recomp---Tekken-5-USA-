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

// Function: sub_003740A8
// Address: 0x3740a8 - 0x37414c
void sub_003740A8_0x3740a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003740A8_0x3740a8");
#endif

    ctx->pc = 0x3740a8u;

    // 0x3740a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3740a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3740ac: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3740acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3740b0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3740b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740b4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3740b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3740b8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3740b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3740bc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3740c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3740c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3740c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3740C4u;
    {
        const bool branch_taken_0x3740c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3740c4) {
            ctx->pc = 0x3740ECu;
            goto label_3740ec;
        }
    }
    ctx->pc = 0x3740CCu;
    // 0x3740cc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3740ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3740d0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3740d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3740d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3740d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3740d8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3740d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3740dc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3740dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3740e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3740e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3740e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3740E4u;
    {
        const bool branch_taken_0x3740e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3740e4) {
            ctx->pc = 0x37410Cu;
            goto label_37410c;
        }
    }
    ctx->pc = 0x3740ECu;
label_3740ec:
    // 0x3740ec: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3740f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3740f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3740f4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3740f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3740f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3740fc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3740fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x374100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374104: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x374104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x374108: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x374108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37410c:
    // 0x37410c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374110: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x374110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x374114: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x374114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x374118: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x374118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x37411c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x37411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374120: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x374120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x374124: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x374124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374128: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x374128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37412c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x374130: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x374130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374134: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x374134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x374138: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374138u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37413c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x37413cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374140: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374144: 0x3e00008  jr          $ra
    ctx->pc = 0x374144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37414Cu;
}
