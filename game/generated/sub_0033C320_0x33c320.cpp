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

// Function: sub_0033C320
// Address: 0x33c320 - 0x33c358
void sub_0033C320_0x33c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C320_0x33c320");
#endif

    switch (ctx->pc) {
        case 0x33c340u: goto label_33c340;
        default: break;
    }

    ctx->pc = 0x33c320u;

    // 0x33c320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33c324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c32c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x33c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33c330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33c338: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x33C338u;
    SET_GPR_U32(ctx, 31, 0x33C340u);
    ctx->pc = 0x33C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C338u;
    // 0x33c33c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x33C338u, 0x33C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C340u;
label_33c340:
    // 0x33c340: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x33c340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x33c344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c350: 0x3e00008  jr          $ra
    ctx->pc = 0x33C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C350u;
        // 0x33c354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C358u;
}
