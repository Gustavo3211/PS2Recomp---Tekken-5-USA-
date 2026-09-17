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

// Function: sub_00365340
// Address: 0x365340 - 0x365548
void sub_00365340_0x365340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365340_0x365340");
#endif

    switch (ctx->pc) {
        case 0x365378u: goto label_365378;
        case 0x365390u: goto label_365390;
        case 0x36546cu: goto label_36546c;
        case 0x365480u: goto label_365480;
        case 0x3654dcu: goto label_3654dc;
        case 0x365510u: goto label_365510;
        case 0x36551cu: goto label_36551c;
        case 0x36552cu: goto label_36552c;
        default: break;
    }

    ctx->pc = 0x365340u;

    // 0x365340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x365348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36534c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36534cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365350: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x365354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x365358: 0x4a00075  bltz        $a1, . + 4 + (0x75 << 2)
    ctx->pc = 0x365358u;
    {
        const bool branch_taken_0x365358 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x36535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365358u;
        // 0x36535c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365358) {
            ctx->pc = 0x365530u;
            goto label_365530;
        }
    }
    ctx->pc = 0x365360u;
    // 0x365360: 0x82020884  lb          $v0, 0x884($s0)
    ctx->pc = 0x365360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2180)));
    // 0x365364: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x365364u;
    {
        const bool branch_taken_0x365364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365364) {
            ctx->pc = 0x365368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365364u;
            // 0x365368: 0x820209cc  lb          $v0, 0x9CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36537Cu;
            goto label_36537c;
        }
    }
    ctx->pc = 0x36536Cu;
    // 0x36536c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x36536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x365370: 0xc0d6bc2  jal         func_35AF08
    ctx->pc = 0x365370u;
    SET_GPR_U32(ctx, 31, 0x365378u);
    ctx->pc = 0x365374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365370u;
    // 0x365374: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF08u, 0x365370u, 0x365378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365378u;
label_365378:
    // 0x365378: 0x820209cc  lb          $v0, 0x9CC($s0)
    ctx->pc = 0x365378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2508)));
label_36537c:
    // 0x36537c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36537Cu;
    {
        const bool branch_taken_0x36537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36537Cu;
        // 0x365380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36537c) {
            ctx->pc = 0x3653A0u;
            goto label_3653a0;
        }
    }
    ctx->pc = 0x365384u;
    // 0x365384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365388: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x365388u;
    SET_GPR_U32(ctx, 31, 0x365390u);
    ctx->pc = 0x36538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365388u;
    // 0x36538c: 0x2406018a  addiu       $a2, $zero, 0x18A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x365388u, 0x365390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365390u;
label_365390:
    // 0x365390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x365390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x365394: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x365394u;
    {
        const bool branch_taken_0x365394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365394u;
        // 0x365398: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365394) {
            ctx->pc = 0x36552Cu;
            goto label_36552c;
        }
    }
    ctx->pc = 0x36539Cu;
    // 0x36539c: 0x0  nop
    ctx->pc = 0x36539cu;
    // NOP
label_3653a0:
    // 0x3653a0: 0x8e110880  lw          $s1, 0x880($s0)
    ctx->pc = 0x3653a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2176)));
    // 0x3653a4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3653a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3653a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3653a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3653ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3653acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3653b0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3653b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3653b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3653B4u;
    {
        const bool branch_taken_0x3653b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3653B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653B4u;
        // 0x3653b8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653b4) {
            ctx->pc = 0x3653D0u;
            goto label_3653d0;
        }
    }
    ctx->pc = 0x3653BCu;
    // 0x3653bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3653bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3653c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3653c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3653c4: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3653C4u;
    {
        const bool branch_taken_0x3653c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3653C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653C4u;
        // 0x3653c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653c4) {
            ctx->pc = 0x365530u;
            goto label_365530;
        }
    }
    ctx->pc = 0x3653CCu;
    // 0x3653cc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3653ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3653d0:
    // 0x3653d0: 0x8e0509ec  lw          $a1, 0x9EC($s0)
    ctx->pc = 0x3653d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2540)));
    // 0x3653d4: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x3653d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x3653d8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3653d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3653dc: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x3653dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3653e0: 0xa20209dc  sb          $v0, 0x9DC($s0)
    ctx->pc = 0x3653e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2524), (uint8_t)GPR_U32(ctx, 2));
    // 0x3653e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3653e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3653e8: 0xae0309e0  sw          $v1, 0x9E0($s0)
    ctx->pc = 0x3653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2528), GPR_U32(ctx, 3));
    // 0x3653ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3653f0: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3653F0u;
    {
        const bool branch_taken_0x3653f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3653F0u;
        // 0x3653f4: 0xae0209e4  sw          $v0, 0x9E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3653f0) {
            ctx->pc = 0x365400u;
            goto label_365400;
        }
    }
    ctx->pc = 0x3653F8u;
    // 0x3653f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3653fc: 0xae0209ec  sw          $v0, 0x9EC($s0)
    ctx->pc = 0x3653fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2540), GPR_U32(ctx, 2));
