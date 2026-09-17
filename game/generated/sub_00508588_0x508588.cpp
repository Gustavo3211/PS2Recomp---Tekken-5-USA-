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

// Function: sub_00508588
// Address: 0x508588 - 0x508830
void sub_00508588_0x508588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508588_0x508588");
#endif

    switch (ctx->pc) {
        case 0x508698u: goto label_508698;
        case 0x508790u: goto label_508790;
        case 0x5087d4u: goto label_5087d4;
        case 0x5087e8u: goto label_5087e8;
        default: break;
    }

    ctx->pc = 0x508588u;

    // 0x508588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x508588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50858c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x508590: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x508590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x508594: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x508594u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x508598: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x508598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50859c: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x50859cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x5085a0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x5085a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5085a4: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x5085a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x5085a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5085a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5085ac: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x5085acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x5085b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5085b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5085b4: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x5085b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x5085b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5085b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5085bc: 0x244f7900  addiu       $t7, $v0, 0x7900
    ctx->pc = 0x5085bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x5085c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5085c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5085c4: 0x2508c59c  addiu       $t0, $t0, -0x3A64
    ctx->pc = 0x5085c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952348));
    // 0x5085c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5085c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5085cc: 0x2529c5a0  addiu       $t1, $t1, -0x3A60
    ctx->pc = 0x5085ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952352));
    // 0x5085d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x5085d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x5085d4: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x5085d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x5085d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x5085d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x5085dc: 0x2443f080  addiu       $v1, $v0, -0xF80
    ctx->pc = 0x5085dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x5085e0: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x5085e0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x577900u));
    // 0x5085e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x5085e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x5085e8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x5085e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EC59Cu));
    // 0x5085ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5085f0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x5085f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC5A0u));
    // 0x5085f4: 0x34840146  ori         $a0, $a0, 0x146
    ctx->pc = 0x5085f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)326);
    // 0x5085f8: 0x8c6b4cc8  lw          $t3, 0x4CC8($v1)
    ctx->pc = 0x5085f8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x903D48u));
    // 0x5085fc: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x5085fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x508600: 0x8c6d0050  lw          $t5, 0x50($v1)
    ctx->pc = 0x508600u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x508604: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x508604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508608: 0x8c6c0054  lw          $t4, 0x54($v1)
    ctx->pc = 0x508608u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x50860c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x50860cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x508610: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x508610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x508614: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x508614u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x508618: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x508618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x50861c: 0x25e40004  addiu       $a0, $t7, 0x4
    ctx->pc = 0x50861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x508620: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x508620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x508624: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x508624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508628: 0x254ac58c  addiu       $t2, $t2, -0x3A74
    ctx->pc = 0x508628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952332));
    // 0x50862c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x50862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x508630: 0x26cec590  addiu       $t6, $s6, -0x3A70
    ctx->pc = 0x508630u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952336));
    // 0x508634: 0x167382b  sltu        $a3, $t3, $a3
    ctx->pc = 0x508634u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x508638: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x508638u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x50863c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50863cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x508640: 0xafccc588  sw          $t4, -0x3A78($fp)
    ctx->pc = 0x508640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294952328), GPR_U32(ctx, 12));
    // 0x508644: 0xac43c5a4  sw          $v1, -0x3A5C($v0)
    ctx->pc = 0x508644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952356), GPR_U32(ctx, 3));
    // 0x508648: 0xaeedc584  sw          $t5, -0x3A7C($s7)
    ctx->pc = 0x508648u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294952324), GPR_U32(ctx, 13));
    // 0x50864c: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x50864cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x508650: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x508650u;
    {
        const bool branch_taken_0x508650 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x508654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508650u;
        // 0x508654: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508650) {
            ctx->pc = 0x508664u;
            goto label_508664;
        }
    }
    ctx->pc = 0x508658u;
    // 0x508658: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x508658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x50865c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x50865cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x508660: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x508660u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_508664:
    // 0x508664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x508664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x508668: 0x25e40008  addiu       $a0, $t7, 0x8
    ctx->pc = 0x508668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x50866c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x508670: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x508670u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x508674: 0x2463c594  addiu       $v1, $v1, -0x3A6C
    ctx->pc = 0x508674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952340));
    // 0x508678: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x508678u;
    {
        const bool branch_taken_0x508678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508678u;
        // 0x50867c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508678) {
            ctx->pc = 0x5087B0u;
            goto label_5087b0;
        }
    }
    ctx->pc = 0x508680u;
    // 0x508680: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x508680u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x508684: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x508684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508688: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x508688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50868c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x50868cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508690: 0x26b1c598  addiu       $s1, $s5, -0x3A68
    ctx->pc = 0x508690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952344));
    // 0x508694: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x508694u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_508698:
    // 0x508698: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x508698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50869c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x50869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5086a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x5086a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5086a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5086a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5086a8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x5086a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x5086ac: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x5086acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5086b0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x5086b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x5086b4: 0x34450005  ori         $a1, $v0, 0x5
    ctx->pc = 0x5086b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x5086b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5086B8u;
    {
        const bool branch_taken_0x5086b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5086BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5086B8u;
        // 0x5086bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5086b8) {
            ctx->pc = 0x5086CCu;
            goto label_5086cc;
        }
    }
    ctx->pc = 0x5086C0u;
    // 0x5086c0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x5086c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x5086c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x5086c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5086c8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x5086c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_5086cc:
    // 0x5086cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5086ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5086d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5086d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5086d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x5086d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x5086d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5086d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5086dc: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x5086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x5086e0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x5086e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x5086e4: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x5086e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5086e8: 0x4600024  bltz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x5086E8u;
    {
        const bool branch_taken_0x5086e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x5086ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5086E8u;
        // 0x5086ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5086e8) {
            ctx->pc = 0x50877Cu;
            goto label_50877c;
        }
    }
    ctx->pc = 0x5086F0u;
    // 0x5086f0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x5086f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5086f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5086f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5086f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x5086fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5086fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x508700: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508704: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x508704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x508708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50870c: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x50870cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508710: 0x480001a  bltz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x508710u;
    {
        const bool branch_taken_0x508710 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x508714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508710u;
        // 0x508714: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508710) {
            ctx->pc = 0x50877Cu;
            goto label_50877c;
        }
    }
    ctx->pc = 0x508718u;
    // 0x508718: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x508718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50871c: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x50871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x508720: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x508720u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x508724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x508724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x508728: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x508728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50872c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x50872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x508730: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x508730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x508734: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x508734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x508738: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x508738u;
    {
        const bool branch_taken_0x508738 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508738u;
        // 0x50873c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508738) {
            ctx->pc = 0x50877Cu;
            goto label_50877c;
        }
    }
    ctx->pc = 0x508740u;
    // 0x508740: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x508740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508744: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x508744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x508748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x508748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50874c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x508750: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x508750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x508754: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x508754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x508758: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x508758u;
    {
        const bool branch_taken_0x508758 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x50875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508758u;
        // 0x50875c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508758) {
            ctx->pc = 0x50877Cu;
            goto label_50877c;
        }
    }
    ctx->pc = 0x508760u;
    // 0x508760: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x508760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508764: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x508764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x508768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x508768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50876c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x508770: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x508770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x508774: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x508774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x508778: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_50877c:
    // 0x50877c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x50877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508780: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x508784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x508788: 0xc142122  jal         func_508488
    ctx->pc = 0x508788u;
    SET_GPR_U32(ctx, 31, 0x508790u);
    ctx->pc = 0x50878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508788u;
    // 0x50878c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508488u, 0x508788u, 0x508790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508790u;
