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

// Function: sub_0029D890
// Address: 0x29d890 - 0x29d8c8
void sub_0029D890_0x29d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D890_0x29d890");
#endif

    switch (ctx->pc) {
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b4u: goto label_29d8b4;
        default: break;
    }

    ctx->pc = 0x29d890u;

    // 0x29d890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29d89c: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x29D89Cu;
    SET_GPR_U32(ctx, 31, 0x29D8A4u);
    ctx->pc = 0x29D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D89Cu;
    // 0x29d8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x29D89Cu, 0x29D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8A4u;
label_29d8a4:
    // 0x29d8a4: 0xc08b882  jal         func_22E208
    ctx->pc = 0x29D8A4u;
    SET_GPR_U32(ctx, 31, 0x29D8ACu);
    ctx->pc = 0x29D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8A4u;
    // 0x29d8a8: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x29D8A4u, 0x29D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8ACu;
label_29d8ac:
    // 0x29d8ac: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x29D8ACu;
    SET_GPR_U32(ctx, 31, 0x29D8B4u);
    ctx->pc = 0x29D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8ACu;
    // 0x29d8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x29D8ACu, 0x29D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8B4u;
label_29d8b4:
    // 0x29d8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d8b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29d8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8BCu;
        // 0x29d8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D8C4u;
    // 0x29d8c4: 0x0  nop
    ctx->pc = 0x29d8c4u;
    // NOP
    ctx->pc = 0x29d8c8u;
}
