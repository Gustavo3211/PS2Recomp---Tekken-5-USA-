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

// Function: sub_002644C8
// Address: 0x2644c8 - 0x264d58
void sub_002644C8_0x2644c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644C8_0x2644c8");
#endif

    switch (ctx->pc) {
        case 0x2644fcu: goto label_2644fc;
        case 0x264514u: goto label_264514;
        case 0x2646a8u: goto label_2646a8;
        case 0x2647ecu: goto label_2647ec;
        case 0x2649e0u: goto label_2649e0;
        case 0x264a20u: goto label_264a20;
        case 0x264a58u: goto label_264a58;
        case 0x264b18u: goto label_264b18;
        case 0x264b78u: goto label_264b78;
        case 0x264c28u: goto label_264c28;
        case 0x264c88u: goto label_264c88;
        default: break;
    }

    ctx->pc = 0x2644c8u;

    // 0x2644c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2644cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2644ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2644d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2644d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2644d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2644d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2644d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2644d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2644dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2644dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2644e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2644e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2644e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2644e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2644e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2644e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2644ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2644ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2644f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2644f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2644f4: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2644F4u;
    SET_GPR_U32(ctx, 31, 0x2644FCu);
    ctx->pc = 0x2644F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644F4u;
    // 0x2644f8: 0x9664003c  lhu         $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2644F4u, 0x2644FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644FCu;
label_2644fc:
    // 0x2644fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264500: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x264500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x264504: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x264504u;
    {
        const bool branch_taken_0x264504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264504) {
            ctx->pc = 0x264508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264504u;
            // 0x264508: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264518u;
            goto label_264518;
        }
    }
    ctx->pc = 0x26450Cu;
    // 0x26450c: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x26450Cu;
    SET_GPR_U32(ctx, 31, 0x264514u);
    ctx->pc = 0x264510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26450Cu;
    // 0x264510: 0x9664003c  lhu         $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x26450Cu, 0x264514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264514u;
label_264514:
    // 0x264514: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x264514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_264518:
    // 0x264518: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x264518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x26451c: 0x2404048c  addiu       $a0, $zero, 0x48C
    ctx->pc = 0x26451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x264520: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x264520u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x264524: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x264524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x264528: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x264528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26452c: 0x268383c0  addiu       $v1, $s4, -0x7C40
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x264530: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x264530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264538: 0x8c710038  lw          $s1, 0x38($v1)
    ctx->pc = 0x264538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x26453c: 0x38c40002  xori        $a0, $a2, 0x2
    ctx->pc = 0x26453cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x264540: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x264540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x264544: 0x2421ee00  addiu       $at, $at, -0x1200
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962688));
    // 0x264548: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x264548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x26454c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x26454cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x264550: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264550u;
    {
        const bool branch_taken_0x264550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x264554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264550u;
        // 0x264554: 0xaf82aa78  sw          $v0, -0x5588($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264550) {
            ctx->pc = 0x264564u;
            goto label_264564;
        }
    }
    ctx->pc = 0x264558u;
    // 0x264558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26455c: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26455Cu;
    {
        const bool branch_taken_0x26455c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x26455c) {
            ctx->pc = 0x264568u;
            goto label_264568;
        }
    }
    ctx->pc = 0x264564u;
label_264564:
    // 0x264564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264568:
    // 0x264568: 0x54e00108  bnel        $a3, $zero, . + 4 + (0x108 << 2)
    ctx->pc = 0x264568u;
    {
        const bool branch_taken_0x264568 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x264568) {
            ctx->pc = 0x26456Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264568u;
            // 0x26456c: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26498Cu;
            goto label_26498c;
        }
    }
    ctx->pc = 0x264570u;
    // 0x264570: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264570u;
    {
        const bool branch_taken_0x264570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x264574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264570u;
        // 0x264574: 0x268383c0  addiu       $v1, $s4, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264570) {
            ctx->pc = 0x264590u;
            goto label_264590;
        }
    }
    ctx->pc = 0x264578u;
    // 0x264578: 0x268483c0  addiu       $a0, $s4, -0x7C40
    ctx->pc = 0x264578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x26457c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264580: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x264580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x264584: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x264584u;
    {
        const bool branch_taken_0x264584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264584) {
            ctx->pc = 0x2647A8u;
            goto label_2647a8;
        }
    }
    ctx->pc = 0x26458Cu;
    // 0x26458c: 0x268383c0  addiu       $v1, $s4, -0x7C40
    ctx->pc = 0x26458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
label_264590:
    // 0x264590: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264594: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x264594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x264598: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264598u;
    {
        const bool branch_taken_0x264598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264598u;
        // 0x26459c: 0x2e220009  sltiu       $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264598) {
            ctx->pc = 0x2645B8u;
            goto label_2645b8;
        }
    }
    ctx->pc = 0x2645A0u;
    // 0x2645a0: 0x8c7100d8  lw          $s1, 0xD8($v1)
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2645a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2645a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2645a8: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2645ac: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2645b0: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2645b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2645b4: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x2645b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2645b8:
    // 0x2645b8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2645B8u;
    {
        const bool branch_taken_0x2645b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645b8) {
            ctx->pc = 0x2645BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2645B8u;
            // 0x2645bc: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x2645C0u;
    // 0x2645c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2645c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2645c4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2645c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2645c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2645c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2645cc: 0x8c6329b0  lw          $v1, 0x29B0($v1)
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10672)));
    // 0x2645d0: 0x600008  jr          $v1
    ctx->pc = 0x2645D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2645D8u: goto label_2645d8;
            case 0x2645E0u: goto label_2645e0;
            case 0x2645E8u: goto label_2645e8;
            case 0x2645F0u: goto label_2645f0;
            case 0x2645F8u: goto label_2645f8;
            case 0x264600u: goto label_264600;
            case 0x264608u: goto label_264608;
            case 0x264610u: goto label_264610;
            case 0x264618u: goto label_264618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2645D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2645D8u;
