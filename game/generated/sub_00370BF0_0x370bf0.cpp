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

// Function: sub_00370BF0
// Address: 0x370bf0 - 0x370c88
void sub_00370BF0_0x370bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370BF0_0x370bf0");
#endif

    switch (ctx->pc) {
        case 0x370c14u: goto label_370c14;
        case 0x370c2cu: goto label_370c2c;
        default: break;
    }

    ctx->pc = 0x370bf0u;

    // 0x370bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370bf4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370bfc: 0x24507490  addiu       $s0, $v0, 0x7490
    ctx->pc = 0x370bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29840));
    // 0x370c00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7490u));
    // 0x370c04: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370C04u;
    {
        const bool branch_taken_0x370c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C04u;
        // 0x370c08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c04) {
            ctx->pc = 0x370C2Cu;
            goto label_370c2c;
        }
    }
    ctx->pc = 0x370C0Cu;
    // 0x370c0c: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370C0Cu;
    SET_GPR_U32(ctx, 31, 0x370C14u);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370C0Cu, 0x370C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C14u;
label_370c14:
    // 0x370c14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370c18: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370c1c: 0x24a50b70  addiu       $a1, $a1, 0xB70
    ctx->pc = 0x370c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2928));
    // 0x370c20: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x370c24: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370C24u;
    SET_GPR_U32(ctx, 31, 0x370C2Cu);
    ctx->pc = 0x370C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C24u;
    // 0x370c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370C24u, 0x370C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C2Cu;
label_370c2c:
    // 0x370c2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370c38: 0x3e00008  jr          $ra
    ctx->pc = 0x370C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C38u;
        // 0x370c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C40u;
    // 0x370c40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370c44: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x370c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x370c48: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x370c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x370c4c: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x370c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x370c50: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x370c54: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x370c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x370c58: 0x24c6f1b0  addiu       $a2, $a2, -0xE50
    ctx->pc = 0x370c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963632));
    // 0x370c5c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x370c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370c60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x370c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x370c64: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x370c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x370c68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x370c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x370c6c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x370c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x370c70: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x370c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x370c74: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x370c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x370c78: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x370c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x370c7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370c80: 0x3e00008  jr          $ra
    ctx->pc = 0x370C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C80u;
        // 0x370c84: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C88u;
}
