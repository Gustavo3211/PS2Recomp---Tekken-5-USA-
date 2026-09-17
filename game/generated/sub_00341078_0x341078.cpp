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

// Function: sub_00341078
// Address: 0x341078 - 0x3410b8
void sub_00341078_0x341078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341078_0x341078");
#endif

    switch (ctx->pc) {
        case 0x341094u: goto label_341094;
        case 0x3410a0u: goto label_3410a0;
        default: break;
    }

    ctx->pc = 0x341078u;

    // 0x341078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34107c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x341080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x341088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34108c: 0xc0d0490  jal         func_341240
    ctx->pc = 0x34108Cu;
    SET_GPR_U32(ctx, 31, 0x341094u);
    ctx->pc = 0x341090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34108Cu;
    // 0x341090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x34108Cu, 0x341094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341094u;
label_341094:
    // 0x341094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341098: 0xc0d04a8  jal         func_3412A0
    ctx->pc = 0x341098u;
    SET_GPR_U32(ctx, 31, 0x3410A0u);
    ctx->pc = 0x34109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341098u;
    // 0x34109c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3412A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3412A0u, 0x341098u, 0x3410A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410A0u;
label_3410a0:
    // 0x3410a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3410a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3410a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3410a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3410a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3410ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3410acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3410b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3410B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3410B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410B0u;
        // 0x3410b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3410B8u;
}
