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

// Function: sub_00316B48
// Address: 0x316b48 - 0x316be8
void sub_00316B48_0x316b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316B48_0x316b48");
#endif

    switch (ctx->pc) {
        case 0x316b7cu: goto label_316b7c;
        case 0x316bd0u: goto label_316bd0;
        default: break;
    }

    ctx->pc = 0x316b48u;

    // 0x316b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316b4c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316b54: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316b54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b58: 0x8f82cbbc  lw          $v0, -0x3444($gp)
    ctx->pc = 0x316b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x316B5Cu;
    {
        const bool branch_taken_0x316b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316b5c) {
            ctx->pc = 0x316B70u;
            goto label_316b70;
        }
    }
    ctx->pc = 0x316B64u;
    // 0x316b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x316B68u;
    {
        const bool branch_taken_0x316b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316b68) {
            ctx->pc = 0x316B7Cu;
            goto label_316b7c;
        }
    }
    ctx->pc = 0x316B70u;
label_316b70:
    // 0x316b70: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316b74: 0xc0c6526  jal         func_319498
    ctx->pc = 0x316B74u;
    SET_GPR_U32(ctx, 31, 0x316B7Cu);
    ctx->pc = 0x319498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319498u, 0x316B74u, 0x316B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B7Cu;
label_316b7c:
    // 0x316b7c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316b7cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b80: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316b80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316b88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x316B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B94u;
    // 0x316b94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316b98: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x316b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316b9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x316ba0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316ba0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ba4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316ba8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x316ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x316bac: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x316bacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x316bb0: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x316bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x316bb4: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316bb8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x316bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316bbc: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x316bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316bc0: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x316bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316bc4: 0x8fc8000c  lw          $t0, 0xC($fp)
    ctx->pc = 0x316bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316bc8: 0xc0c6530  jal         func_3194C0
    ctx->pc = 0x316BC8u;
    SET_GPR_U32(ctx, 31, 0x316BD0u);
    ctx->pc = 0x3194C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194C0u, 0x316BC8u, 0x316BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BD0u;
label_316bd0:
    // 0x316bd0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316bd0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bd4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316bd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316bd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316bdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316be0: 0x3e00008  jr          $ra
    ctx->pc = 0x316BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316BE8u;
}
