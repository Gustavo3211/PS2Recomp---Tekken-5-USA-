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

// Function: sub_004E84F8
// Address: 0x4e84f8 - 0x4e89f0
void sub_004E84F8_0x4e84f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E84F8_0x4e84f8");
#endif

    switch (ctx->pc) {
        case 0x4e853cu: goto label_4e853c;
        case 0x4e8544u: goto label_4e8544;
        case 0x4e86a4u: goto label_4e86a4;
        case 0x4e86acu: goto label_4e86ac;
        case 0x4e8740u: goto label_4e8740;
        case 0x4e8748u: goto label_4e8748;
        case 0x4e8750u: goto label_4e8750;
        case 0x4e88bcu: goto label_4e88bc;
        case 0x4e8908u: goto label_4e8908;
        case 0x4e8928u: goto label_4e8928;
        case 0x4e8930u: goto label_4e8930;
        case 0x4e8938u: goto label_4e8938;
        case 0x4e894cu: goto label_4e894c;
        case 0x4e8960u: goto label_4e8960;
        case 0x4e8968u: goto label_4e8968;
        case 0x4e8978u: goto label_4e8978;
        case 0x4e8980u: goto label_4e8980;
        case 0x4e8988u: goto label_4e8988;
        case 0x4e8990u: goto label_4e8990;
        case 0x4e89a0u: goto label_4e89a0;
        case 0x4e89b0u: goto label_4e89b0;
        case 0x4e89b8u: goto label_4e89b8;
        case 0x4e89c0u: goto label_4e89c0;
        default: break;
    }

    ctx->pc = 0x4e84f8u;

    // 0x4e84f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e84f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e84fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e84fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e8500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e8500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e8504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e8508: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4e8508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4e850c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e8510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e8514: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e8518: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e851c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e8520: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e8524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e8528: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e8528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e852c: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4E852Cu;
    {
        const bool branch_taken_0x4e852c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E852Cu;
        // 0x4e8530: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e852c) {
            ctx->pc = 0x4E85F0u;
            goto label_4e85f0;
        }
    }
    ctx->pc = 0x4E8534u;
    // 0x4e8534: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E8534u;
    SET_GPR_U32(ctx, 31, 0x4E853Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E8534u, 0x4E853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E853Cu;
label_4e853c:
    // 0x4e853c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E853Cu;
    SET_GPR_U32(ctx, 31, 0x4E8544u);
    ctx->pc = 0x4E8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E853Cu;
    // 0x4e8540: 0x267011d0  addiu       $s0, $s3, 0x11D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E853Cu, 0x4E8544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8544u;
label_4e8544:
    // 0x4e8544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e8544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e8548: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e8548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4e854c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e8550: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e8550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e8554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8558: 0x26290160  addiu       $t1, $s1, 0x160
    ctx->pc = 0x4e8558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4e855c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8560: 0x262a0162  addiu       $t2, $s1, 0x162
    ctx->pc = 0x4e8560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
    // 0x4e8564: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e8564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e8568: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e8568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e856c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4e856cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e8570: 0xa623015e  sh          $v1, 0x15E($s1)
    ctx->pc = 0x4e8570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8574: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e8574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e8578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e857c: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x4e857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x4e8580: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e8584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e858c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e8590: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8594: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e8594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e8598: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e8598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e859c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e85a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e85a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e85a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e85a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e85a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e85a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e85ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e85acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e85b0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e85b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e85b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e85b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e85b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e85bc: 0x24217f58  addiu       $at, $at, 0x7F58
    ctx->pc = 0x4e85bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32600));
    // 0x4e85c0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e85c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e85c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e85c8: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4e85c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e85cc: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4e85ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e85d0: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x4e85d0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e85d4: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x4e85d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x4e85d8: 0xa6230158  sh          $v1, 0x158($s1)
    ctx->pc = 0x4e85d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e85dc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e85dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e85e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e85e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e85e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E85E4u;
    {
        const bool branch_taken_0x4e85e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E85E4u;
        // 0x4e85e8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e85e4) {
            ctx->pc = 0x4E8600u;
            goto label_4e8600;
        }
    }
    ctx->pc = 0x4E85ECu;
    // 0x4e85ec: 0x0  nop
    ctx->pc = 0x4e85ecu;
    // NOP
