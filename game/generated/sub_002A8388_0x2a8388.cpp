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

// Function: sub_002A8388
// Address: 0x2a8388 - 0x2a83c8
void sub_002A8388_0x2a8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8388_0x2a8388");
#endif

    switch (ctx->pc) {
        case 0x2a83acu: goto label_2a83ac;
        default: break;
    }

    ctx->pc = 0x2a8388u;

    // 0x2a8388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a838c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2a838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8394: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a8398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a839c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a83a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a83a4: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2A83A4u;
    SET_GPR_U32(ctx, 31, 0x2A83ACu);
    ctx->pc = 0x2A83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A83A4u;
    // 0x2a83a8: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7940u, 0x2A83A4u, 0x2A83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83ACu;
label_2a83ac:
    // 0x2a83ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a83acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a83b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a83b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a83b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a83b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a83b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a83bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83BCu;
        // 0x2a83c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A83BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A83C4u;
    // 0x2a83c4: 0x0  nop
    ctx->pc = 0x2a83c4u;
    // NOP
    ctx->pc = 0x2a83c8u;
}
