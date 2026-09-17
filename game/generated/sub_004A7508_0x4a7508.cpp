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

// Function: sub_004A7508
// Address: 0x4a7508 - 0x4a7940
void sub_004A7508_0x4a7508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7508_0x4a7508");
#endif

    switch (ctx->pc) {
        case 0x4a76c4u: goto label_4a76c4;
        case 0x4a76d0u: goto label_4a76d0;
        case 0x4a78b8u: goto label_4a78b8;
        case 0x4a78c4u: goto label_4a78c4;
        default: break;
    }

    ctx->pc = 0x4a7508u;

    // 0x4a7508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a7508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a750c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a750cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a7514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a7514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7518: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a751c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4a751cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4a7520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a7524: 0x26680c44  addiu       $t0, $s3, 0xC44
    ctx->pc = 0x4a7524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a7528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a752c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4a752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4a7530: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a7534: 0x8627002e  lh          $a3, 0x2E($s1)
    ctx->pc = 0x4a7534u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x4a7538: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a753c: 0xe91825  or          $v1, $a3, $t1
    ctx->pc = 0x4a753cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4a7540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7548: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a754c: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4a754cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7550: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x4A7550u;
    {
        const bool branch_taken_0x4a7550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7550u;
        // 0x4a7554: 0x3c14007f  lui         $s4, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7550) {
            ctx->pc = 0x4A7668u;
            goto label_4a7668;
        }
    }
    ctx->pc = 0x4A7558u;
    // 0x4a7558: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x4a7558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a755c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A755Cu;
    {
        const bool branch_taken_0x4a755c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4A7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A755Cu;
        // 0x4a7560: 0x26850c48  addiu       $a1, $s4, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a755c) {
            ctx->pc = 0x4A7570u;
            goto label_4a7570;
        }
    }
    ctx->pc = 0x4A7564u;
    // 0x4a7564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7568u;
    {
        const bool branch_taken_0x4a7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7568u;
        // 0x4a756c: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7568) {
            ctx->pc = 0x4A757Cu;
            goto label_4a757c;
        }
    }
    ctx->pc = 0x4A7570u;
label_4a7570:
    // 0x4a7570: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7574: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7578: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a757c:
    // 0x4a757c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a757cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7580: 0x26640c44  addiu       $a0, $s3, 0xC44
    ctx->pc = 0x4a7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a7584: 0x26290026  addiu       $t1, $s1, 0x26
    ctx->pc = 0x4a7584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x4a7588: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a758c: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4a758cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7590: 0x262a002a  addiu       $t2, $s1, 0x2A
    ctx->pc = 0x4a7590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
    // 0x4a7594: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a7594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7598: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a7598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a759c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a75a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a75a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a75a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a75a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a75ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a75b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a75b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a75b4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a75b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a75b8: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a75b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a75bc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a75c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a75c4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A75C4u;
    {
        const bool branch_taken_0x4a75c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A75C4u;
        // 0x4a75c8: 0x25050c4c  addiu       $a1, $t0, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a75c4) {
            ctx->pc = 0x4A75D8u;
            goto label_4a75d8;
        }
    }
    ctx->pc = 0x4A75CCu;
    // 0x4a75cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a75d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A75D0u;
    {
        const bool branch_taken_0x4a75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A75D0u;
        // 0x4a75d4: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a75d0) {
            ctx->pc = 0x4A75E4u;
            goto label_4a75e4;
        }
    }
    ctx->pc = 0x4A75D8u;
label_4a75d8:
    // 0x4a75d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a75dc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a75e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a75e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a75e4:
    // 0x4a75e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a75e8: 0x25640c48  addiu       $a0, $t3, 0xC48
    ctx->pc = 0x4a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3144));
    // 0x4a75ec: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a75ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a75f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a75f4: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a75f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a75f8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a75f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a75fc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a7600: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a7600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a7604: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a7604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7608: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a760c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a760cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7610: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A7610u;
    {
        const bool branch_taken_0x4a7610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7610u;
        // 0x4a7614: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7610) {
            ctx->pc = 0x4A76ACu;
            goto label_4a76ac;
        }
    }
    ctx->pc = 0x4A7618u;
    // 0x4a7618: 0x26680c44  addiu       $t0, $s3, 0xC44
    ctx->pc = 0x4a7618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a761c: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7620: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7620u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a7624: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a7624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7628: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a762c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7630: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a7630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a7634: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a7638: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a763c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7640: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7644: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7648: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a764c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7650: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a7650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a7654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7658: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a7658u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a765c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A765Cu;
    {
        const bool branch_taken_0x4a765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A765Cu;
        // 0x4a7660: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a765c) {
            ctx->pc = 0x4A76ACu;
            goto label_4a76ac;
        }
    }
    ctx->pc = 0x4A7664u;
    // 0x4a7664: 0x0  nop
    ctx->pc = 0x4a7664u;
    // NOP
