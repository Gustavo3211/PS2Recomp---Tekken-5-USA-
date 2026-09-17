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

// Function: sub_00490CA8
// Address: 0x490ca8 - 0x490f60
void sub_00490CA8_0x490ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490CA8_0x490ca8");
#endif

    switch (ctx->pc) {
        case 0x490ce0u: goto label_490ce0;
        case 0x490cf0u: goto label_490cf0;
        case 0x490e48u: goto label_490e48;
        case 0x490e6cu: goto label_490e6c;
        default: break;
    }

    ctx->pc = 0x490ca8u;

    // 0x490ca8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x490ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x490cac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x490cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x490cb0: 0x3c13007e  lui         $s3, 0x7E
    ctx->pc = 0x490cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)126 << 16));
    // 0x490cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x490cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x490cb8: 0x267014e0  addiu       $s0, $s3, 0x14E0
    ctx->pc = 0x490cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5344));
    // 0x490cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x490cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x490cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x490cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x490cc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x490cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x490cc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x490cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x490ccc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x490cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x490cd0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x490cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x490cd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x490cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x490cd8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x490CD8u;
    SET_GPR_U32(ctx, 31, 0x490CE0u);
    ctx->pc = 0x490CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490CD8u;
    // 0x490cdc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x490CD8u, 0x490CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490CE0u;
label_490ce0:
    // 0x490ce0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x490ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490ce4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x490ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x490ce8: 0xc128b6e  jal         func_4A2DB8
    ctx->pc = 0x490CE8u;
    SET_GPR_U32(ctx, 31, 0x490CF0u);
    ctx->pc = 0x490CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490CE8u;
    // 0x490cec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2DB8u, 0x490CE8u, 0x490CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490CF0u;
label_490cf0:
    // 0x490cf0: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x490CF0u;
    {
        const bool branch_taken_0x490cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CF0u;
        // 0x490cf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490cf0) {
            ctx->pc = 0x490F34u;
            goto label_490f34;
        }
    }
    ctx->pc = 0x490CF8u;
    // 0x490cf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x490cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490cfc: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x490cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x490d00: 0x240b0158  addiu       $t3, $zero, 0x158
    ctx->pc = 0x490d00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x490d04: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x490d04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490d08: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x490d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x490d0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x490d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x490d10: 0x2682d680  addiu       $v0, $s4, -0x2980
    ctx->pc = 0x490d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x490d14: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x490d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x490d18: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x490d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x490d1c: 0x8647011e  lh          $a3, 0x11E($s2)
    ctx->pc = 0x490d1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 286)));
    // 0x490d20: 0x246a000a  addiu       $t2, $v1, 0xA
    ctx->pc = 0x490d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x490d24: 0x94440092  lhu         $a0, 0x92($v0)
    ctx->pc = 0x490d24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72D712u));
    // 0x490d28: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x490d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x490d2c: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x490d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
    // 0x490d30: 0x24090580  addiu       $t1, $zero, 0x580
    ctx->pc = 0x490d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x490d34: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x490d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x490d38: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x490d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x490d3c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x490d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x490d40: 0x262c000e  addiu       $t4, $s1, 0xE
    ctx->pc = 0x490d40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
    // 0x490d44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x490d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x490d48: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x490d48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x490d4c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x490d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x490d50: 0xa4ab0000  sh          $t3, 0x0($a1)
    ctx->pc = 0x490d50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x490d54: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x490d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x490d58: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x490d58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x490d5c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x490d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x490d60: 0xa4e90000  sh          $t1, 0x0($a3)
    ctx->pc = 0x490d60u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x490d64: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x490d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x490d68: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x490d68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x490d6c: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x490d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x490d70: 0x21023  negu        $v0, $v0
    ctx->pc = 0x490d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x490d74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x490d78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x490D78u;
    {
        const bool branch_taken_0x490d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D78u;
        // 0x490d7c: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d78) {
            ctx->pc = 0x490D90u;
            goto label_490d90;
        }
    }
    ctx->pc = 0x490D80u;
    // 0x490d80: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x490d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x490d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x490D84u;
    {
        const bool branch_taken_0x490d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490D84u;
        // 0x490d88: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490d84) {
            ctx->pc = 0x490D94u;
            goto label_490d94;
        }
    }
    ctx->pc = 0x490D8Cu;
    // 0x490d8c: 0x0  nop
    ctx->pc = 0x490d8cu;
    // NOP
