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

// Function: sub_0049A340
// Address: 0x49a340 - 0x49a388
void sub_0049A340_0x49a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A340_0x49a340");
#endif

    switch (ctx->pc) {
        case 0x49a364u: goto label_49a364;
        default: break;
    }

    ctx->pc = 0x49a340u;

    // 0x49a340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a34c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49a350: 0x8602014a  lh          $v0, 0x14A($s0)
    ctx->pc = 0x49a350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 330)));
    // 0x49a354: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x49A354u;
    {
        const bool branch_taken_0x49a354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a354) {
            ctx->pc = 0x49A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A354u;
            // 0x49a358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A378u;
            goto label_49a378;
        }
    }
    ctx->pc = 0x49A35Cu;
    // 0x49a35c: 0xc1268b2  jal         func_49A2C8
    ctx->pc = 0x49A35Cu;
    SET_GPR_U32(ctx, 31, 0x49A364u);
    ctx->pc = 0x49A2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A2C8u, 0x49A35Cu, 0x49A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A364u;
label_49a364:
    // 0x49a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a370: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x49A370u;
    ctx->pc = 0x49A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A370u;
    // 0x49a374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x49A378u;
label_49a378:
    // 0x49a378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x49A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A37Cu;
        // 0x49a380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A384u;
    // 0x49a384: 0x0  nop
    ctx->pc = 0x49a384u;
    // NOP
    ctx->pc = 0x49a388u;
}
