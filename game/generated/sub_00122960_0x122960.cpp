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

// Function: sub_00122960
// Address: 0x122960 - 0x122cf0
void sub_00122960_0x122960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122960_0x122960");
#endif

    switch (ctx->pc) {
        case 0x1229d8u: goto label_1229d8;
        case 0x122a30u: goto label_122a30;
        case 0x122a64u: goto label_122a64;
        case 0x122a88u: goto label_122a88;
        case 0x122a98u: goto label_122a98;
        case 0x122ac4u: goto label_122ac4;
        case 0x122b34u: goto label_122b34;
        case 0x122b58u: goto label_122b58;
        case 0x122b88u: goto label_122b88;
        case 0x122b98u: goto label_122b98;
        case 0x122bc0u: goto label_122bc0;
        case 0x122c20u: goto label_122c20;
        case 0x122c30u: goto label_122c30;
        case 0x122c48u: goto label_122c48;
        case 0x122c68u: goto label_122c68;
        case 0x122c88u: goto label_122c88;
        default: break;
    }

    ctx->pc = 0x122960u;

    // 0x122960: 0x27bdf210  addiu       $sp, $sp, -0xDF0
    ctx->pc = 0x122960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963728));
    // 0x122964: 0xffb00da0  sd          $s0, 0xDA0($sp)
    ctx->pc = 0x122964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3488), GPR_U64(ctx, 16));
    // 0x122968: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12296c: 0xffb20db0  sd          $s2, 0xDB0($sp)
    ctx->pc = 0x12296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3504), GPR_U64(ctx, 18));
    // 0x122970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122974: 0xffb30db8  sd          $s3, 0xDB8($sp)
    ctx->pc = 0x122974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3512), GPR_U64(ctx, 19));
    // 0x122978: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x122978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12297c: 0xffb50dc8  sd          $s5, 0xDC8($sp)
    ctx->pc = 0x12297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3528), GPR_U64(ctx, 21));
    // 0x122980: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x122980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122984: 0xffb60dd0  sd          $s6, 0xDD0($sp)
    ctx->pc = 0x122984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3536), GPR_U64(ctx, 22));
    // 0x122988: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x122988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12298c: 0xffb70dd8  sd          $s7, 0xDD8($sp)
    ctx->pc = 0x12298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3544), GPR_U64(ctx, 23));
    // 0x122990: 0x26d70460  addiu       $s7, $s6, 0x460
    ctx->pc = 0x122990u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1120));
    // 0x122994: 0xffb10da8  sd          $s1, 0xDA8($sp)
    ctx->pc = 0x122994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3496), GPR_U64(ctx, 17));
    // 0x122998: 0xffb40dc0  sd          $s4, 0xDC0($sp)
    ctx->pc = 0x122998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3520), GPR_U64(ctx, 20));
    // 0x12299c: 0xffbe0de0  sd          $fp, 0xDE0($sp)
    ctx->pc = 0x12299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3552), GPR_U64(ctx, 30));
    // 0x1229a0: 0xffbf0de8  sd          $ra, 0xDE8($sp)
    ctx->pc = 0x1229a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3560), GPR_U64(ctx, 31));
    // 0x1229a4: 0xafa00d80  sw          $zero, 0xD80($sp)
    ctx->pc = 0x1229a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3456), GPR_U32(ctx, 0));
    // 0x1229a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1229a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1229ac: 0xafa70d84  sw          $a3, 0xD84($sp)
    ctx->pc = 0x1229acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3460), GPR_U32(ctx, 7));
    // 0x1229b0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1229b0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1229b4: 0x27a20480  addiu       $v0, $sp, 0x480
    ctx->pc = 0x1229b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x1229b8: 0x8e5e0008  lw          $fp, 0x8($s2)
    ctx->pc = 0x1229b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1229bc: 0xafb00d8c  sw          $s0, 0xD8C($sp)
    ctx->pc = 0x1229bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3468), GPR_U32(ctx, 16));
    // 0x1229c0: 0xafa00d90  sw          $zero, 0xD90($sp)
    ctx->pc = 0x1229c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3472), GPR_U32(ctx, 0));
    // 0x1229c4: 0xafa00d94  sw          $zero, 0xD94($sp)
    ctx->pc = 0x1229c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3476), GPR_U32(ctx, 0));
    // 0x1229c8: 0xafa00d98  sw          $zero, 0xD98($sp)
    ctx->pc = 0x1229c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 0));
    // 0x1229cc: 0xafa00d9c  sw          $zero, 0xD9C($sp)
    ctx->pc = 0x1229ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3484), GPR_U32(ctx, 0));
    // 0x1229d0: 0xafa20d88  sw          $v0, 0xD88($sp)
    ctx->pc = 0x1229d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 2));
    // 0x1229d4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1229d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1229d8:
    // 0x1229d8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1229d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1229dc: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1229dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1229e0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1229e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1229e4: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1229e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1229e8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1229e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1229ec: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1229ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1229f0: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1229f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1229f4: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1229f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1229f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1229f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1229fc: 0x0  nop
    ctx->pc = 0x1229fcu;
    // NOP
    // 0x122a00: 0x0  nop
    ctx->pc = 0x122a00u;
    // NOP
    // 0x122a04: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x122A04u;
    {
        const bool branch_taken_0x122a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x122A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A04u;
        // 0x122a08: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a04) {
            ctx->pc = 0x1229D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1229d8;
        }
    }
    ctx->pc = 0x122A0Cu;
    // 0x122a0c: 0xdee80000  ld          $t0, 0x0($s7)
    ctx->pc = 0x122a0cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x122a10: 0xdee20008  ld          $v0, 0x8($s7)
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x122a14: 0xdee40010  ld          $a0, 0x10($s7)
    ctx->pc = 0x122a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x122a18: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x122a18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x122a1c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x122a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x122a20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a24: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x122A24u;
    {
        const bool branch_taken_0x122a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A24u;
        // 0x122a28: 0xfc640010  sd          $a0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a24) {
            ctx->pc = 0x122B44u;
            goto label_122b44;
        }
    }
    ctx->pc = 0x122A2Cu;
    // 0x122a2c: 0x0  nop
    ctx->pc = 0x122a2cu;
    // NOP
