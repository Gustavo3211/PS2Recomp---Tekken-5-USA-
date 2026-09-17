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

// Function: sub_0036BA70
// Address: 0x36ba70 - 0x36bad0
void sub_0036BA70_0x36ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BA70_0x36ba70");
#endif

    switch (ctx->pc) {
        case 0x36ba9cu: goto label_36ba9c;
        case 0x36bab4u: goto label_36bab4;
        default: break;
    }

    ctx->pc = 0x36ba70u;

    // 0x36ba70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36ba74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ba78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36ba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ba80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36ba80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36ba88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x36ba88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36ba90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36ba94: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x36BA94u;
    SET_GPR_U32(ctx, 31, 0x36BA9Cu);
    ctx->pc = 0x36BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA94u;
    // 0x36ba98: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x36BA94u, 0x36BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA9Cu;
label_36ba9c:
    // 0x36ba9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36baa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BAA4u;
    {
        const bool branch_taken_0x36baa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAA4u;
        // 0x36baa8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36baa4) {
            ctx->pc = 0x36BAB4u;
            goto label_36bab4;
        }
    }
    ctx->pc = 0x36BAACu;
    // 0x36baac: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x36BAACu;
    SET_GPR_U32(ctx, 31, 0x36BAB4u);
    ctx->pc = 0x36BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAACu;
    // 0x36bab0: 0x8e640130  lw          $a0, 0x130($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x36BAACu, 0x36BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAB4u;
label_36bab4:
    // 0x36bab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36babc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36babcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bac0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36bac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36bac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bac8: 0x3e00008  jr          $ra
    ctx->pc = 0x36BAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAC8u;
        // 0x36bacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BAD0u;
}
