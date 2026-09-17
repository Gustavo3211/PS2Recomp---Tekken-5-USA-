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

// Function: sub_004A6510
// Address: 0x4a6510 - 0x4a6c18
void sub_004A6510_0x4a6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6510_0x4a6510");
#endif

    switch (ctx->pc) {
        case 0x4a656cu: goto label_4a656c;
        case 0x4a6584u: goto label_4a6584;
        case 0x4a6590u: goto label_4a6590;
        case 0x4a66b4u: goto label_4a66b4;
        case 0x4a66e8u: goto label_4a66e8;
        case 0x4a66f0u: goto label_4a66f0;
        case 0x4a6720u: goto label_4a6720;
        case 0x4a6740u: goto label_4a6740;
        case 0x4a6748u: goto label_4a6748;
        case 0x4a6794u: goto label_4a6794;
        case 0x4a67e0u: goto label_4a67e0;
        case 0x4a67f0u: goto label_4a67f0;
        case 0x4a684cu: goto label_4a684c;
        case 0x4a68b8u: goto label_4a68b8;
        case 0x4a69e0u: goto label_4a69e0;
        case 0x4a6a34u: goto label_4a6a34;
        case 0x4a6a88u: goto label_4a6a88;
        case 0x4a6ab8u: goto label_4a6ab8;
        case 0x4a6ba4u: goto label_4a6ba4;
        default: break;
    }

    ctx->pc = 0x4a6510u;

    // 0x4a6510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a6514: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4a6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4a6518: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4a6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4a651c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a651cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6520: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4a6520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4a6524: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4a6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4a6528: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4a6528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4a652c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4a652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4a6530: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4a6530u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4a6534: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4a6534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4a6538: 0x26d00c40  addiu       $s0, $s6, 0xC40
    ctx->pc = 0x4a6538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 3136));
    // 0x4a653c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4a653cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4a6540: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4a6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4a6544: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4a6544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4a6548: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4a6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4a654c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4a654cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4a6550: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4a6550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4a6554: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4a6554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x4a6558: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4a6558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4a655c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a655cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a6560: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x4a6560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4a6564: 0xc124620  jal         func_491880
    ctx->pc = 0x4A6564u;
    SET_GPR_U32(ctx, 31, 0x4A656Cu);
    ctx->pc = 0x4A6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6564u;
    // 0x4a6568: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A6564u, 0x4A656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A656Cu;
label_4a656c:
    // 0x4a656c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x4a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a6570: 0x3415bf10  ori         $s5, $zero, 0xBF10
    ctx->pc = 0x4a6570u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48912);
    // 0x4a6574: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4a6574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4a6578: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a6578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a657c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A657Cu;
    SET_GPR_U32(ctx, 31, 0x4A6584u);
    ctx->pc = 0x4A6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A657Cu;
    // 0x4a6580: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A657Cu, 0x4A6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6584u;
label_4a6584:
    // 0x4a6584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6588: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A6588u;
    SET_GPR_U32(ctx, 31, 0x4A6590u);
    ctx->pc = 0x4A658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6588u;
    // 0x4a658c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A6588u, 0x4A6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6590u;