label_4e85f0:
    // 0x4e85f0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e85f4: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e85f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e85f8: 0x26290160  addiu       $t1, $s1, 0x160
    ctx->pc = 0x4e85f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x4e85fc: 0x262a0162  addiu       $t2, $s1, 0x162
    ctx->pc = 0x4e85fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
label_4e8600:
    // 0x4e8600: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e8600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8604: 0x267211d0  addiu       $s2, $s3, 0x11D0
    ctx->pc = 0x4e8604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4560));
    // 0x4e8608: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e860c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4e860cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4e8610: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x4e8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x4e8614: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e8614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e8618: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e861c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8624: 0x249511dc  addiu       $s5, $a0, 0x11DC
    ctx->pc = 0x4e8624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4572));
    // 0x4e8628: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e8628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e862c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8630: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e8630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e8634: 0x24d37f58  addiu       $s3, $a2, 0x7F58
    ctx->pc = 0x4e8634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 32600));
    // 0x4e8638: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e8638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e863c: 0x249411e0  addiu       $s4, $a0, 0x11E0
    ctx->pc = 0x4e863cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
    // 0x4e8640: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4e8640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e8644: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e8644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e8648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e864c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4e864cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e8650: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e8654: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e8654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e8658: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e865c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e865cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e8660: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e8660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e8664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e8664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8668: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e8668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e866c: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4e866cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e8670: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e8670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e8674: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e8674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e8678: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4e8678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4e867c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8680: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4e8680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4e8684: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e8684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e8688: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e868c: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4e868cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e8690: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x4e8690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4e8694: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e8694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e8698: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e8698u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e869c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4E869Cu;
    SET_GPR_U32(ctx, 31, 0x4E86A4u);
    ctx->pc = 0x4E86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E869Cu;
    // 0x4e86a0: 0xae880000  sw          $t0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4E869Cu, 0x4E86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86A4u;
label_4e86a4:
    // 0x4e86a4: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4E86A4u;
    SET_GPR_U32(ctx, 31, 0x4E86ACu);
    ctx->pc = 0x4E86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E86A4u;
    // 0x4e86a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4E86A4u, 0x4E86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E86ACu;
label_4e86ac:
    // 0x4e86ac: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x4E86ACu;
    {
        const bool branch_taken_0x4e86ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e86ac) {
            ctx->pc = 0x4E86B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E86ACu;
            // 0x4e86b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E89C4u;
            goto label_4e89c4;
        }
    }
    ctx->pc = 0x4E86B4u;
    // 0x4e86b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e86b8: 0x862201b6  lh          $v0, 0x1B6($s1)
    ctx->pc = 0x4e86b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4e86bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e86bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e86c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e86c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e86c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e86c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e86cc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e86ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e86d0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e86d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e86d4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4E86D4u;
    {
        const bool branch_taken_0x4e86d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e86d4) {
            ctx->pc = 0x4E86D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E86D4u;
            // 0x4e86d8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8754u;
            goto label_4e8754;
        }
    }
    ctx->pc = 0x4E86DCu;
    // 0x4e86dc: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4e86dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4e86e0: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4e86e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4e86e4: 0x256b11e4  addiu       $t3, $t3, 0x11E4
    ctx->pc = 0x4e86e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4580));
    // 0x4e86e8: 0x86630004  lh          $v1, 0x4($s3)
    ctx->pc = 0x4e86e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4e86ec: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4e86ecu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F11E4u));
    // 0x4e86f0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e86f4: 0x86640006  lh          $a0, 0x6($s3)
    ctx->pc = 0x4e86f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x4e86f8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4e86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4e86fc: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x4e86fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e8700: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e8700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e8704: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e8704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e8708: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e8708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e870c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4e870cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4e8710: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4e8710u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4e8714: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e8714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e8718: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4e8718u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4e871c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4e871cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4e8720: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4e8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8724: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4e8724u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4e8728: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e8728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e872c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4e872cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8730: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4e8730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8734: 0xaeaa0000  sw          $t2, 0x0($s5)
    ctx->pc = 0x4e8734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 10));
    // 0x4e8738: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E8738u;
    SET_GPR_U32(ctx, 31, 0x4E8740u);
    ctx->pc = 0x4E873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8738u;
    // 0x4e873c: 0xae890000  sw          $t1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E8738u, 0x4E8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8740u;
