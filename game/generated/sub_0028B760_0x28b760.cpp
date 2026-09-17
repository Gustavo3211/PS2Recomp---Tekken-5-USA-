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

// Function: sub_0028B760
// Address: 0x28b760 - 0x28b918
void sub_0028B760_0x28b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B760_0x28b760");
#endif

    switch (ctx->pc) {
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b854u: goto label_28b854;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b8c0u: goto label_28b8c0;
        default: break;
    }

    ctx->pc = 0x28b760u;

    // 0x28b760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b764: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28b768: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28b768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b770: 0x26840158  addiu       $a0, $s4, 0x158
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 344));
    // 0x28b774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28b778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28b77c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28b780: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28b784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28b788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b78c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B78Cu;
    {
        const bool branch_taken_0x28b78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B78Cu;
        // 0x28b790: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b78c) {
            ctx->pc = 0x28B7A4u;
            goto label_28b7a4;
        }
    }
    ctx->pc = 0x28B794u;
    // 0x28b794: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b798: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b79c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B79Cu;
    {
        const bool branch_taken_0x28b79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B79Cu;
        // 0x28b7a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b79c) {
            ctx->pc = 0x28B7B4u;
            goto label_28b7b4;
        }
    }
    ctx->pc = 0x28B7A4u;
label_28b7a4:
    // 0x28b7a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28b7a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28b7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28b7b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_28b7b4:
    // 0x28b7b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7b8: 0x2455a238  addiu       $s5, $v0, -0x5DC8
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943288));
    // 0x28b7bc: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x28b7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_28b7c0:
    // 0x28b7c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b7c4: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x28b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x28b7c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28b7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b7cc: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28B7CCu;
    SET_GPR_U32(ctx, 31, 0x28B7D4u);
    ctx->pc = 0x28B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7CCu;
    // 0x28b7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28B7CCu, 0x28B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7D4u;
label_28b7d4:
    // 0x28b7d4: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x28b7d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B7DCu;
    {
        const bool branch_taken_0x28b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7DCu;
        // 0x28b7e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7dc) {
            ctx->pc = 0x28B7F8u;
            goto label_28b7f8;
        }
    }
    ctx->pc = 0x28B7E4u;
    // 0x28b7e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28B7E4u;
    SET_GPR_U32(ctx, 31, 0x28B7ECu);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28B7E4u, 0x28B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7ECu;
label_28b7ec:
    // 0x28b7ec: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x28b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x28b7f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B7F0u;
    {
        const bool branch_taken_0x28b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7F0u;
        // 0x28b7f4: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7f0) {
            ctx->pc = 0x28B7FCu;
            goto label_28b7fc;
        }
    }
    ctx->pc = 0x28B7F8u;
label_28b7f8:
    // 0x28b7f8: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x28b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_28b7fc:
    // 0x28b7fc: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x28b7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28b800: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28B800u;
    {
        const bool branch_taken_0x28b800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B800u;
        // 0x28b804: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b800) {
            ctx->pc = 0x28B7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b7c0;
        }
    }
    ctx->pc = 0x28B808u;
    // 0x28b808: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28b80c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28b810: 0x24539c48  addiu       $s3, $v0, -0x63B8
    ctx->pc = 0x28b810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941768));
    // 0x28b814: 0x24716e70  addiu       $s1, $v1, 0x6E70
    ctx->pc = 0x28b814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28272));
    // 0x28b818: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b81c: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28b820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b824: 0x0  nop
    ctx->pc = 0x28b824u;
    // NOP
