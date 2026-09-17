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

// Function: sub_00511CC0
// Address: 0x511cc0 - 0x511ea0
void sub_00511CC0_0x511cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511CC0_0x511cc0");
#endif

    switch (ctx->pc) {
        case 0x511d48u: goto label_511d48;
        case 0x511decu: goto label_511dec;
        case 0x511e34u: goto label_511e34;
        default: break;
    }

    ctx->pc = 0x511cc0u;

    // 0x511cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x511cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x511cc4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x511cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x511cc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x511cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x511ccc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x511cccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x511cd0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x511cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x511cd4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x511cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x511cd8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x511cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x511cdc: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x511cdcu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x511ce0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x511ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x511ce4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x511ce4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511ce8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x511ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x511cec: 0x249e002a  addiu       $fp, $a0, 0x2A
    ctx->pc = 0x511cecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 42));
    // 0x511cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x511cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x511cf4: 0x99403  sra         $s2, $t1, 16
    ctx->pc = 0x511cf4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 16));
    // 0x511cf8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x511cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x511cfc: 0xaac03  sra         $s5, $t2, 16
    ctx->pc = 0x511cfcu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 10), 16));
    // 0x511d00: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x511d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x511d04: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x511d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x511d08: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x511d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x511d0c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x511d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x511d10: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x511d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x511d14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x511d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x511d18: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x511d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x511d1c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x511d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x511d20: 0x87c50000  lh          $a1, 0x0($fp)
    ctx->pc = 0x511d20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x511d24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x511d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x511d28: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x511d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x511d2c: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x511d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x511d30: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x511d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x511d34: 0x84940028  lh          $s4, 0x28($a0)
    ctx->pc = 0x511d34u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x511d38: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x511d38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511d3c: 0x6c00043  bltz        $s6, . + 4 + (0x43 << 2)
    ctx->pc = 0x511D3Cu;
    {
        const bool branch_taken_0x511d3c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x511D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511D3Cu;
        // 0x511d40: 0x8490002c  lh          $s0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d3c) {
            ctx->pc = 0x511E4Cu;
            goto label_511e4c;
        }
    }
    ctx->pc = 0x511D44u;
    // 0x511d44: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x511d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_511d48:
    // 0x511d48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511d4c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x511d4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511d50: 0x4c10013  bgez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x511D50u;
    {
        const bool branch_taken_0x511d50 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x511D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511D50u;
        // 0x511d54: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d50) {
            ctx->pc = 0x511DA0u;
            goto label_511da0;
        }
    }
    ctx->pc = 0x511D58u;
    // 0x511d58: 0x30c81fff  andi        $t0, $a2, 0x1FFF
    ctx->pc = 0x511d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8191);
    // 0x511d5c: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x511d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x511d60: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x511d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x511d64: 0x81823  negu        $v1, $t0
    ctx->pc = 0x511d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x511d68: 0x28c4c000  slti        $a0, $a2, -0x4000
    ctx->pc = 0x511d68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294950912) ? 1 : 0);
    // 0x511d6c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x511D6Cu;
    {
        const bool branch_taken_0x511d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x511D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511D6Cu;
        // 0x511d70: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d6c) {
            ctx->pc = 0x511D88u;
            goto label_511d88;
        }
    }
    ctx->pc = 0x511D74u;
    // 0x511d74: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x511d74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511d78: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x511d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x511d7c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x511D7Cu;
    {
        const bool branch_taken_0x511d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511D7Cu;
        // 0x511d80: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d7c) {
            ctx->pc = 0x511E34u;
            goto label_511e34;
        }
    }
    ctx->pc = 0x511D84u;
    // 0x511d84: 0x0  nop
    ctx->pc = 0x511d84u;
    // NOP
label_511d88:
    // 0x511d88: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x511d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x511d8c: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x511d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x511d90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511d94: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x511d94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x511d98: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x511D98u;
    {
        const bool branch_taken_0x511d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511D98u;
        // 0x511d9c: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511d98) {
            ctx->pc = 0x511E34u;
            goto label_511e34;
        }
    }
    ctx->pc = 0x511DA0u;
