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

// Function: sub_004C7470
// Address: 0x4c7470 - 0x4c7b88
void sub_004C7470_0x4c7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7470_0x4c7470");
#endif

    switch (ctx->pc) {
        case 0x4c749cu: goto label_4c749c;
        case 0x4c74bcu: goto label_4c74bc;
        case 0x4c7640u: goto label_4c7640;
        case 0x4c7788u: goto label_4c7788;
        case 0x4c7798u: goto label_4c7798;
        case 0x4c7914u: goto label_4c7914;
        case 0x4c79f8u: goto label_4c79f8;
        case 0x4c7ad4u: goto label_4c7ad4;
        case 0x4c7adcu: goto label_4c7adc;
        case 0x4c7ae4u: goto label_4c7ae4;
        case 0x4c7aecu: goto label_4c7aec;
        case 0x4c7af4u: goto label_4c7af4;
        case 0x4c7b08u: goto label_4c7b08;
        case 0x4c7b30u: goto label_4c7b30;
        case 0x4c7b38u: goto label_4c7b38;
        case 0x4c7b40u: goto label_4c7b40;
        case 0x4c7b48u: goto label_4c7b48;
        case 0x4c7b58u: goto label_4c7b58;
        case 0x4c7b6cu: goto label_4c7b6c;
        case 0x4c7b74u: goto label_4c7b74;
        default: break;
    }

    ctx->pc = 0x4c7470u;

    // 0x4c7470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c7470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c7474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c7474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c7478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c7478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c747c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c7480: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c7480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c7484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c7488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c748c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c7490: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c7490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c7494: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C7494u;
    SET_GPR_U32(ctx, 31, 0x4C749Cu);
    ctx->pc = 0x4C7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7494u;
    // 0x4c7498: 0x263301b4  addiu       $s3, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C7494u, 0x4C749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C749Cu;
label_4c749c:
    // 0x4c749c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c749cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c74a0: 0x24740f48  addiu       $s4, $v1, 0xF48
    ctx->pc = 0x4c74a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3912));
    // 0x4c74a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c74a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F48u, _value); } while (0);
    // 0x4c74a8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c74a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c74ac: 0x4400076  bltz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x4C74ACu;
    {
        const bool branch_taken_0x4c74ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C74ACu;
        // 0x4c74b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74ac) {
            ctx->pc = 0x4C7688u;
            goto label_4c7688;
        }
    }
    ctx->pc = 0x4C74B4u;
    // 0x4c74b4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C74B4u;
    SET_GPR_U32(ctx, 31, 0x4C74BCu);
    ctx->pc = 0x4C74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C74B4u;
    // 0x4c74b8: 0x3c15007f  lui         $s5, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C74B4u, 0x4C74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C74BCu;
label_4c74bc:
    // 0x4c74bc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c74c0: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4c74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4c74c4: 0x24c60f44  addiu       $a2, $a2, 0xF44
    ctx->pc = 0x4c74c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3908));
    // 0x4c74c8: 0x24a57198  addiu       $a1, $a1, 0x7198
    ctx->pc = 0x4c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29080));
    // 0x4c74cc: 0x26b20f24  addiu       $s2, $s5, 0xF24
    ctx->pc = 0x4c74ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 3876));
    // 0x4c74d0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4c74d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F44u, _value); } while (0);
    // 0x4c74d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c74d8: 0x26300162  addiu       $s0, $s1, 0x162
    ctx->pc = 0x4c74d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
    // 0x4c74dc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c74dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c74e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c74e4: 0x258c0f30  addiu       $t4, $t4, 0xF30
    ctx->pc = 0x4c74e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3888));
    // 0x4c74e8: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4c74e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4c74ec: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c74ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c74f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c74f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c74f4: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c74f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c74f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c74fc: 0x25ad0f34  addiu       $t5, $t5, 0xF34
    ctx->pc = 0x4c74fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3892));
    // 0x4c7500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c7500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7504: 0x25ce0f38  addiu       $t6, $t6, 0xF38
    ctx->pc = 0x4c7504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3896));
    // 0x4c7508: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c7508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c750c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c750cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7510: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4c7510u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4c7514: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c7514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7518: 0x25ef0f28  addiu       $t7, $t7, 0xF28
    ctx->pc = 0x4c7518u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3880));
    // 0x4c751c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c751cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c7520: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c7524: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c7524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7528: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c7528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c752c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4c752cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7530: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c7530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c7534: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c7534u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c7538: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c7538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c753c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c7540: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c7540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c7544: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c7544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c7548: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4c7548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c754c: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x4c754cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c7550: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4c7554: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c7558: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c7558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c755c: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4c755cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c7560: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7564: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7568: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c756c: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4c756cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c7570: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c7570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c7574: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c7578: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c7578u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c757c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c757cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7580: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c7580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c7584: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c7584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c7588: 0x8e8b0000  lw          $t3, 0x0($s4)
    ctx->pc = 0x4c7588u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c758c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c7590: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4c7590u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c7594: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7598: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c7598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c759c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c75a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c75a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c75a4: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c75a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c75a8: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c75a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c75ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c75acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c75b0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4c75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c75b4: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4c75b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c75b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c75b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c75bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c75bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c75c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c75c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c75c4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c75c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c75c8: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4c75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4c75cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c75ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c75d0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c75d4: 0x85c80000  lh          $t0, 0x0($t6)
    ctx->pc = 0x4c75d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c75d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c75d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c75dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c75dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c75e0: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c75e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c75e4: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x4c75e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x4c75e8: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4c75e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4c75ec: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c75f0: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4c75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4c75f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c75f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c75f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c75fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c7600: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c7600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c7604: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c7604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c7608: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c7608u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c760c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4c7610: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c7614: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7618: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c7618u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c761c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x4c761cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x4c7620: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4c7620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4c7624: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4c7624u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4c7628: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c7628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c762c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c7630: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4c7630u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4c7634: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4c7634u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4c7638: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C7638u;
    SET_GPR_U32(ctx, 31, 0x4C7640u);
    ctx->pc = 0x4C763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7638u;
    // 0x4c763c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C7638u, 0x4C7640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7640u;
