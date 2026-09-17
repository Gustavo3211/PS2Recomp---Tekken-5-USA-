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

// Function: sub_0050D200
// Address: 0x50d200 - 0x50d448
void sub_0050D200_0x50d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D200_0x50d200");
#endif

    switch (ctx->pc) {
        case 0x50d330u: goto label_50d330;
        case 0x50d3d0u: goto label_50d3d0;
        case 0x50d3e0u: goto label_50d3e0;
        case 0x50d3f0u: goto label_50d3f0;
        case 0x50d400u: goto label_50d400;
        default: break;
    }

    ctx->pc = 0x50d200u;

    // 0x50d200: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50d200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50d204: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50d204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50d208: 0x24a5c65c  addiu       $a1, $a1, -0x39A4
    ctx->pc = 0x50d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952540));
    // 0x50d20c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x50d20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d210: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50d218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50d21c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50d220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50d220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50d224: 0x2467c674  addiu       $a3, $v1, -0x398C
    ctx->pc = 0x50d224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952564));
    // 0x50d228: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50d22c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x50d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50d230: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50d234: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x50d238: 0xac48c670  sw          $t0, -0x3990($v0)
    ctx->pc = 0x50d238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x8EC670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC670u, _value); } while (0);
    // 0x50d23c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x50d23cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC65Cu, _value); } while (0);
    // 0x50d240: 0x950300fc  lhu         $v1, 0xFC($t0)
    ctx->pc = 0x50d240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 252)));
    // 0x50d244: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50d244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC65Cu, _value); } while (0);
    // 0x50d248: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50d248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8EC65Cu));
    // 0x50d24c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50d250: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50d250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50d254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50d258: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50d258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50d25c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50d260: 0x8c633140  lw          $v1, 0x3140($v1)
    ctx->pc = 0x50d260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12608)));
    // 0x50d264: 0x1466000a  bne         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x50D264u;
    {
        const bool branch_taken_0x50d264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x50D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D264u;
        // 0x50d268: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d264) {
            ctx->pc = 0x50D290u;
            goto label_50d290;
        }
    }
    ctx->pc = 0x50D26Cu;
    // 0x50d26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50d26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50d270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50d274: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50d274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50d278: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50d278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50d27c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50d27cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50d280: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50d280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50d284: 0x8144af2  j           func_512BC8
    ctx->pc = 0x50D284u;
    ctx->pc = 0x50D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D284u;
    // 0x50d288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x50D28Cu;
    // 0x50d28c: 0x0  nop
    ctx->pc = 0x50d28cu;
    // NOP
label_50d290:
    // 0x50d290: 0x8d020104  lw          $v0, 0x104($t0)
    ctx->pc = 0x50d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x50d294: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x50D294u;
    {
        const bool branch_taken_0x50d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D294u;
        // 0x50d298: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d294) {
            ctx->pc = 0x50D2C0u;
            goto label_50d2c0;
        }
    }
    ctx->pc = 0x50D29Cu;
    // 0x50d29c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50d29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50d2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50d2a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50d2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50d2a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50d2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50d2ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50d2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50d2b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50d2b4: 0x8144af2  j           func_512BC8
    ctx->pc = 0x50D2B4u;
    ctx->pc = 0x50D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D2B4u;
    // 0x50d2b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x50D2BCu;
    // 0x50d2bc: 0x0  nop
    ctx->pc = 0x50d2bcu;
    // NOP
