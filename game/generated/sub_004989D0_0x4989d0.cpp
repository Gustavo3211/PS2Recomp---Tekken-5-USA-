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

// Function: sub_004989D0
// Address: 0x4989d0 - 0x498fc0
void sub_004989D0_0x4989d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004989D0_0x4989d0");
#endif

    switch (ctx->pc) {
        case 0x498bb0u: goto label_498bb0;
        case 0x498bf8u: goto label_498bf8;
        case 0x498eb0u: goto label_498eb0;
        case 0x498eb8u: goto label_498eb8;
        default: break;
    }

    ctx->pc = 0x4989d0u;

    // 0x4989d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4989d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4989d4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4989d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4989d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4989dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4989dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4989e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4989e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4989e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4989e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4989e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4989ec: 0x26560128  addiu       $s6, $s2, 0x128
    ctx->pc = 0x4989ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x4989f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4989f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4989f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4989f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4989f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4989f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4989fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4989fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x498a00: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x498a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x498a04: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x498a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x498a08: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x498a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x498a0c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x498a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x498a10: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x498a10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498a14: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x498a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x498a18: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x498a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x498a1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x498a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x498a20: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x498a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498a24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x498a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x498a28: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x498A28u;
    {
        const bool branch_taken_0x498a28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x498A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498A28u;
        // 0x498a2c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498a28) {
            ctx->pc = 0x498A60u;
            goto label_498a60;
        }
    }
    ctx->pc = 0x498A30u;
    // 0x498a30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x498a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498a34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x498a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x498a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498a3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x498a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x498a40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x498a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498a44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x498a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498a48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x498a48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498a4c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x498a4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x498a50: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x498a50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498a54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x498a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x498a58: 0x81263f0  j           func_498FC0
    ctx->pc = 0x498A58u;
    ctx->pc = 0x498A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498A58u;
    // 0x498a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498FC0u;
    sub_00498FC0_0x498fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x498A60u;
label_498a60:
    // 0x498a60: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x498a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x498a64: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x498a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x498a68: 0x24460b1c  addiu       $a2, $v0, 0xB1C
    ctx->pc = 0x498a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2844));
    // 0x498a6c: 0x84a2d64e  lh          $v0, -0x29B2($a1)
    ctx->pc = 0x498a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D64Eu));
    // 0x498a70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x498a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B1Cu));
    // 0x498a74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x498a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x498a78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498a7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498a80: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x498a84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498a88: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x498a88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498a8c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x498a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x498a90: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x498a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x498a94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498a98: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x498a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x498a9c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x498a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498aa0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x498AA0u;
    {
        const bool branch_taken_0x498aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498aa0) {
            ctx->pc = 0x498AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498AA0u;
            // 0x498aa4: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498B08u;
            goto label_498b08;
        }
    }
    ctx->pc = 0x498AA8u;
    // 0x498aa8: 0x26460124  addiu       $a2, $s2, 0x124
    ctx->pc = 0x498aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    // 0x498aac: 0x84c70000  lh          $a3, 0x0($a2)
    ctx->pc = 0x498aacu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498ab0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x498ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498ab4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x498ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x498ab8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x498ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498abc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x498abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x498ac0: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x498ac0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498ac4: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x498ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x498ac8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x498ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x498acc: 0x4e10130  bgez        $a3, . + 4 + (0x130 << 2)
    ctx->pc = 0x498ACCu;
    {
        const bool branch_taken_0x498acc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x498AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498ACCu;
        // 0x498ad0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498acc) {
            ctx->pc = 0x498F90u;
            goto label_498f90;
        }
    }
    ctx->pc = 0x498AD4u;
    // 0x498ad4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x498ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498ad8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x498ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498adc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x498adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498ae0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x498ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x498ae4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x498ae4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498ae8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x498ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498aec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x498aecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498af0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x498af0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x498af4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x498af4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498af8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x498af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x498afc: 0x81263f0  j           func_498FC0
    ctx->pc = 0x498AFCu;
    ctx->pc = 0x498B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498AFCu;
    // 0x498b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498FC0u;
    sub_00498FC0_0x498fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x498B04u;
    // 0x498b04: 0x0  nop
    ctx->pc = 0x498b04u;
    // NOP
