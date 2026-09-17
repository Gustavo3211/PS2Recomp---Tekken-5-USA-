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

// Function: sub_003520E0
// Address: 0x3520e0 - 0x3521cc
void sub_003520E0_0x3520e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003520E0_0x3520e0");
#endif

    switch (ctx->pc) {
        case 0x3520e0u: goto label_3520e0;
        case 0x3520e4u: goto label_3520e4;
        case 0x3520e8u: goto label_3520e8;
        case 0x3520ecu: goto label_3520ec;
        case 0x3520f0u: goto label_3520f0;
        case 0x3520f4u: goto label_3520f4;
        case 0x3520f8u: goto label_3520f8;
        case 0x3520fcu: goto label_3520fc;
        case 0x352100u: goto label_352100;
        case 0x352104u: goto label_352104;
        case 0x352108u: goto label_352108;
        case 0x35210cu: goto label_35210c;
        case 0x352110u: goto label_352110;
        case 0x352114u: goto label_352114;
        case 0x352118u: goto label_352118;
        case 0x35211cu: goto label_35211c;
        case 0x352120u: goto label_352120;
        case 0x352124u: goto label_352124;
        case 0x352128u: goto label_352128;
        case 0x35212cu: goto label_35212c;
        case 0x352130u: goto label_352130;
        case 0x352134u: goto label_352134;
        case 0x352138u: goto label_352138;
        case 0x35213cu: goto label_35213c;
        case 0x352140u: goto label_352140;
        case 0x352144u: goto label_352144;
        case 0x352148u: goto label_352148;
        case 0x35214cu: goto label_35214c;
        case 0x352150u: goto label_352150;
        case 0x352154u: goto label_352154;
        case 0x352158u: goto label_352158;
        case 0x35215cu: goto label_35215c;
        case 0x352160u: goto label_352160;
        case 0x352164u: goto label_352164;
        case 0x352168u: goto label_352168;
        case 0x35216cu: goto label_35216c;
        case 0x352170u: goto label_352170;
        case 0x352174u: goto label_352174;
        case 0x352178u: goto label_352178;
        case 0x35217cu: goto label_35217c;
        case 0x352180u: goto label_352180;
        case 0x352184u: goto label_352184;
        case 0x352188u: goto label_352188;
        case 0x35218cu: goto label_35218c;
        case 0x352190u: goto label_352190;
        case 0x352194u: goto label_352194;
        case 0x352198u: goto label_352198;
        case 0x35219cu: goto label_35219c;
        case 0x3521a0u: goto label_3521a0;
        case 0x3521a4u: goto label_3521a4;
        case 0x3521a8u: goto label_3521a8;
        case 0x3521acu: goto label_3521ac;
        case 0x3521b0u: goto label_3521b0;
        case 0x3521b4u: goto label_3521b4;
        case 0x3521b8u: goto label_3521b8;
        case 0x3521bcu: goto label_3521bc;
        case 0x3521c0u: goto label_3521c0;
        case 0x3521c4u: goto label_3521c4;
        case 0x3521c8u: goto label_3521c8;
        default: break;
    }

    ctx->pc = 0x3520e0u;

label_3520e0:
    // 0x3520e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3520e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3520e4:
    // 0x3520e4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3520e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3520e8:
    // 0x3520e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3520e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3520ec:
    // 0x3520ec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3520ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3520f0:
    // 0x3520f0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3520f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3520f4:
    // 0x3520f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3520f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3520f8:
    // 0x3520f8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3520f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3520fc:
    // 0x3520fc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3520fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352100:
    // 0x352100: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352104:
    // 0x352104: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352108:
    // 0x352108: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x352108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35210c:
    // 0x35210c: 0x8fc80008  lw          $t0, 0x8($fp)
    ctx->pc = 0x35210cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352110:
    // 0x352110: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352114:
    // 0x352114: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x352114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352118:
    // 0x352118: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_35211c:
    // 0x35211c: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x35211cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_352120:
    // 0x352120: 0x8d080024  lw          $t0, 0x24($t0)
    ctx->pc = 0x352120u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_352124:
    // 0x352124: 0xc0d2f8e  jal         func_34BE38
