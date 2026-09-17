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

// Function: sub_00275908
// Address: 0x275908 - 0x275b40
void sub_00275908_0x275908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275908_0x275908");
#endif

    switch (ctx->pc) {
        case 0x275944u: goto label_275944;
        case 0x275950u: goto label_275950;
        case 0x275958u: goto label_275958;
        case 0x275978u: goto label_275978;
        case 0x275984u: goto label_275984;
        case 0x275998u: goto label_275998;
        case 0x2759b4u: goto label_2759b4;
        case 0x2759ecu: goto label_2759ec;
        case 0x275a04u: goto label_275a04;
        case 0x275a20u: goto label_275a20;
        case 0x275a28u: goto label_275a28;
        case 0x275a30u: goto label_275a30;
        case 0x275a74u: goto label_275a74;
        case 0x275aacu: goto label_275aac;
        case 0x275ad0u: goto label_275ad0;
        case 0x275ae4u: goto label_275ae4;
        case 0x275aecu: goto label_275aec;
        case 0x275af4u: goto label_275af4;
        case 0x275b0cu: goto label_275b0c;
        default: break;
    }

    ctx->pc = 0x275908u;

    // 0x275908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x275908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27590c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275910: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x275914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27591c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x275920: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x275920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275924: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x275924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x275928: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x275928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27592c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275930: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x275930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x275934: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x275934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x275938: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x275938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27593c: 0xc09d480  jal         func_275200
    ctx->pc = 0x27593Cu;
    SET_GPR_U32(ctx, 31, 0x275944u);
    ctx->pc = 0x275940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27593Cu;
    // 0x275940: 0x8c5488d0  lw          $s4, -0x7730($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x27593Cu, 0x275944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275944u;
label_275944:
    // 0x275944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275948: 0xc09d486  jal         func_275218
    ctx->pc = 0x275948u;
    SET_GPR_U32(ctx, 31, 0x275950u);
    ctx->pc = 0x27594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275948u;
    // 0x27594c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x275948u, 0x275950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275950u;
label_275950:
    // 0x275950: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x275950u;
    SET_GPR_U32(ctx, 31, 0x275958u);
    ctx->pc = 0x275954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275950u;
    // 0x275954: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x275950u, 0x275958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275958u;
label_275958:
    // 0x275958: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x275958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27595c: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x27595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275960: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x275960u;
    {
        const bool branch_taken_0x275960 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x275964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275960u;
        // 0x275964: 0xaf80aea4  sw          $zero, -0x515C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275960) {
            ctx->pc = 0x275AC0u;
            goto label_275ac0;
        }
    }
    ctx->pc = 0x275968u;
    // 0x275968: 0x3c17003e  lui         $s7, 0x3E
    ctx->pc = 0x275968u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
    // 0x27596c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x27596cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275970: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275974: 0x0  nop
    ctx->pc = 0x275974u;
    // NOP
label_275978:
    // 0x275978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27597c: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x27597Cu;
    SET_GPR_U32(ctx, 31, 0x275984u);
    ctx->pc = 0x275980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27597Cu;
    // 0x275980: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x27597Cu, 0x275984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275984u;
label_275984:
    // 0x275984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275988: 0xa22201bb  sb          $v0, 0x1BB($s1)
    ctx->pc = 0x275988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x27598c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275990: 0xc0918b4  jal         func_2462D0
    ctx->pc = 0x275990u;
    SET_GPR_U32(ctx, 31, 0x275998u);
    ctx->pc = 0x275994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275990u;
    // 0x275994: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2462D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2462D0u, 0x275990u, 0x275998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275998u;
label_275998:
    // 0x275998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27599c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27599cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2759a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759a4: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x2759a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2759a8: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2759a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2759ac: 0xc0b0df8  jal         func_2C37E0
    ctx->pc = 0x2759ACu;
    SET_GPR_U32(ctx, 31, 0x2759B4u);
    ctx->pc = 0x2759B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759ACu;
    // 0x2759b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C37E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C37E0u, 0x2759ACu, 0x2759B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759B4u;
label_2759b4:
    // 0x2759b4: 0x12150016  beq         $s0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x2759B4u;
    {
        const bool branch_taken_0x2759b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x2759B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759B4u;
        // 0x2759b8: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759b4) {
            ctx->pc = 0x275A10u;
            goto label_275a10;
        }
    }
    ctx->pc = 0x2759BCu;
    // 0x2759bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2759BCu;
    {
        const bool branch_taken_0x2759bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759bc) {
            ctx->pc = 0x2759C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759BCu;
            // 0x2759c0: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2759D8u;
            goto label_2759d8;
        }
    }
    ctx->pc = 0x2759C4u;
    // 0x2759c4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2759C4u;
    {
        const bool branch_taken_0x2759c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759c4) {
            ctx->pc = 0x2759C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759C4u;
            // 0x2759c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2759E4u;
            goto label_2759e4;
        }
    }
    ctx->pc = 0x2759CCu;
    // 0x2759cc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2759CCu;
    {
        const bool branch_taken_0x2759cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759cc) {
            ctx->pc = 0x275A20u;
            goto label_275a20;
        }
    }
    ctx->pc = 0x2759D4u;
    // 0x2759d4: 0x0  nop
    ctx->pc = 0x2759d4u;
    // NOP
