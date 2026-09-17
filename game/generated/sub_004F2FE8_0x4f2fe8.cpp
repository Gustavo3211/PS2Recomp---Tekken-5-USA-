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

// Function: sub_004F2FE8
// Address: 0x4f2fe8 - 0x4f31f0
void sub_004F2FE8_0x4f2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2FE8_0x4f2fe8");
#endif

    switch (ctx->pc) {
        case 0x4f3014u: goto label_4f3014;
        case 0x4f3030u: goto label_4f3030;
        case 0x4f3098u: goto label_4f3098;
        case 0x4f30a0u: goto label_4f30a0;
        case 0x4f3124u: goto label_4f3124;
        case 0x4f3194u: goto label_4f3194;
        case 0x4f319cu: goto label_4f319c;
        default: break;
    }

    ctx->pc = 0x4f2fe8u;

    // 0x4f2fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f2fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f2ff0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f2ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f2ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2ff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f2ffc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f3000: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f3004: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f3008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f300c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F300Cu;
    SET_GPR_U32(ctx, 31, 0x4F3014u);
    ctx->pc = 0x4F3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F300Cu;
    // 0x4f3010: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F300Cu, 0x4F3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3014u;
label_4f3014:
    // 0x4f3014: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3018: 0xac621258  sw          $v0, 0x1258($v1)
    ctx->pc = 0x4f3018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F1258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1258u, _value); } while (0);
    // 0x4f301c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f301cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f3020: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4F3020u;
    {
        const bool branch_taken_0x4f3020 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f3020) {
            ctx->pc = 0x4F311Cu;
            goto label_4f311c;
        }
    }
    ctx->pc = 0x4F3028u;
    // 0x4f3028: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F3028u;
    SET_GPR_U32(ctx, 31, 0x4F3030u);
    ctx->pc = 0x4F302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3028u;
    // 0x4f302c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F3028u, 0x4F3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3030u;
label_4f3030:
    // 0x4f3030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f3034: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4f3034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4f3038: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x4f3038u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f303c: 0xa6430158  sh          $v1, 0x158($s2)
    ctx->pc = 0x4f303cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f3040: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f3040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f3044: 0xa640015e  sh          $zero, 0x15E($s2)
    ctx->pc = 0x4f3044u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f3048: 0x24451248  addiu       $a1, $v0, 0x1248
    ctx->pc = 0x4f3048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
    // 0x4f304c: 0xa64001b6  sh          $zero, 0x1B6($s2)
    ctx->pc = 0x4f304cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f3050: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f3050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3054: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4f3054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4f3058: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f3058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f305c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f3060: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4f3060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3064: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f3064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1248u));
    // 0x4f3068: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f306c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f3070: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f3070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f3074: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f3074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3078: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4F3078u;
    {
        const bool branch_taken_0x4f3078 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3078u;
        // 0x4f307c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3078) {
            ctx->pc = 0x4F311Cu;
            goto label_4f311c;
        }
    }
    ctx->pc = 0x4F3080u;
    // 0x4f3080: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f3084: 0x2453125c  addiu       $s3, $v0, 0x125C
    ctx->pc = 0x4f3084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4700));
    // 0x4f3088: 0x24701230  addiu       $s0, $v1, 0x1230
    ctx->pc = 0x4f3088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4656));
    // 0x4f308c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f308cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3090: 0x2415002a  addiu       $s5, $zero, 0x2A
    ctx->pc = 0x4f3090u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4f3094: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4f3094u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_4f3098:
    // 0x4f3098: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F3098u;
    SET_GPR_U32(ctx, 31, 0x4F30A0u);
    ctx->pc = 0x4F309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3098u;
    // 0x4f309c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F3098u, 0x4F30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F30A0u;
