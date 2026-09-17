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

// Function: sub_002D6FF0
// Address: 0x2d6ff0 - 0x2d72b0
void sub_002D6FF0_0x2d6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6FF0_0x2d6ff0");
#endif

    switch (ctx->pc) {
        case 0x2d7028u: goto label_2d7028;
        case 0x2d7088u: goto label_2d7088;
        case 0x2d70d8u: goto label_2d70d8;
        case 0x2d71e8u: goto label_2d71e8;
        default: break;
    }

    ctx->pc = 0x2d6ff0u;

    // 0x2d6ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d6ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7004: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d7004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d7008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d700c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d7010: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d7010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d7014: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x2d7014u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7018: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d701c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2D701Cu;
    {
        const bool branch_taken_0x2d701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D701Cu;
        // 0x2d7020: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d701c) {
            ctx->pc = 0x2D7264u;
            goto label_2d7264;
        }
    }
    ctx->pc = 0x2D7024u;
    // 0x2d7024: 0x0  nop
    ctx->pc = 0x2d7024u;
    // NOP
label_2d7028:
    // 0x2d7028: 0x3402fff1  ori         $v0, $zero, 0xFFF1
    ctx->pc = 0x2d7028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x2d702c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D702Cu;
    {
        const bool branch_taken_0x2d702c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D702Cu;
        // 0x2d7030: 0x3402fff6  ori         $v0, $zero, 0xFFF6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d702c) {
            ctx->pc = 0x2D7080u;
            goto label_2d7080;
        }
    }
    ctx->pc = 0x2D7034u;
    // 0x2d7034: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7034u;
    {
        const bool branch_taken_0x2d7034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7034u;
        // 0x2d7038: 0x3402fff2  ori         $v0, $zero, 0xFFF2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7034) {
            ctx->pc = 0x2D7080u;
            goto label_2d7080;
        }
    }
    ctx->pc = 0x2D703Cu;
    // 0x2d703c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D703Cu;
    {
        const bool branch_taken_0x2d703c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D703Cu;
        // 0x2d7040: 0x3402fff3  ori         $v0, $zero, 0xFFF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65523);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d703c) {
            ctx->pc = 0x2D7050u;
            goto label_2d7050;
        }
    }
    ctx->pc = 0x2D7044u;
    // 0x2d7044: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2D7044u;
    {
        const bool branch_taken_0x2d7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7044u;
        // 0x2d7048: 0x26100006  addiu       $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7044) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D704Cu;
    // 0x2d704c: 0x0  nop
    ctx->pc = 0x2d704cu;
    // NOP
label_2d7050:
    // 0x2d7050: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2D7050u;
    {
        const bool branch_taken_0x2d7050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7050u;
        // 0x2d7054: 0x3402fff4  ori         $v0, $zero, 0xFFF4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7050) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D7058u;
    // 0x2d7058: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2D7058u;
    {
        const bool branch_taken_0x2d7058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7058u;
        // 0x2d705c: 0x3402fff5  ori         $v0, $zero, 0xFFF5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7058) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D7060u;
    // 0x2d7060: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7060u;
    {
        const bool branch_taken_0x2d7060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7060u;
        // 0x2d7064: 0x3402fff7  ori         $v0, $zero, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7060) {
            ctx->pc = 0x2D7080u;
            goto label_2d7080;
        }
    }
    ctx->pc = 0x2D7068u;
    // 0x2d7068: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7068u;
    {
        const bool branch_taken_0x2d7068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7068u;
        // 0x2d706c: 0x3402fff8  ori         $v0, $zero, 0xFFF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7068) {
            ctx->pc = 0x2D7080u;
            goto label_2d7080;
        }
    }
    ctx->pc = 0x2D7070u;
    // 0x2d7070: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7070u;
    {
        const bool branch_taken_0x2d7070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7070u;
        // 0x2d7074: 0x3402fff9  ori         $v0, $zero, 0xFFF9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7070) {
            ctx->pc = 0x2D7080u;
            goto label_2d7080;
        }
    }
    ctx->pc = 0x2D7078u;
    // 0x2d7078: 0x54620077  bnel        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D7078u;
    {
        const bool branch_taken_0x2d7078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7078) {
            ctx->pc = 0x2D707Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7078u;
            // 0x2d707c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7080u;
label_2d7080:
    // 0x2d7080: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2D7080u;
    {
        const bool branch_taken_0x2d7080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7080u;
        // 0x2d7084: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7080) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7088u;
label_2d7088:
    // 0x2d7088: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2d7088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2d708c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2d708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2d7090: 0x846394e0  lh          $v1, -0x6B20($v1)
    ctx->pc = 0x2d7090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294939872)));
    // 0x2d7094: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2d7094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2d7098: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d7098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d709c: 0x948494e0  lhu         $a0, -0x6B20($a0)
    ctx->pc = 0x2d709cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939872)));
    // 0x2d70a0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D70A0u;
    {
        const bool branch_taken_0x2d70a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70A0u;
        // 0x2d70a4: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70a0) {
            ctx->pc = 0x2D7108u;
            goto label_2d7108;
        }
    }
    ctx->pc = 0x2D70A8u;
    // 0x2d70a8: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x2d70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2d70ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2d70acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d70b0: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D70B0u;
    {
        const bool branch_taken_0x2d70b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70B0u;
        // 0x2d70b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70b0) {
            ctx->pc = 0x2D710Cu;
            goto label_2d710c;
        }
    }
    ctx->pc = 0x2D70B8u;
    // 0x2d70b8: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2d70b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2d70bc: 0x94e2e7c8  lhu         $v0, -0x1838($a3)
    ctx->pc = 0x2d70bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3BE7C8u));
    // 0x2d70c0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2d70c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2d70c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D70C4u;
    {
        const bool branch_taken_0x2d70c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d70c4) {
            ctx->pc = 0x2D70C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D70C4u;
            // 0x2d70c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D70D8u;
            goto label_2d70d8;
        }
    }
    ctx->pc = 0x2D70CCu;
    // 0x2d70cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D70CCu;
    {
        const bool branch_taken_0x2d70cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70CCu;
        // 0x2d70d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70cc) {
            ctx->pc = 0x2D710Cu;
            goto label_2d710c;
        }
    }
    ctx->pc = 0x2D70D4u;
    // 0x2d70d4: 0x0  nop
    ctx->pc = 0x2d70d4u;
    // NOP
