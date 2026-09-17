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

// Function: sub_00288490
// Address: 0x288490 - 0x2884c0
void sub_00288490_0x288490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288490_0x288490");
#endif

    switch (ctx->pc) {
        case 0x2884a4u: goto label_2884a4;
        default: break;
    }

    ctx->pc = 0x288490u;

    // 0x288490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x288498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28849c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28849Cu;
    SET_GPR_U32(ctx, 31, 0x2884A4u);
    ctx->pc = 0x2884A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28849Cu;
    // 0x2884a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28849Cu, 0x2884A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884A4u;
label_2884a4:
    // 0x2884a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2884a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2884a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2884a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2884ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2884acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2884b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2884b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2884b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2884B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884B4u;
        // 0x2884b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884BCu;
    // 0x2884bc: 0x0  nop
    ctx->pc = 0x2884bcu;
    // NOP
    ctx->pc = 0x2884c0u;
}
