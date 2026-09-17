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

// Function: sub_004B4660
// Address: 0x4b4660 - 0x4b5360
void sub_004B4660_0x4b4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4660_0x4b4660");
#endif

    switch (ctx->pc) {
        case 0x4b46c0u: goto label_4b46c0;
        case 0x4b4bf4u: goto label_4b4bf4;
        case 0x4b4c30u: goto label_4b4c30;
        case 0x4b4c68u: goto label_4b4c68;
        case 0x4b4c94u: goto label_4b4c94;
        case 0x4b4ca0u: goto label_4b4ca0;
        case 0x4b4cd0u: goto label_4b4cd0;
        case 0x4b4e40u: goto label_4b4e40;
        case 0x4b4f34u: goto label_4b4f34;
        case 0x4b4f48u: goto label_4b4f48;
        case 0x4b4fb8u: goto label_4b4fb8;
        case 0x4b4fd4u: goto label_4b4fd4;
        case 0x4b4fdcu: goto label_4b4fdc;
        case 0x4b4fe4u: goto label_4b4fe4;
        case 0x4b5018u: goto label_4b5018;
        case 0x4b5058u: goto label_4b5058;
        case 0x4b506cu: goto label_4b506c;
        case 0x4b5098u: goto label_4b5098;
        case 0x4b50b4u: goto label_4b50b4;
        case 0x4b50bcu: goto label_4b50bc;
        case 0x4b50f0u: goto label_4b50f0;
        case 0x4b5110u: goto label_4b5110;
        case 0x4b5118u: goto label_4b5118;
        case 0x4b5150u: goto label_4b5150;
        case 0x4b5178u: goto label_4b5178;
        case 0x4b5180u: goto label_4b5180;
        case 0x4b51acu: goto label_4b51ac;
        case 0x4b51f4u: goto label_4b51f4;
        case 0x4b51fcu: goto label_4b51fc;
        case 0x4b5268u: goto label_4b5268;
        case 0x4b5284u: goto label_4b5284;
        case 0x4b528cu: goto label_4b528c;
        case 0x4b52dcu: goto label_4b52dc;
        case 0x4b5308u: goto label_4b5308;
        case 0x4b5348u: goto label_4b5348;
        default: break;
    }

    ctx->pc = 0x4b4660u;

    // 0x4b4660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4664: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b4664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b4668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b466c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b466cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b4670: 0x8c490d64  lw          $t1, 0xD64($v0)
    ctx->pc = 0x4b4670u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b4674: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b4674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b4678: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b4678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b467c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b467cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4680: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x4b4680u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x4b4684: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b4684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b4688: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b468c: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b4690: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b4690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b4694: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b4694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b4698: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b469c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b46a0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b46a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b46a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b46a8: 0x85220022  lh          $v0, 0x22($t1)
    ctx->pc = 0x4b46a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x4b46ac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b46b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b46b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b46b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b46b8: 0x812d1b0  j           func_4B46C0
    ctx->pc = 0x4B46B8u;
    ctx->pc = 0x4B46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B46B8u;
    // 0x4b46bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    goto label_4b46c0;
    ctx->pc = 0x4B46C0u;
label_4b46c0:
    // 0x4b46c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b46c4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b46c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4b46c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4b46cc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4b46ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b46d0: 0x27c30164  addiu       $v1, $fp, 0x164
    ctx->pc = 0x4b46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 356));
    // 0x4b46d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b46d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b46dc: 0x24440d30  addiu       $a0, $v0, 0xD30
    ctx->pc = 0x4b46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b46e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b46e4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b46e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b46e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b46ec: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b46ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b46f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b46f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b46f4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b46f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b46f8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b46fc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b4700: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b4704: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4b4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4b4708: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4b4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4b470c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4b470cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4710: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b4710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b4714: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b4714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b471c: 0x96450d3c  lhu         $a1, 0xD3C($s2)
    ctx->pc = 0x4b471cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D3Cu));
    // 0x4b4720: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b4720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b4724: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4728: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b4728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b472c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b472cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4730: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b4734: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b4734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4738: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4738u;
    {
        const bool branch_taken_0x4b4738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4738u;
        // 0x4b473c: 0x25260d34  addiu       $a2, $t1, 0xD34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4738) {
            ctx->pc = 0x4B4750u;
            goto label_4b4750;
        }
    }
    ctx->pc = 0x4B4740u;
    // 0x4b4740: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b4740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4744u;
    {
        const bool branch_taken_0x4b4744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4744u;
        // 0x4b4748: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4744) {
            ctx->pc = 0x4B4758u;
            goto label_4b4758;
        }
    }
    ctx->pc = 0x4B474Cu;
    // 0x4b474c: 0x0  nop
    ctx->pc = 0x4b474cu;
    // NOP
