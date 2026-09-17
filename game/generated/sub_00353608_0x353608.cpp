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

// Function: sub_00353608
// Address: 0x353608 - 0x353680
void sub_00353608_0x353608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353608_0x353608");
#endif

    switch (ctx->pc) {
        case 0x353624u: goto label_353624;
        case 0x353660u: goto label_353660;
        default: break;
    }

    ctx->pc = 0x353608u;

    // 0x353608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35360c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353610: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353614: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353614u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353618: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353618u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35361c: 0xc0d5025  jal         func_354094
    ctx->pc = 0x35361Cu;
    SET_GPR_U32(ctx, 31, 0x353624u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x35361Cu, 0x353624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353624u;
label_353624:
    // 0x353624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353624u;
    {
        const bool branch_taken_0x353624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353624) {
            ctx->pc = 0x35363Cu;
            goto label_35363c;
        }
    }
    ctx->pc = 0x35362Cu;
    // 0x35362c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353630: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x353634: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x353634u;
    {
        const bool branch_taken_0x353634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353634) {
            ctx->pc = 0x353668u;
            goto label_353668;
        }
    }
    ctx->pc = 0x35363Cu;
label_35363c:
    // 0x35363c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353640: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x353644: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353644u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x353648: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x353648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35364c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x353650: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x353654: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x353654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353658: 0xc0d5c28  jal         func_3570A0
    ctx->pc = 0x353658u;
    SET_GPR_U32(ctx, 31, 0x353660u);
    ctx->pc = 0x3570A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570A0u, 0x353658u, 0x353660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353660u;
label_353660:
    // 0x353660: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353660u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x353664: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353668:
    // 0x353668: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353668u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35366c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35366cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353670: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353678: 0x3e00008  jr          $ra
    ctx->pc = 0x353678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353680u;
}
