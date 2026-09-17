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

// Function: sub_0022F988
// Address: 0x22f988 - 0x22fa30
void sub_0022F988_0x22f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F988_0x22f988");
#endif

    switch (ctx->pc) {
        case 0x22f9a0u: goto label_22f9a0;
        case 0x22f9c0u: goto label_22f9c0;
        case 0x22f9e0u: goto label_22f9e0;
        default: break;
    }

    ctx->pc = 0x22f988u;

    // 0x22f988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f994: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22f998: 0xc08be1a  jal         func_22F868
    ctx->pc = 0x22F998u;
    SET_GPR_U32(ctx, 31, 0x22F9A0u);
    ctx->pc = 0x22F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F998u;
    // 0x22f99c: 0x8e040120  lw          $a0, 0x120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F868u, 0x22F998u, 0x22F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9A0u;
label_22f9a0:
    // 0x22f9a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22f9a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22f9a8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22F9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9A8u;
            // 0x22f9ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA24u;
            goto label_22fa24;
        }
    }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0x250a0004  addiu       $t2, $t0, 0x4
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22f9b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9b8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x22f9b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9bc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_22f9c0:
    // 0x22f9c0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x22f9c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f9c8: 0x54700012  bnel        $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F9C8u;
    {
        const bool branch_taken_0x22f9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x22f9c8) {
            ctx->pc = 0x22F9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9C8u;
            // 0x22f9cc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA14u;
            goto label_22fa14;
        }
    }
    ctx->pc = 0x22F9D0u;
    // 0x22f9d0: 0x2d220007  sltiu       $v0, $t1, 0x7
    ctx->pc = 0x22f9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22f9d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F9D4u;
    {
        const bool branch_taken_0x22f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9D4u;
        // 0x22f9d8: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9d4) {
            ctx->pc = 0x22FA00u;
            goto label_22fa00;
        }
    }
    ctx->pc = 0x22F9DCu;
    // 0x22f9dc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x22f9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22f9e0:
    // 0x22f9e0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x22f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22f9e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22f9e8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22f9ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f9f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22f9f4: 0x2cc50007  sltiu       $a1, $a2, 0x7
    ctx->pc = 0x22f9f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22f9f8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22F9F8u;
    {
        const bool branch_taken_0x22f9f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9F8u;
        // 0x22f9fc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9f8) {
            ctx->pc = 0x22F9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f9e0;
        }
    }
    ctx->pc = 0x22FA00u;
label_22fa00:
    // 0x22fa00: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22fa04: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x22fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x22fa08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22fa0c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x22fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x22fa10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22fa10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22fa14:
    // 0x22fa14: 0x2d220008  sltiu       $v0, $t1, 0x8
    ctx->pc = 0x22fa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22fa18: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x22FA18u;
    {
        const bool branch_taken_0x22fa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA18u;
        // 0x22fa1c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa18) {
            ctx->pc = 0x22F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f9c0;
        }
    }
    ctx->pc = 0x22FA20u;
    // 0x22fa20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fa20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fa24:
    // 0x22fa24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22fa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fa28: 0x3e00008  jr          $ra
    ctx->pc = 0x22FA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA28u;
        // 0x22fa2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FA30u;
}
