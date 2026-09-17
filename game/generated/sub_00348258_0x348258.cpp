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

// Function: sub_00348258
// Address: 0x348258 - 0x348504
void sub_00348258_0x348258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348258_0x348258");
#endif

    switch (ctx->pc) {
        case 0x3482acu: goto label_3482ac;
        case 0x3482b8u: goto label_3482b8;
        case 0x3482e8u: goto label_3482e8;
        case 0x348380u: goto label_348380;
        case 0x348414u: goto label_348414;
        case 0x348474u: goto label_348474;
        case 0x3484dcu: goto label_3484dc;
        default: break;
    }

    ctx->pc = 0x348258u;

    // 0x348258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x348258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34825c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x34825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x348260: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x348260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348264: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x348264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x348268: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x348268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34826c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x34826cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x348270: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x348270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348274: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x348274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x348278: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x348278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34827c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x348280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x348280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348284: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x348284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x348288: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x348288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x34828c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x348290: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x348290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x348294: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x348294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348298: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x348298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x34829c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x34829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3482a0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3482a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3482a4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x3482A4u;
    SET_GPR_U32(ctx, 31, 0x3482ACu);
    ctx->pc = 0x3482A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482A4u;
    // 0x3482a8: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x3482A4u, 0x3482ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482ACu;
label_3482ac:
    // 0x3482ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3482acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3482b0: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x3482B0u;
    SET_GPR_U32(ctx, 31, 0x3482B8u);
    ctx->pc = 0x3482B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3482B0u;
    // 0x3482b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x3482B0u, 0x3482B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3482B8u;
label_3482b8:
    // 0x3482b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3482b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3482bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3482bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3482c0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3482c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3482c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3482c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3482c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3482c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3482cc: 0x10800075  beqz        $a0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3482CCu;
    {
        const bool branch_taken_0x3482cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3482D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482CCu;
        // 0x3482d0: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482cc) {
            ctx->pc = 0x3484A4u;
            goto label_3484a4;
        }
    }
    ctx->pc = 0x3482D4u;
    // 0x3482d4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x3482d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3482d8: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x3482d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3482dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3482dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3482e0: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x3482e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3482e4: 0x0  nop
    ctx->pc = 0x3482e4u;
    // NOP
label_3482e8:
    // 0x3482e8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3482e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3482ec: 0x10820054  beq         $a0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3482ECu;
    {
        const bool branch_taken_0x3482ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3482F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482ECu;
        // 0x3482f0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482ec) {
            ctx->pc = 0x348440u;
            goto label_348440;
        }
    }
    ctx->pc = 0x3482F4u;
    // 0x3482f4: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3482F4u;
    {
        const bool branch_taken_0x3482f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3482F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3482F4u;
        // 0x3482f8: 0x2482ff5f  addiu       $v0, $a0, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3482f4) {
            ctx->pc = 0x348440u;
            goto label_348440;
        }
    }
    ctx->pc = 0x3482FCu;
    // 0x3482fc: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x3482fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x348300: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x348300u;
    {
        const bool branch_taken_0x348300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348300u;
        // 0x348304: 0x2402008e  addiu       $v0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348300) {
            ctx->pc = 0x348340u;
            goto label_348340;
        }
    }
    ctx->pc = 0x348308u;
    // 0x348308: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x348308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34830c: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x34830cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348314: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348318: 0x2523ff5f  addiu       $v1, $t1, -0xA1
    ctx->pc = 0x348318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967135));
    // 0x34831c: 0x2c63005e  sltiu       $v1, $v1, 0x5E
    ctx->pc = 0x34831cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x348320: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x348320u;
    {
        const bool branch_taken_0x348320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348320u;
        // 0x348324: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348320) {
            ctx->pc = 0x348414u;
            goto label_348414;
        }
    }
    ctx->pc = 0x348328u;
    // 0x348328: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x348328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x34832c: 0x2529ff80  addiu       $t1, $t1, -0x80
    ctx->pc = 0x34832cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
    // 0x348330: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x348330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x348334: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x348334u;
    {
        const bool branch_taken_0x348334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348334u;
        // 0x348338: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348334) {
            ctx->pc = 0x3483E0u;
            goto label_3483e0;
        }
    }
    ctx->pc = 0x34833Cu;
    // 0x34833c: 0x0  nop
    ctx->pc = 0x34833cu;
    // NOP