label_4f30a0:
    // 0x4f30a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f30a4: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x4f30a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4f30a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4f30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f30ac: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4f30acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
    // 0x4f30b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f30b4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f30b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f30b8: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4f30b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4f30bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4f30bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f30c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f30c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f30c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f30c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f30c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f30cc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f30ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f30d0: 0x24420442  addiu       $v0, $v0, 0x442
    ctx->pc = 0x4f30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1090));
    // 0x4f30d4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4f30d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4f30d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f30dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f30e0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f30e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f30e4: 0xa4a2015e  sh          $v0, 0x15E($a1)
    ctx->pc = 0x4f30e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f30e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4f30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4f30ec: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f30ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f30f0: 0xa4820160  sh          $v0, 0x160($a0)
    ctx->pc = 0x4f30f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f30f4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f30f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f30f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f30fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f3100: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3104: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4f3104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4f3108: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f3108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f310c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4f310cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4f3110: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f3110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f3114: 0x441ffe0  bgez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4F3114u;
    {
        const bool branch_taken_0x4f3114 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f3114) {
            ctx->pc = 0x4F3098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3098;
        }
    }
    ctx->pc = 0x4F311Cu;
label_4f311c:
    // 0x4f311c: 0xc12564a  jal         func_495928
    ctx->pc = 0x4F311Cu;
    SET_GPR_U32(ctx, 31, 0x4F3124u);
    ctx->pc = 0x4F3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F311Cu;
    // 0x4f3120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4F311Cu, 0x4F3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3124u;
label_4f3124:
    // 0x4f3124: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4F3124u;
    {
        const bool branch_taken_0x4f3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3124u;
        // 0x4f3128: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3124) {
            ctx->pc = 0x4F31C8u;
            goto label_4f31c8;
        }
    }
    ctx->pc = 0x4F312Cu;
    // 0x4f312c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4f312cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4f3130: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f3130u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f3134: 0x254a123c  addiu       $t2, $t2, 0x123C
    ctx->pc = 0x4f3134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4668));
    // 0x4f3138: 0x256b1240  addiu       $t3, $t3, 0x1240
    ctx->pc = 0x4f3138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4672));
    // 0x4f313c: 0x258c1244  addiu       $t4, $t4, 0x1244
    ctx->pc = 0x4f313cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4676));
    // 0x4f3140: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4f3140u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f3144: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f3144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3148: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4f3148u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1240u));
    // 0x4f314c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3150: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f3150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1244u));
    // 0x4f3154: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4f3154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x4f3158: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4f3158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4f315c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4f315cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4f3160: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4f3160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4f3164: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3168: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4f3168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4f316c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f316cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f3170: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4f3170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4f3174: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f3174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3178: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4f3178u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4f317c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4f317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3180: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4f3180u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4f3184: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4f3184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3188: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4f318c: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4F318Cu;
    SET_GPR_U32(ctx, 31, 0x4F3194u);
    ctx->pc = 0x4F3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F318Cu;
    // 0x4f3190: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4F318Cu, 0x4F3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3194u;
label_4f3194:
    // 0x4f3194: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4F3194u;
    SET_GPR_U32(ctx, 31, 0x4F319Cu);
    ctx->pc = 0x4F3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3194u;
    // 0x4f3198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4F3194u, 0x4F319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F319Cu;
label_4f319c:
    // 0x4f319c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f319cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f31a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f31a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f31a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f31a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f31a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f31a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f31ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f31acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f31b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f31b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f31b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f31b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f31b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f31b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f31bc: 0x812b94c  j           func_4AE530
    ctx->pc = 0x4F31BCu;
    ctx->pc = 0x4F31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F31BCu;
    // 0x4f31c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    sub_004AE530_0x4ae530(rdram, ctx, runtime); return;
    ctx->pc = 0x4F31C4u;
    // 0x4f31c4: 0x0  nop
    ctx->pc = 0x4f31c4u;
    // NOP
label_4f31c8:
    // 0x4f31c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f31c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f31cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f31ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f31d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f31d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f31d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f31d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f31d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f31d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f31dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f31dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f31e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f31e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f31e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F31E4u;
        // 0x4f31e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F31E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F31ECu;
    // 0x4f31ec: 0x0  nop
    ctx->pc = 0x4f31ecu;
    // NOP
    ctx->pc = 0x4f31f0u;
}