label_4a6590:
    // 0x4a6590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a6590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a6594: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6598: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x4a6598u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4a659c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4a659cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a65a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a65a4: 0x24c40018  addiu       $a0, $a2, 0x18
    ctx->pc = 0x4a65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x4a65a8: 0xb21825  or          $v1, $a1, $s2
    ctx->pc = 0x4a65a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a65ac: 0x97b40000  lhu         $s4, 0x0($sp)
    ctx->pc = 0x4a65acu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a65b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a65b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a65b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a65b8: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x4a65b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a65bc: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a65bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a65c0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x4a65c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4a65c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A65C4u;
    {
        const bool branch_taken_0x4a65c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a65c4) {
            ctx->pc = 0x4A65C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A65C4u;
            // 0x4a65c8: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A65F0u;
            goto label_4a65f0;
        }
    }
    ctx->pc = 0x4A65CCu;
    // 0x4a65cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a65d0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a65d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a65d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a65d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a65d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a65d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a65dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a65e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a65e4: 0xa474002a  sh          $s4, 0x2A($v1)
    ctx->pc = 0x4a65e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 20));
    // 0x4a65e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4a65e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a65ec: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x4a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4a65f0:
    // 0x4a65f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a65f4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a65f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a65f8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a65f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a65fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a65fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6600: 0xb21025  or          $v0, $a1, $s2
    ctx->pc = 0x4a6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a6604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6608: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a6608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a660c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4a660cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a6610: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x4a6610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x4a6614: 0x504000b7  beql        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x4A6614u;
    {
        const bool branch_taken_0x4a6614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6614) {
            ctx->pc = 0x4A6618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6614u;
            // 0x4a6618: 0x26d60c40  addiu       $s6, $s6, 0xC40 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A68F4u;
            goto label_4a68f4;
        }
    }
    ctx->pc = 0x4A661Cu;
    // 0x4a661c: 0x24c8002c  addiu       $t0, $a2, 0x2C
    ctx->pc = 0x4a661cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x4a6620: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x4a6620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6624: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4a6624u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a6628: 0xb21825  or          $v1, $a1, $s2
    ctx->pc = 0x4a6628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a662c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4a662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a6630: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a6630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6634: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4a6634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a6638: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x4a6638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x4a663c: 0x504000ad  beql        $v0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x4A663Cu;
    {
        const bool branch_taken_0x4a663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a663c) {
            ctx->pc = 0x4A6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A663Cu;
            // 0x4a6640: 0x26d60c40  addiu       $s6, $s6, 0xC40 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A68F4u;
            goto label_4a68f4;
        }
    }
    ctx->pc = 0x4A6644u;
    // 0x4a6644: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4a6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4a6648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a664c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a6650: 0x142c00  sll         $a1, $s4, 16
    ctx->pc = 0x4a6650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x4a6654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6658: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4a6658u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4a665c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a665cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6660: 0x24117fff  addiu       $s1, $zero, 0x7FFF
    ctx->pc = 0x4a6660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a6664: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x4a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x4a6668: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a6668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a666c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4a666cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a6670: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a6670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a6674: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x4a6674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x4a6678: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x4a6678u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a667c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4a667cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a6680: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4a6680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a6684: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6688: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a6688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a668c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a6690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6694: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a6694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a6698: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x4a6698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4a669c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a66a0: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a66a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a66a4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a66a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a66a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a66ac: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A66ACu;
    SET_GPR_U32(ctx, 31, 0x4A66B4u);
    ctx->pc = 0x4A66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A66ACu;
    // 0x4a66b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A66ACu, 0x4A66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A66B4u;
label_4a66b4:
    // 0x4a66b4: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4a66b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a66b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a66bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a66c0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a66c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a66c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a66c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a66c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a66cc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a66ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a66d0: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4a66d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a66d4: 0x4400084  bltz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x4A66D4u;
    {
        const bool branch_taken_0x4a66d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66D4u;
        // 0x4a66d8: 0x11bc00  sll         $s7, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66d4) {
            ctx->pc = 0x4A68E8u;
            goto label_4a68e8;
        }
    }
    ctx->pc = 0x4A66DCu;
    // 0x4a66dc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a66dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a66e0: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x4a66e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a66e4: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x4a66e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a66e8:
    // 0x4a66e8: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x4A66E8u;
    SET_GPR_U32(ctx, 31, 0x4A66F0u);
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x4A66E8u, 0x4A66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A66F0u;
label_4a66f0:
    // 0x4a66f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a66f4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a66f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4a66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a66fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a66fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6700: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6704: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4a6704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4a6708: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4a6708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a670c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6710: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a6710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a6714: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4a6714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4a6718: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A6718u;
    SET_GPR_U32(ctx, 31, 0x4A6720u);
    ctx->pc = 0x4A671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6718u;
    // 0x4a671c: 0x86640000  lh          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A6718u, 0x4A6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6720u;
label_4a6720:
    // 0x4a6720: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4a6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6724: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4a6724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a6728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a672c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a672cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a6730: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4a6730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a6734: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a6734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a6738: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A6738u;
    SET_GPR_U32(ctx, 31, 0x4A6740u);
    ctx->pc = 0x4A673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6738u;
    // 0x4a673c: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A6738u, 0x4A6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6740u;
label_4a6740:
    // 0x4a6740: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x4A6740u;
    SET_GPR_U32(ctx, 31, 0x4A6748u);
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x4A6740u, 0x4A6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6748u;
label_4a6748:
    // 0x4a6748: 0x172c03  sra         $a1, $s7, 16
    ctx->pc = 0x4a6748u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 23), 16));
    // 0x4a674c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6750: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a6754: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x4a6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a6758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a675c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a675cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6760: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6764: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a6764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a676c: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4a676cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6770: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a6770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a6774: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a6778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a677c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6780: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x4a6780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6784: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a6784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a6788: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a6788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a678c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A678Cu;
    SET_GPR_U32(ctx, 31, 0x4A6794u);
    ctx->pc = 0x4A6790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A678Cu;
    // 0x4a6790: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A678Cu, 0x4A6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6794u;
