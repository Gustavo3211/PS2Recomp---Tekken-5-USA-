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

// Function: sub_001068A0
// Address: 0x1068a0 - 0x106af0
void sub_001068A0_0x1068a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001068A0_0x1068a0");
#endif

    switch (ctx->pc) {
        case 0x106920u: goto label_106920;
        case 0x106974u: goto label_106974;
        case 0x10698cu: goto label_10698c;
        case 0x1069a8u: goto label_1069a8;
        case 0x1069ccu: goto label_1069cc;
        default: break;
    }

    ctx->pc = 0x1068a0u;

    // 0x1068a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1068a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1068a4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1068a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1068a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1068a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1068ac: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1068acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068b0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1068b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1068b4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1068b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1068b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1068b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1068bc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1068bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1068c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1068c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1068c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1068cc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x1068ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1068d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1068d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1068d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1068d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1068d8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1068d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1068dc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x1068dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1068e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1068e4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1068e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1068e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1068E8u;
    {
        const bool branch_taken_0x1068e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1068e8) {
            ctx->pc = 0x1068ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1068E8u;
            // 0x1068ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068F0u;
            goto label_1068f0;
        }
    }
    ctx->pc = 0x1068F0u;
label_1068f0:
    // 0x1068f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1068f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1068f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1068f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1068f8: 0xb812  mflo        $s7
    ctx->pc = 0x1068f8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1068fc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1068fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106900: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x106900u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x106904: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x106904u;
    {
        const bool branch_taken_0x106904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106904u;
        // 0x106908: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106904) {
            ctx->pc = 0x106950u;
            goto label_106950;
        }
    }
    ctx->pc = 0x10690Cu;
    // 0x10690c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x10690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106910: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x106910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x106914: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x106914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x106918: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x106918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x10691c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x10691cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_106920:
    // 0x106920: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106924: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x106928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106928u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x10692c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x106930: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x106930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106934: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x106934u;
    {
        const bool branch_taken_0x106934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x106934) {
            ctx->pc = 0x106920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106920;
        }
    }
    ctx->pc = 0x10693Cu;
    // 0x10693c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106940: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x106940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106944: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x106944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x106948: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x106948u;
    {
        const bool branch_taken_0x106948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106948u;
        // 0x10694c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106948) {
            ctx->pc = 0x1069E4u;
            goto label_1069e4;
        }
    }
    ctx->pc = 0x106950u;
label_106950:
    // 0x106950: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x106950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x106954: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x106954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x106958: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106958u;
    {
        const bool branch_taken_0x106958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106958u;
        // 0x10695c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106958) {
            ctx->pc = 0x106984u;
            goto label_106984;
        }
    }
    ctx->pc = 0x106960u;
    // 0x106960: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x106964: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x106964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106968: 0x24a5d9e0  addiu       $a1, $a1, -0x2620
    ctx->pc = 0x106968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957536));
    // 0x10696c: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x10696Cu;
    SET_GPR_U32(ctx, 31, 0x106974u);
    ctx->pc = 0x106970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10696Cu;
    // 0x106970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x10696Cu, 0x106974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106974u;
label_106974:
    // 0x106974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10697c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x10697Cu;
    {
        const bool branch_taken_0x10697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10697Cu;
        // 0x106980: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10697c) {
            ctx->pc = 0x106AC0u;
            goto label_106ac0;
        }
    }
    ctx->pc = 0x106984u;
label_106984:
    // 0x106984: 0xc041866  jal         func_106198
    ctx->pc = 0x106984u;
    SET_GPR_U32(ctx, 31, 0x10698Cu);
    ctx->pc = 0x106988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106984u;
    // 0x106988: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106198u, 0x106984u, 0x10698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10698Cu;
label_10698c:
    // 0x10698c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106990: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x106994: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x106994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x106998: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x106998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x10699c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1069a0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1069a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1069a4: 0x0  nop
    ctx->pc = 0x1069a4u;
    // NOP
