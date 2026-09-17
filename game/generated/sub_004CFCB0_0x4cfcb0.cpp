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

// Function: sub_004CFCB0
// Address: 0x4cfcb0 - 0x4cfee0
void sub_004CFCB0_0x4cfcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFCB0_0x4cfcb0");
#endif

    switch (ctx->pc) {
        case 0x4cfd48u: goto label_4cfd48;
        case 0x4cfd50u: goto label_4cfd50;
        case 0x4cfe58u: goto label_4cfe58;
        default: break;
    }

    ctx->pc = 0x4cfcb0u;

    // 0x4cfcb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cfcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4cfcb4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cfcb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4cfcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4cfcbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4cfcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4cfcc0: 0x24490fe0  addiu       $t1, $v0, 0xFE0
    ctx->pc = 0x4cfcc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x4cfcc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4cfcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4cfcc8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cfccc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4cfcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4cfcd0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4cfcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x4cfcd4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4cfcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4cfcd8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4cfcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4cfcdc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4cfcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4cfce0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4cfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4cfce4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4cfce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4cfce8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4cfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4cfcec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0FE0u));
    // 0x4cfcf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cfcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cfcf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cfcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cfcf8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4cfcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4cfcfc: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4cfcfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cfd00: 0x4600065  bltz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x4CFD00u;
    {
        const bool branch_taken_0x4cfd00 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFD00u;
        // 0x4cfd04: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfd00) {
            ctx->pc = 0x4CFE98u;
            goto label_4cfe98;
        }
    }
    ctx->pc = 0x4CFD08u;
    // 0x4cfd08: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cfd0c: 0x26430028  addiu       $v1, $s2, 0x28
    ctx->pc = 0x4cfd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x4cfd10: 0x24530fcc  addiu       $s3, $v0, 0xFCC
    ctx->pc = 0x4cfd10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4044));
    // 0x4cfd14: 0x26420026  addiu       $v0, $s2, 0x26
    ctx->pc = 0x4cfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
    // 0x4cfd18: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cfd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cfd1c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cfd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cfd20: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cfd20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cfd24: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cfd24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cfd28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4cfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4cfd2c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4cfd2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfd30: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4cfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4cfd34: 0x24960fd4  addiu       $s6, $a0, 0xFD4
    ctx->pc = 0x4cfd34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4052));
    // 0x4cfd38: 0x24b70fd8  addiu       $s7, $a1, 0xFD8
    ctx->pc = 0x4cfd38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4056));
    // 0x4cfd3c: 0x24d50fdc  addiu       $s5, $a2, 0xFDC
    ctx->pc = 0x4cfd3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4060));
    // 0x4cfd40: 0x24fe0fd0  addiu       $fp, $a3, 0xFD0
    ctx->pc = 0x4cfd40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4048));
    // 0x4cfd44: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4cfd44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4cfd48:
    // 0x4cfd48: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4CFD48u;
    SET_GPR_U32(ctx, 31, 0x4CFD50u);
    ctx->pc = 0x4CFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFD48u;
    // 0x4cfd4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4CFD48u, 0x4CFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFD50u;
label_4cfd50:
    // 0x4cfd50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cfd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfd54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cfd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfd58: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x4cfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x4cfd5c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x4cfd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfd60: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4cfd60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4cfd64: 0x24e77330  addiu       $a3, $a3, 0x7330
    ctx->pc = 0x4cfd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29488));
    // 0x4cfd68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cfd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfd6c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4cfd6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfd70: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4cfd70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfd74: 0xa60201be  sh          $v0, 0x1BE($s0)
    ctx->pc = 0x4cfd74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfd78: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4cfd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfd7c: 0xae120140  sw          $s2, 0x140($s0)
    ctx->pc = 0x4cfd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 18));
    // 0x4cfd80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4cfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfd84: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4cfd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfd88: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4cfd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4cfd8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4cfd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4cfd90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4cfd94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cfd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cfd98: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4cfd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfd9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cfda0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4cfda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4cfda4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cfda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cfda8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4cfdac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4cfdacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfdb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cfdb4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cfdb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cfdb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cfdbc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4cfdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4cfdc0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cfdc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfdc4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cfdc8: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4cfdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfdcc: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x4cfdccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfdd0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cfdd4: 0x844a0002  lh          $t2, 0x2($v0)
    ctx->pc = 0x4cfdd4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4cfdd8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4cfdd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfddc: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4cfddcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4cfde0: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4cfde0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cfde4: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4cfde4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4cfde8: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4cfde8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cfdec: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4cfdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4cfdf0: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4cfdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cfdf4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cfdf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cfdf8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cfdf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cfdfc: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4cfdfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4cfe00: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cfe00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cfe04: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4cfe04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4cfe08: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4cfe08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4cfe0c: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4cfe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4cfe10: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4cfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4cfe14: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4cfe14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4cfe18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4cfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cfe1c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4cfe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfe20: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4cfe20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cfe24: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cfe24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cfe28: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4cfe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cfe2c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4cfe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4cfe30: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4cfe30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cfe34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cfe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cfe38: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4cfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4cfe3c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4cfe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cfe40: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cfe40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cfe44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4cfe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4cfe48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cfe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cfe4c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4cfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4cfe50: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4CFE50u;
    SET_GPR_U32(ctx, 31, 0x4CFE58u);
    ctx->pc = 0x4CFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFE50u;
    // 0x4cfe54: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4CFE50u, 0x4CFE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFE58u;
label_4cfe58:
    // 0x4cfe58: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4cfe58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cfe5c: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4cfe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfe60: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4cfe60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cfe64: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4cfe64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfe68: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4cfe68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cfe6c: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4cfe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfe70: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4cfe70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfe74: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4cfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfe78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cfe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cfe7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cfe7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cfe80: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4cfe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4cfe84: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cfe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cfe88: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4cfe88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4cfe8c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cfe8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfe90: 0x441ffad  bgez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x4CFE90u;
    {
        const bool branch_taken_0x4cfe90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4cfe90) {
            ctx->pc = 0x4CFD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cfd48;
        }
    }
    ctx->pc = 0x4CFE98u;
label_4cfe98:
    // 0x4cfe98: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4cfe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x4cfe9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cfe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfea0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cfea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cfea4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4cfea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cfea8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4cfea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cfeac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cfeb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4cfeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cfeb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4cfeb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cfeb8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4cfeb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cfebc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4cfebcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cfec0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4cfec0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cfec4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4cfec4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cfec8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4cfec8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cfecc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4cfeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cfed0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cfed0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cfed4: 0x8133fb8  j           func_4CFEE0
    ctx->pc = 0x4CFED4u;
    ctx->pc = 0x4CFED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFED4u;
    // 0x4cfed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CFEE0u;
    sub_004CFEE0_0x4cfee0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CFEDCu;
    // 0x4cfedc: 0x0  nop
    ctx->pc = 0x4cfedcu;
    // NOP
    ctx->pc = 0x4cfee0u;
}
