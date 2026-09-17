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

// Function: sub_00503D18
// Address: 0x503d18 - 0x503d70
void sub_00503D18_0x503d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503D18_0x503d18");
#endif

    switch (ctx->pc) {
        case 0x503d58u: goto label_503d58;
        default: break;
    }

    ctx->pc = 0x503d18u;

    // 0x503d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x503d1c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x503d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x503d24: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x503d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x503d28: 0x2610c400  addiu       $s0, $s0, -0x3C00
    ctx->pc = 0x503d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951936));
    // 0x503d2c: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x503d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x503d30: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x503d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x503d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d38: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x503d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x503d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x503d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d40: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x503d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x503d44: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x503d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x503d48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x503d48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503d4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x503d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x503d50: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x503D50u;
    SET_GPR_U32(ctx, 31, 0x503D58u);
    ctx->pc = 0x503D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503D50u;
    // 0x503d54: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x503D50u, 0x503D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503D58u;
label_503d58:
    // 0x503d58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x503d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x503d5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x503d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x503d60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x503d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x503d64: 0x3e00008  jr          $ra
    ctx->pc = 0x503D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503D64u;
        // 0x503d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503D6Cu;
    // 0x503d6c: 0x0  nop
    ctx->pc = 0x503d6cu;
    // NOP
    ctx->pc = 0x503d70u;
}
