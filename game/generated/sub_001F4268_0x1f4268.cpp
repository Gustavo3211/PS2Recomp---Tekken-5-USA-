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

// Function: sub_001F4268
// Address: 0x1f4268 - 0x1f4488
void sub_001F4268_0x1f4268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4268_0x1f4268");
#endif

    switch (ctx->pc) {
        case 0x1f4458u: goto label_1f4458;
        case 0x1f4468u: goto label_1f4468;
        default: break;
    }

    ctx->pc = 0x1f4268u;

    // 0x1f4268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f426c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f426cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f4274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f427c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f427cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4284: 0x94a2014e  lhu         $v0, 0x14E($a1)
    ctx->pc = 0x1f4284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 334)));
    // 0x1f4288: 0x92230045  lbu         $v1, 0x45($s1)
    ctx->pc = 0x1f4288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x1f428c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1f428cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4290: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1f4294: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4294u;
    {
        const bool branch_taken_0x1f4294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4294u;
        // 0x1f4298: 0xa6300040  sh          $s0, 0x40($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4294) {
            ctx->pc = 0x1F42D0u;
            goto label_1f42d0;
        }
    }
    ctx->pc = 0x1F429Cu;
    // 0x1f429c: 0x92220046  lbu         $v0, 0x46($s1)
    ctx->pc = 0x1f429cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1f42a0: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1F42A0u;
    {
        const bool branch_taken_0x1f42a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f42a0) {
            ctx->pc = 0x1F42A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F42A0u;
            // 0x1f42a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F42A8u;
    // 0x1f42a8: 0x5a00006f  blezl       $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1F42A8u;
    {
        const bool branch_taken_0x1f42a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1f42a8) {
            ctx->pc = 0x1F42ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F42A8u;
            // 0x1f42ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F42B0u;
    // 0x1f42b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f42b4: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1f42b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f42b8: 0x1012  mflo        $v0
    ctx->pc = 0x1f42b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f42bc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f42c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f42c4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1F42C4u;
    {
        const bool branch_taken_0x1f42c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C4u;
        // 0x1f42c8: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42c4) {
            ctx->pc = 0x1F4468u;
            goto label_1f4468;
        }
    }
    ctx->pc = 0x1F42CCu;
    // 0x1f42cc: 0x0  nop
    ctx->pc = 0x1f42ccu;
    // NOP
label_1f42d0:
    // 0x1f42d0: 0x92220049  lbu         $v0, 0x49($s1)
    ctx->pc = 0x1f42d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x1f42d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F42D4u;
    {
        const bool branch_taken_0x1f42d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D4u;
        // 0x1f42d8: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42d4) {
            ctx->pc = 0x1F42F4u;
            goto label_1f42f4;
        }
    }
    ctx->pc = 0x1F42DCu;
    // 0x1f42dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f42dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f42e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f42e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f42e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1f42e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f42ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f42f0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_1f42f4:
    // 0x1f42f4: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1f42f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f42f8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F42F8u;
    {
        const bool branch_taken_0x1f42f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f42f8) {
            ctx->pc = 0x1F42FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F42F8u;
            // 0x1f42fc: 0x9222004a  lbu         $v0, 0x4A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F43E0u;
            goto label_1f43e0;
        }
    }
    ctx->pc = 0x1F4300u;
    // 0x1f4300: 0x84e6014e  lh          $a2, 0x14E($a3)
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 334)));
    // 0x1f4304: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4304u;
    {
        const bool branch_taken_0x1f4304 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4304u;
        // 0x1f4308: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4304) {
            ctx->pc = 0x1F431Cu;
            goto label_1f431c;
        }
    }
    ctx->pc = 0x1F430Cu;
    // 0x1f430c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1f4310: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4314: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1f4314u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f4318: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1f431c:
    // 0x1f431c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f4320: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f4324: 0x84e402bc  lh          $a0, 0x2BC($a3)
    ctx->pc = 0x1f4324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 700)));
    // 0x1f4328: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f4328u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f432c: 0x1012  mflo        $v0
    ctx->pc = 0x1f432cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f4330: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4334: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F4334u;
    {
        const bool branch_taken_0x1f4334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4334u;
        // 0x1f4338: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4334) {
            ctx->pc = 0x1F43B8u;
            goto label_1f43b8;
        }
    }
    ctx->pc = 0x1F433Cu;
    // 0x1f433c: 0xdca202b8  ld          $v0, 0x2B8($a1)
    ctx->pc = 0x1f433cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 696)));
    // 0x1f4340: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f4340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f4344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f4348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f434c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F434Cu;
    {
        const bool branch_taken_0x1f434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F434Cu;
        // 0x1f4350: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f434c) {
            ctx->pc = 0x1F43BCu;
            goto label_1f43bc;
        }
    }
    ctx->pc = 0x1F4354u;
    // 0x1f4354: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x1f4354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x1f4358: 0x84450044  lh          $a1, 0x44($v0)
    ctx->pc = 0x1f4358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f435c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F435Cu;
    {
        const bool branch_taken_0x1f435c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F435Cu;
        // 0x1f4360: 0x94e30096  lhu         $v1, 0x96($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f435c) {
            ctx->pc = 0x1F4380u;
            goto label_1f4380;
        }
    }
    ctx->pc = 0x1F4364u;
    // 0x1f4364: 0x84e20096  lh          $v0, 0x96($a3)
    ctx->pc = 0x1f4364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x1f4368: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f436c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F436Cu;
    {
        const bool branch_taken_0x1f436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f436c) {
            ctx->pc = 0x1F4370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F436Cu;
            // 0x1f4370: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F438Cu;
            goto label_1f438c;
        }
    }
    ctx->pc = 0x1F4374u;
    // 0x1f4374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4374u;
    {
        const bool branch_taken_0x1f4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4374u;
        // 0x1f4378: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4374) {
            ctx->pc = 0x1F4384u;
            goto label_1f4384;
        }
    }
    ctx->pc = 0x1F437Cu;
    // 0x1f437c: 0x0  nop
    ctx->pc = 0x1f437cu;
    // NOP