label_508790:
    // 0x508790: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x508790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x508794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x508798: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x508798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50879c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x50879cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5087a0: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x5087A0u;
    {
        const bool branch_taken_0x5087a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5087A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5087A0u;
        // 0x5087a4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5087a0) {
            ctx->pc = 0x508698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_508698;
        }
    }
    ctx->pc = 0x5087A8u;
    // 0x5087a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x5087A8u;
    {
        const bool branch_taken_0x5087a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5087ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5087A8u;
        // 0x5087ac: 0x26b0c598  addiu       $s0, $s5, -0x3A68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5087a8) {
            ctx->pc = 0x5087B8u;
            goto label_5087b8;
        }
    }
    ctx->pc = 0x5087B0u;
label_5087b0:
    // 0x5087b0: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x5087b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x5087b4: 0x26b0c598  addiu       $s0, $s5, -0x3A68
    ctx->pc = 0x5087b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952344));
label_5087b8:
    // 0x5087b8: 0x96c3c590  lhu         $v1, -0x3A70($s6)
    ctx->pc = 0x5087b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952336)));
    // 0x5087bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5087bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5087c0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x5087c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x5087c4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x5087c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x5087c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x5087c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x5087cc: 0xc142122  jal         func_508488
    ctx->pc = 0x5087CCu;
    SET_GPR_U32(ctx, 31, 0x5087D4u);
    ctx->pc = 0x5087D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5087CCu;
    // 0x5087d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508488u, 0x5087CCu, 0x5087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5087D4u;
label_5087d4:
    // 0x5087d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5087d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5087d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5087dc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x5087dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x5087e0: 0xc142122  jal         func_508488
    ctx->pc = 0x5087E0u;
    SET_GPR_U32(ctx, 31, 0x5087E8u);
    ctx->pc = 0x5087E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5087E0u;
    // 0x5087e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508488u, 0x5087E0u, 0x5087E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5087E8u;
label_5087e8:
    // 0x5087e8: 0x8ee4c584  lw          $a0, -0x3A7C($s7)
    ctx->pc = 0x5087e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952324)));
    // 0x5087ec: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x5087ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x5087f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5087f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5087f4: 0x2462f080  addiu       $v0, $v1, -0xF80
    ctx->pc = 0x5087f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x5087f8: 0x8fc3c588  lw          $v1, -0x3A78($fp)
    ctx->pc = 0x5087f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294952328)));
    // 0x5087fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5087fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x508800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x508804: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x508804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x508808: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x508808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50880c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50880cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x508810: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x508810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x508814: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x508814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x508818: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x508818u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50881c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x50881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x508820: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x508820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x508824: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x508824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x508828: 0x3e00008  jr          $ra
    ctx->pc = 0x508828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508828u;
        // 0x50882c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x508828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508830u;
}
