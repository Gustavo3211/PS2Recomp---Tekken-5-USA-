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

// Function: sub_00513D18
// Address: 0x513d18 - 0x514210
void sub_00513D18_0x513d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513D18_0x513d18");
#endif

    switch (ctx->pc) {
        case 0x513d64u: goto label_513d64;
        case 0x513e1cu: goto label_513e1c;
        case 0x513e38u: goto label_513e38;
        case 0x513eccu: goto label_513ecc;
        case 0x513ee4u: goto label_513ee4;
        case 0x513f04u: goto label_513f04;
        case 0x513f28u: goto label_513f28;
        case 0x513f4cu: goto label_513f4c;
        case 0x513f70u: goto label_513f70;
        case 0x513f98u: goto label_513f98;
        case 0x513fbcu: goto label_513fbc;
        case 0x513fe0u: goto label_513fe0;
        case 0x514018u: goto label_514018;
        default: break;
    }

    ctx->pc = 0x513d18u;

    // 0x513d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x513d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x513d1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x513d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513d20: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x513d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x513d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x513d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513d28: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x513d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x513d2c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x513d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513d30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x513d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x513d34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x513d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x513d38: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x513d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x513d3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x513d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x513d40: 0x12000126  beqz        $s0, . + 4 + (0x126 << 2)
    ctx->pc = 0x513D40u;
    {
        const bool branch_taken_0x513d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x513D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D40u;
        // 0x513d44: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d40) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513D48u;
    // 0x513d48: 0x2611012a  addiu       $s1, $s0, 0x12A
    ctx->pc = 0x513d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 298));
    // 0x513d4c: 0x2612010c  addiu       $s2, $s0, 0x10C
    ctx->pc = 0x513d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x513d50: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x513d50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x513d54: 0x26130110  addiu       $s3, $s0, 0x110
    ctx->pc = 0x513d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x513d58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513d5c: 0xc043088  jal         func_10C220
    ctx->pc = 0x513D5Cu;
    SET_GPR_U32(ctx, 31, 0x513D64u);
    ctx->pc = 0x513D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513D5Cu;
    // 0x513d60: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x513D5Cu, 0x513D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513D64u;
label_513d64:
    // 0x513d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x513d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513d68: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x513D68u;
    {
        const bool branch_taken_0x513d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x513D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D68u;
        // 0x513d6c: 0x26140120  addiu       $s4, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d68) {
            ctx->pc = 0x513D74u;
            goto label_513d74;
        }
    }
    ctx->pc = 0x513D70u;
    // 0x513d70: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x513d70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_513d74:
    // 0x513d74: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x513d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x513d78: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x513d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x513d7c: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x513D7Cu;
    {
        const bool branch_taken_0x513d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D7Cu;
        // 0x513d80: 0x28620047  slti        $v0, $v1, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d7c) {
            ctx->pc = 0x513F38u;
            goto label_513f38;
        }
    }
    ctx->pc = 0x513D84u;
    // 0x513d84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x513D84u;
    {
        const bool branch_taken_0x513d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D84u;
        // 0x513d88: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d84) {
            ctx->pc = 0x513DC0u;
            goto label_513dc0;
        }
    }
    ctx->pc = 0x513D8Cu;
    // 0x513d8c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x513d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x513d90: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x513D90u;
    {
        const bool branch_taken_0x513d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D90u;
        // 0x513d94: 0x28620029  slti        $v0, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d90) {
            ctx->pc = 0x513EB8u;
            goto label_513eb8;
        }
    }
    ctx->pc = 0x513D98u;
    // 0x513d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x513D98u;
    {
        const bool branch_taken_0x513d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D98u;
        // 0x513d9c: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d98) {
            ctx->pc = 0x513DB0u;
            goto label_513db0;
        }
    }
    ctx->pc = 0x513DA0u;
    // 0x513da0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x513DA0u;
    {
        const bool branch_taken_0x513da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x513DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513DA0u;
        // 0x513da4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513da0) {
            ctx->pc = 0x513DD0u;
            goto label_513dd0;
        }
    }
    ctx->pc = 0x513DA8u;
    // 0x513da8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x513DA8u;
    {
        const bool branch_taken_0x513da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513da8) {
            ctx->pc = 0x513FF8u;
            goto label_513ff8;
        }
    }
    ctx->pc = 0x513DB0u;
