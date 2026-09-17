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

// Function: sub_00510C68
// Address: 0x510c68 - 0x510d88
void sub_00510C68_0x510c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510C68_0x510c68");
#endif

    switch (ctx->pc) {
        case 0x510c7cu: goto label_510c7c;
        case 0x510c84u: goto label_510c84;
        case 0x510ca0u: goto label_510ca0;
        case 0x510cd0u: goto label_510cd0;
        case 0x510ce0u: goto label_510ce0;
        case 0x510cf0u: goto label_510cf0;
        case 0x510d00u: goto label_510d00;
        case 0x510d10u: goto label_510d10;
        case 0x510d20u: goto label_510d20;
        case 0x510d30u: goto label_510d30;
        case 0x510d40u: goto label_510d40;
        case 0x510d50u: goto label_510d50;
        case 0x510d60u: goto label_510d60;
        case 0x510d70u: goto label_510d70;
        default: break;
    }

    ctx->pc = 0x510c68u;

    // 0x510c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x510c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x510c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510c70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x510c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x510c74: 0xc144aa4  jal         func_512A90
    ctx->pc = 0x510C74u;
    SET_GPR_U32(ctx, 31, 0x510C7Cu);
    ctx->pc = 0x512A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A90u, 0x510C74u, 0x510C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510C7Cu;
label_510c7c:
    // 0x510c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x510c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510c80:
    // 0x510c80: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x510c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_510c84:
    // 0x510c84: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x510c84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x510c88: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x510C88u;
    {
        const bool branch_taken_0x510c88 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x510C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510C88u;
        // 0x510c8c: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x510c88) {
            ctx->pc = 0x510D78u;
            goto label_510d78;
        }
    }
    ctx->pc = 0x510C90u;
    // 0x510c90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x510C90u;
    {
        const bool branch_taken_0x510c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x510c90) {
            ctx->pc = 0x510C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x510C90u;
            // 0x510c94: 0x2c620010  sltiu       $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x510CA8u;
            goto label_510ca8;
        }
    }
    ctx->pc = 0x510C98u;
    // 0x510c98: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x510C98u;
    SET_GPR_U32(ctx, 31, 0x510CA0u);
    ctx->pc = 0x510C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510C98u;
    // 0x510c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x510C98u, 0x510CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510CA0u;
label_510ca0:
    // 0x510ca0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x510CA0u;
    {
        const bool branch_taken_0x510ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510CA0u;
        // 0x510ca4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510ca0) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510CA8u;
label_510ca8:
    // 0x510ca8: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x510CA8u;
    {
        const bool branch_taken_0x510ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x510ca8) {
            ctx->pc = 0x510CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x510CA8u;
            // 0x510cac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510CB0u;
    // 0x510cb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x510cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x510cb4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x510cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x510cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x510cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x510cbc: 0x8c63d410  lw          $v1, -0x2BF0($v1)
    ctx->pc = 0x510cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956048)));
    // 0x510cc0: 0x600008  jr          $v1
    ctx->pc = 0x510CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x510C80u: goto label_510c80;
            case 0x510CC8u: goto label_510cc8;
            case 0x510CD8u: goto label_510cd8;
            case 0x510CE8u: goto label_510ce8;
            case 0x510CF8u: goto label_510cf8;
            case 0x510D08u: goto label_510d08;
            case 0x510D18u: goto label_510d18;
            case 0x510D28u: goto label_510d28;
            case 0x510D38u: goto label_510d38;
            case 0x510D48u: goto label_510d48;
            case 0x510D58u: goto label_510d58;
            case 0x510D68u: goto label_510d68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510CC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x510CC8u;
label_510cc8:
    // 0x510cc8: 0xc1447a8  jal         func_511EA0
    ctx->pc = 0x510CC8u;
    SET_GPR_U32(ctx, 31, 0x510CD0u);
    ctx->pc = 0x510CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510CC8u;
    // 0x510ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511EA0u, 0x510CC8u, 0x510CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510CD0u;