label_122a30:
    // 0x122a30: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x122a34: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x122A34u;
    {
        const bool branch_taken_0x122a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A34u;
        // 0x122a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a34) {
            ctx->pc = 0x122A4Cu;
            goto label_122a4c;
        }
    }
    ctx->pc = 0x122A3Cu;
    // 0x122a3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x122a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122a40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x122a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x122a44: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x122a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x122a48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_122a4c:
    // 0x122a4c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x122A4Cu;
    {
        const bool branch_taken_0x122a4c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A4Cu;
        // 0x122a50: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a4c) {
            ctx->pc = 0x122A70u;
            goto label_122a70;
        }
    }
    ctx->pc = 0x122A54u;
    // 0x122a54: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x122a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x122a58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122a5c: 0xc04899c  jal         func_122670
    ctx->pc = 0x122A5Cu;
    SET_GPR_U32(ctx, 31, 0x122A64u);
    ctx->pc = 0x122A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A5Cu;
    // 0x122a60: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122670u, 0x122A5Cu, 0x122A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A64u;
label_122a64:
    // 0x122a64: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x122a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x122a68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x122A68u;
    {
        const bool branch_taken_0x122a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A68u;
        // 0x122a6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a68) {
            ctx->pc = 0x122A98u;
            goto label_122a98;
        }
    }
    ctx->pc = 0x122A70u;
label_122a70:
    // 0x122a70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122A70u;
    {
        const bool branch_taken_0x122a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A70u;
        // 0x122a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a70) {
            ctx->pc = 0x122A90u;
            goto label_122a90;
        }
    }
    ctx->pc = 0x122A78u;
    // 0x122a78: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a80: 0xc04899c  jal         func_122670
    ctx->pc = 0x122A80u;
    SET_GPR_U32(ctx, 31, 0x122A88u);
    ctx->pc = 0x122A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A80u;
    // 0x122a84: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122670u, 0x122A80u, 0x122A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A88u;
label_122a88:
    // 0x122a88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122A88u;
    {
        const bool branch_taken_0x122a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A88u;
        // 0x122a8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a88) {
            ctx->pc = 0x122A9Cu;
            goto label_122a9c;
        }
    }
    ctx->pc = 0x122A90u;
label_122a90:
    // 0x122a90: 0xc048968  jal         func_1225A0
    ctx->pc = 0x122A90u;
    SET_GPR_U32(ctx, 31, 0x122A98u);
    ctx->pc = 0x122A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A90u;
    // 0x122a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225A0u, 0x122A90u, 0x122A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A98u;
