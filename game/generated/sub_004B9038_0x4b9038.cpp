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

// Function: sub_004B9038
// Address: 0x4b9038 - 0x4b9620
void sub_004B9038_0x4b9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9038_0x4b9038");
#endif

    switch (ctx->pc) {
        case 0x4b9070u: goto label_4b9070;
        case 0x4b9090u: goto label_4b9090;
        case 0x4b9098u: goto label_4b9098;
        case 0x4b91e0u: goto label_4b91e0;
        case 0x4b9388u: goto label_4b9388;
        case 0x4b9454u: goto label_4b9454;
        case 0x4b95d4u: goto label_4b95d4;
        case 0x4b95ecu: goto label_4b95ec;
        default: break;
    }

    ctx->pc = 0x4b9038u;

    // 0x4b9038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b9038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b903c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b9040: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b9044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b9044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9048: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4b9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4b904c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b9050: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b9054: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b9058: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b905c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b9060: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4b9060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4b9064: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4b9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4b9068: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4B9068u;
    SET_GPR_U32(ctx, 31, 0x4B9070u);
    ctx->pc = 0x4B906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9068u;
    // 0x4b906c: 0x263001b4  addiu       $s0, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B9068u, 0x4B9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9070u;
label_4b9070:
    // 0x4b9070: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b9070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b9074: 0x247e0db0  addiu       $fp, $v1, 0xDB0
    ctx->pc = 0x4b9074u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x4b9078: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4b9078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0DB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DB0u, _value); } while (0);
    // 0x4b907c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b907cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b9080: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4B9080u;
    {
        const bool branch_taken_0x4b9080 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9080u;
        // 0x4b9084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9080) {
            ctx->pc = 0x4B9128u;
            goto label_4b9128;
        }
    }
    ctx->pc = 0x4B9088u;
    // 0x4b9088: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B9088u;
    SET_GPR_U32(ctx, 31, 0x4B9090u);
    ctx->pc = 0x4B908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9088u;
    // 0x4b908c: 0x2636015e  addiu       $s6, $s1, 0x15E (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B9088u, 0x4B9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9090u;
label_4b9090:
    // 0x4b9090: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B9090u;
    SET_GPR_U32(ctx, 31, 0x4B9098u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B9090u, 0x4B9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9098u;
label_4b9098:
    // 0x4b9098: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4b9098u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b909c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b909cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b90a0: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x4b90a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b90a4: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4b90a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b90a8: 0xa6200162  sh          $zero, 0x162($s1)
    ctx->pc = 0x4b90a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b90ac: 0x25040d98  addiu       $a0, $t0, 0xD98
    ctx->pc = 0x4b90acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 3480));
    // 0x4b90b0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b90b4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b90b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b90b8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b90b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b90bc: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b90bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b90c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D98u));
    // 0x4b90c4: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x4b90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x4b90c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b90cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b90ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b90d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b90d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b90d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b90d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b90d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b90dc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b90dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b90e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b90e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b90e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b90e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b90e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b90ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b90f0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b90f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b90f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b90f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4b90f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4b90fc: 0x24216eb8  addiu       $at, $at, 0x6EB8
    ctx->pc = 0x4b90fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28344));
    // 0x4b9100: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b9104: 0xad420db4  sw          $v0, 0xDB4($t2)
    ctx->pc = 0x4b9104u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 3508), GPR_U32(ctx, 2));
    // 0x4b9108: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x4b9108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x4b910c: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4b910cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b9110: 0xa623015a  sh          $v1, 0x15A($s1)
    ctx->pc = 0x4b9110u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b9114: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b9114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b9118: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b9118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b911c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B911Cu;
    {
        const bool branch_taken_0x4b911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B911Cu;
        // 0x4b9120: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b911c) {
            ctx->pc = 0x4B913Cu;
            goto label_4b913c;
        }
    }
    ctx->pc = 0x4B9124u;
    // 0x4b9124: 0x0  nop
    ctx->pc = 0x4b9124u;
    // NOP
