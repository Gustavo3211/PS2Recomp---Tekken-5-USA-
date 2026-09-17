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

// Function: sub_004FC000
// Address: 0x4fc000 - 0x4fc360
void sub_004FC000_0x4fc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC000_0x4fc000");
#endif

    switch (ctx->pc) {
        case 0x4fc0dcu: goto label_4fc0dc;
        case 0x4fc0ecu: goto label_4fc0ec;
        default: break;
    }

    ctx->pc = 0x4fc000u;

    // 0x4fc000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4fc000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4fc004: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4fc004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc008: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4fc008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4fc00c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4fc010: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4fc010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4fc014: 0x8c675b00  lw          $a3, 0x5B00($v1)
    ctx->pc = 0x4fc014u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x515B00u));
    // 0x4fc018: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x4fc018u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4fc01c: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x4fc01cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x4fc020: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4fc020u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc024: 0x248afe8a  addiu       $t2, $a0, -0x176
    ctx->pc = 0x4fc024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966922));
    // 0x4fc028: 0x95090008  lhu         $t1, 0x8($t0)
    ctx->pc = 0x4fc028u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4fc02c: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x4fc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x4fc030: 0x9503000a  lhu         $v1, 0xA($t0)
    ctx->pc = 0x4fc030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x4fc034: 0x95040002  lhu         $a0, 0x2($t0)
    ctx->pc = 0x4fc034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x4fc038: 0x9505000c  lhu         $a1, 0xC($t0)
    ctx->pc = 0x4fc038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4fc03c: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x4fc03cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4fc040: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x4fc040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc044: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x4fc044u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fc048: 0xa7a40002  sh          $a0, 0x2($sp)
    ctx->pc = 0x4fc048u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fc04c: 0xa7a50004  sh          $a1, 0x4($sp)
    ctx->pc = 0x4fc04cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x4fc050: 0xa7aa0006  sh          $t2, 0x6($sp)
    ctx->pc = 0x4fc050u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x4fc054: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4FC054u;
    {
        const bool branch_taken_0x4fc054 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC054u;
        // 0x4fc058: 0xa7a9000a  sh          $t1, 0xA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc054) {
            ctx->pc = 0x4FC0B8u;
            goto label_4fc0b8;
        }
    }
    ctx->pc = 0x4FC05Cu;
    // 0x4fc05c: 0x31237fff  andi        $v1, $t1, 0x7FFF
    ctx->pc = 0x4fc05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32767);
    // 0x4fc060: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x4fc060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4fc064: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4fc064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fc068: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fc068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4fc06c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4fc06cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4fc070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fc070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc078: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x4fc078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x4fc07c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4fc07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4fc080: 0x31248000  andi        $a0, $t1, 0x8000
    ctx->pc = 0x4fc080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x4fc084: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4fc084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4fc088: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4fc088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4fc08c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fc08cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4fc090: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4fc090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4fc094: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fc094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4fc098: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4fc098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4fc09c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4fc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4fc0a0: 0xa7a30006  sh          $v1, 0x6($sp)
    ctx->pc = 0x4fc0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fc0a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC0A4u;
    {
        const bool branch_taken_0x4fc0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC0A4u;
        // 0x4fc0a8: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc0a4) {
            ctx->pc = 0x4FC0B4u;
            goto label_4fc0b4;
        }
    }
    ctx->pc = 0x4FC0ACu;
    // 0x4fc0ac: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x4fc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4fc0b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fc0b4:
    // 0x4fc0b4: 0xa7a3000a  sh          $v1, 0xA($sp)
    ctx->pc = 0x4fc0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 3));
