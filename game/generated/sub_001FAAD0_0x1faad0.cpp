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

// Function: sub_001FAAD0
// Address: 0x1faad0 - 0x1facb8
void sub_001FAAD0_0x1faad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAAD0_0x1faad0");
#endif

    switch (ctx->pc) {
        case 0x1fab28u: goto label_1fab28;
        case 0x1fab40u: goto label_1fab40;
        case 0x1fab4cu: goto label_1fab4c;
        case 0x1fab70u: goto label_1fab70;
        case 0x1faba8u: goto label_1faba8;
        case 0x1fabc4u: goto label_1fabc4;
        case 0x1fabe8u: goto label_1fabe8;
        case 0x1fac04u: goto label_1fac04;
        case 0x1fac38u: goto label_1fac38;
        case 0x1fac50u: goto label_1fac50;
        case 0x1fac6cu: goto label_1fac6c;
        default: break;
    }

    ctx->pc = 0x1faad0u;

    // 0x1faad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1faad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1faad4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1faad8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1faad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1faadc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1faadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faae0: 0x3c0680fe  lui         $a2, 0x80FE
    ctx->pc = 0x1faae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33022 << 16));
    // 0x1faae4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1faae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1faae8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1faae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1faaec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1faaecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faaf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1faaf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faaf4: 0x24442028  addiu       $a0, $v0, 0x2028
    ctx->pc = 0x1faaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8232));
    // 0x1faaf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1faaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faafc: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1faafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fab00: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fab04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fab08: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1fab0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fab10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fab14: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1fab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1fab18: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1fab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1fab1c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1fab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1fab20: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FAB20u;
    SET_GPR_U32(ctx, 31, 0x1FAB28u);
    ctx->pc = 0x1FAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB20u;
    // 0x1fab24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FAB20u, 0x1FAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB28u;
label_1fab28:
    // 0x1fab28: 0x92b10206  lbu         $s1, 0x206($s5)
    ctx->pc = 0x1fab28u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 518)));
    // 0x1fab2c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1fab2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fab30: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FAB30u;
    {
        const bool branch_taken_0x1fab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB30u;
        // 0x1fab34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab30) {
            ctx->pc = 0x1FAB98u;
            goto label_1fab98;
        }
    }
    ctx->pc = 0x1FAB38u;
    // 0x1fab38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAB38u;
    {
        const bool branch_taken_0x1fab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB38u;
        // 0x1fab3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab38) {
            ctx->pc = 0x1FAB50u;
            goto label_1fab50;
        }
    }
    ctx->pc = 0x1FAB40u;
label_1fab40:
    // 0x1fab40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fab40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fab44: 0xc0b65b8  jal         func_2D96E0
    ctx->pc = 0x1FAB44u;
    SET_GPR_U32(ctx, 31, 0x1FAB4Cu);
    ctx->pc = 0x1FAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB44u;
    // 0x1fab48: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96E0u, 0x1FAB44u, 0x1FAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB4Cu;
label_1fab4c:
    // 0x1fab4c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fab50:
    // 0x1fab50: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1fab50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1fab54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FAB54u;
    {
        const bool branch_taken_0x1fab54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB54u;
        // 0x1fab58: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab54) {
            ctx->pc = 0x1FAB84u;
            goto label_1fab84;
        }
    }
    ctx->pc = 0x1FAB5Cu;
    // 0x1fab5c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1fab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fab60: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x1fab60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1fab64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fab68: 0xc0b65b8  jal         func_2D96E0
    ctx->pc = 0x1FAB68u;
    SET_GPR_U32(ctx, 31, 0x1FAB70u);
    ctx->pc = 0x1FAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAB68u;
    // 0x1fab6c: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96E0u, 0x1FAB68u, 0x1FAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB70u;
label_1fab70:
    // 0x1fab70: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1fab70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fab74: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FAB74u;
    {
        const bool branch_taken_0x1fab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fab74) {
            ctx->pc = 0x1FAB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAB74u;
            // 0x1fab78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab40;
        }
    }
    ctx->pc = 0x1FAB7Cu;
    // 0x1fab7c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1fab7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab80: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1fab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1fab84:
    // 0x1fab84: 0x2663fffe  addiu       $v1, $s3, -0x2
    ctx->pc = 0x1fab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1fab88: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x1fab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x1fab8c: 0x92a40206  lbu         $a0, 0x206($s5)
    ctx->pc = 0x1fab8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 518)));
    // 0x1fab90: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1fab90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x1fab94: 0x26930002  addiu       $s3, $s4, 0x2
    ctx->pc = 0x1fab94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_1fab98:
    // 0x1fab98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fab98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab9c: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAB9Cu;
    {
        const bool branch_taken_0x1fab9c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1FABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB9Cu;
        // 0x1faba0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab9c) {
            ctx->pc = 0x1FABD0u;
            goto label_1fabd0;
        }
    }
    ctx->pc = 0x1FABA4u;
    // 0x1faba4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1faba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faba8:
    // 0x1faba8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1faba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fabac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fabacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fabb0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1fabb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fabb8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1fabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1fabbc: 0xc0b65b8  jal         func_2D96E0
    ctx->pc = 0x1FABBCu;
    SET_GPR_U32(ctx, 31, 0x1FABC4u);
    ctx->pc = 0x1FABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABBCu;
    // 0x1fabc0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96E0u, 0x1FABBCu, 0x1FABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABC4u;
