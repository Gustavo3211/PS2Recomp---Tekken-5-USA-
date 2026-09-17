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

// Function: sub_002B6710
// Address: 0x2b6710 - 0x2b68e0
void sub_002B6710_0x2b6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6710_0x2b6710");
#endif

    switch (ctx->pc) {
        case 0x2b6774u: goto label_2b6774;
        case 0x2b6798u: goto label_2b6798;
        case 0x2b67acu: goto label_2b67ac;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b6838u: goto label_2b6838;
        case 0x2b6848u: goto label_2b6848;
        case 0x2b685cu: goto label_2b685c;
        case 0x2b687cu: goto label_2b687c;
        default: break;
    }

    ctx->pc = 0x2b6710u;

    // 0x2b6710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b6714: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b6718: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b6718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b671c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b671cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b6720: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b6720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6724: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b6728: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2b6728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2b672c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2b672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2b6730: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2b6730u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6734: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2b6734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2b6738: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b6738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b673c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b6740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b6744: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2b6744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2b6748: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2b6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2b674c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2b674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2b6750: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2b6750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2b6754: 0xae670050  sw          $a3, 0x50($s3)
    ctx->pc = 0x2b6754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 7));
    // 0x2b6758: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b675c: 0xae70005c  sw          $s0, 0x5C($s3)
    ctx->pc = 0x2b675cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 16));
    // 0x2b6760: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2b6760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x2b6764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6768: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x2b6768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
    // 0x2b676c: 0xc0acfba  jal         func_2B3EE8
    ctx->pc = 0x2B676Cu;
    SET_GPR_U32(ctx, 31, 0x2B6774u);
    ctx->pc = 0x2B6770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B676Cu;
    // 0x2b6770: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3EE8u, 0x2B676Cu, 0x2B6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6774u;
label_2b6774:
    // 0x2b6774: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2b6774u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6778: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b6778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b677c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2b677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b6780: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B6780u;
    {
        const bool branch_taken_0x2b6780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6780u;
        // 0x2b6784: 0x8fb50000  lw          $s5, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6780) {
            ctx->pc = 0x2B67F0u;
            goto label_2b67f0;
        }
    }
    ctx->pc = 0x2B6788u;
    // 0x2b6788: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x2b6788u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2b678c: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B678Cu;
    {
        const bool branch_taken_0x2b678c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2B6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B678Cu;
        // 0x2b6790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b678c) {
            ctx->pc = 0x2B67B8u;
            goto label_2b67b8;
        }
    }
    ctx->pc = 0x2B6794u;
    // 0x2b6794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b6794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b6798:
    // 0x2b6798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b679c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b679cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b67a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67a4: 0xc0acfc0  jal         func_2B3F00
    ctx->pc = 0x2B67A4u;
    SET_GPR_U32(ctx, 31, 0x2B67ACu);
    ctx->pc = 0x2B67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67A4u;
    // 0x2b67a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F00u, 0x2B67A4u, 0x2B67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67ACu;
label_2b67ac:
    // 0x2b67ac: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2b67acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2b67b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B67B0u;
    {
        const bool branch_taken_0x2b67b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B0u;
        // 0x2b67b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b0) {
            ctx->pc = 0x2B6798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6798;
        }
    }
    ctx->pc = 0x2B67B8u;
label_2b67b8:
    // 0x2b67b8: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2B67B8u;
    {
        const bool branch_taken_0x2b67b8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67B8u;
        // 0x2b67bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b8) {
            ctx->pc = 0x2B67E8u;
            goto label_2b67e8;
        }
    }
    ctx->pc = 0x2B67C0u;
    // 0x2b67c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b67c4: 0x0  nop
    ctx->pc = 0x2b67c4u;
    // NOP
