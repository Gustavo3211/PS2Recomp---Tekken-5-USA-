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

// Function: sub_0021D870
// Address: 0x21d870 - 0x21d8e8
void sub_0021D870_0x21d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D870_0x21d870");
#endif

    switch (ctx->pc) {
        case 0x21d8a0u: goto label_21d8a0;
        default: break;
    }

    ctx->pc = 0x21d870u;

    // 0x21d870: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x21d870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21d874: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D874u;
    {
        const bool branch_taken_0x21d874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D874u;
        // 0x21d878: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d874) {
            ctx->pc = 0x21D888u;
            goto label_21d888;
        }
    }
    ctx->pc = 0x21D87Cu;
    // 0x21d87c: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21D87Cu;
    {
        const bool branch_taken_0x21d87c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D87Cu;
        // 0x21d880: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d87c) {
            ctx->pc = 0x21D8E0u;
            goto label_21d8e0;
        }
    }
    ctx->pc = 0x21D884u;
    // 0x21d884: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_21d888:
    // 0x21d888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21d888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21d88c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x21d88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21d890: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D890u;
    {
        const bool branch_taken_0x21d890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d890) {
            ctx->pc = 0x21D8BCu;
            goto label_21d8bc;
        }
    }
    ctx->pc = 0x21D898u;
    // 0x21d898: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x21d898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x21d89c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21d89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21d8a0:
    // 0x21d8a0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x21d8a4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x21d8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21d8a8: 0x0  nop
    ctx->pc = 0x21d8a8u;
    // NOP
    // 0x21d8ac: 0x0  nop
    ctx->pc = 0x21d8acu;
    // NOP
    // 0x21d8b0: 0x0  nop
    ctx->pc = 0x21d8b0u;
    // NOP
    // 0x21d8b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21D8B4u;
    {
        const bool branch_taken_0x21d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B4u;
        // 0x21d8b8: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8b4) {
            ctx->pc = 0x21D8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d8a0;
        }
    }
    ctx->pc = 0x21D8BCu;
label_21d8bc:
    // 0x21d8bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D8BCu;
    {
        const bool branch_taken_0x21d8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8BCu;
        // 0x21d8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8bc) {
            ctx->pc = 0x21D8E0u;
            goto label_21d8e0;
        }
    }
    ctx->pc = 0x21D8C4u;
    // 0x21d8c4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x21d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21d8c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x21d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d8cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d8d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d8d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21d8d8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x21d8d8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x21d8dc: 0x1012  mflo        $v0
    ctx->pc = 0x21d8dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21d8e0:
    // 0x21d8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D8E8u;
}