label_4fc0b8:
    // 0x4fc0b8: 0x9502000e  lhu         $v0, 0xE($t0)
    ctx->pc = 0x4fc0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x4fc0bc: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x4fc0bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x4fc0c0: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x4FC0C0u;
    {
        const bool branch_taken_0x4fc0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC0C0u;
        // 0x4fc0c4: 0xa7a2000e  sh          $v0, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc0c0) {
            ctx->pc = 0x4FC34Cu;
            goto label_4fc34c;
        }
    }
    ctx->pc = 0x4FC0C8u;
    // 0x4fc0c8: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x4fc0c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4fc0cc: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x4FC0CCu;
    {
        const bool branch_taken_0x4fc0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC0CCu;
        // 0x4fc0d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc0cc) {
            ctx->pc = 0x4FC350u;
            goto label_4fc350;
        }
    }
    ctx->pc = 0x4FC0D4u;
    // 0x4fc0d4: 0xc13e73e  jal         func_4F9CF8
    ctx->pc = 0x4FC0D4u;
    SET_GPR_U32(ctx, 31, 0x4FC0DCu);
    ctx->pc = 0x4F9CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CF8u, 0x4FC0D4u, 0x4FC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC0DCu;
label_4fc0dc:
    // 0x4fc0dc: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4fc0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fc0e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4fc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4fc0e4: 0xc13e732  jal         func_4F9CC8
    ctx->pc = 0x4FC0E4u;
    SET_GPR_U32(ctx, 31, 0x4FC0ECu);
    ctx->pc = 0x4FC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC0E4u;
    // 0x4fc0e8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9CC8u, 0x4FC0E4u, 0x4FC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC0ECu;
label_4fc0ec:
    // 0x4fc0ec: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x4fc0ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4fc0f0: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x4fc0f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x4fc0f4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4fc0f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fc0f8: 0x30a40100  andi        $a0, $a1, 0x100
    ctx->pc = 0x4fc0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x4fc0fc: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x4fc0fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4fc100: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x4fc100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x4fc104: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4fc104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4fc108: 0x30e60100  andi        $a2, $a3, 0x100
    ctx->pc = 0x4fc108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x4fc10c: 0x92823  negu        $a1, $t1
    ctx->pc = 0x4fc10cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x4fc110: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x4fc110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc114: 0xa4480b  movn        $t1, $a1, $a0
    ctx->pc = 0x4fc114u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
    // 0x4fc118: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FC118u;
    {
        const bool branch_taken_0x4fc118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC118u;
        // 0x4fc11c: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc118) {
            ctx->pc = 0x4FC12Cu;
            goto label_4fc12c;
        }
    }
    ctx->pc = 0x4FC120u;
    // 0x4fc120: 0x71023  negu        $v0, $a3
    ctx->pc = 0x4fc120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4fc124: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4fc124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4fc128: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x4fc128u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
label_4fc12c:
    // 0x4fc12c: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x4fc12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4fc130: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x4fc130u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
    // 0x4fc134: 0x2548ce98  addiu       $t0, $t2, -0x3168
    ctx->pc = 0x4fc134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
    // 0x4fc138: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4fc138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fc13c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4fc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CE98u));
    // 0x4fc140: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x4fc140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x4fc144: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x4fc144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fc148: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4fc148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fc14c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4fc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc150: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4fc150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4fc154: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x4fc154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x4fc158: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4fc158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc15c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x4fc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4fc160: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4fc160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc164: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FC164u;
    {
        const bool branch_taken_0x4fc164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc164) {
            ctx->pc = 0x4FC168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FC164u;
            // 0x4fc168: 0x24c30009  addiu       $v1, $a2, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC17Cu;
            goto label_4fc17c;
        }
    }
    ctx->pc = 0x4FC16Cu;
    // 0x4fc16c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4fc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fc170: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4fc170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fc174: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4fc174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc178: 0x24c30009  addiu       $v1, $a2, 0x9
    ctx->pc = 0x4fc178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
