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

// Function: sub_00326048
// Address: 0x326048 - 0x3260b8
void sub_00326048_0x326048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326048_0x326048");
#endif

    switch (ctx->pc) {
        case 0x326070u: goto label_326070;
        case 0x326084u: goto label_326084;
        case 0x326098u: goto label_326098;
        case 0x3260a4u: goto label_3260a4;
        default: break;
    }

    ctx->pc = 0x326048u;

    // 0x326048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32604c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x326050: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x326050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326054: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x326054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326058: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32605c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x326060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x326064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x326068: 0xc0c970e  jal         func_325C38
    ctx->pc = 0x326068u;
    SET_GPR_U32(ctx, 31, 0x326070u);
    ctx->pc = 0x32606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326068u;
    // 0x32606c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C38u, 0x326068u, 0x326070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326070u;
label_326070:
    // 0x326070: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x326070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x326074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32607c: 0xc0c972c  jal         func_325CB0
    ctx->pc = 0x32607Cu;
    SET_GPR_U32(ctx, 31, 0x326084u);
    ctx->pc = 0x326080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32607Cu;
    // 0x326080: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325CB0u, 0x32607Cu, 0x326084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326084u;
label_326084:
    // 0x326084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326088: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32608c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32608cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326090: 0xc0c982e  jal         func_3260B8
    ctx->pc = 0x326090u;
    SET_GPR_U32(ctx, 31, 0x326098u);
    ctx->pc = 0x326094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326090u;
    // 0x326094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260B8u, 0x326090u, 0x326098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326098u;
label_326098:
    // 0x326098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32609c: 0xc0d0b90  jal         func_342E40
    ctx->pc = 0x32609Cu;
    SET_GPR_U32(ctx, 31, 0x3260A4u);
    ctx->pc = 0x3260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32609Cu;
    // 0x3260a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E40u, 0x32609Cu, 0x3260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260A4u;
label_3260a4:
    // 0x3260a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3260a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3260a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3260a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3260ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3260acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3260b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3260B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3260B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260B0u;
        // 0x3260b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3260B8u;
}