label_2645d8:
    // 0x2645d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2645D8u;
    {
        const bool branch_taken_0x2645d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645D8u;
        // 0x2645dc: 0x2610fff5  addiu       $s0, $s0, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645d8) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x2645E0u;
label_2645e0:
    // 0x2645e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2645E0u;
    {
        const bool branch_taken_0x2645e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E0u;
        // 0x2645e4: 0x2610fff6  addiu       $s0, $s0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645e0) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x2645E8u;
label_2645e8:
    // 0x2645e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2645E8u;
    {
        const bool branch_taken_0x2645e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E8u;
        // 0x2645ec: 0x2610fff9  addiu       $s0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645e8) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x2645F0u;
label_2645f0:
    // 0x2645f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2645F0u;
    {
        const bool branch_taken_0x2645f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645F0u;
        // 0x2645f4: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645f0) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x2645F8u;
label_2645f8:
    // 0x2645f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2645F8u;
    {
        const bool branch_taken_0x2645f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645F8u;
        // 0x2645fc: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645f8) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x264600u;
label_264600:
    // 0x264600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264600u;
    {
        const bool branch_taken_0x264600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264600u;
        // 0x264604: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264600) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x264608u;
label_264608:
    // 0x264608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264608u;
    {
        const bool branch_taken_0x264608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264608u;
        // 0x26460c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264608) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x264610u;
label_264610:
    // 0x264610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x264610u;
    {
        const bool branch_taken_0x264610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264610u;
        // 0x264614: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264610) {
            ctx->pc = 0x26461Cu;
            goto label_26461c;
        }
    }
    ctx->pc = 0x264618u;
label_264618:
    // 0x264618: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x264618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26461c:
    // 0x26461c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x26461cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x264620: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x264620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264624: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x264624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x264628: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x264628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x26462c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26462Cu;
    {
        const bool branch_taken_0x26462c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x264630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26462Cu;
        // 0x264630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26462c) {
            ctx->pc = 0x264658u;
            goto label_264658;
        }
    }
    ctx->pc = 0x264634u;
    // 0x264634: 0x12220045  beq         $s1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x264634u;
    {
        const bool branch_taken_0x264634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x264638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264634u;
        // 0x264638: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264634) {
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x26463Cu;
    // 0x26463c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x26463cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264640: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x264640u;
    {
        const bool branch_taken_0x264640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264640u;
        // 0x264644: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264640) {
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x264648u;
    // 0x264648: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x264648u;
    {
        const bool branch_taken_0x264648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264648u;
        // 0x26464c: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264648) {
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x264650u;
    // 0x264650: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x264650u;
    {
        const bool branch_taken_0x264650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264650u;
        // 0x264654: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264650) {
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x264658u;
label_264658:
    // 0x264658: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x264658u;
    {
        const bool branch_taken_0x264658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264658u;
        // 0x26465c: 0x26438858  addiu       $v1, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264658) {
            ctx->pc = 0x264690u;
            goto label_264690;
        }
    }
    ctx->pc = 0x264660u;
    // 0x264660: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x264660u;
    {
        const bool branch_taken_0x264660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264660) {
            ctx->pc = 0x264664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264660u;
            // 0x264664: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264690u;
            goto label_264690;
        }
    }
    ctx->pc = 0x264668u;
    // 0x264668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26466c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26466Cu;
    {
        const bool branch_taken_0x26466c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x264670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26466Cu;
        // 0x264670: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26466c) {
            ctx->pc = 0x264688u;
            goto label_264688;
        }
    }
    ctx->pc = 0x264674u;
    // 0x264674: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264674u;
    {
        const bool branch_taken_0x264674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x264674) {
            ctx->pc = 0x264678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264674u;
            // 0x264678: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264690u;
            goto label_264690;
        }
    }
    ctx->pc = 0x26467Cu;
    // 0x26467c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26467Cu;
    {
        const bool branch_taken_0x26467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26467Cu;
        // 0x264680: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26467c) {
            ctx->pc = 0x264694u;
            goto label_264694;
        }
    }
    ctx->pc = 0x264684u;
    // 0x264684: 0x0  nop
    ctx->pc = 0x264684u;
    // NOP
label_264688:
    // 0x264688: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x264688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x26468c: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x26468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
label_264690:
    // 0x264690: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x264690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_264694:
    // 0x264694: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x264694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x264698: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x264698u;
    {
        const bool branch_taken_0x264698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264698) {
            ctx->pc = 0x2646F8u;
            goto label_2646f8;
        }
    }
    ctx->pc = 0x2646A0u;
    // 0x2646a0: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2646A0u;
    SET_GPR_U32(ctx, 31, 0x2646A8u);
    ctx->pc = 0x2646A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646A0u;
    // 0x2646a4: 0x9664003c  lhu         $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2646A0u, 0x2646A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646A8u;
label_2646a8:
    // 0x2646a8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2646a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2646ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2646ACu;
    {
        const bool branch_taken_0x2646ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646ac) {
            ctx->pc = 0x2646F8u;
            goto label_2646f8;
        }
    }
    ctx->pc = 0x2646B4u;
    // 0x2646b4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2646B4u;
    {
        const bool branch_taken_0x2646b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646B4u;
        // 0x2646b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646b4) {
            ctx->pc = 0x2646C4u;
            goto label_2646c4;
        }
    }
    ctx->pc = 0x2646BCu;
    // 0x2646bc: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2646BCu;
    {
        const bool branch_taken_0x2646bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2646C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646BCu;
        // 0x2646c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646bc) {
            ctx->pc = 0x2646D8u;
            goto label_2646d8;
        }
    }
    ctx->pc = 0x2646C4u;