label_2759d8:
    // 0x2759d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2759D8u;
    {
        const bool branch_taken_0x2759d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759d8) {
            ctx->pc = 0x275A20u;
            goto label_275a20;
        }
    }
    ctx->pc = 0x2759E0u;
    // 0x2759e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2759e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2759e4:
    // 0x2759e4: 0xc0918ee  jal         func_2463B8
    ctx->pc = 0x2759E4u;
    SET_GPR_U32(ctx, 31, 0x2759ECu);
    ctx->pc = 0x2759E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759E4u;
    // 0x2759e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2463B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2463B8u, 0x2759E4u, 0x2759ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759ECu;
label_2759ec:
    // 0x2759ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2759ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759f0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2759f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2759f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2759f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2759f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759fc: 0xc0b0e40  jal         func_2C3900
    ctx->pc = 0x2759FCu;
    SET_GPR_U32(ctx, 31, 0x275A04u);
    ctx->pc = 0x275A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759FCu;
    // 0x275a00: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3900u, 0x2759FCu, 0x275A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A04u;
label_275a04:
    // 0x275a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275A04u;
    {
        const bool branch_taken_0x275a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a04) {
            ctx->pc = 0x275A20u;
            goto label_275a20;
        }
    }
    ctx->pc = 0x275A0Cu;
    // 0x275a0c: 0x0  nop
    ctx->pc = 0x275a0cu;
    // NOP
label_275a10:
    // 0x275a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a18: 0xc0b0e40  jal         func_2C3900
    ctx->pc = 0x275A18u;
    SET_GPR_U32(ctx, 31, 0x275A20u);
    ctx->pc = 0x275A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A18u;
    // 0x275a1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3900u, 0x275A18u, 0x275A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A20u;
label_275a20:
    // 0x275a20: 0xc07c510  jal         func_1F1440
    ctx->pc = 0x275A20u;
    SET_GPR_U32(ctx, 31, 0x275A28u);
    ctx->pc = 0x275A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A20u;
    // 0x275a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1440u, 0x275A20u, 0x275A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A28u;
label_275a28:
    // 0x275a28: 0xc0b161c  jal         func_2C5870
    ctx->pc = 0x275A28u;
    SET_GPR_U32(ctx, 31, 0x275A30u);
    ctx->pc = 0x275A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A28u;
    // 0x275a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5870u, 0x275A28u, 0x275A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A30u;
label_275a30:
    // 0x275a30: 0x52c0000e  beql        $s6, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x275A30u;
    {
        const bool branch_taken_0x275a30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a30) {
            ctx->pc = 0x275A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A30u;
            // 0x275a34: 0x26e437e0  addiu       $a0, $s7, 0x37E0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 14304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A6Cu;
            goto label_275a6c;
        }
    }
    ctx->pc = 0x275A38u;
    // 0x275a38: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x275a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x275a3c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275A40u;
    {
        const bool branch_taken_0x275a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A40u;
        // 0x275a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a40) {
            ctx->pc = 0x275A54u;
            goto label_275a54;
        }
    }
    ctx->pc = 0x275A48u;
    // 0x275a48: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275A48u;
    {
        const bool branch_taken_0x275a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A48u;
        // 0x275a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a48) {
            ctx->pc = 0x275A54u;
            goto label_275a54;
        }
    }
    ctx->pc = 0x275A50u;
    // 0x275a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275a54:
    // 0x275a54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275A54u;
    {
        const bool branch_taken_0x275a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A54u;
        // 0x275a58: 0x26e437e0  addiu       $a0, $s7, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a54) {
            ctx->pc = 0x275A6Cu;
            goto label_275a6c;
        }
    }
    ctx->pc = 0x275A5Cu;
    // 0x275a5c: 0x3862000d  xori        $v0, $v1, 0xD
    ctx->pc = 0x275a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
    // 0x275a60: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x275A60u;
    {
        const bool branch_taken_0x275a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275a60) {
            ctx->pc = 0x275A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A60u;
            // 0x275a64: 0xae3508a0  sw          $s5, 0x8A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2208), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A6Cu;
            goto label_275a6c;
        }
    }
    ctx->pc = 0x275A68u;
    // 0x275a68: 0x26e437e0  addiu       $a0, $s7, 0x37E0
    ctx->pc = 0x275a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 14304));
