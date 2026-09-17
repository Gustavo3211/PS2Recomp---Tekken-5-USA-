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

// Function: sub_0036B720
// Address: 0x36b720 - 0x36b7c8
void sub_0036B720_0x36b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B720_0x36b720");
#endif

    switch (ctx->pc) {
        case 0x36b744u: goto label_36b744;
        case 0x36b75cu: goto label_36b75c;
        default: break;
    }

    ctx->pc = 0x36b720u;

    // 0x36b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b724: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b72c: 0x24506e88  addiu       $s0, $v0, 0x6E88
    ctx->pc = 0x36b72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28296));
    // 0x36b730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E88u));
    // 0x36b734: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B734u;
    {
        const bool branch_taken_0x36b734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B734u;
        // 0x36b738: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b734) {
            ctx->pc = 0x36B75Cu;
            goto label_36b75c;
        }
    }
    ctx->pc = 0x36B73Cu;
    // 0x36b73c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B73Cu;
    SET_GPR_U32(ctx, 31, 0x36B744u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B73Cu, 0x36B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B744u;
label_36b744:
    // 0x36b744: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b748: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b74c: 0x24a5baf0  addiu       $a1, $a1, -0x4510
    ctx->pc = 0x36b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949616));
    // 0x36b750: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b754: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B754u;
    SET_GPR_U32(ctx, 31, 0x36B75Cu);
    ctx->pc = 0x36B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B754u;
    // 0x36b758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B754u, 0x36B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B75Cu;
label_36b75c:
    // 0x36b75c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b768: 0x3e00008  jr          $ra
    ctx->pc = 0x36B768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B768u;
        // 0x36b76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B770u;
    // 0x36b770: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x36b770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x36b774: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x36b774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x36b778: 0x3e00008  jr          $ra
    ctx->pc = 0x36B778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B778u;
        // 0x36b77c: 0xa4820150  sh          $v0, 0x150($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B780u;
    // 0x36b780: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x36b780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x36b784: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x36b784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x36b788: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x36b788u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x36b78c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x36b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x36b790: 0x3e00008  jr          $ra
    ctx->pc = 0x36B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B790u;
        // 0x36b794: 0xa4820150  sh          $v0, 0x150($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B798u;
    // 0x36b798: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x36b798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x36b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B79Cu;
        // 0x36b7a0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B7A4u;
    // 0x36b7a4: 0x0  nop
    ctx->pc = 0x36b7a4u;
    // NOP
    // 0x36b7a8: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x36b7a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x36b7ac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x36b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x36b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7B0u;
        // 0x36b7b4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B7B8u;
    // 0x36b7b8: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x36b7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x36b7bc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x36b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x36b7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7C0u;
        // 0x36b7c4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B7C8u;
}
