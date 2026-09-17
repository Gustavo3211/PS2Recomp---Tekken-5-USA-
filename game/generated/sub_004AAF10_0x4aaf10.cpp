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

// Function: sub_004AAF10
// Address: 0x4aaf10 - 0x4ab130
void sub_004AAF10_0x4aaf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAF10_0x4aaf10");
#endif

    switch (ctx->pc) {
        case 0x4aafb8u: goto label_4aafb8;
        case 0x4ab058u: goto label_4ab058;
        case 0x4ab078u: goto label_4ab078;
        case 0x4ab0a4u: goto label_4ab0a4;
        default: break;
    }

    ctx->pc = 0x4aaf10u;

    // 0x4aaf10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aaf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aaf14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aaf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aaf18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aaf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aaf1c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4aaf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4aaf20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aaf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aaf24: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4aaf24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4aaf28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aaf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aaf2c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4aaf2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4aaf30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4aaf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4aaf34: 0x26540c88  addiu       $s4, $s2, 0xC88
    ctx->pc = 0x4aaf34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3208));
    // 0x4aaf38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4aaf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4aaf3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4aaf3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaf40: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4aaf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4aaf44: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4aaf44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaf48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4aaf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4aaf4c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4aaf4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaf50: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4aaf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4aaf54: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4aaf54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4aaf58: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4aaf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4aaf5c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4aaf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4aaf60: 0xae620c90  sw          $v0, 0xC90($s3)
    ctx->pc = 0x4aaf60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0C90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C90u, _value); } while (0);
    // 0x4aaf64: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aaf68: 0x24500c98  addiu       $s0, $v0, 0xC98
    ctx->pc = 0x4aaf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3224));
    // 0x4aaf6c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4aaf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aaf70: 0xafc20c94  sw          $v0, 0xC94($fp)
    ctx->pc = 0x4aaf70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0C94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C94u, _value); } while (0);
    // 0x4aaf74: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4aaf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4aaf78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4aaf78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C98u, _value); } while (0);
    // 0x4aaf7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aaf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aaf80: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4aaf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C98u));
    // 0x4aaf84: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4aaf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4aaf88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4aaf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4aaf8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aaf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aaf90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4aaf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4aaf94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aaf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aaf98: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4aaf98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aaf9c: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x4aaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x4aafa0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4aafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4aafa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aafa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aafa8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4aafa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4aafac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4aafb0: 0xc12a6c8  jal         func_4A9B20
    ctx->pc = 0x4AAFB0u;
    SET_GPR_U32(ctx, 31, 0x4AAFB8u);
    ctx->pc = 0x4AAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAFB0u;
    // 0x4aafb4: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B20u, 0x4AAFB0u, 0x4AAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAFB8u;
label_4aafb8:
    // 0x4aafb8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4aafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4aafbc: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4aafbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aafc0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4aafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4aafc4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4aafc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aafc8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4aafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4aafcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4aafd0: 0x2ca30031  sltiu       $v1, $a1, 0x31
    ctx->pc = 0x4aafd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x4aafd4: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4aafd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4aafd8: 0xacc20ca0  sw          $v0, 0xCA0($a2)
    ctx->pc = 0x4aafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3232), GPR_U32(ctx, 2));
    // 0x4aafdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AAFDCu;
    {
        const bool branch_taken_0x4aafdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAFDCu;
        // 0x4aafe0: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aafdc) {
            ctx->pc = 0x4AAFF0u;
            goto label_4aaff0;
        }
    }
    ctx->pc = 0x4AAFE4u;
    // 0x4aafe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AAFE4u;
    {
        const bool branch_taken_0x4aafe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAFE4u;
        // 0x4aafe8: 0x34820006  ori         $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aafe4) {
            ctx->pc = 0x4AB000u;
            goto label_4ab000;
        }
    }
    ctx->pc = 0x4AAFECu;
    // 0x4aafec: 0x0  nop
    ctx->pc = 0x4aafecu;
    // NOP