label_513db0:
    // 0x513db0: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x513DB0u;
    {
        const bool branch_taken_0x513db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513DB0u;
        // 0x513db4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513db0) {
            ctx->pc = 0x513EF8u;
            goto label_513ef8;
        }
    }
    ctx->pc = 0x513DB8u;
    // 0x513db8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x513DB8u;
    {
        const bool branch_taken_0x513db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513db8) {
            ctx->pc = 0x513FF8u;
            goto label_513ff8;
        }
    }
    ctx->pc = 0x513DC0u;
label_513dc0:
    // 0x513dc0: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x513DC0u;
    {
        const bool branch_taken_0x513dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513DC0u;
        // 0x513dc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513dc0) {
            ctx->pc = 0x513FB0u;
            goto label_513fb0;
        }
    }
    ctx->pc = 0x513DC8u;
    // 0x513dc8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x513DC8u;
    {
        const bool branch_taken_0x513dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513dc8) {
            ctx->pc = 0x513FF8u;
            goto label_513ff8;
        }
    }
    ctx->pc = 0x513DD0u;
label_513dd0:
    // 0x513dd0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x513dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x513dd4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x513dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x513dd8: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x513dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x513ddc: 0xa202012f  sb          $v0, 0x12F($s0)
    ctx->pc = 0x513ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 303), (uint8_t)GPR_U32(ctx, 2));
    // 0x513de0: 0xa6000128  sh          $zero, 0x128($s0)
    ctx->pc = 0x513de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x513de4: 0xa202012c  sb          $v0, 0x12C($s0)
    ctx->pc = 0x513de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 300), (uint8_t)GPR_U32(ctx, 2));
    // 0x513de8: 0xa202012d  sb          $v0, 0x12D($s0)
    ctx->pc = 0x513de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 301), (uint8_t)GPR_U32(ctx, 2));
    // 0x513dec: 0xa202012e  sb          $v0, 0x12E($s0)
    ctx->pc = 0x513decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 302), (uint8_t)GPR_U32(ctx, 2));
    // 0x513df0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x513DF0u;
    {
        const bool branch_taken_0x513df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x513DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513DF0u;
        // 0x513df4: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513df0) {
            ctx->pc = 0x513E04u;
            goto label_513e04;
        }
    }
    ctx->pc = 0x513DF8u;
    // 0x513df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x513df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x513dfc: 0x148200f7  bne         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x513DFCu;
    {
        const bool branch_taken_0x513dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x513E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513DFCu;
        // 0x513e00: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513dfc) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513E04u;
label_513e04:
    // 0x513e04: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513e08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x513e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513e0c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x513e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x513e10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x513e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513e14: 0xc043192  jal         func_10C648
    ctx->pc = 0x513E14u;
    SET_GPR_U32(ctx, 31, 0x513E1Cu);
    ctx->pc = 0x513E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513E14u;
    // 0x513e18: 0x26110118  addiu       $s1, $s0, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x513E14u, 0x513E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513E1Cu;
label_513e1c:
    // 0x513e1c: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x513E1Cu;
    {
        const bool branch_taken_0x513e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E1Cu;
        // 0x513e20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e1c) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x513E24u;
    // 0x513e24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x513e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x513e2c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x513e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x513e30: 0xc043192  jal         func_10C648
    ctx->pc = 0x513E30u;
    SET_GPR_U32(ctx, 31, 0x513E38u);
    ctx->pc = 0x513E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513E30u;
    // 0x513e34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x513E30u, 0x513E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513E38u;
label_513e38:
    // 0x513e38: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x513E38u;
    {
        const bool branch_taken_0x513e38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x513E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E38u;
        // 0x513e3c: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e38) {
            ctx->pc = 0x513E44u;
            goto label_513e44;
        }
    }
    ctx->pc = 0x513E40u;
    // 0x513e40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x513e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_513e44:
    // 0x513e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x513e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x513e48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x513e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x513e4c: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x513E4Cu;
    {
        const bool branch_taken_0x513e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E4Cu;
        // 0x513e50: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e4c) {
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513E54u;
    // 0x513e54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x513E54u;
    {
        const bool branch_taken_0x513e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E54u;
        // 0x513e58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e54) {
            ctx->pc = 0x513E78u;
            goto label_513e78;
        }
    }
    ctx->pc = 0x513E5Cu;
    // 0x513e5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x513e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x513e60: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x513E60u;
    {
        const bool branch_taken_0x513e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E60u;
        // 0x513e64: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e60) {
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513E68u;
    // 0x513e68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x513E68u;
    {
        const bool branch_taken_0x513e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E68u;
        // 0x513e6c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e68) {
            ctx->pc = 0x513EA0u;
            goto label_513ea0;
        }
    }
    ctx->pc = 0x513E70u;
    // 0x513e70: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x513E70u;
    {
        const bool branch_taken_0x513e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E70u;
        // 0x513e74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e70) {
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513E78u;
label_513e78:
    // 0x513e78: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x513E78u;
    {
        const bool branch_taken_0x513e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x513E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E78u;
        // 0x513e7c: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e78) {
            ctx->pc = 0x513EA8u;
            goto label_513ea8;
        }
    }
    ctx->pc = 0x513E80u;
    // 0x513e80: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x513E80u;
    {
        const bool branch_taken_0x513e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E80u;
        // 0x513e84: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e80) {
            ctx->pc = 0x513FECu;
            goto label_513fec;
        }
    }
    ctx->pc = 0x513E88u;
    // 0x513e88: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x513e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x513e8c: 0x54620056  bnel        $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x513E8Cu;
    {
        const bool branch_taken_0x513e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x513e8c) {
            ctx->pc = 0x513E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513E8Cu;
            // 0x513e90: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513E94u;
    // 0x513e94: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x513E94u;
    {
        const bool branch_taken_0x513e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513E94u;
        // 0x513e98: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513e94) {
            ctx->pc = 0x513FECu;
            goto label_513fec;
        }
    }
    ctx->pc = 0x513E9Cu;
    // 0x513e9c: 0x0  nop
    ctx->pc = 0x513e9cu;
    // NOP
