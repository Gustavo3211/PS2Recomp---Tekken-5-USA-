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

// Function: sub_00329348
// Address: 0x329348 - 0x329390
void sub_00329348_0x329348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329348_0x329348");
#endif

    switch (ctx->pc) {
        case 0x32936cu: goto label_32936c;
        case 0x329380u: goto label_329380;
        default: break;
    }

    ctx->pc = 0x329348u;

    // 0x329348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32934c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329350: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x329350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329358: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x329358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x32935c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32935cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x329360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x329364: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329364u;
    SET_GPR_U32(ctx, 31, 0x32936Cu);
    ctx->pc = 0x329368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329364u;
    // 0x329368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329364u, 0x32936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32936Cu;
label_32936c:
    // 0x32936c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329370u;
    {
        const bool branch_taken_0x329370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329370u;
        // 0x329374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329370) {
            ctx->pc = 0x329380u;
            goto label_329380;
        }
    }
    ctx->pc = 0x329378u;
    // 0x329378: 0xc0ca5d6  jal         func_329758
    ctx->pc = 0x329378u;
    SET_GPR_U32(ctx, 31, 0x329380u);
    ctx->pc = 0x329758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329758u, 0x329378u, 0x329380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329380u;
label_329380:
    // 0x329380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x329384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329388: 0x3e00008  jr          $ra
    ctx->pc = 0x329388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329388u;
        // 0x32938c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329390u;
}
