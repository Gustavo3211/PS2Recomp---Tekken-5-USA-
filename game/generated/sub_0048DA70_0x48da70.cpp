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

// Function: sub_0048DA70
// Address: 0x48da70 - 0x48dc00
void sub_0048DA70_0x48da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DA70_0x48da70");
#endif

    switch (ctx->pc) {
        case 0x48daf4u: goto label_48daf4;
        case 0x48db08u: goto label_48db08;
        case 0x48db48u: goto label_48db48;
        default: break;
    }

    ctx->pc = 0x48da70u;

    // 0x48da70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48da74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48da78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48da78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48da7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48da80: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x48da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x48da84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48da88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48da8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48da90: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x48da90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48da94: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x48DA94u;
    {
        const bool branch_taken_0x48da94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA94u;
        // 0x48da98: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48da94) {
            ctx->pc = 0x48DAE0u;
            goto label_48dae0;
        }
    }
    ctx->pc = 0x48DA9Cu;
    // 0x48da9c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x48da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48daa0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48daa4: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48DAA4u;
    {
        const bool branch_taken_0x48daa4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DAA4u;
        // 0x48daa8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48daa4) {
            ctx->pc = 0x48DAE0u;
            goto label_48dae0;
        }
    }
    ctx->pc = 0x48DAACu;
    // 0x48daac: 0x2612003c  addiu       $s2, $s0, 0x3C
    ctx->pc = 0x48daacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x48dab0: 0x26040032  addiu       $a0, $s0, 0x32
    ctx->pc = 0x48dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x48dab4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x48dab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48dab8: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x48dab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x48dabc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x48dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x48dac0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x48dac0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48dac4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x48dac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48dac8: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x48dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x48dacc: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x48daccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48dad0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x48dad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48dad4: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x48dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x48dad8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48DAD8u;
    {
        const bool branch_taken_0x48dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DAD8u;
        // 0x48dadc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dad8) {
            ctx->pc = 0x48DAECu;
            goto label_48daec;
        }
    }
    ctx->pc = 0x48DAE0u;
label_48dae0:
    // 0x48dae0: 0x2612003c  addiu       $s2, $s0, 0x3C
    ctx->pc = 0x48dae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x48dae4: 0x26040032  addiu       $a0, $s0, 0x32
    ctx->pc = 0x48dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x48dae8: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x48dae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_48daec:
    // 0x48daec: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48DAECu;
    SET_GPR_U32(ctx, 31, 0x48DAF4u);
    ctx->pc = 0x48DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DAECu;
    // 0x48daf0: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48DAECu, 0x48DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DAF4u;
label_48daf4:
    // 0x48daf4: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x48daf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48daf8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48dafc: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x48dafcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48db00: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x48DB00u;
    SET_GPR_U32(ctx, 31, 0x48DB08u);
    ctx->pc = 0x48DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DB00u;
    // 0x48db04: 0x38c03  sra         $s1, $v1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x48DB00u, 0x48DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DB08u;
label_48db08:
    // 0x48db08: 0x3c190073  lui         $t9, 0x73
    ctx->pc = 0x48db08u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)115 << 16));
    // 0x48db0c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x48db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48db10: 0x2724d680  addiu       $a0, $t9, -0x2980
    ctx->pc = 0x48db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4294956672));
    // 0x48db14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x48db14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x48db18: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x48db18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x48db1c: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x48db1cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48db20: 0x24786df0  addiu       $t8, $v1, 0x6DF0
    ctx->pc = 0x48db20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 28144));
    // 0x48db24: 0x248f0092  addiu       $t7, $a0, 0x92
    ctx->pc = 0x48db24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 146));
    // 0x48db28: 0x260c0038  addiu       $t4, $s0, 0x38
    ctx->pc = 0x48db28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x48db2c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x48db2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48db30: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x48db30u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48db34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48db34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48db38: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x48db38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48db3c: 0x260a0036  addiu       $t2, $s0, 0x36
    ctx->pc = 0x48db3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x48db40: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x48db40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48db44: 0x0  nop
    ctx->pc = 0x48db44u;
    // NOP
label_48db48:
    // 0x48db48: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x48db48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x48db4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x48db4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x48db50: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x48db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x48db54: 0x95e40000  lhu         $a0, 0x0($t7)
    ctx->pc = 0x48db54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x48db58: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x48db58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48db5c: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x48db5cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48db60: 0xa4ce0000  sh          $t6, 0x0($a2)
    ctx->pc = 0x48db60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x48db64: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48db68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48db68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48db6c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x48db6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48db70: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48db74: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x48db74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48db78: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48db7c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x48db7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x48db80: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x48db80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48db84: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48db88: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x48db88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x48db8c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x48db8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48db90: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48db94: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x48db94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x48db98: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x48db98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48db9c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dba0: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x48dba0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x48dba4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dba8: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x48dba8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48dbac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dbb0: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x48dbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x48dbb4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dbb8: 0xa4c90000  sh          $t1, 0x0($a2)
    ctx->pc = 0x48dbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x48dbbc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dbc0: 0xa4d30000  sh          $s3, 0x0($a2)
    ctx->pc = 0x48dbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x48dbc4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dbc8: 0xa4d10000  sh          $s1, 0x0($a2)
    ctx->pc = 0x48dbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x48dbcc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48dbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48dbd0: 0xa4cd0000  sh          $t5, 0x0($a2)
    ctx->pc = 0x48dbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x48dbd4: 0x14a0ffdc  bnez        $a1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x48DBD4u;
    {
        const bool branch_taken_0x48dbd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DBD4u;
        // 0x48dbd8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dbd4) {
            ctx->pc = 0x48DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48db48;
        }
    }
    ctx->pc = 0x48DBDCu;
    // 0x48dbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48dbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dbe0: 0x2722d680  addiu       $v0, $t9, -0x2980
    ctx->pc = 0x48dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294956672));
    // 0x48dbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48dbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48dbe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48dbe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48dbec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48dbecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48dbf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48dbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dbf4: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x48dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
    // 0x48dbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x48DBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DBF8u;
        // 0x48dbfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DC00u;
}
