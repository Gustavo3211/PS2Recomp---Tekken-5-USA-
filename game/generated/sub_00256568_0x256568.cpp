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

// Function: sub_00256568
// Address: 0x256568 - 0x2565c0
void sub_00256568_0x256568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256568_0x256568");
#endif

    switch (ctx->pc) {
        case 0x256588u: goto label_256588;
        case 0x256598u: goto label_256598;
        case 0x2565acu: goto label_2565ac;
        default: break;
    }

    ctx->pc = 0x256568u;

    // 0x256568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25656c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x25656cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x256570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25657c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x256580: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256580u;
    SET_GPR_U32(ctx, 31, 0x256588u);
    ctx->pc = 0x256584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256580u;
    // 0x256584: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256580u, 0x256588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256588u;
label_256588:
    // 0x256588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25658c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x25658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x256590: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256590u;
    SET_GPR_U32(ctx, 31, 0x256598u);
    ctx->pc = 0x256594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256590u;
    // 0x256594: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256590u, 0x256598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256598u;
label_256598:
    // 0x256598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25659c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2565a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2565a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2565a4: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x2565A4u;
    SET_GPR_U32(ctx, 31, 0x2565ACu);
    ctx->pc = 0x2565A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2565A4u;
    // 0x2565a8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x2565A4u, 0x2565ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2565ACu;
label_2565ac:
    // 0x2565ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2565acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2565b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2565b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2565b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2565B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2565B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565B4u;
        // 0x2565b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2565B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2565BCu;
    // 0x2565bc: 0x0  nop
    ctx->pc = 0x2565bcu;
    // NOP
    ctx->pc = 0x2565c0u;
}
