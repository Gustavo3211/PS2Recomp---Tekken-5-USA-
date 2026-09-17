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

// Function: sub_00319098
// Address: 0x319098 - 0x319114
void sub_00319098_0x319098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319098_0x319098");
#endif

    switch (ctx->pc) {
        case 0x3190bcu: goto label_3190bc;
        case 0x3190d8u: goto label_3190d8;
        case 0x3190e4u: goto label_3190e4;
        default: break;
    }

    ctx->pc = 0x319098u;

    // 0x319098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31909c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3190a0: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x3190a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x3190a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3190a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3190a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3190a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3190acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190b0: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3190b4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3190B4u;
    SET_GPR_U32(ctx, 31, 0x3190BCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3190B4u, 0x3190BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3190BCu;
label_3190bc:
    // 0x3190bc: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x3190bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x3190c0: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x3190c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3190c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3190c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3190c8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3190c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3190cc: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3190ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3190d0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3190D0u;
    SET_GPR_U32(ctx, 31, 0x3190D8u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3190D0u, 0x3190D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3190D8u;
label_3190d8:
    // 0x3190d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3190d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190dc: 0xc0c665b  jal         func_31996C
    ctx->pc = 0x3190DCu;
    SET_GPR_U32(ctx, 31, 0x3190E4u);
    ctx->pc = 0x31996Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31996Cu, 0x3190DCu, 0x3190E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3190E4u;
label_3190e4:
    // 0x3190e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3190e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3190ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3190ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3190f0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3190f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3190f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3190f8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3190f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3190fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319100: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x319100u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x319104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x319108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31910c: 0x3e00008  jr          $ra
    ctx->pc = 0x31910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319114u;
}
