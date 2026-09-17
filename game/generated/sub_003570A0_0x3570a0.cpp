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

// Function: sub_003570A0
// Address: 0x3570a0 - 0x357210
void sub_003570A0_0x3570a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003570A0_0x3570a0");
#endif

    switch (ctx->pc) {
        case 0x3570c0u: goto label_3570c0;
        case 0x3570ccu: goto label_3570cc;
        case 0x3570e0u: goto label_3570e0;
        case 0x357130u: goto label_357130;
        case 0x3571f4u: goto label_3571f4;
        default: break;
    }

    ctx->pc = 0x3570a0u;

    // 0x3570a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3570a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3570a4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x3570a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x3570a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3570a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3570ac: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3570acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570b0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3570b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3570b4: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3570b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3570b8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3570B8u;
    SET_GPR_U32(ctx, 31, 0x3570C0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3570B8u, 0x3570C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570C0u;
label_3570c0:
    // 0x3570c0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3570c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3570c4: 0xc043568  jal         func_10D5A0
    ctx->pc = 0x3570C4u;
    SET_GPR_U32(ctx, 31, 0x3570CCu);
    ctx->pc = 0x10D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D5A0u, 0x3570C4u, 0x3570CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570CCu;
label_3570cc:
    // 0x3570cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3570CCu;
    {
        const bool branch_taken_0x3570cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570cc) {
            ctx->pc = 0x3570DCu;
            goto label_3570dc;
        }
    }
    ctx->pc = 0x3570D4u;
    // 0x3570d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3570D4u;
    {
        const bool branch_taken_0x3570d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3570d4) {
            ctx->pc = 0x357114u;
            goto label_357114;
        }
    }
    ctx->pc = 0x3570DCu;
label_3570dc:
    // 0x3570dc: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x3570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_3570e0:
    // 0x3570e0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3570e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3570e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3570e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3570e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3570ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3570ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3570f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3570F0u;
    {
        const bool branch_taken_0x3570f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3570f0) {
            ctx->pc = 0x357100u;
            goto label_357100;
        }
    }
    ctx->pc = 0x3570F8u;
    // 0x3570f8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3570F8u;
    {
        const bool branch_taken_0x3570f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3570f8) {
            ctx->pc = 0x3570C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3570c0;
        }
    }
    ctx->pc = 0x357100u;
label_357100:
    // 0x357100: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x357100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x357104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357108: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x357108u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x35710c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x35710Cu;
    {
        const bool branch_taken_0x35710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35710c) {
            ctx->pc = 0x3570E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3570e0;
        }
    }
    ctx->pc = 0x357114u;
label_357114:
    // 0x357114: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x357114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x357118: 0x27c3000c  addiu       $v1, $fp, 0xC
    ctx->pc = 0x357118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x35711c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357124: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x357124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357128: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x357128u;
    SET_GPR_U32(ctx, 31, 0x357130u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x357128u, 0x357130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357130u;
label_357130:
    // 0x357130: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x357130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x357134: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x357134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x357138: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x357138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x35713c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x35713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357140: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x357140u;
    {
        const bool branch_taken_0x357140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357140) {
            ctx->pc = 0x3571B4u;
            goto label_3571b4;
        }
    }
    ctx->pc = 0x357148u;
    // 0x357148: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x357148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35714c: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x35714cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x357150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357150u;
    {
        const bool branch_taken_0x357150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357150) {
            ctx->pc = 0x357170u;
            goto label_357170;
        }
    }
    ctx->pc = 0x357158u;
    // 0x357158: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35715c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x35715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357160: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x357160u;
    {
        const bool branch_taken_0x357160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357160) {
            ctx->pc = 0x3571C8u;
            goto label_3571c8;
        }
    }
    ctx->pc = 0x357168u;
    // 0x357168: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x357168u;
    {
        const bool branch_taken_0x357168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357168) {
            ctx->pc = 0x3571DCu;
            goto label_3571dc;
        }
    }
    ctx->pc = 0x357170u;
label_357170:
    // 0x357170: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x357170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x357174: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x357174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357178: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x357178u;
    {
        const bool branch_taken_0x357178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357178) {
            ctx->pc = 0x3571A0u;
            goto label_3571a0;
        }
    }
    ctx->pc = 0x357180u;
    // 0x357180: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357184u;
    {
        const bool branch_taken_0x357184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357184) {
            ctx->pc = 0x357194u;
            goto label_357194;
        }
    }
    ctx->pc = 0x35718Cu;
    // 0x35718c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35718Cu;
    {
        const bool branch_taken_0x35718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35718c) {
            ctx->pc = 0x3571DCu;
            goto label_3571dc;
        }
    }
    ctx->pc = 0x357194u;
label_357194:
    // 0x357194: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x357194u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x357198: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x357198u;
    {
        const bool branch_taken_0x357198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357198) {
            ctx->pc = 0x3571E8u;
            goto label_3571e8;
        }
    }
    ctx->pc = 0x3571A0u;
label_3571a0:
    // 0x3571a0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3571a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3571a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3571a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3571a8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3571a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3571ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3571ACu;
    {
        const bool branch_taken_0x3571ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571ac) {
            ctx->pc = 0x3571E8u;
            goto label_3571e8;
        }
    }
    ctx->pc = 0x3571B4u;
label_3571b4:
    // 0x3571b4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3571b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3571b8: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x3571b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x3571bc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3571bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3571c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3571C0u;
    {
        const bool branch_taken_0x3571c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571c0) {
            ctx->pc = 0x3571E8u;
            goto label_3571e8;
        }
    }
    ctx->pc = 0x3571C8u;
label_3571c8:
    // 0x3571c8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3571c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3571cc: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3571ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3571d0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3571d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3571d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3571D4u;
    {
        const bool branch_taken_0x3571d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3571d4) {
            ctx->pc = 0x3571E8u;
            goto label_3571e8;
        }
    }
    ctx->pc = 0x3571DCu;
label_3571dc:
    // 0x3571dc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3571dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3571e0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3571e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3571e4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3571e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3571e8:
    // 0x3571e8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3571e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3571ec: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3571ECu;
    SET_GPR_U32(ctx, 31, 0x3571F4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3571ECu, 0x3571F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571F4u;
label_3571f4:
    // 0x3571f4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3571f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3571f8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3571f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571fc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3571fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357200: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x357200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357204: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357208: 0x3e00008  jr          $ra
    ctx->pc = 0x357208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357210u;
}
