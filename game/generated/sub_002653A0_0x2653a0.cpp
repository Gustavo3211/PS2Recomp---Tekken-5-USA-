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

// Function: sub_002653A0
// Address: 0x2653a0 - 0x2653f8
void sub_002653A0_0x2653a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002653A0_0x2653a0");
#endif

    switch (ctx->pc) {
        case 0x2653b8u: goto label_2653b8;
        case 0x2653c8u: goto label_2653c8;
        case 0x2653d8u: goto label_2653d8;
        default: break;
    }

    ctx->pc = 0x2653a0u;

    // 0x2653a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2653a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2653a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2653a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2653a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2653a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2653ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2653acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2653b0: 0xc099368  jal         func_264DA0
    ctx->pc = 0x2653B0u;
    SET_GPR_U32(ctx, 31, 0x2653B8u);
    ctx->pc = 0x2653B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2653B0u;
    // 0x2653b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264DA0u, 0x2653B0u, 0x2653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653B8u;
label_2653b8:
    // 0x2653b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2653b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2653bc: 0x245188d0  addiu       $s1, $v0, -0x7730
    ctx->pc = 0x2653bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2653c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2653c4: 0x0  nop
    ctx->pc = 0x2653c4u;
    // NOP
label_2653c8:
    // 0x2653c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2653c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2653cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2653d0: 0xc0a0b6e  jal         func_282DB8
    ctx->pc = 0x2653D0u;
    SET_GPR_U32(ctx, 31, 0x2653D8u);
    ctx->pc = 0x2653D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2653D0u;
    // 0x2653d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282DB8u, 0x2653D0u, 0x2653D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2653D8u;
label_2653d8:
    // 0x2653d8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2653d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2653dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2653DCu;
    {
        const bool branch_taken_0x2653dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2653dc) {
            ctx->pc = 0x2653E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2653DCu;
            // 0x2653e0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2653C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2653c8;
        }
    }
    ctx->pc = 0x2653E4u;
    // 0x2653e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2653e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2653e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2653e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2653ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2653ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2653f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2653F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2653F0u;
        // 0x2653f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2653F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2653F8u;
}
