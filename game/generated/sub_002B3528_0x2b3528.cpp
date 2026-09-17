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

// Function: sub_002B3528
// Address: 0x2b3528 - 0x2b3598
void sub_002B3528_0x2b3528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3528_0x2b3528");
#endif

    switch (ctx->pc) {
        case 0x2b3554u: goto label_2b3554;
        case 0x2b3568u: goto label_2b3568;
        default: break;
    }

    ctx->pc = 0x2b3528u;

    // 0x2b3528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b352c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b3534: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b3538: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2b3538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b353c: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x2b353cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3540: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b3540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b3544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3544u;
    {
        const bool branch_taken_0x2b3544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3544u;
        // 0x2b3548: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3544) {
            ctx->pc = 0x2B3560u;
            goto label_2b3560;
        }
    }
    ctx->pc = 0x2B354Cu;
    // 0x2b354c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B354Cu;
    SET_GPR_U32(ctx, 31, 0x2B3554u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B354Cu, 0x2B3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3554u;
label_2b3554:
    // 0x2b3554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3554u;
    {
        const bool branch_taken_0x2b3554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3554) {
            ctx->pc = 0x2B3568u;
            goto label_2b3568;
        }
    }
    ctx->pc = 0x2B355Cu;
    // 0x2b355c: 0x0  nop
    ctx->pc = 0x2b355cu;
    // NOP
label_2b3560:
    // 0x2b3560: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B3560u;
    SET_GPR_U32(ctx, 31, 0x2B3568u);
    ctx->pc = 0x2B3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3560u;
    // 0x2b3564: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B3560u, 0x2B3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3568u;
label_2b3568:
    // 0x2b3568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3568u;
    {
        const bool branch_taken_0x2b3568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3568u;
        // 0x2b356c: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3568) {
            ctx->pc = 0x2B3578u;
            goto label_2b3578;
        }
    }
    ctx->pc = 0x2B3570u;
    // 0x2b3570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3570u;
    {
        const bool branch_taken_0x2b3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3570u;
        // 0x2b3574: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3570) {
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3578u;
label_2b3578:
    // 0x2b3578: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2b3578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2b357c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b3580:
    // 0x2b3580: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2b3580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2b3584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3588: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b3588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b358c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B358Cu;
        // 0x2b3590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3594u;
    // 0x2b3594: 0x0  nop
    ctx->pc = 0x2b3594u;
    // NOP
    ctx->pc = 0x2b3598u;
}