label_365400:
    // 0x365400: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x365400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x365404: 0x860409f0  lh          $a0, 0x9F0($s0)
    ctx->pc = 0x365404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2544)));
    // 0x365408: 0xae0209e8  sw          $v0, 0x9E8($s0)
    ctx->pc = 0x365408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2536), GPR_U32(ctx, 2));
    // 0x36540c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x36540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x365410: 0x14920003  bne         $a0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x365410u;
    {
        const bool branch_taken_0x365410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x365414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365410u;
        // 0x365414: 0xae0309f8  sw          $v1, 0x9F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365410) {
            ctx->pc = 0x365420u;
            goto label_365420;
        }
    }
    ctx->pc = 0x365418u;
    // 0x365418: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x365418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x36541c: 0xa60209f0  sh          $v0, 0x9F0($s0)
    ctx->pc = 0x36541cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2544), (uint16_t)GPR_U32(ctx, 2));
label_365420:
    // 0x365420: 0x96230024  lhu         $v1, 0x24($s1)
    ctx->pc = 0x365420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x365424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365428: 0x820409dc  lb          $a0, 0x9DC($s0)
    ctx->pc = 0x365428u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2524)));
    // 0x36542c: 0xa60309f2  sh          $v1, 0x9F2($s0)
    ctx->pc = 0x36542cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2546), (uint16_t)GPR_U32(ctx, 3));
    // 0x365430: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x365430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x365434: 0xae0209f4  sw          $v0, 0x9F4($s0)
    ctx->pc = 0x365434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2548), GPR_U32(ctx, 2));
    // 0x365438: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x365438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x36543c: 0x1485000e  bne         $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x36543Cu;
    {
        const bool branch_taken_0x36543c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x365440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36543Cu;
        // 0x365440: 0xa60309fc  sh          $v1, 0x9FC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36543c) {
            ctx->pc = 0x365478u;
            goto label_365478;
        }
    }
    ctx->pc = 0x365444u;
    // 0x365444: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x365444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x365448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36544c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36544Cu;
    {
        const bool branch_taken_0x36544c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36544c) {
            ctx->pc = 0x365478u;
            goto label_365478;
        }
    }
    ctx->pc = 0x365454u;
    // 0x365454: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x365454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x365458: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x365458u;
    {
        const bool branch_taken_0x365458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x36545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365458u;
        // 0x36545c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365458) {
            ctx->pc = 0x365478u;
            goto label_365478;
        }
    }
    ctx->pc = 0x365460u;
    // 0x365460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365464: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x365464u;
    SET_GPR_U32(ctx, 31, 0x36546Cu);
    ctx->pc = 0x365468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365464u;
    // 0x365468: 0x240601c7  addiu       $a2, $zero, 0x1C7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x365464u, 0x36546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36546Cu;
label_36546c:
    // 0x36546c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x36546Cu;
    {
        const bool branch_taken_0x36546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36546Cu;
        // 0x365470: 0xae120040  sw          $s2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36546c) {
            ctx->pc = 0x36552Cu;
            goto label_36552c;
        }
    }
    ctx->pc = 0x365474u;
    // 0x365474: 0x0  nop
    ctx->pc = 0x365474u;
    // NOP
