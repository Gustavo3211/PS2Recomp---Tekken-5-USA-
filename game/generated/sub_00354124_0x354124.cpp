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

// Function: sub_00354124
// Address: 0x354124 - 0x3541b0
void sub_00354124_0x354124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354124_0x354124");
#endif

    switch (ctx->pc) {
        case 0x354124u: goto label_354124;
        case 0x354128u: goto label_354128;
        case 0x35412cu: goto label_35412c;
        case 0x354130u: goto label_354130;
        case 0x354134u: goto label_354134;
        case 0x354138u: goto label_354138;
        case 0x35413cu: goto label_35413c;
        case 0x354140u: goto label_354140;
        case 0x354144u: goto label_354144;
        case 0x354148u: goto label_354148;
        case 0x35414cu: goto label_35414c;
        case 0x354150u: goto label_354150;
        case 0x354154u: goto label_354154;
        case 0x354158u: goto label_354158;
        case 0x35415cu: goto label_35415c;
        case 0x354160u: goto label_354160;
        case 0x354164u: goto label_354164;
        case 0x354168u: goto label_354168;
        case 0x35416cu: goto label_35416c;
        case 0x354170u: goto label_354170;
        case 0x354174u: goto label_354174;
        case 0x354178u: goto label_354178;
        case 0x35417cu: goto label_35417c;
        case 0x354180u: goto label_354180;
        case 0x354184u: goto label_354184;
        case 0x354188u: goto label_354188;
        case 0x35418cu: goto label_35418c;
        case 0x354190u: goto label_354190;
        case 0x354194u: goto label_354194;
        case 0x354198u: goto label_354198;
        case 0x35419cu: goto label_35419c;
        case 0x3541a0u: goto label_3541a0;
        case 0x3541a4u: goto label_3541a4;
        case 0x3541a8u: goto label_3541a8;
        case 0x3541acu: goto label_3541ac;
        default: break;
    }

    ctx->pc = 0x354124u;

label_354124:
    // 0x354124: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_354128:
    // 0x354128: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x354128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_35412c:
    // 0x35412c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_354130:
    // 0x354130: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354134:
    // 0x354134: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_354138:
    // 0x354138: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_35413c:
    // 0x35413c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_354140:
    if (ctx->pc == 0x354140u) {
        ctx->pc = 0x354144u;
        goto label_354144;
    }
    ctx->pc = 0x35413Cu;
    {
        const bool branch_taken_0x35413c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35413c) {
            ctx->pc = 0x354150u;
            goto label_354150;
        }
    }
    ctx->pc = 0x354144u;
label_354144:
    // 0x354144: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x354144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_354148:
    // 0x354148: 0x10000013  b           . + 4 + (0x13 << 2)
label_35414c:
    if (ctx->pc == 0x35414Cu) {
        ctx->pc = 0x354150u;
        goto label_354150;
    }
    ctx->pc = 0x354148u;
    {
        const bool branch_taken_0x354148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354148) {
            ctx->pc = 0x354198u;
            goto label_354198;
        }
    }
    ctx->pc = 0x354150u;
label_354150:
    // 0x354150: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354154:
    // 0x354154: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_354158:
    // 0x354158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35415c:
    // 0x35415c: 0xc0d521a  jal         func_354868
label_354160:
    if (ctx->pc == 0x354160u) {
        ctx->pc = 0x354164u;
        goto label_354164;
    }
    ctx->pc = 0x35415Cu;
    SET_GPR_U32(ctx, 31, 0x354164u);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x35415Cu, 0x354164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354164u;
label_354164:
    // 0x354164: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x354164u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_354168:
    // 0x354168: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_35416c:
    // 0x35416c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_354170:
    if (ctx->pc == 0x354170u) {
        ctx->pc = 0x354174u;
        goto label_354174;
    }
    ctx->pc = 0x35416Cu;
    {
        const bool branch_taken_0x35416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35416c) {
            ctx->pc = 0x354180u;
            goto label_354180;
        }
    }
    ctx->pc = 0x354174u;
label_354174:
    // 0x354174: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x354174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_354178:
    // 0x354178: 0x10000007  b           . + 4 + (0x7 << 2)
label_35417c:
    if (ctx->pc == 0x35417Cu) {
        ctx->pc = 0x354180u;
        goto label_354180;
    }
    ctx->pc = 0x354178u;
    {
        const bool branch_taken_0x354178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354178) {
            ctx->pc = 0x354198u;
            goto label_354198;
        }
    }
    ctx->pc = 0x354180u;
label_354180:
    // 0x354180: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354184:
    // 0x354184: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x354184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354188:
    // 0x354188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35418c:
    // 0x35418c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x35418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_354190:
    // 0x354190: 0x40f809  jalr        $v0
label_354194:
    if (ctx->pc == 0x354194u) {
        ctx->pc = 0x354198u;
        goto label_354198;
    }
    ctx->pc = 0x354190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354198u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354190u, 0x354198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354198u;
label_354198:
    // 0x354198: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354198u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35419c:
    // 0x35419c: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x35419cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3541a0:
    // 0x3541a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3541a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3541a4:
    // 0x3541a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3541a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3541a8:
    // 0x3541a8: 0x3e00008  jr          $ra
label_3541ac:
    if (ctx->pc == 0x3541ACu) {
        ctx->pc = 0x3541B0u;
        goto label_fallthrough_0x3541a8;
    }
    ctx->pc = 0x3541A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3541A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3541a8:
    ctx->pc = 0x3541B0u;
}
