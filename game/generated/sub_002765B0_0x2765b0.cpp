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

// Function: sub_002765B0
// Address: 0x2765b0 - 0x276658
void sub_002765B0_0x2765b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002765B0_0x2765b0");
#endif

    ctx->pc = 0x2765b0u;

    // 0x2765b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2765b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2765b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2765B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2765B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765B4u;
        // 0x2765b8: 0xac443368  sw          $a0, 0x3368($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 13160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2765B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2765BCu;
    // 0x2765bc: 0x0  nop
    ctx->pc = 0x2765bcu;
    // NOP
    // 0x2765c0: 0x9486003c  lhu         $a2, 0x3C($a0)
    ctx->pc = 0x2765c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2765c4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2765c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2765c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2765cc: 0x8f84ca64  lw          $a0, -0x359C($gp)
    ctx->pc = 0x2765ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953572)));
    // 0x2765d0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2765d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2765d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2765d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2765d8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2765d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2765dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2765dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2765e0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2765e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2765e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2765e8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2765ec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2765ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2765f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2765f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2765f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2765f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2765f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2765fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2765FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765FCu;
        // 0x276600: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2765FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276604u;
    // 0x276604: 0x0  nop
    ctx->pc = 0x276604u;
    // NOP
    // 0x276608: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x276608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x27660c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x27660cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x276610: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x276610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x276614: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x276614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276618: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27661c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x276620: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276624: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x276624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x276628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x276628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27662c: 0x3e00008  jr          $ra
    ctx->pc = 0x27662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27662Cu;
        // 0x276630: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276634u;
    // 0x276634: 0x0  nop
    ctx->pc = 0x276634u;
    // NOP
    // 0x276638: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x276638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x27663c: 0x3e00008  jr          $ra
    ctx->pc = 0x27663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27663Cu;
        // 0x276640: 0x8c6201c4  lw          $v0, 0x1C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276644u;
    // 0x276644: 0x0  nop
    ctx->pc = 0x276644u;
    // NOP
    // 0x276648: 0x3e00008  jr          $ra
    ctx->pc = 0x276648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276648u;
        // 0x27664c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276650u;
    // 0x276650: 0x3e00008  jr          $ra
    ctx->pc = 0x276650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276650u;
        // 0x276654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276658u;
}