label_4e8740:
    // 0x4e8740: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E8740u;
    SET_GPR_U32(ctx, 31, 0x4E8748u);
    ctx->pc = 0x4E8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8740u;
    // 0x4e8744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E8740u, 0x4E8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8748u;
label_4e8748:
    // 0x4e8748: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E8748u;
    SET_GPR_U32(ctx, 31, 0x4E8750u);
    ctx->pc = 0x4E874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8748u;
    // 0x4e874c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E8748u, 0x4E8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8750u;
label_4e8750:
    // 0x4e8750: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e8750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e8754:
    // 0x4e8754: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4e8754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4e8758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e875c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e8760: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8764: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e8764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e8768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e876c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e876cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e8770: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e8770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e8774: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e8774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8778: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e8778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e877c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e8780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8784: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e8784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e8788: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e8788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e878c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x4E878Cu;
    {
        const bool branch_taken_0x4e878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E878Cu;
        // 0x4e8790: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e878c) {
            ctx->pc = 0x4E8930u;
            goto label_4e8930;
        }
    }
    ctx->pc = 0x4E8794u;
    // 0x4e8794: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x4e8794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4e8798: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4e8798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4e879c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e87a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e87a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e87a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e87a8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4e87a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e87ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e87acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4e87b0: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4e87b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e87b4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e87b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e87b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e87bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e87c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e87c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e87c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e87c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e87c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e87cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e87d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e87d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e87d4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e87d8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e87d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e87dc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x4E87DCu;
    {
        const bool branch_taken_0x4e87dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87DCu;
        // 0x4e87e0: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e87dc) {
            ctx->pc = 0x4E8928u;
            goto label_4e8928;
        }
    }
    ctx->pc = 0x4E87E4u;
    // 0x4e87e4: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x4e87e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4e87e8: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4e87e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4e87ec: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e87ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e87f0: 0xa4e22330  sh          $v0, 0x2330($a3)
    ctx->pc = 0x4e87f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e87f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e87f8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e87f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e87fc: 0x247311d4  addiu       $s3, $v1, 0x11D4
    ctx->pc = 0x4e87fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4564));
    // 0x4e8800: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4e8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4e8804: 0x254a11e4  addiu       $t2, $t2, 0x11E4
    ctx->pc = 0x4e8804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4580));
    // 0x4e8808: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e8808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e880c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e8810: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e8814: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x4e8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x4e8818: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e8818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e881c: 0x24f6233a  addiu       $s6, $a3, 0x233A
    ctx->pc = 0x4e881cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 9018));
    // 0x4e8820: 0xa4e22334  sh          $v0, 0x2334($a3)
    ctx->pc = 0x4e8820u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8824: 0x24f7233c  addiu       $s7, $a3, 0x233C
    ctx->pc = 0x4e8824u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 9020));
    // 0x4e8828: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e8828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e882c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e882cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e8830: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4e8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4e8834: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4e8834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e8838: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e8838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e883c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4e883cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e8840: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e8840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e8844: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e8844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e8848: 0xa4e22336  sh          $v0, 0x2336($a3)
    ctx->pc = 0x4e8848u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e884c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e884cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e8850: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e8850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e8854: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4e8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4e8858: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4e8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e885c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4e885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4e8860: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e8860u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e8864: 0xa4e22338  sh          $v0, 0x2338($a3)
    ctx->pc = 0x4e8864u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8868: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x4e8868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4e886c: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x4e886cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8870: 0x9622011c  lhu         $v0, 0x11C($s1)
    ctx->pc = 0x4e8870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4e8874: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4e8874u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8878: 0x96230120  lhu         $v1, 0x120($s1)
    ctx->pc = 0x4e8878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4e887c: 0xa4e3233e  sh          $v1, 0x233E($a3)
    ctx->pc = 0x4e887cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8880: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4e8880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4e8884: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e8888: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e8888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e888c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e888cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e8890: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4e8890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4e8894: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e8894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e8898: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e8898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e889c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e889cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e88a0: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4e88a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4e88a4: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4e88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4e88a8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4e88a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4e88ac: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e88acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e88b0: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4e88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4e88b4: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E88B4u;
    SET_GPR_U32(ctx, 31, 0x4E88BCu);
    ctx->pc = 0x4E88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E88B4u;
    // 0x4e88b8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E88B4u, 0x4E88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E88BCu;
