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

// Function: sub_002E7530
// Address: 0x2e7530 - 0x2e75b0
void sub_002E7530_0x2e7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7530_0x2e7530");
#endif

    switch (ctx->pc) {
        case 0x2e755cu: goto label_2e755c;
        default: break;
    }

    ctx->pc = 0x2e7530u;

    // 0x2e7530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e753c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e7540: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e7540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e7544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e7548: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e7548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e754c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e7550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7554: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E7554u;
    SET_GPR_U32(ctx, 31, 0x2E755Cu);
    ctx->pc = 0x2E7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7554u;
    // 0x2e7558: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E7554u, 0x2E755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E755Cu;
label_2e755c:
    // 0x2e755c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e755cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e7560: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2e7560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e7564: 0x2463ff38  addiu       $v1, $v1, -0xC8
    ctx->pc = 0x2e7564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967096));
    // 0x2e7568: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2e7568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2e756c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e7570: 0x24840620  addiu       $a0, $a0, 0x620
    ctx->pc = 0x2e7570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    // 0x2e7574: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e7574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e7578: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2e7578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x2e757c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e757cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7580: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e7584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e7584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7588: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2e7588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2e758c: 0xae12012c  sw          $s2, 0x12C($s0)
    ctx->pc = 0x2e758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 18));
    // 0x2e7590: 0xae130128  sw          $s3, 0x128($s0)
    ctx->pc = 0x2e7590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 19));
    // 0x2e7594: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2e7594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2e7598: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e7598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e759c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e759cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e75a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e75a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e75a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A4u;
        // 0x2e75a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E75A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E75ACu;
    // 0x2e75ac: 0x0  nop
    ctx->pc = 0x2e75acu;
    // NOP
    ctx->pc = 0x2e75b0u;
}