label_2b67c8:
    // 0x2b67c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b67cc: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x2b67ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2b67d0: 0x0  nop
    ctx->pc = 0x2b67d0u;
    // NOP
    // 0x2b67d4: 0x0  nop
    ctx->pc = 0x2b67d4u;
    // NOP
    // 0x2b67d8: 0x0  nop
    ctx->pc = 0x2b67d8u;
    // NOP
    // 0x2b67dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B67DCu;
    {
        const bool branch_taken_0x2b67dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67DCu;
        // 0x2b67e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67dc) {
            ctx->pc = 0x2B67C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b67c8;
        }
    }
    ctx->pc = 0x2B67E4u;
    // 0x2b67e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b67e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b67e8:
    // 0x2b67e8: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2b67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2b67ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2b67ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b67f0:
    // 0x2b67f0: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x2b67f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2b67f4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B67F4u;
    {
        const bool branch_taken_0x2b67f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67F4u;
        // 0x2b67f8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67f4) {
            ctx->pc = 0x2B6808u;
            goto label_2b6808;
        }
    }
    ctx->pc = 0x2B67FCu;
    // 0x2b67fc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b67fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6800u;
    {
        const bool branch_taken_0x2b6800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6800u;
        // 0x2b6804: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6800) {
            ctx->pc = 0x2B6820u;
            goto label_2b6820;
        }
    }
    ctx->pc = 0x2B6808u;
label_2b6808:
    // 0x2b6808: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2b6808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2b680c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2b680cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6810: 0x3c3b021  addu        $s6, $fp, $v1
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2b6814: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x2b6814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2b6818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b6818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b681c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b6820:
    // 0x2b6820: 0x82e20000  lb          $v0, 0x0($s7)
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b6824: 0x26f50004  addiu       $s5, $s7, 0x4
    ctx->pc = 0x2b6824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2b6828: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x2b6828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b682c: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B682Cu;
    {
        const bool branch_taken_0x2b682c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B682Cu;
        // 0x2b6830: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b682c) {
            ctx->pc = 0x2B68A4u;
            goto label_2b68a4;
        }
    }
    ctx->pc = 0x2B6834u;
    // 0x2b6834: 0x0  nop
    ctx->pc = 0x2b6834u;
    // NOP
label_2b6838:
    // 0x2b6838: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B6838u;
    {
        const bool branch_taken_0x2b6838 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2B683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6838u;
        // 0x2b683c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6838) {
            ctx->pc = 0x2B688Cu;
            goto label_2b688c;
        }
    }
    ctx->pc = 0x2B6840u;
    // 0x2b6840: 0x129900  sll         $s3, $s2, 4
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2b6844: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2b6844u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b6848:
    // 0x2b6848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b6848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b684c: 0x21e1021  addu        $v0, $s0, $fp
    ctx->pc = 0x2b684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x2b6850: 0x2b32021  addu        $a0, $s5, $s3
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2b6854: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B6854u;
    SET_GPR_U32(ctx, 31, 0x2B685Cu);
    ctx->pc = 0x2B6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6854u;
    // 0x2b6858: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B6854u, 0x2B685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B685Cu;
label_2b685c:
    // 0x2b685c: 0x2162021  addu        $a0, $s0, $s6
    ctx->pc = 0x2b685cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2b6860: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b6864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6868: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b686c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B686Cu;
    {
        const bool branch_taken_0x2b686c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B686Cu;
        // 0x2b6870: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b686c) {
            ctx->pc = 0x2B687Cu;
            goto label_2b687c;
        }
    }
    ctx->pc = 0x2B6874u;
    // 0x2b6874: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2B6874u;
    SET_GPR_U32(ctx, 31, 0x2B687Cu);
    ctx->pc = 0x2B6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6874u;
    // 0x2b6878: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2B6874u, 0x2B687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B687Cu;
label_2b687c:
    // 0x2b687c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2b687cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2b6880: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B6880u;
    {
        const bool branch_taken_0x2b6880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6880u;
        // 0x2b6884: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6880) {
            ctx->pc = 0x2B6848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6848;
        }
    }
    ctx->pc = 0x2B6888u;
    // 0x2b6888: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x2b6888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_2b688c:
    // 0x2b688c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2b688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b6890: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b6890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b6894: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2b6894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b6898: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2b6898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b689c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B689Cu;
    {
        const bool branch_taken_0x2b689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b689c) {
            ctx->pc = 0x2B6838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6838;
        }
    }
    ctx->pc = 0x2B68A4u;
label_2b68a4:
    // 0x2b68a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b68a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b68a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b68a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b68ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b68acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b68b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b68b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b68b4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b68b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b68b8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b68bc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2b68bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b68c0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2b68c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b68c4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2b68c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b68c8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2b68c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b68cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B68CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68CCu;
        // 0x2b68d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B68CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B68D4u;
    // 0x2b68d4: 0x0  nop
    ctx->pc = 0x2b68d4u;
    // NOP
    // 0x2b68d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B68D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B68D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B68E0u;
}