label_28b828:
    // 0x28b828: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x28b828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_28b82c:
    // 0x28b82c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28b830: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x28b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x28b834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b838: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28B838u;
    {
        const bool branch_taken_0x28b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x28B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B838u;
        // 0x28b83c: 0x28c50021  slti        $a1, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b838) {
            ctx->pc = 0x28B880u;
            goto label_28b880;
        }
    }
    ctx->pc = 0x28B840u;
    // 0x28b840: 0x0  nop
    ctx->pc = 0x28b840u;
    // NOP
    // 0x28b844: 0x0  nop
    ctx->pc = 0x28b844u;
    // NOP
    // 0x28b848: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28B848u;
    {
        const bool branch_taken_0x28b848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B848u;
        // 0x28b84c: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b848) {
            ctx->pc = 0x28B82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b82c;
        }
    }
    ctx->pc = 0x28B850u;
    // 0x28b850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b854:
    // 0x28b854: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28B854u;
    SET_GPR_U32(ctx, 31, 0x28B85Cu);
    ctx->pc = 0x28B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B854u;
    // 0x28b858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28B854u, 0x28B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B85Cu;
label_28b85c:
    // 0x28b85c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B85Cu;
    {
        const bool branch_taken_0x28b85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B85Cu;
        // 0x28b860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b85c) {
            ctx->pc = 0x28B890u;
            goto label_28b890;
        }
    }
    ctx->pc = 0x28B864u;
    // 0x28b864: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28B864u;
    SET_GPR_U32(ctx, 31, 0x28B86Cu);
    ctx->pc = 0x28B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B864u;
    // 0x28b868: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28B864u, 0x28B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B86Cu;
label_28b86c:
    // 0x28b86c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x28b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28b870: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28b874: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28B874u;
    {
        const bool branch_taken_0x28b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B874u;
        // 0x28b878: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b874) {
            ctx->pc = 0x28B89Cu;
            goto label_28b89c;
        }
    }
    ctx->pc = 0x28B87Cu;
    // 0x28b87c: 0x0  nop
    ctx->pc = 0x28b87cu;
    // NOP
label_28b880:
    // 0x28b880: 0x951021  addu        $v0, $a0, $s5
    ctx->pc = 0x28b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x28b884: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x28B884u;
    {
        const bool branch_taken_0x28b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B884u;
        // 0x28b888: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b884) {
            ctx->pc = 0x28B854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b854;
        }
    }
    ctx->pc = 0x28B88Cu;
    // 0x28b88c: 0x0  nop
    ctx->pc = 0x28b88cu;
    // NOP
label_28b890:
    // 0x28b890: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28b890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28b894: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28b898: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28b898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28b89c:
    // 0x28b89c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b8a0: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x28b8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28b8a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x28B8A4u;
    {
        const bool branch_taken_0x28b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8A4u;
        // 0x28b8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8a4) {
            ctx->pc = 0x28B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b828;
        }
    }
    ctx->pc = 0x28B8ACu;
    // 0x28b8ac: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28b8b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8b4: 0x24476e70  addiu       $a3, $v0, 0x6E70
    ctx->pc = 0x28b8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x28b8b8: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x28b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28b8bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28b8c0:
    // 0x28b8c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28b8c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28b8c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b8cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B8CCu;
    {
        const bool branch_taken_0x28b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8CCu;
        // 0x28b8d0: 0x28a40021  slti        $a0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8cc) {
            ctx->pc = 0x28B8ECu;
            goto label_28b8ec;
        }
    }
    ctx->pc = 0x28B8D4u;
    // 0x28b8d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28b8d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B8D8u;
    {
        const bool branch_taken_0x28b8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8d8) {
            ctx->pc = 0x28B8ECu;
            goto label_28b8ec;
        }
    }
    ctx->pc = 0x28B8E0u;
    // 0x28b8e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28b8e4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x28b8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x28b8e8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28b8ec:
    // 0x28b8ec: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28B8ECu;
    {
        const bool branch_taken_0x28b8ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8ECu;
        // 0x28b8f0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8ec) {
            ctx->pc = 0x28B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b8c0;
        }
    }
    ctx->pc = 0x28B8F4u;
    // 0x28b8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b8fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28b8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b900: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28b900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28b904: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28b904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b908: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28b908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28b90c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b910: 0x3e00008  jr          $ra
    ctx->pc = 0x28B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B910u;
        // 0x28b914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B918u;
}
