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

// Function: sub_003438D8
// Address: 0x3438d8 - 0x343958
void sub_003438D8_0x3438d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003438D8_0x3438d8");
#endif

    switch (ctx->pc) {
        case 0x343920u: goto label_343920;
        default: break;
    }

    ctx->pc = 0x3438d8u;

    // 0x3438d8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x3438d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x3438dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3438dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3438e0: 0x2463fe10  addiu       $v1, $v1, -0x1F0
    ctx->pc = 0x3438e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x3438e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3438e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3438e8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3438e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3438ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3438ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3438f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3438f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3438f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3438f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438f8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3438f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3438fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3438fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x343900: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x343900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x43FE24u));
    // 0x343904: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x343904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x343908: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x343908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34390c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x34390cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x343910: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x343910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x343914: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x343914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x343918: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x343918u;
    {
        const bool branch_taken_0x343918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343918u;
        // 0x34391c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343918) {
            ctx->pc = 0x34394Cu;
            goto label_34394c;
        }
    }
    ctx->pc = 0x343920u;
label_343920:
    // 0x343920: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x343920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343924: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x343924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x343928: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x343928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34392c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x343930: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x343930u;
    {
        const bool branch_taken_0x343930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x343930) {
            ctx->pc = 0x34394Cu;
            goto label_34394c;
        }
    }
    ctx->pc = 0x343938u;
    // 0x343938: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34393c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x343940: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x343940u;
    {
        const bool branch_taken_0x343940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x343944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343940u;
        // 0x343944: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343940) {
            ctx->pc = 0x343920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343920;
        }
    }
    ctx->pc = 0x343948u;
    // 0x343948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34394c:
    // 0x34394c: 0x3e00008  jr          $ra
    ctx->pc = 0x34394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34394Cu;
        // 0x343950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343954u;
    // 0x343954: 0x0  nop
    ctx->pc = 0x343954u;
    // NOP
    ctx->pc = 0x343958u;
}
