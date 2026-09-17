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

// Function: sub_001100A0
// Address: 0x1100a0 - 0x110178
void sub_001100A0_0x1100a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001100A0_0x1100a0");
#endif

    switch (ctx->pc) {
        case 0x1100e0u: goto label_1100e0;
        case 0x1100e8u: goto label_1100e8;
        case 0x110140u: goto label_110140;
        case 0x110150u: goto label_110150;
        case 0x110160u: goto label_110160;
        case 0x110170u: goto label_110170;
        default: break;
    }

    ctx->pc = 0x1100a0u;

    // 0x1100a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1100a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1100a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1100a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1100a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1100a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1100acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1100b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1100b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1100b4: 0x3c16001e  lui         $s6, 0x1E
    ctx->pc = 0x1100b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30 << 16));
    // 0x1100b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1100b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1100bc: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x1100bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x1100c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1100c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1100c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1100c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1100c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1100cc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1100ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1100d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1100d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1100d4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1100d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1100d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1100d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1100dc: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1100dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_1100e0:
    // 0x1100e0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1100E0u;
    SET_GPR_U32(ctx, 31, 0x1100E8u);
    ctx->pc = 0x1100E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100E0u;
    // 0x1100e4: 0x8ec47f40  lw          $a0, 0x7F40($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1100E0u, 0x1100E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100E8u;
label_1100e8:
    // 0x1100e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1100ec: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1100ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1100f0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1100f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1100f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1100f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1100f8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1100f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1100fc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1100fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x110100: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x110100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x110104: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x110104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110108: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x110108u;
    {
        const bool branch_taken_0x110108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x11010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110108u;
        // 0x11010c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110108) {
            ctx->pc = 0x110148u;
            goto label_110148;
        }
    }
    ctx->pc = 0x110110u;
    // 0x110110: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x110110u;
    {
        const bool branch_taken_0x110110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x110114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110110u;
        // 0x110114: 0x26a4dee8  addiu       $a0, $s5, -0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110110) {
            ctx->pc = 0x110128u;
            goto label_110128;
        }
    }
    ctx->pc = 0x110118u;
    // 0x110118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110118u;
    {
        const bool branch_taken_0x110118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110118u;
        // 0x11011c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110118) {
            ctx->pc = 0x110138u;
            goto label_110138;
        }
    }
    ctx->pc = 0x110120u;
    // 0x110120: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x110120u;
    {
        const bool branch_taken_0x110120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110120) {
            ctx->pc = 0x110168u;
            goto label_110168;
        }
    }
    ctx->pc = 0x110128u;
label_110128:
    // 0x110128: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x110128u;
    {
        const bool branch_taken_0x110128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x11012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110128u;
        // 0x11012c: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110128) {
            ctx->pc = 0x110158u;
            goto label_110158;
        }
    }
    ctx->pc = 0x110130u;
    // 0x110130: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110130u;
    {
        const bool branch_taken_0x110130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110130) {
            ctx->pc = 0x110168u;
            goto label_110168;
        }
    }
    ctx->pc = 0x110138u;
label_110138:
    // 0x110138: 0xc043cb4  jal         func_10F2D0
    ctx->pc = 0x110138u;
    SET_GPR_U32(ctx, 31, 0x110140u);
    ctx->pc = 0x11013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110138u;
    // 0x11013c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2D0u, 0x110138u, 0x110140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110140u;
label_110140:
    // 0x110140: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x110140u;
    {
        const bool branch_taken_0x110140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110140) {
            ctx->pc = 0x1100E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1100e0;
        }
    }
    ctx->pc = 0x110148u;
label_110148:
    // 0x110148: 0xc043c94  jal         func_10F250
    ctx->pc = 0x110148u;
    SET_GPR_U32(ctx, 31, 0x110150u);
    ctx->pc = 0x11014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110148u;
    // 0x11014c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F250u, 0x110148u, 0x110150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110150u;
label_110150:
    // 0x110150: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x110150u;
    {
        const bool branch_taken_0x110150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110150) {
            ctx->pc = 0x1100E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1100e0;
        }
    }
    ctx->pc = 0x110158u;
label_110158:
    // 0x110158: 0xc043cc4  jal         func_10F310
    ctx->pc = 0x110158u;
    SET_GPR_U32(ctx, 31, 0x110160u);
    ctx->pc = 0x11015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110158u;
    // 0x11015c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F310u, 0x110158u, 0x110160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110160u;
label_110160:
    // 0x110160: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x110160u;
    {
        const bool branch_taken_0x110160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110160) {
            ctx->pc = 0x1100E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1100e0;
        }
    }
    ctx->pc = 0x110168u;
label_110168:
    // 0x110168: 0xc0447b4  jal         func_111ED0
    ctx->pc = 0x110168u;
    SET_GPR_U32(ctx, 31, 0x110170u);
    ctx->pc = 0x111ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111ED0u, 0x110168u, 0x110170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110170u;
label_110170:
    // 0x110170: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x110170u;
    {
        const bool branch_taken_0x110170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110170) {
            ctx->pc = 0x1100E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1100e0;
        }
    }
    ctx->pc = 0x110178u;
}
