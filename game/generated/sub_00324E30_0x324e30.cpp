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

// Function: sub_00324E30
// Address: 0x324e30 - 0x325328
void sub_00324E30_0x324e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E30_0x324e30");
#endif

    switch (ctx->pc) {
        case 0x324ed8u: goto label_324ed8;
        case 0x324f08u: goto label_324f08;
        case 0x324fe0u: goto label_324fe0;
        case 0x324fecu: goto label_324fec;
        case 0x325080u: goto label_325080;
        case 0x3250c0u: goto label_3250c0;
        case 0x32518cu: goto label_32518c;
        case 0x3251bcu: goto label_3251bc;
        default: break;
    }

    ctx->pc = 0x324e30u;

    // 0x324e30: 0x8f85ccb0  lw          $a1, -0x3350($gp)
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
    // 0x324e34: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x324e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x324e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e40: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x324e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x324e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324e48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x324E48u;
    {
        const bool branch_taken_0x324e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E48u;
        // 0x324e4c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e48) {
            ctx->pc = 0x324E80u;
            goto label_324e80;
        }
    }
    ctx->pc = 0x324E50u;
    // 0x324e50: 0x70401804  plzcw       $v1, $v0
    ctx->pc = 0x324e50u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x324e54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x324e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x324e58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x324e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x324e5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x324e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x324e60: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x324e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x324e64: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x324e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x324e68: 0x8f84ccb4  lw          $a0, -0x334C($gp)
    ctx->pc = 0x324e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x324e6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x324e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x324e70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x324e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x324e74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324e78: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x324e78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x324e7c: 0x64380b  movn        $a3, $v1, $a0
    ctx->pc = 0x324e7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_324e80:
    // 0x324e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324e84: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x324E84u;
    {
        const bool branch_taken_0x324e84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x324E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E84u;
        // 0x324e88: 0x8f83ccc0  lw          $v1, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e84) {
            ctx->pc = 0x324EB0u;
            goto label_324eb0;
        }
    }
    ctx->pc = 0x324E8Cu;
    // 0x324e8c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x324e90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x324e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x324e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324e98: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x324E98u;
    {
        const bool branch_taken_0x324e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324e98) {
            ctx->pc = 0x324E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324E98u;
            // 0x324e9c: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324EB4u;
            goto label_324eb4;
        }
    }
    ctx->pc = 0x324EA0u;
    // 0x324ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ea4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x324ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x324ea8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x324EA8u;
    {
        const bool branch_taken_0x324ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EA8u;
        // 0x324eac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ea8) {
            ctx->pc = 0x324FA4u;
            goto label_324fa4;
        }
    }
    ctx->pc = 0x324EB0u;
label_324eb0:
    // 0x324eb0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_324eb4:
    // 0x324eb4: 0x8f85cca8  lw          $a1, -0x3358($gp)
    ctx->pc = 0x324eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
    // 0x324eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x324eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324ec0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x324ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324ec4: 0x14e40008  bne         $a3, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x324EC4u;
    {
        const bool branch_taken_0x324ec4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x324EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EC4u;
        // 0x324ec8: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ec4) {
            ctx->pc = 0x324EE8u;
            goto label_324ee8;
        }
    }
    ctx->pc = 0x324ECCu;
    // 0x324ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324ECCu;
    {
        const bool branch_taken_0x324ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324ECCu;
        // 0x324ed0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ecc) {
            ctx->pc = 0x324EE8u;
            goto label_324ee8;
        }
    }
    ctx->pc = 0x324ED4u;
    // 0x324ed4: 0x0  nop
    ctx->pc = 0x324ed4u;
    // NOP
label_324ed8:
    // 0x324ed8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x324ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x324edc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x324EDCu;
    {
        const bool branch_taken_0x324edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EDCu;
        // 0x324ee0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324edc) {
            ctx->pc = 0x324F74u;
            goto label_324f74;
        }
    }
    ctx->pc = 0x324EE4u;
    // 0x324ee4: 0x0  nop
    ctx->pc = 0x324ee4u;
    // NOP