label_4a7668:
    // 0x4a7668: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a7668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a766c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7670: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a7674: 0x8627002a  lh          $a3, 0x2A($s1)
    ctx->pc = 0x4a7674u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x4a7678: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a7678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C50u));
    // 0x4a767c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a767cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C50u));
    // 0x4a7680: 0xe92825  or          $a1, $a3, $t1
    ctx->pc = 0x4a7680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4a7684: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a7688: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a7688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a768c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7690: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7694: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7694u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7698: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a7698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a769c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a76a0: 0x26290026  addiu       $t1, $s1, 0x26
    ctx->pc = 0x4a76a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x4a76a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a76a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a76a8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4a76ac:
    // 0x4a76ac: 0x26720c44  addiu       $s2, $s3, 0xC44
    ctx->pc = 0x4a76acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a76b0: 0x26900c48  addiu       $s0, $s4, 0xC48
    ctx->pc = 0x4a76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a76b4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a76b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a76b8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4a76b8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a76bc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A76BCu;
    SET_GPR_U32(ctx, 31, 0x4A76C4u);
    ctx->pc = 0x4A76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76BCu;
    // 0x4a76c0: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A76BCu, 0x4A76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76C4u;
label_4a76c4:
    // 0x4a76c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a76c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a76c8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A76C8u;
    SET_GPR_U32(ctx, 31, 0x4A76D0u);
    ctx->pc = 0x4A76CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A76C8u;
    // 0x4a76cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A76C8u, 0x4A76D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A76D0u;
label_4a76d0:
    // 0x4a76d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a76d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a76d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a76d8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a76d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a76dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a76e0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4a76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4a76e4: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4a76e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4a76e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a76e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a76ec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a76ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a76f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a76f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a76f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a76f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a76fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a76fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7700: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a7704: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a770c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a770cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a7710: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a7710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7714: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7718: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a771c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7720: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a7724: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7728: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a772c: 0x86270030  lh          $a3, 0x30($s1)
    ctx->pc = 0x4a772cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x4a7730: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a7730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a7734: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x4a7734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4a7738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a773c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7740: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4a7740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4a7744: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4a7744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a7748: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x4A7748u;
    {
        const bool branch_taken_0x4a7748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7748u;
        // 0x4a774c: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7748) {
            ctx->pc = 0x4A7860u;
            goto label_4a7860;
        }
    }
    ctx->pc = 0x4A7750u;
    // 0x4a7750: 0x4820005  bltzl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7750u;
    {
        const bool branch_taken_0x4a7750 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4a7750) {
            ctx->pc = 0x4A7754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7750u;
            // 0x4a7754: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7768u;
            goto label_4a7768;
        }
    }
    ctx->pc = 0x4A7758u;
    // 0x4a7758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a7758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a775c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A775Cu;
    {
        const bool branch_taken_0x4a775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A775Cu;
        // 0x4a7760: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a775c) {
            ctx->pc = 0x4A7770u;
            goto label_4a7770;
        }
    }
    ctx->pc = 0x4A7764u;
    // 0x4a7764: 0x0  nop
    ctx->pc = 0x4a7764u;
    // NOP