label_4b4750:
    // 0x4b4750: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4754: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4b4754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4b4758:
    // 0x4b4758: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4b4758u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4b475c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4760: 0x25ab0d38  addiu       $t3, $t5, 0xD38
    ctx->pc = 0x4b4760u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b4764: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4b4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4b4768: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b4768u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4b476c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b476cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b4770: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4b4770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4b4774: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b4774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b4778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b477c: 0x24880d30  addiu       $t0, $a0, 0xD30
    ctx->pc = 0x4b477cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x4b4780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4784: 0x94a70d34  lhu         $a3, 0xD34($a1)
    ctx->pc = 0x4b4784u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3380)));
    // 0x4b4788: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4b4788u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b478c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b478cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4790: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b4790u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b4794: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4798: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4b4798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b479c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4b479cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b47a0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b47a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b47a4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b47a8: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b47a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b47ac: 0x964a0d3c  lhu         $t2, 0xD3C($s2)
    ctx->pc = 0x4b47acu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x4b47b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b47b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b47b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b47b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b47b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b47bc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b47c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b47c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b47c4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b47c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b47c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b47cc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b47ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b47d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b47d4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b47d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b47d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b47d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b47dc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b47e0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b47e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b47e4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b47e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b47e8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4b47e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4b47ec: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b47ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b47f0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4b47f4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b47f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b47f8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4b47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4b47fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4800: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4800u;
    {
        const bool branch_taken_0x4b4800 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4800u;
        // 0x4b4804: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4800) {
            ctx->pc = 0x4B4810u;
            goto label_4b4810;
        }
    }
    ctx->pc = 0x4B4808u;
    // 0x4b4808: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b480c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4b480cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b4810:
    // 0x4b4810: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4b4810u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4b4814: 0x25a40d38  addiu       $a0, $t5, 0xD38
    ctx->pc = 0x4b4814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b4818: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b4818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b481c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4b481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b4820: 0x25270d34  addiu       $a3, $t1, 0xD34
    ctx->pc = 0x4b4820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b4824: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b4824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4828: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4b4828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b482c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4b482cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7F0D34u));
    // 0x4b4830: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4b4830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b4834: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4b4834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4b4838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b4838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b483c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b483cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b4840: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4b4840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4844u;
    {
        const bool branch_taken_0x4b4844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4844u;
        // 0x4b4848: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4844) {
            ctx->pc = 0x4B4868u;
            goto label_4b4868;
        }
    }
    ctx->pc = 0x4B484Cu;
    // 0x4b484c: 0x96430d3c  lhu         $v1, 0xD3C($s2)
    ctx->pc = 0x4b484cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x4b4850: 0x24450d30  addiu       $a1, $v0, 0xD30
    ctx->pc = 0x4b4850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b4854: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b4854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b485c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b4860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b4864: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b4864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4b4868:
    // 0x4b4868: 0x27c50166  addiu       $a1, $fp, 0x166
    ctx->pc = 0x4b4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 358));
    // 0x4b486c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b486cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b4870: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4b4870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4b4874: 0x24640d30  addiu       $a0, $v1, 0xD30
    ctx->pc = 0x4b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b4878: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x4b4878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b487c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b487cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4880: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b4880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D30u));
    // 0x4b4884: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4b4884u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4b4888: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4b4888u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b488c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b488cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4890: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b4890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b4894: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b4894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b4898: 0x96850d40  lhu         $a1, 0xD40($s4)
    ctx->pc = 0x4b4898u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D40u));
    // 0x4b489c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b489cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b48a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b48a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b48a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b48a8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b48a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b48ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b48acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b48b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b48b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B48B4u;
    {
        const bool branch_taken_0x4b48b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48B4u;
        // 0x4b48b8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48b4) {
            ctx->pc = 0x4B48C8u;
            goto label_4b48c8;
        }
    }
    ctx->pc = 0x4B48BCu;
    // 0x4b48bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B48BCu;
    {
        const bool branch_taken_0x4b48bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48BCu;
        // 0x4b48c0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48bc) {
            ctx->pc = 0x4B48CCu;
            goto label_4b48cc;
        }
    }
    ctx->pc = 0x4B48C4u;
    // 0x4b48c4: 0x0  nop
    ctx->pc = 0x4b48c4u;
    // NOP
label_4b48c8:
    // 0x4b48c8: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4b48c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4b48cc:
    // 0x4b48cc: 0x25ab0d38  addiu       $t3, $t5, 0xD38
    ctx->pc = 0x4b48ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b48d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b48d4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b48d8: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4b48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4b48dc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4b48dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4b48e0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b48e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b48e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b48e8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b48ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b48ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b48f0: 0x94a70d34  lhu         $a3, 0xD34($a1)
    ctx->pc = 0x4b48f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3380)));
    // 0x4b48f4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b48f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b48f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b48fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b48fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4900: 0x24880d30  addiu       $t0, $a0, 0xD30
    ctx->pc = 0x4b4900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x4b4904: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4b4904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4908: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x4b4908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b490c: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b490cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4910: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4b4910u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4b4914: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b4914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b4918: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b4918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b491c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4920: 0x968a0d40  lhu         $t2, 0xD40($s4)
    ctx->pc = 0x4b4920u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x4b4924: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4928: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b4928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b492c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b4930: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4934: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b4934u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b4938: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b493c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b493cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4940: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b4944: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b4944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b4948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b494c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b494cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b4950: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b4950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4954: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b4954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b4958: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4b4958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4b495c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b495cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b4960: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b4960u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b4964: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b4964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4968: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4b4968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4b496c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4970: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4970u;
    {
        const bool branch_taken_0x4b4970 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4970u;
        // 0x4b4974: 0x346600ff  ori         $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4970) {
            ctx->pc = 0x4B4980u;
            goto label_4b4980;
        }
    }
    ctx->pc = 0x4B4978u;
    // 0x4b4978: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b497c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4b497cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b4980:
    // 0x4b4980: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4b4980u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4b4984: 0x25ab0d38  addiu       $t3, $t5, 0xD38
    ctx->pc = 0x4b4984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b4988: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b4988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b498c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4b498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b4990: 0x252c0d34  addiu       $t4, $t1, 0xD34
    ctx->pc = 0x4b4990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b4994: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b4994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b4998: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x4b4998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b499c: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4b499cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7F0D34u));
    // 0x4b49a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b49a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b49a4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4b49a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4b49a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b49a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b49ac: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b49acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b49b0: 0x81620000  lb          $v0, 0x0($t3)
    ctx->pc = 0x4b49b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b49b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B49B4u;
    {
        const bool branch_taken_0x4b49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B49B4u;
        // 0x4b49b8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b49b4) {
            ctx->pc = 0x4B49D8u;
            goto label_4b49d8;
        }
    }
    ctx->pc = 0x4B49BCu;
    // 0x4b49bc: 0x96830d40  lhu         $v1, 0xD40($s4)
    ctx->pc = 0x4b49bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x4b49c0: 0x24450d30  addiu       $a1, $v0, 0xD30
    ctx->pc = 0x4b49c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b49c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b49c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b49c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b49cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b49ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b49d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b49d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b49d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4b49d8:
    // 0x4b49d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b49dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4b49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b49e0: 0x24680d30  addiu       $t0, $v1, 0xD30
    ctx->pc = 0x4b49e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b49e4: 0x27c40118  addiu       $a0, $fp, 0x118
    ctx->pc = 0x4b49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 280));
    // 0x4b49e8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b49e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D30u));
    // 0x4b49ec: 0x27c9011c  addiu       $t1, $fp, 0x11C
    ctx->pc = 0x4b49ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x4b49f0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4b49f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4b49f4: 0x26460d3c  addiu       $a2, $s2, 0xD3C
    ctx->pc = 0x4b49f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3388));
    // 0x4b49f8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4b49f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b49fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b49fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4a00: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x4b4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x4b4a04: 0x268a0d40  addiu       $t2, $s4, 0xD40
    ctx->pc = 0x4b4a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 3392));
    // 0x4b4a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4a0c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4b4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b4a10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b4a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b4a14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4a18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b4a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b4a1c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4b4a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4b4a20: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b4a24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4a28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b4a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b4a2c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b4a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b4a30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b4a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b4a34: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x4b4a34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4a38: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4b4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b4a3c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b4a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b4a40: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x4b4a40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4a44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4a48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b4a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b4a4c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b4a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b4a50: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4b4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4b4a54: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4b4a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b4a58: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b4a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4a5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b4a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b4a60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b4a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b4a64: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4b4a68: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4b4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b4a6c: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4b4a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4a70: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b4a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4a74: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x4b4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x4b4a78: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b4a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b4a7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4a80: 0x14890007  bne         $a0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B4A80u;
    {
        const bool branch_taken_0x4b4a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x4B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A80u;
        // 0x4b4a84: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a80) {
            ctx->pc = 0x4B4AA0u;
            goto label_4b4aa0;
        }
    }
    ctx->pc = 0x4B4A88u;
    // 0x4b4a88: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4b4a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b4a8c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b4a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b4a90: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4A90u;
    {
        const bool branch_taken_0x4b4a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4A90u;
        // 0x4b4a94: 0x25a90d38  addiu       $t1, $t5, 0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4a90) {
            ctx->pc = 0x4B4AA4u;
            goto label_4b4aa4;
        }
    }
    ctx->pc = 0x4B4A98u;
    // 0x4b4a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4a9c: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4b4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4b4aa0:
    // 0x4b4aa0: 0x25a90d38  addiu       $t1, $t5, 0xD38
    ctx->pc = 0x4b4aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