label_498b08:
    // 0x498b08: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x498b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x498b0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x498b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498b10: 0x346304b0  ori         $v1, $v1, 0x4B0
    ctx->pc = 0x498b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1200);
    // 0x498b14: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x498b14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x498b18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498b1c: 0x27c50b30  addiu       $a1, $fp, 0xB30
    ctx->pc = 0x498b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2864));
    // 0x498b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498b24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x498b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x498b28: 0x8647011a  lh          $a3, 0x11A($s2)
    ctx->pc = 0x498b28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
    // 0x498b2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x498b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498b30: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x498b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x498b34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498b38: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x498b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498b3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x498b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x498b40: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x498b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498b44: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x498b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x498b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x498B48u;
    {
        const bool branch_taken_0x498b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B48u;
        // 0x498b4c: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b48) {
            ctx->pc = 0x498B58u;
            goto label_498b58;
        }
    }
    ctx->pc = 0x498B50u;
    // 0x498b50: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x498b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x498b54: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x498b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_498b58:
    // 0x498b58: 0x26430118  addiu       $v1, $s2, 0x118
    ctx->pc = 0x498b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x498b5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x498b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x498b60: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x498b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x498b64: 0x27d00b30  addiu       $s0, $fp, 0xB30
    ctx->pc = 0x498b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 2864));
    // 0x498b68: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x498b68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x498b6c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x498b6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498b70: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x498b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498b74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x498b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x498b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x498b7c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x498b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x498b80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498b84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498b88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x498b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x498b8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498b90: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x498b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498b94: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x498b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498b98: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x498b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498b9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x498b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x498ba0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x498ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x498ba4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498ba8: 0xc126204  jal         func_498810
    ctx->pc = 0x498BA8u;
    SET_GPR_U32(ctx, 31, 0x498BB0u);
    ctx->pc = 0x498BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498BA8u;
    // 0x498bac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498810u, 0x498BA8u, 0x498BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498BB0u;
label_498bb0:
    // 0x498bb0: 0x105700f7  beq         $v0, $s7, . + 4 + (0xF7 << 2)
    ctx->pc = 0x498BB0u;
    {
        const bool branch_taken_0x498bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x498BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BB0u;
        // 0x498bb4: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498bb0) {
            ctx->pc = 0x498F90u;
            goto label_498f90;
        }
    }
    ctx->pc = 0x498BB8u;
    // 0x498bb8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x498bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498bbc: 0x24540b34  addiu       $s4, $v0, 0xB34
    ctx->pc = 0x498bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2868));
    // 0x498bc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498bc4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x498bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498bc8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x498bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x498bcc: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x498bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498bd0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x498bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x498bd4: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x498bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x498bd8: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x498bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x498bdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x498bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x498be0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x498be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x498be4: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x498be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x498be8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498be8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498bec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x498becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x498bf0: 0xc124620  jal         func_491880
    ctx->pc = 0x498BF0u;
    SET_GPR_U32(ctx, 31, 0x498BF8u);
    ctx->pc = 0x498BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498BF0u;
    // 0x498bf4: 0x24510b38  addiu       $s1, $v0, 0xB38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x498BF0u, 0x498BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498BF8u;
