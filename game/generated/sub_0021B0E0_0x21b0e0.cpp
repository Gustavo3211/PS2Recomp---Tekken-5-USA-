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

// Function: sub_0021B0E0
// Address: 0x21b0e0 - 0x21b358
void sub_0021B0E0_0x21b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B0E0_0x21b0e0");
#endif

    switch (ctx->pc) {
        case 0x21b120u: goto label_21b120;
        case 0x21b160u: goto label_21b160;
        case 0x21b19cu: goto label_21b19c;
        case 0x21b1d8u: goto label_21b1d8;
        case 0x21b20cu: goto label_21b20c;
        case 0x21b260u: goto label_21b260;
        case 0x21b268u: goto label_21b268;
        case 0x21b274u: goto label_21b274;
        case 0x21b280u: goto label_21b280;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b2e8u: goto label_21b2e8;
        case 0x21b30cu: goto label_21b30c;
        case 0x21b330u: goto label_21b330;
        default: break;
    }

    ctx->pc = 0x21b0e0u;

    // 0x21b0e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21b0e4: 0x28c60008  slti        $a2, $a2, 0x8
    ctx->pc = 0x21b0e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21b0e8: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x21b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x21b0ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f0: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x21b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x21b0f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21b0f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x21b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x21b0fc: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x21b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x21b100: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x21b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x21b104: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x21b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x21b108: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x21B108u;
    {
        const bool branch_taken_0x21b108 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B108u;
        // 0x21b10c: 0xffbf0140  sd          $ra, 0x140($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b108) {
            ctx->pc = 0x21B140u;
            goto label_21b140;
        }
    }
    ctx->pc = 0x21B110u;
    // 0x21b110: 0x3c10310b  lui         $s0, 0x310B
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12555 << 16));
    // 0x21b114: 0x3610d7ff  ori         $s0, $s0, 0xD7FF
    ctx->pc = 0x21b114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55295);
    // 0x21b118: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21B118u;
    SET_GPR_U32(ctx, 31, 0x21B120u);
    ctx->pc = 0x21B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B118u;
    // 0x21b11c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21B118u, 0x21B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B120u;
label_21b120:
    // 0x21b120: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b124: 0x3844001f  xori        $a0, $v0, 0x1F
    ctx->pc = 0x21b124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x21b128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b12c: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x21b12cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21b130: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x21b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x21b134: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21b134u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21b138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B138u;
    {
        const bool branch_taken_0x21b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B138u;
        // 0x21b13c: 0x708024  and         $s0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b138) {
            ctx->pc = 0x21B148u;
            goto label_21b148;
        }
    }
    ctx->pc = 0x21B140u;
label_21b140:
    // 0x21b140: 0x3c103fff  lui         $s0, 0x3FFF
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16383 << 16));
    // 0x21b144: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x21b144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_21b148:
    // 0x21b148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b14c: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x21b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x21b150: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21b150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21b154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b158: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21b15c: 0x0  nop
    ctx->pc = 0x21b15cu;
    // NOP
label_21b160:
    // 0x21b160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b164: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b168: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x21b168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21b16c: 0x8c5200d0  lw          $s2, 0xD0($v0)
    ctx->pc = 0x21b16cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x21b170: 0x12460003  beq         $s2, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B170u;
    {
        const bool branch_taken_0x21b170 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x21B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B170u;
        // 0x21b174: 0x2451014  dsllv       $v0, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (GPR_U32(ctx, 18) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b170) {
            ctx->pc = 0x21B180u;
            goto label_21b180;
        }
    }
    ctx->pc = 0x21B178u;
    // 0x21b178: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b178u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21b17c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x21b17cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_21b180:
    // 0x21b180: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21B180u;
    {
        const bool branch_taken_0x21b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B180u;
        // 0x21b184: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b180) {
            ctx->pc = 0x21B160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b160;
        }
    }
    ctx->pc = 0x21B188u;
    // 0x21b188: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21b188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b18c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b190: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b194: 0xc086be2  jal         func_21AF88
    ctx->pc = 0x21B194u;
    SET_GPR_U32(ctx, 31, 0x21B19Cu);
    ctx->pc = 0x21B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B194u;
    // 0x21b198: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AF88u, 0x21B194u, 0x21B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B19Cu;
label_21b19c:
    // 0x21b19c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b1a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21b1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1a8: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x21b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x21b1ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21b1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1b0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21b1b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1b8: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x21b1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x21b1bc: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x21B1BCu;
    {
        const bool branch_taken_0x21b1bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x21B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1BCu;
        // 0x21b1c0: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1bc) {
            ctx->pc = 0x21B1FCu;
            goto label_21b1fc;
        }
    }
    ctx->pc = 0x21B1C4u;
    // 0x21b1c4: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x21b1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21b1c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21B1C8u;
    {
        const bool branch_taken_0x21b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b1c8) {
            ctx->pc = 0x21B1FCu;
            goto label_21b1fc;
        }
    }
    ctx->pc = 0x21B1D0u;
    // 0x21b1d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b1d4: 0x0  nop
    ctx->pc = 0x21b1d4u;
    // NOP
label_21b1d8:
    // 0x21b1d8: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x21b1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21b1dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B1DCu;
    {
        const bool branch_taken_0x21b1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1DCu;
        // 0x21b1e0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1dc) {
            ctx->pc = 0x21B1FCu;
            goto label_21b1fc;
        }
    }
    ctx->pc = 0x21B1E4u;
    // 0x21b1e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21b1e8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x21b1e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21b1ec: 0x0  nop
    ctx->pc = 0x21b1ecu;
    // NOP
    // 0x21b1f0: 0x0  nop
    ctx->pc = 0x21b1f0u;
    // NOP
    // 0x21b1f4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B1F4u;
    {
        const bool branch_taken_0x21b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1f4) {
            ctx->pc = 0x21B1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B1F4u;
            // 0x21b1f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b1d8;
        }
    }
    ctx->pc = 0x21B1FCu;
