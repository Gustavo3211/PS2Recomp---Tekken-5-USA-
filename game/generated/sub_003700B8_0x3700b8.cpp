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

// Function: sub_003700B8
// Address: 0x3700b8 - 0x370108
void sub_003700B8_0x3700b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003700B8_0x3700b8");
#endif

    switch (ctx->pc) {
        case 0x3700dcu: goto label_3700dc;
        case 0x3700f4u: goto label_3700f4;
        default: break;
    }

    ctx->pc = 0x3700b8u;

    // 0x3700b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3700b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3700bc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3700c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3700c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3700c4: 0x24507350  addiu       $s0, $v0, 0x7350
    ctx->pc = 0x3700c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29520));
    // 0x3700c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7350u));
    // 0x3700cc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3700CCu;
    {
        const bool branch_taken_0x3700cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3700D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700CCu;
        // 0x3700d0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3700cc) {
            ctx->pc = 0x3700F4u;
            goto label_3700f4;
        }
    }
    ctx->pc = 0x3700D4u;
    // 0x3700d4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x3700D4u;
    SET_GPR_U32(ctx, 31, 0x3700DCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x3700D4u, 0x3700DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3700DCu;
label_3700dc:
    // 0x3700dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3700dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3700e0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3700e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3700e4: 0x24a509c0  addiu       $a1, $a1, 0x9C0
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
    // 0x3700e8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x3700ec: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3700ECu;
    SET_GPR_U32(ctx, 31, 0x3700F4u);
    ctx->pc = 0x3700F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3700ECu;
    // 0x3700f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3700ECu, 0x3700F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3700F4u;
label_3700f4:
    // 0x3700f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3700f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3700f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3700f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3700fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3700fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370100: 0x3e00008  jr          $ra
    ctx->pc = 0x370100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370100u;
        // 0x370104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370108u;
}
