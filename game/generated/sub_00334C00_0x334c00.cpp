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

// Function: sub_00334C00
// Address: 0x334c00 - 0x334e18
void sub_00334C00_0x334c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334C00_0x334c00");
#endif

    switch (ctx->pc) {
        case 0x334c3cu: goto label_334c3c;
        case 0x334c48u: goto label_334c48;
        case 0x334c54u: goto label_334c54;
        case 0x334c60u: goto label_334c60;
        case 0x334c9cu: goto label_334c9c;
        case 0x334ca8u: goto label_334ca8;
        case 0x334cc0u: goto label_334cc0;
        case 0x334ce4u: goto label_334ce4;
        case 0x334cf4u: goto label_334cf4;
        case 0x334d20u: goto label_334d20;
        case 0x334d2cu: goto label_334d2c;
        case 0x334d38u: goto label_334d38;
        case 0x334d74u: goto label_334d74;
        case 0x334d98u: goto label_334d98;
        case 0x334da0u: goto label_334da0;
        case 0x334da8u: goto label_334da8;
        case 0x334dbcu: goto label_334dbc;
        case 0x334dc8u: goto label_334dc8;
        default: break;
    }

    ctx->pc = 0x334c00u;

    // 0x334c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x334c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x334c04: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x334c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x334c08: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x334c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x334c0c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x334c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x334c10: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x334c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x334c14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x334c14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c18: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x334c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x334c1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x334c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x334c20: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x334c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x334c24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x334c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x334c28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x334c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x334c2c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x334c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x334c30: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x334c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x334c34: 0xc0cd386  jal         func_334E18
    ctx->pc = 0x334C34u;
    SET_GPR_U32(ctx, 31, 0x334C3Cu);
    ctx->pc = 0x334C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C34u;
    // 0x334c38: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E18u, 0x334C34u, 0x334C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C3Cu;
label_334c3c:
    // 0x334c3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x334c3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c40: 0x1ac00069  blez        $s6, . + 4 + (0x69 << 2)
    ctx->pc = 0x334C40u;
    {
        const bool branch_taken_0x334c40 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x334C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C40u;
        // 0x334c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c40) {
            ctx->pc = 0x334DE8u;
            goto label_334de8;
        }
    }
    ctx->pc = 0x334C48u;
label_334c48:
    // 0x334c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x334c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c4c: 0xc0cd386  jal         func_334E18
    ctx->pc = 0x334C4Cu;
    SET_GPR_U32(ctx, 31, 0x334C54u);
    ctx->pc = 0x334C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C4Cu;
    // 0x334c50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E18u, 0x334C4Cu, 0x334C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C54u;
label_334c54:
    // 0x334c54: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x334c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x334c58: 0xc0cd386  jal         func_334E18
    ctx->pc = 0x334C58u;
    SET_GPR_U32(ctx, 31, 0x334C60u);
    ctx->pc = 0x334C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C58u;
    // 0x334c5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E18u, 0x334C58u, 0x334C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C60u;