label_4b4aa4:
    // 0x4b4aa4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b4aa8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b4aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b4aac: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4b4aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b4ab0: 0x24460d30  addiu       $a2, $v0, 0xD30
    ctx->pc = 0x4b4ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b4ab4: 0x8d420d60  lw          $v0, 0xD60($t2)
    ctx->pc = 0x4b4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b4ab8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b4ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4abc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b4ac0: 0xa4430118  sh          $v1, 0x118($v0)
    ctx->pc = 0x4b4ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4ac4: 0x24880d34  addiu       $t0, $a0, 0xD34
    ctx->pc = 0x4b4ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3380));
    // 0x4b4ac8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4b4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4b4acc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b4accu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0D30u));
    // 0x4b4ad0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b4ad4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4ad8: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b4ad8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4adc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b4adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b4ae0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4ae4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4ae8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4aec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b4af0: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x4b4af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x4b4af4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4b4af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4b4af8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b4af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b4afc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4b4afcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b4b00: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b4b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b4b04: 0x86420d3c  lh          $v0, 0xD3C($s2)
    ctx->pc = 0x4b4b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x4b4b08: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B4B08u;
    {
        const bool branch_taken_0x4b4b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B08u;
        // 0x4b4b0c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b08) {
            ctx->pc = 0x4B4B28u;
            goto label_4b4b28;
        }
    }
    ctx->pc = 0x4B4B10u;
    // 0x4b4b10: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4b4b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4b14: 0x86820d40  lh          $v0, 0xD40($s4)
    ctx->pc = 0x4b4b14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x4b4b18: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4B18u;
    {
        const bool branch_taken_0x4b4b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B18u;
        // 0x4b4b1c: 0x25440d60  addiu       $a0, $t2, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b18) {
            ctx->pc = 0x4B4B2Cu;
            goto label_4b4b2c;
        }
    }
    ctx->pc = 0x4B4B20u;
    // 0x4b4b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4b24: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4b4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4b4b28:
    // 0x4b4b28: 0x25440d60  addiu       $a0, $t2, 0xD60
    ctx->pc = 0x4b4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
