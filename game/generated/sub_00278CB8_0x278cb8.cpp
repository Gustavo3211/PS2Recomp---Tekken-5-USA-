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

// Function: sub_00278CB8
// Address: 0x278cb8 - 0x279a40
void sub_00278CB8_0x278cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278CB8_0x278cb8");
#endif

    switch (ctx->pc) {
        case 0x279038u: goto label_279038;
        case 0x279080u: goto label_279080;
        case 0x279180u: goto label_279180;
        case 0x2791c8u: goto label_2791c8;
        case 0x279268u: goto label_279268;
        case 0x279318u: goto label_279318;
        case 0x2793b8u: goto label_2793b8;
        case 0x279468u: goto label_279468;
        case 0x2797a8u: goto label_2797a8;
        default: break;
    }

    ctx->pc = 0x278cb8u;

    // 0x278cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278cbc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x278cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278cc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278ccc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x278cd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x278cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x278cd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x278cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x278cd8: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x278cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x278cdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x278cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x278ce0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x278ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x278ce4: 0x1460034e  bnez        $v1, . + 4 + (0x34E << 2)
    ctx->pc = 0x278CE4u;
    {
        const bool branch_taken_0x278ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CE4u;
        // 0x278ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ce4) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278CECu;
    // 0x278cec: 0x8d0306b0  lw          $v1, 0x6B0($t0)
    ctx->pc = 0x278cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1712)));
    // 0x278cf0: 0x94ac0000  lhu         $t4, 0x0($a1)
    ctx->pc = 0x278cf0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278cf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x278cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cf8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278CF8u;
    {
        const bool branch_taken_0x278cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CF8u;
        // 0x278cfc: 0x94ab0002  lhu         $t3, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cf8) {
            ctx->pc = 0x278D14u;
            goto label_278d14;
        }
    }
    ctx->pc = 0x278D00u;
    // 0x278d00: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x278d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x278d04: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x278d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x278d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278d0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x278d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x278d10: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x278d10u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_278d14:
    // 0x278d14: 0xc1400  sll         $v0, $t4, 16
    ctx->pc = 0x278d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x278d18: 0x4400089  bltz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x278D18u;
    {
        const bool branch_taken_0x278d18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x278D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D18u;
        // 0x278d1c: 0x318387ff  andi        $v1, $t4, 0x87FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)34815);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d18) {
            ctx->pc = 0x278F40u;
            goto label_278f40;
        }
    }
    ctx->pc = 0x278D20u;
    // 0x278d20: 0x950406ae  lhu         $a0, 0x6AE($t0)
    ctx->pc = 0x278d20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x278d24: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x278D24u;
    {
        const bool branch_taken_0x278d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D24u;
        // 0x278d28: 0x950d06ac  lhu         $t5, 0x6AC($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d24) {
            ctx->pc = 0x278D54u;
            goto label_278d54;
        }
    }
    ctx->pc = 0x278D2Cu;
    // 0x278d2c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x278d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x278d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278D30u;
    {
        const bool branch_taken_0x278d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D30u;
        // 0x278d34: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d30) {
            ctx->pc = 0x278D40u;
            goto label_278d40;
        }
    }
    ctx->pc = 0x278D38u;
    // 0x278d38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278D38u;
    {
        const bool branch_taken_0x278d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D38u;
        // 0x278d3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d38) {
            ctx->pc = 0x278D58u;
            goto label_278d58;
        }
    }
    ctx->pc = 0x278D40u;
label_278d40:
    // 0x278d40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278D40u;
    {
        const bool branch_taken_0x278d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D40u;
        // 0x278d44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d40) {
            ctx->pc = 0x278D58u;
            goto label_278d58;
        }
    }
    ctx->pc = 0x278D48u;
    // 0x278d48: 0x6d1024  and         $v0, $v1, $t5
    ctx->pc = 0x278d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x278d4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278D4Cu;
    {
        const bool branch_taken_0x278d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D4Cu;
        // 0x278d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d4c) {
            ctx->pc = 0x278D58u;
            goto label_278d58;
        }
    }
    ctx->pc = 0x278D54u;
label_278d54:
    // 0x278d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278d58:
    // 0x278d58: 0x10800331  beqz        $a0, . + 4 + (0x331 << 2)
    ctx->pc = 0x278D58u;
    {
        const bool branch_taken_0x278d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D58u;
        // 0x278d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d58) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278D60u;
    // 0x278d60: 0x1660032f  bnez        $s3, . + 4 + (0x32F << 2)
    ctx->pc = 0x278D60u;
    {
        const bool branch_taken_0x278d60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x278D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D60u;
        // 0x278d64: 0x2d620001  sltiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d60) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278D68u;
    // 0x278d68: 0x950a06aa  lhu         $t2, 0x6AA($t0)
    ctx->pc = 0x278d68u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
    // 0x278d6c: 0x24024004  addiu       $v0, $zero, 0x4004
    ctx->pc = 0x278d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
    // 0x278d70: 0x11420070  beq         $t2, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x278D70u;
    {
        const bool branch_taken_0x278d70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x278D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D70u;
        // 0x278d74: 0x2d650001  sltiu       $a1, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d70) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278D78u;
    // 0x278d78: 0x314200f0  andi        $v0, $t2, 0xF0
    ctx->pc = 0x278d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
    // 0x278d7c: 0x24034001  addiu       $v1, $zero, 0x4001
    ctx->pc = 0x278d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x278d80: 0x1163006c  beq         $t3, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x278D80u;
    {
        const bool branch_taken_0x278d80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x278D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D80u;
        // 0x278d84: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d80) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278D88u;
    // 0x278d88: 0x29624002  slti        $v0, $t3, 0x4002
    ctx->pc = 0x278d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16386) ? 1 : 0);
    // 0x278d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x278D8Cu;
    {
        const bool branch_taken_0x278d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D8Cu;
        // 0x278d90: 0x24024002  addiu       $v0, $zero, 0x4002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d8c) {
            ctx->pc = 0x278DB8u;
            goto label_278db8;
        }
    }
    ctx->pc = 0x278D94u;
    // 0x278d94: 0x11600067  beqz        $t3, . + 4 + (0x67 << 2)
    ctx->pc = 0x278D94u;
    {
        const bool branch_taken_0x278d94 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D94u;
        // 0x278d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d94) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278D9Cu;
    // 0x278d9c: 0x3142000f  andi        $v0, $t2, 0xF
    ctx->pc = 0x278d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x278da0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x278da4: 0x11630063  beq         $t3, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x278DA4u;
    {
        const bool branch_taken_0x278da4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x278DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA4u;
        // 0x278da8: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da4) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278DACu;
    // 0x278dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278DACu;
    {
        const bool branch_taken_0x278dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DACu;
        // 0x278db0: 0x31827800  andi        $v0, $t4, 0x7800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)30720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dac) {
            ctx->pc = 0x278DD0u;
            goto label_278dd0;
        }
    }
    ctx->pc = 0x278DB4u;
    // 0x278db4: 0x0  nop
    ctx->pc = 0x278db4u;
    // NOP
label_278db8:
    // 0x278db8: 0x1162005e  beq         $t3, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x278DB8u;
    {
        const bool branch_taken_0x278db8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x278DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DB8u;
        // 0x278dbc: 0x3145000f  andi        $a1, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278db8) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278DC0u;
    // 0x278dc0: 0x24024003  addiu       $v0, $zero, 0x4003
    ctx->pc = 0x278dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16387));
    // 0x278dc4: 0x1162005b  beq         $t3, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x278DC4u;
    {
        const bool branch_taken_0x278dc4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x278DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DC4u;
        // 0x278dc8: 0x314500f0  andi        $a1, $t2, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dc4) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278DCCu;
    // 0x278dcc: 0x31827800  andi        $v0, $t4, 0x7800
    ctx->pc = 0x278dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)30720);
