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

// Function: sub_002FB088
// Address: 0x2fb088 - 0x2fb128
void sub_002FB088_0x2fb088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB088_0x2fb088");
#endif

    switch (ctx->pc) {
        case 0x2fb0a8u: goto label_2fb0a8;
        default: break;
    }

    ctx->pc = 0x2fb088u;

    // 0x2fb088: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2fb088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb08c: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x2fb08cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2fb090: 0x19400023  blez        $t2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FB090u;
    {
        const bool branch_taken_0x2fb090 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2FB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB090u;
        // 0x2fb094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb090) {
            ctx->pc = 0x2FB120u;
            goto label_2fb120;
        }
    }
    ctx->pc = 0x2FB098u;
    // 0x2fb098: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x2fb098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x2fb09c: 0xc26024  and         $t4, $a2, $v0
    ctx->pc = 0x2fb09cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fb0a0: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x2fb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2fb0a4: 0x0  nop
    ctx->pc = 0x2fb0a4u;
    // NOP
label_2fb0a8:
    // 0x2fb0a8: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x2fb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2fb0ac: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2fb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2fb0b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2fb0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2fb0b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2fb0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fb0bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fb0bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0c0: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2fb0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fb0c4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2fb0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb0cc: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2fb0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2fb0d0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2fb0d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB0D4u;
    {
        const bool branch_taken_0x2fb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0D4u;
        // 0x2fb0d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0d4) {
            ctx->pc = 0x2FB0E4u;
            goto label_2fb0e4;
        }
    }
    ctx->pc = 0x2FB0DCu;
    // 0x2fb0dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fb0e0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2fb0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb0e4:
    // 0x2fb0e4: 0x14e5000c  bne         $a3, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FB0E4u;
    {
        const bool branch_taken_0x2fb0e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x2FB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0E4u;
        // 0x2fb0e8: 0x12a102a  slt         $v0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0e4) {
            ctx->pc = 0x2FB118u;
            goto label_2fb118;
        }
    }
    ctx->pc = 0x2FB0ECu;
    // 0x2fb0ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2fb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fb0f0: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2fb0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2fb0f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2fb0f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB0F8u;
    {
        const bool branch_taken_0x2fb0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0F8u;
        // 0x2fb0fc: 0x12a102a  slt         $v0, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0f8) {
            ctx->pc = 0x2FB118u;
            goto label_2fb118;
        }
    }
    ctx->pc = 0x2FB100u;
    // 0x2fb100: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB100u;
    {
        const bool branch_taken_0x2fb100 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb100) {
            ctx->pc = 0x2FB118u;
            goto label_2fb118;
        }
    }
    ctx->pc = 0x2FB108u;
    // 0x2fb108: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2fb108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2fb10c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2fb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2fb110: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x2fb110u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2fb114: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x2fb114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2fb118:
    // 0x2fb118: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2FB118u;
    {
        const bool branch_taken_0x2fb118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB118u;
        // 0x2fb11c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb118) {
            ctx->pc = 0x2FB0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb0a8;
        }
    }
    ctx->pc = 0x2FB120u;
label_2fb120:
    // 0x2fb120: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB128u;
}