label_4b4b2c:
    // 0x4b4b2c: 0x25a50d38  addiu       $a1, $t5, 0xD38
    ctx->pc = 0x4b4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b4b30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4b34: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b4b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4b38: 0xa443011c  sh          $v1, 0x11C($v0)
    ctx->pc = 0x4b4b38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4b3c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4b4b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4b4b40: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b4b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4b44: 0x86430d3c  lh          $v1, 0xD3C($s2)
    ctx->pc = 0x4b4b44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x4b4b48: 0x84820136  lh          $v0, 0x136($a0)
    ctx->pc = 0x4b4b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 310)));
    // 0x4b4b4c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4B4Cu;
    {
        const bool branch_taken_0x4b4b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B4Cu;
        // 0x4b4b50: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b4c) {
            ctx->pc = 0x4B4B74u;
            goto label_4b4b74;
        }
    }
    ctx->pc = 0x4B4B54u;
    // 0x4b4b54: 0x84830138  lh          $v1, 0x138($a0)
    ctx->pc = 0x4b4b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x4b4b58: 0x86820d40  lh          $v0, 0xD40($s4)
    ctx->pc = 0x4b4b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x4b4b5c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4B5Cu;
    {
        const bool branch_taken_0x4b4b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B5Cu;
        // 0x4b4b60: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b5c) {
            ctx->pc = 0x4B4B74u;
            goto label_4b4b74;
        }
    }
    ctx->pc = 0x4B4B64u;
    // 0x4b4b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4b68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b4b6c: 0x25a50d38  addiu       $a1, $t5, 0xD38
    ctx->pc = 0x4b4b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 3384));
    // 0x4b4b70: 0x8d430d60  lw          $v1, 0xD60($t2)
    ctx->pc = 0x4b4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4b4b74:
    // 0x4b4b74: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b4b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4b78: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b4b78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b4b7c: 0xa4620120  sh          $v0, 0x120($v1)
    ctx->pc = 0x4b4b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4b80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4b4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4b4b84: 0x8e640d64  lw          $a0, 0xD64($s3)
    ctx->pc = 0x4b4b84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b4b88: 0x86430d3c  lh          $v1, 0xD3C($s2)
    ctx->pc = 0x4b4b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x4b4b8c: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x4b4b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b4b90: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4B90u;
    {
        const bool branch_taken_0x4b4b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b4b90) {
            ctx->pc = 0x4B4B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4B90u;
            // 0x4b4b94: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4BB4u;
            goto label_4b4bb4;
        }
    }
    ctx->pc = 0x4B4B98u;
    // 0x4b4b98: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x4b4b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4b4b9c: 0x86820d40  lh          $v0, 0xD40($s4)
    ctx->pc = 0x4b4b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x4b4ba0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4BA0u;
    {
        const bool branch_taken_0x4b4ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b4ba0) {
            ctx->pc = 0x4B4BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4BA0u;
            // 0x4b4ba4: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4BB4u;
            goto label_4b4bb4;
        }
    }
    ctx->pc = 0x4B4BA8u;
    // 0x4b4ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4bac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b4bb0: 0x8d440d60  lw          $a0, 0xD60($t2)
    ctx->pc = 0x4b4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4b4bb4:
    // 0x4b4bb4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b4bb8: 0x95a20d38  lhu         $v0, 0xD38($t5)
    ctx->pc = 0x4b4bb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3384)));
    // 0x4b4bbc: 0x24b50d30  addiu       $s5, $a1, 0xD30
    ctx->pc = 0x4b4bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b4bc0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b4bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4bc4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b4bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b4bc8: 0xa482013a  sh          $v0, 0x13A($a0)
    ctx->pc = 0x4b4bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4bcc: 0x25310d34  addiu       $s1, $t1, 0xD34
    ctx->pc = 0x4b4bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b4bd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4bd4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b4bd8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b4bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4bdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4be0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b4be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b4be4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4be8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b4bec: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B4BECu;
    SET_GPR_U32(ctx, 31, 0x4B4BF4u);
    ctx->pc = 0x4B4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4BECu;
    // 0x4b4bf0: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B4BECu, 0x4B4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4BF4u;
label_4b4bf4:
    // 0x4b4bf4: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x4b4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4bf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b4bfc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b4c00: 0xa7c30022  sh          $v1, 0x22($fp)
    ctx->pc = 0x4b4c00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4c04: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b4c04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4c08: 0xa7c20024  sh          $v0, 0x24($fp)
    ctx->pc = 0x4b4c08u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4c0c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4b4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4c10: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b4c14: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b4c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4c18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4c1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b4c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b4c20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4c24: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b4c28: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B4C28u;
    SET_GPR_U32(ctx, 31, 0x4B4C30u);
    ctx->pc = 0x4B4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C28u;
    // 0x4b4c2c: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B4C28u, 0x4B4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4C30u;
label_4b4c30:
    // 0x4b4c30: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x4b4c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b4c38: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b4c3c: 0xa7c30026  sh          $v1, 0x26($fp)
    ctx->pc = 0x4b4c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4c40: 0x87c40120  lh          $a0, 0x120($fp)
    ctx->pc = 0x4b4c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x4b4c44: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b4c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4c48: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4b4c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4b4c4c: 0xa7c30028  sh          $v1, 0x28($fp)
    ctx->pc = 0x4b4c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4c50: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b4c54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4c58: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b4c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b4c5c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b4c60: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B4C60u;
    SET_GPR_U32(ctx, 31, 0x4B4C68u);
    ctx->pc = 0x4B4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C60u;
    // 0x4b4c64: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B4C60u, 0x4B4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4C68u;
label_4b4c68:
    // 0x4b4c68: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x4b4c68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4c6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b4c70: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4b4c70u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4b4c74: 0xa7d0002a  sh          $s0, 0x2A($fp)
    ctx->pc = 0x4b4c74u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 42), (uint16_t)GPR_U32(ctx, 16));
    // 0x4b4c78: 0x87c20148  lh          $v0, 0x148($fp)
    ctx->pc = 0x4b4c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 328)));
    // 0x4b4c7c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b4c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4c80: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x4b4c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4b4c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4C84u;
    {
        const bool branch_taken_0x4b4c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C84u;
        // 0x4b4c88: 0xa7c3002c  sh          $v1, 0x2C($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c84) {
            ctx->pc = 0x4B4C94u;
            goto label_4b4c94;
        }
    }
    ctx->pc = 0x4B4C8Cu;
    // 0x4b4c8c: 0xc12d838  jal         func_4B60E0
    ctx->pc = 0x4B4C8Cu;
    SET_GPR_U32(ctx, 31, 0x4B4C94u);
    ctx->pc = 0x4B4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C8Cu;
    // 0x4b4c90: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B60E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B60E0u, 0x4B4C8Cu, 0x4B4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4C94u;
label_4b4c94:
    // 0x4b4c94: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c98: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B4C98u;
    SET_GPR_U32(ctx, 31, 0x4B4CA0u);
    ctx->pc = 0x4B4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4C98u;
    // 0x4b4c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B4C98u, 0x4B4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4CA0u;
label_4b4ca0:
    // 0x4b4ca0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B4CA0u;
    {
        const bool branch_taken_0x4b4ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4ca0) {
            ctx->pc = 0x4B4CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4CA0u;
            // 0x4b4ca4: 0x26520d3c  addiu       $s2, $s2, 0xD3C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3388));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4D10u;
            goto label_4b4d10;
        }
    }
    ctx->pc = 0x4B4CA8u;
    // 0x4b4ca8: 0x87c20162  lh          $v0, 0x162($fp)
    ctx->pc = 0x4b4ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 354)));
    // 0x4b4cac: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x4B4CACu;
    {
        const bool branch_taken_0x4b4cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CACu;
        // 0x4b4cb0: 0x27d001c2  addiu       $s0, $fp, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cac) {
            ctx->pc = 0x4B4F88u;
            goto label_4b4f88;
        }
    }
    ctx->pc = 0x4B4CB4u;
    // 0x4b4cb4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b4cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b4cb8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b4cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b4cbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b4cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b4cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cc4: 0xa6220d54  sh          $v0, 0xD54($s1)
    ctx->pc = 0x4b4cc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0D54u, _value); } while (0);
    // 0x4b4cc8: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4B4CC8u;
    SET_GPR_U32(ctx, 31, 0x4B4CD0u);
    ctx->pc = 0x4B4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4CC8u;
    // 0x4b4ccc: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4B4CC8u, 0x4B4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4CD0u;
