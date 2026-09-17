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

// Function: sub_004F0258
// Address: 0x4f0258 - 0x4f05b0
void sub_004F0258_0x4f0258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0258_0x4f0258");
#endif

    switch (ctx->pc) {
        case 0x4f0310u: goto label_4f0310;
        case 0x4f0378u: goto label_4f0378;
        case 0x4f0414u: goto label_4f0414;
        case 0x4f0424u: goto label_4f0424;
        case 0x4f0450u: goto label_4f0450;
        case 0x4f0478u: goto label_4f0478;
        case 0x4f0480u: goto label_4f0480;
        case 0x4f04c4u: goto label_4f04c4;
        case 0x4f057cu: goto label_4f057c;
        default: break;
    }

    ctx->pc = 0x4f0258u;

    // 0x4f0258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f0258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f025c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f0260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f0260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f0264: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4f0264u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4f0268: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f026c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f026cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0270: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4f0270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4f0274: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4f0274u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4f0278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f027c: 0x26a3014a  addiu       $v1, $s5, 0x14A
    ctx->pc = 0x4f027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 330));
    // 0x4f0280: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f0280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f0284: 0x26f01210  addiu       $s0, $s7, 0x1210
    ctx->pc = 0x4f0284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4624));
    // 0x4f0288: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f0288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f028c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4f028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4f0290: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f0290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f0294: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f0294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f0298: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f0298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f029c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f029cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f02a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f02a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f02a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f02a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f02ac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f02acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f02b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f02b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f02b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f02b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f02b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f02bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f02bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f02c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f02c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f02c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4f02c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4f02c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f02c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f02cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f02d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f02d4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f02d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f02d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F02D8u;
    {
        const bool branch_taken_0x4f02d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F02D8u;
        // 0x4f02dc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f02d8) {
            ctx->pc = 0x4F0308u;
            goto label_4f0308;
        }
    }
    ctx->pc = 0x4F02E0u;
    // 0x4f02e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f02e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f02e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f02e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f02e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f02e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f02ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f02ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f02f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f02f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f02f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f02f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f02f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f02f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f02fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f02fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0300: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4F0300u;
    ctx->pc = 0x4F0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0300u;
    // 0x4f0304: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F0308u;
label_4f0308:
    // 0x4f0308: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F0308u;
    SET_GPR_U32(ctx, 31, 0x4F0310u);
    ctx->pc = 0x4F030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0308u;
    // 0x4f030c: 0x3c14007f  lui         $s4, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F0308u, 0x4F0310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0310u;
label_4f0310:
    // 0x4f0310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0314: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f0314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f0318: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f031c: 0x26861220  addiu       $a2, $s4, 0x1220
    ctx->pc = 0x4f031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4640));
    // 0x4f0320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0324: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4f0324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f0328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f032c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0330: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4f0330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4f0334: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f0334u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f0338: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f0338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f033c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4f033cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4f0340: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4f0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4f0344: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f0344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f0348: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f034c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f034cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0350: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0354: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f0354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0358: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x4f0358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x4f035c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f0360: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f0360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0364: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4f0364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f0368: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f036c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f036cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4f0370: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F0370u;
    SET_GPR_U32(ctx, 31, 0x4F0378u);
    ctx->pc = 0x4F0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0370u;
    // 0x4f0374: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F0370u, 0x4F0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0378u;
label_4f0378:
    // 0x4f0378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f0378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f037c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f0380: 0x2626121c  addiu       $a2, $s1, 0x121C
    ctx->pc = 0x4f0380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    // 0x4f0384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f0384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f0388: 0x26671224  addiu       $a3, $s3, 0x1224
    ctx->pc = 0x4f0388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4644));
    // 0x4f038c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f0390: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4f0390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f0394: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4f0394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f0398: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f039c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f03a0: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4f03a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4f03a4: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4f03a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4f03a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f03a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f03ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4f03acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4f03b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f03b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f03b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f03b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f03b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f03bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f03bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f03c0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f03c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f03c4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4f03c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f03c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f03cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f03d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f03d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f03d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4f03d8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4f03d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4f03dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f03dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4f03e0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f03e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f03e4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f03e8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x4f03e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4f03ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F03ECu;
    {
        const bool branch_taken_0x4f03ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F03ECu;
        // 0x4f03f0: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f03ec) {
            ctx->pc = 0x4F0400u;
            goto label_4f0400;
        }
    }
    ctx->pc = 0x4F03F4u;
    // 0x4f03f4: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4f03f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4f03f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F03F8u;
    {
        const bool branch_taken_0x4f03f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F03F8u;
        // 0x4f03fc: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f03f8) {
            ctx->pc = 0x4F0408u;
            goto label_4f0408;
        }
    }
    ctx->pc = 0x4F0400u;
label_4f0400:
    // 0x4f0400: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4f0400u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4f0404: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4f0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f0408:
    // 0x4f0408: 0x26c2d680  addiu       $v0, $s6, -0x2980
    ctx->pc = 0x4f0408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4f040c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F040Cu;
    SET_GPR_U32(ctx, 31, 0x4F0414u);
    ctx->pc = 0x4F0410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F040Cu;
    // 0x4f0410: 0xa443232c  sh          $v1, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F040Cu, 0x4F0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0414u;
label_4f0414:
    // 0x4f0414: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f0414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f0418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f0418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f041c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F041Cu;
    SET_GPR_U32(ctx, 31, 0x4F0424u);
    ctx->pc = 0x4F0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F041Cu;
    // 0x4f0420: 0x2631121c  addiu       $s1, $s1, 0x121C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F041Cu, 0x4F0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0424u;