label_122a98:
    // 0x122a98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122a98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a9c:
    // 0x122a9c: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x122A9Cu;
    {
        const bool branch_taken_0x122a9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A9Cu;
        // 0x122aa0: 0x8fa20d80  lw          $v0, 0xD80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a9c) {
            ctx->pc = 0x122B24u;
            goto label_122b24;
        }
    }
    ctx->pc = 0x122AA4u;
    // 0x122aa4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x122AA4u;
    {
        const bool branch_taken_0x122aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122aa4) {
            ctx->pc = 0x122AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122AA4u;
            // 0x122aa8: 0xafa00d98  sw          $zero, 0xD98($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B64u;
            goto label_122b64;
        }
    }
    ctx->pc = 0x122AACu;
    // 0x122aac: 0x8fa60d9c  lw          $a2, 0xD9C($sp)
    ctx->pc = 0x122aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x122ab0: 0x54c0001d  bnel        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x122AB0u;
    {
        const bool branch_taken_0x122ab0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ab0) {
            ctx->pc = 0x122AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122AB0u;
            // 0x122ab4: 0x966403fa  lhu         $a0, 0x3FA($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B28u;
            goto label_122b28;
        }
    }
    ctx->pc = 0x122AB8u;
    // 0x122ab8: 0x27a30900  addiu       $v1, $sp, 0x900
    ctx->pc = 0x122ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x122abc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x122abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ac0: 0x26640460  addiu       $a0, $s3, 0x460
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
label_122ac4:
    // 0x122ac4: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x122ac4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122ac8: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x122ac8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122acc: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x122accu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122ad0: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x122ad0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x122ad4: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x122ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x122ad8: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x122ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x122adc: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x122adcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x122ae0: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x122ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x122ae4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x122ae8: 0x0  nop
    ctx->pc = 0x122ae8u;
    // NOP
    // 0x122aec: 0x0  nop
    ctx->pc = 0x122aecu;
    // NOP
    // 0x122af0: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x122AF0u;
    {
        const bool branch_taken_0x122af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x122AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AF0u;
        // 0x122af4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122af0) {
            ctx->pc = 0x122AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122ac4;
        }
    }
    ctx->pc = 0x122AF8u;
    // 0x122af8: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x122af8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122afc: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x122afcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122b00: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x122b00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122b04: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x122b04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x122b08: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x122b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x122b0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b10: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x122b10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x122b14: 0xafb00d94  sw          $s0, 0xD94($sp)
    ctx->pc = 0x122b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3476), GPR_U32(ctx, 16));
    // 0x122b18: 0xafb40d90  sw          $s4, 0xD90($sp)
    ctx->pc = 0x122b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3472), GPR_U32(ctx, 20));
    // 0x122b1c: 0xafa60d9c  sw          $a2, 0xD9C($sp)
    ctx->pc = 0x122b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3484), GPR_U32(ctx, 6));
    // 0x122b20: 0xafa60d98  sw          $a2, 0xD98($sp)
    ctx->pc = 0x122b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 6));
label_122b24:
    // 0x122b24: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x122b24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
label_122b28:
    // 0x122b28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b2c: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x122B2Cu;
    SET_GPR_U32(ctx, 31, 0x122B34u);
    ctx->pc = 0x122B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B2Cu;
    // 0x122b30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227B0u, 0x122B2Cu, 0x122B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B34u;
label_122b34:
    // 0x122b34: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122b38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x122b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x122b3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x122b3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x122b40: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_122b44:
    // 0x122b44: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x122b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b48: 0x8fa60d88  lw          $a2, 0xD88($sp)
    ctx->pc = 0x122b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3464)));
    // 0x122b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b50: 0xc048a2a  jal         func_1228A8
    ctx->pc = 0x122B50u;
    SET_GPR_U32(ctx, 31, 0x122B58u);
    ctx->pc = 0x122B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B50u;
    // 0x122b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1228A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1228A8u, 0x122B50u, 0x122B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B58u;
label_122b58:
    // 0x122b58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x122b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b5c: 0x1660ffb4  bnez        $s3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x122B5Cu;
    {
        const bool branch_taken_0x122b5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B5Cu;
        // 0x122b60: 0xafb10d88  sw          $s1, 0xD88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b5c) {
            ctx->pc = 0x122A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a30;
        }
    }
    ctx->pc = 0x122B64u;
