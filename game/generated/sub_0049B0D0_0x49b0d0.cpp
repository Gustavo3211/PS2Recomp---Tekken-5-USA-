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

// Function: sub_0049B0D0
// Address: 0x49b0d0 - 0x49b1d0
void sub_0049B0D0_0x49b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B0D0_0x49b0d0");
#endif

    switch (ctx->pc) {
        case 0x49b0d0u: goto label_49b0d0;
        case 0x49b0d4u: goto label_49b0d4;
        case 0x49b0d8u: goto label_49b0d8;
        case 0x49b0dcu: goto label_49b0dc;
        case 0x49b0e0u: goto label_49b0e0;
        case 0x49b0e4u: goto label_49b0e4;
        case 0x49b0e8u: goto label_49b0e8;
        case 0x49b0ecu: goto label_49b0ec;
        case 0x49b0f0u: goto label_49b0f0;
        case 0x49b0f4u: goto label_49b0f4;
        case 0x49b0f8u: goto label_49b0f8;
        case 0x49b0fcu: goto label_49b0fc;
        case 0x49b100u: goto label_49b100;
        case 0x49b104u: goto label_49b104;
        case 0x49b108u: goto label_49b108;
        case 0x49b10cu: goto label_49b10c;
        case 0x49b110u: goto label_49b110;
        case 0x49b114u: goto label_49b114;
        case 0x49b118u: goto label_49b118;
        case 0x49b11cu: goto label_49b11c;
        case 0x49b120u: goto label_49b120;
        case 0x49b124u: goto label_49b124;
        case 0x49b128u: goto label_49b128;
        case 0x49b12cu: goto label_49b12c;
        case 0x49b130u: goto label_49b130;
        case 0x49b134u: goto label_49b134;
        case 0x49b138u: goto label_49b138;
        case 0x49b13cu: goto label_49b13c;
        case 0x49b140u: goto label_49b140;
        case 0x49b144u: goto label_49b144;
        case 0x49b148u: goto label_49b148;
        case 0x49b14cu: goto label_49b14c;
        case 0x49b150u: goto label_49b150;
        case 0x49b154u: goto label_49b154;
        case 0x49b158u: goto label_49b158;
        case 0x49b15cu: goto label_49b15c;
        case 0x49b160u: goto label_49b160;
        case 0x49b164u: goto label_49b164;
        case 0x49b168u: goto label_49b168;
        case 0x49b16cu: goto label_49b16c;
        case 0x49b170u: goto label_49b170;
        case 0x49b174u: goto label_49b174;
        case 0x49b178u: goto label_49b178;
        case 0x49b17cu: goto label_49b17c;
        case 0x49b180u: goto label_49b180;
        case 0x49b184u: goto label_49b184;
        case 0x49b188u: goto label_49b188;
        case 0x49b18cu: goto label_49b18c;
        case 0x49b190u: goto label_49b190;
        case 0x49b194u: goto label_49b194;
        case 0x49b198u: goto label_49b198;
        case 0x49b19cu: goto label_49b19c;
        case 0x49b1a0u: goto label_49b1a0;
        case 0x49b1a4u: goto label_49b1a4;
        case 0x49b1a8u: goto label_49b1a8;
        case 0x49b1acu: goto label_49b1ac;
        case 0x49b1b0u: goto label_49b1b0;
        case 0x49b1b4u: goto label_49b1b4;
        case 0x49b1b8u: goto label_49b1b8;
        case 0x49b1bcu: goto label_49b1bc;
        case 0x49b1c0u: goto label_49b1c0;
        case 0x49b1c4u: goto label_49b1c4;
        case 0x49b1c8u: goto label_49b1c8;
        case 0x49b1ccu: goto label_49b1cc;
        default: break;
    }

    ctx->pc = 0x49b0d0u;

label_49b0d0:
    // 0x49b0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_49b0d4:
    // 0x49b0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49b0d8:
    // 0x49b0d8: 0xc1232f2  jal         func_48CBC8
label_49b0dc:
    if (ctx->pc == 0x49B0DCu) {
        ctx->pc = 0x49B0E0u;
        goto label_49b0e0;
    }
    ctx->pc = 0x49B0D8u;
    SET_GPR_U32(ctx, 31, 0x49B0E0u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49B0D8u, 0x49B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B0E0u;
label_49b0e0:
    // 0x49b0e0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_49b0e4:
    // 0x49b0e4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x49b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_49b0e8:
    // 0x49b0e8: 0x24670b64  addiu       $a3, $v1, 0xB64
    ctx->pc = 0x49b0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2916));
label_49b0ec:
    // 0x49b0ec: 0x8485d642  lh          $a1, -0x29BE($a0)
    ctx->pc = 0x49b0ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294956610)));
label_49b0f0:
    // 0x49b0f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_49b0f4:
    // 0x49b0f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49b0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_49b0f8:
    // 0x49b0f8: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x49b0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
label_49b0fc:
    // 0x49b0fc: 0x244c004a  addiu       $t4, $v0, 0x4A
    ctx->pc = 0x49b0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 74));
