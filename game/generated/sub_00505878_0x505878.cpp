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

// Function: sub_00505878
// Address: 0x505878 - 0x505b00
void sub_00505878_0x505878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505878_0x505878");
#endif

    switch (ctx->pc) {
        case 0x5059e0u: goto label_5059e0;
        case 0x505a48u: goto label_505a48;
        case 0x505a60u: goto label_505a60;
        case 0x505a78u: goto label_505a78;
        case 0x505a90u: goto label_505a90;
        default: break;
    }

    ctx->pc = 0x505878u;

    // 0x505878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x505878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50587c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x505880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x505884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x505884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x505888: 0x2446c52c  addiu       $a2, $v0, -0x3AD4
    ctx->pc = 0x505888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952236));
    // 0x50588c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x505890: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505894: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x505894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x505898: 0x24a5c534  addiu       $a1, $a1, -0x3ACC
    ctx->pc = 0x505898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952244));
    // 0x50589c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5058a0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x5058a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x5058a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x5058a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x5058a8: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x5058a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x5058ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x5058acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x5058b0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x5058b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x5058b4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x5058b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5058b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x5058b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x5058bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x5058bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x5058c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5058c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC534u));
    // 0x5058c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x5058c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5058c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5058c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5058cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5058ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5058d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x5058d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC52Cu, _value); } while (0);
    // 0x5058d4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x5058d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x5058d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5058d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5058dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x5058dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x5058e0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x5058e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5058e4: 0x10680012  beq         $v1, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x5058E4u;
    {
        const bool branch_taken_0x5058e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x5058E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5058E4u;
        // 0x5058e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5058e4) {
            ctx->pc = 0x505930u;
            goto label_505930;
        }
    }
    ctx->pc = 0x5058ECu;
    // 0x5058ec: 0x2862002e  slti        $v0, $v1, 0x2E
    ctx->pc = 0x5058ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x5058f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5058F0u;
    {
        const bool branch_taken_0x5058f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5058F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5058F0u;
        // 0x5058f4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5058f0) {
            ctx->pc = 0x505910u;
            goto label_505910;
        }
    }
    ctx->pc = 0x5058F8u;
    // 0x5058f8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x5058f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x5058fc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x5058FCu;
    {
        const bool branch_taken_0x5058fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x505900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5058FCu;
        // 0x505900: 0x3c03008f  lui         $v1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5058fc) {
            ctx->pc = 0x505920u;
            goto label_505920;
        }
    }
    ctx->pc = 0x505904u;
    // 0x505904: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x505904u;
    {
        const bool branch_taken_0x505904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505904u;
        // 0x505908: 0x3c06008f  lui         $a2, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505904) {
            ctx->pc = 0x505950u;
            goto label_505950;
        }
    }
    ctx->pc = 0x50590Cu;
    // 0x50590c: 0x0  nop
    ctx->pc = 0x50590cu;
    // NOP
label_505910:
    // 0x505910: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x505910u;
    {
        const bool branch_taken_0x505910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x505914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505910u;
        // 0x505914: 0x3c03008f  lui         $v1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505910) {
            ctx->pc = 0x505940u;
            goto label_505940;
        }
    }
    ctx->pc = 0x505918u;
    // 0x505918: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x505918u;
    {
        const bool branch_taken_0x505918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505918u;
        // 0x50591c: 0x3c06008f  lui         $a2, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505918) {
            ctx->pc = 0x505950u;
            goto label_505950;
        }
    }
    ctx->pc = 0x505920u;
label_505920:
    // 0x505920: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x505924u;
    {
        const bool branch_taken_0x505924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505924u;
        // 0x505928: 0x8452f0a4  lh          $s2, -0xF5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505924) {
            ctx->pc = 0x505948u;
            goto label_505948;
        }
    }
    ctx->pc = 0x50592Cu;
    // 0x50592c: 0x0  nop
    ctx->pc = 0x50592cu;
    // NOP
label_505930:
    // 0x505930: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x505934u;
    {
        const bool branch_taken_0x505934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505934u;
        // 0x505938: 0x8452f0a6  lh          $s2, -0xF5A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963366)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505934) {
            ctx->pc = 0x505948u;
            goto label_505948;
        }
    }
    ctx->pc = 0x50593Cu;
    // 0x50593c: 0x0  nop
    ctx->pc = 0x50593cu;
    // NOP
label_505940:
    // 0x505940: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505944: 0x8452f0a8  lh          $s2, -0xF58($v0)
    ctx->pc = 0x505944u;
    SET_GPR_S32(ctx, 18, (int16_t)FAST_READ16(0x8FF0A8u));
