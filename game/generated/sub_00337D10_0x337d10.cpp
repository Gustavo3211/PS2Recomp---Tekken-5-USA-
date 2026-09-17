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

// Function: sub_00337D10
// Address: 0x337d10 - 0x337dc8
void sub_00337D10_0x337d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337D10_0x337d10");
#endif

    switch (ctx->pc) {
        case 0x337d80u: goto label_337d80;
        case 0x337da8u: goto label_337da8;
        case 0x337db0u: goto label_337db0;
        default: break;
    }

    ctx->pc = 0x337d10u;

    // 0x337d10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x337d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337d18: 0x51282  srl         $v0, $a1, 10
    ctx->pc = 0x337d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 10));
    // 0x337d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337d24: 0x30a303ff  andi        $v1, $a1, 0x3FF
    ctx->pc = 0x337d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x337d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337d2c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337D2Cu;
    {
        const bool branch_taken_0x337d2c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x337D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D2Cu;
        // 0x337d30: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d2c) {
            ctx->pc = 0x337D40u;
            goto label_337d40;
        }
    }
    ctx->pc = 0x337D34u;
    // 0x337d34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x337d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337d38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337D38u;
    {
        const bool branch_taken_0x337d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D38u;
        // 0x337d3c: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d38) {
            ctx->pc = 0x337D50u;
            goto label_337d50;
        }
    }
    ctx->pc = 0x337D40u;
label_337d40:
    // 0x337d40: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337d44: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x337D44u;
    {
        const bool branch_taken_0x337d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D44u;
        // 0x337d48: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d44) {
            ctx->pc = 0x337DB4u;
            goto label_337db4;
        }
    }
    ctx->pc = 0x337D4Cu;
    // 0x337d4c: 0x0  nop
    ctx->pc = 0x337d4cu;
    // NOP
label_337d50:
    // 0x337d50: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337d54: 0x24630a60  addiu       $v1, $v1, 0xA60
    ctx->pc = 0x337d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337d58: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x337d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x337d5c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x337d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x337d60: 0x50850015  beql        $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x337D60u;
    {
        const bool branch_taken_0x337d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x337d60) {
            ctx->pc = 0x337D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337D60u;
            // 0x337d64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337DB8u;
            goto label_337db8;
        }
    }
    ctx->pc = 0x337D68u;
    // 0x337d68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x337d6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x337d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x337d70: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x337D70u;
    {
        const bool branch_taken_0x337d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D70u;
        // 0x337d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d70) {
            ctx->pc = 0x337DB4u;
            goto label_337db4;
        }
    }
    ctx->pc = 0x337D78u;
    // 0x337d78: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x337D78u;
    SET_GPR_U32(ctx, 31, 0x337D80u);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x337D78u, 0x337D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D80u;
label_337d80:
    // 0x337d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x337d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x337d8c: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x337d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x337d90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337d94: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x337d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x337d98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x337D98u;
    {
        const bool branch_taken_0x337d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D98u;
        // 0x337d9c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d98) {
            ctx->pc = 0x337DB0u;
            goto label_337db0;
        }
    }
    ctx->pc = 0x337DA0u;
    // 0x337da0: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x337DA0u;
    SET_GPR_U32(ctx, 31, 0x337DA8u);
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x337DA0u, 0x337DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DA8u;
label_337da8:
    // 0x337da8: 0xc0cdd48  jal         func_337520
    ctx->pc = 0x337DA8u;
    SET_GPR_U32(ctx, 31, 0x337DB0u);
    ctx->pc = 0x337DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DA8u;
    // 0x337dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337520u, 0x337DA8u, 0x337DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DB0u;
label_337db0:
    // 0x337db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337db4:
    // 0x337db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337db8:
    // 0x337db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x337DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DC0u;
        // 0x337dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337DC8u;
}
