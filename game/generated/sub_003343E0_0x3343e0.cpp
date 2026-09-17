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

// Function: sub_003343E0
// Address: 0x3343e0 - 0x334450
void sub_003343E0_0x3343e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003343E0_0x3343e0");
#endif

    switch (ctx->pc) {
        case 0x334408u: goto label_334408;
        case 0x33441cu: goto label_33441c;
        case 0x33442cu: goto label_33442c;
        default: break;
    }

    ctx->pc = 0x3343e0u;

    // 0x3343e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3343e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3343e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3343e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3343e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3343ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3343f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3343f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3343f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3343f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3343f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3343fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3343fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334400: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x334400u;
    SET_GPR_U32(ctx, 31, 0x334408u);
    ctx->pc = 0x334404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334400u;
    // 0x334404: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x334400u, 0x334408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334408u;
label_334408:
    // 0x334408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33440c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33440cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x334410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334414: 0xc0cd0b2  jal         func_3342C8
    ctx->pc = 0x334414u;
    SET_GPR_U32(ctx, 31, 0x33441Cu);
    ctx->pc = 0x334418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334414u;
    // 0x334418: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3342C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3342C8u, 0x334414u, 0x33441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33441Cu;
label_33441c:
    // 0x33441c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x33441Cu;
    {
        const bool branch_taken_0x33441c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x334420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33441Cu;
        // 0x334420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33441c) {
            ctx->pc = 0x33442Cu;
            goto label_33442c;
        }
    }
    ctx->pc = 0x334424u;
    // 0x334424: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x334424u;
    SET_GPR_U32(ctx, 31, 0x33442Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x334424u, 0x33442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33442Cu;
label_33442c:
    // 0x33442c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33442cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33443c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33443cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334444: 0x3e00008  jr          $ra
    ctx->pc = 0x334444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334444u;
        // 0x334448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33444Cu;
    // 0x33444c: 0x0  nop
    ctx->pc = 0x33444cu;
    // NOP
    ctx->pc = 0x334450u;
}