label_4a6794:
    // 0x4a6794: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4a6794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a6798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a679c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a67a0: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x4a67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x4a67a4: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4a67a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a67a8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a67a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a67ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a67acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a67b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a67b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a67b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a67b8: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4a67b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a67bc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4a67bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a67c0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4a67c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4a67c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4a67c8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a67c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a67cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4a67d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a67d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a67d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a67d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A67D8u;
    SET_GPR_U32(ctx, 31, 0x4A67E0u);
    ctx->pc = 0x4A67DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67D8u;
    // 0x4a67dc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A67D8u, 0x4A67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A67E0u;
label_4a67e0:
    // 0x4a67e0: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x4a67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a67e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a67e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a67e8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A67E8u;
    SET_GPR_U32(ctx, 31, 0x4A67F0u);
    ctx->pc = 0x4A67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67E8u;
    // 0x4a67ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A67E8u, 0x4A67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A67F0u;
label_4a67f0:
    // 0x4a67f0: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x4a67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x4a67f4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a67f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a67f8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a67f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a67fc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a67fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6800: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x4a6800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6804: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6804u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6808: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a680c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4a680cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a6810: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6814: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4a6814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4a6818: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4a6818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a681c: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x4a6820: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a6820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6824: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a6824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a6828: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a682c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6830: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4a6830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4a6834: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4a6834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a6838: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4a6838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4a683c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a683cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a6840: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4a6840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4a6844: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A6844u;
    SET_GPR_U32(ctx, 31, 0x4A684Cu);
    ctx->pc = 0x4A6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6844u;
    // 0x4a6848: 0x87a40008  lh          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A6844u, 0x4A684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A684Cu;
label_4a684c:
    // 0x4a684c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6850: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a6850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a6854: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a6858: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a6858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a685c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a685cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6860: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4a6860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6864: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a6864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a6868: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4a6868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a686c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a6870: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a6870u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6874: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a6874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6878: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a687c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a687cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6880: 0x215282b  sltu        $a1, $s0, $s5
    ctx->pc = 0x4a6880u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a6884: 0x8ec40c40  lw          $a0, 0xC40($s6)
    ctx->pc = 0x4a6884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3136)));
    // 0x4a6888: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4a6888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4a688c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6890: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x4a6890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a6894: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a6894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a6898: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a6898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a689c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4a689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a68a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a68a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a68a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a68a8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A68A8u;
    {
        const bool branch_taken_0x4a68a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A68A8u;
        // 0x4a68ac: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a68a8) {
            ctx->pc = 0x4A68C0u;
            goto label_4a68c0;
        }
    }
    ctx->pc = 0x4A68B0u;
    // 0x4a68b0: 0xc124620  jal         func_491880
    ctx->pc = 0x4A68B0u;
    SET_GPR_U32(ctx, 31, 0x4A68B8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A68B0u, 0x4A68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A68B8u;
label_4a68b8:
    // 0x4a68b8: 0x34109800  ori         $s0, $zero, 0x9800
    ctx->pc = 0x4a68b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x4a68bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4a68bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a68c0:
    // 0x4a68c0: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4a68c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a68c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a68c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a68cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a68ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a68d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a68d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a68d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a68d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a68d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4a68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4a68dc: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4a68dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a68e0: 0x441ff81  bgez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x4A68E0u;
    {
        const bool branch_taken_0x4a68e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4a68e0) {
            ctx->pc = 0x4A66E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a66e8;
        }
    }
    ctx->pc = 0x4A68E8u;
label_4a68e8:
    // 0x4a68e8: 0x8ec20c40  lw          $v0, 0xC40($s6)
    ctx->pc = 0x4a68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3136)));
    // 0x4a68ec: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x4a68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x4a68f0: 0x26d60c40  addiu       $s6, $s6, 0xC40
    ctx->pc = 0x4a68f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3136));