label_334c60:
    // 0x334c60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x334c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c64: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x334c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x334c68: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x334c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x334c6c: 0x16400024  bnez        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x334C6Cu;
    {
        const bool branch_taken_0x334c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C6Cu;
        // 0x334c70: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c6c) {
            ctx->pc = 0x334D00u;
            goto label_334d00;
        }
    }
    ctx->pc = 0x334C74u;
    // 0x334c74: 0x82630010  lb          $v1, 0x10($s3)
    ctx->pc = 0x334c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x334c78: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x334c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x334c7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334C7Cu;
    {
        const bool branch_taken_0x334c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C7Cu;
        // 0x334c80: 0x26700011  addiu       $s0, $s3, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c7c) {
            ctx->pc = 0x334C98u;
            goto label_334c98;
        }
    }
    ctx->pc = 0x334C84u;
    // 0x334c84: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x334c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x334c88: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x334C88u;
    {
        const bool branch_taken_0x334c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334c88) {
            ctx->pc = 0x334CB8u;
            goto label_334cb8;
        }
    }
    ctx->pc = 0x334C90u;
    // 0x334c90: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x334C90u;
    {
        const bool branch_taken_0x334c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C90u;
        // 0x334c94: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c90) {
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334C98u;
label_334c98:
    // 0x334c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334c9c:
    // 0x334c9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x334c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ca0: 0xc0460da  jal         func_118368
    ctx->pc = 0x334CA0u;
    SET_GPR_U32(ctx, 31, 0x334CA8u);
    ctx->pc = 0x334CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CA0u;
    // 0x334ca4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118368u, 0x334CA0u, 0x334CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CA8u;
label_334ca8:
    // 0x334ca8: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x334CA8u;
    {
        const bool branch_taken_0x334ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x334CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CA8u;
        // 0x334cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ca8) {
            ctx->pc = 0x334C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334c9c;
        }
    }
    ctx->pc = 0x334CB0u;
    // 0x334cb0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x334CB0u;
    {
        const bool branch_taken_0x334cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CB0u;
        // 0x334cb4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cb0) {
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334CB8u;
label_334cb8:
    // 0x334cb8: 0xc045ff4  jal         func_117FD0
    ctx->pc = 0x334CB8u;
    SET_GPR_U32(ctx, 31, 0x334CC0u);
    ctx->pc = 0x334CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CB8u;
    // 0x334cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FD0u, 0x334CB8u, 0x334CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CC0u;
label_334cc0:
    // 0x334cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cc4: 0x5a000043  blezl       $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x334CC4u;
    {
        const bool branch_taken_0x334cc4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x334cc4) {
            ctx->pc = 0x334CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334CC4u;
            // 0x334cc8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334CCCu;
    // 0x334ccc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x334cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x334cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cd8: 0x24464f48  addiu       $a2, $v0, 0x4F48
    ctx->pc = 0x334cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20296));
    // 0x334cdc: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x334CDCu;
    SET_GPR_U32(ctx, 31, 0x334CE4u);
    ctx->pc = 0x334CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CDCu;
    // 0x334ce0: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D38u, 0x334CDCu, 0x334CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CE4u;
label_334ce4:
    // 0x334ce4: 0x442003b  bltzl       $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x334CE4u;
    {
        const bool branch_taken_0x334ce4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x334ce4) {
            ctx->pc = 0x334CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334CE4u;
            // 0x334ce8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334CECu;
    // 0x334cec: 0xc045fd0  jal         func_117F40
    ctx->pc = 0x334CECu;
    SET_GPR_U32(ctx, 31, 0x334CF4u);
    ctx->pc = 0x334CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CECu;
    // 0x334cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F40u, 0x334CECu, 0x334CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CF4u;
label_334cf4:
    // 0x334cf4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x334CF4u;
    {
        const bool branch_taken_0x334cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CF4u;
        // 0x334cf8: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cf4) {
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334CFCu;
    // 0x334cfc: 0x0  nop
    ctx->pc = 0x334cfcu;
    // NOP
label_334d00:
    // 0x334d00: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x334D00u;
    {
        const bool branch_taken_0x334d00 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D00u;
        // 0x334d04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d00) {
            ctx->pc = 0x334D18u;
            goto label_334d18;
        }
    }
    ctx->pc = 0x334D08u;
    // 0x334d08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d0c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x334D0Cu;
    {
        const bool branch_taken_0x334d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D0Cu;
        // 0x334d10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d0c) {
            ctx->pc = 0x334D6Cu;
            goto label_334d6c;
        }
    }
    ctx->pc = 0x334D14u;
    // 0x334d14: 0x0  nop
    ctx->pc = 0x334d14u;
    // NOP
label_334d18:
    // 0x334d18: 0xc045de2  jal         func_117788
    ctx->pc = 0x334D18u;
    SET_GPR_U32(ctx, 31, 0x334D20u);
    ctx->pc = 0x117788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117788u, 0x334D18u, 0x334D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D20u;
label_334d20:
    // 0x334d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d24: 0xc045d28  jal         func_1174A0
    ctx->pc = 0x334D24u;
    SET_GPR_U32(ctx, 31, 0x334D2Cu);
    ctx->pc = 0x334D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D24u;
    // 0x334d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1174A0u, 0x334D24u, 0x334D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D2Cu;
