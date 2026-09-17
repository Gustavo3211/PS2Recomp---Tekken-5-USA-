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

// Function: sub_0028A160
// Address: 0x28a160 - 0x28a190
void sub_0028A160_0x28a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A160_0x28a160");
#endif

    switch (ctx->pc) {
        case 0x28a174u: goto label_28a174;
        case 0x28a17cu: goto label_28a17c;
        default: break;
    }

    ctx->pc = 0x28a160u;

    // 0x28a160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a168: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a16c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A16Cu;
    SET_GPR_U32(ctx, 31, 0x28A174u);
    ctx->pc = 0x28A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A16Cu;
    // 0x28a170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A16Cu, 0x28A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A174u;
label_28a174:
    // 0x28a174: 0xc0a2870  jal         func_28A1C0
    ctx->pc = 0x28A174u;
    SET_GPR_U32(ctx, 31, 0x28A17Cu);
    ctx->pc = 0x28A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A174u;
    // 0x28a178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1C0u, 0x28A174u, 0x28A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A17Cu;
label_28a17c:
    // 0x28a17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a184: 0x3e00008  jr          $ra
    ctx->pc = 0x28A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A18Cu;
    // 0x28a18c: 0x0  nop
    ctx->pc = 0x28a18cu;
    // NOP
    ctx->pc = 0x28a190u;
}
