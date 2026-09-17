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

// Function: sub_002A3B88
// Address: 0x2a3b88 - 0x2a3c20
void sub_002A3B88_0x2a3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3B88_0x2a3b88");
#endif

    switch (ctx->pc) {
        case 0x2a3bd0u: goto label_2a3bd0;
        default: break;
    }

    ctx->pc = 0x2a3b88u;

    // 0x2a3b88: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a3b8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3B90u;
    {
        const bool branch_taken_0x2a3b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B90u;
        // 0x2a3b94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b90) {
            ctx->pc = 0x2A3BA8u;
            goto label_2a3ba8;
        }
    }
    ctx->pc = 0x2A3B98u;
    // 0x2a3b98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3b9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3ba0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3BA0u;
    {
        const bool branch_taken_0x2a3ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BA0u;
        // 0x2a3ba4: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ba0) {
            ctx->pc = 0x2A3BB8u;
            goto label_2a3bb8;
        }
    }
    ctx->pc = 0x2A3BA8u;
label_2a3ba8:
    // 0x2a3ba8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a3bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bb0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a3bb4: 0x2ca2000b  sltiu       $v0, $a1, 0xB
    ctx->pc = 0x2a3bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_2a3bb8:
    // 0x2a3bb8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A3BB8u;
    {
        const bool branch_taken_0x2a3bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3bb8) {
            ctx->pc = 0x2A3C14u;
            goto label_2a3c14;
        }
    }
    ctx->pc = 0x2A3BC0u;
    // 0x2a3bc0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a3bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bc8: 0x2409efff  addiu       $t1, $zero, -0x1001
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a3bcc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2a3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2a3bd0:
    // 0x2a3bd0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2a3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2a3bd4: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x2a3bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a3bd8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a3bdc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3BDCu;
    {
        const bool branch_taken_0x2a3bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BDCu;
        // 0x2a3be0: 0xe5182a  slt         $v1, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bdc) {
            ctx->pc = 0x2A3C04u;
            goto label_2a3c04;
        }
    }
    ctx->pc = 0x2A3BE4u;
    // 0x2a3be4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a3be8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a3be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a3bec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3BECu;
    {
        const bool branch_taken_0x2a3bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BECu;
        // 0x2a3bf0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bec) {
            ctx->pc = 0x2A3C04u;
            goto label_2a3c04;
        }
    }
    ctx->pc = 0x2A3BF4u;
    // 0x2a3bf4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a3bf8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a3bfc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a3bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a3c00: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a3c04:
    // 0x2a3c04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a3c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a3c08: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x2a3c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3c0c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A3C0Cu;
    {
        const bool branch_taken_0x2a3c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C0Cu;
        // 0x2a3c10: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c0c) {
            ctx->pc = 0x2A3BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3bd0;
        }
    }
    ctx->pc = 0x2A3C14u;
label_2a3c14:
    // 0x2a3c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3C1Cu;
    // 0x2a3c1c: 0x0  nop
    ctx->pc = 0x2a3c1cu;
    // NOP
    ctx->pc = 0x2a3c20u;
}