label_4b4cd0:
    // 0x4b4cd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4CD0u;
    {
        const bool branch_taken_0x4b4cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4cd0) {
            ctx->pc = 0x4B4CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4CD0u;
            // 0x4b4cd4: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4CE8u;
            goto label_4b4ce8;
        }
    }
    ctx->pc = 0x4B4CD8u;
    // 0x4b4cd8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b4cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4CDCu;
    {
        const bool branch_taken_0x4b4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CDCu;
        // 0x4b4ce0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cdc) {
            ctx->pc = 0x4B4CF0u;
            goto label_4b4cf0;
        }
    }
    ctx->pc = 0x4B4CE4u;
    // 0x4b4ce4: 0x0  nop
    ctx->pc = 0x4b4ce4u;
    // NOP
label_4b4ce8:
    // 0x4b4ce8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b4cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b4cf0:
    // 0x4b4cf0: 0x96230d54  lhu         $v1, 0xD54($s1)
    ctx->pc = 0x4b4cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3412)));
    // 0x4b4cf4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b4cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b4cf8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b4cfc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4b4cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4d00: 0x81220d30  lb          $v0, 0xD30($t1)
    ctx->pc = 0x4b4d00u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x7F0D30u));
    // 0x4b4d04: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x4B4D04u;
    {
        const bool branch_taken_0x4b4d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D04u;
        // 0x4b4d08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d04) {
            ctx->pc = 0x4B4F8Cu;
            goto label_4b4f8c;
        }
    }
    ctx->pc = 0x4B4D0Cu;
    // 0x4b4d0c: 0x26520d3c  addiu       $s2, $s2, 0xD3C
    ctx->pc = 0x4b4d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3388));
label_4b4d10:
    // 0x4b4d10: 0x27d60010  addiu       $s6, $fp, 0x10
    ctx->pc = 0x4b4d10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4b4d14: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x4b4d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x4b4d18: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b4d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4d1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4d20: 0x26940d40  addiu       $s4, $s4, 0xD40
    ctx->pc = 0x4b4d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3392));
    // 0x4b4d24: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b4d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b4d28: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4b4d28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4d2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4d30: 0x27d70014  addiu       $s7, $fp, 0x14
    ctx->pc = 0x4b4d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x4b4d34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b4d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4d38: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b4d38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b4d3c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b4d40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4d44: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b4d44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b4d48: 0x26730d64  addiu       $s3, $s3, 0xD64
    ctx->pc = 0x4b4d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3428));
    // 0x4b4d4c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4b4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b4d50: 0x26310d44  addiu       $s1, $s1, 0xD44
    ctx->pc = 0x4b4d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    // 0x4b4d54: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x4b4d54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4d58: 0x27d50018  addiu       $s5, $fp, 0x18
    ctx->pc = 0x4b4d58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x4b4d5c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4d60: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4b4d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4d64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4d68: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4b4d68u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4d6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b4d70: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b4d70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b4d74: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b4d74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b4d78: 0x258d000c  addiu       $t5, $t4, 0xC
    ctx->pc = 0x4b4d78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4b4d7c: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4b4d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4b4d80: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b4d80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b4d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d8c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b4d90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b4d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d94: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x4b4d94u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4d98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4d9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4da0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b4da4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b4da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b4da8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4b4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4b4dac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b4dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b4db0: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4b4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4b4db4: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4b4db4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4db8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4dbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4dbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4dc0: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4b4dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4b4dc4: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4b4dc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4b4dc8: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4b4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4b4dcc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b4dd0: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4b4dd4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4dd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4ddc: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4b4ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4b4de0: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4b4de0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4b4de4: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4b4de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x4b4de8: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4b4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4b4dec: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4b4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4b4df0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4df4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b4df4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b4df8: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4b4df8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4b4dfc: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4b4dfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4b4e00: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4b4e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4b4e04: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4b4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4b4e08: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4b4e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b4e0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e10: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4b4e10u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4e14: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4e18: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4b4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b4e1c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b4e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b4e20: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e24: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b4e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4e28: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4b4e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4e2c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x4b4e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4b4e30: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b4e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b4e34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e38: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x4B4E38u;
    SET_GPR_U32(ctx, 31, 0x4B4E40u);
    ctx->pc = 0x4B4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4E38u;
    // 0x4b4e3c: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x4B4E38u, 0x4B4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4E40u;
