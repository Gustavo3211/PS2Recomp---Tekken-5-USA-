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

// Function: sub_00362D78
// Address: 0x362d78 - 0x362e40
void sub_00362D78_0x362d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362D78_0x362d78");
#endif

    switch (ctx->pc) {
        case 0x362db8u: goto label_362db8;
        case 0x362e24u: goto label_362e24;
        default: break;
    }

    ctx->pc = 0x362d78u;

    // 0x362d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362d7c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362d84: 0x24505d10  addiu       $s0, $v0, 0x5D10
    ctx->pc = 0x362d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x362d88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x362d88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D5D14u));
    // 0x362d8c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x362d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x362d90: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x362d90u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x1D5D10u));
    // 0x362d94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x362d9c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x362d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x362da0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x362da0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x362da4: 0x146b0006  bne         $v1, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x362DA4u;
    {
        const bool branch_taken_0x362da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x362DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DA4u;
        // 0x362da8: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362da4) {
            ctx->pc = 0x362DC0u;
            goto label_362dc0;
        }
    }
    ctx->pc = 0x362DACu;
    // 0x362dac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362db0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362DB0u;
    SET_GPR_U32(ctx, 31, 0x362DB8u);
    ctx->pc = 0x362DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DB0u;
    // 0x362db4: 0x248476f8  addiu       $a0, $a0, 0x76F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362DB0u, 0x362DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DB8u;
label_362db8:
    // 0x362db8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x362DB8u;
    {
        const bool branch_taken_0x362db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DB8u;
        // 0x362dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362db8) {
            ctx->pc = 0x362E2Cu;
            goto label_362e2c;
        }
    }
    ctx->pc = 0x362DC0u;
label_362dc0:
    // 0x362dc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362dc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x362dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x362dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362DC8u;
    {
        const bool branch_taken_0x362dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DC8u;
        // 0x362dcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362dc8) {
            ctx->pc = 0x362DD8u;
            goto label_362dd8;
        }
    }
    ctx->pc = 0x362DD0u;
    // 0x362dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362dd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x362dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_362dd8:
    // 0x362dd8: 0x1431023  subu        $v0, $t2, $v1
    ctx->pc = 0x362dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x362ddc: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x362ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x362de0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x362de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x362de4: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x362de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x362de8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x362de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x362dec: 0x24215d28  addiu       $at, $at, 0x5D28
    ctx->pc = 0x362decu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23848));
    // 0x362df0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x362df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x362df4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x362df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x362df8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x362df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x362dfc: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x362dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x362e00: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x362e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x362e04: 0xa4480014  sh          $t0, 0x14($v0)
    ctx->pc = 0x362e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x362e08: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x362e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x362e0c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x362e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x362e10: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x362E10u;
    {
        const bool branch_taken_0x362e10 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x362E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E10u;
        // 0x362e14: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e10) {
            ctx->pc = 0x362E28u;
            goto label_362e28;
        }
    }
    ctx->pc = 0x362E18u;
    // 0x362e18: 0x94440010  lhu         $a0, 0x10($v0)
    ctx->pc = 0x362e18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x362e1c: 0xc0d7b86  jal         func_35EE18
    ctx->pc = 0x362E1Cu;
    SET_GPR_U32(ctx, 31, 0x362E24u);
    ctx->pc = 0x362E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E1Cu;
    // 0x362e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EE18u, 0x362E1Cu, 0x362E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E24u;
label_362e24:
    // 0x362e24: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x362e24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_362e28:
    // 0x362e28: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x362e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_362e2c:
    // 0x362e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362e30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e34: 0x3e00008  jr          $ra
    ctx->pc = 0x362E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E34u;
        // 0x362e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362E3Cu;
    // 0x362e3c: 0x0  nop
    ctx->pc = 0x362e3cu;
    // NOP
    ctx->pc = 0x362e40u;
}
