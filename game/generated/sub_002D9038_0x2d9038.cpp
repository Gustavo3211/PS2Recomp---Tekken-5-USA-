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

// Function: sub_002D9038
// Address: 0x2d9038 - 0x2d96c0
void sub_002D9038_0x2d9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9038_0x2d9038");
#endif

    switch (ctx->pc) {
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9254u: goto label_2d9254;
        case 0x2d9288u: goto label_2d9288;
        case 0x2d92bcu: goto label_2d92bc;
        case 0x2d9544u: goto label_2d9544;
        default: break;
    }

    ctx->pc = 0x2d9038u;

    // 0x2d9038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d9038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d903c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2d903cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9040: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d9044: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2d9044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2d9048: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d904c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d904cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9050: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d9054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9058: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d905c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d905cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9060: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9064: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x2d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d9068: 0x922c0000  lbu         $t4, 0x0($s1)
    ctx->pc = 0x2d9068u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d906c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d906cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d9070: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2d9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2d9074: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x2d9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x2d9078: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x2d9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x2d907c: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x2d907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x2d9080: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x2d9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x2d9084: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x2d9084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x2d9088: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x2d9088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x2d908c: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x2d908cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d9090: 0xe7ad004c  swc1        $f13, 0x4C($sp)
    ctx->pc = 0x2d9090u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d9094: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x2d9094u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d9098: 0xe7af0054  swc1        $f15, 0x54($sp)
    ctx->pc = 0x2d9098u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2d909c: 0xe7b00058  swc1        $f16, 0x58($sp)
    ctx->pc = 0x2d909cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d90a0: 0xe7b1005c  swc1        $f17, 0x5C($sp)
    ctx->pc = 0x2d90a0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2d90a4: 0xe7b20060  swc1        $f18, 0x60($sp)
    ctx->pc = 0x2d90a4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d90a8: 0xe7b30064  swc1        $f19, 0x64($sp)
    ctx->pc = 0x2d90a8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d90ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d90acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d90b0: 0x11800177  beqz        $t4, . + 4 + (0x177 << 2)
    ctx->pc = 0x2D90B0u;
    {
        const bool branch_taken_0x2d90b0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90B0u;
        // 0x2d90b4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90b0) {
            ctx->pc = 0x2D9690u;
            goto label_2d9690;
        }
    }
    ctx->pc = 0x2D90B8u;
label_2d90b8:
    // 0x2d90b8: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D90B8u;
    {
        const bool branch_taken_0x2d90b8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90B8u;
        // 0x2d90bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90b8) {
            ctx->pc = 0x2D90D0u;
            goto label_2d90d0;
        }
    }
    ctx->pc = 0x2D90C0u;
    // 0x2d90c0: 0x11a2001f  beq         $t5, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D90C0u;
    {
        const bool branch_taken_0x2d90c0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90C0u;
        // 0x2d90c4: 0x2583ffdb  addiu       $v1, $t4, -0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90c0) {
            ctx->pc = 0x2D9140u;
            goto label_2d9140;
        }
    }
    ctx->pc = 0x2D90C8u;
    // 0x2d90c8: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x2D90C8u;
    {
        const bool branch_taken_0x2d90c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90C8u;
        // 0x2d90cc: 0x922c0000  lbu         $t4, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90c8) {
            ctx->pc = 0x2D9688u;
            goto label_2d9688;
        }
    }
    ctx->pc = 0x2D90D0u;
