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

// Function: sub_00357CD0
// Address: 0x357cd0 - 0x357de0
void sub_00357CD0_0x357cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357CD0_0x357cd0");
#endif

    switch (ctx->pc) {
        case 0x357d18u: goto label_357d18;
        case 0x357d20u: goto label_357d20;
        case 0x357d30u: goto label_357d30;
        case 0x357d48u: goto label_357d48;
        case 0x357d88u: goto label_357d88;
        default: break;
    }

    ctx->pc = 0x357cd0u;

    // 0x357cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357cdc: 0x80d5f3a  j           func_357CE8
    ctx->pc = 0x357CDCu;
    ctx->pc = 0x357CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CDCu;
    // 0x357ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CE8u;
    goto label_357ce8;
    ctx->pc = 0x357CE4u;
    // 0x357ce4: 0x0  nop
    ctx->pc = 0x357ce4u;
    // NOP
label_357ce8:
    // 0x357ce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x357ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x357cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357cf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x357cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x357cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x357d00: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x357d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357d04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x357d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x357d08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x357d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x357d0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x357d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x357d10: 0xc0d60e8  jal         func_3583A0
    ctx->pc = 0x357D10u;
    SET_GPR_U32(ctx, 31, 0x357D18u);
    ctx->pc = 0x357D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D10u;
    // 0x357d14: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583A0u, 0x357D10u, 0x357D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D18u;
label_357d18:
    // 0x357d18: 0xc0d60ec  jal         func_3583B0
    ctx->pc = 0x357D18u;
    SET_GPR_U32(ctx, 31, 0x357D20u);
    ctx->pc = 0x357D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D18u;
    // 0x357d1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583B0u, 0x357D18u, 0x357D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D20u;
label_357d20:
    // 0x357d20: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x357d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d24: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x357d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x357d28: 0x2451e780  addiu       $s1, $v0, -0x1880
    ctx->pc = 0x357d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x357d2c: 0x0  nop
    ctx->pc = 0x357d2cu;
    // NOP
label_357d30:
    // 0x357d30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x357d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x357d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357D34u;
    {
        const bool branch_taken_0x357d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D34u;
        // 0x357d38: 0x324400ff  andi        $a0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d34) {
            ctx->pc = 0x357D50u;
            goto label_357d50;
        }
    }
    ctx->pc = 0x357D3Cu;
    // 0x357d3c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x357d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x357d40: 0xc0d5f7a  jal         func_357DE8
    ctx->pc = 0x357D40u;
    SET_GPR_U32(ctx, 31, 0x357D48u);
    ctx->pc = 0x357D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D40u;
    // 0x357d44: 0xa234000c  sb          $s4, 0xC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357DE8u, 0x357D40u, 0x357D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D48u;
label_357d48:
    // 0x357d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357D48u;
    {
        const bool branch_taken_0x357d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D48u;
        // 0x357d4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d48) {
            ctx->pc = 0x357D5Cu;
            goto label_357d5c;
        }
    }
    ctx->pc = 0x357D50u;
label_357d50:
    // 0x357d50: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x357d50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x357d54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x357d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x357d58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x357d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_357d5c:
    // 0x357d5c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x357d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
    // 0x357d60: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x357d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x357d64: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x357d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x357d68: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x357D68u;
    {
        const bool branch_taken_0x357d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D68u;
        // 0x357d6c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d68) {
            ctx->pc = 0x357D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357d30;
        }
    }
    ctx->pc = 0x357D70u;
    // 0x357d70: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x357d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x357d74: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x357d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d78: 0x2444eb80  addiu       $a0, $v0, -0x1480
    ctx->pc = 0x357d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x357d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x357d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357d80: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x357d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x357d84: 0x0  nop
    ctx->pc = 0x357d84u;
    // NOP
label_357d88:
    // 0x357d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x357d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357d8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D8Cu;
    {
        const bool branch_taken_0x357d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357d8c) {
            ctx->pc = 0x357D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357D8Cu;
            // 0x357d90: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357DA0u;
            goto label_357da0;
        }
    }
    ctx->pc = 0x357D94u;
    // 0x357d94: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x357d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x357d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x357D98u;
    {
        const bool branch_taken_0x357d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D98u;
        // 0x357d9c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d98) {
            ctx->pc = 0x357DA4u;
            goto label_357da4;
        }
    }
    ctx->pc = 0x357DA0u;
label_357da0:
    // 0x357da0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x357da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_357da4:
    // 0x357da4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x357da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x357da8: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x357da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x357dac: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x357DACu;
    {
        const bool branch_taken_0x357dac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x357DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DACu;
        // 0x357db0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357dac) {
            ctx->pc = 0x357D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357d88;
        }
    }
    ctx->pc = 0x357DB4u;
    // 0x357db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357dc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x357dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357dc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x357dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357dcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x357dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357dd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x357dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x357DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DD4u;
        // 0x357dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357DDCu;
    // 0x357ddc: 0x0  nop
    ctx->pc = 0x357ddcu;
    // NOP
    ctx->pc = 0x357de0u;
}