label_513ea0:
    // 0x513ea0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x513EA0u;
    {
        const bool branch_taken_0x513ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513EA0u;
        // 0x513ea4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ea0) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x513EA8u;
label_513ea8:
    // 0x513ea8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x513ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x513eac: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x513EACu;
    {
        const bool branch_taken_0x513eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513EACu;
        // 0x513eb0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513eac) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x513EB4u;
    // 0x513eb4: 0x0  nop
    ctx->pc = 0x513eb4u;
    // NOP
label_513eb8:
    // 0x513eb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513ebc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x513ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x513ec0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x513ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x513ec4: 0xc043192  jal         func_10C648
    ctx->pc = 0x513EC4u;
    SET_GPR_U32(ctx, 31, 0x513ECCu);
    ctx->pc = 0x513EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513EC4u;
    // 0x513ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x513EC4u, 0x513ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513ECCu;
label_513ecc:
    // 0x513ecc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x513ECCu;
    {
        const bool branch_taken_0x513ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513ECCu;
        // 0x513ed0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ecc) {
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513ED4u;
    // 0x513ed4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513ed8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x513ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x513edc: 0xc0431e0  jal         func_10C780
    ctx->pc = 0x513EDCu;
    SET_GPR_U32(ctx, 31, 0x513EE4u);
    ctx->pc = 0x513EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513EDCu;
    // 0x513ee0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C780u, 0x513EDCu, 0x513EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513EE4u;
label_513ee4:
    // 0x513ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513ee8: 0x544300bc  bnel        $v0, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x513EE8u;
    {
        const bool branch_taken_0x513ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x513ee8) {
            ctx->pc = 0x513EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513EE8u;
            // 0x513eec: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513EF0u;
    // 0x513ef0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x513EF0u;
    {
        const bool branch_taken_0x513ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513EF0u;
        // 0x513ef4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ef0) {
            ctx->pc = 0x513FA4u;
            goto label_513fa4;
        }
    }
    ctx->pc = 0x513EF8u;
label_513ef8:
    // 0x513ef8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513efc: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x513EFCu;
    SET_GPR_U32(ctx, 31, 0x513F04u);
    ctx->pc = 0x513F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513EFCu;
    // 0x513f00: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x513EFCu, 0x513F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513F04u;
label_513f04:
    // 0x513f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513f08: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x513F08u;
    {
        const bool branch_taken_0x513f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x513f08) {
            ctx->pc = 0x513F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513F08u;
            // 0x513f0c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513F20u;
            goto label_513f20;
        }
    }
    ctx->pc = 0x513F10u;
    // 0x513f10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x513f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x513f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x513f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x513f18: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x513f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x513f1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_513f20:
    // 0x513f20: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x513F20u;
    SET_GPR_U32(ctx, 31, 0x513F28u);
    ctx->pc = 0x513F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513F20u;
    // 0x513f24: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x513F20u, 0x513F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513F28u;
label_513f28:
    // 0x513f28: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x513F28u;
    {
        const bool branch_taken_0x513f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513F28u;
        // 0x513f2c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f28) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513F30u;
    // 0x513f30: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x513F30u;
    {
        const bool branch_taken_0x513f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513F30u;
        // 0x513f34: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f30) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513F38u;
label_513f38:
    // 0x513f38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513f3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x513f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513f40: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x513f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x513f44: 0xc043106  jal         func_10C418
    ctx->pc = 0x513F44u;
    SET_GPR_U32(ctx, 31, 0x513F4Cu);
    ctx->pc = 0x513F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513F44u;
    // 0x513f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C418u, 0x513F44u, 0x513F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513F4Cu;
label_513f4c:
    // 0x513f4c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x513F4Cu;
    {
        const bool branch_taken_0x513f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513F4Cu;
        // 0x513f50: 0x26060106  addiu       $a2, $s0, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f4c) {
            ctx->pc = 0x513FE8u;
            goto label_513fe8;
        }
    }
    ctx->pc = 0x513F54u;
    // 0x513f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x513f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513f58: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x513f58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x513f5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x513f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x513f60: 0xa2020107  sb          $v0, 0x107($s0)
    ctx->pc = 0x513f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 263), (uint8_t)GPR_U32(ctx, 2));
    // 0x513f64: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x513f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x513f68: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x513f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513f6c: 0x0  nop
    ctx->pc = 0x513f6cu;
    // NOP
label_513f70:
    // 0x513f70: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x513f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x513f74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x513f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x513f78: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x513f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x513f7c: 0x0  nop
    ctx->pc = 0x513f7cu;
    // NOP
    // 0x513f80: 0x0  nop
    ctx->pc = 0x513f80u;
    // NOP
    // 0x513f84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x513F84u;
    {
        const bool branch_taken_0x513f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513F84u;
        // 0x513f88: 0xa0670100  sb          $a3, 0x100($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f84) {
            ctx->pc = 0x513F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_513f70;
        }
    }
    ctx->pc = 0x513F8Cu;
    // 0x513f8c: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x513f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x513f90: 0xc043240  jal         func_10C900
    ctx->pc = 0x513F90u;
    SET_GPR_U32(ctx, 31, 0x513F98u);
    ctx->pc = 0x513F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513F90u;
    // 0x513f94: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C900u, 0x513F90u, 0x513F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513F98u;
