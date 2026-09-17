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

// Function: sub_004D3500
// Address: 0x4d3500 - 0x4d37f8
void sub_004D3500_0x4d3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3500_0x4d3500");
#endif

    switch (ctx->pc) {
        case 0x4d3618u: goto label_4d3618;
        case 0x4d3738u: goto label_4d3738;
        case 0x4d3740u: goto label_4d3740;
        case 0x4d3748u: goto label_4d3748;
        case 0x4d3750u: goto label_4d3750;
        default: break;
    }

    ctx->pc = 0x4d3500u;

    // 0x4d3500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4d3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4d3504: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d3508: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4d3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4d350c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d350cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d3510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4d3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4d3514: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d3514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d3518: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4d3518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4d351c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d351cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d3520: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4d3520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4d3524: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x4d3524u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x4d3528: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4d3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4d352c: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d352cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d3530: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4d3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4d3534: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4d3534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3538: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4d3538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4d353c: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d353cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4d3540: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4d3540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4d3544: 0x26de0028  addiu       $fp, $s6, 0x28
    ctx->pc = 0x4d3544u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 40));
    // 0x4d3548: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4d3548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4d354c: 0x26731034  addiu       $s3, $s3, 0x1034
    ctx->pc = 0x4d354cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4148));
    // 0x4d3550: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4d3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4d3554: 0x26b51038  addiu       $s5, $s5, 0x1038
    ctx->pc = 0x4d3554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4152));
    // 0x4d3558: 0x8c451044  lw          $a1, 0x1044($v0)
    ctx->pc = 0x4d3558u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1044u));
    // 0x4d355c: 0x2652103c  addiu       $s2, $s2, 0x103C
    ctx->pc = 0x4d355cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4156));
    // 0x4d3560: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d3560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1034u));
    // 0x4d3564: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4d3564u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4d3568: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x4d3568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4d356c: 0x25ad102c  addiu       $t5, $t5, 0x102C
    ctx->pc = 0x4d356cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4140));
    // 0x4d3570: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d3574: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4d3574u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1038u));
    // 0x4d3578: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d3578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d357c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d357cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d3580: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d3580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d3584: 0x26f71030  addiu       $s7, $s7, 0x1030
    ctx->pc = 0x4d3584u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4144));
    // 0x4d3588: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d3588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d358c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3590: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d3594: 0x2694d680  addiu       $s4, $s4, -0x2980
    ctx->pc = 0x4d3594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4d3598: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d3598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d359c: 0x26c30026  addiu       $v1, $s6, 0x26
    ctx->pc = 0x4d359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 38));
    // 0x4d35a0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d35a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d35a4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d35a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d35a8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4d35a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d35ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d35acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d35b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4d35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4d35b4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d35b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d35b8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d35b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d35bc: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4d35bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d35c0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d35c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d35c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d35c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d35cc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d35ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d35d0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d35d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d35d4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4d35d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d35d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d35d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d35dc: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d35dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d35e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d35e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d35e4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4d35e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4d35e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4d35e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d35ec: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d35ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d35f0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d35f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d35f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d35f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d35f8: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4d35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4d35fc: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d35fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d3600: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d3600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d3604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d3604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d3608: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4d3608u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4d360c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4d360cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3610: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D3610u;
    SET_GPR_U32(ctx, 31, 0x4D3618u);
    ctx->pc = 0x4D3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3610u;
    // 0x4d3614: 0x7fad0010  sq          $t5, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D3610u, 0x4D3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3618u;