label_122b64:
    // 0x122b64: 0x8fa70d9c  lw          $a3, 0xD9C($sp)
    ctx->pc = 0x122b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x122b68: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x122B68u;
    {
        const bool branch_taken_0x122b68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B68u;
        // 0x122b6c: 0x8fa80d98  lw          $t0, 0xD98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b68) {
            ctx->pc = 0x122B88u;
            goto label_122b88;
        }
    }
    ctx->pc = 0x122B70u;
    // 0x122b70: 0x27b30900  addiu       $s3, $sp, 0x900
    ctx->pc = 0x122b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x122b74: 0x8fb40d90  lw          $s4, 0xD90($sp)
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3472)));
    // 0x122b78: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122B78u;
    {
        const bool branch_taken_0x122b78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B78u;
        // 0x122b7c: 0x8fb00d94  lw          $s0, 0xD94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b78) {
            ctx->pc = 0x122B88u;
            goto label_122b88;
        }
    }
    ctx->pc = 0x122B80u;
    // 0x122b80: 0xc048a56  jal         func_122958
    ctx->pc = 0x122B80u;
    SET_GPR_U32(ctx, 31, 0x122B88u);
    ctx->pc = 0x122958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122958u, 0x122B80u, 0x122B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B88u;
label_122b88:
    // 0x122b88: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x122B88u;
    {
        const bool branch_taken_0x122b88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b88) {
            ctx->pc = 0x122B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122B88u;
            // 0x122b8c: 0xae540000  sw          $s4, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122B98u;
            goto label_122b98;
        }
    }
    ctx->pc = 0x122B90u;
    // 0x122b90: 0xc048724  jal         func_121C90
    ctx->pc = 0x122B90u;
    SET_GPR_U32(ctx, 31, 0x122B98u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122B90u, 0x122B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B98u;
label_122b98:
    // 0x122b98: 0x8fa20d8c  lw          $v0, 0xD8C($sp)
    ctx->pc = 0x122b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x122b9c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x122BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B9Cu;
        // 0x122ba0: 0xde7e0018  ld          $fp, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122BB0u;
            goto label_122bb0;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x122BA4u;
    {
        const bool branch_taken_0x122ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BA4u;
        // 0x122ba8: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ba4) {
            ctx->pc = 0x122CA0u;
            goto label_122ca0;
        }
    }
    ctx->pc = 0x122BACu;
    // 0x122bac: 0x0  nop
    ctx->pc = 0x122bacu;
    // NOP
label_122bb0:
    // 0x122bb0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x122bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bb4: 0x8fb00d8c  lw          $s0, 0xD8C($sp)
    ctx->pc = 0x122bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x122bb8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x122bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bbc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x122bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_122bc0:
    // 0x122bc0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x122bc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122bc4: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x122bc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122bc8: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x122bc8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122bcc: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x122bccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x122bd0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x122bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x122bd4: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x122bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x122bd8: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x122bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x122bdc: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x122bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x122be0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x122be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x122be4: 0x0  nop
    ctx->pc = 0x122be4u;
    // NOP
    // 0x122be8: 0x0  nop
    ctx->pc = 0x122be8u;
    // NOP
    // 0x122bec: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x122BECu;
    {
        const bool branch_taken_0x122bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x122BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BECu;
        // 0x122bf0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bec) {
            ctx->pc = 0x122BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122bc0;
        }
    }
    ctx->pc = 0x122BF4u;
    // 0x122bf4: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x122bf4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122bf8: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x122bf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122bfc: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x122bfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122c00: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x122c00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x122c04: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x122c04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x122c08: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x122c08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x122c0c: 0x8fa70d8c  lw          $a3, 0xD8C($sp)
    ctx->pc = 0x122c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x122c10: 0x50f50024  beql        $a3, $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x122C10u;
    {
        const bool branch_taken_0x122c10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 21));
        if (branch_taken_0x122c10) {
            ctx->pc = 0x122C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122C10u;
            // 0x122c14: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122CA4u;
            goto label_122ca4;
        }
    }
    ctx->pc = 0x122C18u;
    // 0x122c18: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x122c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c1c: 0x0  nop
    ctx->pc = 0x122c1cu;
    // NOP
label_122c20:
    // 0x122c20: 0x8fa60d88  lw          $a2, 0xD88($sp)
    ctx->pc = 0x122c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3464)));
    // 0x122c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c28: 0xc048a2a  jal         func_1228A8
    ctx->pc = 0x122C28u;
    SET_GPR_U32(ctx, 31, 0x122C30u);
    ctx->pc = 0x122C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C28u;
    // 0x122c2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1228A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1228A8u, 0x122C28u, 0x122C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C30u;
label_122c30:
    // 0x122c30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c34: 0xafb20d88  sw          $s2, 0xD88($sp)
    ctx->pc = 0x122c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 18));
    // 0x122c38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x122c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c3c: 0x267003fc  addiu       $s0, $s3, 0x3FC
    ctx->pc = 0x122c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1020));
    // 0x122c40: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x122c40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
    // 0x122c44: 0x0  nop
    ctx->pc = 0x122c44u;
    // NOP