label_4b4e40:
    // 0x4b4e40: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4e44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b4e48: 0x24090c00  addiu       $t1, $zero, 0xC00
    ctx->pc = 0x4b4e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x4b4e4c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4b4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4b4e50: 0x24480d34  addiu       $t0, $v0, 0xD34
    ctx->pc = 0x4b4e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3380));
    // 0x4b4e54: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b4e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4e58: 0x3c06405b  lui         $a2, 0x405B
    ctx->pc = 0x4b4e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16475 << 16));
    // 0x4b4e5c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b4e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b4e60: 0x2405405b  addiu       $a1, $zero, 0x405B
    ctx->pc = 0x4b4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16475));
    // 0x4b4e64: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e68: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x4b4e68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x4b4e6c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4b4e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4e70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4e74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4b4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b4e78: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b4e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b4e7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b4e80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4e84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b4e88: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4b4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4b4e8c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b4e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4e90: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b4e94: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4b4e94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4e98: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b4e98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4e9c: 0xa7c30130  sh          $v1, 0x130($fp)
    ctx->pc = 0x4b4e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4ea0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4b4ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4ea4: 0xa7c20132  sh          $v0, 0x132($fp)
    ctx->pc = 0x4b4ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4ea8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b4ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4eac: 0xa7c30134  sh          $v1, 0x134($fp)
    ctx->pc = 0x4b4eacu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4eb0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b4eb4: 0xac600d30  sw          $zero, 0xD30($v1)
    ctx->pc = 0x4b4eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D30u, _value); } while (0);
    // 0x4b4eb8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b4ebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4ec0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4ec4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4b4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4b4ec8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4b4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b4ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b4eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b4ed0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4b4ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4b4ed4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4b4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4b4ed8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b4edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4ee0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b4ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b4ee4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b4ee8: 0xa7c00136  sh          $zero, 0x136($fp)
    ctx->pc = 0x4b4ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b4eec: 0xa7c00138  sh          $zero, 0x138($fp)
    ctx->pc = 0x4b4eecu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b4ef0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4ef4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4b4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b4ef8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b4ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4efc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b4efcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4f00: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4b4f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4f04: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4b4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b4f08: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b4f08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b4f0c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4b4f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4f10: 0xa7c9015a  sh          $t1, 0x15A($fp)
    ctx->pc = 0x4b4f10u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 346), (uint16_t)GPR_U32(ctx, 9));
    // 0x4b4f14: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b4f18: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b4f1c: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x4b4f1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b4f20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b4f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b4f24: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4b4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4b4f28: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4b4f2c: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x4B4F2Cu;
    SET_GPR_U32(ctx, 31, 0x4B4F34u);
    ctx->pc = 0x4B4F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F2Cu;
    // 0x4b4f30: 0x85040000  lh          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x4B4F2Cu, 0x4B4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F34u;
label_4b4f34:
    // 0x4b4f34: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x4b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
    // 0x4b4f38: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x4b4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x4b4f3c: 0xa7c2000c  sh          $v0, 0xC($fp)
    ctx->pc = 0x4b4f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4f40: 0xc124090  jal         func_490240
    ctx->pc = 0x4B4F40u;
    SET_GPR_U32(ctx, 31, 0x4B4F48u);
    ctx->pc = 0x4B4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F40u;
    // 0x4b4f44: 0xa7c3014a  sh          $v1, 0x14A($fp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 30), 330), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490240u, 0x4B4F40u, 0x4B4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F48u;
label_4b4f48:
    // 0x4b4f48: 0xa7c001b6  sh          $zero, 0x1B6($fp)
    ctx->pc = 0x4b4f48u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b4f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b4f50: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b4f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f54: 0xa7c201bc  sh          $v0, 0x1BC($fp)
    ctx->pc = 0x4b4f54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b4f58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b4f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4f5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b4f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b4f60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b4f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4f64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b4f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b4f68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b4f68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4f6c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b4f6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b4f70: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b4f70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4f74: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b4f74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b4f78: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b4f78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b4f7c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b4f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b4f80: 0x812d3ee  j           func_4B4FB8
    ctx->pc = 0x4B4F80u;
    ctx->pc = 0x4B4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F80u;
    // 0x4b4f84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4FB8u;
    goto label_4b4fb8;
    ctx->pc = 0x4B4F88u;
label_4b4f88:
    // 0x4b4f88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b4f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4f8c:
    // 0x4b4f8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b4f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b4f90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b4f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4f94: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b4f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b4f98: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b4f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4f9c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b4f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b4fa0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b4fa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b4fa4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b4fa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b4fa8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b4fa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b4fac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b4facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b4fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FB0u;
        // 0x4b4fb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4FB8u;
label_4b4fb8:
    // 0x4b4fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b4fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b4fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b4fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b4fcc: 0xc12d838  jal         func_4B60E0
    ctx->pc = 0x4B4FCCu;
    SET_GPR_U32(ctx, 31, 0x4B4FD4u);
    ctx->pc = 0x4B4FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4FCCu;
    // 0x4b4fd0: 0x2611014a  addiu       $s1, $s0, 0x14A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B60E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B60E0u, 0x4B4FCCu, 0x4B4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4FD4u;
label_4b4fd4:
    // 0x4b4fd4: 0xc12d4d8  jal         func_4B5360
    ctx->pc = 0x4B4FD4u;
    SET_GPR_U32(ctx, 31, 0x4B4FDCu);
    ctx->pc = 0x4B4FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4FD4u;
    // 0x4b4fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5360u, 0x4B4FD4u, 0x4B4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4FDCu;
label_4b4fdc:
    // 0x4b4fdc: 0xc12d5a4  jal         func_4B5690
    ctx->pc = 0x4B4FDCu;
    SET_GPR_U32(ctx, 31, 0x4B4FE4u);
    ctx->pc = 0x4B4FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4FDCu;
    // 0x4b4fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5690u, 0x4B4FDCu, 0x4B4FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4FE4u;
label_4b4fe4:
    // 0x4b4fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fe8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b4fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b4fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b4ff0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4b4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b4ff4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4FF4u;
    {
        const bool branch_taken_0x4b4ff4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FF4u;
        // 0x4b4ff8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ff4) {
            ctx->pc = 0x4B5010u;
            goto label_4b5010;
        }
    }
    ctx->pc = 0x4B4FFCu;
    // 0x4b4ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b4ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b5000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5008: 0x812da04  j           func_4B6810
    ctx->pc = 0x4B5008u;
    ctx->pc = 0x4B500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5008u;
    // 0x4b500c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6810u, 0x4B5008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B5010u;
label_4b5010:
    // 0x4b5010: 0xc1247f6  jal         func_491FD8
    ctx->pc = 0x4B5010u;
    SET_GPR_U32(ctx, 31, 0x4B5018u);
    ctx->pc = 0x491FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491FD8u, 0x4B5010u, 0x4B5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5018u;