label_505948:
    // 0x505948: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50594c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50594cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
label_505950:
    // 0x505950: 0x2469c52c  addiu       $t1, $v1, -0x3AD4
    ctx->pc = 0x505950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952236));
    // 0x505954: 0x24c6c53c  addiu       $a2, $a2, -0x3AC4
    ctx->pc = 0x505954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952252));
    // 0x505958: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x505958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50595c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50595cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505960: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x505960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x505964: 0x24a7c550  addiu       $a3, $a1, -0x3AB0
    ctx->pc = 0x505964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    // 0x505968: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x505968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50596c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x505970: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x505970u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC550u));
    // 0x505974: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x505974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x505978: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x505978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50597c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505980: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x505980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505984: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x505984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x505988: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x505988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50598c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50598cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505990: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x505990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x505994: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x505994u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x505998: 0x111c80  sll         $v1, $s1, 18
    ctx->pc = 0x505998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 18));
    // 0x50599c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50599cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x5059a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5059a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5059a4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x5059a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x5059a8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x5059a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x5059ac: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5059acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5059b0: 0x84d10000  lh          $s1, 0x0($a2)
    ctx->pc = 0x5059b0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5059b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5059b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5059b8: 0x1a20003c  blez        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x5059B8u;
    {
        const bool branch_taken_0x5059b8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x5059BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5059B8u;
        // 0x5059bc: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5059b8) {
            ctx->pc = 0x505AACu;
            goto label_505aac;
        }
    }
    ctx->pc = 0x5059C0u;
    // 0x5059c0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5059c4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x5059c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5059c8: 0x2454c54c  addiu       $s4, $v0, -0x3AB4
    ctx->pc = 0x5059c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952268));
    // 0x5059cc: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x5059ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x5059d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x5059d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5059d4: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x5059d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5059d8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x5059d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5059dc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x5059dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_5059e0:
    // 0x5059e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x5059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5059e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x5059e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5059e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5059ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5059ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5059f0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x5059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x5059f4: 0x9e2025  or          $a0, $a0, $fp
    ctx->pc = 0x5059f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
    // 0x5059f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5059f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5059fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x5059fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x505a00: 0x10900015  beq         $a0, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x505A00u;
    {
        const bool branch_taken_0x505a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x505A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A00u;
        // 0x505a04: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a00) {
            ctx->pc = 0x505A58u;
            goto label_505a58;
        }
    }
    ctx->pc = 0x505A08u;
    // 0x505a08: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x505a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x505a0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x505A0Cu;
    {
        const bool branch_taken_0x505a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x505a0c) {
            ctx->pc = 0x505A28u;
            goto label_505a28;
        }
    }
    ctx->pc = 0x505A14u;
    // 0x505a14: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x505A14u;
    {
        const bool branch_taken_0x505a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A14u;
        // 0x505a18: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a14) {
            ctx->pc = 0x505A40u;
            goto label_505a40;
        }
    }
    ctx->pc = 0x505A1Cu;
    // 0x505a1c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x505A1Cu;
    {
        const bool branch_taken_0x505a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A1Cu;
        // 0x505a20: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a1c) {
            ctx->pc = 0x505A9Cu;
            goto label_505a9c;
        }
    }
    ctx->pc = 0x505A24u;
    // 0x505a24: 0x0  nop
    ctx->pc = 0x505a24u;
    // NOP
label_505a28:
    // 0x505a28: 0x10970011  beq         $a0, $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x505A28u;
    {
        const bool branch_taken_0x505a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        if (branch_taken_0x505a28) {
            ctx->pc = 0x505A70u;
            goto label_505a70;
        }
    }
    ctx->pc = 0x505A30u;
    // 0x505a30: 0x10960015  beq         $a0, $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x505A30u;
    {
        const bool branch_taken_0x505a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x505A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A30u;
        // 0x505a34: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a30) {
            ctx->pc = 0x505A88u;
            goto label_505a88;
        }
    }
    ctx->pc = 0x505A38u;
    // 0x505a38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x505A38u;
    {
        const bool branch_taken_0x505a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A38u;
        // 0x505a3c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a38) {
            ctx->pc = 0x505A9Cu;
            goto label_505a9c;
        }
    }
    ctx->pc = 0x505A40u;
label_505a40:
    // 0x505a40: 0xc1415e2  jal         func_505788
    ctx->pc = 0x505A40u;
    SET_GPR_U32(ctx, 31, 0x505A48u);
    ctx->pc = 0x505A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505A40u;
    // 0x505a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505788u, 0x505A40u, 0x505A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505A48u;