label_4a68f4:
    // 0x4a68f4: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4a68f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4a68f8: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4a68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a68fc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a68fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6900: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a6900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a6904: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4a6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a6908: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a690c: 0x104500b5  beq         $v0, $a1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x4A690Cu;
    {
        const bool branch_taken_0x4a690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A690Cu;
        // 0x4a6910: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a690c) {
            ctx->pc = 0x4A6BE4u;
            goto label_4a6be4;
        }
    }
    ctx->pc = 0x4A6914u;
    // 0x4a6914: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x4a6914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x4a6918: 0x26f3d680  addiu       $s3, $s7, -0x2980
    ctx->pc = 0x4a6918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x4a691c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a691cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6920: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x4a6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x4a6924: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a6924u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6928: 0x8e700040  lw          $s0, 0x40($s3)
    ctx->pc = 0x4a6928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x4a692c: 0x2442003e  addiu       $v0, $v0, 0x3E
    ctx->pc = 0x4a692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
    // 0x4a6930: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4a6930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4a6934: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a6934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4a6938: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a6938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a693c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4a693cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a6940: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a6940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a6944: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x4a6944u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
    // 0x4a6948: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a694c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4a694cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4a6950: 0x8485001a  lh          $a1, 0x1A($a0)
    ctx->pc = 0x4a6950u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4a6954: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4a6954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6958: 0xb21825  or          $v1, $a1, $s2
    ctx->pc = 0x4a6958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a695c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4a695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a6960: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a6960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6964: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x4a6964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6968: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4a6968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4a696c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A696Cu;
    {
        const bool branch_taken_0x4a696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A696Cu;
        // 0x4a6970: 0x97a50008  lhu         $a1, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a696c) {
            ctx->pc = 0x4A6988u;
            goto label_4a6988;
        }
    }
    ctx->pc = 0x4A6974u;
    // 0x4a6974: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x4a6974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4a6978: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4a6978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4a697c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a6980: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4a6980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4a6984: 0x97a50008  lhu         $a1, 0x8($sp)
    ctx->pc = 0x4a6984u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
label_4a6988:
    // 0x4a6988: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4a6988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a698c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6990: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4a6990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6994: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a6994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a6998: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a699c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a699cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a69a0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a69a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a69a4: 0x34630280  ori         $v1, $v1, 0x280
    ctx->pc = 0x4a69a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)640);
    // 0x4a69a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a69a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a69ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a69acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a69b0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a69b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a69b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a69b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a69b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4a69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4a69bc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4a69bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a69c0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4a69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x4a69c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4a69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a69c8: 0x84e3002a  lh          $v1, 0x2A($a3)
    ctx->pc = 0x4a69c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 42)));
    // 0x4a69cc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4a69ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a69d0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a69d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a69d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a69d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A69D8u;
    SET_GPR_U32(ctx, 31, 0x4A69E0u);
    ctx->pc = 0x4A69DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A69D8u;
    // 0x4a69dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A69D8u, 0x4A69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A69E0u;
label_4a69e0:
    // 0x4a69e0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4a69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a69e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a69e8: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x4a69e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x4a69ec: 0x143400  sll         $a2, $s4, 16
    ctx->pc = 0x4a69ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x4a69f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a69f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a69f4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4a69f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4a69f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a69f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a69fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6a00: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4a6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4a6a04: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x4a6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4a6a08: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x4a6a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6a0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6a10: 0x87a3000c  lh          $v1, 0xC($sp)
    ctx->pc = 0x4a6a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6a14: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4a6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4a6a18: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4a6a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a6a1c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4a6a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a6a20: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a6a24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4a6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4a6a28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a6a2c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A6A2Cu;
    SET_GPR_U32(ctx, 31, 0x4A6A34u);
    ctx->pc = 0x4A6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6A2Cu;
    // 0x4a6a30: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A6A2Cu, 0x4A6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6A34u;
label_4a6a34:
    // 0x4a6a34: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x4a6a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6a38: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4a6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6a3c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x4a6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x4a6a40: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x4a6a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x4a6a44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a6a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a6a48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6a4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6a50: 0x87a50008  lh          $a1, 0x8($sp)
    ctx->pc = 0x4a6a50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6a54: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4a6a58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6a5c: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x4a6a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6a60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a6a64: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a6a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a6a68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6a6c: 0x4a00059  bltz        $a1, . + 4 + (0x59 << 2)
    ctx->pc = 0x4A6A6Cu;
    {
        const bool branch_taken_0x4a6a6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4A6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A6Cu;
        // 0x4a6a70: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a6c) {
            ctx->pc = 0x4A6BD4u;
            goto label_4a6bd4;
        }
    }
    ctx->pc = 0x4A6A74u;
    // 0x4a6a74: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x4a6a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6a78: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a6a78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6a7c: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x4a6a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a6a80: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x4a6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4a6a84: 0x0  nop
    ctx->pc = 0x4a6a84u;
    // NOP
