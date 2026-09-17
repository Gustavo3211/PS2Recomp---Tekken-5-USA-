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

// Function: sub_002491C8
// Address: 0x2491c8 - 0x249218
void sub_002491C8_0x2491c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002491C8_0x2491c8");
#endif

    switch (ctx->pc) {
        case 0x2491e4u: goto label_2491e4;
        case 0x2491fcu: goto label_2491fc;
        default: break;
    }

    ctx->pc = 0x2491c8u;

    // 0x2491c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2491c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2491cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2491ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2491d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2491d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2491d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2491d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2491d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2491dc: 0xc0921de  jal         func_248778
    ctx->pc = 0x2491DCu;
    SET_GPR_U32(ctx, 31, 0x2491E4u);
    ctx->pc = 0x2491E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491DCu;
    // 0x2491e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248778u, 0x2491DCu, 0x2491E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491E4u;
label_2491e4:
    // 0x2491e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2491e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2491e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2491ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2491ECu;
    {
        const bool branch_taken_0x2491ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491ECu;
        // 0x2491f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491ec) {
            ctx->pc = 0x2491FCu;
            goto label_2491fc;
        }
    }
    ctx->pc = 0x2491F4u;
    // 0x2491f4: 0xc092648  jal         func_249920
    ctx->pc = 0x2491F4u;
    SET_GPR_U32(ctx, 31, 0x2491FCu);
    ctx->pc = 0x249920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249920u, 0x2491F4u, 0x2491FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491FCu;
label_2491fc:
    // 0x2491fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2491fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249208: 0x3e00008  jr          $ra
    ctx->pc = 0x249208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249208u;
        // 0x24920c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249210u;
    // 0x249210: 0x3e00008  jr          $ra
    ctx->pc = 0x249210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249218u;
}
