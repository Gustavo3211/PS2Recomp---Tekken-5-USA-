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

// Function: sub_002D48D0
// Address: 0x2d48d0 - 0x2d4948
void sub_002D48D0_0x2d48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D48D0_0x2d48d0");
#endif

    switch (ctx->pc) {
        case 0x2d48f4u: goto label_2d48f4;
        case 0x2d4908u: goto label_2d4908;
        case 0x2d4938u: goto label_2d4938;
        default: break;
    }

    ctx->pc = 0x2d48d0u;

    // 0x2d48d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d48d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d48d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d48d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d48dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d48e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2d48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2d48e4: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
    // 0x2d48e8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2d48ec: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2D48ECu;
    SET_GPR_U32(ctx, 31, 0x2D48F4u);
    ctx->pc = 0x2D48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48ECu;
    // 0x2d48f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2D48ECu, 0x2D48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48F4u;
label_2d48f4:
    // 0x2d48f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d48f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48f8: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2d48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2d48fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d48fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4900: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2D4900u;
    SET_GPR_U32(ctx, 31, 0x2D4908u);
    ctx->pc = 0x2D4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4900u;
    // 0x2d4904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2D4900u, 0x2D4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4908u;
label_2d4908:
    // 0x2d4908: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d4908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d490c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2d490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2d4910: 0x2463ed88  addiu       $v1, $v1, -0x1278
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962568));
    // 0x2d4914: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2d4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2d4918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4918u;
    {
        const bool branch_taken_0x2d4918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4918u;
        // 0x2d491c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4918) {
            ctx->pc = 0x2D4938u;
            goto label_2d4938;
        }
    }
    ctx->pc = 0x2D4920u;
    // 0x2d4920: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2d4924: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2d4928: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2d492c: 0x24840264  addiu       $a0, $a0, 0x264
    ctx->pc = 0x2d492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 612));
    // 0x2d4930: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2D4930u;
    SET_GPR_U32(ctx, 31, 0x2D4938u);
    ctx->pc = 0x2D4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4930u;
    // 0x2d4934: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2D4930u, 0x2D4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4938u;
label_2d4938:
    // 0x2d4938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d493c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4940: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4940u;
        // 0x2d4944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4948u;
}