label_348340:
    // 0x348340: 0x1482003f  bne         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x348340u;
    {
        const bool branch_taken_0x348340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x348344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348340u;
        // 0x348344: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348340) {
            ctx->pc = 0x348440u;
            goto label_348440;
        }
    }
    ctx->pc = 0x348348u;
    // 0x348348: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x348348u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34834c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348350: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348354: 0x2523ff5f  addiu       $v1, $t1, -0xA1
    ctx->pc = 0x348354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967135));
    // 0x348358: 0x2c63003f  sltiu       $v1, $v1, 0x3F
    ctx->pc = 0x348358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x34835c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x34835Cu;
    {
        const bool branch_taken_0x34835c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34835Cu;
        // 0x348360: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34835c) {
            ctx->pc = 0x348414u;
            goto label_348414;
        }
    }
    ctx->pc = 0x348364u;
    // 0x348364: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x348368: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x348368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34836c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x34836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348370: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x348370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x348374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x348374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348378: 0xc0d2240  jal         func_348900
    ctx->pc = 0x348378u;
    SET_GPR_U32(ctx, 31, 0x348380u);
    ctx->pc = 0x34837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348378u;
    // 0x34837c: 0xafa90004  sw          $t1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348900u, 0x348378u, 0x348380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348380u;
label_348380:
    // 0x348380: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x348380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x348384: 0x93a60004  lbu         $a2, 0x4($sp)
    ctx->pc = 0x348384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348388: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x348388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x34838c: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x34838cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348390: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x348390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348394: 0x2cc200a0  sltiu       $v0, $a2, 0xA0
    ctx->pc = 0x348394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x348398: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x348398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34839c: 0x2c85009f  sltiu       $a1, $a0, 0x9F
    ctx->pc = 0x34839cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)159) ? 1 : 0);
    // 0x3483a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3483A0u;
    {
        const bool branch_taken_0x3483a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483A0u;
        // 0x3483a4: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483a0) {
            ctx->pc = 0x3483C0u;
            goto label_3483c0;
        }
    }
    ctx->pc = 0x3483A8u;
    // 0x3483a8: 0x411fa  dsrl        $v0, $a0, 7
    ctx->pc = 0x3483a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 7);
    // 0x3483ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3483acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3483b0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x3483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3483b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3483B4u;
    {
        const bool branch_taken_0x3483b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483B4u;
        // 0x3483b8: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483b4) {
            ctx->pc = 0x3483C4u;
            goto label_3483c4;
        }
    }
    ctx->pc = 0x3483BCu;
    // 0x3483bc: 0x0  nop
    ctx->pc = 0x3483bcu;
    // NOP
label_3483c0:
    // 0x3483c0: 0x2404007e  addiu       $a0, $zero, 0x7E
    ctx->pc = 0x3483c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3483c4:
    // 0x3483c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3483c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3483c8: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x3483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3483cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3483ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3483d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3483d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3483d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3483d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3483d8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3483d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x3483dc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3483dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_3483e0:
    // 0x3483e0: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x3483E0u;
    {
        const bool branch_taken_0x3483e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3483E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483E0u;
        // 0x3483e4: 0x26220002  addiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483e0) {
            ctx->pc = 0x348418u;
            goto label_348418;
        }
    }
    ctx->pc = 0x3483E8u;
    // 0x3483e8: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x3483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x3483ec: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3483ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3483f0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3483F0u;
    {
        const bool branch_taken_0x3483f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483F0u;
        // 0x3483f4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483f0) {
            ctx->pc = 0x3484DCu;
            goto label_3484dc;
        }
    }
    ctx->pc = 0x3483F8u;
    // 0x3483f8: 0xa2350000  sb          $s5, 0x0($s1)
    ctx->pc = 0x3483f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x3483fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3483fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x348400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348404: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x348404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x348408: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x348408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34840c: 0xc04a125  jal         func_128494
    ctx->pc = 0x34840Cu;
    SET_GPR_U32(ctx, 31, 0x348414u);
    ctx->pc = 0x348410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34840Cu;
    // 0x348410: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34840Cu, 0x348414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348414u;