label_4a7768:
    // 0x4a7768: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a776c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7770:
    // 0x4a7770: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a7770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a7774: 0x26640c44  addiu       $a0, $s3, 0xC44
    ctx->pc = 0x4a7774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a7778: 0x26290028  addiu       $t1, $s1, 0x28
    ctx->pc = 0x4a7778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x4a777c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a777cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7780: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4a7780u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7784: 0x262a002c  addiu       $t2, $s1, 0x2C
    ctx->pc = 0x4a7784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x4a7788: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a7788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a778c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a778cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a7790: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a7798: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a779c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a77a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a77a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a77a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a77a8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a77a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a77ac: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a77acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a77b0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a77b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a77b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A77B8u;
    {
        const bool branch_taken_0x4a77b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77B8u;
        // 0x4a77bc: 0x25050c4c  addiu       $a1, $t0, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77b8) {
            ctx->pc = 0x4A77D0u;
            goto label_4a77d0;
        }
    }
    ctx->pc = 0x4A77C0u;
    // 0x4a77c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a77c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A77C4u;
    {
        const bool branch_taken_0x4a77c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A77C4u;
        // 0x4a77c8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a77c4) {
            ctx->pc = 0x4A77DCu;
            goto label_4a77dc;
        }
    }
    ctx->pc = 0x4A77CCu;
    // 0x4a77cc: 0x0  nop
    ctx->pc = 0x4a77ccu;
    // NOP
label_4a77d0:
    // 0x4a77d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a77d4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a77d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a77d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a77dc:
    // 0x4a77dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a77e0: 0x26840c48  addiu       $a0, $s4, 0xC48
    ctx->pc = 0x4a77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a77e4: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a77e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a77ec: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a77ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a77f0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a77f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a77f4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a77f8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a77fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a77fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7800: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7804: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a7804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7808: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A7808u;
    {
        const bool branch_taken_0x4a7808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7808u;
        // 0x4a780c: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7808) {
            ctx->pc = 0x4A78A0u;
            goto label_4a78a0;
        }
    }
    ctx->pc = 0x4A7810u;
    // 0x4a7810: 0x26680c44  addiu       $t0, $s3, 0xC44
    ctx->pc = 0x4a7810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a7814: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a7814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7818: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4a7818u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a781c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a781cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7820: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7824: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4a7824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7828: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a7828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a782c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a7830: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7834: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7838: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a783c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a783cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7840: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7844: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7848: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4a7848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a784c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7850: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4a7850u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4a7854: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4A7854u;
    {
        const bool branch_taken_0x4a7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7854u;
        // 0x4a7858: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7854) {
            ctx->pc = 0x4A78A0u;
            goto label_4a78a0;
        }
    }
    ctx->pc = 0x4A785Cu;
    // 0x4a785c: 0x0  nop
    ctx->pc = 0x4a785cu;
    // NOP
label_4a7860:
    // 0x4a7860: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a7860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7864: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a7868: 0x8627002c  lh          $a3, 0x2C($s1)
    ctx->pc = 0x4a7868u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a786c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a786cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7870: 0x26290028  addiu       $t1, $s1, 0x28
    ctx->pc = 0x4a7870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x4a7874: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a7874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7878: 0xe82825  or          $a1, $a3, $t0
    ctx->pc = 0x4a7878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4a787c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a7880: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a7884: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7888: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a788c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a788cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7890: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a7890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4a7894: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7898: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a7898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a789c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a789cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_4a78a0:
    // 0x4a78a0: 0x26630c44  addiu       $v1, $s3, 0xC44
    ctx->pc = 0x4a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3140));
    // 0x4a78a4: 0x26900c48  addiu       $s0, $s4, 0xC48
    ctx->pc = 0x4a78a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3144));
    // 0x4a78a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a78a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a78ac: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4a78acu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a78b0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A78B0u;
    SET_GPR_U32(ctx, 31, 0x4A78B8u);
    ctx->pc = 0x4A78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A78B0u;
    // 0x4a78b4: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A78B0u, 0x4A78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A78B8u;
label_4a78b8:
    // 0x4a78b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a78b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a78bc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A78BCu;
    SET_GPR_U32(ctx, 31, 0x4A78C4u);
    ctx->pc = 0x4A78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A78BCu;
    // 0x4a78c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A78BCu, 0x4A78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A78C4u;
label_4a78c4:
    // 0x4a78c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a78c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a78c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a78cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a78d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a78d4: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x4a78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4a78d8: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4a78d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4a78dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a78e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a78e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a78e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a78e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a78e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a78ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a78ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a78f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a78f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a78f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a78f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a78f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a78fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a78fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7900: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4a7900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a7904: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a7904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a7908: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a7908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a790c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a7910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7914: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a7914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a7918: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a7918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a791c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a7924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a7928: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a7928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a792c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7930: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7934: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a7934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a7938: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7938u;
        // 0x4a793c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7940u;
}
