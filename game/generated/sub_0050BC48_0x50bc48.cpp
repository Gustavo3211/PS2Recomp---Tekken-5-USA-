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

// Function: sub_0050BC48
// Address: 0x50bc48 - 0x50be48
void sub_0050BC48_0x50bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050BC48_0x50bc48");
#endif

    switch (ctx->pc) {
        case 0x50bd70u: goto label_50bd70;
        case 0x50bdfcu: goto label_50bdfc;
        default: break;
    }

    ctx->pc = 0x50bc48u;

    // 0x50bc48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50bc4c: 0x3c0c0090  lui         $t4, 0x90
    ctx->pc = 0x50bc4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)144 << 16));
    // 0x50bc50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50bc54: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x50bc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50bc58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50bc5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x50bc5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50bc60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50bc64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x50bc64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50bc68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50bc6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x50bc6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50bc70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x50bc74: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x50bc74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50bc78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50bc7c: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50bc7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x50bc80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50bc84: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x50bc84u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x50bc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50bc8c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50bc90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x50bc94: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50bc94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50bc98: 0x2489c608  addiu       $t1, $a0, -0x39F8
    ctx->pc = 0x50bc98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
    // 0x50bc9c: 0x24cac5fc  addiu       $t2, $a2, -0x3A04
    ctx->pc = 0x50bc9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952444));
    // 0x50bca0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x50bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50bca4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50bca8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x50bca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50bcac: 0xaee2c618  sw          $v0, -0x39E8($s7)
    ctx->pc = 0x50bcacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC618u, _value); } while (0);
    // 0x50bcb0: 0x2582f080  addiu       $v0, $t4, -0xF80
    ctx->pc = 0x50bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294963328));
    // 0x50bcb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50bcb8: 0x8c474df8  lw          $a3, 0x4DF8($v0)
    ctx->pc = 0x50bcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x903E78u));
    // 0x50bcbc: 0xaec3c61c  sw          $v1, -0x39E4($s6)
    ctx->pc = 0x50bcbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC61Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC61Cu, _value); } while (0);
    // 0x50bcc0: 0x8c454df4  lw          $a1, 0x4DF4($v0)
    ctx->pc = 0x50bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x903E74u));
    // 0x50bcc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50bcc8: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x50bcc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8EC5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5FCu, _value); } while (0);
    // 0x50bccc: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x50bcccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50bcd0: 0xaea2c620  sw          $v0, -0x39E0($s5)
    ctx->pc = 0x50bcd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC620u, _value); } while (0);
    // 0x50bcd4: 0x24e8c60c  addiu       $t0, $a3, -0x39F4
    ctx->pc = 0x50bcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952460));
    // 0x50bcd8: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50bcd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC608u, _value); } while (0);
    // 0x50bcdc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50bcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bce0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50bce4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50bce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50bce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50bce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50bcec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50bcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50bcf0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50bcf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50bcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50bcf8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50bcf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50bcfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50bd00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50bd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50bd04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50bd08: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50bd0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50bd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50bd10: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x50bd10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50bd14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50bd18: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50bd18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50bd1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50bd20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x50bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50bd24: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x50bd28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50bd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50bd2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50bd30: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50bd30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50bd34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50bd38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x50bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50bd3c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x50bd40: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x50bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50bd44: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50bd44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50bd48: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x50bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x50bd4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50bd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50bd50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50bd54: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50bd58: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50bd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50bd5c: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x50BD5Cu;
    {
        const bool branch_taken_0x50bd5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50BD5Cu;
        // 0x50bd60: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bd5c) {
            ctx->pc = 0x50BDC4u;
            goto label_50bdc4;
        }
    }
    ctx->pc = 0x50BD64u;
    // 0x50bd64: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x50bd64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50bd68: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x50bd68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x50bd6c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x50bd6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_50bd70:
    // 0x50bd70: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x50bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bd74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50bd78: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x50bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50bd7c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50bd7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50bd80: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x50bd80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50bd84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50bd88: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50bd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50bd90: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x50bd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50bd94: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x50bd94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x50bd98: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x50bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x50bd9c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50bda0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50bda0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50bda4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50bda8: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x50bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x50bdac: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x50bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x50bdb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50bdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50bdb4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50bdb8: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50bdb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50bdbc: 0x443ffec  bgezl       $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x50BDBCu;
    {
        const bool branch_taken_0x50bdbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50bdbc) {
            ctx->pc = 0x50BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50BDBCu;
            // 0x50bdc0: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50BD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50bd70;
        }
    }
    ctx->pc = 0x50BDC4u;
label_50bdc4:
    // 0x50bdc4: 0x24e7c60c  addiu       $a3, $a3, -0x39F4
    ctx->pc = 0x50bdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952460));
    // 0x50bdc8: 0x2586f080  addiu       $a2, $t4, -0xF80
    ctx->pc = 0x50bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294963328));
    // 0x50bdcc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x50bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50bdd0: 0x24c64e08  addiu       $a2, $a2, 0x4E08
    ctx->pc = 0x50bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19976));
    // 0x50bdd4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x50bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50bdd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50bddc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x50bddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x50bde0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50bde4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50bde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50bde8: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x50bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x50bdec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x50bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x50bdf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50bdf4: 0xc142d02  jal         func_50B408
    ctx->pc = 0x50BDF4u;
    SET_GPR_U32(ctx, 31, 0x50BDFCu);
    ctx->pc = 0x50BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50BDF4u;
    // 0x50bdf8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B408u, 0x50BDF4u, 0x50BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50BDFCu;
label_50bdfc:
    // 0x50bdfc: 0x8ee2c618  lw          $v0, -0x39E8($s7)
    ctx->pc = 0x50bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952472)));
    // 0x50be00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50be04: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x50be04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x50be08: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x50be08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50be0c: 0x8ec3c61c  lw          $v1, -0x39E4($s6)
    ctx->pc = 0x50be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952476)));
    // 0x50be10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50be10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50be14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50be14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50be18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x50be18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50be1c: 0x8ea2c620  lw          $v0, -0x39E0($s5)
    ctx->pc = 0x50be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952480)));
    // 0x50be20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50be20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50be24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50be24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50be28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50be28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50be2c: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x50be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x50be30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50be30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50be34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50be34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50be38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50be38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50be3c: 0x3e00008  jr          $ra
    ctx->pc = 0x50BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50BE3Cu;
        // 0x50be40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50BE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50BE44u;
    // 0x50be44: 0x0  nop
    ctx->pc = 0x50be44u;
    // NOP
    ctx->pc = 0x50be48u;
}
