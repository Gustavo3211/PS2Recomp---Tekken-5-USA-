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

// Function: sub_002F0540
// Address: 0x2f0540 - 0x2f0580
void sub_002F0540_0x2f0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0540_0x2f0540");
#endif

    switch (ctx->pc) {
        case 0x2f056cu: goto label_2f056c;
        case 0x2f0574u: goto label_2f0574;
        default: break;
    }

    ctx->pc = 0x2f0540u;

    // 0x2f0540: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2f0540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2f0544: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x2f0544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x2f0548: 0x24841000  addiu       $a0, $a0, 0x1000
    ctx->pc = 0x2f0548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    // 0x2f054c: 0x3442eff0  ori         $v0, $v0, 0xEFF0
    ctx->pc = 0x2f054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61424);
    // 0x2f0550: 0x3c0101bd  lui         $at, 0x1BD
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)445 << 16));
    // 0x2f0554: 0x2421a460  addiu       $at, $at, -0x5BA0
    ctx->pc = 0x2f0554u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943840));
    // 0x2f0558: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2f0558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2f055c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f055cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0564: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x2F0564u;
    SET_GPR_U32(ctx, 31, 0x2F056Cu);
    ctx->pc = 0x2F0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0564u;
    // 0x2f0568: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x2F0564u, 0x2F056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F056Cu;
label_2f056c:
    // 0x2f056c: 0xc049e8e  jal         func_127A38
    ctx->pc = 0x2F056Cu;
    SET_GPR_U32(ctx, 31, 0x2F0574u);
    ctx->pc = 0x2F0570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F056Cu;
    // 0x2f0570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A38u, 0x2F056Cu, 0x2F0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0574u;
label_2f0574:
    // 0x2f0574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0578: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0578u;
        // 0x2f057c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0580u;
}
