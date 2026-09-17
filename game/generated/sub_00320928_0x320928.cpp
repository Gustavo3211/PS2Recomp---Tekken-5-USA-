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

// Function: sub_00320928
// Address: 0x320928 - 0x320968
void sub_00320928_0x320928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320928_0x320928");
#endif

    switch (ctx->pc) {
        case 0x320940u: goto label_320940;
        case 0x320954u: goto label_320954;
        default: break;
    }

    ctx->pc = 0x320928u;

    // 0x320928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32092c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x320930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x320930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320934: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x320934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x320938: 0xc0cfcd2  jal         func_33F348
    ctx->pc = 0x320938u;
    SET_GPR_U32(ctx, 31, 0x320940u);
    ctx->pc = 0x32093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320938u;
    // 0x32093c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F348u, 0x320938u, 0x320940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320940u;
label_320940:
    // 0x320940: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x320944: 0x34844080  ori         $a0, $a0, 0x4080
    ctx->pc = 0x320944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16512);
    // 0x320948: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x320948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x32094c: 0xc0cfc56  jal         func_33F158
    ctx->pc = 0x32094Cu;
    SET_GPR_U32(ctx, 31, 0x320954u);
    ctx->pc = 0x33F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F158u, 0x32094Cu, 0x320954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320954u;
label_320954:
    // 0x320954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320958: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x320958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32095c: 0x3e00008  jr          $ra
    ctx->pc = 0x32095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32095Cu;
        // 0x320960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320964u;
    // 0x320964: 0x0  nop
    ctx->pc = 0x320964u;
    // NOP
    ctx->pc = 0x320968u;
}