label_505a48:
    // 0x505a48: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x505A48u;
    {
        const bool branch_taken_0x505a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x505A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A48u;
        // 0x505a4c: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a48) {
            ctx->pc = 0x505A98u;
            goto label_505a98;
        }
    }
    ctx->pc = 0x505A50u;
    // 0x505a50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x505A50u;
    {
        const bool branch_taken_0x505a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A50u;
        // 0x505a54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a50) {
            ctx->pc = 0x505AD0u;
            goto label_505ad0;
        }
    }
    ctx->pc = 0x505A58u;
label_505a58:
    // 0x505a58: 0xc1415f0  jal         func_5057C0
    ctx->pc = 0x505A58u;
    SET_GPR_U32(ctx, 31, 0x505A60u);
    ctx->pc = 0x505A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505A58u;
    // 0x505a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5057C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5057C0u, 0x505A58u, 0x505A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505A60u;
label_505a60:
    // 0x505a60: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x505A60u;
    {
        const bool branch_taken_0x505a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x505A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A60u;
        // 0x505a64: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a60) {
            ctx->pc = 0x505A98u;
            goto label_505a98;
        }
    }
    ctx->pc = 0x505A68u;
    // 0x505a68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x505A68u;
    {
        const bool branch_taken_0x505a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A68u;
        // 0x505a6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a68) {
            ctx->pc = 0x505AD0u;
            goto label_505ad0;
        }
    }
    ctx->pc = 0x505A70u;
label_505a70:
    // 0x505a70: 0xc1415fe  jal         func_5057F8
    ctx->pc = 0x505A70u;
    SET_GPR_U32(ctx, 31, 0x505A78u);
    ctx->pc = 0x505A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505A70u;
    // 0x505a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5057F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5057F8u, 0x505A70u, 0x505A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505A78u;
label_505a78:
    // 0x505a78: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x505A78u;
    {
        const bool branch_taken_0x505a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x505A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A78u;
        // 0x505a7c: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a78) {
            ctx->pc = 0x505A98u;
            goto label_505a98;
        }
    }
    ctx->pc = 0x505A80u;
    // 0x505a80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x505A80u;
    {
        const bool branch_taken_0x505a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A80u;
        // 0x505a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a80) {
            ctx->pc = 0x505AD0u;
            goto label_505ad0;
        }
    }
    ctx->pc = 0x505A88u;
label_505a88:
    // 0x505a88: 0xc14160e  jal         func_505838
    ctx->pc = 0x505A88u;
    SET_GPR_U32(ctx, 31, 0x505A90u);
    ctx->pc = 0x505A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505A88u;
    // 0x505a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505838u, 0x505A88u, 0x505A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505A90u;
label_505a90:
    // 0x505a90: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x505A90u;
    {
        const bool branch_taken_0x505a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x505A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505A90u;
        // 0x505a94: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505a90) {
            ctx->pc = 0x505ACCu;
            goto label_505acc;
        }
    }
    ctx->pc = 0x505A98u;
label_505a98:
    // 0x505a98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x505a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_505a9c:
    // 0x505a9c: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x505a9cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x505aa0: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x505aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x505aa4: 0x5460ffce  bnel        $v1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x505AA4u;
    {
        const bool branch_taken_0x505aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x505aa4) {
            ctx->pc = 0x505AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505AA4u;
            // 0x505aa8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5059E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5059e0;
        }
    }
    ctx->pc = 0x505AACu;
label_505aac:
    // 0x505aac: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505ab0: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505ab4: 0x2462c550  addiu       $v0, $v1, -0x3AB0
    ctx->pc = 0x505ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x505ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x505ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC550u));
    // 0x505abc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x505abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x505ac0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x505ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x505ac4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x505ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC550u, _value); } while (0);
    // 0x505ac8: 0xaca4c52c  sw          $a0, -0x3AD4($a1)
    ctx->pc = 0x505ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC52Cu, _value); } while (0);
label_505acc:
    // 0x505acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_505ad0:
    // 0x505ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x505ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x505ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x505ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x505ad8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x505ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x505adc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x505adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x505ae0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x505ae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x505ae4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x505ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x505ae8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x505ae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x505aec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x505aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x505af0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x505af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x505af4: 0x3e00008  jr          $ra
    ctx->pc = 0x505AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505AF4u;
        // 0x505af8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505AFCu;
    // 0x505afc: 0x0  nop
    ctx->pc = 0x505afcu;
    // NOP
    ctx->pc = 0x505b00u;
}