label_498bf8:
    // 0x498bf8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x498bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498bfc: 0x34019800  ori         $at, $zero, 0x9800
    ctx->pc = 0x498bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x498c00: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x498c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x498c04: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x498c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x498c08: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x498c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x498c0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x498c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x498c10: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x498c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x498c14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x498c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x498c18: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x498c18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498c1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x498C1Cu;
    {
        const bool branch_taken_0x498c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498c1c) {
            ctx->pc = 0x498C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498C1Cu;
            // 0x498c20: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498C38u;
            goto label_498c38;
        }
    }
    ctx->pc = 0x498C24u;
    // 0x498c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x498c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x498c28: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x498c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498c2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x498c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498c30: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x498c30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x498c34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x498c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_498c38:
    // 0x498c38: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x498c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x498c3c: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x498c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x498c40: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x498c40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x498c44: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x498c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498c48: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x498C48u;
    {
        const bool branch_taken_0x498c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x498C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C48u;
        // 0x498c4c: 0x96850000  lhu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c48) {
            ctx->pc = 0x498C88u;
            goto label_498c88;
        }
    }
    ctx->pc = 0x498C50u;
    // 0x498c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x498c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498c54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x498c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498c58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x498c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498c5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x498c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498c60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x498c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x498c64: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x498c64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498c68: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x498c68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498c6c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x498c6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498c70: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x498c70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x498c74: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x498c74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498c78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x498c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x498c7c: 0x81263f0  j           func_498FC0
    ctx->pc = 0x498C7Cu;
    ctx->pc = 0x498C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498C7Cu;
    // 0x498c80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498FC0u;
    sub_00498FC0_0x498fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x498C84u;
    // 0x498c84: 0x0  nop
    ctx->pc = 0x498c84u;
    // NOP
label_498c88:
    // 0x498c88: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x498c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x498c8c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x498C8Cu;
    {
        const bool branch_taken_0x498c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x498C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498C8Cu;
        // 0x498c90: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498c8c) {
            ctx->pc = 0x498DA8u;
            goto label_498da8;
        }
    }
    ctx->pc = 0x498C94u;
    // 0x498c94: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x498c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x498c98: 0x2645011c  addiu       $a1, $s2, 0x11C
    ctx->pc = 0x498c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x498c9c: 0x24440b28  addiu       $a0, $v0, 0xB28
    ctx->pc = 0x498c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2856));
    // 0x498ca0: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x498ca0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498ca4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x498ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B28u));
    // 0x498ca8: 0xf31825  or          $v1, $a3, $s3
    ctx->pc = 0x498ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x498cac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498cb0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x498cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498cb4: 0x10e000b6  beqz        $a3, . + 4 + (0xB6 << 2)
    ctx->pc = 0x498CB4u;
    {
        const bool branch_taken_0x498cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x498CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498CB4u;
        // 0x498cb8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498cb4) {
            ctx->pc = 0x498F90u;
            goto label_498f90;
        }
    }
    ctx->pc = 0x498CBCu;
    // 0x498cbc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x498cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498cc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498cc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498cc8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x498cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x498ccc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498cd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x498cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x498cd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498cd8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x498cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498cdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x498cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x498ce0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x498ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x498ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498ce8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x498ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x498cec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x498cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498cf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x498cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498cf4: 0x21c83  sra         $v1, $v0, 18
    ctx->pc = 0x498cf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 18));
    // 0x498cf8: 0x5077000f  beql        $v1, $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x498CF8u;
    {
        const bool branch_taken_0x498cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x498cf8) {
            ctx->pc = 0x498CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498CF8u;
            // 0x498cfc: 0x96420132  lhu         $v0, 0x132($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498D38u;
            goto label_498d38;
        }
    }
    ctx->pc = 0x498D00u;
    // 0x498d00: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x498d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x498d04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x498D04u;
    {
        const bool branch_taken_0x498d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D04u;
        // 0x498d08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d04) {
            ctx->pc = 0x498D20u;
            goto label_498d20;
        }
    }
    ctx->pc = 0x498D0Cu;
    // 0x498d0c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x498D0Cu;
    {
        const bool branch_taken_0x498d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x498d0c) {
            ctx->pc = 0x498D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498D0Cu;
            // 0x498d10: 0x96c20000  lhu         $v0, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498D30u;
            goto label_498d30;
        }
    }
    ctx->pc = 0x498D14u;
    // 0x498d14: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x498D14u;
    {
        const bool branch_taken_0x498d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D14u;
        // 0x498d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d14) {
            ctx->pc = 0x498D64u;
            goto label_498d64;
        }
    }
    ctx->pc = 0x498D1Cu;
    // 0x498d1c: 0x0  nop
    ctx->pc = 0x498d1cu;
    // NOP