label_2d90d0:
    // 0x2d90d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d90d4: 0x11820008  beq         $t4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D90D4u;
    {
        const bool branch_taken_0x2d90d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90D4u;
        // 0x2d90d8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90d4) {
            ctx->pc = 0x2D90F8u;
            goto label_2d90f8;
        }
    }
    ctx->pc = 0x2D90DCu;
    // 0x2d90dc: 0x15820007  bne         $t4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D90DCu;
    {
        const bool branch_taken_0x2d90dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90DCu;
        // 0x2d90e0: 0x2605e7e0  addiu       $a1, $s0, -0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90dc) {
            ctx->pc = 0x2D90FCu;
            goto label_2d90fc;
        }
    }
    ctx->pc = 0x2D90E4u;
    // 0x2d90e4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d90e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d90e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d90ec: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x2D90ECu;
    {
        const bool branch_taken_0x2d90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90ECu;
        // 0x2d90f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d90ec) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D90F4u;
    // 0x2d90f4: 0x0  nop
    ctx->pc = 0x2d90f4u;
    // NOP
label_2d90f8:
    // 0x2d90f8: 0x2605e7e0  addiu       $a1, $s0, -0x1820
    ctx->pc = 0x2d90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
label_2d90fc:
    // 0x2d90fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d9100: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d9104: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d9108: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d9108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d910c: 0x5040015e  beql        $v0, $zero, . + 4 + (0x15E << 2)
    ctx->pc = 0x2D910Cu;
    {
        const bool branch_taken_0x2d910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d910c) {
            ctx->pc = 0x2D9110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D910Cu;
            // 0x2d9110: 0x922c0000  lbu         $t4, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9688u;
            goto label_2d9688;
        }
    }
    ctx->pc = 0x2D9114u;
    // 0x2d9114: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9118: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d911c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d9120: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9124: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d9124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d912c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d9130: 0xa44c00a8  sh          $t4, 0xA8($v0)
    ctx->pc = 0x2d9130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 12));
    // 0x2d9134: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x2D9134u;
    {
        const bool branch_taken_0x2d9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9134u;
        // 0x2d9138: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9134) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D913Cu;
    // 0x2d913c: 0x0  nop
    ctx->pc = 0x2d913cu;
    // NOP
label_2d9140:
    // 0x2d9140: 0x2c620056  sltiu       $v0, $v1, 0x56
    ctx->pc = 0x2d9140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)86) ? 1 : 0);
    // 0x2d9144: 0x5040014f  beql        $v0, $zero, . + 4 + (0x14F << 2)
    ctx->pc = 0x2D9144u;
    {
        const bool branch_taken_0x2d9144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9144) {
            ctx->pc = 0x2D9148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9144u;
            // 0x2d9148: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D914Cu;
    // 0x2d914c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d9150: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d9150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d9154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d9154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d9158: 0x8c63ee40  lw          $v1, -0x11C0($v1)
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962752)));
    // 0x2d915c: 0x600008  jr          $v1
    ctx->pc = 0x2D915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9168u: goto label_2d9168;
            case 0x2D91A8u: goto label_2d91a8;
            case 0x2D91D8u: goto label_2d91d8;
            case 0x2D9210u: goto label_2d9210;
            case 0x2D9218u: goto label_2d9218;
            case 0x2D9230u: goto label_2d9230;
            case 0x2D9260u: goto label_2d9260;
            case 0x2D9290u: goto label_2d9290;
            case 0x2D92C8u: goto label_2d92c8;
            case 0x2D9318u: goto label_2d9318;
            case 0x2D9368u: goto label_2d9368;
            case 0x2D93F0u: goto label_2d93f0;
            case 0x2D9488u: goto label_2d9488;
            case 0x2D94D8u: goto label_2d94d8;
            case 0x2D9528u: goto label_2d9528;
            case 0x2D9550u: goto label_2d9550;
            case 0x2D95A0u: goto label_2d95a0;
            case 0x2D95F0u: goto label_2d95f0;
            case 0x2D9680u: goto label_2d9680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D915Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D9164u;
    // 0x2d9164: 0x0  nop
    ctx->pc = 0x2d9164u;
    // NOP
label_2d9168:
    // 0x2d9168: 0x2605e7e0  addiu       $a1, $s0, -0x1820
    ctx->pc = 0x2d9168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d916c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d9170: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d9174: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d9174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d9178: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d9178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d917c: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x2D917Cu;
    {
        const bool branch_taken_0x2d917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D917Cu;
        // 0x2d9180: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d917c) {
            ctx->pc = 0x2D9680u;
            goto label_2d9680;
        }
    }
    ctx->pc = 0x2D9184u;
    // 0x2d9184: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9188: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d918c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d9190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9194: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d9194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d919c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d91a0: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2D91A0u;
    {
        const bool branch_taken_0x2d91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91A0u;
        // 0x2d91a4: 0xa44600a8  sh          $a2, 0xA8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91a0) {
            ctx->pc = 0x2D967Cu;
            goto label_2d967c;
        }
    }
    ctx->pc = 0x2D91A8u;
