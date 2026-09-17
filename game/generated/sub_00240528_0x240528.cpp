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

// Function: sub_00240528
// Address: 0x240528 - 0x2405e8
void sub_00240528_0x240528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240528_0x240528");
#endif

    switch (ctx->pc) {
        case 0x24053cu: goto label_24053c;
        case 0x24054cu: goto label_24054c;
        case 0x240588u: goto label_240588;
        case 0x2405b4u: goto label_2405b4;
        default: break;
    }

    ctx->pc = 0x240528u;

    // 0x240528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240534: 0xc0900d0  jal         func_240340
    ctx->pc = 0x240534u;
    SET_GPR_U32(ctx, 31, 0x24053Cu);
    ctx->pc = 0x240538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240534u;
    // 0x240538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240340u, 0x240534u, 0x24053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24053Cu;
label_24053c:
    // 0x24053c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24053Cu;
    {
        const bool branch_taken_0x24053c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24053Cu;
        // 0x240540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24053c) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x240544u;
    // 0x240544: 0xc090062  jal         func_240188
    ctx->pc = 0x240544u;
    SET_GPR_U32(ctx, 31, 0x24054Cu);
    ctx->pc = 0x240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240188u, 0x240544u, 0x24054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240550: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x240550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x240554: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x240554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x240558: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x240558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24055c: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x24055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x240560: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x240564: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x240564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x240568: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x240568u;
    {
        const bool branch_taken_0x240568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240568u;
        // 0x24056c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240568) {
            ctx->pc = 0x24059Cu;
            goto label_24059c;
        }
    }
    ctx->pc = 0x240570u;
label_240570:
    // 0x240570: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x240570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x240574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240578: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240578u;
    {
        const bool branch_taken_0x240578 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240578u;
        // 0x24057c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240578) {
            ctx->pc = 0x24059Cu;
            goto label_24059c;
        }
    }
    ctx->pc = 0x240580u;
    // 0x240580: 0xc0c5a5d  jal         func_316974
    ctx->pc = 0x240580u;
    SET_GPR_U32(ctx, 31, 0x240588u);
    ctx->pc = 0x316974u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316974u, 0x240580u, 0x240588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240588u;
label_240588:
    // 0x240588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240588u;
    {
        const bool branch_taken_0x240588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240588u;
        // 0x24058c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240588) {
            ctx->pc = 0x24059Cu;
            goto label_24059c;
        }
    }
    ctx->pc = 0x240590u;
    // 0x240590: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x240590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x240594: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x240598: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x240598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_24059c:
    // 0x24059c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x24059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2405a0: 0x2842fda8  slti        $v0, $v0, -0x258
    ctx->pc = 0x2405a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966696) ? 1 : 0);
    // 0x2405a4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2405A4u;
    {
        const bool branch_taken_0x2405a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2405a4) {
            ctx->pc = 0x2405A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2405A4u;
            // 0x2405a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2405D8u;
            goto label_2405d8;
        }
    }
    ctx->pc = 0x2405ACu;
    // 0x2405ac: 0xc090062  jal         func_240188
    ctx->pc = 0x2405ACu;
    SET_GPR_U32(ctx, 31, 0x2405B4u);
    ctx->pc = 0x2405B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405ACu;
    // 0x2405b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240188u, 0x2405ACu, 0x2405B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B4u;
label_2405b4:
    // 0x2405b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2405b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2405b8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2405bc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2405c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2405c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2405c4: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x2405c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x2405c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2405c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2405cc: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x2405ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x2405d0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2405d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2405d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2405d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2405d8:
    // 0x2405d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2405d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2405dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2405DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2405E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405DCu;
        // 0x2405e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2405DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2405E4u;
    // 0x2405e4: 0x0  nop
    ctx->pc = 0x2405e4u;
    // NOP
    ctx->pc = 0x2405e8u;
}