label_4c7640:
    // 0x4c7640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c7640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c7644: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C7644u;
    {
        const bool branch_taken_0x4c7644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c7644) {
            ctx->pc = 0x4C7648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7644u;
            // 0x4c7648: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7658u;
            goto label_4c7658;
        }
    }
    ctx->pc = 0x4C764Cu;
    // 0x4c764c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4c764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C7650u;
    {
        const bool branch_taken_0x4c7650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7650u;
        // 0x4c7654: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7650) {
            ctx->pc = 0x4C7660u;
            goto label_4c7660;
        }
    }
    ctx->pc = 0x4C7658u;
label_4c7658:
    // 0x4c7658: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c765c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c7660:
    // 0x4c7660: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4c7660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4c7664: 0x24030411  addiu       $v1, $zero, 0x411
    ctx->pc = 0x4c7664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x4c7668: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x4c7668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c766c: 0x96a20f24  lhu         $v0, 0xF24($s5)
    ctx->pc = 0x4c766cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3876)));
    // 0x4c7670: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4c7670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7674: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4c7674u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7678: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4c7678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c767c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4c767cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c7680: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c7680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c7684: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4c7684u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c7688:
    // 0x4c7688: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x4c7688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x4c768c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c7690: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4C7690u;
    {
        const bool branch_taken_0x4c7690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7690u;
        // 0x4c7694: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7690) {
            ctx->pc = 0x4C76E8u;
            goto label_4c76e8;
        }
    }
    ctx->pc = 0x4C7698u;
    // 0x4c7698: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C7698u;
    {
        const bool branch_taken_0x4c7698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7698) {
            ctx->pc = 0x4C769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7698u;
            // 0x4c769c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C76B0u;
            goto label_4c76b0;
        }
    }
    ctx->pc = 0x4C76A0u;
    // 0x4c76a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C76A0u;
    {
        const bool branch_taken_0x4c76a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76A0u;
        // 0x4c76a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76a0) {
            ctx->pc = 0x4C76C0u;
            goto label_4c76c0;
        }
    }
    ctx->pc = 0x4C76A8u;
    // 0x4c76a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4C76A8u;
    {
        const bool branch_taken_0x4c76a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76A8u;
        // 0x4c76ac: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76a8) {
            ctx->pc = 0x4C7738u;
            goto label_4c7738;
        }
    }
    ctx->pc = 0x4C76B0u;
label_4c76b0:
    // 0x4c76b0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4C76B0u;
    {
        const bool branch_taken_0x4c76b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76B0u;
        // 0x4c76b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76b0) {
            ctx->pc = 0x4C7710u;
            goto label_4c7710;
        }
    }
    ctx->pc = 0x4C76B8u;
    // 0x4c76b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4C76B8u;
    {
        const bool branch_taken_0x4c76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C76B8u;
        // 0x4c76bc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76b8) {
            ctx->pc = 0x4C7738u;
            goto label_4c7738;
        }
    }
    ctx->pc = 0x4C76C0u;