label_513f98:
    // 0x513f98: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x513F98u;
    {
        const bool branch_taken_0x513f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513F98u;
        // 0x513f9c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f98) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513FA0u;
    // 0x513fa0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x513fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_513fa4:
    // 0x513fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x513fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x513fa8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x513FA8u;
    {
        const bool branch_taken_0x513fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513FA8u;
        // 0x513fac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513fa8) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x513FB0u;
label_513fb0:
    // 0x513fb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x513fb4: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x513FB4u;
    SET_GPR_U32(ctx, 31, 0x513FBCu);
    ctx->pc = 0x513FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513FB4u;
    // 0x513fb8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x513FB4u, 0x513FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513FBCu;
label_513fbc:
    // 0x513fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513fc0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x513FC0u;
    {
        const bool branch_taken_0x513fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x513fc0) {
            ctx->pc = 0x513FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513FC0u;
            // 0x513fc4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513FD8u;
            goto label_513fd8;
        }
    }
    ctx->pc = 0x513FC8u;
    // 0x513fc8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x513fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x513fcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x513fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x513fd0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x513fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x513fd4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x513fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_513fd8:
    // 0x513fd8: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x513FD8u;
    SET_GPR_U32(ctx, 31, 0x513FE0u);
    ctx->pc = 0x513FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513FD8u;
    // 0x513fdc: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x513FD8u, 0x513FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513FE0u;
label_513fe0:
    // 0x513fe0: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x513FE0u;
    {
        const bool branch_taken_0x513fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513FE0u;
        // 0x513fe4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513fe0) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x513FE8u;
label_513fe8:
    // 0x513fe8: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x513fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_513fec:
    // 0x513fec: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x513FECu;
    {
        const bool branch_taken_0x513fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513FECu;
        // 0x513ff0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513fec) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x513FF4u;
    // 0x513ff4: 0x0  nop
    ctx->pc = 0x513ff4u;
    // NOP
label_513ff8:
    // 0x513ff8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x513FF8u;
    {
        const bool branch_taken_0x513ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x513FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513FF8u;
        // 0x513ffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ff8) {
            ctx->pc = 0x514008u;
            goto label_514008;
        }
    }
    ctx->pc = 0x514000u;
    // 0x514000: 0x14820076  bne         $a0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x514000u;
    {
        const bool branch_taken_0x514000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x514004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514000u;
        // 0x514004: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514000) {
            ctx->pc = 0x5141DCu;
            goto label_5141dc;
        }
    }
    ctx->pc = 0x514008u;
label_514008:
    // 0x514008: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x514008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x51400c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x51400cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x514010: 0xc04306a  jal         func_10C1A8
    ctx->pc = 0x514010u;
    SET_GPR_U32(ctx, 31, 0x514018u);
    ctx->pc = 0x514014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x514010u;
    // 0x514014: 0x8e050110  lw          $a1, 0x110($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1A8u, 0x514010u, 0x514018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x514018u;
label_514018:
    // 0x514018: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x514018u;
    {
        const bool branch_taken_0x514018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514018u;
        // 0x51401c: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514018) {
            ctx->pc = 0x514048u;
            goto label_514048;
        }
    }
    ctx->pc = 0x514020u;
    // 0x514020: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x514020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x514024: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x514024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x514028: 0xa202012f  sb          $v0, 0x12F($s0)
    ctx->pc = 0x514028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 303), (uint8_t)GPR_U32(ctx, 2));
    // 0x51402c: 0xa600012a  sh          $zero, 0x12A($s0)
    ctx->pc = 0x51402cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 0));
    // 0x514030: 0xa6000128  sh          $zero, 0x128($s0)
    ctx->pc = 0x514030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x514034: 0xa202012c  sb          $v0, 0x12C($s0)
    ctx->pc = 0x514034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 300), (uint8_t)GPR_U32(ctx, 2));
    // 0x514038: 0xa202012d  sb          $v0, 0x12D($s0)
    ctx->pc = 0x514038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 301), (uint8_t)GPR_U32(ctx, 2));
    // 0x51403c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x51403Cu;
    {
        const bool branch_taken_0x51403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51403Cu;
        // 0x514040: 0xa202012e  sb          $v0, 0x12E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 302), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51403c) {
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x514044u;
    // 0x514044: 0x0  nop
    ctx->pc = 0x514044u;
    // NOP
label_514048:
    // 0x514048: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x514048u;
    {
        const bool branch_taken_0x514048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514048u;
        // 0x51404c: 0x26090124  addiu       $t1, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514048) {
            ctx->pc = 0x5141C8u;
            goto label_5141c8;
        }
    }
    ctx->pc = 0x514050u;
    // 0x514050: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x514050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x514054: 0x26070128  addiu       $a3, $s0, 0x128
    ctx->pc = 0x514054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x514058: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x514058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x51405c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x51405cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x514060: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x514060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x514064: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x514064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x514068: 0x832027  nor         $a0, $a0, $v1
    ctx->pc = 0x514068u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x51406c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x51406cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x514070: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x514070u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x514074: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x514074u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x514078: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x514078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x51407c: 0xa602012a  sh          $v0, 0x12A($s0)
    ctx->pc = 0x51407cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 2));
    // 0x514080: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x514080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x514084: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x514084u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x514088: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x514088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x51408c: 0xae050114  sw          $a1, 0x114($s0)
    ctx->pc = 0x51408cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
    // 0x514090: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x514090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x514094: 0x481000b  bgez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x514094u;
    {
        const bool branch_taken_0x514094 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x514098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514094u;
        // 0x514098: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514094) {
            ctx->pc = 0x5140C4u;
            goto label_5140c4;
        }
    }
    ctx->pc = 0x51409Cu;
    // 0x51409c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x51409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x5140a0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x5140a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x5140a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x5140A4u;
    {
        const bool branch_taken_0x5140a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5140A4u;
        // 0x5140a8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5140a4) {
            ctx->pc = 0x5140C0u;
            goto label_5140c0;
        }
    }
    ctx->pc = 0x5140ACu;
    // 0x5140ac: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x5140acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5140b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x5140b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5140b4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5140B4u;
    {
        const bool branch_taken_0x5140b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5140b4) {
            ctx->pc = 0x5140B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5140B4u;
            // 0x5140b8: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5140C4u;
            goto label_5140c4;
        }
    }
    ctx->pc = 0x5140BCu;
    // 0x5140bc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x5140bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_5140c0:
    // 0x5140c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x5140c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_5140c4:
    // 0x5140c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x5140c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5140c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x5140c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5140cc: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x5140CCu;
    {
        const bool branch_taken_0x5140cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5140CCu;
        // 0x5140d0: 0x93a20004  lbu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5140cc) {
            ctx->pc = 0x5141A8u;
            goto label_5141a8;
        }
    }
    ctx->pc = 0x5140D4u;
    // 0x5140d4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x5140d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5140d8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x5140d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x5140dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x5140DCu;
    {
        const bool branch_taken_0x5140dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5140DCu;
        // 0x5140e0: 0x3c060059  lui         $a2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5140dc) {
            ctx->pc = 0x514108u;
            goto label_514108;
        }
    }
    ctx->pc = 0x5140E4u;
    // 0x5140e4: 0x24c4aa30  addiu       $a0, $a2, -0x55D0
    ctx->pc = 0x5140e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945328));
    // 0x5140e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x5140e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5140ec: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x5140ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x5140f0: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x5140f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x5140f4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x5140F4u;
    {
        const bool branch_taken_0x5140f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5140F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5140F4u;
        // 0x5140f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5140f4) {
            ctx->pc = 0x514134u;
            goto label_514134;
        }
    }
    ctx->pc = 0x5140FCu;
    // 0x5140fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x5140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x514100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x514100u;
    {
        const bool branch_taken_0x514100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514100u;
        // 0x514104: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514100) {
            ctx->pc = 0x514134u;
            goto label_514134;
        }
    }
    ctx->pc = 0x514108u;
