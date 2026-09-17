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

// Function: sub_0033B760
// Address: 0x33b760 - 0x33b8f0
void sub_0033B760_0x33b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B760_0x33b760");
#endif

    switch (ctx->pc) {
        case 0x33b7c8u: goto label_33b7c8;
        case 0x33b884u: goto label_33b884;
        case 0x33b89cu: goto label_33b89c;
        default: break;
    }

    ctx->pc = 0x33b760u;

    // 0x33b760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33b764: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x33b764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b768: 0x25660014  addiu       $a2, $t3, 0x14
    ctx->pc = 0x33b768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x33b76c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x33b76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b770: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33b774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33b774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b778: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33b77c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x33b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33b784: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x33b784u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x33b788: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x33b788u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33b78c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x33b78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b790: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x33b790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x33b794: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x33b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x33b798: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x33b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x33b79c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x33b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x33b7a0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x33b7a4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33b7a8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x33b7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b7ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33b7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7b0: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x33B7B0u;
    {
        const bool branch_taken_0x33b7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7B0u;
        // 0x33b7b4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7b0) {
            ctx->pc = 0x33B8D4u;
            goto label_33b8d4;
        }
    }
    ctx->pc = 0x33B7B8u;
    // 0x33b7b8: 0x256a0028  addiu       $t2, $t3, 0x28
    ctx->pc = 0x33b7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x33b7bc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x33b7bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b7c0: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x33b7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x33b7c4: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x33b7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_33b7c8:
    // 0x33b7c8: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x33b7c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33b7cc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x33b7ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33b7d0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x33B7D0u;
    {
        const bool branch_taken_0x33b7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7d0) {
            ctx->pc = 0x33B7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B7D0u;
            // 0x33b7d4: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B8B8u;
            goto label_33b8b8;
        }
    }
    ctx->pc = 0x33B7D8u;
    // 0x33b7d8: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33b7dc: 0x10ca0007  beq         $a2, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B7DCu;
    {
        const bool branch_taken_0x33b7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x33B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7DCu;
        // 0x33b7e0: 0x834023  subu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7dc) {
            ctx->pc = 0x33B7FCu;
            goto label_33b7fc;
        }
    }
    ctx->pc = 0x33B7E4u;
    // 0x33b7e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b7e8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b7ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b7f0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b7f4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b7f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_33b7fc:
    // 0x33b7fc: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x33b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x33b800: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x33b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b804: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x33b804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33b808: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x33b808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33b80c: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x33b80cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b810: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b814: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x33b814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b818: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x33b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33b81c: 0xa4c20008  sh          $v0, 0x8($a2)
    ctx->pc = 0x33b81cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b820: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b824: 0xa468000a  sh          $t0, 0xA($v1)
    ctx->pc = 0x33b824u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x33b828: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x33b828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b82c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x33b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x33b830: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33b830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b838: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x33b838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x33b83c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b840: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x33b840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x33b844: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b848: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33b848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x33b84c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b850: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33b850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33b854: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x33b854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x33b858: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x33b858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x33b85c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x33b860: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x33b860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b864: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b868: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x33b868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x33b86c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b870: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b874: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33b874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33b878: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x33b878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x33b87c: 0xc0ced50  jal         func_33B540
    ctx->pc = 0x33B87Cu;
    SET_GPR_U32(ctx, 31, 0x33B884u);
    ctx->pc = 0x33B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B87Cu;
    // 0x33b880: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B540u, 0x33B87Cu, 0x33B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B884u;
label_33b884:
    // 0x33b884: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x33b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33b888: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b88c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x33b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33b890: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b894: 0xc0cf25c  jal         func_33C970
    ctx->pc = 0x33B894u;
    SET_GPR_U32(ctx, 31, 0x33B89Cu);
    ctx->pc = 0x33B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B894u;
    // 0x33b898: 0xac50000c  sw          $s0, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x33B894u, 0x33B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B89Cu;
label_33b89c:
    // 0x33b89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b8a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b8a4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x33b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b8a8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x33b8a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33b8ac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x33b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33b8b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33B8B0u;
    {
        const bool branch_taken_0x33b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8B0u;
        // 0x33b8b4: 0xa4a30014  sh          $v1, 0x14($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8b0) {
            ctx->pc = 0x33B8D8u;
            goto label_33b8d8;
        }
    }
    ctx->pc = 0x33B8B8u;
label_33b8b8:
    // 0x33b8b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b8bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33b8c0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x33b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x33b8c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b8c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b8cc: 0x14a2ffbe  bne         $a1, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x33B8CCu;
    {
        const bool branch_taken_0x33b8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8CCu;
        // 0x33b8d0: 0x24a70008  addiu       $a3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8cc) {
            ctx->pc = 0x33B7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b7c8;
        }
    }
    ctx->pc = 0x33B8D4u;
label_33b8d4:
    // 0x33b8d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33b8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b8d8:
    // 0x33b8d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b8dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33b8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b8e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x33B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8E4u;
        // 0x33b8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B8ECu;
    // 0x33b8ec: 0x0  nop
    ctx->pc = 0x33b8ecu;
    // NOP
    ctx->pc = 0x33b8f0u;
}