label_278dd0:
    // 0x278dd0: 0x3169000f  andi        $t1, $t3, 0xF
    ctx->pc = 0x278dd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x278dd4: 0x316800f0  andi        $t0, $t3, 0xF0
    ctx->pc = 0x278dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)240);
    // 0x278dd8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x278DD8u;
    {
        const bool branch_taken_0x278dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DD8u;
        // 0x278ddc: 0x316e0f00  andi        $t6, $t3, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dd8) {
            ctx->pc = 0x278E60u;
            goto label_278e60;
        }
    }
    ctx->pc = 0x278DE0u;
    // 0x278de0: 0x31a20800  andi        $v0, $t5, 0x800
    ctx->pc = 0x278de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2048);
    // 0x278de4: 0x35441000  ori         $a0, $t2, 0x1000
    ctx->pc = 0x278de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4096);
    // 0x278de8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278dec: 0x31a31000  andi        $v1, $t5, 0x1000
    ctx->pc = 0x278decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4096);
    // 0x278df0: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x278df0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x278df4: 0x31842000  andi        $a0, $t4, 0x2000
    ctx->pc = 0x278df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8192);
    // 0x278df8: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278dfc: 0x35422000  ori         $v0, $t2, 0x2000
    ctx->pc = 0x278dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8192);
    // 0x278e00: 0x43500b  movn        $t2, $v0, $v1
    ctx->pc = 0x278e00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x278e04: 0x31a22000  andi        $v0, $t5, 0x2000
    ctx->pc = 0x278e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8192);
    // 0x278e08: 0x31850800  andi        $a1, $t4, 0x800
    ctx->pc = 0x278e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2048);
    // 0x278e0c: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x278e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x278e10: 0x38a50000  xori        $a1, $a1, 0x0
    ctx->pc = 0x278e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
    // 0x278e14: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278e18: 0x35231000  ori         $v1, $t1, 0x1000
    ctx->pc = 0x278e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    // 0x278e1c: 0x35064000  ori         $a2, $t0, 0x4000
    ctx->pc = 0x278e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x278e20: 0x35474000  ori         $a3, $t2, 0x4000
    ctx->pc = 0x278e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x278e24: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x278e24u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x278e28: 0xc4400b  movn        $t0, $a2, $a0
    ctx->pc = 0x278e28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x278e2c: 0x31a44000  andi        $a0, $t5, 0x4000
    ctx->pc = 0x278e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16384);
    // 0x278e30: 0xe2500b  movn        $t2, $a3, $v0
    ctx->pc = 0x278e30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
    // 0x278e34: 0x31821000  andi        $v0, $t4, 0x1000
    ctx->pc = 0x278e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4096);
    // 0x278e38: 0x31834000  andi        $v1, $t4, 0x4000
    ctx->pc = 0x278e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)16384);
    // 0x278e3c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278e40: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278e44: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x278e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x278e48: 0x35252000  ori         $a1, $t1, 0x2000
    ctx->pc = 0x278e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x278e4c: 0x35068000  ori         $a2, $t0, 0x8000
    ctx->pc = 0x278e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x278e50: 0x35478000  ori         $a3, $t2, 0x8000
    ctx->pc = 0x278e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x278e54: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x278e54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x278e58: 0xc3400b  movn        $t0, $a2, $v1
    ctx->pc = 0x278e58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x278e5c: 0xe4500b  movn        $t2, $a3, $a0
    ctx->pc = 0x278e5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
label_278e60:
    // 0x278e60: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x278E60u;
    {
        const bool branch_taken_0x278e60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E60u;
        // 0x278e64: 0x31621000  andi        $v0, $t3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e60) {
            ctx->pc = 0x278F0Cu;
            goto label_278f0c;
        }
    }
    ctx->pc = 0x278E68u;
    // 0x278e68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278E68u;
    {
        const bool branch_taken_0x278e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E68u;
        // 0x278e6c: 0x1491024  and         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e68) {
            ctx->pc = 0x278E80u;
            goto label_278e80;
        }
    }
    ctx->pc = 0x278E70u;
    // 0x278e70: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x278E70u;
    {
        const bool branch_taken_0x278e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278e70) {
            ctx->pc = 0x278F0Cu;
            goto label_278f0c;
        }
    }
    ctx->pc = 0x278E78u;
    // 0x278e78: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x278E78u;
    {
        const bool branch_taken_0x278e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E78u;
        // 0x278e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e78) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278E80u;
label_278e80:
    // 0x278e80: 0x31622000  andi        $v0, $t3, 0x2000
    ctx->pc = 0x278e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8192);
    // 0x278e84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x278E84u;
    {
        const bool branch_taken_0x278e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E84u;
        // 0x278e88: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e84) {
            ctx->pc = 0x278F00u;
            goto label_278f00;
        }
    }
    ctx->pc = 0x278E8Cu;
    // 0x278e8c: 0x35050010  ori         $a1, $t0, 0x10
    ctx->pc = 0x278e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x278e90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x278e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278e94: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x278e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x278e98: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278e9c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278ea0: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x278ea0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x278ea4: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x278ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x278ea8: 0x35050020  ori         $a1, $t0, 0x20
    ctx->pc = 0x278ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x278eac: 0x31240004  andi        $a0, $t1, 0x4
    ctx->pc = 0x278eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x278eb0: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x278eb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x278eb4: 0x31251000  andi        $a1, $t1, 0x1000
    ctx->pc = 0x278eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x278eb8: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x278eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x278ebc: 0x35030040  ori         $v1, $t0, 0x40
    ctx->pc = 0x278ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x278ec0: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x278ec0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x278ec4: 0x31232000  andi        $v1, $t1, 0x2000
    ctx->pc = 0x278ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x278ec8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278ecc: 0x35040080  ori         $a0, $t0, 0x80
    ctx->pc = 0x278eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x278ed0: 0x82400b  movn        $t0, $a0, $v0
    ctx->pc = 0x278ed0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x278ed4: 0x1492024  and         $a0, $t2, $t1
    ctx->pc = 0x278ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x278ed8: 0x35024000  ori         $v0, $t0, 0x4000
    ctx->pc = 0x278ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x278edc: 0x38a50000  xori        $a1, $a1, 0x0
    ctx->pc = 0x278edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
    // 0x278ee0: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x278ee0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x278ee4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278ee8: 0x35028000  ori         $v0, $t0, 0x8000
    ctx->pc = 0x278ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x278eec: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278EECu;
    {
        const bool branch_taken_0x278eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EECu;
        // 0x278ef0: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278eec) {
            ctx->pc = 0x278F0Cu;
            goto label_278f0c;
        }
    }
    ctx->pc = 0x278EF4u;
    // 0x278ef4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x278EF4u;
    {
        const bool branch_taken_0x278ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EF4u;
        // 0x278ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ef4) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278EFCu;
    // 0x278efc: 0x0  nop
    ctx->pc = 0x278efcu;
    // NOP
label_278f00:
    // 0x278f00: 0x1491024  and         $v0, $t2, $t1
    ctx->pc = 0x278f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x278f04: 0x1449000b  bne         $v0, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x278F04u;
    {
        const bool branch_taken_0x278f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x278F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F04u;
        // 0x278f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f04) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278F0Cu;
label_278f0c:
    // 0x278f0c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278F0Cu;
    {
        const bool branch_taken_0x278f0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F0Cu;
        // 0x278f10: 0x1481024  and         $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f0c) {
            ctx->pc = 0x278F1Cu;
            goto label_278f1c;
        }
    }
    ctx->pc = 0x278F14u;
    // 0x278f14: 0x14480007  bne         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278F14u;
    {
        const bool branch_taken_0x278f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x278F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F14u;
        // 0x278f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f14) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278F1Cu;
label_278f1c:
    // 0x278f1c: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x278F1Cu;
    {
        const bool branch_taken_0x278f1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F1Cu;
        // 0x278f20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f1c) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278F24u;
    // 0x278f24: 0x14e1024  and         $v0, $t2, $t6
    ctx->pc = 0x278f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x278f28: 0x144e0002  bne         $v0, $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x278F28u;
    {
        const bool branch_taken_0x278f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x278F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F28u;
        // 0x278f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f28) {
            ctx->pc = 0x278F34u;
            goto label_278f34;
        }
    }
    ctx->pc = 0x278F30u;
    // 0x278f30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278f34:
    // 0x278f34: 0x100002ba  b           . + 4 + (0x2BA << 2)
    ctx->pc = 0x278F34u;
    {
        const bool branch_taken_0x278f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F34u;
        // 0x278f38: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f34) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278F3Cu;
    // 0x278f3c: 0x0  nop
    ctx->pc = 0x278f3cu;
    // NOP
label_278f40:
    // 0x278f40: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x278f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x278f44: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x278f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x278f48: 0x5440015d  bnel        $v0, $zero, . + 4 + (0x15D << 2)
    ctx->pc = 0x278F48u;
    {
        const bool branch_taken_0x278f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f48) {
            ctx->pc = 0x278F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F48u;
            // 0x278f4c: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2794C0u;
            goto label_2794c0;
        }
    }
    ctx->pc = 0x278F50u;
    // 0x278f50: 0x25838000  addiu       $v1, $t4, -0x8000
    ctx->pc = 0x278f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294934528));
    // 0x278f54: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x278f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x278f58: 0x104002b1  beqz        $v0, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x278F58u;
    {
        const bool branch_taken_0x278f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F58u;
        // 0x278f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f58) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278F60u;
    // 0x278f60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278f64: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x278f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x278f68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278f6c: 0x8c633cc0  lw          $v1, 0x3CC0($v1)
    ctx->pc = 0x278f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15552)));
    // 0x278f70: 0x600008  jr          $v1
    ctx->pc = 0x278F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278F78u: goto label_278f78;
            case 0x2790C0u: goto label_2790c0;
            case 0x279208u: goto label_279208;
            case 0x279358u: goto label_279358;
            case 0x2794B8u: goto label_2794b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278F78u;