label_4b5018:
    // 0x4b5018: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b5018u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b501c: 0x24e70d34  addiu       $a3, $a3, 0xD34
    ctx->pc = 0x4b501cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3380));
    // 0x4b5020: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b5020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5024: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b5028: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4b5028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4b502c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b5030: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4b5030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x4b5034: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5038: 0x24630d3c  addiu       $v1, $v1, 0xD3C
    ctx->pc = 0x4b5038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3388));
    // 0x4b503c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b5040: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4b5040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x4b5044: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b5044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b5048: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x4b5048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x4b504c: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x4b504cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b5050: 0xc123b78  jal         func_48EDE0
    ctx->pc = 0x4B5050u;
    SET_GPR_U32(ctx, 31, 0x4B5058u);
    ctx->pc = 0x4B5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5050u;
    // 0x4b5054: 0x84e40000  lh          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDE0u, 0x4B5050u, 0x4B5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5058u;
label_4b5058:
    // 0x4b5058: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b5058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b505c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4b505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4b5060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5064: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B5064u;
    SET_GPR_U32(ctx, 31, 0x4B506Cu);
    ctx->pc = 0x4B5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5064u;
    // 0x4b5068: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B5064u, 0x4B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B506Cu;
label_4b506c:
    // 0x4b506c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4b506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b5070: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x4b5070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4b5074: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4b5074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b507c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b507cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b5080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5088: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b508c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4b508cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5090: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5090u;
        // 0x4b5094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5098u;
label_4b5098:
    // 0x4b5098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b509c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b50a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b50a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b50a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b50a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b50a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b50ac: 0xc12d4d8  jal         func_4B5360
    ctx->pc = 0x4B50ACu;
    SET_GPR_U32(ctx, 31, 0x4B50B4u);
    ctx->pc = 0x4B50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50ACu;
    // 0x4b50b0: 0x2611014a  addiu       $s1, $s0, 0x14A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5360u, 0x4B50ACu, 0x4B50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50B4u;
label_4b50b4:
    // 0x4b50b4: 0xc12d5a4  jal         func_4B5690
    ctx->pc = 0x4B50B4u;
    SET_GPR_U32(ctx, 31, 0x4B50BCu);
    ctx->pc = 0x4B50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50B4u;
    // 0x4b50b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5690u, 0x4B50B4u, 0x4B50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50BCu;
label_4b50bc:
    // 0x4b50bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b50c0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b50c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b50c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b50c8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4b50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b50cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B50CCu;
    {
        const bool branch_taken_0x4b50cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50CCu;
        // 0x4b50d0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50cc) {
            ctx->pc = 0x4B50E8u;
            goto label_4b50e8;
        }
    }
    ctx->pc = 0x4B50D4u;
    // 0x4b50d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b50d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b50d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b50d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b50dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b50dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b50e0: 0x812da04  j           func_4B6810
    ctx->pc = 0x4B50E0u;
    ctx->pc = 0x4B50E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50E0u;
    // 0x4b50e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6810u, 0x4B50E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B50E8u;
label_4b50e8:
    // 0x4b50e8: 0xc124136  jal         func_4904D8
    ctx->pc = 0x4B50E8u;
    SET_GPR_U32(ctx, 31, 0x4B50F0u);
    ctx->pc = 0x4B50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50E8u;
    // 0x4b50ec: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x4B50E8u, 0x4B50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50F0u;
label_4b50f0:
    // 0x4b50f0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b50f4: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b50f8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x4b50f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x4b50fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b5100: 0xa445232c  sh          $a1, 0x232C($v0)
    ctx->pc = 0x4b5100u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4b5104: 0xa443232e  sh          $v1, 0x232E($v0)
    ctx->pc = 0x4b5104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4b5108: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B5108u;
    SET_GPR_U32(ctx, 31, 0x4B5110u);
    ctx->pc = 0x4B510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5108u;
    // 0x4b510c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B5108u, 0x4B5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5110u;
label_4b5110:
    // 0x4b5110: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B5110u;
    SET_GPR_U32(ctx, 31, 0x4B5118u);
    ctx->pc = 0x4B5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5110u;
    // 0x4b5114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B5110u, 0x4B5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5118u;
label_4b5118:
    // 0x4b5118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b511c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4b511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4b5120: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4b5120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5124: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4b5124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5128: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x4b5128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4b512c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b512cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5130: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b5130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b513c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b5140: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4b5140u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5144: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5144u;
        // 0x4b5148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B514Cu;
    // 0x4b514c: 0x0  nop
    ctx->pc = 0x4b514cu;
    // NOP
label_4b5150:
    // 0x4b5150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b5150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b5154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b5154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b5158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b5158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b515c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b5160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b5160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b5164: 0x2632014a  addiu       $s2, $s1, 0x14A
    ctx->pc = 0x4b5164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
    // 0x4b5168: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b5168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b516c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b5170: 0xc12d4d8  jal         func_4B5360
    ctx->pc = 0x4B5170u;
    SET_GPR_U32(ctx, 31, 0x4B5178u);
    ctx->pc = 0x4B5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5170u;
    // 0x4b5174: 0x3c13ffff  lui         $s3, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5360u, 0x4B5170u, 0x4B5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5178u;
label_4b5178:
    // 0x4b5178: 0xc12d5a4  jal         func_4B5690
    ctx->pc = 0x4B5178u;
    SET_GPR_U32(ctx, 31, 0x4B5180u);
    ctx->pc = 0x4B517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5178u;
    // 0x4b517c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5690u, 0x4B5178u, 0x4B5180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5180u;
label_4b5180:
    // 0x4b5180: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b5180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b5184: 0x24500d30  addiu       $s0, $v0, 0xD30
    ctx->pc = 0x4b5184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b5188: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4b5188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b518c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b5190: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b5190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5194: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b5194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b5198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b519c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b51a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b51a4: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4B51A4u;
    SET_GPR_U32(ctx, 31, 0x4B51ACu);
    ctx->pc = 0x4B51A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B51A4u;
    // 0x4b51a8: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4B51A4u, 0x4B51ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B51ACu;