label_4e88bc:
    // 0x4e88bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e88bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e88c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e88c4: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4E88C4u;
    {
        const bool branch_taken_0x4e88c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88C4u;
        // 0x4e88c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88c4) {
            ctx->pc = 0x4E8920u;
            goto label_4e8920;
        }
    }
    ctx->pc = 0x4E88CCu;
    // 0x4e88cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e88d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e88d4: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e88d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e88d8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4e88d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4e88dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e88e0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e88e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e88e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e88e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e88e8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e88e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e88ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e88f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e88f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e88f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e88f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e88f8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4e88f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e88fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4e88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4e8900: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4E8900u;
    SET_GPR_U32(ctx, 31, 0x4E8908u);
    ctx->pc = 0x4E8904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8900u;
    // 0x4e8904: 0xae890000  sw          $t1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4E8900u, 0x4E8908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8908u;
label_4e8908:
    // 0x4e8908: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8908u;
    {
        const bool branch_taken_0x4e8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4e8908) {
            ctx->pc = 0x4E8920u;
            goto label_4e8920;
        }
    }
    ctx->pc = 0x4E8910u;
    // 0x4e8910: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e8910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e8914: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4e8914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e8918: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4e8918u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e891c: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4e891cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e8920:
    // 0x4e8920: 0xc127a8c  jal         func_49EA30
    ctx->pc = 0x4E8920u;
    SET_GPR_U32(ctx, 31, 0x4E8928u);
    ctx->pc = 0x4E8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8920u;
    // 0x4e8924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA30u, 0x4E8920u, 0x4E8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8928u;
label_4e8928:
    // 0x4e8928: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E8928u;
    SET_GPR_U32(ctx, 31, 0x4E8930u);
    ctx->pc = 0x4E892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8928u;
    // 0x4e892c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E8928u, 0x4E8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8930u;
label_4e8930:
    // 0x4e8930: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4E8930u;
    SET_GPR_U32(ctx, 31, 0x4E8938u);
    ctx->pc = 0x4E8934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8930u;
    // 0x4e8934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4E8930u, 0x4E8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8938u;
label_4e8938:
    // 0x4e8938: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4E8938u;
    {
        const bool branch_taken_0x4e8938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8938u;
        // 0x4e893c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8938) {
            ctx->pc = 0x4E89C4u;
            goto label_4e89c4;
        }
    }
    ctx->pc = 0x4E8940u;
    // 0x4e8940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e8940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8944: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4E8944u;
    SET_GPR_U32(ctx, 31, 0x4E894Cu);
    ctx->pc = 0x4E8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8944u;
    // 0x4e8948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4E8944u, 0x4E894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E894Cu;
label_4e894c:
    // 0x4e894c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4e894cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8950: 0x54500011  bnel        $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E8950u;
    {
        const bool branch_taken_0x4e8950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4e8950) {
            ctx->pc = 0x4E8954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8950u;
            // 0x4e8954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8998u;
            goto label_4e8998;
        }
    }
    ctx->pc = 0x4E8958u;
    // 0x4e8958: 0xc13a27c  jal         func_4E89F0
    ctx->pc = 0x4E8958u;
    SET_GPR_U32(ctx, 31, 0x4E8960u);
    ctx->pc = 0x4E895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8958u;
    // 0x4e895c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E89F0u, 0x4E8958u, 0x4E8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8960u;