label_4fc17c:
    // 0x4fc17c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4fc17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc180: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FC180u;
    {
        const bool branch_taken_0x4fc180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc180) {
            ctx->pc = 0x4FC184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FC180u;
            // 0x4fc184: 0x97a3000a  lhu         $v1, 0xA($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC198u;
            goto label_4fc198;
        }
    }
    ctx->pc = 0x4FC188u;
    // 0x4fc188: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4fc188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4fc18c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4fc18cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fc190: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4fc190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc194: 0x97a3000a  lhu         $v1, 0xA($sp)
    ctx->pc = 0x4fc194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
label_4fc198:
    // 0x4fc198: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x4fc198u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4fc19c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x4fc19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4fc1a0: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x4fc1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4fc1a4: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x4fc1a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4fc1a8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x4fc1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x4fc1ac: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x4fc1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x4fc1b0: 0x87a40006  lh          $a0, 0x6($sp)
    ctx->pc = 0x4fc1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x4fc1b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fc1b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4fc1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4fc1bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4fc1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4fc1c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4fc1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4fc1c4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4fc1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4fc1c8: 0x90c20009  lbu         $v0, 0x9($a2)
    ctx->pc = 0x4fc1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x4fc1cc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x4fc1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4fc1d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4fc1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4fc1d4: 0x97a3000c  lhu         $v1, 0xC($sp)
    ctx->pc = 0x4fc1d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4fc1d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fc1dc: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x4fc1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4fc1e0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x4fc1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x4fc1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fc1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc1ec: 0x0  nop
    ctx->pc = 0x4fc1ecu;
    // NOP
    // 0x4fc1f0: 0x0  nop
    ctx->pc = 0x4fc1f0u;
    // NOP
    // 0x4fc1f4: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x4fc1f4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x4fc1f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4fc1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fc1fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fc1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4fc200: 0x0  nop
    ctx->pc = 0x4fc200u;
    // NOP
    // 0x4fc204: 0x0  nop
    ctx->pc = 0x4fc204u;
    // NOP
    // 0x4fc208: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4fc208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x4fc20c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x4fc20cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4fc210: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x4fc210u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4fc214: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4fc214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4fc218: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fc218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4fc21c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4fc21cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4fc220: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x4fc220u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc224: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x4fc224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fc228: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4fc228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fc22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fc230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4fc234: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4fc234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4fc238: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fc238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4fc23c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4fc23cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4fc240: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4fc240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc244: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4fc244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc248: 0x97a2000a  lhu         $v0, 0xA($sp)
    ctx->pc = 0x4fc248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x4fc24c: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x4fc24cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc250: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x4fc250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4fc254: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4fc254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc258: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x4fc258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc25c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4fc25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc260: 0x97a2000e  lhu         $v0, 0xE($sp)
    ctx->pc = 0x4fc260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x4fc264: 0xa4620016  sh          $v0, 0x16($v1)
    ctx->pc = 0x4fc264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc268: 0x87a3000a  lh          $v1, 0xA($sp)
    ctx->pc = 0x4fc268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x4fc26c: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4FC26Cu;
    {
        const bool branch_taken_0x4fc26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4FC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC26Cu;
        // 0x4fc270: 0x2546ce98  addiu       $a2, $t2, -0x3168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc26c) {
            ctx->pc = 0x4FC2A4u;
            goto label_4fc2a4;
        }
    }
    ctx->pc = 0x4FC274u;
    // 0x4fc274: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x4fc274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4fc278: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4FC278u;
    {
        const bool branch_taken_0x4fc278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4FC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC278u;
        // 0x4fc27c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc278) {
            ctx->pc = 0x4FC2A8u;
            goto label_4fc2a8;
        }
    }
    ctx->pc = 0x4FC280u;
    // 0x4fc280: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4fc280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc284: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x4fc284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4fc288: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fc288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fc28c: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x4fc28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc290: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4fc290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fc294: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x4fc294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x4fc298: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fc29c: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x4fc29cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc2a0: 0x2546ce98  addiu       $a2, $t2, -0x3168
    ctx->pc = 0x4fc2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