label_498d20:
    // 0x498d20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x498D20u;
    {
        const bool branch_taken_0x498d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x498D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D20u;
        // 0x498d24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d20) {
            ctx->pc = 0x498D40u;
            goto label_498d40;
        }
    }
    ctx->pc = 0x498D28u;
    // 0x498d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x498D28u;
    {
        const bool branch_taken_0x498d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D28u;
        // 0x498d2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d28) {
            ctx->pc = 0x498D68u;
            goto label_498d68;
        }
    }
    ctx->pc = 0x498D30u;
label_498d30:
    // 0x498d30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x498D30u;
    {
        const bool branch_taken_0x498d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D30u;
        // 0x498d34: 0x86440130  lh          $a0, 0x130($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d30) {
            ctx->pc = 0x498D48u;
            goto label_498d48;
        }
    }
    ctx->pc = 0x498D38u;
label_498d38:
    // 0x498d38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x498D38u;
    {
        const bool branch_taken_0x498d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498D38u;
        // 0x498d3c: 0x86440134  lh          $a0, 0x134($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d38) {
            ctx->pc = 0x498D48u;
            goto label_498d48;
        }
    }
    ctx->pc = 0x498D40u;
label_498d40:
    // 0x498d40: 0x96420136  lhu         $v0, 0x136($s2)
    ctx->pc = 0x498d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 310)));
    // 0x498d44: 0x86440138  lh          $a0, 0x138($s2)
    ctx->pc = 0x498d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 312)));
label_498d48:
    // 0x498d48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x498d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498d50: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x498d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x498d54: 0x53a824  and         $s5, $v0, $s3
    ctx->pc = 0x498d54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x498d58: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x498d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x498d5c: 0x64a824  and         $s5, $v1, $a0
    ctx->pc = 0x498d5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x498d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_498d64:
    // 0x498d64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x498d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498d68:
    // 0x498d68: 0xa6a20122  sh          $v0, 0x122($s5)
    ctx->pc = 0x498d68u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x498d6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x498d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498d70: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x498d70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498d74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x498d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498d78: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x498d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x498d7c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x498d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x498d80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x498d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498d84: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x498d84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498d88: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x498d88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498d8c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x498d8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x498d90: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x498d90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498d94: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x498d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x498d98: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x498d98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498d9c: 0x81260b4  j           func_4982D0
    ctx->pc = 0x498D9Cu;
    ctx->pc = 0x498DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498D9Cu;
    // 0x498da0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4982D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4982D0u, 0x498D9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x498DA4u;
    // 0x498da4: 0x0  nop
    ctx->pc = 0x498da4u;
    // NOP
label_498da8:
    // 0x498da8: 0x2654011c  addiu       $s4, $s2, 0x11C
    ctx->pc = 0x498da8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x498dac: 0x26030b28  addiu       $v1, $s0, 0xB28
    ctx->pc = 0x498dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2856));
    // 0x498db0: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x498db0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498db4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498db8: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x498db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x498dbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498dc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x498dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x498dc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x498dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x498dc8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x498dc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498dcc: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x498dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x498dd0: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x498DD0u;
    {
        const bool branch_taken_0x498dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498dd0) {
            ctx->pc = 0x498DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498DD0u;
            // 0x498dd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498F94u;
            goto label_498f94;
        }
    }
    ctx->pc = 0x498DD8u;
    // 0x498dd8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x498dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x498ddc: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x498ddcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498de0: 0x1077000b  beq         $v1, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x498DE0u;
    {
        const bool branch_taken_0x498de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x498DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DE0u;
        // 0x498de4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498de0) {
            ctx->pc = 0x498E10u;
            goto label_498e10;
        }
    }
    ctx->pc = 0x498DE8u;
    // 0x498de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x498DE8u;
    {
        const bool branch_taken_0x498de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DE8u;
        // 0x498dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498de8) {
            ctx->pc = 0x498E00u;
            goto label_498e00;
        }
    }
    ctx->pc = 0x498DF0u;
    // 0x498df0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x498DF0u;
    {
        const bool branch_taken_0x498df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x498df0) {
            ctx->pc = 0x498DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498DF0u;
            // 0x498df4: 0xa645011e  sh          $a1, 0x11E($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 286), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498E14u;
            goto label_498e14;
        }
    }
    ctx->pc = 0x498DF8u;
    // 0x498df8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x498DF8u;
    {
        const bool branch_taken_0x498df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DF8u;
        // 0x498dfc: 0x26100b28  addiu       $s0, $s0, 0xB28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498df8) {
            ctx->pc = 0x498E18u;
            goto label_498e18;
        }
    }
    ctx->pc = 0x498E00u;
