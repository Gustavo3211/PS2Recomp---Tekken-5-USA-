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

// Function: sub_001F50A8
// Address: 0x1f50a8 - 0x1f51b0
void sub_001F50A8_0x1f50a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F50A8_0x1f50a8");
#endif

    switch (ctx->pc) {
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5180u: goto label_1f5180;
        default: break;
    }

    ctx->pc = 0x1f50a8u;

    // 0x1f50a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f50a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f50ac: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1f50acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1f50b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f50b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f50bc: 0x8ca388d0  lw          $v1, -0x7730($a1)
    ctx->pc = 0x1f50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
label_1f50c0:
    // 0x1f50c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f50c4: 0xa06001f4  sb          $zero, 0x1F4($v1)
    ctx->pc = 0x1f50c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50c8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1f50c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f50cc: 0xa06001f6  sb          $zero, 0x1F6($v1)
    ctx->pc = 0x1f50ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 502), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50d0: 0xa06001f5  sb          $zero, 0x1F5($v1)
    ctx->pc = 0x1f50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 501), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f50d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F50D4u;
    {
        const bool branch_taken_0x1f50d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50D4u;
        // 0x1f50d8: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50d4) {
            ctx->pc = 0x1F50C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f50c0;
        }
    }
    ctx->pc = 0x1F50DCu;
    // 0x1f50dc: 0x8ca388d0  lw          $v1, -0x7730($a1)
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x1f50e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f50e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f50e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50e8:
    // 0x1f50e8: 0x84620148  lh          $v0, 0x148($v1)
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1f50ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F50ECu;
    {
        const bool branch_taken_0x1f50ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50ECu;
        // 0x1f50f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50ec) {
            ctx->pc = 0x1F5100u;
            goto label_1f5100;
        }
    }
    ctx->pc = 0x1F50F4u;
    // 0x1f50f4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1f50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f50f8: 0xa06501f6  sb          $a1, 0x1F6($v1)
    ctx->pc = 0x1f50f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 502), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f50fc: 0xa04501f6  sb          $a1, 0x1F6($v0)
    ctx->pc = 0x1f50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 502), (uint8_t)GPR_U32(ctx, 5));
label_1f5100:
    // 0x1f5100: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1f5100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5104: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5104u;
    {
        const bool branch_taken_0x1f5104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5104u;
        // 0x1f5108: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5104) {
            ctx->pc = 0x1F50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f50e8;
        }
    }
    ctx->pc = 0x1F510Cu;
    // 0x1f510c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f5110: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f5110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5114: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f5118: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F5118u;
    {
        const bool branch_taken_0x1f5118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f5118) {
            ctx->pc = 0x1F515Cu;
            goto label_1f515c;
        }
    }
    ctx->pc = 0x1F5120u;
    // 0x1f5120: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F5120u;
    SET_GPR_U32(ctx, 31, 0x1F5128u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F5120u, 0x1F5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5128u;
label_1f5128:
    // 0x1f5128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f512c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F512Cu;
    SET_GPR_U32(ctx, 31, 0x1F5134u);
    ctx->pc = 0x1F5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F512Cu;
    // 0x1f5130: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F512Cu, 0x1F5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5134u;
label_1f5134:
    // 0x1f5134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5138: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5138u;
    {
        const bool branch_taken_0x1f5138 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5138u;
        // 0x1f513c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5138) {
            ctx->pc = 0x1F515Cu;
            goto label_1f515c;
        }
    }
    ctx->pc = 0x1F5140u;
label_1f5140:
    // 0x1f5140: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5144: 0xa06001f4  sb          $zero, 0x1F4($v1)
    ctx->pc = 0x1f5144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5148: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1f5148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f514c: 0xa06001f6  sb          $zero, 0x1F6($v1)
    ctx->pc = 0x1f514cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 502), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5150: 0xa06001f5  sb          $zero, 0x1F5($v1)
    ctx->pc = 0x1f5150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 501), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5154u;
    {
        const bool branch_taken_0x1f5154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5154u;
        // 0x1f5158: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5154) {
            ctx->pc = 0x1F5140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5140;
        }
    }
    ctx->pc = 0x1F515Cu;
label_1f515c:
    // 0x1f515c: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F515Cu;
    SET_GPR_U32(ctx, 31, 0x1F5164u);
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F515Cu, 0x1F5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5164u;
label_1f5164:
    // 0x1f5164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5168: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F5168u;
    SET_GPR_U32(ctx, 31, 0x1F5170u);
    ctx->pc = 0x1F516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5168u;
    // 0x1f516c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F5168u, 0x1F5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5170u;
label_1f5170:
    // 0x1f5170: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5174: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5174u;
    {
        const bool branch_taken_0x1f5174 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5174u;
        // 0x1f5178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5174) {
            ctx->pc = 0x1F519Cu;
            goto label_1f519c;
        }
    }
    ctx->pc = 0x1F517Cu;
    // 0x1f517c: 0x0  nop
    ctx->pc = 0x1f517cu;
    // NOP
label_1f5180:
    // 0x1f5180: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5184: 0xa06001f4  sb          $zero, 0x1F4($v1)
    ctx->pc = 0x1f5184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5188: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f518c: 0xa06001f6  sb          $zero, 0x1F6($v1)
    ctx->pc = 0x1f518cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 502), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5190: 0xa06001f5  sb          $zero, 0x1F5($v1)
    ctx->pc = 0x1f5190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 501), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F5194u;
    {
        const bool branch_taken_0x1f5194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5194u;
        // 0x1f5198: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5194) {
            ctx->pc = 0x1F5180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5180;
        }
    }
    ctx->pc = 0x1F519Cu;
label_1f519c:
    // 0x1f519c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f519cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f51a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f51a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51A4u;
        // 0x1f51a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F51ACu;
    // 0x1f51ac: 0x0  nop
    ctx->pc = 0x1f51acu;
    // NOP
    ctx->pc = 0x1f51b0u;
}