label_2646c4:
    // 0x2646c4: 0x5e000021  bgtzl       $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2646C4u;
    {
        const bool branch_taken_0x2646c4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2646c4) {
            ctx->pc = 0x2646C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646C4u;
            // 0x2646c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x2646CCu;
    // 0x2646cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2646CCu;
    {
        const bool branch_taken_0x2646cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646CCu;
        // 0x2646d0: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646cc) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x2646D4u;
    // 0x2646d4: 0x0  nop
    ctx->pc = 0x2646d4u;
    // NOP
label_2646d8:
    // 0x2646d8: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2646D8u;
    {
        const bool branch_taken_0x2646d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2646DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646D8u;
        // 0x2646dc: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646d8) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x2646E0u;
    // 0x2646e0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2646e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2646e4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2646E4u;
    {
        const bool branch_taken_0x2646e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646e4) {
            ctx->pc = 0x2646E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646E4u;
            // 0x2646e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x2646ECu;
    // 0x2646ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2646ECu;
    {
        const bool branch_taken_0x2646ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646ECu;
        // 0x2646f0: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646ec) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x2646F4u;
    // 0x2646f4: 0x0  nop
    ctx->pc = 0x2646f4u;
    // NOP
label_2646f8:
    // 0x2646f8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2646F8u;
    {
        const bool branch_taken_0x2646f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646F8u;
        // 0x2646fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646f8) {
            ctx->pc = 0x264718u;
            goto label_264718;
        }
    }
    ctx->pc = 0x264700u;
    // 0x264700: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x264700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x264704: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x264704u;
    {
        const bool branch_taken_0x264704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264704) {
            ctx->pc = 0x264708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264704u;
            // 0x264708: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x26470Cu;
    // 0x26470c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26470Cu;
    {
        const bool branch_taken_0x26470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26470Cu;
        // 0x264710: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26470c) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264714u;
    // 0x264714: 0x0  nop
    ctx->pc = 0x264714u;
    // NOP
label_264718:
    // 0x264718: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264718u;
    {
        const bool branch_taken_0x264718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264718u;
        // 0x26471c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264718) {
            ctx->pc = 0x264738u;
            goto label_264738;
        }
    }
    ctx->pc = 0x264720u;
    // 0x264720: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x264720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x264724: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x264724u;
    {
        const bool branch_taken_0x264724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264724) {
            ctx->pc = 0x264728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264724u;
            // 0x264728: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x26472Cu;
    // 0x26472c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26472Cu;
    {
        const bool branch_taken_0x26472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26472Cu;
        // 0x264730: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26472c) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264734u;
    // 0x264734: 0x0  nop
    ctx->pc = 0x264734u;
    // NOP
label_264738:
    // 0x264738: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264738u;
    {
        const bool branch_taken_0x264738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264738u;
        // 0x26473c: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264738) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264740u;
    // 0x264740: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x264740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x264744: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x264744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x264748: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x264748u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_26474c:
    // 0x26474c: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x26474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
label_264750:
    // 0x264750: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x264750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264754: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x264754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x264758: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264758u;
    {
        const bool branch_taken_0x264758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264758u;
        // 0x26475c: 0x26428858  addiu       $v0, $s2, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264758) {
            ctx->pc = 0x264778u;
            goto label_264778;
        }
    }
    ctx->pc = 0x264760u;
    // 0x264760: 0x268383c0  addiu       $v1, $s4, -0x7C40
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x264764: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x264764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x264768: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x264768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26476c: 0x504000dc  beql        $v0, $zero, . + 4 + (0xDC << 2)
    ctx->pc = 0x26476Cu;
    {
        const bool branch_taken_0x26476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26476c) {
            ctx->pc = 0x264770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26476Cu;
            // 0x264770: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x264774u;
    // 0x264774: 0x26428858  addiu       $v0, $s2, -0x77A8
    ctx->pc = 0x264774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
label_264778:
    // 0x264778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x264778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26477c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x26477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x264780: 0x146400d8  bne         $v1, $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x264780u;
    {
        const bool branch_taken_0x264780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x264784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264780u;
        // 0x264784: 0x2a060014  slti        $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264780) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264788u;
    // 0x264788: 0x268383c0  addiu       $v1, $s4, -0x7C40
    ctx->pc = 0x264788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x26478c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x264790: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x264790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x264794: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x264794u;
    {
        const bool branch_taken_0x264794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264794u;
        // 0x264798: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264794) {
            ctx->pc = 0x264AE8u;
            goto label_264ae8;
        }
    }
    ctx->pc = 0x26479Cu;
    // 0x26479c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x26479Cu;
    {
        const bool branch_taken_0x26479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26479Cu;
        // 0x2647a0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26479c) {
            ctx->pc = 0x264AE8u;
            goto label_264ae8;
        }
    }
    ctx->pc = 0x2647A4u;
    // 0x2647a4: 0x0  nop
    ctx->pc = 0x2647a4u;
    // NOP
label_2647a8:
    // 0x2647a8: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2647A8u;
    {
        const bool branch_taken_0x2647a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647A8u;
        // 0x2647ac: 0x38620005  xori        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647a8) {
            ctx->pc = 0x2648F8u;
            goto label_2648f8;
        }
    }
    ctx->pc = 0x2647B0u;
    // 0x2647b0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2647b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2647B4u;
    {
        const bool branch_taken_0x2647b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2647B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647B4u;
        // 0x2647b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647b4) {
            ctx->pc = 0x2647C8u;
            goto label_2647c8;
        }
    }
    ctx->pc = 0x2647BCu;
    // 0x2647bc: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x2647bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x2647c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2647c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2647c4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2647c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2647c8:
    // 0x2647c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2647C8u;
    {
        const bool branch_taken_0x2647c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647c8) {
            ctx->pc = 0x2647E4u;
            goto label_2647e4;
        }
    }
    ctx->pc = 0x2647D0u;
    // 0x2647d0: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x2647d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x2647d4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2647d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2647d8: 0x50430157  beql        $v0, $v1, . + 4 + (0x157 << 2)
    ctx->pc = 0x2647D8u;
    {
        const bool branch_taken_0x2647d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2647d8) {
            ctx->pc = 0x2647DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647D8u;
            // 0x2647dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264D38u;
            goto label_264d38;
        }
    }
    ctx->pc = 0x2647E0u;
    // 0x2647e0: 0xac8301bc  sw          $v1, 0x1BC($a0)
    ctx->pc = 0x2647e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 3));
label_2647e4:
    // 0x2647e4: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2647E4u;
    SET_GPR_U32(ctx, 31, 0x2647ECu);
    ctx->pc = 0x2647E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647E4u;
    // 0x2647e8: 0x9644003c  lhu         $a0, 0x3C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2647E4u, 0x2647ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647ECu;
label_2647ec:
    // 0x2647ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2647ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647f0: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x2647f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2647f4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2647F4u;
    {
        const bool branch_taken_0x2647f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647f4) {
            ctx->pc = 0x2647F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647F4u;
            // 0x2647f8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x2647FCu;
    // 0x2647fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x264800: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x264804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264808: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x264808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x26480c: 0x600008  jr          $v1
    ctx->pc = 0x26480Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264818u: goto label_264818;
            case 0x264820u: goto label_264820;
            case 0x264828u: goto label_264828;
            case 0x264830u: goto label_264830;
            case 0x264838u: goto label_264838;
            case 0x264840u: goto label_264840;
            case 0x264848u: goto label_264848;
            case 0x264850u: goto label_264850;
            case 0x264858u: goto label_264858;
            case 0x264860u: goto label_264860;
            case 0x264868u: goto label_264868;
            case 0x264870u: goto label_264870;
            case 0x264878u: goto label_264878;
            case 0x264880u: goto label_264880;
            case 0x264888u: goto label_264888;
            case 0x264890u: goto label_264890;
            case 0x264898u: goto label_264898;
            case 0x2648A0u: goto label_2648a0;
            case 0x2648A4u: goto label_2648a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26480Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264814u;
    // 0x264814: 0x0  nop
    ctx->pc = 0x264814u;
    // NOP
label_264818:
    // 0x264818: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x264818u;
    {
        const bool branch_taken_0x264818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264818u;
        // 0x26481c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264818) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264820u;
label_264820:
    // 0x264820: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x264820u;
    {
        const bool branch_taken_0x264820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264820u;
        // 0x264824: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264820) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264828u;
label_264828:
    // 0x264828: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x264828u;
    {
        const bool branch_taken_0x264828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264828u;
        // 0x26482c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264828) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264830u;
label_264830:
    // 0x264830: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x264830u;
    {
        const bool branch_taken_0x264830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264830u;
        // 0x264834: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264830) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264838u;
label_264838:
    // 0x264838: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x264838u;
    {
        const bool branch_taken_0x264838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264838u;
        // 0x26483c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264838) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264840u;
label_264840:
    // 0x264840: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x264840u;
    {
        const bool branch_taken_0x264840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264840u;
        // 0x264844: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264840) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264848u;
label_264848:
    // 0x264848: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x264848u;
    {
        const bool branch_taken_0x264848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264848u;
        // 0x26484c: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264848) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264850u;
label_264850:
    // 0x264850: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x264850u;
    {
        const bool branch_taken_0x264850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264850u;
        // 0x264854: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264850) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264858u;
label_264858:
    // 0x264858: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x264858u;
    {
        const bool branch_taken_0x264858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264858u;
        // 0x26485c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264858) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264860u;
label_264860:
    // 0x264860: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x264860u;
    {
        const bool branch_taken_0x264860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264860u;
        // 0x264864: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264860) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264868u;
label_264868:
    // 0x264868: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x264868u;
    {
        const bool branch_taken_0x264868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264868u;
        // 0x26486c: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264868) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264870u;
label_264870:
    // 0x264870: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264870u;
    {
        const bool branch_taken_0x264870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264870u;
        // 0x264874: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264870) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264878u;
label_264878:
    // 0x264878: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x264878u;
    {
        const bool branch_taken_0x264878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264878u;
        // 0x26487c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264878) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264880u;
label_264880:
    // 0x264880: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x264880u;
    {
        const bool branch_taken_0x264880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264880u;
        // 0x264884: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264880) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264888u;
label_264888:
    // 0x264888: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264888u;
    {
        const bool branch_taken_0x264888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264888u;
        // 0x26488c: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264888) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264890u;
label_264890:
    // 0x264890: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x264890u;
    {
        const bool branch_taken_0x264890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264890u;
        // 0x264894: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264890) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x264898u;
label_264898:
    // 0x264898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264898u;
    {
        const bool branch_taken_0x264898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264898u;
        // 0x26489c: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264898) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x2648A0u;
label_2648a0:
    // 0x2648a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2648a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2648a4:
    // 0x2648a4: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2648a8:
    // 0x2648a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2648a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2648ac: 0x8c42888c  lw          $v0, -0x7774($v0)
    ctx->pc = 0x2648acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x2648b0: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x2648b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2648b4: 0x5060008a  beql        $v1, $zero, . + 4 + (0x8A << 2)
    ctx->pc = 0x2648B4u;
    {
        const bool branch_taken_0x2648b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648b4) {
            ctx->pc = 0x2648B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2648B4u;
            // 0x2648b8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2648BCu;
    // 0x2648bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2648bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2648c0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2648c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2648c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2648c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2648c8: 0x8c632a50  lw          $v1, 0x2A50($v1)
    ctx->pc = 0x2648c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10832)));
    // 0x2648cc: 0x600008  jr          $v1
    ctx->pc = 0x2648CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2648D8u: goto label_2648d8;
            case 0x2648E0u: goto label_2648e0;
            case 0x2648E8u: goto label_2648e8;
            case 0x2648F0u: goto label_2648f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2648CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2648D4u;
    // 0x2648d4: 0x0  nop
    ctx->pc = 0x2648d4u;
    // NOP
label_2648d8:
    // 0x2648d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2648D8u;
    {
        const bool branch_taken_0x2648d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648D8u;
        // 0x2648dc: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648d8) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2648E0u;
label_2648e0:
    // 0x2648e0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2648E0u;
    {
        const bool branch_taken_0x2648e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648E0u;
        // 0x2648e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648e0) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2648E8u;
label_2648e8:
    // 0x2648e8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2648E8u;
    {
        const bool branch_taken_0x2648e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648E8u;
        // 0x2648ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648e8) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2648F0u;
label_2648f0:
    // 0x2648f0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2648F0u;
    {
        const bool branch_taken_0x2648f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648F0u;
        // 0x2648f4: 0x26100006  addiu       $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648f0) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2648F8u;
label_2648f8:
    // 0x2648f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2648F8u;
    {
        const bool branch_taken_0x2648f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2648FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648F8u;
        // 0x2648fc: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648f8) {
            ctx->pc = 0x2649A8u;
            goto label_2649a8;
        }
    }
    ctx->pc = 0x264900u;
    // 0x264900: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x264904: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x264904u;
    {
        const bool branch_taken_0x264904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264904) {
            ctx->pc = 0x264908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264904u;
            // 0x264908: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26494Cu;
            goto label_26494c;
        }
    }
    ctx->pc = 0x26490Cu;
    // 0x26490c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x264910: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x264910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x264914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264918: 0x8c632a70  lw          $v1, 0x2A70($v1)
    ctx->pc = 0x264918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10864)));
    // 0x26491c: 0x600008  jr          $v1
    ctx->pc = 0x26491Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264928u: goto label_264928;
            case 0x264938u: goto label_264938;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264968u: goto label_264968;
            case 0x264978u: goto label_264978;
            case 0x264988u: goto label_264988;
            case 0x264998u: goto label_264998;
            case 0x264AD0u: goto label_264ad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26491Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264924u;
    // 0x264924: 0x0  nop
    ctx->pc = 0x264924u;
    // NOP
label_264928:
    // 0x264928: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26492c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x26492Cu;
    {
        const bool branch_taken_0x26492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26492Cu;
        // 0x264930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26492c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264934u;
    // 0x264934: 0x0  nop
    ctx->pc = 0x264934u;
    // NOP
label_264938:
    // 0x264938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x264938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26493c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x26493Cu;
    {
        const bool branch_taken_0x26493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26493Cu;
        // 0x264940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26493c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264944u;
    // 0x264944: 0x0  nop
    ctx->pc = 0x264944u;
    // NOP
label_264948:
    // 0x264948: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x264948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26494c:
    // 0x26494c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26494Cu;
    {
        const bool branch_taken_0x26494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26494Cu;
        // 0x264950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26494c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264954u;
    // 0x264954: 0x0  nop
    ctx->pc = 0x264954u;
    // NOP
label_264958:
    // 0x264958: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x264958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26495c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x26495Cu;
    {
        const bool branch_taken_0x26495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26495Cu;
        // 0x264960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26495c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264964u;
    // 0x264964: 0x0  nop
    ctx->pc = 0x264964u;
    // NOP
label_264968:
    // 0x264968: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x264968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26496c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26496Cu;
    {
        const bool branch_taken_0x26496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26496Cu;
        // 0x264970: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26496c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264974u;
    // 0x264974: 0x0  nop
    ctx->pc = 0x264974u;
    // NOP
label_264978:
    // 0x264978: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26497c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x26497Cu;
    {
        const bool branch_taken_0x26497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26497Cu;
        // 0x264980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26497c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264984u;
    // 0x264984: 0x0  nop
    ctx->pc = 0x264984u;
    // NOP
label_264988:
    // 0x264988: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_26498c:
    // 0x26498c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x26498Cu;
    {
        const bool branch_taken_0x26498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26498Cu;
        // 0x264990: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26498c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264994u;
    // 0x264994: 0x0  nop
    ctx->pc = 0x264994u;
    // NOP
label_264998:
    // 0x264998: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x264998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26499c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26499Cu;
    {
        const bool branch_taken_0x26499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26499Cu;
        // 0x2649a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26499c) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x2649A4u;
    // 0x2649a4: 0x0  nop
    ctx->pc = 0x2649a4u;
    // NOP
label_2649a8:
    // 0x2649a8: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2649A8u;
    {
        const bool branch_taken_0x2649a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2649a8) {
            ctx->pc = 0x2649ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649A8u;
            // 0x2649ac: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AD4u;
            goto label_264ad4;
        }
    }
    ctx->pc = 0x2649B0u;
    // 0x2649b0: 0x8f86aa70  lw          $a2, -0x5590($gp)
    ctx->pc = 0x2649b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945392)));
    // 0x2649b4: 0x18c0004a  blez        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x2649B4u;
    {
        const bool branch_taken_0x2649b4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2649B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649B4u;
        // 0x2649b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649b4) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x2649BCu;
    // 0x2649bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2649bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2649c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2649c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2649c4: 0x24472e80  addiu       $a3, $v0, 0x2E80
    ctx->pc = 0x2649c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x2649c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2649c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649cc: 0x24738858  addiu       $s3, $v1, -0x77A8
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x2649d0: 0x24e90006  addiu       $t1, $a3, 0x6
    ctx->pc = 0x2649d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x2649d4: 0x24f40002  addiu       $s4, $a3, 0x2
    ctx->pc = 0x2649d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2649d8: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x2649d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2649dc: 0x0  nop
    ctx->pc = 0x2649dcu;
    // NOP
label_2649e0:
    // 0x2649e0: 0x8d0400e4  lw          $a0, 0xE4($t0)
    ctx->pc = 0x2649e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 228)));
    // 0x2649e4: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x2649e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2649e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2649e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2649ec: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2649ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2649f0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2649F0u;
    {
        const bool branch_taken_0x2649f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2649F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649F0u;
        // 0x2649f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649f0) {
            ctx->pc = 0x264AB8u;
            goto label_264ab8;
        }
    }
    ctx->pc = 0x2649F8u;
    // 0x2649f8: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x2649f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2649fc: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x2649fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x264a00: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x264a00u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264a04: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x264a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264a08: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x264a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x264a0c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x264a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264a10: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x264A10u;
    {
        const bool branch_taken_0x264a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A10u;
        // 0x264a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a10) {
            ctx->pc = 0x264A50u;
            goto label_264a50;
        }
    }
    ctx->pc = 0x264A18u;
    // 0x264a18: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x264A18u;
    SET_GPR_U32(ctx, 31, 0x264A20u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x264A18u, 0x264A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A20u;
label_264a20:
    // 0x264a20: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x264a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x264a24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x264a28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x264a2c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x264a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x264a30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264a34: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x264a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264a38: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x264a3c: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x264a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x264a40: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x264a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x264a44: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x264a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x264a48: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x264a48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x264a4c: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x264a4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_264a50:
    // 0x264a50: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x264A50u;
    SET_GPR_U32(ctx, 31, 0x264A58u);
    ctx->pc = 0x264A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A50u;
    // 0x264a54: 0x2448021  addu        $s0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x264A50u, 0x264A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A58u;
label_264a58:
    // 0x264a58: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x264a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x264a5c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x264a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x264a60: 0x2a060014  slti        $a2, $s0, 0x14
    ctx->pc = 0x264a60u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x264a64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x264a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x264a68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x264a6c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x264a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x264a70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264a74: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x264a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264a78: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x264a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x264a7c: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x264a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x264a80: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x264a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x264a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264a88: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x264A88u;
    {
        const bool branch_taken_0x264a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A88u;
        // 0x264a8c: 0x2cd50001  sltiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a88) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264A90u;
    // 0x264a90: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x264a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x264a94: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x264a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264a98: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x264A98u;
    {
        const bool branch_taken_0x264a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A98u;
        // 0x264a9c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a98) {
            ctx->pc = 0x264AE8u;
            goto label_264ae8;
        }
    }
    ctx->pc = 0x264AA0u;
    // 0x264aa0: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x264AA0u;
    {
        const bool branch_taken_0x264aa0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AA0u;
        // 0x264aa4: 0x2610fffb  addiu       $s0, $s0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264aa0) {
            ctx->pc = 0x264AE0u;
            goto label_264ae0;
        }
    }
    ctx->pc = 0x264AA8u;
    // 0x264aa8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x264aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x264aac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x264AACu;
    {
        const bool branch_taken_0x264aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AACu;
        // 0x264ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264aac) {
            ctx->pc = 0x264AE8u;
            goto label_264ae8;
        }
    }
    ctx->pc = 0x264AB4u;
    // 0x264ab4: 0x0  nop
    ctx->pc = 0x264ab4u;
    // NOP
label_264ab8:
    // 0x264ab8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x264ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x264abc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x264ABCu;
    {
        const bool branch_taken_0x264abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264ABCu;
        // 0x264ac0: 0x588c0  sll         $s1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264abc) {
            ctx->pc = 0x2649E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2649e0;
        }
    }
    ctx->pc = 0x264AC4u;
    // 0x264ac4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264AC4u;
    {
        const bool branch_taken_0x264ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC4u;
        // 0x264ac8: 0x2a060014  slti        $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ac4) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264ACCu;
    // 0x264acc: 0x0  nop
    ctx->pc = 0x264accu;
    // NOP
label_264ad0:
    // 0x264ad0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_264ad4:
    // 0x264ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264AD4u;
    {
        const bool branch_taken_0x264ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AD4u;
        // 0x264ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ad4) {
            ctx->pc = 0x264AE4u;
            goto label_264ae4;
        }
    }
    ctx->pc = 0x264ADCu;
    // 0x264adc: 0x0  nop
    ctx->pc = 0x264adcu;
    // NOP
label_264ae0:
    // 0x264ae0: 0x2a060014  slti        $a2, $s0, 0x14
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_264ae4:
    // 0x264ae4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x264ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_264ae8:
    // 0x264ae8: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x264ae8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x264aec: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x264aecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x264af0: 0x12a0003f  beqz        $s5, . + 4 + (0x3F << 2)
    ctx->pc = 0x264AF0u;
    {
        const bool branch_taken_0x264af0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AF0u;
        // 0x264af4: 0x3800b  movn        $s0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264af0) {
            ctx->pc = 0x264BF0u;
            goto label_264bf0;
        }
    }
    ctx->pc = 0x264AF8u;
    // 0x264af8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264afc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x264afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x264b00: 0x24442f50  addiu       $a0, $v0, 0x2F50
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12112));
    // 0x264b04: 0x24630334  addiu       $v1, $v1, 0x334
    ctx->pc = 0x264b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
    // 0x264b08: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x264b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x264b0c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x264b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x264b10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x264B10u;
    {
        const bool branch_taken_0x264b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B10u;
        // 0x264b14: 0x24820060  addiu       $v0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b10) {
            ctx->pc = 0x264B78u;
            goto label_264b78;
        }
    }
    ctx->pc = 0x264B18u;
label_264b18:
    // 0x264b18: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x264b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x264b1c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x264b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x264b20: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x264b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x264b24: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x264b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x264b28: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x264b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x264b2c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x264b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x264b30: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x264b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x264b34: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x264b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x264b38: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x264b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b3c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x264b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b40: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x264b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b44: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x264b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b48: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x264b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b4c: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x264b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b50: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x264b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b54: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x264b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264b58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x264b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x264b5c: 0x0  nop
    ctx->pc = 0x264b5cu;
    // NOP
    // 0x264b60: 0x0  nop
    ctx->pc = 0x264b60u;
    // NOP
    // 0x264b64: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x264B64u;
    {
        const bool branch_taken_0x264b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x264B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B64u;
        // 0x264b68: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b64) {
            ctx->pc = 0x264B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264b18;
        }
    }
    ctx->pc = 0x264B6Cu;
    // 0x264b6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x264B6Cu;
    {
        const bool branch_taken_0x264b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b6c) {
            ctx->pc = 0x264BACu;
            goto label_264bac;
        }
    }
    ctx->pc = 0x264B74u;
    // 0x264b74: 0x0  nop
    ctx->pc = 0x264b74u;
    // NOP
label_264b78:
    // 0x264b78: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x264b78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264b7c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x264b7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x264b80: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x264b80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x264b84: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x264b84u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x264b88: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x264b88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x264b8c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x264b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x264b90: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x264b90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x264b94: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x264b94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x264b98: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x264b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x264b9c: 0x0  nop
    ctx->pc = 0x264b9cu;
    // NOP
    // 0x264ba0: 0x0  nop
    ctx->pc = 0x264ba0u;
    // NOP
    // 0x264ba4: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x264BA4u;
    {
        const bool branch_taken_0x264ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x264BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BA4u;
        // 0x264ba8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ba4) {
            ctx->pc = 0x264B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264b78;
        }
    }
    ctx->pc = 0x264BACu;
label_264bac:
    // 0x264bac: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x264bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x264bb0: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x264bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x264bb4: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x264bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x264bb8: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x264bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x264bbc: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x264bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x264bc0: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x264bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x264bc4: 0x84870018  lh          $a3, 0x18($a0)
    ctx->pc = 0x264bc4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x264bc8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x264bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264bcc: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x264bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264bd0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x264bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264bd4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x264bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264bd8: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x264bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264bdc: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x264bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264be0: 0x2410029a  addiu       $s0, $zero, 0x29A
    ctx->pc = 0x264be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x264be4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x264BE4u;
    {
        const bool branch_taken_0x264be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BE4u;
        // 0x264be8: 0xa4670018  sh          $a3, 0x18($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264be4) {
            ctx->pc = 0x264CF4u;
            goto label_264cf4;
        }
    }
    ctx->pc = 0x264BECu;
    // 0x264bec: 0x0  nop
    ctx->pc = 0x264becu;
    // NOP
label_264bf0:
    // 0x264bf0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x264bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x264bf4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264bf8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x264bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x264bfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264c00: 0x24640334  addiu       $a0, $v1, 0x334
    ctx->pc = 0x264c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
    // 0x264c04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x264c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x264c08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x264c0c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x264c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x264c10: 0x242124f8  addiu       $at, $at, 0x24F8
    ctx->pc = 0x264c10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 9464));
    // 0x264c14: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x264c18: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x264c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x264c1c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x264c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x264c20: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x264C20u;
    {
        const bool branch_taken_0x264c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C20u;
        // 0x264c24: 0x24430060  addiu       $v1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c20) {
            ctx->pc = 0x264C88u;
            goto label_264c88;
        }
    }
    ctx->pc = 0x264C28u;
label_264c28:
    // 0x264c28: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x264c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x264c2c: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x264c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x264c30: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x264c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x264c34: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x264c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x264c38: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x264c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x264c3c: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x264c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x264c40: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x264c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x264c44: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x264c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x264c48: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x264c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c4c: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x264c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c50: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x264c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c54: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x264c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c58: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x264c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c5c: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x264c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c60: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x264c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c64: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x264c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264c68: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x264c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x264c6c: 0x0  nop
    ctx->pc = 0x264c6cu;
    // NOP
    // 0x264c70: 0x0  nop
    ctx->pc = 0x264c70u;
    // NOP
    // 0x264c74: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x264C74u;
    {
        const bool branch_taken_0x264c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x264C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C74u;
        // 0x264c78: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c74) {
            ctx->pc = 0x264C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264c28;
        }
    }
    ctx->pc = 0x264C7Cu;
    // 0x264c7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x264C7Cu;
    {
        const bool branch_taken_0x264c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c7c) {
            ctx->pc = 0x264CBCu;
            goto label_264cbc;
        }
    }
    ctx->pc = 0x264C84u;
    // 0x264c84: 0x0  nop
    ctx->pc = 0x264c84u;
    // NOP
label_264c88:
    // 0x264c88: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x264c88u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264c8c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x264c8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264c90: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x264c90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264c94: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x264c94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x264c98: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x264c98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x264c9c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x264c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x264ca0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x264ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x264ca4: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x264ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x264ca8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x264ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x264cac: 0x0  nop
    ctx->pc = 0x264cacu;
    // NOP
    // 0x264cb0: 0x0  nop
    ctx->pc = 0x264cb0u;
    // NOP
    // 0x264cb4: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x264CB4u;
    {
        const bool branch_taken_0x264cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x264CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CB4u;
        // 0x264cb8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cb4) {
            ctx->pc = 0x264C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264c88;
        }
    }
    ctx->pc = 0x264CBCu;