label_498e00:
    // 0x498e00: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x498E00u;
    {
        const bool branch_taken_0x498e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e00) {
            ctx->pc = 0x498E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498E00u;
            // 0x498e04: 0xa6450122  sh          $a1, 0x122($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 290), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498E14u;
            goto label_498e14;
        }
    }
    ctx->pc = 0x498E08u;
    // 0x498e08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x498E08u;
    {
        const bool branch_taken_0x498e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E08u;
        // 0x498e0c: 0x26100b28  addiu       $s0, $s0, 0xB28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e08) {
            ctx->pc = 0x498E18u;
            goto label_498e18;
        }
    }
    ctx->pc = 0x498E10u;
label_498e10:
    // 0x498e10: 0xa6450120  sh          $a1, 0x120($s2)
    ctx->pc = 0x498e10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 5));
label_498e14:
    // 0x498e14: 0x26100b28  addiu       $s0, $s0, 0xB28
    ctx->pc = 0x498e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2856));
label_498e18:
    // 0x498e18: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x498e18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498e1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498e20: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x498e20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x498e24: 0xf31825  or          $v1, $a3, $s3
    ctx->pc = 0x498e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x498e28: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x498e28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x498e2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498e30: 0x25290b2c  addiu       $t1, $t1, 0xB2C
    ctx->pc = 0x498e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2860));
    // 0x498e34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498e38: 0x27ca0b30  addiu       $t2, $fp, 0xB30
    ctx->pc = 0x498e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 2864));
    // 0x498e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x498e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x498e40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498e44: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x498e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x498e48: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x498e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498e4c: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x498e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x498e50: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x498e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x498e54: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x498e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x498e58: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x498e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x498e5c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x498e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x498e60: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x498e60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x498e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498e68: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x498e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x498e6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x498e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x498e70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498e74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x498e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x498e78: 0x1134024  and         $t0, $t0, $s3
    ctx->pc = 0x498e78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 19));
    // 0x498e7c: 0x8c670b34  lw          $a3, 0xB34($v1)
    ctx->pc = 0x498e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2868)));
    // 0x498e80: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x498e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x498e84: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x498e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498e88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x498e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498e8c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x498e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x498e90: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x498e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498e94: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x498e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x498e98: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x498e98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x498e9c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x498e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x498ea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498ea4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x498ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x498ea8: 0xc125a8e  jal         func_496A38
    ctx->pc = 0x498EA8u;
    SET_GPR_U32(ctx, 31, 0x498EB0u);
    ctx->pc = 0x498EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498EA8u;
    // 0x498eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496A38u, 0x498EA8u, 0x498EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498EB0u;
label_498eb0:
    // 0x498eb0: 0xc1260ac  jal         func_4982B0
    ctx->pc = 0x498EB0u;
    SET_GPR_U32(ctx, 31, 0x498EB8u);
    ctx->pc = 0x498EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498EB0u;
    // 0x498eb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4982B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4982B0u, 0x498EB0u, 0x498EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498EB8u;