label_510cd0:
    // 0x510cd0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x510CD0u;
    {
        const bool branch_taken_0x510cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510CD0u;
        // 0x510cd4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510cd0) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510CD8u;
label_510cd8:
    // 0x510cd8: 0xc142556  jal         func_509558
    ctx->pc = 0x510CD8u;
    SET_GPR_U32(ctx, 31, 0x510CE0u);
    ctx->pc = 0x510CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510CD8u;
    // 0x510cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509558u, 0x510CD8u, 0x510CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510CE0u;
label_510ce0:
    // 0x510ce0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x510CE0u;
    {
        const bool branch_taken_0x510ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510CE0u;
        // 0x510ce4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510ce0) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510CE8u;
label_510ce8:
    // 0x510ce8: 0xc1449ce  jal         func_512738
    ctx->pc = 0x510CE8u;
    SET_GPR_U32(ctx, 31, 0x510CF0u);
    ctx->pc = 0x510CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510CE8u;
    // 0x510cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512738u, 0x510CE8u, 0x510CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510CF0u;
label_510cf0:
    // 0x510cf0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x510CF0u;
    {
        const bool branch_taken_0x510cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510CF0u;
        // 0x510cf4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510cf0) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510CF8u;
label_510cf8:
    // 0x510cf8: 0xc1441e2  jal         func_510788
    ctx->pc = 0x510CF8u;
    SET_GPR_U32(ctx, 31, 0x510D00u);
    ctx->pc = 0x510CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510CF8u;
    // 0x510cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510788u, 0x510CF8u, 0x510D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D00u;
label_510d00:
    // 0x510d00: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x510D00u;
    {
        const bool branch_taken_0x510d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D00u;
        // 0x510d04: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d00) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D08u;
label_510d08:
    // 0x510d08: 0xc144a9e  jal         func_512A78
    ctx->pc = 0x510D08u;
    SET_GPR_U32(ctx, 31, 0x510D10u);
    ctx->pc = 0x510D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D08u;
    // 0x510d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A78u, 0x510D08u, 0x510D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D10u;
label_510d10:
    // 0x510d10: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x510D10u;
    {
        const bool branch_taken_0x510d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D10u;
        // 0x510d14: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d10) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D18u;
label_510d18:
    // 0x510d18: 0xc1427dc  jal         func_509F70
    ctx->pc = 0x510D18u;
    SET_GPR_U32(ctx, 31, 0x510D20u);
    ctx->pc = 0x510D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D18u;
    // 0x510d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509F70u, 0x510D18u, 0x510D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D20u;
label_510d20:
    // 0x510d20: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x510D20u;
    {
        const bool branch_taken_0x510d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D20u;
        // 0x510d24: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d20) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D28u;
label_510d28:
    // 0x510d28: 0xc141e9e  jal         func_507A78
    ctx->pc = 0x510D28u;
    SET_GPR_U32(ctx, 31, 0x510D30u);
    ctx->pc = 0x510D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D28u;
    // 0x510d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507A78u, 0x510D28u, 0x510D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D30u;
label_510d30:
    // 0x510d30: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x510D30u;
    {
        const bool branch_taken_0x510d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D30u;
        // 0x510d34: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d30) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D38u;
label_510d38:
    // 0x510d38: 0xc142634  jal         func_5098D0
    ctx->pc = 0x510D38u;
    SET_GPR_U32(ctx, 31, 0x510D40u);
    ctx->pc = 0x510D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D38u;
    // 0x510d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5098D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5098D0u, 0x510D38u, 0x510D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D40u;
label_510d40:
    // 0x510d40: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x510D40u;
    {
        const bool branch_taken_0x510d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D40u;
        // 0x510d44: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d40) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D48u;
label_510d48:
    // 0x510d48: 0xc143b34  jal         func_50ECD0
    ctx->pc = 0x510D48u;
    SET_GPR_U32(ctx, 31, 0x510D50u);
    ctx->pc = 0x510D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D48u;
    // 0x510d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50ECD0u, 0x510D48u, 0x510D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D50u;
label_510d50:
    // 0x510d50: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x510D50u;
    {
        const bool branch_taken_0x510d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D50u;
        // 0x510d54: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d50) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D58u;
label_510d58:
    // 0x510d58: 0xc14338e  jal         func_50CE38
    ctx->pc = 0x510D58u;
    SET_GPR_U32(ctx, 31, 0x510D60u);
    ctx->pc = 0x510D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D58u;
    // 0x510d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CE38u, 0x510D58u, 0x510D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D60u;
label_510d60:
    // 0x510d60: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x510D60u;
    {
        const bool branch_taken_0x510d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D60u;
        // 0x510d64: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d60) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D68u;
label_510d68:
    // 0x510d68: 0xc143480  jal         func_50D200
    ctx->pc = 0x510D68u;
    SET_GPR_U32(ctx, 31, 0x510D70u);
    ctx->pc = 0x510D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510D68u;
    // 0x510d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D200u, 0x510D68u, 0x510D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D70u;
label_510d70:
    // 0x510d70: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x510D70u;
    {
        const bool branch_taken_0x510d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D70u;
        // 0x510d74: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510d70) {
            ctx->pc = 0x510C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_510c84;
        }
    }
    ctx->pc = 0x510D78u;
label_510d78:
    // 0x510d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x510d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x510d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510d80: 0x3e00008  jr          $ra
    ctx->pc = 0x510D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510D80u;
        // 0x510d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510D88u;
}
