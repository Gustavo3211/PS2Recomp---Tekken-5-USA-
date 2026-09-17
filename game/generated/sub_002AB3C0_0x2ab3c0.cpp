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

// Function: sub_002AB3C0
// Address: 0x2ab3c0 - 0x2ab428
void sub_002AB3C0_0x2ab3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB3C0_0x2ab3c0");
#endif

    switch (ctx->pc) {
        case 0x2ab404u: goto label_2ab404;
        case 0x2ab414u: goto label_2ab414;
        default: break;
    }

    ctx->pc = 0x2ab3c0u;

    // 0x2ab3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab3c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ab3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab3d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab3dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ab3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3e0: 0x2405039c  addiu       $a1, $zero, 0x39C
    ctx->pc = 0x2ab3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 924));
    // 0x2ab3e4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ab3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ab3e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2ab3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ab3ec: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2ab3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2ab3f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB3F0u;
    {
        const bool branch_taken_0x2ab3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3F0u;
        // 0x2ab3f4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3f0) {
            ctx->pc = 0x2AB414u;
            goto label_2ab414;
        }
    }
    ctx->pc = 0x2AB3F8u;
    // 0x2ab3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab3fc: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2AB3FCu;
    SET_GPR_U32(ctx, 31, 0x2AB404u);
    ctx->pc = 0x2AB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3FCu;
    // 0x2ab400: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7940u, 0x2AB3FCu, 0x2AB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB404u;
label_2ab404:
    // 0x2ab404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab408: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ab408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ab40c: 0xc0a9ebc  jal         func_2A7AF0
    ctx->pc = 0x2AB40Cu;
    SET_GPR_U32(ctx, 31, 0x2AB414u);
    ctx->pc = 0x2AB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB40Cu;
    // 0x2ab410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7AF0u, 0x2AB40Cu, 0x2AB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB414u;
label_2ab414:
    // 0x2ab414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab420: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB420u;
        // 0x2ab424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB428u;
}