label_498eb8:
    // 0x498eb8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x498eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x498ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x498ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498ec0: 0x24a60b1c  addiu       $a2, $a1, 0xB1C
    ctx->pc = 0x498ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2844));
    // 0x498ec4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x498ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498ec8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x498ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7F0B1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B1Cu, _value); } while (0);
    // 0x498ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498ed0: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x498ed0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x498ed4: 0xf31025  or          $v0, $a3, $s3
    ctx->pc = 0x498ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x498ed8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498edc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x498edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x498ee0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x498ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498ee4: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x498EE4u;
    {
        const bool branch_taken_0x498ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x498EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EE4u;
        // 0x498ee8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ee4) {
            ctx->pc = 0x498F40u;
            goto label_498f40;
        }
    }
    ctx->pc = 0x498EECu;
    // 0x498eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x498EECu;
    {
        const bool branch_taken_0x498eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EECu;
        // 0x498ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498eec) {
            ctx->pc = 0x498F08u;
            goto label_498f08;
        }
    }
    ctx->pc = 0x498EF4u;
    // 0x498ef4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x498EF4u;
    {
        const bool branch_taken_0x498ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x498EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EF4u;
        // 0x498ef8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ef4) {
            ctx->pc = 0x498F18u;
            goto label_498f18;
        }
    }
    ctx->pc = 0x498EFCu;
    // 0x498efc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x498EFCu;
    {
        const bool branch_taken_0x498efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498EFCu;
        // 0x498f00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498efc) {
            ctx->pc = 0x498F74u;
            goto label_498f74;
        }
    }
    ctx->pc = 0x498F04u;
    // 0x498f04: 0x0  nop
    ctx->pc = 0x498f04u;
    // NOP
label_498f08:
    // 0x498f08: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x498F08u;
    {
        const bool branch_taken_0x498f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x498F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F08u;
        // 0x498f0c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f08) {
            ctx->pc = 0x498F58u;
            goto label_498f58;
        }
    }
    ctx->pc = 0x498F10u;
    // 0x498f10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x498F10u;
    {
        const bool branch_taken_0x498f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F10u;
        // 0x498f14: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f10) {
            ctx->pc = 0x498F74u;
            goto label_498f74;
        }
    }
    ctx->pc = 0x498F18u;
label_498f18:
    // 0x498f18: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x498f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x498f1c: 0x2331024  and         $v0, $s1, $s3
    ctx->pc = 0x498f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x498f20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x498f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498f24: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x498f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x498f28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498f2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x498f30: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x498f30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x498f34: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x498f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498f38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x498F38u;
    {
        const bool branch_taken_0x498f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F38u;
        // 0x498f3c: 0xa6420130  sh          $v0, 0x130($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f38) {
            ctx->pc = 0x498F6Cu;
            goto label_498f6c;
        }
    }
    ctx->pc = 0x498F40u;
label_498f40:
    // 0x498f40: 0x2331024  and         $v0, $s1, $s3
    ctx->pc = 0x498f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x498f44: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x498f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x498f48: 0xa6420132  sh          $v0, 0x132($s2)
    ctx->pc = 0x498f48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x498f4c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x498f4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x498F50u;
    {
        const bool branch_taken_0x498f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F50u;
        // 0x498f54: 0xa6430134  sh          $v1, 0x134($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 308), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f50) {
            ctx->pc = 0x498F6Cu;
            goto label_498f6c;
        }
    }
    ctx->pc = 0x498F58u;
label_498f58:
    // 0x498f58: 0x2331024  and         $v0, $s1, $s3
    ctx->pc = 0x498f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x498f5c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x498f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x498f60: 0xa6420136  sh          $v0, 0x136($s2)
    ctx->pc = 0x498f60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x498f64: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x498f64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498f68: 0xa6430138  sh          $v1, 0x138($s2)
    ctx->pc = 0x498f68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 312), (uint16_t)GPR_U32(ctx, 3));
label_498f6c:
    // 0x498f6c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x498f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x498f70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x498f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_498f74:
    // 0x498f74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x498f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x498f78: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x498f78u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x498f7c: 0x14e30004  bne         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498F7Cu;
    {
        const bool branch_taken_0x498f7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x498F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F7Cu;
        // 0x498f80: 0xa6870000  sh          $a3, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f7c) {
            ctx->pc = 0x498F90u;
            goto label_498f90;
        }
    }
    ctx->pc = 0x498F84u;
    // 0x498f84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x498f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498f88: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x498f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x498f8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x498f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_498f90:
    // 0x498f90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x498f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498f94:
    // 0x498f94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x498f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498f98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x498f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498f9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x498f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x498fa0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x498fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498fa4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x498fa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498fa8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x498fa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498fac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x498facu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x498fb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x498fb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498fb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x498fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x498fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x498FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498FB8u;
        // 0x498fbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498FC0u;
}
