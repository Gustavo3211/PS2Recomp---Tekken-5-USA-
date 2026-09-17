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

// Function: sub_001F0AB8
// Address: 0x1f0ab8 - 0x1f0b70
void sub_001F0AB8_0x1f0ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0AB8_0x1f0ab8");
#endif

    ctx->pc = 0x1f0ab8u;

    // 0x1f0ab8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f0abc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f0abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ac0: 0x244783c0  addiu       $a3, $v0, -0x7C40
    ctx->pc = 0x1f0ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x1f0ac4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1f0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f0ac8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1f0ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f0acc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F0ACCu;
    {
        const bool branch_taken_0x1f0acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ACCu;
        // 0x1f0ad0: 0x84c40012  lh          $a0, 0x12($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0acc) {
            ctx->pc = 0x1F0B40u;
            goto label_1f0b40;
        }
    }
    ctx->pc = 0x1F0AD4u;
    // 0x1f0ad4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0ad8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f0adc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0ae0: 0x8c633150  lw          $v1, 0x3150($v1)
    ctx->pc = 0x1f0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12624)));
    // 0x1f0ae4: 0x600008  jr          $v1
    ctx->pc = 0x1F0AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0AF0u: goto label_1f0af0;
            case 0x1F0B00u: goto label_1f0b00;
            case 0x1F0B30u: goto label_1f0b30;
            case 0x1F0B38u: goto label_1f0b38;
            case 0x1F0B40u: goto label_1f0b40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0AE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F0AECu;
    // 0x1f0aec: 0x0  nop
    ctx->pc = 0x1f0aecu;
    // NOP
label_1f0af0:
    // 0x1f0af0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f0af4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F0AF4u;
    {
        const bool branch_taken_0x1f0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF4u;
        // 0x1f0af8: 0x8c4531b0  lw          $a1, 0x31B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0af4) {
            ctx->pc = 0x1F0B44u;
            goto label_1f0b44;
        }
    }
    ctx->pc = 0x1F0AFCu;
    // 0x1f0afc: 0x0  nop
    ctx->pc = 0x1f0afcu;
    // NOP
label_1f0b00:
    // 0x1f0b00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f0b04: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f0b08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f0b0c: 0x9462004e  lhu         $v0, 0x4E($v1)
    ctx->pc = 0x1f0b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 78)));
    // 0x1f0b10: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f0b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0b14: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x1f0b14u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1f0b18: 0x70002812  mflo1       $a1
    ctx->pc = 0x1f0b18u;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x1f0b1c: 0x58a00009  blezl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0B1Cu;
    {
        const bool branch_taken_0x1f0b1c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1f0b1c) {
            ctx->pc = 0x1F0B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0B1Cu;
            // 0x1f0b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B44u;
            goto label_1f0b44;
        }
    }
    ctx->pc = 0x1F0B24u;
    // 0x1f0b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0B24u;
    {
        const bool branch_taken_0x1f0b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B24u;
        // 0x1f0b28: 0x84c30040  lh          $v1, 0x40($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b24) {
            ctx->pc = 0x1F0B48u;
            goto label_1f0b48;
        }
    }
    ctx->pc = 0x1F0B2Cu;
    // 0x1f0b2c: 0x0  nop
    ctx->pc = 0x1f0b2cu;
    // NOP
label_1f0b30:
    // 0x1f0b30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0B30u;
    {
        const bool branch_taken_0x1f0b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B30u;
        // 0x1f0b34: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b30) {
            ctx->pc = 0x1F0B44u;
            goto label_1f0b44;
        }
    }
    ctx->pc = 0x1F0B38u;
label_1f0b38:
    // 0x1f0b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0B38u;
    {
        const bool branch_taken_0x1f0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B38u;
        // 0x1f0b3c: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b38) {
            ctx->pc = 0x1F0B44u;
            goto label_1f0b44;
        }
    }
    ctx->pc = 0x1F0B40u;
label_1f0b40:
    // 0x1f0b40: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f0b44:
    // 0x1f0b44: 0x84c30040  lh          $v1, 0x40($a2)
    ctx->pc = 0x1f0b44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_1f0b48:
    // 0x1f0b48: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f0b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0b50: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f0b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0b58: 0x8c4231c8  lw          $v0, 0x31C8($v0)
    ctx->pc = 0x1f0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12744)));
    // 0x1f0b5c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1f0b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0b60: 0x7044001b  divu1       $zero, $v0, $a0
    ctx->pc = 0x1f0b60u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f0b64: 0x70001012  mflo1       $v0
    ctx->pc = 0x1f0b64u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1f0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B68u;
        // 0x1f0b6c: 0xacc206a0  sw          $v0, 0x6A0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B70u;
}