label_4aaff0:
    // 0x4aaff0: 0x2ca204b7  sltiu       $v0, $a1, 0x4B7
    ctx->pc = 0x4aaff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1207) ? 1 : 0);
    // 0x4aaff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AAFF4u;
    {
        const bool branch_taken_0x4aaff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAFF4u;
        // 0x4aaff8: 0x8cc20ca0  lw          $v0, 0xCA0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaff4) {
            ctx->pc = 0x4AB008u;
            goto label_4ab008;
        }
    }
    ctx->pc = 0x4AAFFCu;
    // 0x4aaffc: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x4aaffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_4ab000:
    // 0x4ab000: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4ab000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4ab004: 0x8cc20ca0  lw          $v0, 0xCA0($a2)
    ctx->pc = 0x4ab004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3232)));
label_4ab008:
    // 0x4ab008: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ab008u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ab00c: 0x26310c8c  addiu       $s1, $s1, 0xC8C
    ctx->pc = 0x4ab00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3212));
    // 0x4ab010: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4ab010u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab014: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4ab014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ab018: 0x26520c88  addiu       $s2, $s2, 0xC88
    ctx->pc = 0x4ab018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3208));
    // 0x4ab01c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4ab01cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C8Cu));
    // 0x4ab020: 0x26730c90  addiu       $s3, $s3, 0xC90
    ctx->pc = 0x4ab020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
    // 0x4ab024: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4ab024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4ab028: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ab028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab02c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab030: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4ab030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab034: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ab034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ab038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ab038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab03c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ab03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ab040: 0x27d00c94  addiu       $s0, $fp, 0xC94
    ctx->pc = 0x4ab040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 3220));
    // 0x4ab044: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ab044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ab048: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4ab048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ab04c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x4ab04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x4ab050: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB050u;
    SET_GPR_U32(ctx, 31, 0x4AB058u);
    ctx->pc = 0x4AB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB050u;
    // 0x4ab054: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB050u, 0x4AB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB058u;
label_4ab058:
    // 0x4ab058: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4ab058u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ab05c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ab05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ab060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab064: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ab064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab068: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4ab068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ab06c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ab06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ab070: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB070u;
    SET_GPR_U32(ctx, 31, 0x4AB078u);
    ctx->pc = 0x4AB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB070u;
    // 0x4ab074: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB070u, 0x4AB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB078u;
label_4ab078:
    // 0x4ab078: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ab078u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab07c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ab080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab084: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4ab084u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab088: 0x51380  sll         $v0, $a1, 14
    ctx->pc = 0x4ab088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x4ab08c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4ab08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4ab090: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4ab090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ab094: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ab094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ab098: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ab098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ab09c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB09Cu;
    SET_GPR_U32(ctx, 31, 0x4AB0A4u);
    ctx->pc = 0x4AB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB09Cu;
    // 0x4ab0a0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB09Cu, 0x4AB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB0A4u;
label_4ab0a4:
    // 0x4ab0a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab0a8: 0x24460c98  addiu       $a2, $v0, 0xC98
    ctx->pc = 0x4ab0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3224));
    // 0x4ab0ac: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4ab0acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ab0b0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ab0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab0b4: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4ab0b4u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x7F0C98u));
    // 0x4ab0b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ab0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab0bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4ab0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4ab0c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ab0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C98u));
    // 0x4ab0c4: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x4ab0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x4ab0c8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4ab0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab0cc: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4ab0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4ab0d0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4ab0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4ab0d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ab0d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab0d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ab0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ab0dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab0e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ab0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ab0e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ab0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ab0e8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ab0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ab0ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ab0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ab0f0: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4ab0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4ab0f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ab0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ab0f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ab0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab0fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ab0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab100: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4ab100u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4ab104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ab104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab108: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ab108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab10c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ab10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ab110: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ab110u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ab114: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ab114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ab118: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ab118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab11c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ab11cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ab120: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ab120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ab124: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ab124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ab128: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB128u;
        // 0x4ab12c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB130u;
}