label_324ee8:
    // 0x324ee8: 0x8f83ccbc  lw          $v1, -0x3344($gp)
    ctx->pc = 0x324ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x324eec: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x324eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x324ef0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x324ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x324ef4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x324EF4u;
    {
        const bool branch_taken_0x324ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EF4u;
        // 0x324ef8: 0x8f82ccb8  lw          $v0, -0x3348($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ef4) {
            ctx->pc = 0x324F88u;
            goto label_324f88;
        }
    }
    ctx->pc = 0x324EFCu;
    // 0x324efc: 0x8f83ccac  lw          $v1, -0x3354($gp)
    ctx->pc = 0x324efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x324f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x324F00u;
    {
        const bool branch_taken_0x324f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F00u;
        // 0x324f04: 0x2408ffc0  addiu       $t0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f00) {
            ctx->pc = 0x324F14u;
            goto label_324f14;
        }
    }
    ctx->pc = 0x324F08u;
label_324f08:
    // 0x324f08: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x324F08u;
    {
        const bool branch_taken_0x324f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F08u;
        // 0x324f0c: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f08) {
            ctx->pc = 0x324ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ed8;
        }
    }
    ctx->pc = 0x324F10u;
    // 0x324f10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x324f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_324f14:
    // 0x324f14: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x324F14u;
    {
        const bool branch_taken_0x324f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324f14) {
            ctx->pc = 0x324F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324F14u;
            // 0x324f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324FC4u;
            goto label_324fc4;
        }
    }
    ctx->pc = 0x324F1Cu;
    // 0x324f1c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x324f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x324f20: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x324f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x324f24: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x324f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x324f28: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x324f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x324f2c: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x324f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x324f30: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x324F30u;
    {
        const bool branch_taken_0x324f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F30u;
        // 0x324f34: 0x2c820041  sltiu       $v0, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f30) {
            ctx->pc = 0x324F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f08;
        }
    }
    ctx->pc = 0x324F38u;
    // 0x324f38: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x324f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x324f3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324F3Cu;
    {
        const bool branch_taken_0x324f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324f3c) {
            ctx->pc = 0x324F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324F3Cu;
            // 0x324f40: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324F50u;
            goto label_324f50;
        }
    }
    ctx->pc = 0x324F44u;
    // 0x324f44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x324f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324f48: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x324f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x324f4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x324f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_324f50:
    // 0x324f50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x324F50u;
    {
        const bool branch_taken_0x324f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F50u;
        // 0x324f54: 0x8f82ccac  lw          $v0, -0x3354($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f50) {
            ctx->pc = 0x324F64u;
            goto label_324f64;
        }
    }
    ctx->pc = 0x324F58u;
    // 0x324f58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x324f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x324f5c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x324f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x324f60: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x324f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
label_324f64:
    // 0x324f64: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324F64u;
    {
        const bool branch_taken_0x324f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F64u;
        // 0x324f68: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f64) {
            ctx->pc = 0x324F74u;
            goto label_324f74;
        }
    }
    ctx->pc = 0x324F6Cu;
    // 0x324f6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x324f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x324f70: 0xaf82ccac  sw          $v0, -0x3354($gp)
    ctx->pc = 0x324f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 2));
label_324f74:
    // 0x324f74: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x324F74u;
    {
        const bool branch_taken_0x324f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f74) {
            ctx->pc = 0x324F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324F74u;
            // 0x324f78: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324FA8u;
            goto label_324fa8;
        }
    }
    ctx->pc = 0x324F7Cu;
    // 0x324f7c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x324F7Cu;
    {
        const bool branch_taken_0x324f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F7Cu;
        // 0x324f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f7c) {
            ctx->pc = 0x324FC4u;
            goto label_324fc4;
        }
    }
    ctx->pc = 0x324F84u;
    // 0x324f84: 0x0  nop
    ctx->pc = 0x324f84u;
    // NOP
