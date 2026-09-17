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

// Function: sub_00211760
// Address: 0x211760 - 0x2117e0
void sub_00211760_0x211760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211760_0x211760");
#endif

    ctx->pc = 0x211760u;

    // 0x211760: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x211764: 0x2442b6c8  addiu       $v0, $v0, -0x4938
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948552));
    // 0x211768: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x211768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AB6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AB6DCu, _value); } while (0);
    // 0x21176c: 0x3e00008  jr          $ra
    ctx->pc = 0x21176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21176Cu;
        // 0x211770: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211774u;
    // 0x211774: 0x0  nop
    ctx->pc = 0x211774u;
    // NOP
    // 0x211778: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21177c: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x21177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x211780: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x211780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x211784: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x211784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x211788: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x211788u;
    {
        const bool branch_taken_0x211788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211788) {
            ctx->pc = 0x21178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211788u;
            // 0x21178c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211790u;
            goto label_211790;
        }
    }
    ctx->pc = 0x211790u;
label_211790:
    // 0x211790: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x211794: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x211794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x211798: 0x2484b6c8  addiu       $a0, $a0, -0x4938
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948552));
    // 0x21179c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21179cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AB6C8u));
    // 0x2117a0: 0x8c650228  lw          $a1, 0x228($v1)
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x2117a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2117a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2117ac: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2117b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2117B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117B0u;
        // 0x2117b4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2117B8u;
    // 0x2117b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2117B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117B8u;
        // 0x2117bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2117C0u;
    // 0x2117c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2117c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2117c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2117C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117C4u;
        // 0x2117c8: 0x8c62b6d4  lw          $v0, -0x492C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2117CCu;
    // 0x2117cc: 0x0  nop
    ctx->pc = 0x2117ccu;
    // NOP
    // 0x2117d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2117d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2117D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117D4u;
        // 0x2117d8: 0xac44b6dc  sw          $a0, -0x4924($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2117DCu;
    // 0x2117dc: 0x0  nop
    ctx->pc = 0x2117dcu;
    // NOP
    ctx->pc = 0x2117e0u;
}