label_348414:
    // 0x348414: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x348414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_348418:
    // 0x348418: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x348418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x34841c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x34841Cu;
    {
        const bool branch_taken_0x34841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34841Cu;
        // 0x348420: 0x93a20004  lbu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34841c) {
            ctx->pc = 0x3484DCu;
            goto label_3484dc;
        }
    }
    ctx->pc = 0x348424u;
    // 0x348424: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x348424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x348428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34842c: 0x93a20008  lbu         $v0, 0x8($sp)
    ctx->pc = 0x34842cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348430: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x348430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348434: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x348434u;
    {
        const bool branch_taken_0x348434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348434u;
        // 0x348438: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348434) {
            ctx->pc = 0x34848Cu;
            goto label_34848c;
        }
    }
    ctx->pc = 0x34843Cu;
    // 0x34843c: 0x0  nop
    ctx->pc = 0x34843cu;
    // NOP
label_348440:
    // 0x348440: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x348440u;
    {
        const bool branch_taken_0x348440 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x348444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348440u;
        // 0x348444: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348440) {
            ctx->pc = 0x348474u;
            goto label_348474;
        }
    }
    ctx->pc = 0x348448u;
    // 0x348448: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x348448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34844c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x34844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x348450: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x348450u;
    {
        const bool branch_taken_0x348450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348450u;
        // 0x348454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348450) {
            ctx->pc = 0x3484DCu;
            goto label_3484dc;
        }
    }
    ctx->pc = 0x348458u;
    // 0x348458: 0xa2350000  sb          $s5, 0x0($s1)
    ctx->pc = 0x348458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x34845c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34845cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x348460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348464: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x348464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x348468: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x348468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34846c: 0xc04a125  jal         func_128494
    ctx->pc = 0x34846Cu;
    SET_GPR_U32(ctx, 31, 0x348474u);
    ctx->pc = 0x348470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34846Cu;
    // 0x348470: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34846Cu, 0x348474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348474u;
label_348474:
    // 0x348474: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x348474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x348478: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x348478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x34847c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34847Cu;
    {
        const bool branch_taken_0x34847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34847Cu;
        // 0x348480: 0x93a20004  lbu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34847c) {
            ctx->pc = 0x3484DCu;
            goto label_3484dc;
        }
    }
    ctx->pc = 0x348484u;
    // 0x348484: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x348484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348488: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x348488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34848c:
    // 0x34848c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348490: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x348490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348498: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34849c: 0x1480ff92  bnez        $a0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x34849Cu;
    {
        const bool branch_taken_0x34849c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34849Cu;
        // 0x3484a0: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34849c) {
            ctx->pc = 0x3482E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3482e8;
        }
    }
    ctx->pc = 0x3484A4u;
label_3484a4:
    // 0x3484a4: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x3484A4u;
    {
        const bool branch_taken_0x3484a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484A4u;
        // 0x3484a8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484a4) {
            ctx->pc = 0x3484DCu;
            goto label_3484dc;
        }
    }
    ctx->pc = 0x3484ACu;
    // 0x3484ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3484acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3484b0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3484b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3484b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3484B4u;
    {
        const bool branch_taken_0x3484b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484b4) {
            ctx->pc = 0x3484B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3484B4u;
            // 0x3484b8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3484E0u;
            goto label_3484e0;
        }
    }
    ctx->pc = 0x3484BCu;
    // 0x3484bc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x3484bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3484c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3484c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484c4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3484c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3484c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3484c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3484cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3484ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3484d0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3484d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3484d4: 0xc04a125  jal         func_128494
    ctx->pc = 0x3484D4u;
    SET_GPR_U32(ctx, 31, 0x3484DCu);
    ctx->pc = 0x3484D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484D4u;
    // 0x3484d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x3484D4u, 0x3484DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3484DCu;
label_3484dc:
    // 0x3484dc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3484dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3484e0:
    // 0x3484e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3484e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3484e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3484e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3484e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3484e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3484ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3484ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3484f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3484f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3484f4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3484f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484f8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3484f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3484fc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3484fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x348500: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x348500u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x348504u;
}