label_4b9128:
    // 0x4b9128: 0x2636015e  addiu       $s6, $s1, 0x15E
    ctx->pc = 0x4b9128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4b912c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b912cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b9130: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4b9130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b9134: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b9134u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b9138: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b9138u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4b913c:
    // 0x4b913c: 0x25120d98  addiu       $s2, $t0, 0xD98
    ctx->pc = 0x4b913cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 3480));
    // 0x4b9140: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b9140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b9144: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b9144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9148: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b9148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b914c: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x4b914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x4b9150: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b9150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b9154: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9158: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b915c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9160: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b9160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9164: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b9164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b9168: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b916c: 0x24550da4  addiu       $s5, $v0, 0xDA4
    ctx->pc = 0x4b916cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3492));
    // 0x4b9170: 0x24940da8  addiu       $s4, $a0, 0xDA8
    ctx->pc = 0x4b9170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 3496));
    // 0x4b9174: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b9174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9178: 0x24e76eb8  addiu       $a3, $a3, 0x6EB8
    ctx->pc = 0x4b9178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28344));
    // 0x4b917c: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4b917cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0DA4u));
    // 0x4b9180: 0x25570db4  addiu       $s7, $t2, 0xDB4
    ctx->pc = 0x4b9180u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 3508));
    // 0x4b9184: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b9184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b9188: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4b9188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b918c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9190: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b9190u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b9194: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9198: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b9198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b919c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b919cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b91a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b91a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b91a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b91a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91ac: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b91acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b91b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b91b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4b91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b91b8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x4b91b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b91bc: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x4b91bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b91c0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b91c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b91c4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4b91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4b91c8: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4b91c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4b91cc: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b91ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b91d0: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x4b91d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x4b91d4: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x4b91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x4b91d8: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4B91D8u;
    SET_GPR_U32(ctx, 31, 0x4B91E0u);
    ctx->pc = 0x4B91DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B91D8u;
    // 0x4b91dc: 0xaea90000  sw          $t1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4B91D8u, 0x4B91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B91E0u;
label_4b91e0:
    // 0x4b91e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b91e4: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4b91e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b91e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b91e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b91ec: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4b91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b91f0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b91f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b91f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b91f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b91f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b91fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b91fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9200: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x4b9200u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4b9204: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b9204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9208: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b9208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b920c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b920cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b9210: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9214: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9218: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b921c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b921cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b9220: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b9220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9224: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B9224u;
    {
        const bool branch_taken_0x4b9224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9224u;
        // 0x4b9228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9224) {
            ctx->pc = 0x4B9260u;
            goto label_4b9260;
        }
    }
    ctx->pc = 0x4B922Cu;
    // 0x4b922c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b922cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b9230: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b9230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9234: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b9234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9238: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b9238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b923c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b923cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9240: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b9240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b9244: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b9244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9248: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b9248u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b924c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b924cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9250: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b9250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b9254: 0x812e344  j           func_4B8D10
    ctx->pc = 0x4B9254u;
    ctx->pc = 0x4B9258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9254u;
    // 0x4b9258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D10u, 0x4B9254u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B925Cu;
    // 0x4b925c: 0x0  nop
    ctx->pc = 0x4b925cu;
    // NOP
