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

// Function: sub_00334370
// Address: 0x334370 - 0x3343e0
void sub_00334370_0x334370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334370_0x334370");
#endif

    switch (ctx->pc) {
        case 0x334398u: goto label_334398;
        case 0x3343acu: goto label_3343ac;
        case 0x3343bcu: goto label_3343bc;
        default: break;
    }

    ctx->pc = 0x334370u;

    // 0x334370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33437c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334380: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x334388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33438c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334390: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x334390u;
    SET_GPR_U32(ctx, 31, 0x334398u);
    ctx->pc = 0x334394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334390u;
    // 0x334394: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x334390u, 0x334398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334398u;
label_334398:
    // 0x334398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33439c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3343a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343a4: 0xc0cd088  jal         func_334220
    ctx->pc = 0x3343A4u;
    SET_GPR_U32(ctx, 31, 0x3343ACu);
    ctx->pc = 0x3343A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343A4u;
    // 0x3343a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334220u, 0x3343A4u, 0x3343ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343ACu;
label_3343ac:
    // 0x3343ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3343ACu;
    {
        const bool branch_taken_0x3343ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343ACu;
        // 0x3343b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343ac) {
            ctx->pc = 0x3343BCu;
            goto label_3343bc;
        }
    }
    ctx->pc = 0x3343B4u;
    // 0x3343b4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x3343B4u;
    SET_GPR_U32(ctx, 31, 0x3343BCu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x3343B4u, 0x3343BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343BCu;
label_3343bc:
    // 0x3343bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3343bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3343c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3343c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3343c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3343c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3343c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3343cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3343ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3343d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3343d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3343d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3343D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3343D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343D4u;
        // 0x3343d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3343D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3343DCu;
    // 0x3343dc: 0x0  nop
    ctx->pc = 0x3343dcu;
    // NOP
    ctx->pc = 0x3343e0u;
}