label_4d3618:
    // 0x4d3618: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x4d3618u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d361c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4d361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4d3620: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3624: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4d3624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3628: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d3628u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d362c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d3630: 0x86aa0000  lh          $t2, 0x0($s5)
    ctx->pc = 0x4d3630u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d3634: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d3634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d3638: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4d3638u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d363c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d3640: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4d3640u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3644: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d3644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d3648: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4d3648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d364c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4d364cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4d3650: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d3650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d3654: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x4d3654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
    // 0x4d3658: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d3658u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d365c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d365cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d3660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d3660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3664: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4d3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4d3668: 0x7bad0010  lq          $t5, 0x10($sp)
    ctx->pc = 0x4d3668u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d366c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d3670: 0x966e0000  lhu         $t6, 0x0($s3)
    ctx->pc = 0x4d3670u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3674: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d3674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d3678: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4d3678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d367c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4d367cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4d3680: 0x8eec0000  lw          $t4, 0x0($s7)
    ctx->pc = 0x4d3680u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d3684: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4d3684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4d3688: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d3688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d368c: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4d368cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x4d3690: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4d3690u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4d3694: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4d3694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4d3698: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d3698u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d369c: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4d369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4d36a0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4d36a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d36a4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d36a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d36a8: 0xa68e2334  sh          $t6, 0x2334($s4)
    ctx->pc = 0x4d36a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9012), (uint16_t)GPR_U32(ctx, 14));
    // 0x4d36ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d36acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d36b0: 0xa6832336  sh          $v1, 0x2336($s4)
    ctx->pc = 0x4d36b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d36b4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4d36b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4d36b8: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4d36b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4d36bc: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x4d36bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x4d36c0: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4d36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4d36c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d36c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d36c8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4d36c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d36cc: 0xa6832338  sh          $v1, 0x2338($s4)
    ctx->pc = 0x4d36ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9016), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d36d0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d36d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d36d4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d36d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d36d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d36dc: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d36dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d36e0: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x4d36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
    // 0x4d36e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d36e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d36e8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d36e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d36ec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d36ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d36f0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d36f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d36f4: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4d36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4d36f8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d36f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d36fc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4d36fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4d3700: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d3700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d3704: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d3704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d3708: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4d3708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4d370c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d3710: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d3710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d3714: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d3714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d3718: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d3718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d371c: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4d371cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4d3720: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4d3720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d3724: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d3724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d3728: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x4d3728u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x4d372c: 0xaeec0000  sw          $t4, 0x0($s7)
    ctx->pc = 0x4d372cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 12));
    // 0x4d3730: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D3730u;
    SET_GPR_U32(ctx, 31, 0x4D3738u);
    ctx->pc = 0x4D3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3730u;
    // 0x4d3734: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D3730u, 0x4D3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3738u;
label_4d3738:
    // 0x4d3738: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3738u;
    SET_GPR_U32(ctx, 31, 0x4D3740u);
    ctx->pc = 0x4D373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3738u;
    // 0x4d373c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3738u, 0x4D3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3740u;
label_4d3740:
    // 0x4d3740: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3740u;
    SET_GPR_U32(ctx, 31, 0x4D3748u);
    ctx->pc = 0x4D3744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3740u;
    // 0x4d3744: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3740u, 0x4D3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3748u;
label_4d3748:
    // 0x4d3748: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D3748u;
    SET_GPR_U32(ctx, 31, 0x4D3750u);
    ctx->pc = 0x4D374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3748u;
    // 0x4d374c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D3748u, 0x4D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3750u;
label_4d3750:
    // 0x4d3750: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d3750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3754: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4d3754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d3758: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d375c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d375cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d3760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d3764: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d3764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d3768: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4d376c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d376cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d3770: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4d3770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4d3774: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x4d3774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4d3778: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4d3778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d377c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d377cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d3780: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d3780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d3784: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4d3784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4d3788: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4d3788u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d378c: 0x8ec20124  lw          $v0, 0x124($s6)
    ctx->pc = 0x4d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 292)));
    // 0x4d3790: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4d3790u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d3794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d3794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d3798: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4d3798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4d379c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d379cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d37a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4d37a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d37a4: 0x8ec20128  lw          $v0, 0x128($s6)
    ctx->pc = 0x4d37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 296)));
    // 0x4d37a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d37a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d37ac: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d37acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d37b0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4d37b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d37b4: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x4d37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
    // 0x4d37b8: 0xae832340  sw          $v1, 0x2340($s4)
    ctx->pc = 0x4d37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9024), GPR_U32(ctx, 3));
    // 0x4d37bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d37bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d37c0: 0xae852344  sw          $a1, 0x2344($s4)
    ctx->pc = 0x4d37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9028), GPR_U32(ctx, 5));
    // 0x4d37c4: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4d37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4d37c8: 0xae862348  sw          $a2, 0x2348($s4)
    ctx->pc = 0x4d37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9032), GPR_U32(ctx, 6));
    // 0x4d37cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4d37ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d37d0: 0x96c201b6  lhu         $v0, 0x1B6($s6)
    ctx->pc = 0x4d37d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 438)));
    // 0x4d37d4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4d37d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d37d8: 0xa6822332  sh          $v0, 0x2332($s4)
    ctx->pc = 0x4d37d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d37dc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x4d37dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4d37e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4d37e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d37e4: 0xa683232c  sh          $v1, 0x232C($s4)
    ctx->pc = 0x4d37e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9004), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d37e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4d37e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d37ec: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4D37ECu;
    ctx->pc = 0x4D37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D37ECu;
    // 0x4d37f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4D37F4u;
    // 0x4d37f4: 0x0  nop
    ctx->pc = 0x4d37f4u;
    // NOP
    ctx->pc = 0x4d37f8u;
}