label_50d2c0:
    // 0x50d2c0: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x50d2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x50d2c4: 0x4410059  bgez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x50D2C4u;
    {
        const bool branch_taken_0x50d2c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x50D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D2C4u;
        // 0x50d2c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d2c4) {
            ctx->pc = 0x50D42Cu;
            goto label_50d42c;
        }
    }
    ctx->pc = 0x50D2CCu;
    // 0x50d2cc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d2d0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50d2d4: 0x2449c66c  addiu       $t1, $v0, -0x3994
    ctx->pc = 0x50d2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952556));
    // 0x50d2d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50d2dc: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x50d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC66Cu));
    // 0x50d2e0: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50d2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x50d2e4: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x50d2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x50d2e8: 0x2667c664  addiu       $a3, $s3, -0x399C
    ctx->pc = 0x50d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952548));
    // 0x50d2ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50d2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50d2f0: 0x85050100  lh          $a1, 0x100($t0)
    ctx->pc = 0x50d2f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 256)));
    // 0x50d2f4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x50d2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x50d2f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x50d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50d2fc: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x50d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x50d300: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x50d300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x50d304: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d308: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x50d308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50d30c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x50d30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x50d310: 0x4400046  bltz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x50D310u;
    {
        const bool branch_taken_0x50d310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D310u;
        // 0x50d314: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d310) {
            ctx->pc = 0x50D42Cu;
            goto label_50d42c;
        }
    }
    ctx->pc = 0x50D318u;
    // 0x50d318: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d31c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x50d31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d320: 0x2451c668  addiu       $s1, $v0, -0x3998
    ctx->pc = 0x50d320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952552));
    // 0x50d324: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50d324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50d328: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x50d328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50d32c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x50d32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_50d330:
    // 0x50d330: 0x8e62c664  lw          $v0, -0x399C($s3)
    ctx->pc = 0x50d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952548)));
    // 0x50d334: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x50d334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x50d338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50d338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x50d33c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x50D33Cu;
    {
        const bool branch_taken_0x50d33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d33c) {
            ctx->pc = 0x50D340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50D33Cu;
            // 0x50d340: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D344u;
    // 0x50d344: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x50d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50d34c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d350: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50d354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d358: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50d358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50d35c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d360: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50d360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50d368: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50d36c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d370: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50d370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50d374: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50d374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d378: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50d378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50d37c: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x50d37cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50d380: 0x10740015  beq         $v1, $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x50D380u;
    {
        const bool branch_taken_0x50d380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x50d380) {
            ctx->pc = 0x50D3D8u;
            goto label_50d3d8;
        }
    }
    ctx->pc = 0x50D388u;
    // 0x50d388: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x50d388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x50d38c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x50D38Cu;
    {
        const bool branch_taken_0x50d38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D38Cu;
        // 0x50d390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d38c) {
            ctx->pc = 0x50D3A8u;
            goto label_50d3a8;
        }
    }
    ctx->pc = 0x50D394u;
    // 0x50d394: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x50D394u;
    {
        const bool branch_taken_0x50d394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d394) {
            ctx->pc = 0x50D3C8u;
            goto label_50d3c8;
        }
    }
    ctx->pc = 0x50D39Cu;
    // 0x50d39c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x50D39Cu;
    {
        const bool branch_taken_0x50d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D39Cu;
        // 0x50d3a0: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d39c) {
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D3A4u;
    // 0x50d3a4: 0x0  nop
    ctx->pc = 0x50d3a4u;
    // NOP
label_50d3a8:
    // 0x50d3a8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x50D3A8u;
    {
        const bool branch_taken_0x50d3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50d3a8) {
            ctx->pc = 0x50D3E8u;
            goto label_50d3e8;
        }
    }
    ctx->pc = 0x50D3B0u;
    // 0x50d3b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x50d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x50d3b4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x50D3B4u;
    {
        const bool branch_taken_0x50d3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50d3b4) {
            ctx->pc = 0x50D3F8u;
            goto label_50d3f8;
        }
    }
    ctx->pc = 0x50D3BCu;
    // 0x50d3bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x50D3BCu;
    {
        const bool branch_taken_0x50d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D3BCu;
        // 0x50d3c0: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d3bc) {
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D3C4u;
    // 0x50d3c4: 0x0  nop
    ctx->pc = 0x50d3c4u;
    // NOP
label_50d3c8:
    // 0x50d3c8: 0xc14340a  jal         func_50D028
    ctx->pc = 0x50D3C8u;
    SET_GPR_U32(ctx, 31, 0x50D3D0u);
    ctx->pc = 0x50D028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D028u, 0x50D3C8u, 0x50D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D3D0u;
label_50d3d0:
    // 0x50d3d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x50D3D0u;
    {
        const bool branch_taken_0x50d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D3D0u;
        // 0x50d3d4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d3d0) {
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D3D8u;
label_50d3d8:
    // 0x50d3d8: 0xc14341e  jal         func_50D078
    ctx->pc = 0x50D3D8u;
    SET_GPR_U32(ctx, 31, 0x50D3E0u);
    ctx->pc = 0x50D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D078u, 0x50D3D8u, 0x50D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D3E0u;
label_50d3e0:
    // 0x50d3e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x50D3E0u;
    {
        const bool branch_taken_0x50d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D3E0u;
        // 0x50d3e4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d3e0) {
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D3E8u;
label_50d3e8:
    // 0x50d3e8: 0xc143448  jal         func_50D120
    ctx->pc = 0x50D3E8u;
    SET_GPR_U32(ctx, 31, 0x50D3F0u);
    ctx->pc = 0x50D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D120u, 0x50D3E8u, 0x50D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D3F0u;
label_50d3f0:
    // 0x50d3f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50D3F0u;
    {
        const bool branch_taken_0x50d3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D3F0u;
        // 0x50d3f4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d3f0) {
            ctx->pc = 0x50D404u;
            goto label_50d404;
        }
    }
    ctx->pc = 0x50D3F8u;
label_50d3f8:
    // 0x50d3f8: 0xc14346a  jal         func_50D1A8
    ctx->pc = 0x50D3F8u;
    SET_GPR_U32(ctx, 31, 0x50D400u);
    ctx->pc = 0x50D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D1A8u, 0x50D3F8u, 0x50D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D400u;
label_50d400:
    // 0x50d400: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50d400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_50d404:
    // 0x50d404: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50d408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50d40c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50d410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d414: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d418: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50d418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50d41c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50d41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50d420: 0x443ffc3  bgezl       $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x50D420u;
    {
        const bool branch_taken_0x50d420 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50d420) {
            ctx->pc = 0x50D424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50D420u;
            // 0x50d424: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50D330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d330;
        }
    }
    ctx->pc = 0x50D428u;
    // 0x50d428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50d428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50d42c:
    // 0x50d42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50d42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50d430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50d430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50d434: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50d434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50d438: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50d438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50d43c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50d43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50d440: 0x3e00008  jr          $ra
    ctx->pc = 0x50D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D440u;
        // 0x50d444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D448u;
}