label_4c76c0:
    // 0x4c76c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c76c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c76c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c76c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c76c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c76cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c76ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c76d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c76d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c76d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c76d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c76d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c76d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c76dc: 0x8131dd6  j           func_4C7758
    ctx->pc = 0x4C76DCu;
    ctx->pc = 0x4C76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C76DCu;
    // 0x4c76e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7758u;
    goto label_4c7758;
    ctx->pc = 0x4C76E4u;
    // 0x4c76e4: 0x0  nop
    ctx->pc = 0x4c76e4u;
    // NOP
label_4c76e8:
    // 0x4c76e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c76e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c76ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c76ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c76f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c76f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c76f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c76f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c76f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c76f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c76fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c76fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7700: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c7700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c7704: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c7704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c7708: 0x8131df8  j           func_4C77E0
    ctx->pc = 0x4C7708u;
    ctx->pc = 0x4C770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7708u;
    // 0x4c770c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C77E0u;
    goto label_4c77e0;
    ctx->pc = 0x4C7710u;
label_4c7710:
    // 0x4c7710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c7710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c771c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c771cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c7720: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c7720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7724: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c7724u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c7728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c7728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c772c: 0x8131e78  j           func_4C79E0
    ctx->pc = 0x4C772Cu;
    ctx->pc = 0x4C7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C772Cu;
    // 0x4c7730: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C79E0u;
    goto label_4c79e0;
    ctx->pc = 0x4C7734u;
    // 0x4c7734: 0x0  nop
    ctx->pc = 0x4c7734u;
    // NOP
label_4c7738:
    // 0x4c7738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c773c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c773cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c7740: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c7740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7744: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c7744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c7748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c7748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c774c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C774Cu;
        // 0x4c7750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C774Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C7754u;
    // 0x4c7754: 0x0  nop
    ctx->pc = 0x4c7754u;
    // NOP
label_4c7758:
    // 0x4c7758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c7758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c775c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c7760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c7764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c7768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c776c: 0x24420f24  addiu       $v0, $v0, 0xF24
    ctx->pc = 0x4c776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3876));
    // 0x4c7770: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c7770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7774: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c7774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c7778: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c7778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c777c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4c777cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4c7780: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C7780u;
    SET_GPR_U32(ctx, 31, 0x4C7788u);
    ctx->pc = 0x4C7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7780u;
    // 0x4c7784: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C7780u, 0x4C7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7788u;
label_4c7788:
    // 0x4c7788: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C7788u;
    {
        const bool branch_taken_0x4c7788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7788u;
        // 0x4c778c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7788) {
            ctx->pc = 0x4C77D0u;
            goto label_4c77d0;
        }
    }
    ctx->pc = 0x4C7790u;
    // 0x4c7790: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4C7790u;
    SET_GPR_U32(ctx, 31, 0x4C7798u);
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4C7790u, 0x4C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7798u;
label_4c7798:
    // 0x4c7798: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x4c7798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x4c779c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4c779cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c77a0: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c77a4: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4c77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4c77a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c77a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c77ac: 0xa44001be  sh          $zero, 0x1BE($v0)
    ctx->pc = 0x4c77acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c77b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c77b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c77b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c77b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c77b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c77b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c77bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c77c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c77c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c77c4: 0x8131df8  j           func_4C77E0
    ctx->pc = 0x4C77C4u;
    ctx->pc = 0x4C77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C77C4u;
    // 0x4c77c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C77E0u;
    goto label_4c77e0;
    ctx->pc = 0x4C77CCu;
    // 0x4c77cc: 0x0  nop
    ctx->pc = 0x4c77ccu;
    // NOP
label_4c77d0:
    // 0x4c77d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c77d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c77d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c77d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c77d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C77D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C77D8u;
        // 0x4c77dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C77D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C77E0u;
