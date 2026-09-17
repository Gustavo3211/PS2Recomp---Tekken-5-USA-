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

// Function: sub_00336918
// Address: 0x336918 - 0x336980
void sub_00336918_0x336918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336918_0x336918");
#endif

    switch (ctx->pc) {
        case 0x336948u: goto label_336948;
        default: break;
    }

    ctx->pc = 0x336918u;

    // 0x336918: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x336918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x33691c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x33691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x336920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336924: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x336924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336928: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x336928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33692c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33692cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x336930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336934: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x336934u;
    {
        const bool branch_taken_0x336934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x336938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336934u;
        // 0x336938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336934) {
            ctx->pc = 0x336970u;
            goto label_336970;
        }
    }
    ctx->pc = 0x33693Cu;
    // 0x33693c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x33693cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336940: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x336940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336944: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x336944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_336948:
    // 0x336948: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x336948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33694c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33694cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x336950: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x336950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x336954: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336958: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x336958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x33695c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x33695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336960: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x336960u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x336964: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x336964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336968: 0x1446fff7  bne         $v0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x336968u;
    {
        const bool branch_taken_0x336968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x33696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336968u;
        // 0x33696c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336968) {
            ctx->pc = 0x336948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336948;
        }
    }
    ctx->pc = 0x336970u;
label_336970:
    // 0x336970: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x336970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336974: 0x3e00008  jr          $ra
    ctx->pc = 0x336974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336974u;
        // 0x336978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33697Cu;
    // 0x33697c: 0x0  nop
    ctx->pc = 0x33697cu;
    // NOP
    ctx->pc = 0x336980u;
}