label_4fc2a4:
    // 0x4fc2a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4fc2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fc2a8:
    // 0x4fc2a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4fc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc2ac: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x4fc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x4fc2b0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4fc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc2b4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x4fc2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x4fc2b8: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x4fc2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x4fc2bc: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x4fc2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x4fc2c0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4fc2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fc2c4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4fc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc2c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fc2cc: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4fc2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fc2d0: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x4fc2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4fc2d4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4fc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x4fc2d8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x4fc2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4fc2dc: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4FC2DCu;
    {
        const bool branch_taken_0x4fc2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4FC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC2DCu;
        // 0x4fc2e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc2dc) {
            ctx->pc = 0x4FC318u;
            goto label_4fc318;
        }
    }
    ctx->pc = 0x4FC2E4u;
    // 0x4fc2e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FC2E4u;
    {
        const bool branch_taken_0x4fc2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC2E4u;
        // 0x4fc2e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc2e4) {
            ctx->pc = 0x4FC300u;
            goto label_4fc300;
        }
    }
    ctx->pc = 0x4FC2ECu;
    // 0x4fc2ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4FC2ECu;
    {
        const bool branch_taken_0x4fc2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC2ECu;
        // 0x4fc2f0: 0x2543ce98  addiu       $v1, $t2, -0x3168 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc2ec) {
            ctx->pc = 0x4FC328u;
            goto label_4fc328;
        }
    }
    ctx->pc = 0x4FC2F4u;
    // 0x4fc2f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4FC2F4u;
    {
        const bool branch_taken_0x4fc2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC2F4u;
        // 0x4fc2f8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc2f4) {
            ctx->pc = 0x4FC344u;
            goto label_4fc344;
        }
    }
    ctx->pc = 0x4FC2FCu;
    // 0x4fc2fc: 0x0  nop
    ctx->pc = 0x4fc2fcu;
    // NOP
label_4fc300:
    // 0x4fc300: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4FC300u;
    {
        const bool branch_taken_0x4fc300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fc300) {
            ctx->pc = 0x4FC304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FC300u;
            // 0x4fc304: 0x2543ce98  addiu       $v1, $t2, -0x3168 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC340u;
            goto label_4fc340;
        }
    }
    ctx->pc = 0x4FC308u;
    // 0x4fc308: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4fc308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc30c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4FC30Cu;
    {
        const bool branch_taken_0x4fc30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC30Cu;
        // 0x4fc310: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc30c) {
            ctx->pc = 0x4FC338u;
            goto label_4fc338;
        }
    }
    ctx->pc = 0x4FC314u;
    // 0x4fc314: 0x0  nop
    ctx->pc = 0x4fc314u;
    // NOP
label_4fc318:
    // 0x4fc318: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4fc318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc31c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4FC31Cu;
    {
        const bool branch_taken_0x4fc31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC31Cu;
        // 0x4fc320: 0xa0400014  sb          $zero, 0x14($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc31c) {
            ctx->pc = 0x4FC33Cu;
            goto label_4fc33c;
        }
    }
    ctx->pc = 0x4FC324u;
    // 0x4fc324: 0x0  nop
    ctx->pc = 0x4fc324u;
    // NOP
label_4fc328:
    // 0x4fc328: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x4fc328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4fc32c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4fc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fc330: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4fc330u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4fc334: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4fc334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4fc338:
    // 0x4fc338: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x4fc338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
label_4fc33c:
    // 0x4fc33c: 0x2543ce98  addiu       $v1, $t2, -0x3168
    ctx->pc = 0x4fc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954648));
label_4fc340:
    // 0x4fc340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fc344:
    // 0x4fc344: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x4fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x4fc348: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4fc348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4fc34c:
    // 0x4fc34c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4fc34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4fc350:
    // 0x4fc350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4fc350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fc354: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC354u;
        // 0x4fc358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC35Cu;
    // 0x4fc35c: 0x0  nop
    ctx->pc = 0x4fc35cu;
    // NOP
    ctx->pc = 0x4fc360u;
}