label_278f78:
    // 0x278f78: 0x9502003c  lhu         $v0, 0x3C($t0)
    ctx->pc = 0x278f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x278f7c: 0x240c0040  addiu       $t4, $zero, 0x40
    ctx->pc = 0x278f7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x278f80: 0x950406ae  lhu         $a0, 0x6AE($t0)
    ctx->pc = 0x278f80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x278f84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x278f84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f88: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x278f8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x278f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278f90: 0x308487ff  andi        $a0, $a0, 0x87FF
    ctx->pc = 0x278f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34815);
    // 0x278f94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x278f98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x278f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278f9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x278fa0: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x278fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x278fa4: 0x2508a620  addiu       $t0, $t0, -0x59E0
    ctx->pc = 0x278fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944288));
    // 0x278fa8: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x278fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x278fac: 0x148c0093  bne         $a0, $t4, . + 4 + (0x93 << 2)
    ctx->pc = 0x278FACu;
    {
        const bool branch_taken_0x278fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x278FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FACu;
        // 0x278fb0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fac) {
            ctx->pc = 0x2791FCu;
            goto label_2791fc;
        }
    }
    ctx->pc = 0x278FB4u;
    // 0x278fb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x278fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x278fb8: 0x6182a  slt         $v1, $zero, $a2
    ctx->pc = 0x278fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x278fbc: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x278fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x278fc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x278fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fc4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x278fc4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x278fc8: 0x25070002  addiu       $a3, $t0, 0x2
    ctx->pc = 0x278fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x278fcc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x278fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x278fd0: 0x6202a  slt         $a0, $zero, $a2
    ctx->pc = 0x278fd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x278fd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x278fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fd8: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x278fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278fdc: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x278fdcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x278fe0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x278fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x278fe4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x278fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x278fe8: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x278fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x278fec: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x278fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x278ff0: 0x146f028b  bne         $v1, $t7, . + 4 + (0x28B << 2)
    ctx->pc = 0x278FF0u;
    {
        const bool branch_taken_0x278ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 15));
        ctx->pc = 0x278FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FF0u;
        // 0x278ff4: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ff0) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x278FF8u;
    // 0x278ff8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x278ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x278ffc: 0x1c6182a  slt         $v1, $t6, $a2
    ctx->pc = 0x278ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279000: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x279000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x279004: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x279004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279008: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x279008u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x27900c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x27900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x279010: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x279010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x279014: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x279014u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279018: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x279018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27901c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x27901cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279020: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279024: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x279024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279028: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x27902c: 0x146f000e  bne         $v1, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x27902Cu;
    {
        const bool branch_taken_0x27902c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 15));
        ctx->pc = 0x279030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27902Cu;
        // 0x279030: 0x340affff  ori         $t2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27902c) {
            ctx->pc = 0x279068u;
            goto label_279068;
        }
    }
    ctx->pc = 0x279034u;
    // 0x279034: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x279034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_279038:
    // 0x279038: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x279038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27903c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27903Cu;
    {
        const bool branch_taken_0x27903c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x279040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27903Cu;
        // 0x279040: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27903c) {
            ctx->pc = 0x279070u;
            goto label_279070;
        }
    }
    ctx->pc = 0x279044u;
    // 0x279044: 0x1a6202a  slt         $a0, $t5, $a2
    ctx->pc = 0x279044u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279048: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x279048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27904c: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x27904cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x279050: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x279050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x279054: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x279054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x279058: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x27905c: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x27905cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x279060: 0x106bfff5  beq         $v1, $t3, . + 4 + (-0xB << 2)
    ctx->pc = 0x279060u;
    {
        const bool branch_taken_0x279060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x279064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279060u;
        // 0x279064: 0xaa1021  addu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279060) {
            ctx->pc = 0x279038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279038;
        }
    }
    ctx->pc = 0x279068u;
label_279068:
    // 0x279068: 0x146c026d  bne         $v1, $t4, . + 4 + (0x26D << 2)
    ctx->pc = 0x279068u;
    {
        const bool branch_taken_0x279068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x27906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279068u;
        // 0x27906c: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279068) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x279070u;
label_279070:
    // 0x279070: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x279070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x279074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x279074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279078u;
    {
        const bool branch_taken_0x279078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279078u;
        // 0x27907c: 0x340affff  ori         $t2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279078) {
            ctx->pc = 0x279088u;
            goto label_279088;
        }
    }
    ctx->pc = 0x279080u;
label_279080:
    // 0x279080: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x279080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x279084: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x279084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_279088:
    // 0x279088: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x279088u;
    {
        const bool branch_taken_0x279088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279088u;
        // 0x27908c: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279088) {
            ctx->pc = 0x2791F8u;
            goto label_2791f8;
        }
    }
    ctx->pc = 0x279090u;
    // 0x279090: 0x106202a  slt         $a0, $t0, $a2
    ctx->pc = 0x279090u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279094: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x279094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279098: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x279098u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x27909c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x27909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2790a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2790a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2790a4: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x2790a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2790a8: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x2790a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x2790ac: 0x106cfff4  beq         $v1, $t4, . + 4 + (-0xC << 2)
    ctx->pc = 0x2790ACu;
    {
        const bool branch_taken_0x2790ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x2790B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790ACu;
        // 0x2790b0: 0x5702b  sltu        $t6, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790ac) {
            ctx->pc = 0x279080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279080;
        }
    }
    ctx->pc = 0x2790B4u;
    // 0x2790b4: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x2790B4u;
    {
        const bool branch_taken_0x2790b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790B4u;
        // 0x2790b8: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790b4) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2790BCu;
    // 0x2790bc: 0x0  nop
    ctx->pc = 0x2790bcu;
    // NOP
label_2790c0:
    // 0x2790c0: 0x9502003c  lhu         $v0, 0x3C($t0)
    ctx->pc = 0x2790c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x2790c4: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2790c8: 0x950406ae  lhu         $a0, 0x6AE($t0)
    ctx->pc = 0x2790c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x2790cc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2790ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2790d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2790d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2790d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2790d8: 0x308487ff  andi        $a0, $a0, 0x87FF
    ctx->pc = 0x2790d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34815);
    // 0x2790dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2790dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2790e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2790e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2790e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2790e8: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x2790e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x2790ec: 0x2508a620  addiu       $t0, $t0, -0x59E0
    ctx->pc = 0x2790ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944288));
    // 0x2790f0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2790f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2790f4: 0x148c0041  bne         $a0, $t4, . + 4 + (0x41 << 2)
    ctx->pc = 0x2790F4u;
    {
        const bool branch_taken_0x2790f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x2790F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790F4u;
        // 0x2790f8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790f4) {
            ctx->pc = 0x2791FCu;
            goto label_2791fc;
        }
    }
    ctx->pc = 0x2790FCu;
    // 0x2790fc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2790fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x279100: 0x6182a  slt         $v1, $zero, $a2
    ctx->pc = 0x279100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279104: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x279104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x279108: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x279108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27910c: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x27910cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x279110: 0x25070002  addiu       $a3, $t0, 0x2
    ctx->pc = 0x279110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x279114: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x279114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x279118: 0x6202a  slt         $a0, $zero, $a2
    ctx->pc = 0x279118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27911c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27911cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279120: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279124: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x279124u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x279128: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x279128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x27912c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x279130: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279134: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x279138: 0x146f0239  bne         $v1, $t7, . + 4 + (0x239 << 2)
    ctx->pc = 0x279138u;
    {
        const bool branch_taken_0x279138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 15));
        ctx->pc = 0x27913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279138u;
        // 0x27913c: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279138) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x279140u;
    // 0x279140: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x279140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x279144: 0x1c6182a  slt         $v1, $t6, $a2
    ctx->pc = 0x279144u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279148: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x279148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27914c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x27914cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279150: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x279150u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x279154: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x279154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x279158: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x27915c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x27915cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279160: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x279160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x279164: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x279164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279168: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x27916c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x27916cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279170: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x279174: 0x146f000e  bne         $v1, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x279174u;
    {
        const bool branch_taken_0x279174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 15));
        ctx->pc = 0x279178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279174u;
        // 0x279178: 0x340affff  ori         $t2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279174) {
            ctx->pc = 0x2791B0u;
            goto label_2791b0;
        }
    }
    ctx->pc = 0x27917Cu;
    // 0x27917c: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_279180:
    // 0x279180: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x279180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x279184: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x279184u;
    {
        const bool branch_taken_0x279184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x279188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279184u;
        // 0x279188: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279184) {
            ctx->pc = 0x2791B8u;
            goto label_2791b8;
        }
    }
    ctx->pc = 0x27918Cu;
    // 0x27918c: 0x1a6202a  slt         $a0, $t5, $a2
    ctx->pc = 0x27918cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x279190: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x279190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279194: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x279194u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x279198: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x27919c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2791a0: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x2791a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2791a4: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x2791a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x2791a8: 0x106bfff5  beq         $v1, $t3, . + 4 + (-0xB << 2)
    ctx->pc = 0x2791A8u;
    {
        const bool branch_taken_0x2791a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x2791ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791A8u;
        // 0x2791ac: 0xaa1021  addu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791a8) {
            ctx->pc = 0x279180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279180;
        }
    }
    ctx->pc = 0x2791B0u;
label_2791b0:
    // 0x2791b0: 0x146c021b  bne         $v1, $t4, . + 4 + (0x21B << 2)
    ctx->pc = 0x2791B0u;
    {
        const bool branch_taken_0x2791b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x2791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791B0u;
        // 0x2791b4: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791b0) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2791B8u;
label_2791b8:
    // 0x2791b8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2791b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2791bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2791bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2791C0u;
    {
        const bool branch_taken_0x2791c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791C0u;
        // 0x2791c4: 0x340affff  ori         $t2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791c0) {
            ctx->pc = 0x2791CCu;
            goto label_2791cc;
        }
    }
    ctx->pc = 0x2791C8u;
label_2791c8:
    // 0x2791c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2791c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2791cc:
    // 0x2791cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2791CCu;
    {
        const bool branch_taken_0x2791cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791CCu;
        // 0x2791d0: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791cc) {
            ctx->pc = 0x2791F8u;
            goto label_2791f8;
        }
    }
    ctx->pc = 0x2791D4u;
    // 0x2791d4: 0x106202a  slt         $a0, $t0, $a2
    ctx->pc = 0x2791d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2791d8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2791d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791dc: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x2791dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2791e0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2791e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2791e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2791e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2791e8: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x2791e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2791ec: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x2791ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x2791f0: 0x506cfff5  beql        $v1, $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x2791F0u;
    {
        const bool branch_taken_0x2791f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x2791f0) {
            ctx->pc = 0x2791F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2791F0u;
            // 0x2791f4: 0xaa1021  addu        $v0, $a1, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2791C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2791c8;
        }
    }
    ctx->pc = 0x2791F8u;
