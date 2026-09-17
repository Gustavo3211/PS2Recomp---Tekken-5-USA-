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

// Function: sub_002DB518
// Address: 0x2db518 - 0x2db580
void sub_002DB518_0x2db518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB518_0x2db518");
#endif

    switch (ctx->pc) {
        case 0x2db548u: goto label_2db548;
        case 0x2db564u: goto label_2db564;
        default: break;
    }

    ctx->pc = 0x2db518u;

    // 0x2db518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db51c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db520: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2db520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db52c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db538: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db53c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db540: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2DB540u;
    SET_GPR_U32(ctx, 31, 0x2DB548u);
    ctx->pc = 0x2DB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB540u;
    // 0x2db544: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2DB540u, 0x2DB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB548u;
label_2db548:
    // 0x2db548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db54c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db550: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2db550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db554: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db558: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2db558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db55c: 0xc0b6d60  jal         func_2DB580
    ctx->pc = 0x2DB55Cu;
    SET_GPR_U32(ctx, 31, 0x2DB564u);
    ctx->pc = 0x2DB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB55Cu;
    // 0x2db560: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB580u, 0x2DB55Cu, 0x2DB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB564u;
label_2db564:
    // 0x2db564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db56c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db578: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB578u;
        // 0x2db57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB580u;
}
