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

// Function: sub_00500200
// Address: 0x500200 - 0x500430
void sub_00500200_0x500200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500200_0x500200");
#endif

    switch (ctx->pc) {
        case 0x500244u: goto label_500244;
        case 0x500354u: goto label_500354;
        case 0x50036cu: goto label_50036c;
        case 0x500384u: goto label_500384;
        case 0x5003d4u: goto label_5003d4;
        case 0x5003d8u: goto label_5003d8;
        case 0x50040cu: goto label_50040c;
        case 0x500410u: goto label_500410;
        default: break;
    }

    ctx->pc = 0x500200u;

label_500200:
    // 0x500200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x500200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x500204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x500204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500208: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x500208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x50020c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x50020cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500210: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x500210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x500214: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x500214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x500218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x50021c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x50021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x500220: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x500220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500224: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x500224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500228: 0x84490004  lh          $t1, 0x4($v0)
    ctx->pc = 0x500228u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x50022c: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x50022cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x500230: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x500230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x500234: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x500234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x500238: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x500238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x50023c: 0xc140062  jal         func_500188
    ctx->pc = 0x50023Cu;
    SET_GPR_U32(ctx, 31, 0x500244u);
    ctx->pc = 0x500240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50023Cu;
    // 0x500240: 0xafa90018  sw          $t1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500188u, 0x50023Cu, 0x500244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500244u;
label_500244:
    // 0x500244: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x500244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x500248: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x500248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50024c: 0x24c6a668  addiu       $a2, $a2, -0x5998
    ctx->pc = 0x50024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944360));
    // 0x500250: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x500250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500254: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x500254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EA668u));
    // 0x500258: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x500258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50025c: 0x9465a66c  lhu         $a1, -0x5994($v1)
    ctx->pc = 0x50025cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x8EA66Cu));
    // 0x500260: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x500260u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x500264: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x500264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x500268: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x500268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50026c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x50026cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x500270: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x500270u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x500274: 0x244c0003  addiu       $t4, $v0, 0x3
    ctx->pc = 0x500274u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x500278: 0x284b0000  slti        $t3, $v0, 0x0
    ctx->pc = 0x500278u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x50027c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x50027cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500280: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x500280u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x500284: 0x2012  mflo        $a0
    ctx->pc = 0x500284u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x500288: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x500288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x50028c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x50028cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x500290: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x500290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x500294: 0x9524a670  lhu         $a0, -0x5990($t1)
    ctx->pc = 0x500294u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294944368)));
    // 0x500298: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x500298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x50029c: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x50029cu;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x5002a0: 0x70001812  mflo1       $v1
    ctx->pc = 0x5002a0u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x5002a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5002a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5002a8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x5002a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x5002ac: 0x84e3a6a4  lh          $v1, -0x595C($a3)
    ctx->pc = 0x5002acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294944420)));
    // 0x5002b0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x5002b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5002b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x5002b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x5002b8: 0x8d44a6a8  lw          $a0, -0x5958($t2)
    ctx->pc = 0x5002b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944424)));
    // 0x5002bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x5002bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x5002c0: 0x18b100b  movn        $v0, $t4, $t3
    ctx->pc = 0x5002c0u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x5002c4: 0x1812  mflo        $v1
    ctx->pc = 0x5002c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x5002c8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x5002c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x5002cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5002ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5002d0: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x5002d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x5002d4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x5002D4u;
    {
        const bool branch_taken_0x5002d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x5002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5002D4u;
        // 0x5002d8: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5002d4) {
            ctx->pc = 0x5002ECu;
            goto label_5002ec;
        }
    }
    ctx->pc = 0x5002DCu;
    // 0x5002dc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x5002dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5002e0: 0x29a31001  slti        $v1, $t5, 0x1001
    ctx->pc = 0x5002e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x5002e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x5002E4u;
    {
        const bool branch_taken_0x5002e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5002e4) {
            ctx->pc = 0x5002E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5002E4u;
            // 0x5002e8: 0x240d1000  addiu       $t5, $zero, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5002ECu;
            goto label_5002ec;
        }
    }
    ctx->pc = 0x5002ECu;