label_324f88:
    // 0x324f88: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x324f8c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x324f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x324f90: 0xaf83ccbc  sw          $v1, -0x3344($gp)
    ctx->pc = 0x324f90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 3));
    // 0x324f94: 0x62202b  sltu        $a0, $v1, $v0
    ctx->pc = 0x324f94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x324f98: 0xaf86cca8  sw          $a2, -0x3358($gp)
    ctx->pc = 0x324f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 6));
    // 0x324f9c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x324f9cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x324fa0: 0xaf82ccb8  sw          $v0, -0x3348($gp)
    ctx->pc = 0x324fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954168), GPR_U32(ctx, 2));
label_324fa4:
    // 0x324fa4: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x324fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_324fa8:
    // 0x324fa8: 0x71827  nor         $v1, $zero, $a3
    ctx->pc = 0x324fa8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x324fac: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x324facu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x324fb0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x324fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x324fb4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x324fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x324fb8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x324fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x324fbc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x324fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x324fc0: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x324fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_324fc4:
    // 0x324fc4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x324fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x324fc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x324fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fcc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x324fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x324fd0: 0x24840f40  addiu       $a0, $a0, 0xF40
    ctx->pc = 0x324fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
    // 0x324fd4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x324fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x324fd8: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x324FD8u;
    SET_GPR_U32(ctx, 31, 0x324FE0u);
    ctx->pc = 0x324FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FD8u;
    // 0x324fdc: 0xaf82ccec  sw          $v0, -0x3314($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x324FD8u, 0x324FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FE0u;
label_324fe0:
    // 0x324fe0: 0x26040f00  addiu       $a0, $s0, 0xF00
    ctx->pc = 0x324fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x324fe4: 0xc0dd3ee  jal         func_374FB8
    ctx->pc = 0x324FE4u;
    SET_GPR_U32(ctx, 31, 0x324FECu);
    ctx->pc = 0x324FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FE4u;
    // 0x324fe8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374FB8u, 0x324FE4u, 0x324FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FECu;
label_324fec:
    // 0x324fec: 0x8f86ccb0  lw          $a2, -0x3350($gp)
    ctx->pc = 0x324fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
    // 0x324ff0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ff4: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x324ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x324ff8: 0xc21006  srlv        $v0, $v0, $a2
    ctx->pc = 0x324ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x324ffc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x324FFCu;
    {
        const bool branch_taken_0x324ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FFCu;
        // 0x325000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ffc) {
            ctx->pc = 0x325034u;
            goto label_325034;
        }
    }
    ctx->pc = 0x325004u;
    // 0x325004: 0x70401804  plzcw       $v1, $v0
    ctx->pc = 0x325004u;
    { uint64_t v = GPR_U64(ctx, 2); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x325008: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32500c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x325010: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x325010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x325014: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x325014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x325018: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x325018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x32501c: 0x8f84ccb4  lw          $a0, -0x334C($gp)
    ctx->pc = 0x32501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x325020: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x325020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325024: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x325024u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x325028: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x325028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32502c: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x32502cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x325030: 0x64380b  movn        $a3, $v1, $a0
    ctx->pc = 0x325030u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_325034:
    // 0x325034: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x325034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x325038: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x325038u;
    {
        const bool branch_taken_0x325038 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x32503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325038u;
        // 0x32503c: 0x8f83ccc0  lw          $v1, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325038) {
            ctx->pc = 0x325064u;
            goto label_325064;
        }
    }
    ctx->pc = 0x325040u;
    // 0x325040: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x325040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x325044: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x325044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32504c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32504Cu;
    {
        const bool branch_taken_0x32504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32504Cu;
        // 0x325050: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32504c) {
            ctx->pc = 0x325060u;
            goto label_325060;
        }
    }
    ctx->pc = 0x325054u;
    // 0x325054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x325054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x325058: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x325058u;
    {
        const bool branch_taken_0x325058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325058u;
        // 0x32505c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325058) {
            ctx->pc = 0x32515Cu;
            goto label_32515c;
        }
    }
    ctx->pc = 0x325060u;
