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

// Function: sub_0035352C
// Address: 0x35352c - 0x353608
void sub_0035352C_0x35352c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035352C_0x35352c");
#endif

    switch (ctx->pc) {
        case 0x35355cu: goto label_35355c;
        case 0x353590u: goto label_353590;
        case 0x3535b8u: goto label_3535b8;
        default: break;
    }

    ctx->pc = 0x35352cu;

    // 0x35352c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35352cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x353530: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x353530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x353534: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x353534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x353538: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353538u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35353c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35353cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353540: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353544: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x353548: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x353548u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x35354c: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x35354cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x353550: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x353550u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x353554: 0xc0d5025  jal         func_354094
    ctx->pc = 0x353554u;
    SET_GPR_U32(ctx, 31, 0x35355Cu);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x353554u, 0x35355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35355Cu;
label_35355c:
    // 0x35355c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35355Cu;
    {
        const bool branch_taken_0x35355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35355c) {
            ctx->pc = 0x353574u;
            goto label_353574;
        }
    }
    ctx->pc = 0x353564u;
    // 0x353564: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x353564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353568: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x353568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x35356c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35356Cu;
    {
        const bool branch_taken_0x35356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35356c) {
            ctx->pc = 0x3535F0u;
            goto label_3535f0;
        }
    }
    ctx->pc = 0x353574u;
label_353574:
    // 0x353574: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x353574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x353578: 0x27c30020  addiu       $v1, $fp, 0x20
    ctx->pc = 0x353578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x35357c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x35357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x353580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353584: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x353584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353588: 0xc0d4f63  jal         func_353D8C
    ctx->pc = 0x353588u;
    SET_GPR_U32(ctx, 31, 0x353590u);
    ctx->pc = 0x353D8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353D8Cu, 0x353588u, 0x353590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353590u;
label_353590:
    // 0x353590: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x353590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x353594: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x353598: 0x8fc50020  lw          $a1, 0x20($fp)
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x35359c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x35359cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3535a0: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x3535a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3535a4: 0x8fc8000c  lw          $t0, 0xC($fp)
    ctx->pc = 0x3535a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3535a8: 0x8fc90010  lw          $t1, 0x10($fp)
    ctx->pc = 0x3535a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3535ac: 0x8fca0014  lw          $t2, 0x14($fp)
    ctx->pc = 0x3535acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3535b0: 0xc0d5a6f  jal         func_3569BC
    ctx->pc = 0x3535B0u;
    SET_GPR_U32(ctx, 31, 0x3535B8u);
    ctx->pc = 0x3569BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3569BCu, 0x3535B0u, 0x3535B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535B8u;
label_3535b8:
    // 0x3535b8: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3535b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3535bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3535c0: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x3535c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3535c4: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x3535c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x3535c8: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x3535c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3535cc: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3535ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3535d0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3535d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3535d4: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x3535d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3535d8: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3535dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3535dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3535e0: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3535e4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3535e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3535e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3535e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3535ec: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3535ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3535f0:
    // 0x3535f0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3535f0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535f4: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3535f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3535f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3535f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3535fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353600: 0x3e00008  jr          $ra
    ctx->pc = 0x353600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353608u;
}