label_4c77e0:
    // 0x4c77e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c77e4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c77e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c77e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c77ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c77ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c77f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c77f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c77f4: 0x256b0f30  addiu       $t3, $t3, 0xF30
    ctx->pc = 0x4c77f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3888));
    // 0x4c77f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c77f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c77fc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c77fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c7800: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c7800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c7804: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c7804u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c7808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c7808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c780c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7810: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c7810u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c7814: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c7814u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c7818: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x4c7818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4c781c: 0x258c0f34  addiu       $t4, $t4, 0xF34
    ctx->pc = 0x4c781cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3892));
    // 0x4c7820: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4c7820u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F30u));
    // 0x4c7824: 0x25ad0f38  addiu       $t5, $t5, 0xF38
    ctx->pc = 0x4c7824u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3896));
    // 0x4c7828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c782c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4c782cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F34u));
    // 0x4c7830: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7834: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c7834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c7838: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c7838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c783c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c783cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c7840: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c7840u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c7844: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7848: 0x264f0f28  addiu       $t7, $s2, 0xF28
    ctx->pc = 0x4c7848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 3880));
    // 0x4c784c: 0x26710f24  addiu       $s1, $s3, 0xF24
    ctx->pc = 0x4c784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 3876));
    // 0x4c7850: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c7854: 0x8c8e0f48  lw          $t6, 0xF48($a0)
    ctx->pc = 0x4c7854u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3912)));
    // 0x4c7858: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c785c: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4c785cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c7860: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7864: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4c7864u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c7868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c786c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c786cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c7870: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c7870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c7874: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c7874u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c7878: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c787c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4c787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c7880: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4c7880u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c7884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c7888: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c7888u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c788c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c788cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c7894: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c7894u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c7898: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c7898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c789c: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c789cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c78a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c78a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c78a4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4c78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c78a8: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4c78a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c78ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c78acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c78b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c78b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c78b4: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c78b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c78b8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x4c78b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x4c78bc: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4c78bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4c78c0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c78c4: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x4c78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4c78c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c78c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c78cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c78ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c78d0: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c78d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c78d4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x4c78d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x4c78d8: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c78d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c78dc: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c78e0: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4c78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4c78e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c78e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c78e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c78ec: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c78f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c78f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4c78f4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c78f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4c78f8: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c78fc: 0x86020162  lh          $v0, 0x162($s0)
    ctx->pc = 0x4c78fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4c7900: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c7900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c7904: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4c7904u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4c7908: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4c7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c790c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C790Cu;
    SET_GPR_U32(ctx, 31, 0x4C7914u);
    ctx->pc = 0x4C7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C790Cu;
    // 0x4c7910: 0xadea0000  sw          $t2, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C790Cu, 0x4C7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7914u;
label_4c7914:
    // 0x4c7914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c7914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c7918: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C7918u;
    {
        const bool branch_taken_0x4c7918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c7918) {
            ctx->pc = 0x4C791Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7918u;
            // 0x4c791c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7930u;
            goto label_4c7930;
        }
    }
    ctx->pc = 0x4C7920u;
    // 0x4c7920: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C7924u;
    {
        const bool branch_taken_0x4c7924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7924u;
        // 0x4c7928: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7924) {
            ctx->pc = 0x4C7938u;
            goto label_4c7938;
        }
    }
    ctx->pc = 0x4C792Cu;
    // 0x4c792c: 0x0  nop
    ctx->pc = 0x4c792cu;
    // NOP
label_4c7930:
    // 0x4c7930: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c7934: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c7938:
    // 0x4c7938: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c7938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c793c: 0x26440f28  addiu       $a0, $s2, 0xF28
    ctx->pc = 0x4c793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3880));
    // 0x4c7940: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c7940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7944: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c7944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c7948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c7948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c794c: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x4c794cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4c7950: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7954: 0x82670f24  lb          $a3, 0xF24($s3)
    ctx->pc = 0x4c7954u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3876)));
    // 0x4c7958: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c7958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c795c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7960: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c7960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c7964: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c7964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c7968: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4c7968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c796c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4c796cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c7970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c7970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4c7974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c7978: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c7978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c797c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4c797cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c7980: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C7980u;
    {
        const bool branch_taken_0x4c7980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c7980) {
            ctx->pc = 0x4C7984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7980u;
            // 0x4c7984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C79A8u;
            goto label_4c79a8;
        }
    }
    ctx->pc = 0x4C7988u;
    // 0x4c7988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c798c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c798cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c7998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c799c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c799cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c79a0: 0x8131e78  j           func_4C79E0
    ctx->pc = 0x4C79A0u;
    ctx->pc = 0x4C79A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C79A0u;
    // 0x4c79a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C79E0u;
    goto label_4c79e0;
    ctx->pc = 0x4C79A8u;