label_325060:
    // 0x325060: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x325060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_325064:
    // 0x325064: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x325064u;
    {
        const bool branch_taken_0x325064 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x325068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325064u;
        // 0x325068: 0x8f85cca8  lw          $a1, -0x3358($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325064) {
            ctx->pc = 0x325090u;
            goto label_325090;
        }
    }
    ctx->pc = 0x32506Cu;
    // 0x32506c: 0x2503003f  addiu       $v1, $t0, 0x3F
    ctx->pc = 0x32506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x325070: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x325070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x325074: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x325074u;
    {
        const bool branch_taken_0x325074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325074u;
        // 0x325078: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325074) {
            ctx->pc = 0x3250A0u;
            goto label_3250a0;
        }
    }
    ctx->pc = 0x32507Cu;
    // 0x32507c: 0x0  nop
    ctx->pc = 0x32507cu;
    // NOP
label_325080:
    // 0x325080: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x325080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325084: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x325084u;
    {
        const bool branch_taken_0x325084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325084u;
        // 0x325088: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325084) {
            ctx->pc = 0x32512Cu;
            goto label_32512c;
        }
    }
    ctx->pc = 0x32508Cu;
    // 0x32508c: 0x0  nop
    ctx->pc = 0x32508cu;
    // NOP
label_325090:
    // 0x325090: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x325090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x325094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x325098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32509c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x32509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3250a0:
    // 0x3250a0: 0x8f83ccbc  lw          $v1, -0x3344($gp)
    ctx->pc = 0x3250a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x3250a4: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x3250a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3250a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3250a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3250ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3250ACu;
    {
        const bool branch_taken_0x3250ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250ACu;
        // 0x3250b0: 0x8f82ccb8  lw          $v0, -0x3348($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250ac) {
            ctx->pc = 0x325140u;
            goto label_325140;
        }
    }
    ctx->pc = 0x3250B4u;
    // 0x3250b4: 0x8f83ccac  lw          $v1, -0x3354($gp)
    ctx->pc = 0x3250b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x3250b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3250B8u;
    {
        const bool branch_taken_0x3250b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250B8u;
        // 0x3250bc: 0x2409ffc0  addiu       $t1, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250b8) {
            ctx->pc = 0x3250CCu;
            goto label_3250cc;
        }
    }
    ctx->pc = 0x3250C0u;
label_3250c0:
    // 0x3250c0: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3250C0u;
    {
        const bool branch_taken_0x3250c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250C0u;
        // 0x3250c4: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250c0) {
            ctx->pc = 0x325080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325080;
        }
    }
    ctx->pc = 0x3250C8u;
    // 0x3250c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3250c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3250cc:
    // 0x3250cc: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x3250CCu;
    {
        const bool branch_taken_0x3250cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3250cc) {
            ctx->pc = 0x3250D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3250CCu;
            // 0x3250d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325178u;
            goto label_325178;
        }
    }
    ctx->pc = 0x3250D4u;
    // 0x3250d4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x3250d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3250d8: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x3250d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x3250dc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3250dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3250e0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3250e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3250e4: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x3250e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3250e8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3250E8u;
    {
        const bool branch_taken_0x3250e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E8u;
        // 0x3250ec: 0x2c820041  sltiu       $v0, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250e8) {
            ctx->pc = 0x3250C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3250c0;
        }
    }
    ctx->pc = 0x3250F0u;
    // 0x3250f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3250f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3250f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3250F4u;
    {
        const bool branch_taken_0x3250f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3250f4) {
            ctx->pc = 0x3250F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3250F4u;
            // 0x3250f8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325108u;
            goto label_325108;
        }
    }
    ctx->pc = 0x3250FCu;
    // 0x3250fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3250fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325100: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x325100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x325104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_325108:
    // 0x325108: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325108u;
    {
        const bool branch_taken_0x325108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325108u;
        // 0x32510c: 0x8f82ccac  lw          $v0, -0x3354($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325108) {
            ctx->pc = 0x32511Cu;
            goto label_32511c;
        }
    }
    ctx->pc = 0x325110u;
    // 0x325110: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x325110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x325114: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x325114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x325118: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x325118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