label_2d91a8:
    // 0x2d91a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d91ac: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x2d91acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x2d91b0: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x2d91b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x2d91b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d91b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d91bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d91c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d91c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d91c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91c8: 0xc0b6374  jal         func_2D8DD0
    ctx->pc = 0x2D91C8u;
    SET_GPR_U32(ctx, 31, 0x2D91D0u);
    ctx->pc = 0x2D91CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91C8u;
    // 0x2d91cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8DD0u, 0x2D91C8u, 0x2D91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91D0u;
label_2d91d0:
    // 0x2d91d0: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x2D91D0u;
    {
        const bool branch_taken_0x2d91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D0u;
        // 0x2d91d4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91d0) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D91D8u;
label_2d91d8:
    // 0x2d91d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d91dc: 0x26450003  addiu       $a1, $s2, 0x3
    ctx->pc = 0x2d91dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x2d91e0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2d91e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d91e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d91ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d91f0: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x2d91f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x2d91f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d91f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91fc: 0xc0b6374  jal         func_2D8DD0
    ctx->pc = 0x2D91FCu;
    SET_GPR_U32(ctx, 31, 0x2D9204u);
    ctx->pc = 0x2D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91FCu;
    // 0x2d9200: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8DD0u, 0x2D91FCu, 0x2D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9204u;
label_2d9204:
    // 0x2d9204: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x2D9204u;
    {
        const bool branch_taken_0x2d9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9204u;
        // 0x2d9208: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9204) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D920Cu;
    // 0x2d920c: 0x0  nop
    ctx->pc = 0x2d920cu;
    // NOP
label_2d9210:
    // 0x2d9210: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2D9210u;
    {
        const bool branch_taken_0x2d9210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9210u;
        // 0x2d9214: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9210) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D9218u;
label_2d9218:
    // 0x2d9218: 0x3402ffd0  ori         $v0, $zero, 0xFFD0
    ctx->pc = 0x2d9218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65488);
    // 0x2d921c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2d921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2d9220: 0x16400118  bnez        $s2, . + 4 + (0x118 << 2)
    ctx->pc = 0x2D9220u;
    {
        const bool branch_taken_0x2d9220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9220u;
        // 0x2d9224: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9220) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D9228u;
    // 0x2d9228: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2D9228u;
    {
        const bool branch_taken_0x2d9228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9228u;
        // 0x2d922c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9228) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D9230u;
label_2d9230:
    // 0x2d9230: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9234: 0x2604e7e0  addiu       $a0, $s0, -0x1820
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d923c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d9240: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9244: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d9248: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d9248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d924c: 0xc0b614c  jal         func_2D8530
    ctx->pc = 0x2D924Cu;
    SET_GPR_U32(ctx, 31, 0x2D9254u);
    ctx->pc = 0x2D9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D924Cu;
    // 0x2d9250: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8530u, 0x2D924Cu, 0x2D9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9254u;
label_2d9254:
    // 0x2d9254: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2D9254u;
    {
        const bool branch_taken_0x2d9254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9254u;
        // 0x2d9258: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9254) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D925Cu;
    // 0x2d925c: 0x0  nop
    ctx->pc = 0x2d925cu;
    // NOP
label_2d9260:
    // 0x2d9260: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9264: 0x2604e7e0  addiu       $a0, $s0, -0x1820
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9268: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d926c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d926cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9270: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d9274: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9278: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d9278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d927c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d927cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9280: 0xc0b6196  jal         func_2D8658
    ctx->pc = 0x2D9280u;
    SET_GPR_U32(ctx, 31, 0x2D9288u);
    ctx->pc = 0x2D9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9280u;
    // 0x2d9284: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8658u, 0x2D9280u, 0x2D9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9288u;
label_2d9288:
    // 0x2d9288: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2D9288u;
    {
        const bool branch_taken_0x2d9288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9288u;
        // 0x2d928c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9288) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D9290u;
label_2d9290:
    // 0x2d9290: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9294: 0x2604e7e0  addiu       $a0, $s0, -0x1820
    ctx->pc = 0x2d9294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9298: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2d9298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2d929c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d92a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d92a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d92ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d92acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d92b4: 0xc0b5adc  jal         func_2D6B70
    ctx->pc = 0x2D92B4u;
    SET_GPR_U32(ctx, 31, 0x2D92BCu);
    ctx->pc = 0x2D92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92B4u;
    // 0x2d92b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B70u, 0x2D92B4u, 0x2D92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92BCu;
label_2d92bc:
    // 0x2d92bc: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2D92BCu;
    {
        const bool branch_taken_0x2d92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92BCu;
        // 0x2d92c0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92bc) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D92C4u;
    // 0x2d92c4: 0x0  nop
    ctx->pc = 0x2d92c4u;
    // NOP
label_2d92c8:
    // 0x2d92c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d92cc: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d92ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d92d0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d92d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d92d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d92d8: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d92dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d92e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d92e8: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d92e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d92ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d92f0: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2D92F0u;
    {
        const bool branch_taken_0x2d92f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92F0u;
        // 0x2d92f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92f0) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D92F8u;
    // 0x2d92f8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d92f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d92fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9300: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d9304: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d9304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9308: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d9308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d930c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9310: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2D9310u;
    {
        const bool branch_taken_0x2d9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9310u;
        // 0x2d9314: 0x2405fff0  addiu       $a1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9310) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D9318u;
label_2d9318:
    // 0x2d9318: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d931c: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d931cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9320: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d9320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d9324: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d9324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d9328: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d932c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9330: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d9334: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9338: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d9338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d933c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9340: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2D9340u;
    {
        const bool branch_taken_0x2d9340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9340u;
        // 0x2d9344: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9340) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D9348u;
    // 0x2d9348: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d934c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9350: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d9354: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9358: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d9358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d935c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9360: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2D9360u;
    {
        const bool branch_taken_0x2d9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9360u;
        // 0x2d9364: 0x2405fff1  addiu       $a1, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9360) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D9368u;
label_2d9368:
    // 0x2d9368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d936c: 0x2608e7e0  addiu       $t0, $s0, -0x1820
    ctx->pc = 0x2d936cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9370: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d9370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d9374: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2d9374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d9378: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d937c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9380: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d9384: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9388: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d9388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d938c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D938Cu;
    {
        const bool branch_taken_0x2d938c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D938Cu;
        // 0x2d9390: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d938c) {
            ctx->pc = 0x2D93C0u;
            goto label_2d93c0;
        }
    }
    ctx->pc = 0x2D9394u;
    // 0x2d9394: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9398: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d939c: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d939cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d93a0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2d93a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2d93a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d93a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d93ac: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x2d93acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2d93b0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d93b4: 0xa46500a8  sh          $a1, 0xA8($v1)
    ctx->pc = 0x2d93b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d93b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d93b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d93c0:
    // 0x2d93c0: 0x28c207ff  slti        $v0, $a2, 0x7FF
    ctx->pc = 0x2d93c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d93c4: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2D93C4u;
    {
        const bool branch_taken_0x2d93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93C4u;
        // 0x2d93c8: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93c4) {
            ctx->pc = 0x2D9680u;
            goto label_2d9680;
        }
    }
    ctx->pc = 0x2D93CCu;
    // 0x2d93cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d93d0: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d93d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d93d4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2d93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2d93d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d93dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d93e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d93e4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2D93E4u;
    {
        const bool branch_taken_0x2d93e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E4u;
        // 0x2d93e8: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93e4) {
            ctx->pc = 0x2D9678u;
            goto label_2d9678;
        }
    }
    ctx->pc = 0x2D93ECu;
    // 0x2d93ec: 0x0  nop
    ctx->pc = 0x2d93ecu;
    // NOP
label_2d93f0:
    // 0x2d93f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d93f4: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d93f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d93f8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d93fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d93fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d9400: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d9404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9408: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d940c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9410: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d9410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d9414: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9414u;
    {
        const bool branch_taken_0x2d9414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9414u;
        // 0x2d9418: 0x8c880000  lw          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9414) {
            ctx->pc = 0x2D9448u;
            goto label_2d9448;
        }
    }
    ctx->pc = 0x2D941Cu;
    // 0x2d941c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d941cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9420: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9424: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d9428: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d9428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d942c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d942cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d9430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9434: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x2d9434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x2d9438: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d943c: 0xa46500a8  sh          $a1, 0xA8($v1)
    ctx->pc = 0x2d943cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d9440: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9444: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d9444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d9448:
    // 0x2d9448: 0x28c207ff  slti        $v0, $a2, 0x7FF
    ctx->pc = 0x2d9448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d944c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D944Cu;
    {
        const bool branch_taken_0x2d944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D944Cu;
        // 0x2d9450: 0x3105ffff  andi        $a1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d944c) {
            ctx->pc = 0x2D9480u;
            goto label_2d9480;
        }
    }
    ctx->pc = 0x2D9454u;
    // 0x2d9454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d9454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d9458: 0x344290d0  ori         $v0, $v0, 0x90D0
    ctx->pc = 0x2d9458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37072);
    // 0x2d945c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d9460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d9460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9464: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2d9464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d946c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9470: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d9470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9474: 0xa48500a8  sh          $a1, 0xA8($a0)
    ctx->pc = 0x2d9474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d9478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d9478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d947c: 0x28c207ff  slti        $v0, $a2, 0x7FF
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
label_2d9480:
    // 0x2d9480: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2D9480u;
    {
        const bool branch_taken_0x2d9480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9480u;
        // 0x2d9484: 0x82c02  srl         $a1, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9480) {
            ctx->pc = 0x2D9654u;
            goto label_2d9654;
        }
    }
    ctx->pc = 0x2D9488u;
label_2d9488:
    // 0x2d9488: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d948c: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d948cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9490: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d9490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d9494: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d9494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d9498: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d949c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d94a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d94a8: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d94a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d94ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d94acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d94b0: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D94B0u;
    {
        const bool branch_taken_0x2d94b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B0u;
        // 0x2d94b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94b0) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D94B8u;
    // 0x2d94b8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d94b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d94c0: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d94c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d94c4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d94c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d94cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d94d0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2D94D0u;
    {
        const bool branch_taken_0x2d94d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94D0u;
        // 0x2d94d4: 0x2405fff4  addiu       $a1, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94d0) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D94D8u;
label_2d94d8:
    // 0x2d94d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d94dc: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d94e0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d94e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d94e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d94e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d94e8: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d94e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d94ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d94ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94f0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d94f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d94f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d94f8: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d94f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d94fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9500: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D9500u;
    {
        const bool branch_taken_0x2d9500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9500u;
        // 0x2d9504: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9500) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D9508u;
    // 0x2d9508: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d950c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d950cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9510: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d9514: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d9514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9518: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d9518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d951c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9520: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2D9520u;
    {
        const bool branch_taken_0x2d9520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9520u;
        // 0x2d9524: 0x2405fff5  addiu       $a1, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9520) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D9528u;
label_2d9528:
    // 0x2d9528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d952c: 0x2604e7e0  addiu       $a0, $s0, -0x1820
    ctx->pc = 0x2d952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9534: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d9538: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d953c: 0xc0b633c  jal         func_2D8CF0
    ctx->pc = 0x2D953Cu;
    SET_GPR_U32(ctx, 31, 0x2D9544u);
    ctx->pc = 0x2D9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D953Cu;
    // 0x2d9540: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8CF0u, 0x2D953Cu, 0x2D9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9544u;
label_2d9544:
    // 0x2d9544: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2D9544u;
    {
        const bool branch_taken_0x2d9544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9544u;
        // 0x2d9548: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9544) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D954Cu;
    // 0x2d954c: 0x0  nop
    ctx->pc = 0x2d954cu;
    // NOP
label_2d9550:
    // 0x2d9550: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9554: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d9554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9558: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d9558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d955c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d9560: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d9564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9568: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d956c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9570: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d9570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d9574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9578: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D9578u;
    {
        const bool branch_taken_0x2d9578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9578u;
        // 0x2d957c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9578) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D9580u;
    // 0x2d9580: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9584: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9588: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d958c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9590: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d9590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d9594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9598: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D9598u;
    {
        const bool branch_taken_0x2d9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9598u;
        // 0x2d959c: 0x2405fff6  addiu       $a1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9598) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D95A0u;
label_2d95a0:
    // 0x2d95a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d95a4: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d95a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d95a8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d95ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d95acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d95b0: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d95b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d95b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d95b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d95bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d95c0: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d95c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d95c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d95c8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D95C8u;
    {
        const bool branch_taken_0x2d95c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95C8u;
        // 0x2d95cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95c8) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D95D0u;
    // 0x2d95d0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d95d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d95d8: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d95d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d95dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d95e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d95e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d95e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D95E8u;
    {
        const bool branch_taken_0x2d95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95E8u;
        // 0x2d95ec: 0x2405fff7  addiu       $a1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95e8) {
            ctx->pc = 0x2D963Cu;
            goto label_2d963c;
        }
    }
    ctx->pc = 0x2D95F0u;
label_2d95f0:
    // 0x2d95f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d95f4: 0x2607e7e0  addiu       $a3, $s0, -0x1820
    ctx->pc = 0x2d95f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d95f8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2d95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2d95fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d95fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d9600: 0x8cc690d0  lw          $a2, -0x6F30($a2)
    ctx->pc = 0x2d9600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938832)));
    // 0x2d9604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9608: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d960c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9610: 0x28c307ff  slti        $v1, $a2, 0x7FF
    ctx->pc = 0x2d9610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d9614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9618: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9618u;
    {
        const bool branch_taken_0x2d9618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9618u;
        // 0x2d961c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9618) {
            ctx->pc = 0x2D964Cu;
            goto label_2d964c;
        }
    }
    ctx->pc = 0x2D9620u;
    // 0x2d9620: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9624: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d9624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9628: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d962c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9630: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2d9630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d9634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9638: 0x2405fff9  addiu       $a1, $zero, -0x7
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2d963c:
    // 0x2d963c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d9640: 0xa46500a8  sh          $a1, 0xA8($v1)
    ctx->pc = 0x2d9640u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d9644: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9648: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d9648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d964c:
    // 0x2d964c: 0x28c207ff  slti        $v0, $a2, 0x7FF
    ctx->pc = 0x2d964cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d9650: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x2d9650u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_2d9654:
    // 0x2d9654: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9654u;
    {
        const bool branch_taken_0x2d9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9654u;
        // 0x2d9658: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9654) {
            ctx->pc = 0x2D9684u;
            goto label_2d9684;
        }
    }
    ctx->pc = 0x2D965Cu;
    // 0x2d965c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d9660: 0x348490d0  ori         $a0, $a0, 0x90D0
    ctx->pc = 0x2d9660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37072);
    // 0x2d9664: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d9668: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d966c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9674: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d9674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2d9678:
    // 0x2d9678: 0xa44500a8  sh          $a1, 0xA8($v0)
    ctx->pc = 0x2d9678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 5));
label_2d967c:
    // 0x2d967c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d967cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d9680:
    // 0x2d9680: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2d9680u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9684:
    // 0x2d9684: 0x922c0000  lbu         $t4, 0x0($s1)
    ctx->pc = 0x2d9684u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9688:
    // 0x2d9688: 0x1580fe8b  bnez        $t4, . + 4 + (-0x175 << 2)
    ctx->pc = 0x2D9688u;
    {
        const bool branch_taken_0x2d9688 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9688u;
        // 0x2d968c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9688) {
            ctx->pc = 0x2D90B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d90b8;
        }
    }
    ctx->pc = 0x2D9690u;
label_2d9690:
    // 0x2d9690: 0x2603e7e0  addiu       $v1, $s0, -0x1820
    ctx->pc = 0x2d9690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961120));
    // 0x2d9694: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d9694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9698: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2d969c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d969cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d96a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d96a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d96a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d96a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d96a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d96a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d96ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d96b0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2d96b4: 0xac2294ec  sw          $v0, -0x6B14($at)
    ctx->pc = 0x2d96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 2));
    // 0x2d96b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D96B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96B8u;
        // 0x2d96bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D96C0u;
}
