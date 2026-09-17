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

// Function: sub_00371A08
// Address: 0x371a08 - 0x371ad0
void sub_00371A08_0x371a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371A08_0x371a08");
#endif

    switch (ctx->pc) {
        case 0x371a2cu: goto label_371a2c;
        case 0x371a44u: goto label_371a44;
        case 0x371ab4u: goto label_371ab4;
        default: break;
    }

    ctx->pc = 0x371a08u;

    // 0x371a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371a0c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371a14: 0x24507510  addiu       $s0, $v0, 0x7510
    ctx->pc = 0x371a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29968));
    // 0x371a18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7510u));
    // 0x371a1c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x371A1Cu;
    {
        const bool branch_taken_0x371a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A1Cu;
        // 0x371a20: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a1c) {
            ctx->pc = 0x371A44u;
            goto label_371a44;
        }
    }
    ctx->pc = 0x371A24u;
    // 0x371a24: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x371A24u;
    SET_GPR_U32(ctx, 31, 0x371A2Cu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x371A24u, 0x371A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A2Cu;
label_371a2c:
    // 0x371a2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371a30: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x371a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x371a34: 0x24a50d08  addiu       $a1, $a1, 0xD08
    ctx->pc = 0x371a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3336));
    // 0x371a38: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x371a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x371a3c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371A3Cu;
    SET_GPR_U32(ctx, 31, 0x371A44u);
    ctx->pc = 0x371A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A3Cu;
    // 0x371a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371A3Cu, 0x371A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A44u;
label_371a44:
    // 0x371a44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371a4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371a50: 0x3e00008  jr          $ra
    ctx->pc = 0x371A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A50u;
        // 0x371a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371A58u;
    // 0x371a58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x371a5c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x371a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x371a60: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x371a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x371a64: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x371a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x371a68: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x371a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x371a6c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x371a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x371a70: 0x24c60360  addiu       $a2, $a2, 0x360
    ctx->pc = 0x371a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 864));
    // 0x371a74: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371a78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x371a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x371a7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x371a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x371a80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x371a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x371a84: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x371a84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x371a88: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x371a88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x371a8c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x371a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371a90: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371a94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371a98: 0x3e00008  jr          $ra
    ctx->pc = 0x371A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A98u;
        // 0x371a9c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371AA0u;
    // 0x371aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371aa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x371aac: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x371AACu;
    SET_GPR_U32(ctx, 31, 0x371AB4u);
    ctx->pc = 0x371AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371AACu;
    // 0x371ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x371AACu, 0x371AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AB4u;
label_371ab4:
    // 0x371ab4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371abc: 0x24630360  addiu       $v1, $v1, 0x360
    ctx->pc = 0x371abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x371ac0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x371ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x371AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AC8u;
        // 0x371acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371AD0u;
}
