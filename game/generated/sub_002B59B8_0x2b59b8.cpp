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

// Function: sub_002B59B8
// Address: 0x2b59b8 - 0x2b5a78
void sub_002B59B8_0x2b59b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B59B8_0x2b59b8");
#endif

    switch (ctx->pc) {
        case 0x2b59e0u: goto label_2b59e0;
        case 0x2b5a4cu: goto label_2b5a4c;
        default: break;
    }

    ctx->pc = 0x2b59b8u;

    // 0x2b59b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b59b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b59bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b59c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b59c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b59c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b59cc: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2b59ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2b59d0: 0x18c00023  blez        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B59D0u;
    {
        const bool branch_taken_0x2b59d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59D0u;
        // 0x2b59d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59d0) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B59D8u;
    // 0x2b59d8: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x2b59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2b59dc: 0x0  nop
    ctx->pc = 0x2b59dcu;
    // NOP
label_2b59e0:
    // 0x2b59e0: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x2b59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b59e4: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x2b59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b59e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b59ec: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2b59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b59f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b59f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b59f8: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x2b59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2b59fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b59fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b5a00: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5A00u;
    {
        const bool branch_taken_0x2b5a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a00) {
            ctx->pc = 0x2B5A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5A00u;
            // 0x2b5a04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5A54u;
            goto label_2b5a54;
        }
    }
    ctx->pc = 0x2B5A08u;
    // 0x2b5a08: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2b5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2b5a0c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A0Cu;
    {
        const bool branch_taken_0x2b5a0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A0Cu;
        // 0x2b5a10: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a0c) {
            ctx->pc = 0x2B5A20u;
            goto label_2b5a20;
        }
    }
    ctx->pc = 0x2B5A14u;
    // 0x2b5a14: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x2b5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x2b5a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5A18u;
    {
        const bool branch_taken_0x2b5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A18u;
        // 0x2b5a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a18) {
            ctx->pc = 0x2B5A24u;
            goto label_2b5a24;
        }
    }
    ctx->pc = 0x2B5A20u;
label_2b5a20:
    // 0x2b5a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a24:
    // 0x2b5a24: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5A24u;
    {
        const bool branch_taken_0x2b5a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a24) {
            ctx->pc = 0x2B5A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5A24u;
            // 0x2b5a28: 0x8e06007c  lw          $a2, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5A50u;
            goto label_2b5a50;
        }
    }
    ctx->pc = 0x2B5A2Cu;
    // 0x2b5a2c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2b5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b5a30: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x2b5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2b5a34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b5a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a3c: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2b5a40: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b5a44: 0xc0ad62a  jal         func_2B58A8
    ctx->pc = 0x2B5A44u;
    SET_GPR_U32(ctx, 31, 0x2B5A4Cu);
    ctx->pc = 0x2B5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A44u;
    // 0x2b5a48: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B58A8u, 0x2B5A44u, 0x2B5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A4Cu;
label_2b5a4c:
    // 0x2b5a4c: 0x8e06007c  lw          $a2, 0x7C($s0)
    ctx->pc = 0x2b5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2b5a50:
    // 0x2b5a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b5a54:
    // 0x2b5a54: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2b5a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b5a58: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2B5A58u;
    {
        const bool branch_taken_0x2b5a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a58) {
            ctx->pc = 0x2B5A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5A58u;
            // 0x2b5a5c: 0x1128c0  sll         $a1, $s1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B59E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b59e0;
        }
    }
    ctx->pc = 0x2B5A60u;
label_2b5a60:
    // 0x2b5a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A6Cu;
        // 0x2b5a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A74u;
    // 0x2b5a74: 0x0  nop
    ctx->pc = 0x2b5a74u;
    // NOP
    ctx->pc = 0x2b5a78u;
}