label_122c48:
    // 0x122c48: 0x52240009  beql        $s1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122C48u;
    {
        const bool branch_taken_0x122c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x122c48) {
            ctx->pc = 0x122C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122C48u;
            // 0x122c4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122C70u;
            goto label_122c70;
        }
    }
    ctx->pc = 0x122C50u;
    // 0x122c50: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122C54u;
    {
        const bool branch_taken_0x122c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C54u;
        // 0x122c58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c54) {
            ctx->pc = 0x122C6Cu;
            goto label_122c6c;
        }
    }
    ctx->pc = 0x122C5Cu;
    // 0x122c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c60: 0xc048a10  jal         func_122840
    ctx->pc = 0x122C60u;
    SET_GPR_U32(ctx, 31, 0x122C68u);
    ctx->pc = 0x122C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C60u;
    // 0x122c64: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122840u, 0x122C60u, 0x122C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C68u;
label_122c68:
    // 0x122c68: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x122c68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
label_122c6c:
    // 0x122c6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x122c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_122c70:
    // 0x122c70: 0x2a22007a  slti        $v0, $s1, 0x7A
    ctx->pc = 0x122c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)122) ? 1 : 0);
    // 0x122c74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x122C74u;
    {
        const bool branch_taken_0x122c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C74u;
        // 0x122c78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c74) {
            ctx->pc = 0x122C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c48;
        }
    }
    ctx->pc = 0x122C7Cu;
    // 0x122c7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x122c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c80: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x122C80u;
    SET_GPR_U32(ctx, 31, 0x122C88u);
    ctx->pc = 0x122C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C80u;
    // 0x122c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227B0u, 0x122C80u, 0x122C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C88u;
label_122c88:
    // 0x122c88: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x122c88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122c8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x122c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x122c90: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x122c90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x122c94: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122c98: 0x1615ffe1  bne         $s0, $s5, . + 4 + (-0x1F << 2)
    ctx->pc = 0x122C98u;
    {
        const bool branch_taken_0x122c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x122C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C98u;
        // 0x122c9c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c98) {
            ctx->pc = 0x122C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c20;
        }
    }
    ctx->pc = 0x122CA0u;
label_122ca0:
    // 0x122ca0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_122ca4:
    // 0x122ca4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x122ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ca8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x122cac: 0x8fa80d84  lw          $t0, 0xD84($sp)
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3460)));
    // 0x122cb0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x122cb4: 0xdfb00da0  ld          $s0, 0xDA0($sp)
    ctx->pc = 0x122cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3488)));
    // 0x122cb8: 0x7e182d  daddu       $v1, $v1, $fp
    ctx->pc = 0x122cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 30));
    // 0x122cbc: 0xdfbe0de0  ld          $fp, 0xDE0($sp)
    ctx->pc = 0x122cbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3552)));
    // 0x122cc0: 0xdfb10da8  ld          $s1, 0xDA8($sp)
    ctx->pc = 0x122cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3496)));
    // 0x122cc4: 0xdfb20db0  ld          $s2, 0xDB0($sp)
    ctx->pc = 0x122cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3504)));
    // 0x122cc8: 0xdfb30db8  ld          $s3, 0xDB8($sp)
    ctx->pc = 0x122cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3512)));
    // 0x122ccc: 0xdfb40dc0  ld          $s4, 0xDC0($sp)
    ctx->pc = 0x122cccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3520)));
    // 0x122cd0: 0xdfb50dc8  ld          $s5, 0xDC8($sp)
    ctx->pc = 0x122cd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3528)));
    // 0x122cd4: 0xdfb60dd0  ld          $s6, 0xDD0($sp)
    ctx->pc = 0x122cd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3536)));
    // 0x122cd8: 0xdfb70dd8  ld          $s7, 0xDD8($sp)
    ctx->pc = 0x122cd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3544)));
    // 0x122cdc: 0xdfbf0de8  ld          $ra, 0xDE8($sp)
    ctx->pc = 0x122cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3560)));
    // 0x122ce0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x122ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x122ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x122CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CE4u;
        // 0x122ce8: 0x27bd0df0  addiu       $sp, $sp, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122CECu;
    // 0x122cec: 0x0  nop
    ctx->pc = 0x122cecu;
    // NOP
    ctx->pc = 0x122cf0u;
}