label_352128:
    if (ctx->pc == 0x352128u) {
        ctx->pc = 0x35212Cu;
        goto label_35212c;
    }
    ctx->pc = 0x352124u;
    SET_GPR_U32(ctx, 31, 0x35212Cu);
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x352124u, 0x35212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35212Cu;
label_35212c:
    // 0x35212c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35212cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352130:
    // 0x352130: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352134:
    // 0x352134: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_352138:
    if (ctx->pc == 0x352138u) {
        ctx->pc = 0x35213Cu;
        goto label_35213c;
    }
    ctx->pc = 0x352134u;
    {
        const bool branch_taken_0x352134 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x352134) {
            ctx->pc = 0x352150u;
            goto label_352150;
        }
    }
    ctx->pc = 0x35213Cu;
label_35213c:
    // 0x35213c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352140:
    // 0x352140: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x352140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352144:
    // 0x352144: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x352144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352148:
    // 0x352148: 0xc0d412f  jal         func_3504BC
label_35214c:
    if (ctx->pc == 0x35214Cu) {
        ctx->pc = 0x352150u;
        goto label_352150;
    }
    ctx->pc = 0x352148u;
    SET_GPR_U32(ctx, 31, 0x352150u);
    ctx->pc = 0x3504BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3504BCu, 0x352148u, 0x352150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352150u;
label_352150:
    // 0x352150: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352154:
    // 0x352154: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x352154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_352158:
    // 0x352158: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_35215c:
    if (ctx->pc == 0x35215Cu) {
        ctx->pc = 0x352160u;
        goto label_352160;
    }
    ctx->pc = 0x352158u;
    {
        const bool branch_taken_0x352158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352158) {
            ctx->pc = 0x3521B0u;
            goto label_3521b0;
        }
    }
    ctx->pc = 0x352160u;
label_352160:
    // 0x352160: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352164:
    // 0x352164: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352168:
    // 0x352168: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35216c:
    // 0x35216c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x35216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_352170:
    // 0x352170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352174:
    // 0x352174: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352178:
    // 0x352178: 0x8cc6002c  lw          $a2, 0x2C($a2)
    ctx->pc = 0x352178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_35217c:
    // 0x35217c: 0x40f809  jalr        $v0
label_352180:
    if (ctx->pc == 0x352180u) {
        ctx->pc = 0x352184u;
        goto label_352184;
    }
    ctx->pc = 0x35217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35217Cu, 0x352184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352184u;
label_352184:
    // 0x352184: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352184u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352188:
    // 0x352188: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35218c:
    // 0x35218c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352190:
    if (ctx->pc == 0x352190u) {
        ctx->pc = 0x352194u;
        goto label_352194;
    }
    ctx->pc = 0x35218Cu;
    {
        const bool branch_taken_0x35218c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35218c) {
            ctx->pc = 0x3521B0u;
            goto label_3521b0;
        }
    }
    ctx->pc = 0x352194u;
label_352194:
    // 0x352194: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352198:
    // 0x352198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35219c:
    // 0x35219c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3521a0:
    if (ctx->pc == 0x3521A0u) {
        ctx->pc = 0x3521A4u;
        goto label_3521a4;
    }
    ctx->pc = 0x35219Cu;
    {
        const bool branch_taken_0x35219c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35219c) {
            ctx->pc = 0x3521B0u;
            goto label_3521b0;
        }
    }
    ctx->pc = 0x3521A4u;
label_3521a4:
    // 0x3521a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3521a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3521a8:
    // 0x3521a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3521ac:
    if (ctx->pc == 0x3521ACu) {
        ctx->pc = 0x3521B0u;
        goto label_3521b0;
    }
    ctx->pc = 0x3521A8u;
    {
        const bool branch_taken_0x3521a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3521a8) {
            ctx->pc = 0x3521B4u;
            goto label_3521b4;
        }
    }
    ctx->pc = 0x3521B0u;
label_3521b0:
    // 0x3521b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3521b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3521b4:
    // 0x3521b4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3521b4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3521b8:
    // 0x3521b8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3521b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3521bc:
    // 0x3521bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3521bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3521c0:
    // 0x3521c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3521c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3521c4:
    // 0x3521c4: 0x3e00008  jr          $ra
label_3521c8:
    if (ctx->pc == 0x3521C8u) {
        ctx->pc = 0x3521CCu;
        goto label_fallthrough_0x3521c4;
    }
    ctx->pc = 0x3521C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3521C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3521c4:
    ctx->pc = 0x3521CCu;
}