label_4a6a88:
    // 0x4a6a88: 0x97a30010  lhu         $v1, 0x10($sp)
    ctx->pc = 0x4a6a88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a6a8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a6a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a6a90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a6a94: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4a6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a6a98: 0x4810017  bgez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A6A98u;
    {
        const bool branch_taken_0x4a6a98 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4A6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6A98u;
        // 0x4a6a9c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6a98) {
            ctx->pc = 0x4A6AF8u;
            goto label_4a6af8;
        }
    }
    ctx->pc = 0x4A6AA0u;
    // 0x4a6aa0: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x4a6aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x4a6aa4: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x4a6aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a6aa8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A6AA8u;
    {
        const bool branch_taken_0x4a6aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6aa8) {
            ctx->pc = 0x4A6AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6AA8u;
            // 0x4a6aac: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6AC4u;
            goto label_4a6ac4;
        }
    }
    ctx->pc = 0x4A6AB0u;
    // 0x4a6ab0: 0xc124620  jal         func_491880
    ctx->pc = 0x4A6AB0u;
    SET_GPR_U32(ctx, 31, 0x4A6AB8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A6AB0u, 0x4A6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6AB8u;
label_4a6ab8:
    // 0x4a6ab8: 0x34119800  ori         $s1, $zero, 0x9800
    ctx->pc = 0x4a6ab8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x4a6abc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a6abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4a6ac0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a6ac4:
    // 0x4a6ac4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a6ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6ac8: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x4a6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x4a6acc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4a6accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a6ad0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4a6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4a6ad4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6ad8: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x4a6ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4a6adc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a6adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a6ae0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a6ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6ae8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6aec: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4A6AECu;
    {
        const bool branch_taken_0x4a6aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AECu;
        // 0x4a6af0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6aec) {
            ctx->pc = 0x4A6BACu;
            goto label_4a6bac;
        }
    }
    ctx->pc = 0x4A6AF4u;
    // 0x4a6af4: 0x0  nop
    ctx->pc = 0x4a6af4u;
    // NOP
label_4a6af8:
    // 0x4a6af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a6afc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a6b00: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b04: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b08: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x4a6b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a6b0c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b10: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b14: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x4a6b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6b18: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b1c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a6b1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6b20: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a6b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a6b24: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b28: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b2c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a6b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6b30: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a6b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a6b34: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b38: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b3c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a6b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6b40: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a6b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a6b44: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b48: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b4c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x4a6b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6b50: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b54: 0xa6130000  sh          $s3, 0x0($s0)
    ctx->pc = 0x4a6b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4a6b58: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b5c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x4a6b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6b60: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b64: 0xa6130000  sh          $s3, 0x0($s0)
    ctx->pc = 0x4a6b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x4a6b68: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b6c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a6b6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6b70: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a6b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a6b74: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b78: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b7c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a6b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6b80: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a6b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a6b84: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x4a6b84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4a6b88: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6b8c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a6b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a6b90: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x4a6b90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a6b94: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A6B94u;
    {
        const bool branch_taken_0x4a6b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B94u;
        // 0x4a6b98: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b94) {
            ctx->pc = 0x4A6BACu;
            goto label_4a6bac;
        }
    }
    ctx->pc = 0x4A6B9Cu;
    // 0x4a6b9c: 0xc124620  jal         func_491880
    ctx->pc = 0x4A6B9Cu;
    SET_GPR_U32(ctx, 31, 0x4A6BA4u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A6B9Cu, 0x4A6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6BA4u;
label_4a6ba4:
    // 0x4a6ba4: 0x34119800  ori         $s1, $zero, 0x9800
    ctx->pc = 0x4a6ba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x4a6ba8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a6ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a6bac:
    // 0x4a6bac: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x4a6bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6bb0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6bb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a6bb8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a6bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a6bbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6bc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a6bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6bc4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4a6bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4a6bc8: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x4a6bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6bcc: 0x441ffae  bgez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x4A6BCCu;
    {
        const bool branch_taken_0x4a6bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BCCu;
        // 0x4a6bd0: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bcc) {
            ctx->pc = 0x4A6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6a88;
        }
    }
    ctx->pc = 0x4A6BD4u;
label_4a6bd4:
    // 0x4a6bd4: 0x26e3d680  addiu       $v1, $s7, -0x2980
    ctx->pc = 0x4a6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x4a6bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a6bdc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4a6bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6be0: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x4a6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 16));
label_4a6be4:
    // 0x4a6be4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4a6be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6be8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4a6be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a6bec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4a6becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6bf0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4a6bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a6bf4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4a6bf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a6bf8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4a6bf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a6bfc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4a6bfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a6c00: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4a6c00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a6c04: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4a6c04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a6c08: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4a6c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4a6c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C0Cu;
        // 0x4a6c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6C14u;
    // 0x4a6c14: 0x0  nop
    ctx->pc = 0x4a6c14u;
    // NOP
    ctx->pc = 0x4a6c18u;
}