label_1069a8:
    // 0x1069a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x1069ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1069b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1069b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1069b4: 0x0  nop
    ctx->pc = 0x1069b4u;
    // NOP
    // 0x1069b8: 0x0  nop
    ctx->pc = 0x1069b8u;
    // NOP
    // 0x1069bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1069BCu;
    {
        const bool branch_taken_0x1069bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1069bc) {
            ctx->pc = 0x1069A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1069a8;
        }
    }
    ctx->pc = 0x1069C4u;
    // 0x1069c4: 0xc0422d2  jal         func_108B48
    ctx->pc = 0x1069C4u;
    SET_GPR_U32(ctx, 31, 0x1069CCu);
    ctx->pc = 0x1069C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069C4u;
    // 0x1069c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B48u, 0x1069C4u, 0x1069CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069CCu;
label_1069cc:
    // 0x1069cc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1069d0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1069d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1069d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1069d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1069d8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1069d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1069dc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1069e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1069e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1069e4:
    // 0x1069e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1069e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1069e8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1069E8u;
    {
        const bool branch_taken_0x1069e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1069e8) {
            ctx->pc = 0x1069ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069E8u;
            // 0x1069ec: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A14u;
            goto label_106a14;
        }
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1069f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1069f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1069F4u;
    {
        const bool branch_taken_0x1069f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069F4u;
        // 0x1069f8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069f4) {
            ctx->pc = 0x106A10u;
            goto label_106a10;
        }
    }
    ctx->pc = 0x1069FCu;
    // 0x1069fc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1069fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106a00: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106a04: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x106a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x106a08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106A08u;
    {
        const bool branch_taken_0x106a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A08u;
        // 0x106a0c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a08) {
            ctx->pc = 0x106A24u;
            goto label_106a24;
        }
    }
    ctx->pc = 0x106A10u;
label_106a10:
    // 0x106a10: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_106a14:
    // 0x106a14: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x106a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106a18: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106a1c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x106a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x106a20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x106a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_106a24:
    // 0x106a24: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106a28: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x106a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106a2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x106a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106a34: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x106a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106a38: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x106a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x106a3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x106a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x106a40: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x106a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106a44: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x106A44u;
    {
        const bool branch_taken_0x106a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x106A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A44u;
        // 0x106a48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a44) {
            ctx->pc = 0x106A80u;
            goto label_106a80;
        }
    }
    ctx->pc = 0x106A4Cu;
    // 0x106a4c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106a50: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x106a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x106a54: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x106a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x106a58: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x106a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106a5c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x106a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x106a60: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x106a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x106a64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x106a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106a68: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x106a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x106a6c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x106a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x106a70: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x106a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106a78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x106A78u;
    {
        const bool branch_taken_0x106a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A78u;
        // 0x106a7c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a78) {
            ctx->pc = 0x106ABCu;
            goto label_106abc;
        }
    }
    ctx->pc = 0x106A80u;
label_106a80:
    // 0x106a80: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106A80u;
    {
        const bool branch_taken_0x106a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x106a80) {
            ctx->pc = 0x106A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A80u;
            // 0x106a84: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106A8Cu;
            goto label_106a8c;
        }
    }
    ctx->pc = 0x106A88u;
    // 0x106a88: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x106a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_106a8c:
    // 0x106a8c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x106a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x106a90: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x106a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x106a94: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x106a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106a98: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106a9c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x106a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x106aa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106aa4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x106aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x106aa8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x106aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x106aac: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x106aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106ab0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x106ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106ab8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x106ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_106abc:
    // 0x106abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106ac0:
    // 0x106ac0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106ac4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106ac4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106ac8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106ac8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106acc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106accu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106ad0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106ad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106ad4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106ad4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106ad8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106adc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106ae0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x106AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE8u;
        // 0x106aec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AF0u;
}
