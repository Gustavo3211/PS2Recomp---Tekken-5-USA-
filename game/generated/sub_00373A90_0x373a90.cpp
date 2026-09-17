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

// Function: sub_00373A90
// Address: 0x373a90 - 0x373b00
void sub_00373A90_0x373a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A90_0x373a90");
#endif

    switch (ctx->pc) {
        case 0x373abcu: goto label_373abc;
        case 0x373ae0u: goto label_373ae0;
        default: break;
    }

    ctx->pc = 0x373a90u;

    // 0x373a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373a94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x373a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x373a98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x373a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x373a9c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x373a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x373aa0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x373aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x373aa4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373aa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x373aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ab4: 0xc0dd016  jal         func_374058
    ctx->pc = 0x373AB4u;
    SET_GPR_U32(ctx, 31, 0x373ABCu);
    ctx->pc = 0x374058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374058u, 0x373AB4u, 0x373ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ABCu;
label_373abc:
    // 0x373abc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x373abcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x373ac0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373ac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x373ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x373ac8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x373ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x373acc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x373accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x373ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ad4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x373ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373ad8: 0xc0dd02a  jal         func_3740A8
    ctx->pc = 0x373AD8u;
    SET_GPR_U32(ctx, 31, 0x373AE0u);
    ctx->pc = 0x3740A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3740A8u, 0x373AD8u, 0x373AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AE0u;
label_373ae0:
    // 0x373ae0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373ae0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x373ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373ae8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x373ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373aec: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x373aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373af0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x373af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x373af4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x373af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x373af8: 0x3e00008  jr          $ra
    ctx->pc = 0x373AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B00u;
}