label_1f4380:
    // 0x1f4380: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1f4384:
    // 0x1f4384: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1f4384u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f4388: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1f438c:
    // 0x1f438c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1f438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f4390: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f4394: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1f4394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f4398: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1f4398u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f439c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1f439cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f43a0: 0x1012  mflo        $v0
    ctx->pc = 0x1f43a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f43a4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1f43a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f43a8: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x1f43a8u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1f43ac: 0x70001012  mflo1       $v0
    ctx->pc = 0x1f43acu;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1f43b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f43b4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1f43b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_1f43b8:
    // 0x1f43b8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1f43bc:
    // 0x1f43bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f43c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f43c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f43c8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f43c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f43cc: 0x1012  mflo        $v0
    ctx->pc = 0x1f43ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f43d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f43d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f43d8: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1f43d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f43dc: 0x9222004a  lbu         $v0, 0x4A($s1)
    ctx->pc = 0x1f43dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
label_1f43e0:
    // 0x1f43e0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F43E0u;
    {
        const bool branch_taken_0x1f43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43e0) {
            ctx->pc = 0x1F43E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F43E0u;
            // 0x1f43e4: 0x96220042  lhu         $v0, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F446Cu;
            goto label_1f446c;
        }
    }
    ctx->pc = 0x1F43E8u;
    // 0x1f43e8: 0x84e20156  lh          $v0, 0x156($a3)
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 342)));
    // 0x1f43ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F43ECu;
    {
        const bool branch_taken_0x1f43ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43ECu;
        // 0x1f43f0: 0x94e40156  lhu         $a0, 0x156($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 342)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43ec) {
            ctx->pc = 0x1F4420u;
            goto label_1f4420;
        }
    }
    ctx->pc = 0x1F43F4u;
    // 0x1f43f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1f43f8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f43fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f4400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f4404: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1f4404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f4408: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f4408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f440c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f440cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f4410: 0x1012  mflo        $v0
    ctx->pc = 0x1f4410u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f4414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4418u;
    {
        const bool branch_taken_0x1f4418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4418u;
        // 0x1f441c: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4418) {
            ctx->pc = 0x1F442Cu;
            goto label_1f442c;
        }
    }
    ctx->pc = 0x1F4420u;
label_1f4420:
    // 0x1f4420: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x1f4424: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4428: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x1f4428u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_1f442c:
    // 0x1f442c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f4430: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f4430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f4434: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f4434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f4438: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4438u;
    {
        const bool branch_taken_0x1f4438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4438) {
            ctx->pc = 0x1F443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4438u;
            // 0x1f443c: 0x96220042  lhu         $v0, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F446Cu;
            goto label_1f446c;
        }
    }
    ctx->pc = 0x1F4440u;
    // 0x1f4440: 0x5500000a  bnel        $t0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F4440u;
    {
        const bool branch_taken_0x1f4440 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4440) {
            ctx->pc = 0x1F4444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4440u;
            // 0x1f4444: 0x96220042  lhu         $v0, 0x42($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F446Cu;
            goto label_1f446c;
        }
    }
    ctx->pc = 0x1F4448u;
    // 0x1f4448: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4448u;
    {
        const bool branch_taken_0x1f4448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4448) {
            ctx->pc = 0x1F4460u;
            goto label_1f4460;
        }
    }
    ctx->pc = 0x1F4450u;
    // 0x1f4450: 0xc07ec42  jal         func_1FB108
    ctx->pc = 0x1F4450u;
    SET_GPR_U32(ctx, 31, 0x1F4458u);
    ctx->pc = 0x1F4454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4450u;
    // 0x1f4454: 0x240402bc  addiu       $a0, $zero, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB108u, 0x1F4450u, 0x1F4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4458u;
label_1f4458:
    // 0x1f4458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4458u;
    {
        const bool branch_taken_0x1f4458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4458u;
        // 0x1f445c: 0x96220042  lhu         $v0, 0x42($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4458) {
            ctx->pc = 0x1F446Cu;
            goto label_1f446c;
        }
    }
    ctx->pc = 0x1F4460u;
label_1f4460:
    // 0x1f4460: 0xc07ec42  jal         func_1FB108
    ctx->pc = 0x1F4460u;
    SET_GPR_U32(ctx, 31, 0x1F4468u);
    ctx->pc = 0x1F4464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4460u;
    // 0x1f4464: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB108u, 0x1F4460u, 0x1F4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4468u;
label_1f4468:
    // 0x1f4468: 0x96220042  lhu         $v0, 0x42($s1)
    ctx->pc = 0x1f4468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1f446c:
    // 0x1f446c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4470: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f4474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4478: 0xa6220042  sh          $v0, 0x42($s1)
    ctx->pc = 0x1f4478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f447c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f447cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4480: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4480u;
        // 0x1f4484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4488u;
}