label_2791f8:
    // 0x2791f8: 0x5702b  sltu        $t6, $zero, $a1
    ctx->pc = 0x2791f8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2791fc:
    // 0x2791fc: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x2791FCu;
    {
        const bool branch_taken_0x2791fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791FCu;
        // 0x279200: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791fc) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x279204u;
    // 0x279204: 0x0  nop
    ctx->pc = 0x279204u;
    // NOP
label_279208:
    // 0x279208: 0x9503003c  lhu         $v1, 0x3C($t0)
    ctx->pc = 0x279208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27920c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279210: 0x950406ac  lhu         $a0, 0x6AC($t0)
    ctx->pc = 0x279210u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x279214: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x279218: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x279218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27921c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x27921cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279220: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279224: 0x308487ff  andi        $a0, $a0, 0x87FF
    ctx->pc = 0x279224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34815);
    // 0x279228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27922c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279230: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x279234: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x279238: 0x24c6a620  addiu       $a2, $a2, -0x59E0
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944288));
    // 0x27923c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x279240: 0x1485009a  bne         $a0, $a1, . + 4 + (0x9A << 2)
    ctx->pc = 0x279240u;
    {
        const bool branch_taken_0x279240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x279244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279240u;
        // 0x279244: 0x8cc80004  lw          $t0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279240) {
            ctx->pc = 0x2794ACu;
            goto label_2794ac;
        }
    }
    ctx->pc = 0x279248u;
    // 0x279248: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x279248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27924c: 0x8202a  slt         $a0, $zero, $t0
    ctx->pc = 0x27924cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x279250: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x279254: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x279254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279258: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x279258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27925c: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x27925cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x279260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279260u;
    {
        const bool branch_taken_0x279260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279260u;
        // 0x279264: 0x24c90002  addiu       $t1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279260) {
            ctx->pc = 0x279270u;
            goto label_279270;
        }
    }
    ctx->pc = 0x279268u;
label_279268:
    // 0x279268: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x279268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27926c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x27926cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_279270:
    // 0x279270: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x279270u;
    {
        const bool branch_taken_0x279270 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x279274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279270u;
        // 0x279274: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279270) {
            ctx->pc = 0x2792CCu;
            goto label_2792cc;
        }
    }
    ctx->pc = 0x279278u;
    // 0x279278: 0x8282a  slt         $a1, $zero, $t0
    ctx->pc = 0x279278u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x27927c: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x27927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x279280: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x279280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279284: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x279284u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x279288: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x279288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27928c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x27928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x279290: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x279294: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279298: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x27929c: 0x1066fff2  beq         $v1, $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x27929Cu;
    {
        const bool branch_taken_0x27929c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2792A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27929Cu;
        // 0x2792a0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27929c) {
            ctx->pc = 0x279268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279268;
        }
    }
    ctx->pc = 0x2792A4u;
    // 0x2792a4: 0x146a01de  bne         $v1, $t2, . + 4 + (0x1DE << 2)
    ctx->pc = 0x2792A4u;
    {
        const bool branch_taken_0x2792a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x2792A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792A4u;
        // 0x2792a8: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792a4) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2792ACu;
    // 0x2792ac: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2792acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2792b0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2792b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2792b4: 0x2d0300ff  sltiu       $v1, $t0, 0xFF
    ctx->pc = 0x2792b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2792b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2792b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2792bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2792c0: 0x83400b  movn        $t0, $a0, $v1
    ctx->pc = 0x2792c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x2792c4: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x2792c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2792c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2792c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2792cc:
    // 0x2792cc: 0x8282a  slt         $a1, $zero, $t0
    ctx->pc = 0x2792ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2792d0: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x2792d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2792d4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2792d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792d8: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x2792d8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x2792dc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2792dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2792e0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2792e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2792e4: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x2792e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2792e8: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x2792e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x2792ec: 0x146a01cc  bne         $v1, $t2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x2792ECu;
    {
        const bool branch_taken_0x2792ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x2792F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792ECu;
        // 0x2792f0: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792ec) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2792F4u;
    // 0x2792f4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2792f8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2792f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2792fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x279300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x279300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279304: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x279304u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x279308: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27930c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27930Cu;
    {
        const bool branch_taken_0x27930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27930Cu;
        // 0x279310: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27930c) {
            ctx->pc = 0x279320u;
            goto label_279320;
        }
    }
    ctx->pc = 0x279314u;
    // 0x279314: 0x0  nop
    ctx->pc = 0x279314u;
    // NOP
label_279318:
    // 0x279318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x279318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27931c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_279320:
    // 0x279320: 0x58e00062  blezl       $a3, . + 4 + (0x62 << 2)
    ctx->pc = 0x279320u;
    {
        const bool branch_taken_0x279320 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x279320) {
            ctx->pc = 0x279324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279320u;
            // 0x279324: 0x7602a  slt         $t4, $zero, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2794ACu;
            goto label_2794ac;
        }
    }
    ctx->pc = 0x279328u;
    // 0x279328: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x27932c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x27932cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x279330: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x279330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279334: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x279334u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x279338: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x279338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x27933c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x279340: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279344: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x279348: 0x106afff3  beq         $v1, $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x279348u;
    {
        const bool branch_taken_0x279348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x27934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279348u;
        // 0x27934c: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279348) {
            ctx->pc = 0x279318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279318;
        }
    }
    ctx->pc = 0x279350u;
    // 0x279350: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x279350u;
    {
        const bool branch_taken_0x279350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279350) {
            ctx->pc = 0x2794A0u;
            goto label_2794a0;
        }
    }
    ctx->pc = 0x279358u;
label_279358:
    // 0x279358: 0x9503003c  lhu         $v1, 0x3C($t0)
    ctx->pc = 0x279358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x27935c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279360: 0x950406ac  lhu         $a0, 0x6AC($t0)
    ctx->pc = 0x279360u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x279364: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x279364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x279368: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x279368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27936c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x27936cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279370: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279374: 0x308487ff  andi        $a0, $a0, 0x87FF
    ctx->pc = 0x279374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34815);
    // 0x279378: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27937c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279380: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x279384: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x279384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x279388: 0x24c6a620  addiu       $a2, $a2, -0x59E0
    ctx->pc = 0x279388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944288));
    // 0x27938c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27938cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x279390: 0x14850046  bne         $a0, $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x279390u;
    {
        const bool branch_taken_0x279390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x279394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279390u;
        // 0x279394: 0x8cc80004  lw          $t0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279390) {
            ctx->pc = 0x2794ACu;
            goto label_2794ac;
        }
    }
    ctx->pc = 0x279398u;
    // 0x279398: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x279398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27939c: 0x8202a  slt         $a0, $zero, $t0
    ctx->pc = 0x27939cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2793a0: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x2793a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2793a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2793a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793a8: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2793a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2793ac: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x2793acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x2793b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2793B0u;
    {
        const bool branch_taken_0x2793b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793B0u;
        // 0x2793b4: 0x24c90002  addiu       $t1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793b0) {
            ctx->pc = 0x2793C0u;
            goto label_2793c0;
        }
    }
    ctx->pc = 0x2793B8u;
label_2793b8:
    // 0x2793b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2793b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2793bc: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x2793bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_2793c0:
    // 0x2793c0: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2793C0u;
    {
        const bool branch_taken_0x2793c0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2793C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793C0u;
        // 0x2793c4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793c0) {
            ctx->pc = 0x27941Cu;
            goto label_27941c;
        }
    }
    ctx->pc = 0x2793C8u;
    // 0x2793c8: 0x8282a  slt         $a1, $zero, $t0
    ctx->pc = 0x2793c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2793cc: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x2793ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2793d0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2793d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793d4: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x2793d4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x2793d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2793d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2793dc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2793dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2793e0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2793e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2793e4: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x2793e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2793e8: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x2793e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x2793ec: 0x1066fff2  beq         $v1, $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2793ECu;
    {
        const bool branch_taken_0x2793ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2793F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793ECu;
        // 0x2793f0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793ec) {
            ctx->pc = 0x2793B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2793b8;
        }
    }
    ctx->pc = 0x2793F4u;
    // 0x2793f4: 0x146a018a  bne         $v1, $t2, . + 4 + (0x18A << 2)
    ctx->pc = 0x2793F4u;
    {
        const bool branch_taken_0x2793f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x2793F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793F4u;
        // 0x2793f8: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793f4) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2793FCu;
    // 0x2793fc: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2793fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x279400: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x279400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x279404: 0x2d0300ff  sltiu       $v1, $t0, 0xFF
    ctx->pc = 0x279404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x279408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x279408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27940c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27940cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x279410: 0x83400b  movn        $t0, $a0, $v1
    ctx->pc = 0x279410u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x279414: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x279414u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x279418: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27941c:
    // 0x27941c: 0x8282a  slt         $a1, $zero, $t0
    ctx->pc = 0x27941cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x279420: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x279420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x279424: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x279424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279428: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x279428u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x27942c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x27942cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x279430: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x279434: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279438: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x27943c: 0x146a0178  bne         $v1, $t2, . + 4 + (0x178 << 2)
    ctx->pc = 0x27943Cu;
    {
        const bool branch_taken_0x27943c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x279440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27943Cu;
        // 0x279440: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27943c) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x279444u;
    // 0x279444: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x279444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x279448: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x279448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27944c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27944cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x279450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x279450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279454: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x279454u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x279458: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x279458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27945c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27945Cu;
    {
        const bool branch_taken_0x27945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27945Cu;
        // 0x279460: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27945c) {
            ctx->pc = 0x279470u;
            goto label_279470;
        }
    }
    ctx->pc = 0x279464u;
    // 0x279464: 0x0  nop
    ctx->pc = 0x279464u;
    // NOP
label_279468:
    // 0x279468: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x279468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27946c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x27946cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_279470:
    // 0x279470: 0x58e0000e  blezl       $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x279470u;
    {
        const bool branch_taken_0x279470 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x279470) {
            ctx->pc = 0x279474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279470u;
            // 0x279474: 0x7602a  slt         $t4, $zero, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2794ACu;
            goto label_2794ac;
        }
    }
    ctx->pc = 0x279478u;
    // 0x279478: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x279478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x27947c: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x27947cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x279480: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x279480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279484: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x279484u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x279488: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x27948c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x279490: 0x94430210  lhu         $v1, 0x210($v0)
    ctx->pc = 0x279490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x279494: 0x306387ff  andi        $v1, $v1, 0x87FF
    ctx->pc = 0x279494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)34815);
    // 0x279498: 0x106afff3  beq         $v1, $t2, . + 4 + (-0xD << 2)
    ctx->pc = 0x279498u;
    {
        const bool branch_taken_0x279498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x27949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279498u;
        // 0x27949c: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279498) {
            ctx->pc = 0x279468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279468;
        }
    }
    ctx->pc = 0x2794A0u;
