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

// Function: sub_0021F850
// Address: 0x21f850 - 0x21f8c0
void sub_0021F850_0x21f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F850_0x21f850");
#endif

    switch (ctx->pc) {
        case 0x21f864u: goto label_21f864;
        case 0x21f874u: goto label_21f874;
        case 0x21f87cu: goto label_21f87c;
        case 0x21f884u: goto label_21f884;
        case 0x21f898u: goto label_21f898;
        default: break;
    }

    ctx->pc = 0x21f850u;

    // 0x21f850: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x21f854: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f85c: 0xc0c3078  jal         func_30C1E0
    ctx->pc = 0x21F85Cu;
    SET_GPR_U32(ctx, 31, 0x21F864u);
    ctx->pc = 0x21F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F85Cu;
    // 0x21f860: 0x34842c04  ori         $a0, $a0, 0x2C04 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11268);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C1E0u, 0x21F85Cu, 0x21F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F864u;
label_21f864:
    // 0x21f864: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F864u;
    {
        const bool branch_taken_0x21f864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F864u;
        // 0x21f868: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f864) {
            ctx->pc = 0x21F8B8u;
            goto label_21f8b8;
        }
    }
    ctx->pc = 0x21F86Cu;
    // 0x21f86c: 0xc0c3122  jal         func_30C488
    ctx->pc = 0x21F86Cu;
    SET_GPR_U32(ctx, 31, 0x21F874u);
    ctx->pc = 0x30C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C488u, 0x21F86Cu, 0x21F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F874u;
label_21f874:
    // 0x21f874: 0xc0c46c8  jal         func_311B20
    ctx->pc = 0x21F874u;
    SET_GPR_U32(ctx, 31, 0x21F87Cu);
    ctx->pc = 0x311B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311B20u, 0x21F874u, 0x21F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F87Cu;
label_21f87c:
    // 0x21f87c: 0xc0c30e4  jal         func_30C390
    ctx->pc = 0x21F87Cu;
    SET_GPR_U32(ctx, 31, 0x21F884u);
    ctx->pc = 0x30C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C390u, 0x21F87Cu, 0x21F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F884u;
label_21f884:
    // 0x21f884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f88c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21f890: 0x24465e90  addiu       $a2, $v0, 0x5E90
    ctx->pc = 0x21f890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x21f894: 0x0  nop
    ctx->pc = 0x21f894u;
    // NOP
label_21f898:
    // 0x21f898: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x21f898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21f89c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21f8a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21f8a4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x21f8a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21f8a8: 0x0  nop
    ctx->pc = 0x21f8a8u;
    // NOP
    // 0x21f8ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21F8ACu;
    {
        const bool branch_taken_0x21f8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8ACu;
        // 0x21f8b0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8ac) {
            ctx->pc = 0x21F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f898;
        }
    }
    ctx->pc = 0x21F8B4u;
    // 0x21f8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f8b8:
    // 0x21f8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B8u;
        // 0x21f8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F8C0u;
}