label_490d90:
    // 0x490d90: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x490d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_490d94:
    // 0x490d94: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x490d94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490d98: 0x266414e0  addiu       $a0, $s3, 0x14E0
    ctx->pc = 0x490d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5344));
    // 0x490d9c: 0x24087fff  addiu       $t0, $zero, 0x7FFF
    ctx->pc = 0x490d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x490da0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x490da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x490da4: 0x26290016  addiu       $t1, $s1, 0x16
    ctx->pc = 0x490da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
    // 0x490da8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x490da8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x490dac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x490dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x490db0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x490db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x490db4: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x490db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x490db8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x490db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x490dbc: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x490dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490dc0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x490dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x490dc4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x490dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x490dc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x490dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x490dcc: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x490dccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x490dd0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x490dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x490dd4: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x490dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x490dd8: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x490dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x490ddc: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x490ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x490de0: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x490de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x490de4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x490de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x490de8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x490dec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x490DECu;
    {
        const bool branch_taken_0x490dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x490DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DECu;
        // 0x490df0: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490dec) {
            ctx->pc = 0x490E00u;
            goto label_490e00;
        }
    }
    ctx->pc = 0x490DF4u;
    // 0x490df4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x490df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x490df8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x490DF8u;
    {
        const bool branch_taken_0x490df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x490DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490DF8u;
        // 0x490dfc: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490df8) {
            ctx->pc = 0x490E04u;
            goto label_490e04;
        }
    }
    ctx->pc = 0x490E00u;
label_490e00:
    // 0x490e00: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x490e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_490e04:
    // 0x490e04: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x490e04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490e08: 0x267614e0  addiu       $s6, $s3, 0x14E0
    ctx->pc = 0x490e08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 5344));
    // 0x490e0c: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x490e0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x490e10: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x490e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x490e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x490e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x490e18: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x490e18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x490e1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x490e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x490e20: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x490e20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x490e24: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x490e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x490e28: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x490e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490e2c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x490e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x490e30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x490e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490e34: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x490e34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x490e38: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x490e38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x490e3c: 0xa4d70000  sh          $s7, 0x0($a2)
    ctx->pc = 0x490e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x490e40: 0xc128b6e  jal         func_4A2DB8
    ctx->pc = 0x490E40u;
    SET_GPR_U32(ctx, 31, 0x490E48u);
    ctx->pc = 0x490E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E40u;
    // 0x490e44: 0xaec70000  sw          $a3, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2DB8u, 0x490E40u, 0x490E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E48u;
label_490e48:
    // 0x490e48: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x490E48u;
    {
        const bool branch_taken_0x490e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x490E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490E48u;
        // 0x490e4c: 0x2643011a  addiu       $v1, $s2, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490e48) {
            ctx->pc = 0x490F34u;
            goto label_490f34;
        }
    }
    ctx->pc = 0x490E50u;
    // 0x490e50: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x490e50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x490e54: 0x24e20100  addiu       $v0, $a3, 0x100
    ctx->pc = 0x490e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x490e58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x490e5c: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x490e5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490e60: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x490e60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x490e64: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x490E64u;
    SET_GPR_U32(ctx, 31, 0x490E6Cu);
    ctx->pc = 0x490E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490E64u;
    // 0x490e68: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x490E64u, 0x490E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490E6Cu;
