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

// Function: sub_00105540
// Address: 0x105540 - 0x105700
void sub_00105540_0x105540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105540_0x105540");
#endif

    switch (ctx->pc) {
        case 0x1055b0u: goto label_1055b0;
        case 0x1055e0u: goto label_1055e0;
        case 0x1055fcu: goto label_1055fc;
        case 0x105604u: goto label_105604;
        case 0x10564cu: goto label_10564c;
        case 0x105674u: goto label_105674;
        case 0x105680u: goto label_105680;
        case 0x1056b0u: goto label_1056b0;
        case 0x1056b8u: goto label_1056b8;
        case 0x1056dcu: goto label_1056dc;
        case 0x1056e8u: goto label_1056e8;
        default: break;
    }

    ctx->pc = 0x105540u;

    // 0x105540: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x105540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x105544: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x105548: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x105548u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10554c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x105550: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x105550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x105554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x105554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105558: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x105558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x10555c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x105560: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x105560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x105564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x105564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x105568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10556c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x105570: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x105570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x105574: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105578: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x105578u;
    {
        const bool branch_taken_0x105578 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x105578) {
            ctx->pc = 0x10557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105578u;
            // 0x10557c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x105580u;
            goto label_105580;
        }
    }
    ctx->pc = 0x105580u;
label_105580:
    // 0x105580: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105584: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x105584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x105588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10558c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x105590: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x105590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105594: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x105594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x105598: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10559c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10559cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1055a0: 0x4012  mflo        $t0
    ctx->pc = 0x1055a0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1055a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1055a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1055a8: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1055a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1055ac: 0x0  nop
    ctx->pc = 0x1055acu;
    // NOP
label_1055b0:
    // 0x1055b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1055b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1055b4: 0x0  nop
    ctx->pc = 0x1055b4u;
    // NOP
    // 0x1055b8: 0x0  nop
    ctx->pc = 0x1055b8u;
    // NOP
    // 0x1055bc: 0x0  nop
    ctx->pc = 0x1055bcu;
    // NOP
    // 0x1055c0: 0x0  nop
    ctx->pc = 0x1055c0u;
    // NOP
    // 0x1055c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1055C4u;
    {
        const bool branch_taken_0x1055c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1055c4) {
            ctx->pc = 0x1055B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1055b0;
        }
    }
    ctx->pc = 0x1055CCu;
    // 0x1055cc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1055ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1055d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1055d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1055d4: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
    // 0x1055d8: 0xc043c30  jal         func_10F0C0
    ctx->pc = 0x1055D8u;
    SET_GPR_U32(ctx, 31, 0x1055E0u);
    ctx->pc = 0x1055DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055D8u;
    // 0x1055dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0C0u, 0x1055D8u, 0x1055E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1055e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1055e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1055e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1055ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1055f0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1055f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1055f4: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x1055F4u;
    SET_GPR_U32(ctx, 31, 0x1055FCu);
    ctx->pc = 0x1055F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055F4u;
    // 0x1055f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x1055F4u, 0x1055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055FCu;
label_1055fc:
    // 0x1055fc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x1055FCu;
    SET_GPR_U32(ctx, 31, 0x105604u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x1055FCu, 0x105604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105604u;
label_105604:
    // 0x105604: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x105608: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10560c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105610: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x105610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x105614: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x105614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x105618: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10561c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10561cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x105620: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x105620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x105624: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x105624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x105628: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10562c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10562cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3)); // MMIO: 0x1000b020
    // 0x105630: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x105630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x105634: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x105638u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x10563c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10563Cu;
    {
        const bool branch_taken_0x10563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10563Cu;
        // 0x105640: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10563c) {
            ctx->pc = 0x105650u;
            goto label_105650;
        }
    }
    ctx->pc = 0x105644u;
    // 0x105644: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105644u;
    SET_GPR_U32(ctx, 31, 0x10564Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105644u, 0x10564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10564Cu;
label_10564c:
    // 0x10564c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105650:
    // 0x105650: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x105654: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105658: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x105658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x10565c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10565cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x105660: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x105660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105664: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x105668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10566c: 0xc041186  jal         func_104618
    ctx->pc = 0x10566Cu;
    SET_GPR_U32(ctx, 31, 0x105674u);
    ctx->pc = 0x105670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10566Cu;
    // 0x105670: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10566Cu, 0x105674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105674u;
label_105674:
    // 0x105674: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x105678: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10567c: 0x0  nop
    ctx->pc = 0x10567cu;
    // NOP
label_105680:
    // 0x105680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105684: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x105684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105688: 0x0  nop
    ctx->pc = 0x105688u;
    // NOP
    // 0x10568c: 0x0  nop
    ctx->pc = 0x10568cu;
    // NOP
    // 0x105690: 0x0  nop
    ctx->pc = 0x105690u;
    // NOP
    // 0x105694: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105694u;
    {
        const bool branch_taken_0x105694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105694) {
            ctx->pc = 0x105680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105680;
        }
    }
    ctx->pc = 0x10569Cu;
    // 0x10569c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10569Cu;
    {
        const bool branch_taken_0x10569c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10569Cu;
        // 0x1056a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10569c) {
            ctx->pc = 0x1056B0u;
            goto label_1056b0;
        }
    }
    ctx->pc = 0x1056A4u;
    // 0x1056a4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1056a8: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x1056A8u;
    SET_GPR_U32(ctx, 31, 0x1056B0u);
    ctx->pc = 0x1056ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056A8u;
    // 0x1056ac: 0x24a5d938  addiu       $a1, $a1, -0x26C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1056A8u, 0x1056B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056B0u;
label_1056b0:
    // 0x1056b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1056b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1056b4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1056b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1056b8:
    // 0x1056b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x1056bc: 0x0  nop
    ctx->pc = 0x1056bcu;
    // NOP
    // 0x1056c0: 0x0  nop
    ctx->pc = 0x1056c0u;
    // NOP
    // 0x1056c4: 0x0  nop
    ctx->pc = 0x1056c4u;
    // NOP
    // 0x1056c8: 0x0  nop
    ctx->pc = 0x1056c8u;
    // NOP
    // 0x1056cc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1056CCu;
    {
        const bool branch_taken_0x1056cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1056cc) {
            ctx->pc = 0x1056B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1056b8;
        }
    }
    ctx->pc = 0x1056D4u;
    // 0x1056d4: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x1056D4u;
    SET_GPR_U32(ctx, 31, 0x1056DCu);
    ctx->pc = 0x1056D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056D4u;
    // 0x1056d8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x1056D4u, 0x1056DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056DCu;
label_1056dc:
    // 0x1056dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056e0: 0xc043c34  jal         func_10F0D0
    ctx->pc = 0x1056E0u;
    SET_GPR_U32(ctx, 31, 0x1056E8u);
    ctx->pc = 0x1056E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056E0u;
    // 0x1056e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0D0u, 0x1056E0u, 0x1056E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056E8u;
label_1056e8:
    // 0x1056e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1056e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1056ec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1056ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1056f0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1056f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1056f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1056f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1056f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1056F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1056FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056F8u;
        // 0x1056fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1056F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105700u;
}
