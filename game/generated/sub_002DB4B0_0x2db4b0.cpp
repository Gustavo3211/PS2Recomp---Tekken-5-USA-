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

// Function: sub_002DB4B0
// Address: 0x2db4b0 - 0x2db518
void sub_002DB4B0_0x2db4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4B0_0x2db4b0");
#endif

    switch (ctx->pc) {
        case 0x2db4e0u: goto label_2db4e0;
        case 0x2db4fcu: goto label_2db4fc;
        default: break;
    }

    ctx->pc = 0x2db4b0u;

    // 0x2db4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db4b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db4b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2db4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db4cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db4d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2db4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db4d8: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2DB4D8u;
    SET_GPR_U32(ctx, 31, 0x2DB4E0u);
    ctx->pc = 0x2DB4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4D8u;
    // 0x2db4dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2DB4D8u, 0x2DB4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4E0u;
label_2db4e0:
    // 0x2db4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2db4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2db4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4f0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2db4f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db4f4: 0xc0b6d60  jal         func_2DB580
    ctx->pc = 0x2DB4F4u;
    SET_GPR_U32(ctx, 31, 0x2DB4FCu);
    ctx->pc = 0x2DB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4F4u;
    // 0x2db4f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB580u, 0x2DB4F4u, 0x2DB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4FCu;
label_2db4fc:
    // 0x2db4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db508: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db50c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db510: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB510u;
        // 0x2db514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB518u;
}