label_5002ec:
    // 0x5002ec: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x5002ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
    // 0x5002f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x5002f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5002f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x5002f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5002f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5002f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5002fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5002FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5002FCu;
        // 0x500300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5002FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500304u;
    // 0x500304: 0x0  nop
    ctx->pc = 0x500304u;
    // NOP
    // 0x500308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x500308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50030c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500310: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x500310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500318: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x500318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50031c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500320: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x500320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500324: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x500324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x500328: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x500328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50032c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x500330: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x500330u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500334: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x500334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500338: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50033c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500344: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x500344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x500348: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x500348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x50034c: 0xc140080  jal         func_500200
    ctx->pc = 0x50034Cu;
    SET_GPR_U32(ctx, 31, 0x500354u);
    ctx->pc = 0x500350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50034Cu;
    // 0x500350: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500200u;
    goto label_500200;
    ctx->pc = 0x500354u;
label_500354:
    // 0x500354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x500354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500358: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x500358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50035c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50035cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500360: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500364: 0xc140080  jal         func_500200
    ctx->pc = 0x500364u;
    SET_GPR_U32(ctx, 31, 0x50036Cu);
    ctx->pc = 0x500368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500364u;
    // 0x500368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500200u;
    goto label_500200;
    ctx->pc = 0x50036Cu;
label_50036c:
    // 0x50036c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x50036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500370: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x500370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500374: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500378: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x500378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50037c: 0xc140080  jal         func_500200
    ctx->pc = 0x50037Cu;
    SET_GPR_U32(ctx, 31, 0x500384u);
    ctx->pc = 0x500380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50037Cu;
    // 0x500380: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500200u;
    goto label_500200;
    ctx->pc = 0x500384u;
label_500384:
    // 0x500384: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x500384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x500388: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x500388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x50038c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x50038cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x500390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50039c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50039cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5003a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5003a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5003a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5003a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5003a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5003a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5003ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x5003acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5003b0: 0x1012  mflo        $v0
    ctx->pc = 0x5003b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x5003b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5003B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5003B4u;
        // 0x5003b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5003B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5003BCu;
    // 0x5003bc: 0x0  nop
    ctx->pc = 0x5003bcu;
    // NOP
    // 0x5003c0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5003c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5003c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5003c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5003c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5003c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5003cc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5003CCu;
    SET_GPR_U32(ctx, 31, 0x5003D4u);
    ctx->pc = 0x5003D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5003CCu;
    // 0x5003d0: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5003CCu, 0x5003D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5003D4u;
label_5003d4:
    // 0x5003d4: 0x0  nop
    ctx->pc = 0x5003d4u;
    // NOP
label_5003d8:
    // 0x5003d8: 0x0  nop
    ctx->pc = 0x5003d8u;
    // NOP
    // 0x5003dc: 0x0  nop
    ctx->pc = 0x5003dcu;
    // NOP
    // 0x5003e0: 0x0  nop
    ctx->pc = 0x5003e0u;
    // NOP
    // 0x5003e4: 0x0  nop
    ctx->pc = 0x5003e4u;
    // NOP
    // 0x5003e8: 0x0  nop
    ctx->pc = 0x5003e8u;
    // NOP
    // 0x5003ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5003ECu;
    {
        const bool branch_taken_0x5003ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5003ec) {
            ctx->pc = 0x5003D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5003d8;
        }
    }
    ctx->pc = 0x5003F4u;
    // 0x5003f4: 0x0  nop
    ctx->pc = 0x5003f4u;
    // NOP
    // 0x5003f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5003f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5003fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5003fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x500400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x500400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x500404: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x500404u;
    SET_GPR_U32(ctx, 31, 0x50040Cu);
    ctx->pc = 0x500408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500404u;
    // 0x500408: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x500404u, 0x50040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50040Cu;
label_50040c:
    // 0x50040c: 0x0  nop
    ctx->pc = 0x50040cu;
    // NOP
label_500410:
    // 0x500410: 0x0  nop
    ctx->pc = 0x500410u;
    // NOP
    // 0x500414: 0x0  nop
    ctx->pc = 0x500414u;
    // NOP
    // 0x500418: 0x0  nop
    ctx->pc = 0x500418u;
    // NOP
    // 0x50041c: 0x0  nop
    ctx->pc = 0x50041cu;
    // NOP
    // 0x500420: 0x0  nop
    ctx->pc = 0x500420u;
    // NOP
    // 0x500424: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x500424u;
    {
        const bool branch_taken_0x500424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x500424) {
            ctx->pc = 0x500410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_500410;
        }
    }
    ctx->pc = 0x50042Cu;
    // 0x50042c: 0x0  nop
    ctx->pc = 0x50042cu;
    // NOP
    ctx->pc = 0x500430u;
}