label_32511c:
    // 0x32511c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32511Cu;
    {
        const bool branch_taken_0x32511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x325120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32511Cu;
        // 0x325120: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32511c) {
            ctx->pc = 0x32512Cu;
            goto label_32512c;
        }
    }
    ctx->pc = 0x325124u;
    // 0x325124: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x325124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325128: 0xaf82ccac  sw          $v0, -0x3354($gp)
    ctx->pc = 0x325128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 2));
label_32512c:
    // 0x32512c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32512Cu;
    {
        const bool branch_taken_0x32512c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32512c) {
            ctx->pc = 0x325130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32512Cu;
            // 0x325130: 0x71027  nor         $v0, $zero, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325160u;
            goto label_325160;
        }
    }
    ctx->pc = 0x325134u;
    // 0x325134: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x325134u;
    {
        const bool branch_taken_0x325134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325134u;
        // 0x325138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325134) {
            ctx->pc = 0x325178u;
            goto label_325178;
        }
    }
    ctx->pc = 0x32513Cu;
    // 0x32513c: 0x0  nop
    ctx->pc = 0x32513cu;
    // NOP
label_325140:
    // 0x325140: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x325140u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x325144: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x325148: 0xaf83ccbc  sw          $v1, -0x3344($gp)
    ctx->pc = 0x325148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 3));
    // 0x32514c: 0x62202b  sltu        $a0, $v1, $v0
    ctx->pc = 0x32514cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x325150: 0xaf86cca8  sw          $a2, -0x3358($gp)
    ctx->pc = 0x325150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 6));
    // 0x325154: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x325154u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x325158: 0xaf82ccb8  sw          $v0, -0x3348($gp)
    ctx->pc = 0x325158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954168), GPR_U32(ctx, 2));
label_32515c:
    // 0x32515c: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x32515cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
label_325160:
    // 0x325160: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x325160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x325164: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x325164u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x325168: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x325168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x32516c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x32516cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x325170: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x325170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x325174: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x325174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_325178:
    // 0x325178: 0x26040f00  addiu       $a0, $s0, 0xF00
    ctx->pc = 0x325178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x32517c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32517cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325180: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x325180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x325184: 0xc0dd3f8  jal         func_374FE0
    ctx->pc = 0x325184u;
    SET_GPR_U32(ctx, 31, 0x32518Cu);
    ctx->pc = 0x325188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325184u;
    // 0x325188: 0xaf82cce8  sw          $v0, -0x3318($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374FE0u, 0x325184u, 0x32518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32518Cu;
label_32518c:
    // 0x32518c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32518cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x325190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325194: 0x3e00008  jr          $ra
    ctx->pc = 0x325194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325194u;
        // 0x325198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32519Cu;
    // 0x32519c: 0x0  nop
    ctx->pc = 0x32519cu;
    // NOP
    // 0x3251a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3251a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3251a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3251a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3251a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3251a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3251ac: 0x24840f40  addiu       $a0, $a0, 0xF40
    ctx->pc = 0x3251acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
    // 0x3251b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3251b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3251b4: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x3251B4u;
    SET_GPR_U32(ctx, 31, 0x3251BCu);
    ctx->pc = 0x3251B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251B4u;
    // 0x3251b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x3251B4u, 0x3251BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251BCu;
