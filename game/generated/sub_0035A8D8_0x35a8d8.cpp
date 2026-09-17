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

// Function: sub_0035A8D8
// Address: 0x35a8d8 - 0x35a930
void sub_0035A8D8_0x35a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A8D8_0x35a8d8");
#endif

    switch (ctx->pc) {
        case 0x35a908u: goto label_35a908;
        case 0x35a920u: goto label_35a920;
        default: break;
    }

    ctx->pc = 0x35a8d8u;

    // 0x35a8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a8dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35a8e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8e8: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35A8E8u;
    {
        const bool branch_taken_0x35a8e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x35A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A8E8u;
        // 0x35a8ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8e8) {
            ctx->pc = 0x35A920u;
            goto label_35a920;
        }
    }
    ctx->pc = 0x35A8F0u;
    // 0x35a8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a8f4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A8F4u;
    {
        const bool branch_taken_0x35a8f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a8f4) {
            ctx->pc = 0x35A908u;
            goto label_35a908;
        }
    }
    ctx->pc = 0x35A8FCu;
    // 0x35a8fc: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x35a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x35a900: 0xc0d9988  jal         func_366620
    ctx->pc = 0x35A900u;
    SET_GPR_U32(ctx, 31, 0x35A908u);
    ctx->pc = 0x35A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A900u;
    // 0x35a904: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366620u, 0x35A900u, 0x35A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A908u;
label_35a908:
    // 0x35a908: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A908u;
    {
        const bool branch_taken_0x35a908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a908) {
            ctx->pc = 0x35A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A908u;
            // 0x35a90c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A924u;
            goto label_35a924;
        }
    }
    ctx->pc = 0x35A910u;
    // 0x35a910: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x35a910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x35a914: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a918: 0xc0d99d2  jal         func_366748
    ctx->pc = 0x35A918u;
    SET_GPR_U32(ctx, 31, 0x35A920u);
    ctx->pc = 0x35A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A918u;
    // 0x35a91c: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366748u, 0x35A918u, 0x35A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A920u;
label_35a920:
    // 0x35a920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35a924:
    // 0x35a924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a928: 0x3e00008  jr          $ra
    ctx->pc = 0x35A928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A928u;
        // 0x35a92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A930u;
}
