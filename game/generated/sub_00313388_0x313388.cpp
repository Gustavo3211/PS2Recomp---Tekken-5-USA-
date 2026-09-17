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

// Function: sub_00313388
// Address: 0x313388 - 0x3133f8
void sub_00313388_0x313388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313388_0x313388");
#endif

    switch (ctx->pc) {
        case 0x313390u: goto label_313390;
        case 0x3133c4u: goto label_3133c4;
        default: break;
    }

    ctx->pc = 0x313388u;

    // 0x313388: 0x3e00008  jr          $ra
    ctx->pc = 0x313388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313388u;
        // 0x31338c: 0xaf80cbb0  sw          $zero, -0x3450($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313390u;
label_313390:
    // 0x313390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313394: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x313394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x313398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x313398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31339c: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x3133a0: 0x26108110  addiu       $s0, $s0, -0x7EF0
    ctx->pc = 0x3133a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934800));
    // 0x3133a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3133a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3133a8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3133a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133ac: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x3133acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3133b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3133b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3133b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3133b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3133bc: 0xc0c4ed0  jal         func_313B40
    ctx->pc = 0x3133BCu;
    SET_GPR_U32(ctx, 31, 0x3133C4u);
    ctx->pc = 0x3133C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133BCu;
    // 0x3133c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313B40u, 0x3133BCu, 0x3133C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133C4u;
label_3133c4:
    // 0x3133c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3133c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3133c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3133CCu;
    {
        const bool branch_taken_0x3133cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133CCu;
        // 0x3133d0: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133cc) {
            ctx->pc = 0x3133E8u;
            goto label_3133e8;
        }
    }
    ctx->pc = 0x3133D4u;
    // 0x3133d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3133d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3133d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3133d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3133dc: 0x80c4fb2  j           func_313EC8
    ctx->pc = 0x3133DCu;
    ctx->pc = 0x3133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133DCu;
    // 0x3133e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313EC8u, 0x3133DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3133E4u;
    // 0x3133e4: 0x0  nop
    ctx->pc = 0x3133e4u;
    // NOP
label_3133e8:
    // 0x3133e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3133e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3133ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3133ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3133f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3133F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133F0u;
        // 0x3133f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3133F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3133F8u;
}
