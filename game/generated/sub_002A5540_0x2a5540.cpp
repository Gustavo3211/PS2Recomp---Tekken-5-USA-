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

// Function: sub_002A5540
// Address: 0x2a5540 - 0x2a5578
void sub_002A5540_0x2a5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5540_0x2a5540");
#endif

    switch (ctx->pc) {
        case 0x2a5558u: goto label_2a5558;
        case 0x2a5560u: goto label_2a5560;
        default: break;
    }

    ctx->pc = 0x2a5540u;

    // 0x2a5540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a554c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a5550: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A5550u;
    SET_GPR_U32(ctx, 31, 0x2A5558u);
    ctx->pc = 0x2A5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5550u;
    // 0x2a5554: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A5550u, 0x2A5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5558u;
label_2a5558:
    // 0x2a5558: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2A5558u;
    SET_GPR_U32(ctx, 31, 0x2A5560u);
    ctx->pc = 0x2A555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5558u;
    // 0x2a555c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2A5558u, 0x2A5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5560u;
label_2a5560:
    // 0x2a5560: 0xa380b85d  sb          $zero, -0x47A3($gp)
    ctx->pc = 0x2a5560u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5568: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a556c: 0xa380b85f  sb          $zero, -0x47A1($gp)
    ctx->pc = 0x2a556cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948959), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5570: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5570u;
        // 0x2a5574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5578u;
}