label_3251bc:
    // 0x3251bc: 0x8f82cce8  lw          $v0, -0x3318($gp)
    ctx->pc = 0x3251bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954216)));
    // 0x3251c0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3251C0u;
    {
        const bool branch_taken_0x3251c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251C0u;
        // 0x3251c4: 0x2446ffc0  addiu       $a2, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251c0) {
            ctx->pc = 0x32526Cu;
            goto label_32526c;
        }
    }
    ctx->pc = 0x3251C8u;
    // 0x3251c8: 0x8f87ccb4  lw          $a3, -0x334C($gp)
    ctx->pc = 0x3251c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x3251cc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3251d0: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3251d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3251d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3251D4u;
    {
        const bool branch_taken_0x3251d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3251D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251D4u;
        // 0x3251d8: 0x8f82ccb0  lw          $v0, -0x3350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251d4) {
            ctx->pc = 0x3251F0u;
            goto label_3251f0;
        }
    }
    ctx->pc = 0x3251DCu;
    // 0x3251dc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x3251dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x3251e0: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x3251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3251e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3251e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3251e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3251E8u;
    {
        const bool branch_taken_0x3251e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251E8u;
        // 0x3251ec: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251e8) {
            ctx->pc = 0x325204u;
            goto label_325204;
        }
    }
    ctx->pc = 0x3251F0u;
label_3251f0:
    // 0x3251f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3251f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3251f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3251f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3251f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3251f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3251fc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x3251fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x325200: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x325200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_325204:
    // 0x325204: 0x8f83cca8  lw          $v1, -0x3358($gp)
    ctx->pc = 0x325204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
    // 0x325208: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x32520c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32520Cu;
    {
        const bool branch_taken_0x32520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x325210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32520Cu;
        // 0x325210: 0x87102b  sltu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32520c) {
            ctx->pc = 0x325228u;
            goto label_325228;
        }
    }
    ctx->pc = 0x325214u;
    // 0x325214: 0x8f82ccbc  lw          $v0, -0x3344($gp)
    ctx->pc = 0x325214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x325218: 0xaf86cca8  sw          $a2, -0x3358($gp)
    ctx->pc = 0x325218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 6));
    // 0x32521c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x325220: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x325220u;
    {
        const bool branch_taken_0x325220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325220u;
        // 0x325224: 0xaf82ccbc  sw          $v0, -0x3344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325220) {
            ctx->pc = 0x32526Cu;
            goto label_32526c;
        }
    }
    ctx->pc = 0x325228u;
label_325228:
    // 0x325228: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x325228u;
    {
        const bool branch_taken_0x325228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325228u;
        // 0x32522c: 0x8f82ccc0  lw          $v0, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325228) {
            ctx->pc = 0x325250u;
            goto label_325250;
        }
    }
    ctx->pc = 0x325230u;
    // 0x325230: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x325230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x325234: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x325234u;
    {
        const bool branch_taken_0x325234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325234) {
            ctx->pc = 0x325238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325234u;
            // 0x325238: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32523Cu;
            goto label_32523c;
        }
    }
    ctx->pc = 0x32523Cu;
label_32523c:
    // 0x32523c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x32523cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x325240: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x325240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x325244: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x325244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x325248: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325248u;
    {
        const bool branch_taken_0x325248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325248u;
        // 0x32524c: 0xaf86ccac  sw          $a2, -0x3354($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325248) {
            ctx->pc = 0x32526Cu;
            goto label_32526c;
        }
    }
    ctx->pc = 0x325250u;
