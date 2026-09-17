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

// Function: sub_00366620
// Address: 0x366620 - 0x366678
void sub_00366620_0x366620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366620_0x366620");
#endif

    switch (ctx->pc) {
        case 0x366648u: goto label_366648;
        case 0x366654u: goto label_366654;
        default: break;
    }

    ctx->pc = 0x366620u;

    // 0x366620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366624: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x366628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36662c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36662cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366634: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x366634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36663c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x36663cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366644: 0x0  nop
    ctx->pc = 0x366644u;
    // NOP
label_366648:
    // 0x366648: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x366648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x36664c: 0xc0d9806  jal         func_366018
    ctx->pc = 0x36664Cu;
    SET_GPR_U32(ctx, 31, 0x366654u);
    ctx->pc = 0x366650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36664Cu;
    // 0x366650: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366018u, 0x36664Cu, 0x366654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366654u;
label_366654:
    // 0x366654: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x366654u;
    {
        const bool branch_taken_0x366654 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x366658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366654u;
        // 0x366658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366654) {
            ctx->pc = 0x366648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366648;
        }
    }
    ctx->pc = 0x36665Cu;
    // 0x36665c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36665cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36666c: 0x3e00008  jr          $ra
    ctx->pc = 0x36666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36666Cu;
        // 0x366670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366674u;
    // 0x366674: 0x0  nop
    ctx->pc = 0x366674u;
    // NOP
    ctx->pc = 0x366678u;
}