label_4c79a8:
    // 0x4c79a8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c79ac: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4c79acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c79b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c79b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c79b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c79b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c79b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c79b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c79bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c79bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c79c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c79c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c79c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c79c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c79c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c79cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c79ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c79d0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c79d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c79d4: 0x8131e78  j           func_4C79E0
    ctx->pc = 0x4C79D4u;
    ctx->pc = 0x4C79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C79D4u;
    // 0x4c79d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C79E0u;
    goto label_4c79e0;
    ctx->pc = 0x4C79DCu;
    // 0x4c79dc: 0x0  nop
    ctx->pc = 0x4c79dcu;
    // NOP
label_4c79e0:
    // 0x4c79e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c79e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c79e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c79ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c79ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c79f0: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C79F0u;
    SET_GPR_U32(ctx, 31, 0x4C79F8u);
    ctx->pc = 0x4C79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C79F0u;
    // 0x4c79f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C79F0u, 0x4C79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C79F8u;
label_4c79f8:
    // 0x4c79f8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c79fc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c7a00: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c7a04: 0x246f0f30  addiu       $t7, $v1, 0xF30
    ctx->pc = 0x4c7a04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 3888));
    // 0x4c7a08: 0x24910f34  addiu       $s1, $a0, 0xF34
    ctx->pc = 0x4c7a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3892));
    // 0x4c7a0c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c7a10: 0x24b80f38  addiu       $t8, $a1, 0xF38
    ctx->pc = 0x4c7a10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
    // 0x4c7a14: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4c7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4c7a18: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c7a1c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7a20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c7a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7a24: 0x248e0f44  addiu       $t6, $a0, 0xF44
    ctx->pc = 0x4c7a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 3908));
    // 0x4c7a28: 0x24630f24  addiu       $v1, $v1, 0xF24
    ctx->pc = 0x4c7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3876));
    // 0x4c7a2c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x4C7A2Cu;
    {
        const bool branch_taken_0x4c7a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7A2Cu;
        // 0x4c7a30: 0x24a571a0  addiu       $a1, $a1, 0x71A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7a2c) {
            ctx->pc = 0x4C7B74u;
            goto label_4c7b74;
        }
    }
    ctx->pc = 0x4C7A34u;
    // 0x4c7a34: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4c7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4c7a38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4c7a3c: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4c7a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4c7a40: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C7A40u;
    {
        const bool branch_taken_0x4c7a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7a40) {
            ctx->pc = 0x4C7A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7A40u;
            // 0x4c7a44: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7A5Cu;
            goto label_4c7a5c;
        }
    }
    ctx->pc = 0x4C7A48u;
    // 0x4c7a48: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c7a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c7a4c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4c7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4c7a50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4c7a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c7a54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4c7a58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c7a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4c7a5c:
    // 0x4c7a5c: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x4c7a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c7a60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c7a64: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x4c7a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7a68: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c7a68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c7a6c: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x4c7a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4c7a70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c7a74: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c7a74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c7a78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c7a7c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c7a7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c7a80: 0x244b0002  addiu       $t3, $v0, 0x2
    ctx->pc = 0x4c7a80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c7a84: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4c7a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c7a88: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4c7a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c7a8c: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4c7a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c7a90: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4c7a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c7a94: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4c7a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4c7a98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4c7a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4c7a9c: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x4c7a9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x4c7aa0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4c7aa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4c7aa4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4c7aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4c7aa8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c7aa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c7aac: 0xadea0000  sw          $t2, 0x0($t7)
    ctx->pc = 0x4c7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 10));
    // 0x4c7ab0: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c7ab0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c7ab4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4c7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7ab8: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4c7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4c7abc: 0x244d0006  addiu       $t5, $v0, 0x6
    ctx->pc = 0x4c7abcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4c7ac0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4c7ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7ac4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4c7ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7ac8: 0xaf080000  sw          $t0, 0x0($t8)
    ctx->pc = 0x4c7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 8));
    // 0x4c7acc: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4C7ACCu;
    SET_GPR_U32(ctx, 31, 0x4C7AD4u);
    ctx->pc = 0x4C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7ACCu;
    // 0x4c7ad0: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4C7ACCu, 0x4C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7AD4u;
label_4c7ad4:
    // 0x4c7ad4: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C7AD4u;
    SET_GPR_U32(ctx, 31, 0x4C7ADCu);
    ctx->pc = 0x4C7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7AD4u;
    // 0x4c7ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C7AD4u, 0x4C7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7ADCu;
label_4c7adc:
    // 0x4c7adc: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C7ADCu;
    SET_GPR_U32(ctx, 31, 0x4C7AE4u);
    ctx->pc = 0x4C7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7ADCu;
    // 0x4c7ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C7ADCu, 0x4C7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7AE4u;