label_325250:
    // 0x325250: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x325250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x325254: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32525c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32525cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x325260: 0x8f82ccc0  lw          $v0, -0x3340($gp)
    ctx->pc = 0x325260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
    // 0x325264: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325268: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x325268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_32526c:
    // 0x32526c: 0x8f82ccec  lw          $v0, -0x3314($gp)
    ctx->pc = 0x32526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954220)));
    // 0x325270: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x325270u;
    {
        const bool branch_taken_0x325270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325270u;
        // 0x325274: 0x2446ffc0  addiu       $a2, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325270) {
            ctx->pc = 0x32531Cu;
            goto label_32531c;
        }
    }
    ctx->pc = 0x325278u;
    // 0x325278: 0x8f87ccb4  lw          $a3, -0x334C($gp)
    ctx->pc = 0x325278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954164)));
    // 0x32527c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x32527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x325280: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x325280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x325284: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325284u;
    {
        const bool branch_taken_0x325284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325284u;
        // 0x325288: 0x8f82ccb0  lw          $v0, -0x3350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325284) {
            ctx->pc = 0x3252A0u;
            goto label_3252a0;
        }
    }
    ctx->pc = 0x32528Cu;
    // 0x32528c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x32528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x325290: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x325290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x325294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x325294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x325298: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x325298u;
    {
        const bool branch_taken_0x325298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325298u;
        // 0x32529c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325298) {
            ctx->pc = 0x3252B4u;
            goto label_3252b4;
        }
    }
    ctx->pc = 0x3252A0u;
label_3252a0:
    // 0x3252a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3252a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3252a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3252a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3252a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3252a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3252ac: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x3252acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3252b0: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x3252b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_3252b4:
    // 0x3252b4: 0x8f83cca8  lw          $v1, -0x3358($gp)
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954152)));
    // 0x3252b8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x3252b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3252bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3252BCu;
    {
        const bool branch_taken_0x3252bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3252C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252BCu;
        // 0x3252c0: 0x87102b  sltu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252bc) {
            ctx->pc = 0x3252D8u;
            goto label_3252d8;
        }
    }
    ctx->pc = 0x3252C4u;
    // 0x3252c4: 0x8f82ccbc  lw          $v0, -0x3344($gp)
    ctx->pc = 0x3252c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954172)));
    // 0x3252c8: 0xaf86cca8  sw          $a2, -0x3358($gp)
    ctx->pc = 0x3252c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294954152), GPR_U32(ctx, 6));
    // 0x3252cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3252ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3252d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3252D0u;
    {
        const bool branch_taken_0x3252d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252D0u;
        // 0x3252d4: 0xaf82ccbc  sw          $v0, -0x3344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252d0) {
            ctx->pc = 0x32531Cu;
            goto label_32531c;
        }
    }
    ctx->pc = 0x3252D8u;
label_3252d8:
    // 0x3252d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3252D8u;
    {
        const bool branch_taken_0x3252d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252D8u;
        // 0x3252dc: 0x8f82ccc0  lw          $v0, -0x3340($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252d8) {
            ctx->pc = 0x325300u;
            goto label_325300;
        }
    }
    ctx->pc = 0x3252E0u;
    // 0x3252e0: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x3252e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x3252e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3252E4u;
    {
        const bool branch_taken_0x3252e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3252e4) {
            ctx->pc = 0x3252E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3252E4u;
            // 0x3252e8: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3252ECu;
            goto label_3252ec;
        }
    }
    ctx->pc = 0x3252ECu;
label_3252ec:
    // 0x3252ec: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3252ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x3252f0: 0x8f82ccac  lw          $v0, -0x3354($gp)
    ctx->pc = 0x3252f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954156)));
    // 0x3252f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3252f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3252f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3252F8u;
    {
        const bool branch_taken_0x3252f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3252FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3252F8u;
        // 0x3252fc: 0xaf86ccac  sw          $a2, -0x3354($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954156), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3252f8) {
            ctx->pc = 0x32531Cu;
            goto label_32531c;
        }
    }
    ctx->pc = 0x325300u;
label_325300:
    // 0x325300: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x325300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x325304: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x325304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32530c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32530cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x325310: 0x8f82ccc0  lw          $v0, -0x3340($gp)
    ctx->pc = 0x325310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954176)));
    // 0x325314: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x325314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x325318: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x325318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_32531c:
    // 0x32531c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325320: 0x3e00008  jr          $ra
    ctx->pc = 0x325320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325320u;
        // 0x325324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325328u;
}
