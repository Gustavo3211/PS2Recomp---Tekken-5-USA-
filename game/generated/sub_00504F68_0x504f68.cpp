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

// Function: sub_00504F68
// Address: 0x504f68 - 0x505148
void sub_00504F68_0x504f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504F68_0x504f68");
#endif

    switch (ctx->pc) {
        case 0x505010u: goto label_505010;
        case 0x505088u: goto label_505088;
        case 0x5050a4u: goto label_5050a4;
        case 0x5050c8u: goto label_5050c8;
        default: break;
    }

    ctx->pc = 0x504f68u;

    // 0x504f68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x504f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x504f6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x504f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x504f70: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x504f70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x504f74: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x504f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x504f78: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x504f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x504f7c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x504f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f80: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x504f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x504f84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x504f84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f88: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x504f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x504f8c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x504f8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x504f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x504f94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x504f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x504f98: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x504f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x504f9c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x504f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x504fa0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x504fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x504fa4: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x504fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x504fa8: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x504fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x504fac: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x504facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x504fb0: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x504fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x504fb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x504fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x504fb8: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x504fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x504fbc: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x504fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x504fc0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x504fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x504fc4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x504fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x504fc8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x504fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x504fcc: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x504fccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x504fd0: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x504fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x504fd4: 0x32b4ffff  andi        $s4, $s5, 0xFFFF
    ctx->pc = 0x504fd4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x504fd8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x504fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x504fdc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x504fdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x504fe0: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x504fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x504fe4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x504FE4u;
    {
        const bool branch_taken_0x504fe4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x504FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x504FE4u;
        // 0x504fe8: 0x2443001c  addiu       $v1, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504fe4) {
            ctx->pc = 0x505008u;
            goto label_505008;
        }
    }
    ctx->pc = 0x504FECu;
    // 0x504fec: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x504fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x504ff0: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x504ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x504ff4: 0x83a824  and         $s5, $a0, $v1
    ctx->pc = 0x504ff4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x504ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x504ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ffc: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x504ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x505000: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x505000u;
    {
        const bool branch_taken_0x505000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505000u;
        // 0x505004: 0xafd50000  sw          $s5, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505000) {
            ctx->pc = 0x505118u;
            goto label_505118;
        }
    }
    ctx->pc = 0x505008u;
label_505008:
    // 0x505008: 0xc12a6c8  jal         func_4A9B20
    ctx->pc = 0x505008u;
    SET_GPR_U32(ctx, 31, 0x505010u);
    ctx->pc = 0x4A9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B20u, 0x505008u, 0x505010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505010u;
label_505010:
    // 0x505010: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x505010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x505014: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x505014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x505018: 0x2c6704b7  sltiu       $a3, $v1, 0x4B7
    ctx->pc = 0x505018u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1207) ? 1 : 0);
    // 0x50501c: 0x30b4fffe  andi        $s4, $a1, 0xFFFE
    ctx->pc = 0x50501cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
    // 0x505020: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x505020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505024: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x505024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x505028: 0x34a021  addu        $s4, $at, $s4
    ctx->pc = 0x505028u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 20)));
    // 0x50502c: 0x2c630031  sltiu       $v1, $v1, 0x31
    ctx->pc = 0x50502cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x505030: 0x3685ffff  ori         $a1, $s4, 0xFFFF
    ctx->pc = 0x505030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x505034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x505034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505038: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x505038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x50503c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50503Cu;
    {
        const bool branch_taken_0x50503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x505040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50503Cu;
        // 0x505040: 0xb0a024  and         $s4, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50503c) {
            ctx->pc = 0x505050u;
            goto label_505050;
        }
    }
    ctx->pc = 0x505044u;
    // 0x505044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x505044u;
    {
        const bool branch_taken_0x505044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505044u;
        // 0x505048: 0x36940006  ori         $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x505044) {
            ctx->pc = 0x505068u;
            goto label_505068;
        }
    }
    ctx->pc = 0x50504Cu;
    // 0x50504c: 0x0  nop
    ctx->pc = 0x50504cu;
    // NOP
label_505050:
    // 0x505050: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x505050u;
    {
        const bool branch_taken_0x505050 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x505050) {
            ctx->pc = 0x505054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505050u;
            // 0x505054: 0x84d20000  lh          $s2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50506Cu;
            goto label_50506c;
        }
    }
    ctx->pc = 0x505058u;
    // 0x505058: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x505058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50505c: 0x3683ffff  ori         $v1, $s4, 0xFFFF
    ctx->pc = 0x50505cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x505060: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x505060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x505064: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x505064u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_505068:
    // 0x505068: 0x84d20000  lh          $s2, 0x0($a2)
    ctx->pc = 0x505068u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_50506c:
    // 0x50506c: 0x3293003f  andi        $s3, $s4, 0x3F
    ctx->pc = 0x50506cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x505070: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x505070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505074: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x505074u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x505078: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x505078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x50507c: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x50507cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x505080: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x505080u;
    SET_GPR_U32(ctx, 31, 0x505088u);
    ctx->pc = 0x505084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505080u;
    // 0x505084: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x505080u, 0x505088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505088u;
label_505088:
    // 0x505088: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x505088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50508c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50508cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x505090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x505090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505094: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x505094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x505098: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x505098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x50509c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50509Cu;
    SET_GPR_U32(ctx, 31, 0x5050A4u);
    ctx->pc = 0x5050A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50509Cu;
    // 0x5050a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50509Cu, 0x5050A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5050A4u;
label_5050a4:
    // 0x5050a4: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x5050a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5050a8: 0x3686ffff  ori         $a2, $s4, 0xFFFF
    ctx->pc = 0x5050a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x5050ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5050acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5050b0: 0x31380  sll         $v0, $v1, 14
    ctx->pc = 0x5050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x5050b4: 0x712825  or          $a1, $v1, $s1
    ctx->pc = 0x5050b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x5050b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5050b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5050bc: 0xc5a024  and         $s4, $a2, $a1
    ctx->pc = 0x5050bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x5050c0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5050C0u;
    SET_GPR_U32(ctx, 31, 0x5050C8u);
    ctx->pc = 0x5050C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5050C0u;
    // 0x5050c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5050C0u, 0x5050C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5050C8u;
label_5050c8:
    // 0x5050c8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x5050c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5050cc: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x5050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x5050d0: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x5050d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5050d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x5050d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5050d8: 0x51c03  sra         $v1, $a1, 16
    ctx->pc = 0x5050d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 16));
    // 0x5050dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x5050dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5050e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x5050e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5050e4: 0x36a2ffff  ori         $v0, $s5, 0xFFFF
    ctx->pc = 0x5050e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x5050e8: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x5050e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x5050ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x5050ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5050f0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x5050f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x5050f4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x5050f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x5050f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5050f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5050fc: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x5050fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x505100: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x505100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x505104: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x505104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x505108: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x505108u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x50510c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x505110: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x505110u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x505114: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x505114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_505118:
    // 0x505118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x505118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50511c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x50511cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x505120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x505120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x505124: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x505124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x505128: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x505128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50512c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x50512cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x505130: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x505130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x505134: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x505134u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x505138: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x505138u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50513c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x50513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x505140: 0x3e00008  jr          $ra
    ctx->pc = 0x505140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505140u;
        // 0x505144: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505148u;
}
