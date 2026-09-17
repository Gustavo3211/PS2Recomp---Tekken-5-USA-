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

// Function: sub_0036CAD8
// Address: 0x36cad8 - 0x36cb60
void sub_0036CAD8_0x36cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CAD8_0x36cad8");
#endif

    switch (ctx->pc) {
        case 0x36cafcu: goto label_36cafc;
        case 0x36cb14u: goto label_36cb14;
        default: break;
    }

    ctx->pc = 0x36cad8u;

    // 0x36cad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cadc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36cae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cae4: 0x24506fd8  addiu       $s0, $v0, 0x6FD8
    ctx->pc = 0x36cae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28632));
    // 0x36cae8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6FD8u));
    // 0x36caec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CAECu;
    {
        const bool branch_taken_0x36caec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAECu;
        // 0x36caf0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36caec) {
            ctx->pc = 0x36CB14u;
            goto label_36cb14;
        }
    }
    ctx->pc = 0x36CAF4u;
    // 0x36caf4: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36CAF4u;
    SET_GPR_U32(ctx, 31, 0x36CAFCu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36CAF4u, 0x36CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAFCu;
label_36cafc:
    // 0x36cafc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36cb00: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36cb04: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x36cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x36cb08: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36cb0c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CB0Cu;
    SET_GPR_U32(ctx, 31, 0x36CB14u);
    ctx->pc = 0x36CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB0Cu;
    // 0x36cb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CB0Cu, 0x36CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB14u;
label_36cb14:
    // 0x36cb14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36cb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cb1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cb20: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB20u;
        // 0x36cb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB28u;
    // 0x36cb28: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x36cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x36cb2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cb30: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x36cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x36cb34: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36cb38: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB38u;
        // 0x36cb3c: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB40u;
    // 0x36cb40: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x36cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x36cb44: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x36cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36cb48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cb4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x36cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x36cb50: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x36cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x36cb54: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB54u;
        // 0x36cb58: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB5Cu;
    // 0x36cb5c: 0x0  nop
    ctx->pc = 0x36cb5cu;
    // NOP
    ctx->pc = 0x36cb60u;
}
