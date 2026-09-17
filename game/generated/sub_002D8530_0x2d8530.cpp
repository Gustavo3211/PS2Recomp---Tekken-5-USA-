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

// Function: sub_002D8530
// Address: 0x2d8530 - 0x2d8600
void sub_002D8530_0x2d8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8530_0x2d8530");
#endif

    switch (ctx->pc) {
        case 0x2d85a0u: goto label_2d85a0;
        default: break;
    }

    ctx->pc = 0x2d8530u;

    // 0x2d8530: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2d8530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d8534: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8534u;
    {
        const bool branch_taken_0x2d8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8534u;
        // 0x2d8538: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8534) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D853Cu;
    // 0x2d853c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d8540: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d8544: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d8548: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d8548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d854c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d8550: 0x8c8490d8  lw          $a0, -0x6F28($a0)
    ctx->pc = 0x2d8550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294938840)));
    // 0x2d8554: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d8558: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d855c: 0x8cc690e0  lw          $a2, -0x6F20($a2)
    ctx->pc = 0x2d855cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938848)));
    // 0x2d8560: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2d8564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d8568: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d8568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d856c: 0x10450022  beq         $v0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D856Cu;
    {
        const bool branch_taken_0x2d856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d856c) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D8574u;
    // 0x2d8574: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8578: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d8578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d857c: 0x8c4290dc  lw          $v0, -0x6F24($v0)
    ctx->pc = 0x2d857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938844)));
    // 0x2d8580: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d8580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8584: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D8584u;
    {
        const bool branch_taken_0x2d8584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8584) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D858Cu;
    // 0x2d858c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2d8590: 0x350890d0  ori         $t0, $t0, 0x90D0
    ctx->pc = 0x2d8590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)37072);
    // 0x2d8594: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2d8598: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x2d8598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2d859c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2d859cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2d85a0:
    // 0x2d85a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d85a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d85a8: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d85ac: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x2d85acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d85b0: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d85b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d85b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D85B4u;
    {
        const bool branch_taken_0x2d85b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85B4u;
        // 0x2d85b8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85b4) {
            ctx->pc = 0x2D85D4u;
            goto label_2d85d4;
        }
    }
    ctx->pc = 0x2D85BCu;
    // 0x2d85bc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d85bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d85c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d85c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d85c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d85cc: 0xa44500a0  sh          $a1, 0xA0($v0)
    ctx->pc = 0x2d85ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d85d0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2d85d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2d85d4:
    // 0x2d85d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d85d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d85d8: 0x104a0007  beq         $v0, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D85D8u;
    {
        const bool branch_taken_0x2d85d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x2D85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85D8u;
        // 0x2d85dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85d8) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D85E0u;
    // 0x2d85e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d85e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d85e8: 0x8c4290dc  lw          $v0, -0x6F24($v0)
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938844)));
    // 0x2d85ec: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d85ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d85f0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D85F0u;
    {
        const bool branch_taken_0x2d85f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d85f0) {
            ctx->pc = 0x2D85A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D85F8u;
label_2d85f8:
    // 0x2d85f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D85F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8600u;
}