label_4b9260:
    // 0x4b9260: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4b9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4b9264: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x4b9264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b9268: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4b9268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4b926c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4b926cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4b9270: 0x256b0d9c  addiu       $t3, $t3, 0xD9C
    ctx->pc = 0x4b9270u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3484));
    // 0x4b9274: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4b9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9278: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4b9278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b927c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b9280: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x4b9280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4b9284: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4b9284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4b9288: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b9288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b928c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b9290: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b9294: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9298: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4b9298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b929c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b92a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4b92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4b92a4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b92a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b92a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b92a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b92ac: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4b92acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4b92b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b92b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b92b4: 0x24930dac  addiu       $s3, $a0, 0xDAC
    ctx->pc = 0x4b92b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 3500));
    // 0x4b92b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b92bc: 0x8fcc0000  lw          $t4, 0x0($fp)
    ctx->pc = 0x4b92bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b92c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b92c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b92c8: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4b92c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b92cc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x4b92ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x4b92d0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b92d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b92d4: 0x86a90000  lh          $t1, 0x0($s5)
    ctx->pc = 0x4b92d4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b92d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b92d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b92dc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x4b92dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b92e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b92e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b92e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b92e8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b92e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b92ec: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4b92ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4b92f0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4b92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4b92f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b92f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b92f8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4b92f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4b92fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4b92fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b9300: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4b9300u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b9304: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b9308: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4b9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b930c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b9310: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9314: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b9318: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b9318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b931c: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4b931cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4b9320: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b9320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b9324: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4b9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b9328: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4b9328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b932c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b9330: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9334: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4b9334u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4b9338: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4b9338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4b933c: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4b933cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4b9340: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4b9340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4b9344: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x4b9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x4b9348: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b9348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b934c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b934cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9350: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4b9350u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b9354: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4b9354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4b9358: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4b9358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4b935c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4b935cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4b9360: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x4b9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4b9364: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x4b9364u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x4b9368: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b9368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b936c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b936cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9370: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b9370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b9374: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b9374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b9378: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b9378u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b937c: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4b937cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4b9380: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B9380u;
    SET_GPR_U32(ctx, 31, 0x4B9388u);
    ctx->pc = 0x4B9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9380u;
    // 0x4b9384: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B9380u, 0x4B9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9388u;
label_4b9388:
    // 0x4b9388: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4B9388u;
    {
        const bool branch_taken_0x4b9388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b9388) {
            ctx->pc = 0x4B938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9388u;
            // 0x4b938c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9420u;
            goto label_4b9420;
        }
    }
    ctx->pc = 0x4B9390u;
    // 0x4b9390: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4b9390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b9394: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b9394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b9398: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b9398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b939c: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4b939cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b93a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b93a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b93a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b93a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b93a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b93ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b93acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b93b0: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x4b93b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x4b93b4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b93b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b93b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b93b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b93bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b93c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b93c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b93c4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b93c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b93c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b93c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b93cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b93d0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b93d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b93d4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B93D4u;
    {
        const bool branch_taken_0x4b93d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b93d4) {
            ctx->pc = 0x4B93D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B93D4u;
            // 0x4b93d8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9410u;
            goto label_4b9410;
        }
    }
    ctx->pc = 0x4B93DCu;
    // 0x4b93dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b93dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b93e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b93e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b93e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b93e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b93e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b93e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b93ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b93ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b93f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b93f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b93f4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b93f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b93f8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b93f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b93fc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b93fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b9400: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b9400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9404: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b9404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b9408: 0x812e3d6  j           func_4B8F58
    ctx->pc = 0x4B9408u;
    ctx->pc = 0x4B940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9408u;
    // 0x4b940c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8F58u, 0x4B9408u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B9410u;
label_4b9410:
    // 0x4b9410: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b9410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9414: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4b9414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b9418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B9418u;
    {
        const bool branch_taken_0x4b9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9418u;
        // 0x4b941c: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9418) {
            ctx->pc = 0x4B942Cu;
            goto label_4b942c;
        }
    }
    ctx->pc = 0x4B9420u;
label_4b9420:
    // 0x4b9420: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b9420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b9424: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4b9424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b9428: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4b9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_4b942c:
    // 0x4b942c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b942cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9430: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9434: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b9438: 0xf03824  and         $a3, $a3, $s0
    ctx->pc = 0x4b9438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x4b943c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4b943cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4b9440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b9440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9444: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b9444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b9448: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b9448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b944c: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4B944Cu;
    SET_GPR_U32(ctx, 31, 0x4B9454u);
    ctx->pc = 0x4B9450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B944Cu;
    // 0x4b9450: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4B944Cu, 0x4B9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9454u;