label_2794a0:
    // 0x2794a0: 0x546b015f  bnel        $v1, $t3, . + 4 + (0x15F << 2)
    ctx->pc = 0x2794A0u;
    {
        const bool branch_taken_0x2794a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x2794a0) {
            ctx->pc = 0x2794A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2794A0u;
            // 0x2794a4: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2794A8u;
    // 0x2794a8: 0x7602a  slt         $t4, $zero, $a3
    ctx->pc = 0x2794a8u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2794ac:
    // 0x2794ac: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x2794ACu;
    {
        const bool branch_taken_0x2794ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794ACu;
        // 0x2794b0: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794ac) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2794B4u;
    // 0x2794b4: 0x0  nop
    ctx->pc = 0x2794b4u;
    // NOP
label_2794b8:
    // 0x2794b8: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x2794B8u;
    {
        const bool branch_taken_0x2794b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794B8u;
        // 0x2794bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794b8) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x2794C0u;
label_2794c0:
    // 0x2794c0: 0xc30c0  sll         $a2, $t4, 3
    ctx->pc = 0x2794c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2794c4: 0x9505003c  lhu         $a1, 0x3C($t0)
    ctx->pc = 0x2794c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x2794c8: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x2794c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
    // 0x2794cc: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x2794ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2794d0: 0x3484ffc8  ori         $a0, $a0, 0xFFC8
    ctx->pc = 0x2794d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65480);
    // 0x2794d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2794d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2794d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2794d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2794dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2794e0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2794e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2794e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2794e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2794e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2794ec: 0x94670002  lhu         $a3, 0x2($v1)
    ctx->pc = 0x2794ecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2794f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2794f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2794f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2794f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2794f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2794f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2794fc: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2794fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x279500: 0x3c0f003b  lui         $t7, 0x3B
    ctx->pc = 0x279500u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)59 << 16));
    // 0x279504: 0x25efa620  addiu       $t7, $t7, -0x59E0
    ctx->pc = 0x279504u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294944288));
    // 0x279508: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x279508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x27950c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279510: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x279510u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279514: 0x2499fffc  addiu       $t9, $a0, -0x4
    ctx->pc = 0x279514u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x279518: 0x24f0ffff  addiu       $s0, $a3, -0x1
    ctx->pc = 0x279518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x27951c: 0x97220002  lhu         $v0, 0x2($t9)
    ctx->pc = 0x27951cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x279520: 0x24d2ffff  addiu       $s2, $a2, -0x1
    ctx->pc = 0x279520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x279524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279524u;
    {
        const bool branch_taken_0x279524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279524u;
        // 0x279528: 0x8df80004  lw          $t8, 0x4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279524) {
            ctx->pc = 0x279540u;
            goto label_279540;
        }
    }
    ctx->pc = 0x27952Cu;
    // 0x27952c: 0x27030001  addiu       $v1, $t8, 0x1
    ctx->pc = 0x27952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x279530: 0x2f0200ff  sltiu       $v0, $t8, 0xFF
    ctx->pc = 0x279530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x279534: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x279534u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279538: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x279538u;
    {
        const bool branch_taken_0x279538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279538u;
        // 0x27953c: 0x62c00b  movn        $t8, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279538) {
            ctx->pc = 0x279784u;
            goto label_279784;
        }
    }
    ctx->pc = 0x279540u;
label_279540:
    // 0x279540: 0x972d0000  lhu         $t5, 0x0($t9)
    ctx->pc = 0x279540u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x279544: 0x972b0002  lhu         $t3, 0x2($t9)
    ctx->pc = 0x279544u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x279548: 0x31a387ff  andi        $v1, $t5, 0x87FF
    ctx->pc = 0x279548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)34815);
    // 0x27954c: 0x950406ae  lhu         $a0, 0x6AE($t0)
    ctx->pc = 0x27954cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1710)));
    // 0x279550: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x279550u;
    {
        const bool branch_taken_0x279550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279550u;
        // 0x279554: 0x950506ac  lhu         $a1, 0x6AC($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279550) {
            ctx->pc = 0x279580u;
            goto label_279580;
        }
    }
    ctx->pc = 0x279558u;
    // 0x279558: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x279558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x27955c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27955Cu;
    {
        const bool branch_taken_0x27955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27955Cu;
        // 0x279560: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27955c) {
            ctx->pc = 0x27956Cu;
            goto label_27956c;
        }
    }
    ctx->pc = 0x279564u;
    // 0x279564: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279564u;
    {
        const bool branch_taken_0x279564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279564u;
        // 0x279568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279564) {
            ctx->pc = 0x279584u;
            goto label_279584;
        }
    }
    ctx->pc = 0x27956Cu;
label_27956c:
    // 0x27956c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27956Cu;
    {
        const bool branch_taken_0x27956c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27956Cu;
        // 0x279570: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27956c) {
            ctx->pc = 0x279584u;
            goto label_279584;
        }
    }
    ctx->pc = 0x279574u;
    // 0x279574: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x279574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x279578: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x279578u;
    {
        const bool branch_taken_0x279578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279578u;
        // 0x27957c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279578) {
            ctx->pc = 0x279584u;
            goto label_279584;
        }
    }
    ctx->pc = 0x279580u;
