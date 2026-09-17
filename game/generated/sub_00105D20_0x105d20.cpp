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

// Function: sub_00105D20
// Address: 0x105d20 - 0x105df8
void sub_00105D20_0x105d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105D20_0x105d20");
#endif

    ctx->pc = 0x105d20u;

    // 0x105d20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105d24: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105d28: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x105d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x105d2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105d30u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x105d34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105d38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105D38u;
    {
        const bool branch_taken_0x105d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D38u;
        // 0x105d3c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d38) {
            ctx->pc = 0x105D50u;
            goto label_105d50;
        }
    }
    ctx->pc = 0x105D40u;
    // 0x105d40: 0xf  sync
    ctx->pc = 0x105d40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105d44: 0x42000038  ei
    ctx->pc = 0x105d44u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105d48: 0x3e00008  jr          $ra
    ctx->pc = 0x105D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D48u;
        // 0x105d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D50u;
label_105d50:
    // 0x105d50: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x105d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105d54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105D54u;
    {
        const bool branch_taken_0x105d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D54u;
        // 0x105d58: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d54) {
            ctx->pc = 0x105DB4u;
            goto label_105db4;
        }
    }
    ctx->pc = 0x105D5Cu;
    // 0x105d5c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x105d60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105d64: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x105d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x105d68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x105d68u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x105d6c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x105d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x105d70: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x105d70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000b420
    // 0x105d74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105d78: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x105d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x105d7c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x105d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x105d80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105d80u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x1000b400
    // 0x105d84: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x105d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x105d88: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x105d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x105d8c: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x105d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x105d90: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x105d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x105d94: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105d98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105d9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x105d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x105da0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x105da4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105da8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x105da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x105dac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x105DACu;
    {
        const bool branch_taken_0x105dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DACu;
        // 0x105db0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dac) {
            ctx->pc = 0x105DE4u;
            goto label_105de4;
        }
    }
    ctx->pc = 0x105DB4u;
label_105db4:
    // 0x105db4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x105db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x105db8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105dbc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x105dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x105dc0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x105dc0u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x105dc4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x105dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x105dc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105dcc: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x105dd0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x105dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105dd4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x105dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x105dd8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x105dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x105ddc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x105ddcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5)); // MMIO: 0x1000b400
    // 0x105de0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x105de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_105de4:
    // 0x105de4: 0xf  sync
    ctx->pc = 0x105de4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105de8: 0x42000038  ei
    ctx->pc = 0x105de8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105dec: 0x3e00008  jr          $ra
    ctx->pc = 0x105DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DECu;
        // 0x105df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105DF4u;
    // 0x105df4: 0x0  nop
    ctx->pc = 0x105df4u;
    // NOP
    ctx->pc = 0x105df8u;
}
