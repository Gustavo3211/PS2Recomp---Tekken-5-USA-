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

// Function: sub_0028A190
// Address: 0x28a190 - 0x28a1c0
void sub_0028A190_0x28a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A190_0x28a190");
#endif

    switch (ctx->pc) {
        case 0x28a1a4u: goto label_28a1a4;
        case 0x28a1acu: goto label_28a1ac;
        default: break;
    }

    ctx->pc = 0x28a190u;

    // 0x28a190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a19c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A19Cu;
    SET_GPR_U32(ctx, 31, 0x28A1A4u);
    ctx->pc = 0x28A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A19Cu;
    // 0x28a1a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A19Cu, 0x28A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1A4u;
label_28a1a4:
    // 0x28a1a4: 0xc0a2870  jal         func_28A1C0
    ctx->pc = 0x28A1A4u;
    SET_GPR_U32(ctx, 31, 0x28A1ACu);
    ctx->pc = 0x28A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1A4u;
    // 0x28a1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1C0u, 0x28A1A4u, 0x28A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1ACu;
label_28a1ac:
    // 0x28a1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a1b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1B4u;
        // 0x28a1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A1BCu;
    // 0x28a1bc: 0x0  nop
    ctx->pc = 0x28a1bcu;
    // NOP
    ctx->pc = 0x28a1c0u;
}
