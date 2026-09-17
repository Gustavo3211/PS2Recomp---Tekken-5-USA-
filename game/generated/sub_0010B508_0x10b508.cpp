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

// Function: sub_0010B508
// Address: 0x10b508 - 0x10b580
void sub_0010B508_0x10b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B508_0x10b508");
#endif

    switch (ctx->pc) {
        case 0x10b534u: goto label_10b534;
        default: break;
    }

    ctx->pc = 0x10b508u;

    // 0x10b508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b50c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b514: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b51c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10b51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b52c: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B52Cu;
    // 0x10b530: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0x10B52Cu, 0x10B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10b538: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x10b538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x10b53c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x10b53cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x10b540: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10b540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10b544: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10b544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10b548: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x10b54c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b550: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x10b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x10b554: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x10b554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x10b558: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10b558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10b55c: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x10b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x10b560: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b564: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b570: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10b570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10b574: 0x3e00008  jr          $ra
    ctx->pc = 0x10B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B574u;
        // 0x10b578: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B57Cu;
    // 0x10b57c: 0x0  nop
    ctx->pc = 0x10b57cu;
    // NOP
    ctx->pc = 0x10b580u;
}