label_279580:
    // 0x279580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279584:
    // 0x279584: 0x10800077  beqz        $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x279584u;
    {
        const bool branch_taken_0x279584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279584u;
        // 0x279588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279584) {
            ctx->pc = 0x279764u;
            goto label_279764;
        }
    }
    ctx->pc = 0x27958Cu;
    // 0x27958c: 0x16600075  bnez        $s3, . + 4 + (0x75 << 2)
    ctx->pc = 0x27958Cu;
    {
        const bool branch_taken_0x27958c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x279590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27958Cu;
        // 0x279590: 0x2d620001  sltiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27958c) {
            ctx->pc = 0x279764u;
            goto label_279764;
        }
    }
    ctx->pc = 0x279594u;
    // 0x279594: 0x950a06aa  lhu         $t2, 0x6AA($t0)
    ctx->pc = 0x279594u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1706)));
    // 0x279598: 0x24024004  addiu       $v0, $zero, 0x4004
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
    // 0x27959c: 0x950c06ac  lhu         $t4, 0x6AC($t0)
    ctx->pc = 0x27959cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1708)));
    // 0x2795a0: 0x1142006f  beq         $t2, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2795A0u;
    {
        const bool branch_taken_0x2795a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2795A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795A0u;
        // 0x2795a4: 0x2d650001  sltiu       $a1, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795a0) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795A8u;
    // 0x2795a8: 0x314200f0  andi        $v0, $t2, 0xF0
    ctx->pc = 0x2795a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
    // 0x2795ac: 0x24034001  addiu       $v1, $zero, 0x4001
    ctx->pc = 0x2795acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x2795b0: 0x1163006b  beq         $t3, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2795B0u;
    {
        const bool branch_taken_0x2795b0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x2795B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795B0u;
        // 0x2795b4: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795b0) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795B8u;
    // 0x2795b8: 0x29624002  slti        $v0, $t3, 0x4002
    ctx->pc = 0x2795b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16386) ? 1 : 0);
    // 0x2795bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2795BCu;
    {
        const bool branch_taken_0x2795bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795BCu;
        // 0x2795c0: 0x24024002  addiu       $v0, $zero, 0x4002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795bc) {
            ctx->pc = 0x2795E8u;
            goto label_2795e8;
        }
    }
    ctx->pc = 0x2795C4u;
    // 0x2795c4: 0x11600066  beqz        $t3, . + 4 + (0x66 << 2)
    ctx->pc = 0x2795C4u;
    {
        const bool branch_taken_0x2795c4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795C4u;
        // 0x2795c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795c4) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795CCu;
    // 0x2795cc: 0x3142000f  andi        $v0, $t2, 0xF
    ctx->pc = 0x2795ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x2795d0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x2795d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2795d4: 0x11630062  beq         $t3, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2795D4u;
    {
        const bool branch_taken_0x2795d4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x2795D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795D4u;
        // 0x2795d8: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795d4) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795DCu;
    // 0x2795dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2795DCu;
    {
        const bool branch_taken_0x2795dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795DCu;
        // 0x2795e0: 0x31a27800  andi        $v0, $t5, 0x7800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)30720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795dc) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2795E4u;
    // 0x2795e4: 0x0  nop
    ctx->pc = 0x2795e4u;
    // NOP
label_2795e8:
    // 0x2795e8: 0x1162005d  beq         $t3, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2795E8u;
    {
        const bool branch_taken_0x2795e8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x2795ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E8u;
        // 0x2795ec: 0x3145000f  andi        $a1, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795e8) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795F0u;
    // 0x2795f0: 0x24024003  addiu       $v0, $zero, 0x4003
    ctx->pc = 0x2795f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16387));
    // 0x2795f4: 0x1162005a  beq         $t3, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2795F4u;
    {
        const bool branch_taken_0x2795f4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x2795F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795F4u;
        // 0x2795f8: 0x314500f0  andi        $a1, $t2, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795f4) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2795FCu;
    // 0x2795fc: 0x31a27800  andi        $v0, $t5, 0x7800
    ctx->pc = 0x2795fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)30720);
label_279600:
    // 0x279600: 0x3169000f  andi        $t1, $t3, 0xF
    ctx->pc = 0x279600u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x279604: 0x316800f0  andi        $t0, $t3, 0xF0
    ctx->pc = 0x279604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)240);
    // 0x279608: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x279608u;
    {
        const bool branch_taken_0x279608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279608u;
        // 0x27960c: 0x316e0f00  andi        $t6, $t3, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279608) {
            ctx->pc = 0x279690u;
            goto label_279690;
        }
    }
    ctx->pc = 0x279610u;
    // 0x279610: 0x31820800  andi        $v0, $t4, 0x800
    ctx->pc = 0x279610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2048);
    // 0x279614: 0x35441000  ori         $a0, $t2, 0x1000
    ctx->pc = 0x279614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4096);
    // 0x279618: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x279618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x27961c: 0x31831000  andi        $v1, $t4, 0x1000
    ctx->pc = 0x27961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4096);
    // 0x279620: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x279620u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x279624: 0x31a42000  andi        $a0, $t5, 0x2000
    ctx->pc = 0x279624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8192);
    // 0x279628: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x279628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x27962c: 0x35422000  ori         $v0, $t2, 0x2000
    ctx->pc = 0x27962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8192);
    // 0x279630: 0x43500b  movn        $t2, $v0, $v1
    ctx->pc = 0x279630u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x279634: 0x31822000  andi        $v0, $t4, 0x2000
    ctx->pc = 0x279634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8192);
    // 0x279638: 0x31a50800  andi        $a1, $t5, 0x800
    ctx->pc = 0x279638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2048);
    // 0x27963c: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x27963cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x279640: 0x38a50000  xori        $a1, $a1, 0x0
    ctx->pc = 0x279640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
    // 0x279644: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x279644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x279648: 0x35231000  ori         $v1, $t1, 0x1000
    ctx->pc = 0x279648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    // 0x27964c: 0x35064000  ori         $a2, $t0, 0x4000
    ctx->pc = 0x27964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x279650: 0x35474000  ori         $a3, $t2, 0x4000
    ctx->pc = 0x279650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x279654: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x279654u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x279658: 0xc4400b  movn        $t0, $a2, $a0
    ctx->pc = 0x279658u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x27965c: 0x31844000  andi        $a0, $t4, 0x4000
    ctx->pc = 0x27965cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)16384);
    // 0x279660: 0xe2500b  movn        $t2, $a3, $v0
    ctx->pc = 0x279660u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
    // 0x279664: 0x31a21000  andi        $v0, $t5, 0x1000
    ctx->pc = 0x279664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4096);
    // 0x279668: 0x31a34000  andi        $v1, $t5, 0x4000
    ctx->pc = 0x279668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16384);
    // 0x27966c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x27966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x279670: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x279670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x279674: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x279674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x279678: 0x35252000  ori         $a1, $t1, 0x2000
    ctx->pc = 0x279678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x27967c: 0x35068000  ori         $a2, $t0, 0x8000
    ctx->pc = 0x27967cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x279680: 0x35478000  ori         $a3, $t2, 0x8000
    ctx->pc = 0x279680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x279684: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x279684u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x279688: 0xc3400b  movn        $t0, $a2, $v1
    ctx->pc = 0x279688u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x27968c: 0xe4500b  movn        $t2, $a3, $a0
    ctx->pc = 0x27968cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
label_279690:
    // 0x279690: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x279690u;
    {
        const bool branch_taken_0x279690 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x279694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279690u;
        // 0x279694: 0x31621000  andi        $v0, $t3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279690) {
            ctx->pc = 0x27973Cu;
            goto label_27973c;
        }
    }
    ctx->pc = 0x279698u;
    // 0x279698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279698u;
    {
        const bool branch_taken_0x279698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279698u;
        // 0x27969c: 0x1491024  and         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279698) {
            ctx->pc = 0x2796B0u;
            goto label_2796b0;
        }
    }
    ctx->pc = 0x2796A0u;
    // 0x2796a0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2796A0u;
    {
        const bool branch_taken_0x2796a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2796a0) {
            ctx->pc = 0x27973Cu;
            goto label_27973c;
        }
    }
    ctx->pc = 0x2796A8u;
    // 0x2796a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2796A8u;
    {
        const bool branch_taken_0x2796a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796A8u;
        // 0x2796ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796a8) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x2796B0u;
label_2796b0:
    // 0x2796b0: 0x31622000  andi        $v0, $t3, 0x2000
    ctx->pc = 0x2796b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8192);
    // 0x2796b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2796B4u;
    {
        const bool branch_taken_0x2796b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B4u;
        // 0x2796b8: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796b4) {
            ctx->pc = 0x279730u;
            goto label_279730;
        }
    }
    ctx->pc = 0x2796BCu;
    // 0x2796bc: 0x35050010  ori         $a1, $t0, 0x10
    ctx->pc = 0x2796bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x2796c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2796c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2796c4: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x2796c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2796c8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2796c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2796cc: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2796ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2796d0: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x2796d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2796d4: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x2796d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x2796d8: 0x35050020  ori         $a1, $t0, 0x20
    ctx->pc = 0x2796d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x2796dc: 0x31240004  andi        $a0, $t1, 0x4
    ctx->pc = 0x2796dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x2796e0: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x2796e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2796e4: 0x31251000  andi        $a1, $t1, 0x1000
    ctx->pc = 0x2796e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x2796e8: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x2796e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x2796ec: 0x35030040  ori         $v1, $t0, 0x40
    ctx->pc = 0x2796ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x2796f0: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x2796f0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x2796f4: 0x31232000  andi        $v1, $t1, 0x2000
    ctx->pc = 0x2796f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x2796f8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2796f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2796fc: 0x35040080  ori         $a0, $t0, 0x80
    ctx->pc = 0x2796fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x279700: 0x82400b  movn        $t0, $a0, $v0
    ctx->pc = 0x279700u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x279704: 0x1492024  and         $a0, $t2, $t1
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x279708: 0x35024000  ori         $v0, $t0, 0x4000
    ctx->pc = 0x279708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x27970c: 0x38a50000  xori        $a1, $a1, 0x0
    ctx->pc = 0x27970cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
    // 0x279710: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x279710u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x279714: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x279714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x279718: 0x35028000  ori         $v0, $t0, 0x8000
    ctx->pc = 0x279718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x27971c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27971Cu;
    {
        const bool branch_taken_0x27971c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x279720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27971Cu;
        // 0x279720: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27971c) {
            ctx->pc = 0x27973Cu;
            goto label_27973c;
        }
    }
    ctx->pc = 0x279724u;
    // 0x279724: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x279724u;
    {
        const bool branch_taken_0x279724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279724u;
        // 0x279728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279724) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x27972Cu;
    // 0x27972c: 0x0  nop
    ctx->pc = 0x27972cu;
    // NOP
label_279730:
    // 0x279730: 0x1491024  and         $v0, $t2, $t1
    ctx->pc = 0x279730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x279734: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x279734u;
    {
        const bool branch_taken_0x279734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x279738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279734u;
        // 0x279738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279734) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x27973Cu;
label_27973c:
    // 0x27973c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27973Cu;
    {
        const bool branch_taken_0x27973c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x279740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27973Cu;
        // 0x279740: 0x1481024  and         $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27973c) {
            ctx->pc = 0x27974Cu;
            goto label_27974c;
        }
    }
    ctx->pc = 0x279744u;
    // 0x279744: 0x14480006  bne         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279744u;
    {
        const bool branch_taken_0x279744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x279748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279744u;
        // 0x279748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279744) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x27974Cu;
label_27974c:
    // 0x27974c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x27974Cu;
    {
        const bool branch_taken_0x27974c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x279750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27974Cu;
        // 0x279750: 0x14e1024  and         $v0, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27974c) {
            ctx->pc = 0x27975Cu;
            goto label_27975c;
        }
    }
    ctx->pc = 0x279754u;
    // 0x279754: 0x144e0002  bne         $v0, $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x279754u;
    {
        const bool branch_taken_0x279754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x279758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279754u;
        // 0x279758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279754) {
            ctx->pc = 0x279760u;
            goto label_279760;
        }
    }
    ctx->pc = 0x27975Cu;
