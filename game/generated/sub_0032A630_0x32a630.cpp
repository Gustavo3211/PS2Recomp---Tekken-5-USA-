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

// Function: sub_0032A630
// Address: 0x32a630 - 0x32a690
void sub_0032A630_0x32a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A630_0x32a630");
#endif

    switch (ctx->pc) {
        case 0x32a654u: goto label_32a654;
        case 0x32a684u: goto label_32a684;
        default: break;
    }

    ctx->pc = 0x32a630u;

    // 0x32a630: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32a630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a634: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32a634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32a638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a63c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32a63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a640: 0x2484f1c0  addiu       $a0, $a0, -0xE40
    ctx->pc = 0x32a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963648));
    // 0x32a644: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32a644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a64c: 0xc0ca9a4  jal         func_32A690
    ctx->pc = 0x32A64Cu;
    SET_GPR_U32(ctx, 31, 0x32A654u);
    ctx->pc = 0x32A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A64Cu;
    // 0x32a650: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A690u, 0x32A64Cu, 0x32A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A654u;
label_32a654:
    // 0x32a654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a658: 0x3e00008  jr          $ra
    ctx->pc = 0x32A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A658u;
        // 0x32a65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A660u;
    // 0x32a660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32a660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a664: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32a664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32a668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a66c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32a66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a670: 0x2484f200  addiu       $a0, $a0, -0xE00
    ctx->pc = 0x32a670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
    // 0x32a674: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32a674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a67c: 0xc0ca9a4  jal         func_32A690
    ctx->pc = 0x32A67Cu;
    SET_GPR_U32(ctx, 31, 0x32A684u);
    ctx->pc = 0x32A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A67Cu;
    // 0x32a680: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A690u, 0x32A67Cu, 0x32A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A684u;
label_32a684:
    // 0x32a684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a688: 0x3e00008  jr          $ra
    ctx->pc = 0x32A688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A688u;
        // 0x32a68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A690u;
}