label_514108:
    // 0x514108: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x514108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x51410c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x51410Cu;
    {
        const bool branch_taken_0x51410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51410Cu;
        // 0x514110: 0x24c3aa30  addiu       $v1, $a2, -0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51410c) {
            ctx->pc = 0x514130u;
            goto label_514130;
        }
    }
    ctx->pc = 0x514114u;
    // 0x514114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x514114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x514118: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x514118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x51411c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x51411Cu;
    {
        const bool branch_taken_0x51411c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x514120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51411Cu;
        // 0x514120: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51411c) {
            ctx->pc = 0x514134u;
            goto label_514134;
        }
    }
    ctx->pc = 0x514124u;
    // 0x514124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x514124u;
    {
        const bool branch_taken_0x514124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514124u;
        // 0x514128: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514124) {
            ctx->pc = 0x514134u;
            goto label_514134;
        }
    }
    ctx->pc = 0x51412Cu;
    // 0x51412c: 0x0  nop
    ctx->pc = 0x51412cu;
    // NOP
label_514130:
    // 0x514130: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x514130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_514134:
    // 0x514134: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x514134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x514138: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x514138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x51413c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x51413Cu;
    {
        const bool branch_taken_0x51413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51413Cu;
        // 0x514140: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51413c) {
            ctx->pc = 0x514168u;
            goto label_514168;
        }
    }
    ctx->pc = 0x514144u;
    // 0x514144: 0x24a4aa34  addiu       $a0, $a1, -0x55CC
    ctx->pc = 0x514144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945332));
    // 0x514148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x514148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x51414c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x51414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x514150: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x514150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x514154: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x514154u;
    {
        const bool branch_taken_0x514154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x514158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514154u;
        // 0x514158: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514154) {
            ctx->pc = 0x514194u;
            goto label_514194;
        }
    }
    ctx->pc = 0x51415Cu;
    // 0x51415c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x51415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x514160: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x514160u;
    {
        const bool branch_taken_0x514160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514160u;
        // 0x514164: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514160) {
            ctx->pc = 0x514194u;
            goto label_514194;
        }
    }
    ctx->pc = 0x514168u;
