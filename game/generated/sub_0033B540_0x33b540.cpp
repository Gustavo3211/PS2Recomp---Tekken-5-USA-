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

// Function: sub_0033B540
// Address: 0x33b540 - 0x33b5c8
void sub_0033B540_0x33b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B540_0x33b540");
#endif

    switch (ctx->pc) {
        case 0x33b570u: goto label_33b570;
        default: break;
    }

    ctx->pc = 0x33b540u;

    // 0x33b540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b548: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x33b548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b54c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33b54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b550: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33b550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x33b554: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33b554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x33b558: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33b558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b55c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x33b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x33b560: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b564: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33B564u;
    {
        const bool branch_taken_0x33b564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B564u;
        // 0x33b568: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b564) {
            ctx->pc = 0x33B5A0u;
            goto label_33b5a0;
        }
    }
    ctx->pc = 0x33B56Cu;
    // 0x33b56c: 0x94a70008  lhu         $a3, 0x8($a1)
    ctx->pc = 0x33b56cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_33b570:
    // 0x33b570: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x33b570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b574: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x33b574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33b578: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x33B578u;
    {
        const bool branch_taken_0x33b578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b578) {
            ctx->pc = 0x33B57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B578u;
            // 0x33b57c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B5A4u;
            goto label_33b5a4;
        }
    }
    ctx->pc = 0x33B580u;
    // 0x33b580: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x33b580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x33b584: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x33b584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b588: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33b588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x33b58c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x33b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x33b590: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b594: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b598: 0x14c2fff5  bne         $a2, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x33B598u;
    {
        const bool branch_taken_0x33b598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B598u;
        // 0x33b59c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b598) {
            ctx->pc = 0x33B570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b570;
        }
    }
    ctx->pc = 0x33B5A0u;
label_33b5a0:
    // 0x33b5a0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x33b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_33b5a4:
    // 0x33b5a4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b5a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x33b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x33b5ac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b5b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b5b4: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x33b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x33b5b8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x33b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x33b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x33B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5BCu;
        // 0x33b5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B5C4u;
    // 0x33b5c4: 0x0  nop
    ctx->pc = 0x33b5c4u;
    // NOP
    ctx->pc = 0x33b5c8u;
}
