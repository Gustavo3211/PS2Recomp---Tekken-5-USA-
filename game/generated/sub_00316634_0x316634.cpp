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

// Function: sub_00316634
// Address: 0x316634 - 0x3166d4
void sub_00316634_0x316634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316634_0x316634");
#endif

    switch (ctx->pc) {
        case 0x31666cu: goto label_31666c;
        case 0x3166a8u: goto label_3166a8;
        default: break;
    }

    ctx->pc = 0x316634u;

    // 0x316634: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x316638: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x316638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x31663c: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x31663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x316640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x316640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x316644: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316644u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316648: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x31664c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x31664cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x316650: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x316650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x316654: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x316654u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x316658: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x316658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x31665c: 0x240444d0  addiu       $a0, $zero, 0x44D0
    ctx->pc = 0x31665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17616));
    // 0x316660: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x316660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316664: 0xc04c2f4  jal         func_130BD0
    ctx->pc = 0x316664u;
    SET_GPR_U32(ctx, 31, 0x31666Cu);
    ctx->pc = 0x130BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130BD0u, 0x316664u, 0x31666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31666Cu;
label_31666c:
    // 0x31666c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x31666cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x316670: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316674: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x316674u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x316678: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x31667c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31667Cu;
    {
        const bool branch_taken_0x31667c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31667c) {
            ctx->pc = 0x3166ACu;
            goto label_3166ac;
        }
    }
    ctx->pc = 0x316684u;
    // 0x316684: 0x8fd00018  lw          $s0, 0x18($fp)
    ctx->pc = 0x316684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31668c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x31668cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316690: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x316690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316694: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316698: 0x8fc8000c  lw          $t0, 0xC($fp)
    ctx->pc = 0x316698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x31669c: 0x8fc90010  lw          $t1, 0x10($fp)
    ctx->pc = 0x31669cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3166a0: 0xc0c5b87  jal         func_316E1C
    ctx->pc = 0x3166A0u;
    SET_GPR_U32(ctx, 31, 0x3166A8u);
    ctx->pc = 0x316E1Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316E1Cu, 0x3166A0u, 0x3166A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166A8u;
label_3166a8:
    // 0x3166a8: 0xafd00014  sw          $s0, 0x14($fp)
    ctx->pc = 0x3166a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 16));
label_3166ac:
    // 0x3166ac: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3166acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3166b0: 0xaf82cbbc  sw          $v0, -0x3444($gp)
    ctx->pc = 0x3166b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953916), GPR_U32(ctx, 2));
    // 0x3166b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3166b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3166b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3166bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3166c0: 0xdfbe0028  ld          $fp, 0x28($sp)
    ctx->pc = 0x3166c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3166c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3166c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3166c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3166c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3166cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3166CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3166CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3166D4u;
}