label_4e8960:
    // 0x4e8960: 0xc12dce0  jal         func_4B7380
    ctx->pc = 0x4E8960u;
    SET_GPR_U32(ctx, 31, 0x4E8968u);
    ctx->pc = 0x4E8964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8960u;
    // 0x4e8964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7380u, 0x4E8960u, 0x4E8968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8968u;
label_4e8968:
    // 0x4e8968: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4E8968u;
    {
        const bool branch_taken_0x4e8968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8968) {
            ctx->pc = 0x4E896Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8968u;
            // 0x4e896c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E89C4u;
            goto label_4e89c4;
        }
    }
    ctx->pc = 0x4E8970u;
    // 0x4e8970: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4E8970u;
    SET_GPR_U32(ctx, 31, 0x4E8978u);
    ctx->pc = 0x4E8974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8970u;
    // 0x4e8974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4E8970u, 0x4E8978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8978u;
label_4e8978:
    // 0x4e8978: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4E8978u;
    SET_GPR_U32(ctx, 31, 0x4E8980u);
    ctx->pc = 0x4E897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8978u;
    // 0x4e897c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4E8978u, 0x4E8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8980u;
label_4e8980:
    // 0x4e8980: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4E8980u;
    SET_GPR_U32(ctx, 31, 0x4E8988u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4E8980u, 0x4E8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8988u;
label_4e8988:
    // 0x4e8988: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E8988u;
    SET_GPR_U32(ctx, 31, 0x4E8990u);
    ctx->pc = 0x4E898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8988u;
    // 0x4e898c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E8988u, 0x4E8990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8990u;
label_4e8990:
    // 0x4e8990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E8990u;
    {
        const bool branch_taken_0x4e8990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8990u;
        // 0x4e8994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8990) {
            ctx->pc = 0x4E89C4u;
            goto label_4e89c4;
        }
    }
    ctx->pc = 0x4E8998u;
label_4e8998:
    // 0x4e8998: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4E8998u;
    SET_GPR_U32(ctx, 31, 0x4E89A0u);
    ctx->pc = 0x4E899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8998u;
    // 0x4e899c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4E8998u, 0x4E89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E89A0u;
label_4e89a0:
    // 0x4e89a0: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E89A0u;
    {
        const bool branch_taken_0x4e89a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4e89a0) {
            ctx->pc = 0x4E89A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E89A0u;
            // 0x4e89a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E89C4u;
            goto label_4e89c4;
        }
    }
    ctx->pc = 0x4E89A8u;
    // 0x4e89a8: 0xc13a27c  jal         func_4E89F0
    ctx->pc = 0x4E89A8u;
    SET_GPR_U32(ctx, 31, 0x4E89B0u);
    ctx->pc = 0x4E89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E89A8u;
    // 0x4e89ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E89F0u, 0x4E89A8u, 0x4E89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E89B0u;
label_4e89b0:
    // 0x4e89b0: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4E89B0u;
    SET_GPR_U32(ctx, 31, 0x4E89B8u);
    ctx->pc = 0x4E89B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E89B0u;
    // 0x4e89b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4E89B0u, 0x4E89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E89B8u;
label_4e89b8:
    // 0x4e89b8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4E89B8u;
    SET_GPR_U32(ctx, 31, 0x4E89C0u);
    ctx->pc = 0x4E89BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E89B8u;
    // 0x4e89bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4E89B8u, 0x4E89C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E89C0u;
label_4e89c0:
    // 0x4e89c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e89c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e89c4:
    // 0x4e89c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e89c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e89c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e89c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e89cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e89ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e89d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e89d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e89d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e89d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e89d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e89d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e89dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e89dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e89e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e89e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e89e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E89E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89E4u;
        // 0x4e89e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E89E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E89ECu;
    // 0x4e89ec: 0x0  nop
    ctx->pc = 0x4e89ecu;
    // NOP
    ctx->pc = 0x4e89f0u;
}
