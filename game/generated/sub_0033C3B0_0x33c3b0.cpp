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

// Function: sub_0033C3B0
// Address: 0x33c3b0 - 0x33c400
void sub_0033C3B0_0x33c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C3B0_0x33c3b0");
#endif

    switch (ctx->pc) {
        case 0x33c3f0u: goto label_33c3f0;
        default: break;
    }

    ctx->pc = 0x33c3b0u;

    // 0x33c3b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33c3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c3b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c3b8: 0x3046000f  andi        $a2, $v0, 0xF
    ctx->pc = 0x33c3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x33c3bc: 0x2c42fff0  sltiu       $v0, $v0, -0x10
    ctx->pc = 0x33c3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967280) ? 1 : 0);
    // 0x33c3c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33c3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c3c4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x33c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33c3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c3cc: 0x24e40040  addiu       $a0, $a3, 0x40
    ctx->pc = 0x33c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x33c3d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C3D0u;
    {
        const bool branch_taken_0x33c3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3D0u;
        // 0x33c3d4: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3d0) {
            ctx->pc = 0x33C3E8u;
            goto label_33c3e8;
        }
    }
    ctx->pc = 0x33C3D8u;
    // 0x33c3d8: 0x8ce30240  lw          $v1, 0x240($a3)
    ctx->pc = 0x33c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 576)));
    // 0x33c3dc: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x33c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33c3e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33C3E0u;
    {
        const bool branch_taken_0x33c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E0u;
        // 0x33c3e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3e0) {
            ctx->pc = 0x33C3F0u;
            goto label_33c3f0;
        }
    }
    ctx->pc = 0x33C3E8u;
label_33c3e8:
    // 0x33c3e8: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x33C3E8u;
    SET_GPR_U32(ctx, 31, 0x33C3F0u);
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x33C3E8u, 0x33C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3F0u;
label_33c3f0:
    // 0x33c3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3F4u;
        // 0x33c3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C3FCu;
    // 0x33c3fc: 0x0  nop
    ctx->pc = 0x33c3fcu;
    // NOP
    ctx->pc = 0x33c400u;
}