label_490e6c:
    // 0x490e6c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x490e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x490e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x490e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x490e74: 0x2685d680  addiu       $a1, $s4, -0x2980
    ctx->pc = 0x490e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x490e78: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x490e78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x490e7c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x490e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x490e80: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x490e80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x490e84: 0x24680002  addiu       $t0, $v1, 0x2
    ctx->pc = 0x490e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x490e88: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x490e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x490e8c: 0x246a0006  addiu       $t2, $v1, 0x6
    ctx->pc = 0x490e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x490e90: 0x94a40092  lhu         $a0, 0x92($a1)
    ctx->pc = 0x490e90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x490e94: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x490e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x490e98: 0x86470118  lh          $a3, 0x118($s2)
    ctx->pc = 0x490e98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x490e9c: 0x24720014  addiu       $s2, $v1, 0x14
    ctx->pc = 0x490e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x490ea0: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x490ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x490ea4: 0x246c000a  addiu       $t4, $v1, 0xA
    ctx->pc = 0x490ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x490ea8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x490ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x490eac: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x490eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x490eb0: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x490eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x490eb4: 0x246d000c  addiu       $t5, $v1, 0xC
    ctx->pc = 0x490eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x490eb8: 0x246e000e  addiu       $t6, $v1, 0xE
    ctx->pc = 0x490eb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x490ebc: 0x246f0010  addiu       $t7, $v1, 0x10
    ctx->pc = 0x490ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x490ec0: 0x24710012  addiu       $s1, $v1, 0x12
    ctx->pc = 0x490ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x490ec4: 0x24730016  addiu       $s3, $v1, 0x16
    ctx->pc = 0x490ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x490ec8: 0x24750018  addiu       $s5, $v1, 0x18
    ctx->pc = 0x490ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x490ecc: 0x2406ff35  addiu       $a2, $zero, -0xCB
    ctx->pc = 0x490eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
    // 0x490ed0: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x490ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x490ed4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x490ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x490ed8: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x490ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x490edc: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x490edcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x490ee0: 0xaec90000  sw          $t1, 0x0($s6)
    ctx->pc = 0x490ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 9));
    // 0x490ee4: 0xa5250000  sh          $a1, 0x0($t1)
    ctx->pc = 0x490ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x490ee8: 0xaeca0000  sw          $t2, 0x0($s6)
    ctx->pc = 0x490ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 10));
    // 0x490eec: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x490eecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x490ef0: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x490ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x490ef4: 0xa5670000  sh          $a3, 0x0($t3)
    ctx->pc = 0x490ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x490ef8: 0xaecc0000  sw          $t4, 0x0($s6)
    ctx->pc = 0x490ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 12));
    // 0x490efc: 0xa5900000  sh          $s0, 0x0($t4)
    ctx->pc = 0x490efcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x490f00: 0xaecd0000  sw          $t5, 0x0($s6)
    ctx->pc = 0x490f00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 13));
    // 0x490f04: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x490f04u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490f08: 0xaece0000  sw          $t6, 0x0($s6)
    ctx->pc = 0x490f08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 14));
    // 0x490f0c: 0xa5d00000  sh          $s0, 0x0($t6)
    ctx->pc = 0x490f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x490f10: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x490f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x490f14: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x490f14u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490f18: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x490f18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
    // 0x490f1c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x490f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x490f20: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x490f20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x490f24: 0xa6540000  sh          $s4, 0x0($s2)
    ctx->pc = 0x490f24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x490f28: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x490f28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x490f2c: 0xa6770000  sh          $s7, 0x0($s3)
    ctx->pc = 0x490f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x490f30: 0xaed50000  sw          $s5, 0x0($s6)
    ctx->pc = 0x490f30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
label_490f34:
    // 0x490f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x490f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x490f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x490f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x490f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x490f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490f44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x490f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490f48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x490f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490f4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x490f4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490f50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x490f50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x490f54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x490f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490f58: 0x3e00008  jr          $ra
    ctx->pc = 0x490F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490F58u;
        // 0x490f5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490F60u;
}