label_511da0:
    // 0x511da0: 0x680001d  bltz        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x511DA0u;
    {
        const bool branch_taken_0x511da0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x511DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511DA0u;
        // 0x511da4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511da0) {
            ctx->pc = 0x511E18u;
            goto label_511e18;
        }
    }
    ctx->pc = 0x511DA8u;
    // 0x511da8: 0x23602  srl         $a2, $v0, 24
    ctx->pc = 0x511da8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x511dac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x511dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x511db0: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x511DB0u;
    {
        const bool branch_taken_0x511db0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x511DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511DB0u;
        // 0x511db4: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511db0) {
            ctx->pc = 0x511DC8u;
            goto label_511dc8;
        }
    }
    ctx->pc = 0x511DB8u;
    // 0x511db8: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x511db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511dbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x511dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x511dc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x511DC0u;
    {
        const bool branch_taken_0x511dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511DC0u;
        // 0x511dc4: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511dc0) {
            ctx->pc = 0x511DECu;
            goto label_511dec;
        }
    }
    ctx->pc = 0x511DC8u;
label_511dc8:
    // 0x511dc8: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x511dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x511dcc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x511dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x511dd0: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x511dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x511dd4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x511dd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x511dd8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x511dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511ddc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x511ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511de0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x511de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511de4: 0xc1446fe  jal         func_511BF8
    ctx->pc = 0x511DE4u;
    SET_GPR_U32(ctx, 31, 0x511DECu);
    ctx->pc = 0x511DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511DE4u;
    // 0x511de8: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511BF8u, 0x511DE4u, 0x511DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511DECu;
label_511dec:
    // 0x511dec: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x511decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x511df0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x511df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x511df4: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x511DF4u;
    {
        const bool branch_taken_0x511df4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x511DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511DF4u;
        // 0x511df8: 0xd41021  addu        $v0, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511df4) {
            ctx->pc = 0x511E10u;
            goto label_511e10;
        }
    }
    ctx->pc = 0x511DFCu;
    // 0x511dfc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x511dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511e00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x511e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x511e04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x511E04u;
    {
        const bool branch_taken_0x511e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511E04u;
        // 0x511e08: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511e04) {
            ctx->pc = 0x511E34u;
            goto label_511e34;
        }
    }
    ctx->pc = 0x511E0Cu;
    // 0x511e0c: 0x0  nop
    ctx->pc = 0x511e0cu;
    // NOP
label_511e10:
    // 0x511e10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511e14: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x511e14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_511e18:
    // 0x511e18: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x511e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x511e1c: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x511e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x511e20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x511e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511e24: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x511e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511e28: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x511e28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511e2c: 0xc1446fe  jal         func_511BF8
    ctx->pc = 0x511E2Cu;
    SET_GPR_U32(ctx, 31, 0x511E34u);
    ctx->pc = 0x511E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511E2Cu;
    // 0x511e30: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511BF8u, 0x511E2Cu, 0x511E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511E34u;
label_511e34:
    // 0x511e34: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x511e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x511e38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511e3c: 0x2bc03  sra         $s7, $v0, 16
    ctx->pc = 0x511e3cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 16));
    // 0x511e40: 0x2d7182a  slt         $v1, $s6, $s7
    ctx->pc = 0x511e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x511e44: 0x5060ffc0  beql        $v1, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x511E44u;
    {
        const bool branch_taken_0x511e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x511e44) {
            ctx->pc = 0x511E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511E44u;
            // 0x511e48: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511d48;
        }
    }
    ctx->pc = 0x511E4Cu;
label_511e4c:
    // 0x511e4c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x511e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x511e50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x511e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x511e54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x511e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511e58: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x511e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    // 0x511e5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x511e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x511e60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x511e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x511e64: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x511e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x511e68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x511e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x511e6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x511e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x511e70: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x511e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x511e74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x511e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x511e78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x511e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x511e7c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x511e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x511e80: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x511e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x511e84: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x511e84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x511e88: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x511e88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x511e8c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x511e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x511e90: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x511e90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x511e94: 0x3e00008  jr          $ra
    ctx->pc = 0x511E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511E94u;
        // 0x511e98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511E9Cu;
    // 0x511e9c: 0x0  nop
    ctx->pc = 0x511e9cu;
    // NOP
    ctx->pc = 0x511ea0u;
}