label_4f0424:
    // 0x4f0424: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f0424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0428: 0x26101214  addiu       $s0, $s0, 0x1214
    ctx->pc = 0x4f0428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4f042c: 0x26731224  addiu       $s3, $s3, 0x1224
    ctx->pc = 0x4f042cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4644));
    // 0x4f0430: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f0430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f0434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0438: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4f0438u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4f043c: 0x26941220  addiu       $s4, $s4, 0x1220
    ctx->pc = 0x4f043cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4640));
    // 0x4f0440: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f0440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0444: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f0444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f0448: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0448u;
    SET_GPR_U32(ctx, 31, 0x4F0450u);
    ctx->pc = 0x4F044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0448u;
    // 0x4f044c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0448u, 0x4F0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0450u;
label_4f0450:
    // 0x4f0450: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4f0450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0454: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4f0454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f0458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f045c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0460: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4f0460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f0464: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f0464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f0468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4f0468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4f046c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f0470: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0470u;
    SET_GPR_U32(ctx, 31, 0x4F0478u);
    ctx->pc = 0x4F0474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0470u;
    // 0x4f0474: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0470u, 0x4F0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0478u;
label_4f0478:
    // 0x4f0478: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4F0478u;
    SET_GPR_U32(ctx, 31, 0x4F0480u);
    ctx->pc = 0x4F047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0478u;
    // 0x4f047c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4F0478u, 0x4F0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0480u;
label_4f0480:
    // 0x4f0480: 0x26e71210  addiu       $a3, $s7, 0x1210
    ctx->pc = 0x4f0480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4624));
    // 0x4f0484: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x4f0484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x4f0488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f0488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f048c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f048cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f0490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f0490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0494: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f0494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f0498: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f0498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f049c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f049cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f04a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f04a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f04a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f04a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f04a8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4f04a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4f04ac: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x4f04acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x4f04b0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4f04b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4f04b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f04b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f04b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f04bc: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4F04BCu;
    SET_GPR_U32(ctx, 31, 0x4F04C4u);
    ctx->pc = 0x4F04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F04BCu;
    // 0x4f04c0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4F04BCu, 0x4F04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F04C4u;
label_4f04c4:
    // 0x4f04c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f04c8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4f04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4f04cc: 0x26c7d680  addiu       $a3, $s6, -0x2980
    ctx->pc = 0x4f04ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4f04d0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f04d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f04d4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f04d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f04d8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4f04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f04dc: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4f04dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f04e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f04e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f04e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4f04e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f04e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f04ec: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4f04ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f04f0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4f04f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4f04f4: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4f04f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f04f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f04f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f04fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f04fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f0500: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4f0500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4f0504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f0504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0508: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f0508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f050c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4f050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4f0510: 0x962a0000  lhu         $t2, 0x0($s1)
    ctx->pc = 0x4f0510u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f0514: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4f0514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f0518: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f0518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f051c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4f051cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4f0520: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4f0520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4f0524: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4f0524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4f0528: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4f0528u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4f052c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4f052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4f0530: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4f0530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f0534: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4f0534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4f0538: 0xa4ea2334  sh          $t2, 0x2334($a3)
    ctx->pc = 0x4f0538u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9012), (uint16_t)GPR_U32(ctx, 10));
    // 0x4f053c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f053cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f0540: 0xa4e32336  sh          $v1, 0x2336($a3)
    ctx->pc = 0x4f0540u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f0544: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4f0544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4f0548: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4f0548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4f054c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4f054cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4f0550: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4f0550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4f0554: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4f0554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f0558: 0xa4e22338  sh          $v0, 0x2338($a3)
    ctx->pc = 0x4f0558u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f055c: 0x8ea30124  lw          $v1, 0x124($s5)
    ctx->pc = 0x4f055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x4f0560: 0xace32340  sw          $v1, 0x2340($a3)
    ctx->pc = 0x4f0560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9024), GPR_U32(ctx, 3));
    // 0x4f0564: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x4f0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x4f0568: 0xace22344  sw          $v0, 0x2344($a3)
    ctx->pc = 0x4f0568u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9028), GPR_U32(ctx, 2));
    // 0x4f056c: 0x8ea3012c  lw          $v1, 0x12C($s5)
    ctx->pc = 0x4f056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x4f0570: 0xa4e02332  sh          $zero, 0x2332($a3)
    ctx->pc = 0x4f0570u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9010), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f0574: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4F0574u;
    SET_GPR_U32(ctx, 31, 0x4F057Cu);
    ctx->pc = 0x4F0578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0574u;
    // 0x4f0578: 0xace32348  sw          $v1, 0x2348($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 9032), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4F0574u, 0x4F057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F057Cu;
label_4f057c:
    // 0x4f057c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4f057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f0580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f0584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f0588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f0588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f058c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f058cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f0590: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f0590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0594: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f0594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f0598: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4f0598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f059c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4f059cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4f05a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f05a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f05a4: 0x813c16c  j           func_4F05B0
    ctx->pc = 0x4F05A4u;
    ctx->pc = 0x4F05A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F05A4u;
    // 0x4f05a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F05B0u;
    sub_004F05B0_0x4f05b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F05ACu;
    // 0x4f05ac: 0x0  nop
    ctx->pc = 0x4f05acu;
    // NOP
    ctx->pc = 0x4f05b0u;
}