label_514168:
    // 0x514168: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x514168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x51416c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x51416Cu;
    {
        const bool branch_taken_0x51416c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51416Cu;
        // 0x514170: 0x24a3aa34  addiu       $v1, $a1, -0x55CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51416c) {
            ctx->pc = 0x514190u;
            goto label_514190;
        }
    }
    ctx->pc = 0x514174u;
    // 0x514174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x514174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x514178: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x514178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x51417c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x51417Cu;
    {
        const bool branch_taken_0x51417c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x514180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51417Cu;
        // 0x514180: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51417c) {
            ctx->pc = 0x514194u;
            goto label_514194;
        }
    }
    ctx->pc = 0x514184u;
    // 0x514184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x514184u;
    {
        const bool branch_taken_0x514184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514184u;
        // 0x514188: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514184) {
            ctx->pc = 0x514194u;
            goto label_514194;
        }
    }
    ctx->pc = 0x51418Cu;
    // 0x51418c: 0x0  nop
    ctx->pc = 0x51418cu;
    // NOP
label_514190:
    // 0x514190: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x514190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_514194:
    // 0x514194: 0x90c2aa30  lbu         $v0, -0x55D0($a2)
    ctx->pc = 0x514194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294945328)));
    // 0x514198: 0xa202012e  sb          $v0, 0x12E($s0)
    ctx->pc = 0x514198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 302), (uint8_t)GPR_U32(ctx, 2));
    // 0x51419c: 0x90a3aa34  lbu         $v1, -0x55CC($a1)
    ctx->pc = 0x51419cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294945332)));
    // 0x5141a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5141A0u;
    {
        const bool branch_taken_0x5141a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5141A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5141A0u;
        // 0x5141a4: 0xa203012f  sb          $v1, 0x12F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 303), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5141a0) {
            ctx->pc = 0x5141C4u;
            goto label_5141c4;
        }
    }
    ctx->pc = 0x5141A8u;