label_27975c:
    // 0x27975c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279760:
    // 0x279760: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x279760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279764:
    // 0x279764: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x279764u;
    {
        const bool branch_taken_0x279764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279764u;
        // 0x279768: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279764) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x27976Cu;
    // 0x27976c: 0x5e000004  bgtzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27976Cu;
    {
        const bool branch_taken_0x27976c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x27976c) {
            ctx->pc = 0x279770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27976Cu;
            // 0x279770: 0x2739fffc  addiu       $t9, $t9, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279780u;
            goto label_279780;
        }
    }
    ctx->pc = 0x279774u;
    // 0x279774: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x279774u;
    {
        const bool branch_taken_0x279774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279774u;
        // 0x279778: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279774) {
            ctx->pc = 0x279A1Cu;
            goto label_279a1c;
        }
    }
    ctx->pc = 0x27977Cu;
    // 0x27977c: 0x0  nop
    ctx->pc = 0x27977cu;
    // NOP
label_279780:
    // 0x279780: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x279780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_279784:
    // 0x279784: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x279784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x279788: 0x18202a  slt         $a0, $zero, $t8
    ctx->pc = 0x279788u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x27978c: 0x2703ffff  addiu       $v1, $t8, -0x1
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x279790: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x279790u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279794: 0x64000a1  bltz        $s2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x279794u;
    {
        const bool branch_taken_0x279794 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x279798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279794u;
        // 0x279798: 0x64c00b  movn        $t8, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279794) {
            ctx->pc = 0x279A1Cu;
            goto label_279a1c;
        }
    }
    ctx->pc = 0x27979Cu;
    // 0x27979c: 0x25f10002  addiu       $s1, $t7, 0x2
    ctx->pc = 0x27979cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x2797a0: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2797a4: 0x18202a  slt         $a0, $zero, $t8
    ctx->pc = 0x2797a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_2797a8:
    // 0x2797a8: 0x2703ffff  addiu       $v1, $t8, -0x1
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x2797ac: 0x2a0c02d  daddu       $t8, $s5, $zero
    ctx->pc = 0x2797acu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797b0: 0x972c0000  lhu         $t4, 0x0($t9)
    ctx->pc = 0x2797b0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2797b4: 0x64c00b  movn        $t8, $v1, $a0
    ctx->pc = 0x2797b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 3));
    // 0x2797b8: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x2797bc: 0x318587ff  andi        $a1, $t4, 0x87FF
    ctx->pc = 0x2797bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)34815);
    // 0x2797c0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2797c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2797c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2797c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797c8: 0x948d0010  lhu         $t5, 0x10($a0)
    ctx->pc = 0x2797c8u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2797cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2797ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797d0: 0x94630410  lhu         $v1, 0x410($v1)
    ctx->pc = 0x2797d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x2797d4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2797D4u;
    {
        const bool branch_taken_0x2797d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797D4u;
        // 0x2797d8: 0x944e0210  lhu         $t6, 0x210($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797d4) {
            ctx->pc = 0x279800u;
            goto label_279800;
        }
    }
    ctx->pc = 0x2797DCu;
    // 0x2797dc: 0x30a20400  andi        $v0, $a1, 0x400
    ctx->pc = 0x2797dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x2797e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2797E0u;
    {
        const bool branch_taken_0x2797e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E0u;
        // 0x2797e4: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797e0) {
            ctx->pc = 0x2797F0u;
            goto label_2797f0;
        }
    }
    ctx->pc = 0x2797E8u;
    // 0x2797e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2797E8u;
    {
        const bool branch_taken_0x2797e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E8u;
        // 0x2797ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797e8) {
            ctx->pc = 0x279804u;
            goto label_279804;
        }
    }
    ctx->pc = 0x2797F0u;
label_2797f0:
    // 0x2797f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2797F0u;
    {
        const bool branch_taken_0x2797f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797F0u;
        // 0x2797f4: 0xae1024  and         $v0, $a1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797f0) {
            ctx->pc = 0x279800u;
            goto label_279800;
        }
    }
    ctx->pc = 0x2797F8u;
    // 0x2797f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2797F8u;
    {
        const bool branch_taken_0x2797f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797F8u;
        // 0x2797fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797f8) {
            ctx->pc = 0x279804u;
            goto label_279804;
        }
    }
    ctx->pc = 0x279800u;
label_279800:
    // 0x279800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279804:
    // 0x279804: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x279804u;
    {
        const bool branch_taken_0x279804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279804u;
        // 0x279808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279804) {
            ctx->pc = 0x2799ECu;
            goto label_2799ec;
        }
    }
    ctx->pc = 0x27980Cu;
    // 0x27980c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27980Cu;
    {
        const bool branch_taken_0x27980c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27980c) {
            ctx->pc = 0x279810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27980Cu;
            // 0x279810: 0x972b0002  lhu         $t3, 0x2($t9) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279820u;
            goto label_279820;
        }
    }
    ctx->pc = 0x279814u;
    // 0x279814: 0x97220002  lhu         $v0, 0x2($t9)
    ctx->pc = 0x279814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 2)));
    // 0x279818: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x279818u;
    {
        const bool branch_taken_0x279818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279818u;
        // 0x27981c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279818) {
            ctx->pc = 0x2799ECu;
            goto label_2799ec;
        }
    }
    ctx->pc = 0x279820u;
label_279820:
    // 0x279820: 0x24024004  addiu       $v0, $zero, 0x4004
    ctx->pc = 0x279820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
    // 0x279824: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x279824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279828: 0x11a2006f  beq         $t5, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x279828u;
    {
        const bool branch_taken_0x279828 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0x2d670001  sltiu       $a3, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279828) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279830u;
    // 0x279830: 0x31a200f0  andi        $v0, $t5, 0xF0
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)240);
    // 0x279834: 0x24034001  addiu       $v1, $zero, 0x4001
    ctx->pc = 0x279834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x279838: 0x1163006b  beq         $t3, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x279838u;
    {
        const bool branch_taken_0x279838 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x27983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279838u;
        // 0x27983c: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279838) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279840u;
    // 0x279840: 0x29624002  slti        $v0, $t3, 0x4002
    ctx->pc = 0x279840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16386) ? 1 : 0);
    // 0x279844: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x279844u;
    {
        const bool branch_taken_0x279844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279844u;
        // 0x279848: 0x24024002  addiu       $v0, $zero, 0x4002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279844) {
            ctx->pc = 0x279870u;
            goto label_279870;
        }
    }
    ctx->pc = 0x27984Cu;
    // 0x27984c: 0x11600066  beqz        $t3, . + 4 + (0x66 << 2)
    ctx->pc = 0x27984Cu;
    {
        const bool branch_taken_0x27984c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x279850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27984Cu;
        // 0x279850: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27984c) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279854u;
    // 0x279854: 0x31a2000f  andi        $v0, $t5, 0xF
    ctx->pc = 0x279854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x279858: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x27985c: 0x11630062  beq         $t3, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x27985Cu;
    {
        const bool branch_taken_0x27985c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x279860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27985Cu;
        // 0x279860: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27985c) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279864u;
    // 0x279864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x279864u;
    {
        const bool branch_taken_0x279864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279864u;
        // 0x279868: 0x31827800  andi        $v0, $t4, 0x7800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)30720);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279864) {
            ctx->pc = 0x279888u;
            goto label_279888;
        }
    }
    ctx->pc = 0x27986Cu;
    // 0x27986c: 0x0  nop
    ctx->pc = 0x27986cu;
    // NOP
label_279870:
    // 0x279870: 0x1162005d  beq         $t3, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x279870u;
    {
        const bool branch_taken_0x279870 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x279874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279870u;
        // 0x279874: 0x31a7000f  andi        $a3, $t5, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279870) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279878u;
    // 0x279878: 0x24024003  addiu       $v0, $zero, 0x4003
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16387));
    // 0x27987c: 0x1162005a  beq         $t3, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x27987Cu;
    {
        const bool branch_taken_0x27987c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x279880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27987Cu;
        // 0x279880: 0x31a700f0  andi        $a3, $t5, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27987c) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279884u;
    // 0x279884: 0x31827800  andi        $v0, $t4, 0x7800
    ctx->pc = 0x279884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)30720);