label_4b9454:
    // 0x4b9454: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x4b9454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b9458: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b9458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b945c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b9460: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b9460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b9464: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b9468: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4b9468u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b946c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b946cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9470: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b9470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b9474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b9474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b9478: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4b9478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b947c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b947cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b9480: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4b9480u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b9484: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b9484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b9488: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b948c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b948cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b9490: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4b9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4b9494: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b9494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b9498: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b9498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b949c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b949cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b94a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b94a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b94a4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b94a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b94a8: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4b94a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4b94ac: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b94acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b94b0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b94b4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4b94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4b94b8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b94b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b94bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b94bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b94c0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b94c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b94c4: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4b94c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4b94c8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4b94c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4b94cc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b94d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b94d4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b94d8: 0x24a70da4  addiu       $a3, $a1, 0xDA4
    ctx->pc = 0x4b94d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3492));
    // 0x4b94dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b94dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b94e0: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x4b94e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b94e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b94e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b94e8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b94e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0DA4u));
    // 0x4b94ec: 0x24ab0da8  addiu       $t3, $a1, 0xDA8
    ctx->pc = 0x4b94ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3496));
    // 0x4b94f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DA4u));
    // 0x4b94f4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b94f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b94f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b94fc: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4b94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b9500: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b9500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b9504: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b9508: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b950c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b9510: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4b9510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b9514: 0x244c0dac  addiu       $t4, $v0, 0xDAC
    ctx->pc = 0x4b9514u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 3500));
    // 0x4b9518: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b9518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b951c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b951cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b9520: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4b9520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4b9524: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b9524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b9528: 0x260d2494  addiu       $t5, $s0, 0x2494
    ctx->pc = 0x4b9528u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4b952c: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4b952cu;
    SET_GPR_S32(ctx, 10, (int16_t)FAST_READ16(0x7F0DACu));
    // 0x4b9530: 0x260e2498  addiu       $t6, $s0, 0x2498
    ctx->pc = 0x4b9530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4b9534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b9538: 0x260f249c  addiu       $t7, $s0, 0x249C
    ctx->pc = 0x4b9538u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4b953c: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4b953cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0DACu));
    // 0x4b9540: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b9544: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x4b9544u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b9548: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9548u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b954c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b954cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b9550: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4b9550u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b9554: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4b9554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4b9558: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4b9558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4b955c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b955cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b9560: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b9560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b9564: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4b9564u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4b9568: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b956c: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4b956cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b9570: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b9570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b9574: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4b9574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b9578: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4b9578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4b957c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b9580: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x4b9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b9584: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b9584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b9588: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4b9588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b958c: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4b958cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4b9590: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b9594: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x4b9594u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x4b9598: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4b9598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4b959c: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x4b959cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x4b95a0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4b95a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4b95a4: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4b95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4b95a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b95a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b95ac: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4b95acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4b95b0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b95b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b95b4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4b95b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b95b8: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4b95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4b95bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b95c0: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x4b95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x4b95c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b95c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b95c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b95c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b95cc: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B95CCu;
    SET_GPR_U32(ctx, 31, 0x4B95D4u);
    ctx->pc = 0x4B95D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95CCu;
    // 0x4b95d0: 0xade50000  sw          $a1, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B95CCu, 0x4B95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95D4u;
label_4b95d4:
    // 0x4b95d4: 0x960324a0  lhu         $v1, 0x24A0($s0)
    ctx->pc = 0x4b95d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4b95d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b95d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95dc: 0xa6230160  sh          $v1, 0x160($s1)
    ctx->pc = 0x4b95dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b95e0: 0x960224a2  lhu         $v0, 0x24A2($s0)
    ctx->pc = 0x4b95e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4b95e4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B95E4u;
    SET_GPR_U32(ctx, 31, 0x4B95ECu);
    ctx->pc = 0x4B95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B95E4u;
    // 0x4b95e8: 0xa6220162  sh          $v0, 0x162($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B95E4u, 0x4B95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B95ECu;
label_4b95ec:
    // 0x4b95ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b95f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b95f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b95f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b95f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b95f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b95f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b95fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b95fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b9600: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b9600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9604: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b9604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b9608: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b9608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b960c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b960cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b9610: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b9610u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9614: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b9614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b9618: 0x812e344  j           func_4B8D10
    ctx->pc = 0x4B9618u;
    ctx->pc = 0x4B961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9618u;
    // 0x4b961c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D10u, 0x4B9618u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B9620u;
}