label_21b1fc:
    // 0x21b1fc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21B1FCu;
    {
        const bool branch_taken_0x21b1fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1FCu;
        // 0x21b200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1fc) {
            ctx->pc = 0x21B244u;
            goto label_21b244;
        }
    }
    ctx->pc = 0x21B204u;
    // 0x21b204: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B204u;
    SET_GPR_U32(ctx, 31, 0x21B20Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B204u, 0x21B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B20Cu;
label_21b20c:
    // 0x21b20c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21b210: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x21b214: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x21b214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21b218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b21c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b220: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21b220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21b224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b228: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x21b228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b22c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21b230: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x21b230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x21b234: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21b238: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21b238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b23c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21b23cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21b240: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_21b244:
    // 0x21b244: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21b248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b24c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21b250: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21b250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b254: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x21b254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b258: 0xc086c2e  jal         func_21B0B8
    ctx->pc = 0x21B258u;
    SET_GPR_U32(ctx, 31, 0x21B260u);
    ctx->pc = 0x21B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B258u;
    // 0x21b25c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x21B258u, 0x21B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B260u;
label_21b260:
    // 0x21b260: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x21B260u;
    SET_GPR_U32(ctx, 31, 0x21B268u);
    ctx->pc = 0x21B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B260u;
    // 0x21b264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x21B260u, 0x21B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B268u;
label_21b268:
    // 0x21b268: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b26c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21B26Cu;
    SET_GPR_U32(ctx, 31, 0x21B274u);
    ctx->pc = 0x21B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B26Cu;
    // 0x21b270: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21B26Cu, 0x21B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B274u;
label_21b274:
    // 0x21b274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b278: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x21B278u;
    SET_GPR_U32(ctx, 31, 0x21B280u);
    ctx->pc = 0x21B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B278u;
    // 0x21b27c: 0xa3a20100  sb          $v0, 0x100($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x21B278u, 0x21B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B280u;
label_21b280:
    // 0x21b280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b284: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x21b284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x21b288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b28c: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x21B28Cu;
    {
        const bool branch_taken_0x21b28c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B28Cu;
        // 0x21b290: 0xa3a30101  sb          $v1, 0x101($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 257), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b28c) {
            ctx->pc = 0x21B2D4u;
            goto label_21b2d4;
        }
    }
    ctx->pc = 0x21B294u;
    // 0x21b294: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21B294u;
    SET_GPR_U32(ctx, 31, 0x21B29Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21B294u, 0x21B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B29Cu;
label_21b29c:
    // 0x21b29c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21b2a0: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x21b2a4: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x21b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x21b2a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21b2ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21b2b0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21b2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21b2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b2b8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x21b2b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b2bc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x21b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x21b2c0: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x21b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x21b2c4: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x21b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x21b2c8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x21b2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b2cc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21b2ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21b2d0: 0x23bc3  sra         $a3, $v0, 15
    ctx->pc = 0x21b2d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 15));
label_21b2d4:
    // 0x21b2d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21b2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2D8u;
    {
        const bool branch_taken_0x21b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D8u;
        // 0x21b2dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2d8) {
            ctx->pc = 0x21B2ECu;
            goto label_21b2ec;
        }
    }
    ctx->pc = 0x21B2E0u;
label_21b2e0:
    // 0x21b2e0: 0xc09358e  jal         func_24D638
    ctx->pc = 0x21B2E0u;
    SET_GPR_U32(ctx, 31, 0x21B2E8u);
    ctx->pc = 0x24D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D638u, 0x21B2E0u, 0x21B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2E8u;
label_21b2e8:
    // 0x21b2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b2ec:
    // 0x21b2ec: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x21b2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21b2f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B2F0u;
    {
        const bool branch_taken_0x21b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F0u;
        // 0x21b2f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f0) {
            ctx->pc = 0x21B320u;
            goto label_21b320;
        }
    }
    ctx->pc = 0x21B2F8u;
    // 0x21b2f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21b2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b300: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21b300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b304: 0xc08693a  jal         func_21A4E8
    ctx->pc = 0x21B304u;
    SET_GPR_U32(ctx, 31, 0x21B30Cu);
    ctx->pc = 0x21B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B304u;
    // 0x21b308: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A4E8u, 0x21B304u, 0x21B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B30Cu;
label_21b30c:
    // 0x21b30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b310: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21b310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b314: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b318: 0x1280fff1  beqz        $s4, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B318u;
    {
        const bool branch_taken_0x21b318 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B318u;
        // 0x21b31c: 0x2666ffff  addiu       $a2, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b318) {
            ctx->pc = 0x21B2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b2e0;
        }
    }
    ctx->pc = 0x21B320u;
label_21b320:
    // 0x21b320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b328: 0xc086396  jal         func_218E58
    ctx->pc = 0x21B328u;
    SET_GPR_U32(ctx, 31, 0x21B330u);
    ctx->pc = 0x21B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B328u;
    // 0x21b32c: 0x214280b  movn        $a1, $s0, $s4 (Delay Slot)
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x21B328u, 0x21B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B330u;
label_21b330:
    // 0x21b330: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x21b330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21b334: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x21b334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21b338: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x21b338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21b33c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x21b33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21b340: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x21b340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21b344: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x21b344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x21b348: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21b34c: 0x3e00008  jr          $ra
    ctx->pc = 0x21B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B34Cu;
        // 0x21b350: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B354u;
    // 0x21b354: 0x0  nop
    ctx->pc = 0x21b354u;
    // NOP
    ctx->pc = 0x21b358u;
}
