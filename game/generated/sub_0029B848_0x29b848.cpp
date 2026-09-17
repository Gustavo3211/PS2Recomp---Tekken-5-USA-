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

// Function: sub_0029B848
// Address: 0x29b848 - 0x29b990
void sub_0029B848_0x29b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B848_0x29b848");
#endif

    switch (ctx->pc) {
        case 0x29b88cu: goto label_29b88c;
        case 0x29b8a0u: goto label_29b8a0;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b91cu: goto label_29b91c;
        default: break;
    }

    ctx->pc = 0x29b848u;

    // 0x29b848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29b84c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b850: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29b850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29b854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b858: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29b85c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29b85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b860: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29b864: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x29b864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29b868: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29b86c: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29b86cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x29b870: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b874: 0x24a5c180  addiu       $a1, $a1, -0x3E80
    ctx->pc = 0x29b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951296));
    // 0x29b878: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29b87c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29b880: 0x8e120154  lw          $s2, 0x154($s0)
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x29b884: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B884u;
    SET_GPR_U32(ctx, 31, 0x29B88Cu);
    ctx->pc = 0x29B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B884u;
    // 0x29b888: 0x8e130158  lw          $s3, 0x158($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B884u, 0x29B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B88Cu;
label_29b88c:
    // 0x29b88c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29b890: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b894: 0x24a5c190  addiu       $a1, $a1, -0x3E70
    ctx->pc = 0x29b894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    // 0x29b898: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B898u;
    SET_GPR_U32(ctx, 31, 0x29B8A0u);
    ctx->pc = 0x29B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B898u;
    // 0x29b89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B898u, 0x29B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8A0u;
label_29b8a0:
    // 0x29b8a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b8a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x29b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29b8a8: 0x24a5c1a0  addiu       $a1, $a1, -0x3E60
    ctx->pc = 0x29b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951328));
    // 0x29b8ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B8ACu;
    SET_GPR_U32(ctx, 31, 0x29B8B4u);
    ctx->pc = 0x29B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8ACu;
    // 0x29b8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B8ACu, 0x29B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8B4u;
label_29b8b4:
    // 0x29b8b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29b8b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x29b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x29b8bc: 0x24a5c1b0  addiu       $a1, $a1, -0x3E50
    ctx->pc = 0x29b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951344));
    // 0x29b8c0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29B8C0u;
    SET_GPR_U32(ctx, 31, 0x29B8C8u);
    ctx->pc = 0x29B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8C0u;
    // 0x29b8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29B8C0u, 0x29B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8C8u;
label_29b8c8:
    // 0x29b8c8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x29b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x29b8cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29b8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29b8d0:
    // 0x29b8d0: 0x26a5c1c0  addiu       $a1, $s5, -0x3E40
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951360));
    // 0x29b8d4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29B8D4u;
    SET_GPR_U32(ctx, 31, 0x29B8DCu);
    ctx->pc = 0x29B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8D4u;
    // 0x29b8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29B8D4u, 0x29B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8DCu;
label_29b8dc:
    // 0x29b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8e0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29b8e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29B8E4u;
    {
        const bool branch_taken_0x29b8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8E4u;
        // 0x29b8e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8e4) {
            ctx->pc = 0x29B914u;
            goto label_29b914;
        }
    }
    ctx->pc = 0x29B8ECu;
    // 0x29b8ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29B8ECu;
    SET_GPR_U32(ctx, 31, 0x29B8F4u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29B8ECu, 0x29B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8F4u;
label_29b8f4:
    // 0x29b8f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B8F4u;
    {
        const bool branch_taken_0x29b8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8F4u;
        // 0x29b8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8f4) {
            ctx->pc = 0x29B914u;
            goto label_29b914;
        }
    }
    ctx->pc = 0x29B8FCu;
    // 0x29b8fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29b900: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B900u;
    {
        const bool branch_taken_0x29b900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b900) {
            ctx->pc = 0x29B914u;
            goto label_29b914;
        }
    }
    ctx->pc = 0x29B908u;
    // 0x29b908: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29b90c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x29b90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x29b910: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29b910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29b914:
    // 0x29b914: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x29B914u;
    SET_GPR_U32(ctx, 31, 0x29B91Cu);
    ctx->pc = 0x29B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B914u;
    // 0x29b918: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x29B914u, 0x29B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B91Cu;
label_29b91c:
    // 0x29b91c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29b920: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x29b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29b924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29b928: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29b928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29b92c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x29b92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29b930: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x29B930u;
    {
        const bool branch_taken_0x29b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B930u;
        // 0x29b934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b930) {
            ctx->pc = 0x29B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b8d0;
        }
    }
    ctx->pc = 0x29B938u;
    // 0x29b938: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b93c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b940: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29b940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b944: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x29b944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x29b948: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29b948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29b94c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29b950: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b954: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b958: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x29b958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x29b95c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29b95cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29b960: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b964: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x29b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29b968: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b96c: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x29b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x29b970: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x29b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x29b974: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29b978: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b97c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29b97cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29b980: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x29b980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x29b984: 0x3e00008  jr          $ra
    ctx->pc = 0x29B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B984u;
        // 0x29b988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B98Cu;
    // 0x29b98c: 0x0  nop
    ctx->pc = 0x29b98cu;
    // NOP
    ctx->pc = 0x29b990u;
}