label_5141a8:
    // 0x5141a8: 0x93a30005  lbu         $v1, 0x5($sp)
    ctx->pc = 0x5141a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x5141ac: 0x93a40006  lbu         $a0, 0x6($sp)
    ctx->pc = 0x5141acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x5141b0: 0x93a50007  lbu         $a1, 0x7($sp)
    ctx->pc = 0x5141b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x5141b4: 0xa202012c  sb          $v0, 0x12C($s0)
    ctx->pc = 0x5141b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 300), (uint8_t)GPR_U32(ctx, 2));
    // 0x5141b8: 0xa203012d  sb          $v1, 0x12D($s0)
    ctx->pc = 0x5141b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 301), (uint8_t)GPR_U32(ctx, 3));
    // 0x5141bc: 0xa204012e  sb          $a0, 0x12E($s0)
    ctx->pc = 0x5141bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 302), (uint8_t)GPR_U32(ctx, 4));
    // 0x5141c0: 0xa205012f  sb          $a1, 0x12F($s0)
    ctx->pc = 0x5141c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 303), (uint8_t)GPR_U32(ctx, 5));
label_5141c4:
    // 0x5141c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5141c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5141c8:
    // 0x5141c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x5141c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5141cc: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x5141ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x5141d0: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x5141D0u;
    {
        const bool branch_taken_0x5141d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5141d0) {
            ctx->pc = 0x5141D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5141D0u;
            // 0x5141d4: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5141D8u;
            goto label_5141d8;
        }
    }
    ctx->pc = 0x5141D8u;
label_5141d8:
    // 0x5141d8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x5141d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5141dc:
    // 0x5141dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x5141dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5141e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x5141e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5141e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x5141e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5141e8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x5141e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5141ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x5141ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5141f0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x5141f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5141f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5141f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5141f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5141F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5141FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5141F8u;
        // 0x5141fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5141F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514200u;
    // 0x514200: 0x3e00008  jr          $ra
    ctx->pc = 0x514200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514208u;
    // 0x514208: 0x3e00008  jr          $ra
    ctx->pc = 0x514208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x514208u;
        // 0x51420c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x514208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x514210u;
}
