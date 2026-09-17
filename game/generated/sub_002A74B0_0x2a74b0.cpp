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

// Function: sub_002A74B0
// Address: 0x2a74b0 - 0x2a7568
void sub_002A74B0_0x2a74b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A74B0_0x2a74b0");
#endif

    switch (ctx->pc) {
        case 0x2a74d4u: goto label_2a74d4;
        case 0x2a74e0u: goto label_2a74e0;
        case 0x2a7538u: goto label_2a7538;
        default: break;
    }

    ctx->pc = 0x2a74b0u;

    // 0x2a74b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a74b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a74b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a74b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a74bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a74c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a74c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a74c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a74c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a74cc: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2A74CCu;
    SET_GPR_U32(ctx, 31, 0x2A74D4u);
    ctx->pc = 0x2A74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74CCu;
    // 0x2a74d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2A74CCu, 0x2A74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74D4u;
label_2a74d4:
    // 0x2a74d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a74d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74d8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A74D8u;
    {
        const bool branch_taken_0x2a74d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74D8u;
        // 0x2a74dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74d8) {
            ctx->pc = 0x2A7500u;
            goto label_2a7500;
        }
    }
    ctx->pc = 0x2A74E0u;
label_2a74e0:
    // 0x2a74e0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2a74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a74e4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2a74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a74e8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a74e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a74ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a74f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a74f4: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x2a74f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a74f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A74F8u;
    {
        const bool branch_taken_0x2a74f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74F8u;
        // 0x2a74fc: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74f8) {
            ctx->pc = 0x2A74E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a74e0;
        }
    }
    ctx->pc = 0x2A7500u;
label_2a7500:
    // 0x2a7500: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x2a7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2a7504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7508: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a750c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a750cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a7514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7518: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2a7518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a751c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A751Cu;
        // 0x2a7520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7524u;
    // 0x2a7524: 0x0  nop
    ctx->pc = 0x2a7524u;
    // NOP
    // 0x2a7528: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2a7528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a752c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2A752Cu;
    {
        const bool branch_taken_0x2a752c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A752Cu;
        // 0x2a7530: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a752c) {
            ctx->pc = 0x2A7558u;
            goto label_2a7558;
        }
    }
    ctx->pc = 0x2A7534u;
    // 0x2a7534: 0x0  nop
    ctx->pc = 0x2a7534u;
    // NOP
label_2a7538:
    // 0x2a7538: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2a753c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a7540: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a7540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7544: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a7548: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2a7548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a754c: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x2a754cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2a7550: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A7550u;
    {
        const bool branch_taken_0x2a7550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7550u;
        // 0x2a7554: 0xa0440000  sb          $a0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7550) {
            ctx->pc = 0x2A7538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7538;
        }
    }
    ctx->pc = 0x2A7558u;
label_2a7558:
    // 0x2a7558: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a755c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2a755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2a7560: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7560u;
        // 0x2a7564: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7568u;
}