label_2d70d8:
    // 0x2d70d8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2d70d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d70dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D70DCu;
    {
        const bool branch_taken_0x2d70dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70DCu;
        // 0x2d70e0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70dc) {
            ctx->pc = 0x2D710Cu;
            goto label_2d710c;
        }
    }
    ctx->pc = 0x2D70E4u;
    // 0x2d70e4: 0x24e2e7c8  addiu       $v0, $a3, -0x1838
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961096));
    // 0x2d70e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d70ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d70ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d70f0: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x2d70f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2d70f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D70F4u;
    {
        const bool branch_taken_0x2d70f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d70f4) {
            ctx->pc = 0x2D70F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D70F4u;
            // 0x2d70f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D70D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d70d8;
        }
    }
    ctx->pc = 0x2D70FCu;
    // 0x2d70fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D70FCu;
    {
        const bool branch_taken_0x2d70fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70FCu;
        // 0x2d7100: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70fc) {
            ctx->pc = 0x2D710Cu;
            goto label_2d710c;
        }
    }
    ctx->pc = 0x2D7104u;
    // 0x2d7104: 0x0  nop
    ctx->pc = 0x2d7104u;
    // NOP
label_2d7108:
    // 0x2d7108: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x2d7108u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
label_2d710c:
    // 0x2d710c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7110: 0x51020051  beql        $t0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D7110u;
    {
        const bool branch_taken_0x2d7110 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7110) {
            ctx->pc = 0x2D7114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7110u;
            // 0x2d7114: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7118u;
    // 0x2d7118: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x2d7118u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d711c: 0x2ca22122  sltiu       $v0, $a1, 0x2122
    ctx->pc = 0x2d711cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8482) ? 1 : 0);
    // 0x2d7120: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D7120u;
    {
        const bool branch_taken_0x2d7120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7120) {
            ctx->pc = 0x2D7124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7120u;
            // 0x2d7124: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D7128u;
    // 0x2d7128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d712c: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D712Cu;
    {
        const bool branch_taken_0x2d712c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D712Cu;
        // 0x2d7130: 0x24a22000  addiu       $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d712c) {
            ctx->pc = 0x2D7140u;
            goto label_2d7140;
        }
    }
    ctx->pc = 0x2D7134u;
    // 0x2d7134: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7134u;
    {
        const bool branch_taken_0x2d7134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7134u;
        // 0x2d7138: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7134) {
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D713Cu;
    // 0x2d713c: 0x0  nop
    ctx->pc = 0x2d713cu;
    // NOP
label_2d7140:
    // 0x2d7140: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7144: 0x2c420054  sltiu       $v0, $v0, 0x54
    ctx->pc = 0x2d7144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x2d7148: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D7148u;
    {
        const bool branch_taken_0x2d7148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7148) {
            ctx->pc = 0x2D714Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7148u;
            // 0x2d714c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D7150u;
    // 0x2d7150: 0x3402de70  ori         $v0, $zero, 0xDE70
    ctx->pc = 0x2d7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56944);
    // 0x2d7154: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d7158: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d715c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2d715cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d7160: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D7160u;
    {
        const bool branch_taken_0x2d7160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7160) {
            ctx->pc = 0x2D7164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7160u;
            // 0x2d7164: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D7168u;
    // 0x2d7168: 0x3402cff0  ori         $v0, $zero, 0xCFF0
    ctx->pc = 0x2d7168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53232);
    // 0x2d716c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d7170: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d7170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d7174: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2d7174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d7178: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D7178u;
    {
        const bool branch_taken_0x2d7178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7178) {
            ctx->pc = 0x2D717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7178u;
            // 0x2d717c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D7180u;
    // 0x2d7180: 0x24022606  addiu       $v0, $zero, 0x2606
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9734));
    // 0x2d7184: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7184u;
    {
        const bool branch_taken_0x2d7184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7184u;
        // 0x2d7188: 0x24022500  addiu       $v0, $zero, 0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7184) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D718Cu;
    // 0x2d718c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D718Cu;
    {
        const bool branch_taken_0x2d718c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D718Cu;
        // 0x2d7190: 0x24022502  addiu       $v0, $zero, 0x2502 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9474));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d718c) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D7194u;
    // 0x2d7194: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7194u;
    {
        const bool branch_taken_0x2d7194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7194u;
        // 0x2d7198: 0x2402253c  addiu       $v0, $zero, 0x253C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7194) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D719Cu;
    // 0x2d719c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D719Cu;
    {
        const bool branch_taken_0x2d719c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D719Cu;
        // 0x2d71a0: 0x240224b8  addiu       $v0, $zero, 0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d719c) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D71A4u;
    // 0x2d71a4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D71A4u;
    {
        const bool branch_taken_0x2d71a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71A4u;
        // 0x2d71a8: 0x240224c7  addiu       $v0, $zero, 0x24C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71a4) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D71ACu;
    // 0x2d71ac: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D71ACu;
    {
        const bool branch_taken_0x2d71ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71ACu;
        // 0x2d71b0: 0x24022122  addiu       $v0, $zero, 0x2122 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71ac) {
            ctx->pc = 0x2D71BCu;
            goto label_2d71bc;
        }
    }
    ctx->pc = 0x2D71B4u;
    // 0x2d71b4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D71B4u;
    {
        const bool branch_taken_0x2d71b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71B4u;
        // 0x2d71b8: 0x38a325a0  xori        $v1, $a1, 0x25A0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9632);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71b4) {
            ctx->pc = 0x2D71C8u;
            goto label_2d71c8;
        }
    }
    ctx->pc = 0x2D71BCu;
label_2d71bc:
    // 0x2d71bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D71BCu;
    {
        const bool branch_taken_0x2d71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D71C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71BCu;
        // 0x2d71c0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71bc) {
            ctx->pc = 0x2D71DCu;
            goto label_2d71dc;
        }
    }
    ctx->pc = 0x2D71C4u;
    // 0x2d71c4: 0x0  nop
    ctx->pc = 0x2d71c4u;
    // NOP
label_2d71c8:
    // 0x2d71c8: 0x3402ff5e  ori         $v0, $zero, 0xFF5E
    ctx->pc = 0x2d71c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65374);
    // 0x2d71cc: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2d71ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x2d71d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d71d4: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x2d71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d71d8: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2d71d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2d71dc:
    // 0x2d71dc: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2d71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d71e0: 0xc0cc2a8  jal         func_330AA0
    ctx->pc = 0x2D71E0u;
    SET_GPR_U32(ctx, 31, 0x2D71E8u);
    ctx->pc = 0x2D71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71E0u;
    // 0x2d71e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330AA0u, 0x2D71E0u, 0x2D71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71E8u;
label_2d71e8:
    // 0x2d71e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71ec: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D71ECu;
    {
        const bool branch_taken_0x2d71ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71ec) {
            ctx->pc = 0x2D71F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D71ECu;
            // 0x2d71f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D71F4u;
    // 0x2d71f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d71f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d71fc: 0x944294e4  lhu         $v0, -0x6B1C($v0)
    ctx->pc = 0x2d71fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939876)));
    // 0x2d7200: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d7200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d7204: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7204u;
    {
        const bool branch_taken_0x2d7204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7204) {
            ctx->pc = 0x2D7208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7204u;
            // 0x2d7208: 0x84830008  lh          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7230u;
            goto label_2d7230;
        }
    }
    ctx->pc = 0x2D720Cu;
    // 0x2d720c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7210: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d7214: 0x844294e2  lh          $v0, -0x6B1E($v0)
    ctx->pc = 0x2d7214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939874)));
    // 0x2d7218: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d721c: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d721cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d7220: 0xc4219510  lwc1        $f1, -0x6AF0($at)
    ctx->pc = 0x2d7220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7224u;
    {
        const bool branch_taken_0x2d7224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7224u;
        // 0x2d7228: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7224) {
            ctx->pc = 0x2D7244u;
            goto label_2d7244;
        }
    }
    ctx->pc = 0x2D722Cu;
    // 0x2d722c: 0x0  nop
    ctx->pc = 0x2d722cu;
    // NOP