label_4b51ac:
    // 0x4b51ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b51b0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b51b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b51b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b51b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b51b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b51b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b51bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b51c0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4b51c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b51c4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b51c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b51c8: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B51C8u;
    {
        const bool branch_taken_0x4b51c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B51C8u;
        // 0x4b51cc: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51c8) {
            ctx->pc = 0x4B51FCu;
            goto label_4b51fc;
        }
    }
    ctx->pc = 0x4B51D0u;
    // 0x4b51d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b51d4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b51d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b51d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b51dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b51e0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b51e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b51e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B51E4u;
    {
        const bool branch_taken_0x4b51e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b51e4) {
            ctx->pc = 0x4B51F4u;
            goto label_4b51f4;
        }
    }
    ctx->pc = 0x4B51ECu;
    // 0x4b51ec: 0xc12d716  jal         func_4B5C58
    ctx->pc = 0x4B51ECu;
    SET_GPR_U32(ctx, 31, 0x4B51F4u);
    ctx->pc = 0x4B51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B51ECu;
    // 0x4b51f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5C58u, 0x4B51ECu, 0x4B51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B51F4u;
label_4b51f4:
    // 0x4b51f4: 0xc12d73c  jal         func_4B5CF0
    ctx->pc = 0x4B51F4u;
    SET_GPR_U32(ctx, 31, 0x4B51FCu);
    ctx->pc = 0x4B51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B51F4u;
    // 0x4b51f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5CF0u, 0x4B51F4u, 0x4B51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B51FCu;
label_4b51fc:
    // 0x4b51fc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b51fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b5200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b5200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b5204: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4b5204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5208: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B5208u;
    {
        const bool branch_taken_0x4b5208 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5208u;
        // 0x4b520c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5208) {
            ctx->pc = 0x4B5230u;
            goto label_4b5230;
        }
    }
    ctx->pc = 0x4B5210u;
    // 0x4b5210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b5210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b5214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b521c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b521cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b5220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b5224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b5224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b5228: 0x812da04  j           func_4B6810
    ctx->pc = 0x4B5228u;
    ctx->pc = 0x4B522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5228u;
    // 0x4b522c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6810u, 0x4B5228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B5230u;
label_4b5230:
    // 0x4b5230: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x4b5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4b5234: 0x262401bc  addiu       $a0, $s1, 0x1BC
    ctx->pc = 0x4b5234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4b5238: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4b5238u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b523c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b523cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5240: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b5240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b5244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b5248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b524c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4b524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4b5250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b5250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b5254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b5254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b5258: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b5258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b525c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B525Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B525Cu;
        // 0x4b5260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B525Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5264u;
    // 0x4b5264: 0x0  nop
    ctx->pc = 0x4b5264u;
    // NOP
label_4b5268:
    // 0x4b5268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b526c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b5270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b5270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b5274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b5278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b527c: 0xc12d4d8  jal         func_4B5360
    ctx->pc = 0x4B527Cu;
    SET_GPR_U32(ctx, 31, 0x4B5284u);
    ctx->pc = 0x4B5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B527Cu;
    // 0x4b5280: 0x2611014a  addiu       $s1, $s0, 0x14A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5360u, 0x4B527Cu, 0x4B5284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5284u;
label_4b5284:
    // 0x4b5284: 0xc12d5a4  jal         func_4B5690
    ctx->pc = 0x4B5284u;
    SET_GPR_U32(ctx, 31, 0x4B528Cu);
    ctx->pc = 0x4B5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5284u;
    // 0x4b5288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5690u, 0x4B5284u, 0x4B528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B528Cu;
label_4b528c:
    // 0x4b528c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b528cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b5290: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b5290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b5294: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b5298: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b5298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b529c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b529cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b52a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b52a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b52a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b52a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b52a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b52ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b52acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b52b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b52b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b52b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b52b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b52b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b52b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b52bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b52c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b52c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b52c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b52c8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b52c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b52cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B52CCu;
    {
        const bool branch_taken_0x4b52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B52CCu;
        // 0x4b52d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b52cc) {
            ctx->pc = 0x4B52DCu;
            goto label_4b52dc;
        }
    }
    ctx->pc = 0x4B52D4u;
    // 0x4b52d4: 0xc12d73c  jal         func_4B5CF0
    ctx->pc = 0x4B52D4u;
    SET_GPR_U32(ctx, 31, 0x4B52DCu);
    ctx->pc = 0x4B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5CF0u, 0x4B52D4u, 0x4B52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52DCu;
label_4b52dc:
    // 0x4b52dc: 0x240201a4  addiu       $v0, $zero, 0x1A4
    ctx->pc = 0x4b52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x4b52e0: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x4b52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4b52e4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b52e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b52e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b52e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b52ec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b52ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b52f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b52f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b52f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b52f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b52f8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4b52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4b52fc: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b52fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b5300: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5300u;
        // 0x4b5304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5308u;
label_4b5308:
    // 0x4b5308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b530c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b5310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b5310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5314: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b5314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b5318: 0x2602014a  addiu       $v0, $s0, 0x14A
    ctx->pc = 0x4b5318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    // 0x4b531c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b531cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b5320: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b5320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b5324: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4b5324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b5328: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5328u;
    {
        const bool branch_taken_0x4b5328 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4B532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5328u;
        // 0x4b532c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5328) {
            ctx->pc = 0x4B5340u;
            goto label_4b5340;
        }
    }
    ctx->pc = 0x4B5330u;
    // 0x4b5330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b5334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5338: 0x812da04  j           func_4B6810
    ctx->pc = 0x4B5338u;
    ctx->pc = 0x4B533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5338u;
    // 0x4b533c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6810u, 0x4B5338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B5340u;
label_4b5340:
    // 0x4b5340: 0xc127fb6  jal         func_49FED8
    ctx->pc = 0x4B5340u;
    SET_GPR_U32(ctx, 31, 0x4B5348u);
    ctx->pc = 0x49FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FED8u, 0x4B5340u, 0x4B5348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5348u;
label_4b5348:
    // 0x4b5348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b534c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b534cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b5350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b5350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5354: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B5354u;
    ctx->pc = 0x4B5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5354u;
    // 0x4b5358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B535Cu;
    // 0x4b535c: 0x0  nop
    ctx->pc = 0x4b535cu;
    // NOP
    ctx->pc = 0x4b5360u;
}