label_4c7ae4:
    // 0x4c7ae4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C7AE4u;
    SET_GPR_U32(ctx, 31, 0x4C7AECu);
    ctx->pc = 0x4C7AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7AE4u;
    // 0x4c7ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C7AE4u, 0x4C7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7AECu;
label_4c7aec:
    // 0x4c7aec: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C7AECu;
    SET_GPR_U32(ctx, 31, 0x4C7AF4u);
    ctx->pc = 0x4C7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7AECu;
    // 0x4c7af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C7AECu, 0x4C7AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7AF4u;
label_4c7af4:
    // 0x4c7af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7af8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4C7AF8u;
    {
        const bool branch_taken_0x4c7af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7AF8u;
        // 0x4c7afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7af8) {
            ctx->pc = 0x4C7B74u;
            goto label_4c7b74;
        }
    }
    ctx->pc = 0x4C7B00u;
    // 0x4c7b00: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C7B00u;
    SET_GPR_U32(ctx, 31, 0x4C7B08u);
    ctx->pc = 0x4C7B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B00u;
    // 0x4c7b04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C7B00u, 0x4C7B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B08u;
label_4c7b08:
    // 0x4c7b08: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c7b0c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4c7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c7b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7b14: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4C7B14u;
    {
        const bool branch_taken_0x4c7b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B14u;
        // 0x4c7b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7b14) {
            ctx->pc = 0x4C7B50u;
            goto label_4c7b50;
        }
    }
    ctx->pc = 0x4C7B1Cu;
    // 0x4c7b1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c7b20: 0xa460232c  sh          $zero, 0x232C($v1)
    ctx->pc = 0x4c7b20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c7b24: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4c7b24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7b28: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C7B28u;
    SET_GPR_U32(ctx, 31, 0x4C7B30u);
    ctx->pc = 0x4C7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B28u;
    // 0x4c7b2c: 0xa460232e  sh          $zero, 0x232E($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9006), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C7B28u, 0x4C7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B30u;
label_4c7b30:
    // 0x4c7b30: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C7B30u;
    SET_GPR_U32(ctx, 31, 0x4C7B38u);
    ctx->pc = 0x4C7B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B30u;
    // 0x4c7b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C7B30u, 0x4C7B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B38u;
label_4c7b38:
    // 0x4c7b38: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C7B38u;
    SET_GPR_U32(ctx, 31, 0x4C7B40u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C7B38u, 0x4C7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B40u;
label_4c7b40:
    // 0x4c7b40: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C7B40u;
    SET_GPR_U32(ctx, 31, 0x4C7B48u);
    ctx->pc = 0x4C7B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B40u;
    // 0x4c7b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C7B40u, 0x4C7B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B48u;
label_4c7b48:
    // 0x4c7b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C7B48u;
    {
        const bool branch_taken_0x4c7b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B48u;
        // 0x4c7b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7b48) {
            ctx->pc = 0x4C7B78u;
            goto label_4c7b78;
        }
    }
    ctx->pc = 0x4C7B50u;
label_4c7b50:
    // 0x4c7b50: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C7B50u;
    SET_GPR_U32(ctx, 31, 0x4C7B58u);
    ctx->pc = 0x4C7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B50u;
    // 0x4c7b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C7B50u, 0x4C7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B58u;
label_4c7b58:
    // 0x4c7b58: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C7B58u;
    {
        const bool branch_taken_0x4c7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B58u;
        // 0x4c7b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7b58) {
            ctx->pc = 0x4C7B74u;
            goto label_4c7b74;
        }
    }
    ctx->pc = 0x4C7B60u;
    // 0x4c7b60: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c7b64: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C7B64u;
    SET_GPR_U32(ctx, 31, 0x4C7B6Cu);
    ctx->pc = 0x4C7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B64u;
    // 0x4c7b68: 0xa440f9ae  sh          $zero, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C7B64u, 0x4C7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B6Cu;
label_4c7b6c:
    // 0x4c7b6c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C7B6Cu;
    SET_GPR_U32(ctx, 31, 0x4C7B74u);
    ctx->pc = 0x4C7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B6Cu;
    // 0x4c7b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C7B6Cu, 0x4C7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7B74u;
label_4c7b74:
    // 0x4c7b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7b78:
    // 0x4c7b78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7B80u;
        // 0x4c7b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C7B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C7B88u;
}
