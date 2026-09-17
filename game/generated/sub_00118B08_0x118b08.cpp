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

// Function: sub_00118B08
// Address: 0x118b08 - 0x118b50
void sub_00118B08_0x118b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B08_0x118b08");
#endif

    switch (ctx->pc) {
        case 0x118b10u: goto label_118b10;
        case 0x118b18u: goto label_118b18;
        case 0x118b3cu: goto label_118b3c;
        default: break;
    }

    ctx->pc = 0x118b08u;

    // 0x118b08: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x118b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x118b0c: 0xc  syscall     0
    ctx->pc = 0x118b0cu;
    ctx->pc = 0x118B10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_118b10:
    // 0x118b10: 0x3e00008  jr          $ra
    ctx->pc = 0x118B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B18u;
label_118b18:
    // 0x118b18: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x118b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x118b1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118b20: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x118b20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1311B8u));
    // 0x118b24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118b2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x118b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118b34: 0xc0462a0  jal         func_118A80
    ctx->pc = 0x118B34u;
    SET_GPR_U32(ctx, 31, 0x118B3Cu);
    ctx->pc = 0x118B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B34u;
    // 0x118b38: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A80u, 0x118B34u, 0x118B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B3Cu;
label_118b3c:
    // 0x118b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b44: 0x3e00008  jr          $ra
    ctx->pc = 0x118B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B44u;
        // 0x118b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B4Cu;
    // 0x118b4c: 0x0  nop
    ctx->pc = 0x118b4cu;
    // NOP
    ctx->pc = 0x118b50u;
}
