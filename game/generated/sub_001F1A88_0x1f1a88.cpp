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

// Function: sub_001F1A88
// Address: 0x1f1a88 - 0x1f1af8
void sub_001F1A88_0x1f1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1A88_0x1f1a88");
#endif

    ctx->pc = 0x1f1a88u;

    // 0x1f1a88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1a8c: 0x904383f1  lbu         $v1, -0x7C0F($v0)
    ctx->pc = 0x1f1a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83F1u));
    // 0x1f1a90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1A90u;
    {
        const bool branch_taken_0x1f1a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A90u;
        // 0x1f1a94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a90) {
            ctx->pc = 0x1F1AC0u;
            goto label_1f1ac0;
        }
    }
    ctx->pc = 0x1F1A98u;
    // 0x1f1a98: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1f1a9c: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x1f1a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1f1aa0: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1f1aa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f1aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1aa8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f1aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1aac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F1AACu;
    {
        const bool branch_taken_0x1f1aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1aac) {
            ctx->pc = 0x1F1AE8u;
            goto label_1f1ae8;
        }
    }
    ctx->pc = 0x1F1AB4u;
    // 0x1f1ab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F1AB4u;
    {
        const bool branch_taken_0x1f1ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AB4u;
        // 0x1f1ab8: 0x90a20205  lbu         $v0, 0x205($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 517)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ab4) {
            ctx->pc = 0x1F1AE0u;
            goto label_1f1ae0;
        }
    }
    ctx->pc = 0x1F1ABCu;
    // 0x1f1abc: 0x0  nop
    ctx->pc = 0x1f1abcu;
    // NOP
label_1f1ac0:
    // 0x1f1ac0: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x1f1ac4: 0x84c30096  lh          $v1, 0x96($a2)
    ctx->pc = 0x1f1ac4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x1f1ac8: 0x94440024  lhu         $a0, 0x24($v0)
    ctx->pc = 0x1f1ac8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1f1acc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1ad0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1f1ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1ad4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1AD4u;
    {
        const bool branch_taken_0x1f1ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ad4) {
            ctx->pc = 0x1F1AE8u;
            goto label_1f1ae8;
        }
    }
    ctx->pc = 0x1F1ADCu;
    // 0x1f1adc: 0x90c20205  lbu         $v0, 0x205($a2)
    ctx->pc = 0x1f1adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 517)));
label_1f1ae0:
    // 0x1f1ae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1AE0u;
    {
        const bool branch_taken_0x1f1ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ae0) {
            ctx->pc = 0x1F1AF0u;
            goto label_1f1af0;
        }
    }
    ctx->pc = 0x1F1AE8u;
label_1f1ae8:
    // 0x1f1ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AE8u;
        // 0x1f1aec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AF0u;
label_1f1af0:
    // 0x1f1af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF0u;
        // 0x1f1af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AF8u;
}
