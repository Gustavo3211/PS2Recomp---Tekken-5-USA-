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

// Function: sub_00292ED0
// Address: 0x292ed0 - 0x292f70
void sub_00292ED0_0x292ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292ED0_0x292ed0");
#endif

    ctx->pc = 0x292ed0u;

    // 0x292ed0: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x292ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x292ed4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292ed8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292ED8u;
    {
        const bool branch_taken_0x292ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ED8u;
        // 0x292edc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ed8) {
            ctx->pc = 0x292EF4u;
            goto label_292ef4;
        }
    }
    ctx->pc = 0x292EE0u;
    // 0x292ee0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x292ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x292ee4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x292ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ee8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x292ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292eec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292EECu;
    {
        const bool branch_taken_0x292eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EECu;
        // 0x292ef0: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292eec) {
            ctx->pc = 0x292F04u;
            goto label_292f04;
        }
    }
    ctx->pc = 0x292EF4u;
label_292ef4:
    // 0x292ef4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x292ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x292ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292efc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x292efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x292f00: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x292f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_292f04:
    // 0x292f04: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x292F04u;
    {
        const bool branch_taken_0x292f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F04u;
        // 0x292f08: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f04) {
            ctx->pc = 0x292F64u;
            goto label_292f64;
        }
    }
    ctx->pc = 0x292F0Cu;
    // 0x292f0c: 0x2d020022  sltiu       $v0, $t0, 0x22
    ctx->pc = 0x292f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x292f10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x292F10u;
    {
        const bool branch_taken_0x292f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f10) {
            ctx->pc = 0x292F64u;
            goto label_292f64;
        }
    }
    ctx->pc = 0x292F18u;
    // 0x292f18: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x292F18u;
    {
        const bool branch_taken_0x292f18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x292F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F18u;
        // 0x292f1c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f18) {
            ctx->pc = 0x292F30u;
            goto label_292f30;
        }
    }
    ctx->pc = 0x292F20u;
    // 0x292f20: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x292f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x292F24u;
    {
        const bool branch_taken_0x292f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F24u;
        // 0x292f28: 0x8c460100  lw          $a2, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f24) {
            ctx->pc = 0x292F38u;
            goto label_292f38;
        }
    }
    ctx->pc = 0x292F2Cu;
    // 0x292f2c: 0x0  nop
    ctx->pc = 0x292f2cu;
    // NOP
label_292f30:
    // 0x292f30: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x292f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292f34: 0x8c460120  lw          $a2, 0x120($v0)
    ctx->pc = 0x292f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_292f38:
    // 0x292f38: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x292F38u;
    {
        const bool branch_taken_0x292f38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F38u;
        // 0x292f3c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f38) {
            ctx->pc = 0x292F64u;
            goto label_292f64;
        }
    }
    ctx->pc = 0x292F40u;
    // 0x292f40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x292f44: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x292f48: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x292F48u;
    {
        const bool branch_taken_0x292f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f48) {
            ctx->pc = 0x292F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292F48u;
            // 0x292f4c: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292F58u;
            goto label_292f58;
        }
    }
    ctx->pc = 0x292F50u;
    // 0x292f50: 0x3e00008  jr          $ra
    ctx->pc = 0x292F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F50u;
        // 0x292f54: 0xacc20078  sw          $v0, 0x78($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F58u;
label_292f58:
    // 0x292f58: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x292f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x292f5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292f60: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x292f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
label_292f64:
    // 0x292f64: 0x3e00008  jr          $ra
    ctx->pc = 0x292F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F6Cu;
    // 0x292f6c: 0x0  nop
    ctx->pc = 0x292f6cu;
    // NOP
    ctx->pc = 0x292f70u;
}
