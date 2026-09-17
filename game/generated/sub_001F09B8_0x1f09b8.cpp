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

// Function: sub_001F09B8
// Address: 0x1f09b8 - 0x1f0a60
void sub_001F09B8_0x1f09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F09B8_0x1f09b8");
#endif

    ctx->pc = 0x1f09b8u;

    // 0x1f09b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f09b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f09bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f09c0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1f09c4: 0x24212f98  addiu       $at, $at, 0x2F98
    ctx->pc = 0x1f09c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 12184));
    // 0x1f09c8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1f09c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1f09cc: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x1f09ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f09d0: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F09D0u;
    {
        const bool branch_taken_0x1f09d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09D0u;
        // 0x1f09d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09d0) {
            ctx->pc = 0x1F0A18u;
            goto label_1f0a18;
        }
    }
    ctx->pc = 0x1F09D8u;
    // 0x1f09d8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f09d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f09dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09DCu;
    {
        const bool branch_taken_0x1f09dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09DCu;
        // 0x1f09e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09dc) {
            ctx->pc = 0x1F09F8u;
            goto label_1f09f8;
        }
    }
    ctx->pc = 0x1F09E4u;
    // 0x1f09e4: 0x50c0001a  beql        $a2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F09E4u;
    {
        const bool branch_taken_0x1f09e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09e4) {
            ctx->pc = 0x1F09E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09E4u;
            // 0x1f09e8: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A50u;
            goto label_1f0a50;
        }
    }
    ctx->pc = 0x1F09ECu;
    // 0x1f09ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F09ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09ECu;
        // 0x1f09f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F09F4u;
    // 0x1f09f4: 0x0  nop
    ctx->pc = 0x1f09f4u;
    // NOP
label_1f09f8:
    // 0x1f09f8: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F09F8u;
    {
        const bool branch_taken_0x1f09f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F8u;
        // 0x1f09fc: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09f8) {
            ctx->pc = 0x1F0A30u;
            goto label_1f0a30;
        }
    }
    ctx->pc = 0x1F0A00u;
    // 0x1f0a00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f0a04: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0A04u;
    {
        const bool branch_taken_0x1f0a04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0a04) {
            ctx->pc = 0x1F0A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0A04u;
            // 0x1f0a08: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A50u;
            goto label_1f0a50;
        }
    }
    ctx->pc = 0x1F0A0Cu;
    // 0x1f0a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A0Cu;
        // 0x1f0a10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A14u;
    // 0x1f0a14: 0x0  nop
    ctx->pc = 0x1f0a14u;
    // NOP
label_1f0a18:
    // 0x1f0a18: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1f0a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f0a1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f0a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0a24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0A24u;
    {
        const bool branch_taken_0x1f0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A24u;
        // 0x1f0a28: 0x24430456  addiu       $v1, $v0, 0x456 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a24) {
            ctx->pc = 0x1F0A54u;
            goto label_1f0a54;
        }
    }
    ctx->pc = 0x1F0A2Cu;
    // 0x1f0a2c: 0x0  nop
    ctx->pc = 0x1f0a2cu;
    // NOP
label_1f0a30:
    // 0x1f0a30: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f0a34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0a38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0a3c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0A44u;
    {
        const bool branch_taken_0x1f0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A44u;
        // 0x1f0a48: 0x246300e6  addiu       $v1, $v1, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a44) {
            ctx->pc = 0x1F0A54u;
            goto label_1f0a54;
        }
    }
    ctx->pc = 0x1F0A4Cu;
    // 0x1f0a4c: 0x0  nop
    ctx->pc = 0x1f0a4cu;
    // NOP
label_1f0a50:
    // 0x1f0a50: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f0a54:
    // 0x1f0a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A54u;
        // 0x1f0a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A5Cu;
    // 0x1f0a5c: 0x0  nop
    ctx->pc = 0x1f0a5cu;
    // NOP
    ctx->pc = 0x1f0a60u;
}