label_264cbc:
    // 0x264cbc: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x264cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x264cc0: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x264cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x264cc4: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x264cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x264cc8: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x264cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x264ccc: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x264cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x264cd0: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x264cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x264cd4: 0x84460018  lh          $a2, 0x18($v0)
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x264cd8: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x264cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264cdc: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x264cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264ce0: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x264ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264ce4: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x264ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264ce8: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x264ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264cec: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x264cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264cf0: 0xa4860018  sh          $a2, 0x18($a0)
    ctx->pc = 0x264cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 6));
label_264cf4:
    // 0x264cf4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264cf8: 0xac4003c8  sw          $zero, 0x3C8($v0)
    ctx->pc = 0x264cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 968), GPR_U32(ctx, 0));
    // 0x264cfc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x264cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d00: 0xac6003cc  sw          $zero, 0x3CC($v1)
    ctx->pc = 0x264d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 972), GPR_U32(ctx, 0));
    // 0x264d04: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x264d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d08: 0xac5003d0  sw          $s0, 0x3D0($v0)
    ctx->pc = 0x264d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 976), GPR_U32(ctx, 16));
    // 0x264d0c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x264d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x264d10: 0x94a3036c  lhu         $v1, 0x36C($a1)
    ctx->pc = 0x264d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x264d14: 0x94a40370  lhu         $a0, 0x370($a1)
    ctx->pc = 0x264d14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x264d18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x264d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x264d1c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x264d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x264d20: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x264d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x264d24: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x264d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x264d28: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x264d28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x264d2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x264d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x264d30: 0xaca30254  sw          $v1, 0x254($a1)
    ctx->pc = 0x264d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 3));
    // 0x264d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264d38:
    // 0x264d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x264d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x264d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264d44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264d48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x264d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x264d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x264d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264d50: 0x3e00008  jr          $ra
    ctx->pc = 0x264D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D50u;
        // 0x264d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D58u;
}
