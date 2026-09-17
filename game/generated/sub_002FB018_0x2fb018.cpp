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

// Function: sub_002FB018
// Address: 0x2fb018 - 0x2fb088
void sub_002FB018_0x2fb018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB018_0x2fb018");
#endif

    switch (ctx->pc) {
        case 0x2fb038u: goto label_2fb038;
        default: break;
    }

    ctx->pc = 0x2fb018u;

    // 0x2fb018: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2fb018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb01c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2fb01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2fb020: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FB020u;
    {
        const bool branch_taken_0x2fb020 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2FB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB020u;
        // 0x2fb024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb020) {
            ctx->pc = 0x2FB07Cu;
            goto label_2fb07c;
        }
    }
    ctx->pc = 0x2FB028u;
    // 0x2fb028: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x2fb02c: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x2fb02cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fb030: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2fb034: 0x0  nop
    ctx->pc = 0x2fb034u;
    // NOP
label_2fb038:
    // 0x2fb038: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x2fb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2fb03c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fb040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fb044: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fb048: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb04c: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2fb04cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2fb050: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fb050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2fb054: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB054u;
    {
        const bool branch_taken_0x2fb054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB054u;
        // 0x2fb058: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb054) {
            ctx->pc = 0x2FB070u;
            goto label_2fb070;
        }
    }
    ctx->pc = 0x2FB05Cu;
    // 0x2fb05c: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB05Cu;
    {
        const bool branch_taken_0x2fb05c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB05Cu;
        // 0x2fb060: 0xc7102a  slt         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb05c) {
            ctx->pc = 0x2FB074u;
            goto label_2fb074;
        }
    }
    ctx->pc = 0x2FB064u;
    // 0x2fb064: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fb068: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2fb068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2fb06c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2fb06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2fb070:
    // 0x2fb070: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2fb070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2fb074:
    // 0x2fb074: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FB074u;
    {
        const bool branch_taken_0x2fb074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB074u;
        // 0x2fb078: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb074) {
            ctx->pc = 0x2FB038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb038;
        }
    }
    ctx->pc = 0x2FB07Cu;
label_2fb07c:
    // 0x2fb07c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB084u;
    // 0x2fb084: 0x0  nop
    ctx->pc = 0x2fb084u;
    // NOP
    ctx->pc = 0x2fb088u;
}