label_1fabc4:
    // 0x1fabc4: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x1fabc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fabc8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FABC8u;
    {
        const bool branch_taken_0x1fabc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABC8u;
        // 0x1fabcc: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabc8) {
            ctx->pc = 0x1FABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faba8;
        }
    }
    ctx->pc = 0x1FABD0u;
label_1fabd0:
    // 0x1fabd0: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1fabd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1fabd4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1fabd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fabd8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FABD8u;
    {
        const bool branch_taken_0x1fabd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABD8u;
        // 0x1fabdc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabd8) {
            ctx->pc = 0x1FAC78u;
            goto label_1fac78;
        }
    }
    ctx->pc = 0x1FABE0u;
    // 0x1fabe0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1fabe0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fabe4: 0x293b823  subu        $s7, $s4, $s3
    ctx->pc = 0x1fabe4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1fabe8:
    // 0x1fabe8: 0x2f52821  addu        $a1, $s7, $s5
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x1fabec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fabecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fabf0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x1fabf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fabf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fabf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fabf8: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1fabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1fabfc: 0xc0a3b04  jal         func_28EC10
    ctx->pc = 0x1FABFCu;
    SET_GPR_U32(ctx, 31, 0x1FAC04u);
    ctx->pc = 0x1FAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABFCu;
    // 0x1fac00: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC10u, 0x1FABFCu, 0x1FAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC04u;
label_1fac04:
    // 0x1fac04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fac08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac0c: 0x3c0780fe  lui         $a3, 0x80FE
    ctx->pc = 0x1fac0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33022 << 16));
    // 0x1fac10: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fac14: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1fac18: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fac1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1fac20: 0x34e7fefe  ori         $a3, $a3, 0xFEFE
    ctx->pc = 0x1fac20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65278);
    // 0x1fac24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fac24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac28: 0x244435b0  addiu       $a0, $v0, 0x35B0
    ctx->pc = 0x1fac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
    // 0x1fac2c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1fac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1fac30: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FAC30u;
    SET_GPR_U32(ctx, 31, 0x1FAC38u);
    ctx->pc = 0x1FAC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC30u;
    // 0x1fac34: 0x24c6000e  addiu       $a2, $a2, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FAC30u, 0x1FAC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC38u;
label_1fac38:
    // 0x1fac38: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1fac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1fac3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac40: 0x24442030  addiu       $a0, $v0, 0x2030
    ctx->pc = 0x1fac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x1fac44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fac44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fac48: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FAC48u;
    SET_GPR_U32(ctx, 31, 0x1FAC50u);
    ctx->pc = 0x1FAC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC48u;
    // 0x1fac4c: 0x24a501d6  addiu       $a1, $a1, 0x1D6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 470));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FAC48u, 0x1FAC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC50u;
label_1fac50:
    // 0x1fac50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fac54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fac54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fac58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac5c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1fac60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fac64: 0xc0b65c0  jal         func_2D9700
    ctx->pc = 0x1FAC64u;
    SET_GPR_U32(ctx, 31, 0x1FAC6Cu);
    ctx->pc = 0x1FAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC64u;
    // 0x1fac68: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9700u, 0x1FAC64u, 0x1FAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC6Cu;
label_1fac6c:
    // 0x1fac6c: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1fac6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1fac70: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1FAC70u;
    {
        const bool branch_taken_0x1fac70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC70u;
        // 0x1fac74: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac70) {
            ctx->pc = 0x1FABE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fabe8;
        }
    }
    ctx->pc = 0x1FAC78u;
label_1fac78:
    // 0x1fac78: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x1fac78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1fac7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fac7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fac80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fac80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fac84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fac88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fac88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fac8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fac8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fac90: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fac90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fac94: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1fac94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fac98: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1fac98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fac9c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1fac9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1faca0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1faca0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1faca4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1faca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1faca8: 0xa443b450  sh          $v1, -0x4BB0($v0)
    ctx->pc = 0x1faca8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3AB450u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3AB450u, _value); } while (0);
    // 0x1facac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACACu;
        // 0x1facb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FACB4u;
    // 0x1facb4: 0x0  nop
    ctx->pc = 0x1facb4u;
    // NOP
    ctx->pc = 0x1facb8u;
}