label_365478:
    // 0x365478: 0xc0d8b00  jal         func_362C00
    ctx->pc = 0x365478u;
    SET_GPR_U32(ctx, 31, 0x365480u);
    ctx->pc = 0x362C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C00u, 0x365478u, 0x365480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365480u;
label_365480:
    // 0x365480: 0xc60209e8  lwc1        $f2, 0x9E8($s0)
    ctx->pc = 0x365480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x365484: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x365484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x365488: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x365488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x36548c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36548cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x365490: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x365490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x365494: 0xc78496a8  lwc1        $f4, -0x6958($gp)
    ctx->pc = 0x365494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x365498: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x365498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36549c: 0xc6030a04  lwc1        $f3, 0xA04($s0)
    ctx->pc = 0x36549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3654a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3654a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3654a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3654a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3654a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3654a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3654ac: 0x8e0609ec  lw          $a2, 0x9EC($s0)
    ctx->pc = 0x3654acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2540)));
    // 0x3654b0: 0x0  nop
    ctx->pc = 0x3654b0u;
    // NOP
    // 0x3654b4: 0x0  nop
    ctx->pc = 0x3654b4u;
    // NOP
    // 0x3654b8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x3654b8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x3654bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3654bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3654c0: 0xe60209d0  swc1        $f2, 0x9D0($s0)
    ctx->pc = 0x3654c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2512), bits); }
    // 0x3654c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3654c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3654c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3654c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3654cc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3654ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3654d0: 0xe6000a00  swc1        $f0, 0xA00($s0)
    ctx->pc = 0x3654d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2560), bits); }
    // 0x3654d4: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x3654D4u;
    SET_GPR_U32(ctx, 31, 0x3654DCu);
    ctx->pc = 0x3654D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3654D4u;
    // 0x3654d8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x3654D4u, 0x3654DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654DCu;
label_3654dc:
    // 0x3654dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3654dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3654e0: 0x8e0209d4  lw          $v0, 0x9D4($s0)
    ctx->pc = 0x3654e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2516)));
    // 0x3654e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3654e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3654e8: 0x26050888  addiu       $a1, $s0, 0x888
    ctx->pc = 0x3654e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2184));
    // 0x3654ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3654ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3654f0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x3654f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3654f4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3654f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654f8: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x3654f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3654fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3654FCu;
    {
        const bool branch_taken_0x3654fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x365500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654FCu;
        // 0x365500: 0x8e090a00  lw          $t1, 0xA00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654fc) {
            ctx->pc = 0x365508u;
            goto label_365508;
        }
    }
    ctx->pc = 0x365504u;
    // 0x365504: 0x8e2a002c  lw          $t2, 0x2C($s1)
    ctx->pc = 0x365504u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_365508:
    // 0x365508: 0xc0d6aee  jal         func_35ABB8
    ctx->pc = 0x365508u;
    SET_GPR_U32(ctx, 31, 0x365510u);
    ctx->pc = 0x36550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365508u;
    // 0x36550c: 0x8e0b000c  lw          $t3, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ABB8u, 0x365508u, 0x365510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365510u;
label_365510:
    // 0x365510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365514: 0xc0d945e  jal         func_365178
    ctx->pc = 0x365514u;
    SET_GPR_U32(ctx, 31, 0x36551Cu);
    ctx->pc = 0x365518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365514u;
    // 0x365518: 0x82050885  lb          $a1, 0x885($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2181)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365178u, 0x365514u, 0x36551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36551Cu;
label_36551c:
    // 0x36551c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365520: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365524: 0xc0d9320  jal         func_364C80
    ctx->pc = 0x365524u;
    SET_GPR_U32(ctx, 31, 0x36552Cu);
    ctx->pc = 0x365528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365524u;
    // 0x365528: 0x240601e1  addiu       $a2, $zero, 0x1E1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C80u, 0x365524u, 0x36552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36552Cu;
label_36552c:
    // 0x36552c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36552cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365530:
    // 0x365530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36553c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365540: 0x3e00008  jr          $ra
    ctx->pc = 0x365540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365540u;
        // 0x365544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365548u;
}
