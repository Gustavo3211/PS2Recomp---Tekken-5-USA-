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

// Function: sub_00105BD8
// Address: 0x105bd8 - 0x105d20
void sub_00105BD8_0x105bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105BD8_0x105bd8");
#endif

    ctx->pc = 0x105bd8u;

    // 0x105bd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105bdc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x105bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105be0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x105be4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x105be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105be8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105be8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x105bec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105bf0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x105bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x105bf4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x105bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105bfc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x105bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x105c00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x105c04: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x105C04u;
    {
        const bool branch_taken_0x105c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C04u;
        // 0x105c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c04) {
            ctx->pc = 0x105C24u;
            goto label_105c24;
        }
    }
    ctx->pc = 0x105C0Cu;
    // 0x105c0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105c10: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x105c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x105c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105c14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x105c18: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x105c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x105c1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105C1Cu;
    {
        const bool branch_taken_0x105c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C1Cu;
        // 0x105c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c1c) {
            ctx->pc = 0x105C38u;
            goto label_105c38;
        }
    }
    ctx->pc = 0x105C24u;
label_105c24:
    // 0x105c24: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x105c24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x105c28: 0xf  sync
    ctx->pc = 0x105c28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105c2c: 0x42000038  ei
    ctx->pc = 0x105c2cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105c30: 0x3e00008  jr          $ra
    ctx->pc = 0x105C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C30u;
        // 0x105c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105C38u;
label_105c38:
    // 0x105c38: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x105c3c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x105c40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x105c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x105c44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x105c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105c48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x105C48u;
    {
        const bool branch_taken_0x105c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C48u;
        // 0x105c4c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c48) {
            ctx->pc = 0x105CACu;
            goto label_105cac;
        }
    }
    ctx->pc = 0x105C50u;
    // 0x105c50: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x105c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x105c54: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x105c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x105c58: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x105c5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105c5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x105c60: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105c64: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x105c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x105c68: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x105c68u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x105c6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105c70: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x105c74: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x105c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x105c78: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x105c78u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x105c7c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x105c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x105c80: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x105c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x105c84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x105c84u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x105c88: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x105c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x105c8c: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x105c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x105c90: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x105c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x105c94: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x105c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x105c98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x105c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105c9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x105c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x105ca0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105ca4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x105CA4u;
    {
        const bool branch_taken_0x105ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CA4u;
        // 0x105ca8: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ca4) {
            ctx->pc = 0x105D10u;
            goto label_105d10;
        }
    }
    ctx->pc = 0x105CACu;
label_105cac:
    // 0x105cac: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x105cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x105cb0: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x105CB0u;
    {
        const bool branch_taken_0x105cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x105CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CB0u;
        // 0x105cb4: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cb0) {
            ctx->pc = 0x105D10u;
            goto label_105d10;
        }
    }
    ctx->pc = 0x105CB8u;
    // 0x105cb8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x105cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x105cbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105cc0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x105cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x105cc4: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x105cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x105cc8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x105cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x105ccc: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x105cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x105cd0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x105cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105cd4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x105cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105cd8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x105cdc: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x105cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x105ce0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x105ce4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x105ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x105ce8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x105ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x105cec: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x105cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x105cf0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x105cf4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x105cf8: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x105cf8u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x105cfc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x105cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x105d00: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x105d00u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x105d04: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x105d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x105d08: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x105d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x105d0c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_105d10:
    // 0x105d10: 0xf  sync
    ctx->pc = 0x105d10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105d14: 0x42000038  ei
    ctx->pc = 0x105d14u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105d18: 0x3e00008  jr          $ra
    ctx->pc = 0x105D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D18u;
        // 0x105d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D20u;
}