label_279888:
    // 0x279888: 0x3169000f  andi        $t1, $t3, 0xF
    ctx->pc = 0x279888u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x27988c: 0x316800f0  andi        $t0, $t3, 0xF0
    ctx->pc = 0x27988cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)240);
    // 0x279890: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x279890u;
    {
        const bool branch_taken_0x279890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279890u;
        // 0x279894: 0x316f0f00  andi        $t7, $t3, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279890) {
            ctx->pc = 0x279918u;
            goto label_279918;
        }
    }
    ctx->pc = 0x279898u;
    // 0x279898: 0x31c20800  andi        $v0, $t6, 0x800
    ctx->pc = 0x279898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2048);
    // 0x27989c: 0x35a41000  ori         $a0, $t5, 0x1000
    ctx->pc = 0x27989cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)4096);
    // 0x2798a0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2798a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2798a4: 0x31c31000  andi        $v1, $t6, 0x1000
    ctx->pc = 0x2798a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4096);
    // 0x2798a8: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x2798a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x2798ac: 0x31842000  andi        $a0, $t4, 0x2000
    ctx->pc = 0x2798acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8192);
    // 0x2798b0: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2798b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2798b4: 0x35422000  ori         $v0, $t2, 0x2000
    ctx->pc = 0x2798b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8192);
    // 0x2798b8: 0x43500b  movn        $t2, $v0, $v1
    ctx->pc = 0x2798b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x2798bc: 0x31c22000  andi        $v0, $t6, 0x2000
    ctx->pc = 0x2798bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8192);
    // 0x2798c0: 0x31870800  andi        $a3, $t4, 0x800
    ctx->pc = 0x2798c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2048);
    // 0x2798c4: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x2798c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x2798c8: 0x38e70000  xori        $a3, $a3, 0x0
    ctx->pc = 0x2798c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)0);
    // 0x2798cc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2798ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2798d0: 0x35231000  ori         $v1, $t1, 0x1000
    ctx->pc = 0x2798d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    // 0x2798d4: 0x35054000  ori         $a1, $t0, 0x4000
    ctx->pc = 0x2798d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x2798d8: 0x35464000  ori         $a2, $t2, 0x4000
    ctx->pc = 0x2798d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x2798dc: 0x67480b  movn        $t1, $v1, $a3
    ctx->pc = 0x2798dcu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x2798e0: 0xc2500b  movn        $t2, $a2, $v0
    ctx->pc = 0x2798e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x2798e4: 0x31c64000  andi        $a2, $t6, 0x4000
    ctx->pc = 0x2798e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16384);
    // 0x2798e8: 0xa4400b  movn        $t0, $a1, $a0
    ctx->pc = 0x2798e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2798ec: 0x35458000  ori         $a1, $t2, 0x8000
    ctx->pc = 0x2798ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x2798f0: 0x31874000  andi        $a3, $t4, 0x4000
    ctx->pc = 0x2798f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)16384);
    // 0x2798f4: 0x31821000  andi        $v0, $t4, 0x1000
    ctx->pc = 0x2798f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4096);
    // 0x2798f8: 0x38e70000  xori        $a3, $a3, 0x0
    ctx->pc = 0x2798f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)0);
    // 0x2798fc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2798fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x279900: 0x38c60000  xori        $a2, $a2, 0x0
    ctx->pc = 0x279900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
    // 0x279904: 0x35232000  ori         $v1, $t1, 0x2000
    ctx->pc = 0x279904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x279908: 0x35048000  ori         $a0, $t0, 0x8000
    ctx->pc = 0x279908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x27990c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x27990cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x279910: 0x87400b  movn        $t0, $a0, $a3
    ctx->pc = 0x279910u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x279914: 0xa6500b  movn        $t2, $a1, $a2
    ctx->pc = 0x279914u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_279918:
    // 0x279918: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x279918u;
    {
        const bool branch_taken_0x279918 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x27991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279918u;
        // 0x27991c: 0x31621000  andi        $v0, $t3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279918) {
            ctx->pc = 0x2799C4u;
            goto label_2799c4;
        }
    }
    ctx->pc = 0x279920u;
    // 0x279920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279920u;
    {
        const bool branch_taken_0x279920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279920u;
        // 0x279924: 0x1491024  and         $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279920) {
            ctx->pc = 0x279938u;
            goto label_279938;
        }
    }
    ctx->pc = 0x279928u;
    // 0x279928: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x279928u;
    {
        const bool branch_taken_0x279928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279928) {
            ctx->pc = 0x2799C4u;
            goto label_2799c4;
        }
    }
    ctx->pc = 0x279930u;
    // 0x279930: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x279930u;
    {
        const bool branch_taken_0x279930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279930u;
        // 0x279934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279930) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x279938u;
label_279938:
    // 0x279938: 0x31622000  andi        $v0, $t3, 0x2000
    ctx->pc = 0x279938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8192);
    // 0x27993c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27993Cu;
    {
        const bool branch_taken_0x27993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27993Cu;
        // 0x279940: 0x31220001  andi        $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27993c) {
            ctx->pc = 0x2799B8u;
            goto label_2799b8;
        }
    }
    ctx->pc = 0x279944u;
    // 0x279944: 0x35050010  ori         $a1, $t0, 0x10
    ctx->pc = 0x279944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x279948: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x279948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27994c: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x27994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x279950: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x279950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x279954: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x279954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x279958: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x279958u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x27995c: 0x31250008  andi        $a1, $t1, 0x8
    ctx->pc = 0x27995cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x279960: 0x35020020  ori         $v0, $t0, 0x20
    ctx->pc = 0x279960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x279964: 0x31240004  andi        $a0, $t1, 0x4
    ctx->pc = 0x279964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x279968: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x279968u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x27996c: 0x31232000  andi        $v1, $t1, 0x2000
    ctx->pc = 0x27996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x279970: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x279970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x279974: 0x35020040  ori         $v0, $t0, 0x40
    ctx->pc = 0x279974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x279978: 0x44400b  movn        $t0, $v0, $a0
    ctx->pc = 0x279978u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x27997c: 0x1492024  and         $a0, $t2, $t1
    ctx->pc = 0x27997cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x279980: 0x35020080  ori         $v0, $t0, 0x80
    ctx->pc = 0x279980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x279984: 0x38a50000  xori        $a1, $a1, 0x0
    ctx->pc = 0x279984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
    // 0x279988: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x279988u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x27998c: 0x31261000  andi        $a2, $t1, 0x1000
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x279990: 0x35024000  ori         $v0, $t0, 0x4000
    ctx->pc = 0x279990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x279994: 0x38c60000  xori        $a2, $a2, 0x0
    ctx->pc = 0x279994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
    // 0x279998: 0x46400b  movn        $t0, $v0, $a2
    ctx->pc = 0x279998u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x27999c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x27999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2799a0: 0x35028000  ori         $v0, $t0, 0x8000
    ctx->pc = 0x2799a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x2799a4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2799A4u;
    {
        const bool branch_taken_0x2799a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799A4u;
        // 0x2799a8: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799a4) {
            ctx->pc = 0x2799C4u;
            goto label_2799c4;
        }
    }
    ctx->pc = 0x2799ACu;
    // 0x2799ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2799ACu;
    {
        const bool branch_taken_0x2799ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799ACu;
        // 0x2799b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799ac) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x2799B4u;
    // 0x2799b4: 0x0  nop
    ctx->pc = 0x2799b4u;
    // NOP
label_2799b8:
    // 0x2799b8: 0x1491024  and         $v0, $t2, $t1
    ctx->pc = 0x2799b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x2799bc: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x2799BCu;
    {
        const bool branch_taken_0x2799bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2799C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799BCu;
        // 0x2799c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799bc) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x2799C4u;
label_2799c4:
    // 0x2799c4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2799C4u;
    {
        const bool branch_taken_0x2799c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799C4u;
        // 0x2799c8: 0x1481024  and         $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799c4) {
            ctx->pc = 0x2799D4u;
            goto label_2799d4;
        }
    }
    ctx->pc = 0x2799CCu;
    // 0x2799cc: 0x14480006  bne         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2799CCu;
    {
        const bool branch_taken_0x2799cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2799D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799CCu;
        // 0x2799d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799cc) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x2799D4u;
label_2799d4:
    // 0x2799d4: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2799D4u;
    {
        const bool branch_taken_0x2799d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D4u;
        // 0x2799d8: 0x14f1024  and         $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799d4) {
            ctx->pc = 0x2799E4u;
            goto label_2799e4;
        }
    }
    ctx->pc = 0x2799DCu;
    // 0x2799dc: 0x144f0002  bne         $v0, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2799DCu;
    {
        const bool branch_taken_0x2799dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2799E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799DCu;
        // 0x2799e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799dc) {
            ctx->pc = 0x2799E8u;
            goto label_2799e8;
        }
    }
    ctx->pc = 0x2799E4u;
label_2799e4:
    // 0x2799e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2799e8:
    // 0x2799e8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2799e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2799ec:
    // 0x2799ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2799ECu;
    {
        const bool branch_taken_0x2799ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799ec) {
            ctx->pc = 0x2799F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799ECu;
            // 0x2799f0: 0x31a2000f  andi        $v0, $t5, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A08u;
            goto label_279a08;
        }
    }
    ctx->pc = 0x2799F4u;
    // 0x2799f4: 0x5a000009  blezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2799F4u;
    {
        const bool branch_taken_0x2799f4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2799f4) {
            ctx->pc = 0x2799F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799F4u;
            // 0x2799f8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A1Cu;
            goto label_279a1c;
        }
    }
    ctx->pc = 0x2799FCu;
    // 0x2799fc: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x2799fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x279a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279A00u;
    {
        const bool branch_taken_0x279a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A00u;
        // 0x279a04: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a00) {
            ctx->pc = 0x279A10u;
            goto label_279a10;
        }
    }
    ctx->pc = 0x279A08u;
label_279a08:
    // 0x279a08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279A08u;
    {
        const bool branch_taken_0x279a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A08u;
        // 0x279a0c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a08) {
            ctx->pc = 0x279A20u;
            goto label_279a20;
        }
    }
    ctx->pc = 0x279A10u;
label_279a10:
    // 0x279a10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x279a14: 0x641ff64  bgez        $s2, . + 4 + (-0x9C << 2)
    ctx->pc = 0x279A14u;
    {
        const bool branch_taken_0x279a14 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x279A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A14u;
        // 0x279a18: 0x18202a  slt         $a0, $zero, $t8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a14) {
            ctx->pc = 0x2797A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2797a8;
        }
    }
    ctx->pc = 0x279A1Cu;
label_279a1c:
    // 0x279a1c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x279a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_279a20:
    // 0x279a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279a2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279a30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x279a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279a34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x279a34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279a38: 0x3e00008  jr          $ra
    ctx->pc = 0x279A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A38u;
        // 0x279a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279A40u;
}
