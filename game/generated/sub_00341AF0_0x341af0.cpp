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

// Function: sub_00341AF0
// Address: 0x341af0 - 0x341b48
void sub_00341AF0_0x341af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341AF0_0x341af0");
#endif

    ctx->pc = 0x341af0u;

    // 0x341af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341af4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341afc: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x341afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
    // 0x341b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341b04: 0x80d04d6  j           func_341358
    ctx->pc = 0x341B04u;
    ctx->pc = 0x341B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B04u;
    // 0x341b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341B04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341B0Cu;
    // 0x341b0c: 0x0  nop
    ctx->pc = 0x341b0cu;
    // NOP
    // 0x341b10: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x341b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x341b14: 0x3046bfff  andi        $a2, $v0, 0xBFFF
    ctx->pc = 0x341b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x341b18: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x341b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x341b1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341B1Cu;
    {
        const bool branch_taken_0x341b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b1c) {
            ctx->pc = 0x341B40u;
            goto label_341b40;
        }
    }
    ctx->pc = 0x341B24u;
    // 0x341b24: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x341b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x341b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b2c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x341b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x341b30: 0xa4a60016  sh          $a2, 0x16($a1)
    ctx->pc = 0x341b30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x341b34: 0x3e00008  jr          $ra
    ctx->pc = 0x341B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B34u;
        // 0x341b38: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B3Cu;
    // 0x341b3c: 0x0  nop
    ctx->pc = 0x341b3cu;
    // NOP
label_341b40:
    // 0x341b40: 0x3e00008  jr          $ra
    ctx->pc = 0x341B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B40u;
        // 0x341b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B48u;
}
