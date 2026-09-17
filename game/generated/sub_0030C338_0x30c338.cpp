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

// Function: sub_0030C338
// Address: 0x30c338 - 0x30c390
void sub_0030C338_0x30c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C338_0x30c338");
#endif

    switch (ctx->pc) {
        case 0x30c35cu: goto label_30c35c;
        case 0x30c370u: goto label_30c370;
        case 0x30c380u: goto label_30c380;
        default: break;
    }

    ctx->pc = 0x30c338u;

    // 0x30c338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c33c: 0x8f82c538  lw          $v0, -0x3AC8($gp)
    ctx->pc = 0x30c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c344: 0x24104000  addiu       $s0, $zero, 0x4000
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c34c: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C34Cu;
    {
        const bool branch_taken_0x30c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x30C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C34Cu;
        // 0x30c350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c34c) {
            ctx->pc = 0x30C380u;
            goto label_30c380;
        }
    }
    ctx->pc = 0x30C354u;
    // 0x30c354: 0xc0cbfd4  jal         func_32FF50
    ctx->pc = 0x30C354u;
    SET_GPR_U32(ctx, 31, 0x30C35Cu);
    ctx->pc = 0x32FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF50u, 0x30C354u, 0x30C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C35Cu;
label_30c35c:
    // 0x30c35c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30c360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c364: 0x2484cda8  addiu       $a0, $a0, -0x3258
    ctx->pc = 0x30c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954408));
    // 0x30c368: 0xc0cc04e  jal         func_330138
    ctx->pc = 0x30C368u;
    SET_GPR_U32(ctx, 31, 0x30C370u);
    ctx->pc = 0x30C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C368u;
    // 0x30c36c: 0xaf90c538  sw          $s0, -0x3AC8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952248), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330138u, 0x30C368u, 0x30C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C370u;
label_30c370:
    // 0x30c370: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30c370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30c374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c378: 0xc0cc04e  jal         func_330138
    ctx->pc = 0x30C378u;
    SET_GPR_U32(ctx, 31, 0x30C380u);
    ctx->pc = 0x30C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C378u;
    // 0x30c37c: 0x24843388  addiu       $a0, $a0, 0x3388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330138u, 0x30C378u, 0x30C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C380u;
label_30c380:
    // 0x30c380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c388: 0x3e00008  jr          $ra
    ctx->pc = 0x30C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C388u;
        // 0x30c38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C390u;
}
