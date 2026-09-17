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

// Function: sub_0036A850
// Address: 0x36a850 - 0x36a8c8
void sub_0036A850_0x36a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A850_0x36a850");
#endif

    switch (ctx->pc) {
        case 0x36a878u: goto label_36a878;
        case 0x36a8b0u: goto label_36a8b0;
        default: break;
    }

    ctx->pc = 0x36a850u;

    // 0x36a850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a858: 0x2790cc78  addiu       $s0, $gp, -0x3388
    ctx->pc = 0x36a858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954104));
    // 0x36a85c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A864u;
    {
        const bool branch_taken_0x36a864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A864u;
        // 0x36a868: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a864) {
            ctx->pc = 0x36A878u;
            goto label_36a878;
        }
    }
    ctx->pc = 0x36A86Cu;
    // 0x36a86c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36a870: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x36A870u;
    SET_GPR_U32(ctx, 31, 0x36A878u);
    ctx->pc = 0x36A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A870u;
    // 0x36a874: 0x24a59818  addiu       $a1, $a1, -0x67E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x36A870u, 0x36A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A878u;
label_36a878:
    // 0x36a878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a884: 0x3e00008  jr          $ra
    ctx->pc = 0x36A884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A884u;
        // 0x36a888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A88Cu;
    // 0x36a88c: 0x0  nop
    ctx->pc = 0x36a88cu;
    // NOP
    // 0x36a890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a894: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a898: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x36a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x36a89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36a8a8: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x36A8A8u;
    SET_GPR_U32(ctx, 31, 0x36A8B0u);
    ctx->pc = 0x36A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8A8u;
    // 0x36a8ac: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x36A8A8u, 0x36A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8B0u;
label_36a8b0:
    // 0x36a8b0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x36a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x36a8b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8BCu;
        // 0x36a8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A8C4u;
    // 0x36a8c4: 0x0  nop
    ctx->pc = 0x36a8c4u;
    // NOP
    ctx->pc = 0x36a8c8u;
}