label_2d7230:
    // 0x2d7230: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d7234: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d7234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d7238: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2d7238u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2d723c: 0xc4219510  lwc1        $f1, -0x6AF0($at)
    ctx->pc = 0x2d723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d7244:
    // 0x2d7244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d724c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d724cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7250: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2d7250u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d7254: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2d7254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2d7258:
    // 0x2d7258: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x2d7258u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d725c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2d725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d7260: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d7260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7264:
    // 0x2d7264: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7264u;
    {
        const bool branch_taken_0x2d7264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7264u;
        // 0x2d7268: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7264) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D726Cu;
    // 0x2d726c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D726Cu;
    {
        const bool branch_taken_0x2d726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D726Cu;
        // 0x2d7270: 0x3402ffef  ori         $v0, $zero, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d726c) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D7274u;
    // 0x2d7274: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d7274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7278: 0x1040ff83  beqz        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2D7278u;
    {
        const bool branch_taken_0x2d7278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7278u;
        // 0x2d727c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7278) {
            ctx->pc = 0x2D7088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7088;
        }
    }
    ctx->pc = 0x2D7280u;
    // 0x2d7280: 0x3402fff0  ori         $v0, $zero, 0xFFF0
    ctx->pc = 0x2d7280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x2d7284: 0x1462ff68  bne         $v1, $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2D7284u;
    {
        const bool branch_taken_0x2d7284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7284u;
        // 0x2d7288: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7284) {
            ctx->pc = 0x2D7028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7028;
        }
    }
    ctx->pc = 0x2D728Cu;
label_2d728c:
    // 0x2d728c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d728cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d7290: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d7290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d729c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d729cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d72a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d72a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d72a4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d72a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D72A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72A8u;
        // 0x2d72ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D72A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D72B0u;
}
