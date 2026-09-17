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

// Function: sub_002E3140
// Address: 0x2e3140 - 0x2e31b8
void sub_002E3140_0x2e3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3140_0x2e3140");
#endif

    switch (ctx->pc) {
        case 0x2e3178u: goto label_2e3178;
        case 0x2e318cu: goto label_2e318c;
        default: break;
    }

    ctx->pc = 0x2e3140u;

    // 0x2e3140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e314c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3150: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e3150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3154: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e3158: 0x2633015c  addiu       $s3, $s1, 0x15C
    ctx->pc = 0x2e3158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x2e315c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3160: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e3164: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2e3168: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3168u;
    {
        const bool branch_taken_0x2e3168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3168u;
        // 0x2e316c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3168) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E3170u;
    // 0x2e3170: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E3170u;
    SET_GPR_U32(ctx, 31, 0x2E3178u);
    ctx->pc = 0x2E3174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3170u;
    // 0x2e3174: 0xae320074  sw          $s2, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E3170u, 0x2E3178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3178u;
label_2e3178:
    // 0x2e3178: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x2e3178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2e317c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e317cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3180: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e3180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3184: 0xc0b94e4  jal         func_2E5390
    ctx->pc = 0x2E3184u;
    SET_GPR_U32(ctx, 31, 0x2E318Cu);
    ctx->pc = 0x2E3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3184u;
    // 0x2e3188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5390u, 0x2E3184u, 0x2E318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E318Cu;
label_2e318c:
    // 0x2e318c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2e318cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2e3190: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e3194: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2e3194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_2e3198:
    // 0x2e3198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e319c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e319cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e31a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e31a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e31a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e31a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e31a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e31a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e31ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31ACu;
        // 0x2e31b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31B4u;
    // 0x2e31b4: 0x0  nop
    ctx->pc = 0x2e31b4u;
    // NOP
    ctx->pc = 0x2e31b8u;
}
