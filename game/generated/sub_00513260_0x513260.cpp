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

// Function: sub_00513260
// Address: 0x513260 - 0x5132b8
void sub_00513260_0x513260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513260_0x513260");
#endif

    switch (ctx->pc) {
        case 0x513270u: goto label_513270;
        case 0x513298u: goto label_513298;
        default: break;
    }

    ctx->pc = 0x513260u;

    // 0x513260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513268: 0xc124620  jal         func_491880
    ctx->pc = 0x513268u;
    SET_GPR_U32(ctx, 31, 0x513270u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x513268u, 0x513270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513270u;
label_513270:
    // 0x513270: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x513270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x513274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x513274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x513278: 0x8463f1c6  lh          $v1, -0xE3A($v1)
    ctx->pc = 0x513278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963654)));
    // 0x51327c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x51327Cu;
    {
        const bool branch_taken_0x51327c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x513280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51327Cu;
        // 0x513280: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51327c) {
            ctx->pc = 0x513290u;
            goto label_513290;
        }
    }
    ctx->pc = 0x513284u;
    // 0x513284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x513284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513288: 0x8144c96  j           func_513258
    ctx->pc = 0x513288u;
    ctx->pc = 0x51328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513288u;
    // 0x51328c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513258u, 0x513288u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x513290u;
label_513290:
    // 0x513290: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x513290u;
    SET_GPR_U32(ctx, 31, 0x513298u);
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x513290u, 0x513298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513298u;
label_513298:
    // 0x513298: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x513298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x51329c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51329Cu;
    {
        const bool branch_taken_0x51329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51329Cu;
        // 0x5132a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51329c) {
            ctx->pc = 0x5132B0u;
            goto label_5132b0;
        }
    }
    ctx->pc = 0x5132A4u;
    // 0x5132a4: 0x8144c96  j           func_513258
    ctx->pc = 0x5132A4u;
    ctx->pc = 0x5132A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5132A4u;
    // 0x5132a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513258u, 0x5132A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5132ACu;
    // 0x5132ac: 0x0  nop
    ctx->pc = 0x5132acu;
    // NOP
label_5132b0:
    // 0x5132b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5132B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5132B0u;
        // 0x5132b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5132B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5132B8u;
}
