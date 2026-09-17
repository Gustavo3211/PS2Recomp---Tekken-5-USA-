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

// Function: sub_0010F830
// Address: 0x10f830 - 0x10f8c0
void sub_0010F830_0x10f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F830_0x10f830");
#endif

    switch (ctx->pc) {
        case 0x10f840u: goto label_10f840;
        case 0x10f864u: goto label_10f864;
        case 0x10f870u: goto label_10f870;
        case 0x10f894u: goto label_10f894;
        default: break;
    }

    ctx->pc = 0x10f830u;

    // 0x10f830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f838: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10F838u;
    SET_GPR_U32(ctx, 31, 0x10F840u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10F838u, 0x10F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F840u;
label_10f840:
    // 0x10f840: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10f844: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f848: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10f84c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10f84cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10f850: 0xf  sync
    ctx->pc = 0x10f850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10f854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F854u;
    {
        const bool branch_taken_0x10f854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F854u;
        // 0x10f858: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f854) {
            ctx->pc = 0x10F868u;
            goto label_10f868;
        }
    }
    ctx->pc = 0x10F85Cu;
    // 0x10f85c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10F85Cu;
    SET_GPR_U32(ctx, 31, 0x10F864u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10F85Cu, 0x10F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F864u;
label_10f864:
    // 0x10f864: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10f868:
    // 0x10f868: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10f868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10f86c: 0x0  nop
    ctx->pc = 0x10f86cu;
    // NOP
label_10f870:
    // 0x10f870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f870u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x10f874: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10f878: 0x0  nop
    ctx->pc = 0x10f878u;
    // NOP
    // 0x10f87c: 0x0  nop
    ctx->pc = 0x10f87cu;
    // NOP
    // 0x10f880: 0x0  nop
    ctx->pc = 0x10f880u;
    // NOP
    // 0x10f884: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10F884u;
    {
        const bool branch_taken_0x10f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f884) {
            ctx->pc = 0x10F870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f870;
        }
    }
    ctx->pc = 0x10F88Cu;
    // 0x10f88c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10F88Cu;
    SET_GPR_U32(ctx, 31, 0x10F894u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10F88Cu, 0x10F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F894u;
label_10f894:
    // 0x10f894: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10f898: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f89c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10f8a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10f8a0u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10f8a4: 0xf  sync
    ctx->pc = 0x10f8a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10f8a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F8A8u;
    {
        const bool branch_taken_0x10f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A8u;
        // 0x10f8ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8a8) {
            ctx->pc = 0x10F8B8u;
            goto label_10f8b8;
        }
    }
    ctx->pc = 0x10F8B0u;
    // 0x10f8b0: 0x804627e  j           func_1189F8
    ctx->pc = 0x10F8B0u;
    ctx->pc = 0x10F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8B0u;
    // 0x10f8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10F8B8u;
label_10f8b8:
    // 0x10f8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8B8u;
        // 0x10f8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8C0u;
}