label_275a6c:
    // 0x275a6c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x275A6Cu;
    SET_GPR_U32(ctx, 31, 0x275A74u);
    ctx->pc = 0x275A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A6Cu;
    // 0x275a70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x275A6Cu, 0x275A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A74u;
label_275a74:
    // 0x275a74: 0x24450068  addiu       $a1, $v0, 0x68
    ctx->pc = 0x275a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x275a78: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x275a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275a7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x275A7Cu;
    {
        const bool branch_taken_0x275a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275a7c) {
            ctx->pc = 0x275A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A7Cu;
            // 0x275a80: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A98u;
            goto label_275a98;
        }
    }
    ctx->pc = 0x275A84u;
    // 0x275a84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x275a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x275a88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x275a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x275a8c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275A8Cu;
    {
        const bool branch_taken_0x275a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275a8c) {
            ctx->pc = 0x275A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A8Cu;
            // 0x275a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275AA4u;
            goto label_275aa4;
        }
    }
    ctx->pc = 0x275A94u;
    // 0x275a94: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x275a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_275a98:
    // 0x275a98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a9c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x275a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x275aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275aa4:
    // 0x275aa4: 0xc0b83c0  jal         func_2E0F00
    ctx->pc = 0x275AA4u;
    SET_GPR_U32(ctx, 31, 0x275AACu);
    ctx->pc = 0x275AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275AA4u;
    // 0x275aa8: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0F00u, 0x275AA4u, 0x275AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AACu;
label_275aac:
    // 0x275aac: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x275aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275ab0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x275ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x275ab4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x275ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275ab8: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x275AB8u;
    {
        const bool branch_taken_0x275ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AB8u;
        // 0x275abc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ab8) {
            ctx->pc = 0x275978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275978;
        }
    }
    ctx->pc = 0x275AC0u;
label_275ac0:
    // 0x275ac0: 0x8f82ae98  lw          $v0, -0x5168($gp)
    ctx->pc = 0x275ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946456)));
    // 0x275ac4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x275AC4u;
    {
        const bool branch_taken_0x275ac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x275AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AC4u;
        // 0x275ac8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ac4) {
            ctx->pc = 0x275B04u;
            goto label_275b04;
        }
    }
    ctx->pc = 0x275ACCu;
    // 0x275acc: 0x0  nop
    ctx->pc = 0x275accu;
    // NOP
label_275ad0:
    // 0x275ad0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x275ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ad4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275adc: 0xc07cc92  jal         func_1F3248
    ctx->pc = 0x275ADCu;
    SET_GPR_U32(ctx, 31, 0x275AE4u);
    ctx->pc = 0x275AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275ADCu;
    // 0x275ae0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3248u, 0x275ADCu, 0x275AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AE4u;
label_275ae4:
    // 0x275ae4: 0xc07c510  jal         func_1F1440
    ctx->pc = 0x275AE4u;
    SET_GPR_U32(ctx, 31, 0x275AECu);
    ctx->pc = 0x275AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275AE4u;
    // 0x275ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1440u, 0x275AE4u, 0x275AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AECu;
label_275aec:
    // 0x275aec: 0xc0b3ccc  jal         func_2CF330
    ctx->pc = 0x275AECu;
    SET_GPR_U32(ctx, 31, 0x275AF4u);
    ctx->pc = 0x275AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275AECu;
    // 0x275af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF330u, 0x275AECu, 0x275AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AF4u;
label_275af4:
    // 0x275af4: 0x8f82ae98  lw          $v0, -0x5168($gp)
    ctx->pc = 0x275af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946456)));
    // 0x275af8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x275af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275afc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x275AFCu;
    {
        const bool branch_taken_0x275afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AFCu;
        // 0x275b00: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275afc) {
            ctx->pc = 0x275AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275ad0;
        }
    }
    ctx->pc = 0x275B04u;
label_275b04:
    // 0x275b04: 0xc07cc44  jal         func_1F3110
    ctx->pc = 0x275B04u;
    SET_GPR_U32(ctx, 31, 0x275B0Cu);
    ctx->pc = 0x275B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B04u;
    // 0x275b08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3110u, 0x275B04u, 0x275B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B0Cu;
label_275b0c:
    // 0x275b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x275b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x275b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275b20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x275b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275b24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x275b24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x275b28: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x275b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275b2c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x275b2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x275b30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275b34: 0xaf82aea4  sw          $v0, -0x515C($gp)
    ctx->pc = 0x275b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946468), GPR_U32(ctx, 2));
    // 0x275b38: 0x3e00008  jr          $ra
    ctx->pc = 0x275B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B38u;
        // 0x275b3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275B40u;
}