label_49b100:
    // 0x49b100: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b104:
    // 0x49b104: 0x24480048  addiu       $t0, $v0, 0x48
    ctx->pc = 0x49b104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_49b108:
    // 0x49b108: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49b108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_49b10c:
    // 0x49b10c: 0x244b004c  addiu       $t3, $v0, 0x4C
    ctx->pc = 0x49b10cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_49b110:
    // 0x49b110: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49b110u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_49b114:
    // 0x49b114: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49b114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49b118:
    // 0x49b118: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49b118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_49b11c:
    // 0x49b11c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x49b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_49b120:
    // 0x49b120: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_49b124:
    // 0x49b124: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49b124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49b128:
    // 0x49b128: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49b128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_49b12c:
    // 0x49b12c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49b12cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_49b130:
    // 0x49b130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_49b134:
    if (ctx->pc == 0x49B134u) {
        ctx->pc = 0x49B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B130u;
        // 0x49b134: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B138u;
        goto label_49b138;
    }
    ctx->pc = 0x49B130u;
    {
        const bool branch_taken_0x49b130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B130u;
        // 0x49b134: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b130) {
            ctx->pc = 0x49B148u;
            goto label_49b148;
        }
    }
    ctx->pc = 0x49B138u;
label_49b138:
    // 0x49b138: 0xc126bda  jal         func_49AF68
label_49b13c:
    if (ctx->pc == 0x49B13Cu) {
        ctx->pc = 0x49B140u;
        goto label_49b140;
    }
    ctx->pc = 0x49B138u;
    SET_GPR_U32(ctx, 31, 0x49B140u);
    ctx->pc = 0x49AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49AF68u, 0x49B138u, 0x49B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B140u;
label_49b140:
    // 0x49b140: 0x1000001e  b           . + 4 + (0x1E << 2)
label_49b144:
    if (ctx->pc == 0x49B144u) {
        ctx->pc = 0x49B148u;
        goto label_49b148;
    }
    ctx->pc = 0x49B140u;
    {
        const bool branch_taken_0x49b140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b140) {
            ctx->pc = 0x49B1BCu;
            goto label_49b1bc;
        }
    }
    ctx->pc = 0x49B148u;
label_49b148:
    // 0x49b148: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x49b148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_49b14c:
    // 0x49b14c: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x49b14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_49b150:
    // 0x49b150: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49b150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_49b154:
    // 0x49b154: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x49b154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_49b158:
    // 0x49b158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_49b15c:
    // 0x49b15c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x49b15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_49b160:
    // 0x49b160: 0x493024  and         $a2, $v0, $t1
    ctx->pc = 0x49b160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_49b164:
    // 0x49b164: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x49b164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_49b168:
    // 0x49b168: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x49b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_49b16c:
    // 0x49b16c: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x49b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_49b170:
    // 0x49b170: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x49b170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_49b174:
    // 0x49b174: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x49b174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_49b178:
    // 0x49b178: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x49b178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49b17c:
    // 0x49b17c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49b17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_49b180:
    // 0x49b180: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x49b180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_49b184:
    // 0x49b184: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x49b184u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_49b188:
    // 0x49b188: 0xc91024  and         $v0, $a2, $t1
    ctx->pc = 0x49b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_49b18c:
    // 0x49b18c: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_49b190:
    if (ctx->pc == 0x49B190u) {
        ctx->pc = 0x49B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B18Cu;
        // 0x49b190: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B194u;
        goto label_49b194;
    }
    ctx->pc = 0x49B18Cu;
    {
        const bool branch_taken_0x49b18c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x49B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B18Cu;
        // 0x49b190: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b18c) {
            ctx->pc = 0x49B1B0u;
            goto label_49b1b0;
        }
    }
    ctx->pc = 0x49B194u;
label_49b194:
    // 0x49b194: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x49b194u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
label_49b198:
    // 0x49b198: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x49b198u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
label_49b19c:
    // 0x49b19c: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x49b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_49b1a0:
    // 0x49b1a0: 0x40f809  jalr        $v0
label_49b1a4:
    if (ctx->pc == 0x49B1A4u) {
        ctx->pc = 0x49B1A8u;
        goto label_49b1a8;
    }
    ctx->pc = 0x49B1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49B1A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B1A0u, 0x49B1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49B1A8u;
label_49b1a8:
    // 0x49b1a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_49b1ac:
    if (ctx->pc == 0x49B1ACu) {
        ctx->pc = 0x49B1B0u;
        goto label_49b1b0;
    }
    ctx->pc = 0x49B1A8u;
    {
        const bool branch_taken_0x49b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b1a8) {
            ctx->pc = 0x49B1BCu;
            goto label_49b1bc;
        }
    }
    ctx->pc = 0x49B1B0u;
label_49b1b0:
    // 0x49b1b0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49b1b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_49b1b4:
    // 0x49b1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_49b1b8:
    // 0x49b1b8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49b1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_49b1bc:
    // 0x49b1bc: 0xc124c3c  jal         func_4930F0
label_49b1c0:
    if (ctx->pc == 0x49B1C0u) {
        ctx->pc = 0x49B1C4u;
        goto label_49b1c4;
    }
    ctx->pc = 0x49B1BCu;
    SET_GPR_U32(ctx, 31, 0x49B1C4u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x49B1BCu, 0x49B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B1C4u;
label_49b1c4:
    // 0x49b1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49b1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49b1c8:
    // 0x49b1c8: 0x8124642  j           func_491908
label_49b1cc:
    if (ctx->pc == 0x49B1CCu) {
        ctx->pc = 0x49B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B1C8u;
        // 0x49b1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49B1D0u;
        goto label_fallthrough_0x49b1c8;
    }
    ctx->pc = 0x49B1C8u;
    ctx->pc = 0x49B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B1C8u;
    // 0x49b1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491908u;
    sub_00491908_0x491908(rdram, ctx, runtime); return;
label_fallthrough_0x49b1c8:
    ctx->pc = 0x49B1D0u;
}
