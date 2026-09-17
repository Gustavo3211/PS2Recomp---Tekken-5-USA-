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

// Function: sub_003195EC
// Address: 0x3195ec - 0x319774
void sub_003195EC_0x3195ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003195EC_0x3195ec");
#endif

    switch (ctx->pc) {
        case 0x319648u: goto label_319648;
        case 0x319690u: goto label_319690;
        case 0x3196d0u: goto label_3196d0;
        case 0x3196fcu: goto label_3196fc;
        case 0x31971cu: goto label_31971c;
        case 0x319758u: goto label_319758;
        default: break;
    }

    ctx->pc = 0x3195ecu;

    // 0x3195ec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3195ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3195f0: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3195f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x3195f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3195f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3195f8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3195f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195fc: 0xafc40028  sw          $a0, 0x28($fp)
    ctx->pc = 0x3195fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 4));
    // 0x319600: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x319600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x319604: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x319604u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x319608: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x319608u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x31960c: 0xafc8000c  sw          $t0, 0xC($fp)
    ctx->pc = 0x31960cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 8));
    // 0x319610: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319614: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x319614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319618: 0xac6243c4  sw          $v0, 0x43C4($v1)
    ctx->pc = 0x319618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17348), GPR_U32(ctx, 2));
    // 0x31961c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x31961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319620: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x319620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319624: 0xac8243c8  sw          $v0, 0x43C8($a0)
    ctx->pc = 0x319624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17352), GPR_U32(ctx, 2));
    // 0x319628: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x319628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x31962c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319630: 0xac6243cc  sw          $v0, 0x43CC($v1)
    ctx->pc = 0x319630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17356), GPR_U32(ctx, 2));
    // 0x319634: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x319634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319638: 0x248243d8  addiu       $v0, $a0, 0x43D8
    ctx->pc = 0x319638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x31963c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319640: 0xc0dce85  jal         func_373A14
    ctx->pc = 0x319640u;
    SET_GPR_U32(ctx, 31, 0x319648u);
    ctx->pc = 0x373A14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A14u, 0x319640u, 0x319648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319648u;
label_319648:
    // 0x319648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31964c: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x31964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319650: 0xac6243d0  sw          $v0, 0x43D0($v1)
    ctx->pc = 0x319650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17360), GPR_U32(ctx, 2));
    // 0x319654: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x319654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319658: 0xac8044bc  sw          $zero, 0x44BC($a0)
    ctx->pc = 0x319658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17596), GPR_U32(ctx, 0));
    // 0x31965c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x31965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319660: 0xac4044c0  sw          $zero, 0x44C0($v0)
    ctx->pc = 0x319660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17600), GPR_U32(ctx, 0));
    // 0x319664: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x319664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319668: 0xac6044c4  sw          $zero, 0x44C4($v1)
    ctx->pc = 0x319668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17604), GPR_U32(ctx, 0));
    // 0x31966c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319670: 0xac8044c8  sw          $zero, 0x44C8($a0)
    ctx->pc = 0x319670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17608), GPR_U32(ctx, 0));
    // 0x319674: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319678: 0xac4044cc  sw          $zero, 0x44CC($v0)
    ctx->pc = 0x319678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17612), GPR_U32(ctx, 0));
    // 0x31967c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x31967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x319680: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319688: 0xc0d67c6  jal         func_359F18
    ctx->pc = 0x319688u;
    SET_GPR_U32(ctx, 31, 0x319690u);
    ctx->pc = 0x359F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359F18u, 0x319688u, 0x319690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319690u;
label_319690:
    // 0x319690: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x319690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x319694: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x319694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x319698: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x319698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x31969c: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x31969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x3196a0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3196a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3196a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3196a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3196a8: 0x1812  mflo        $v1
    ctx->pc = 0x3196a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3196ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3196ACu;
    {
        const bool branch_taken_0x3196ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3196ac) {
            ctx->pc = 0x3196B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3196ACu;
            // 0x3196b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196B4u;
            goto label_3196b4;
        }
    }
    ctx->pc = 0x3196B4u;
label_3196b4:
    // 0x3196b4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x3196b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x3196b8: 0xac4343d4  sw          $v1, 0x43D4($v0)
    ctx->pc = 0x3196b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17364), GPR_U32(ctx, 3));
    // 0x3196bc: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3196bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x3196c0: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x3196c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x3196c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3196c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196c8: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x3196C8u;
    SET_GPR_U32(ctx, 31, 0x3196D0u);
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x3196C8u, 0x3196D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196D0u;
label_3196d0:
    // 0x3196d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3196d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196d4: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3196d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x3196d8: 0x8c8243d4  lw          $v0, 0x43D4($a0)
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17364)));
    // 0x3196dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3196dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3196e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3196E0u;
    {
        const bool branch_taken_0x3196e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3196e0) {
            ctx->pc = 0x319704u;
            goto label_319704;
        }
    }
    ctx->pc = 0x3196E8u;
    // 0x3196e8: 0x8fc30028  lw          $v1, 0x28($fp)
    ctx->pc = 0x3196e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x3196ec: 0x246243d8  addiu       $v0, $v1, 0x43D8
    ctx->pc = 0x3196ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17368));
    // 0x3196f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3196f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196f4: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x3196F4u;
    SET_GPR_U32(ctx, 31, 0x3196FCu);
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x3196F4u, 0x3196FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196FCu;
label_3196fc:
    // 0x3196fc: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319700: 0xac8243d4  sw          $v0, 0x43D4($a0)
    ctx->pc = 0x319700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17364), GPR_U32(ctx, 2));
label_319704:
    // 0x319704: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x319704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31970c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x31970cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319710: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x319710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319714: 0xc0d69e2  jal         func_35A788
    ctx->pc = 0x319714u;
    SET_GPR_U32(ctx, 31, 0x31971Cu);
    ctx->pc = 0x35A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A788u, 0x319714u, 0x31971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31971Cu;
label_31971c:
    // 0x31971c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x31971cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x319720: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x319720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x319724: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319724u;
    {
        const bool branch_taken_0x319724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319724) {
            ctx->pc = 0x319738u;
            goto label_319738;
        }
    }
    ctx->pc = 0x31972Cu;
    // 0x31972c: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x31972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x319730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x319730u;
    {
        const bool branch_taken_0x319730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319730) {
            ctx->pc = 0x31975Cu;
            goto label_31975c;
        }
    }
    ctx->pc = 0x319738u;
label_319738:
    // 0x319738: 0x8fc40028  lw          $a0, 0x28($fp)
    ctx->pc = 0x319738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x31973c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319740: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319744: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x319744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x319748: 0x24e79dec  addiu       $a3, $a3, -0x6214
    ctx->pc = 0x319748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942188));
    // 0x31974c: 0x8fc80028  lw          $t0, 0x28($fp)
    ctx->pc = 0x31974cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x319750: 0xc0c6530  jal         func_3194C0
    ctx->pc = 0x319750u;
    SET_GPR_U32(ctx, 31, 0x319758u);
    ctx->pc = 0x3194C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194C0u, 0x319750u, 0x319758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319758u;
label_319758:
    // 0x319758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31975c:
    // 0x31975c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31975cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319760: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x319760u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319764: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x319764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x319768: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x319768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31976c: 0x3e00008  jr          $ra
    ctx->pc = 0x31976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31976Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319774u;
}