label_334d2c:
    // 0x334d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x334d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d30: 0xc045d82  jal         func_117608
    ctx->pc = 0x334D30u;
    SET_GPR_U32(ctx, 31, 0x334D38u);
    ctx->pc = 0x334D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D30u;
    // 0x334d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117608u, 0x334D30u, 0x334D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D38u;
label_334d38:
    // 0x334d38: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x334d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x334d3c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x334d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x334d40: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x334d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x334d44: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x334d44u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x334d48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x334d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x334d4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x334d4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x334d50: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x334d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x334d54: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x334d54u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x334d58: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x334d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x334d5c: 0x263100ff  addiu       $s1, $s1, 0xFF
    ctx->pc = 0x334d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 255));
    // 0x334d60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x334d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334d64: 0x2263024  and         $a2, $s1, $a2
    ctx->pc = 0x334d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x334d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_334d6c:
    // 0x334d6c: 0xc045d44  jal         func_117510
    ctx->pc = 0x334D6Cu;
    SET_GPR_U32(ctx, 31, 0x334D74u);
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x334D6Cu, 0x334D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D74u;
label_334d74:
    // 0x334d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x334d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d78: 0x26620140  addiu       $v0, $s3, 0x140
    ctx->pc = 0x334d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x334d7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x334d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x334d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334d84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x334d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x334d88: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x334d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x334d8c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x334d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x334d90: 0xc043dd8  jal         func_10F760
    ctx->pc = 0x334D90u;
    SET_GPR_U32(ctx, 31, 0x334D98u);
    ctx->pc = 0x334D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D90u;
    // 0x334d94: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F760u, 0x334D90u, 0x334D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D98u;
label_334d98:
    // 0x334d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d9c: 0x0  nop
    ctx->pc = 0x334d9cu;
    // NOP
label_334da0:
    // 0x334da0: 0xc043dd0  jal         func_10F740
    ctx->pc = 0x334DA0u;
    SET_GPR_U32(ctx, 31, 0x334DA8u);
    ctx->pc = 0x334DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DA0u;
    // 0x334da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F740u, 0x334DA0u, 0x334DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA8u;
label_334da8:
    // 0x334da8: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x334DA8u;
    {
        const bool branch_taken_0x334da8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x334DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DA8u;
        // 0x334dac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334da8) {
            ctx->pc = 0x334DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334da0;
        }
    }
    ctx->pc = 0x334DB0u;
    // 0x334db0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x334db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334db4: 0xc046040  jal         func_118100
    ctx->pc = 0x334DB4u;
    SET_GPR_U32(ctx, 31, 0x334DBCu);
    ctx->pc = 0x334DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DB4u;
    // 0x334db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118100u, 0x334DB4u, 0x334DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DBCu;
label_334dbc:
    // 0x334dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dc0: 0xc045d64  jal         func_117590
    ctx->pc = 0x334DC0u;
    SET_GPR_U32(ctx, 31, 0x334DC8u);
    ctx->pc = 0x334DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DC0u;
    // 0x334dc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117590u, 0x334DC0u, 0x334DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DC8u;
label_334dc8:
    // 0x334dc8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334DC8u;
    {
        const bool branch_taken_0x334dc8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x334DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DC8u;
        // 0x334dcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dc8) {
            ctx->pc = 0x334DE8u;
            goto label_334de8;
        }
    }
    ctx->pc = 0x334DD0u;
    // 0x334dd0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x334dd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_334dd4:
    // 0x334dd4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x334dd8: 0x2f6182a  slt         $v1, $s7, $s6
    ctx->pc = 0x334dd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x334ddc: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x334DDCu;
    {
        const bool branch_taken_0x334ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DDCu;
        // 0x334de0: 0x24530140  addiu       $s3, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ddc) {
            ctx->pc = 0x334C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334c48;
        }
    }
    ctx->pc = 0x334DE4u;
    // 0x334de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334de8:
    // 0x334de8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x334de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334dec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x334decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x334df0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x334df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334df4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x334df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x334df8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x334df8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334dfc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x334dfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x334e00: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x334e00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334e04: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x334e04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x334e08: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x334e08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334e0c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x334e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x334e10: 0x3e00008  jr          $ra
    ctx->pc = 0x334E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E10u;
        // 0x334e14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334E18u;
}
