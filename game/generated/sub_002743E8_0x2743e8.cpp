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

// Function: sub_002743E8
// Address: 0x2743e8 - 0x2744e8
void sub_002743E8_0x2743e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002743E8_0x2743e8");
#endif

    switch (ctx->pc) {
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        case 0x274440u: goto label_274440;
        case 0x274444u: goto label_274444;
        case 0x274448u: goto label_274448;
        case 0x27444cu: goto label_27444c;
        case 0x274450u: goto label_274450;
        case 0x274454u: goto label_274454;
        case 0x274458u: goto label_274458;
        case 0x27445cu: goto label_27445c;
        case 0x274460u: goto label_274460;
        case 0x274464u: goto label_274464;
        case 0x274468u: goto label_274468;
        case 0x27446cu: goto label_27446c;
        case 0x274470u: goto label_274470;
        case 0x274474u: goto label_274474;
        case 0x274478u: goto label_274478;
        case 0x27447cu: goto label_27447c;
        case 0x274480u: goto label_274480;
        case 0x274484u: goto label_274484;
        case 0x274488u: goto label_274488;
        case 0x27448cu: goto label_27448c;
        case 0x274490u: goto label_274490;
        case 0x274494u: goto label_274494;
        case 0x274498u: goto label_274498;
        case 0x27449cu: goto label_27449c;
        case 0x2744a0u: goto label_2744a0;
        case 0x2744a4u: goto label_2744a4;
        case 0x2744a8u: goto label_2744a8;
        case 0x2744acu: goto label_2744ac;
        case 0x2744b0u: goto label_2744b0;
        case 0x2744b4u: goto label_2744b4;
        case 0x2744b8u: goto label_2744b8;
        case 0x2744bcu: goto label_2744bc;
        case 0x2744c0u: goto label_2744c0;
        case 0x2744c4u: goto label_2744c4;
        case 0x2744c8u: goto label_2744c8;
        case 0x2744ccu: goto label_2744cc;
        case 0x2744d0u: goto label_2744d0;
        case 0x2744d4u: goto label_2744d4;
        case 0x2744d8u: goto label_2744d8;
        case 0x2744dcu: goto label_2744dc;
        case 0x2744e0u: goto label_2744e0;
        case 0x2744e4u: goto label_2744e4;
        default: break;
    }

    ctx->pc = 0x2743e8u;

label_2743e8:
    // 0x2743e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2743ec:
    // 0x2743ec: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2743ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2743f0:
    // 0x2743f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2743f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2743f4:
    // 0x2743f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2743f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2743f8:
    // 0x2743f8: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2743fc:
    // 0x2743fc: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
label_274400:
    if (ctx->pc == 0x274400u) {
        ctx->pc = 0x274400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743FCu;
        // 0x274400: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274404u;
        goto label_274404;
    }
    ctx->pc = 0x2743FCu;
    {
        const bool branch_taken_0x2743fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x274400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743FCu;
        // 0x274400: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743fc) {
            ctx->pc = 0x2744D0u;
            goto label_2744d0;
        }
    }
    ctx->pc = 0x274404u;
label_274404:
    // 0x274404: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_274408:
    // 0x274408: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_27440c:
    if (ctx->pc == 0x27440Cu) {
        ctx->pc = 0x27440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274408u;
        // 0x27440c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274410u;
        goto label_274410;
    }
    ctx->pc = 0x274408u;
    {
        const bool branch_taken_0x274408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274408u;
        // 0x27440c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274408) {
            ctx->pc = 0x2744D4u;
            goto label_2744d4;
        }
    }
    ctx->pc = 0x274410u;
label_274410:
    // 0x274410: 0xc04a1f0  jal         func_1287C0
label_274414:
    if (ctx->pc == 0x274414u) {
        ctx->pc = 0x274418u;
        goto label_274418;
    }
    ctx->pc = 0x274410u;
    SET_GPR_U32(ctx, 31, 0x274418u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274410u, 0x274418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274418u;
label_274418:
    // 0x274418: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x274418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27441c:
    // 0x27441c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_274420:
    // 0x274420: 0x84830374  lh          $v1, 0x374($a0)
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 884)));
label_274424:
    // 0x274424: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_274428:
    // 0x274428: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_27442c:
    if (ctx->pc == 0x27442Cu) {
        ctx->pc = 0x27442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274428u;
        // 0x27442c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274430u;
        goto label_274430;
    }
    ctx->pc = 0x274428u;
    {
        const bool branch_taken_0x274428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274428u;
        // 0x27442c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274428) {
            ctx->pc = 0x2744D4u;
            goto label_2744d4;
        }
    }
    ctx->pc = 0x274430u;
label_274430:
    // 0x274430: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x274430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_274434:
    // 0x274434: 0x40f809  jalr        $v0
label_274438:
    if (ctx->pc == 0x274438u) {
        ctx->pc = 0x27443Cu;
        goto label_27443c;
    }
    ctx->pc = 0x274434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27443Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274434u, 0x27443Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27443Cu;
label_27443c:
    // 0x27443c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27443cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274440:
    // 0x274440: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x274440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_274444:
    // 0x274444: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_274448:
    if (ctx->pc == 0x274448u) {
        ctx->pc = 0x274448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274444u;
        // 0x274448: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27444Cu;
        goto label_27444c;
    }
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274444u;
        // 0x274448: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274444) {
            ctx->pc = 0x2744CCu;
            goto label_2744cc;
        }
    }
    ctx->pc = 0x27444Cu;
label_27444c:
    // 0x27444c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_274450:
    if (ctx->pc == 0x274450u) {
        ctx->pc = 0x274450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27444Cu;
        // 0x274450: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274454u;
        goto label_274454;
    }
    ctx->pc = 0x27444Cu;
    {
        const bool branch_taken_0x27444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27444Cu;
        // 0x274450: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27444c) {
            ctx->pc = 0x274468u;
            goto label_274468;
        }
    }
    ctx->pc = 0x274454u;
label_274454:
    // 0x274454: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x274454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_274458:
    // 0x274458: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27445c:
    if (ctx->pc == 0x27445Cu) {
        ctx->pc = 0x27445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274458u;
        // 0x27445c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274460u;
        goto label_274460;
    }
    ctx->pc = 0x274458u;
    {
        const bool branch_taken_0x274458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274458u;
        // 0x27445c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274458) {
            ctx->pc = 0x274478u;
            goto label_274478;
        }
    }
    ctx->pc = 0x274460u;
label_274460:
    // 0x274460: 0x1000000f  b           . + 4 + (0xF << 2)
label_274464:
    if (ctx->pc == 0x274464u) {
        ctx->pc = 0x274468u;
        goto label_274468;
    }
    ctx->pc = 0x274460u;
    {
        const bool branch_taken_0x274460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274460) {
            ctx->pc = 0x2744A0u;
            goto label_2744a0;
        }
    }
    ctx->pc = 0x274468u;
label_274468:
    // 0x274468: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_27446c:
    if (ctx->pc == 0x27446Cu) {
        ctx->pc = 0x27446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274468u;
        // 0x27446c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274470u;
        goto label_274470;
    }
    ctx->pc = 0x274468u;
    {
        const bool branch_taken_0x274468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274468u;
        // 0x27446c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274468) {
            ctx->pc = 0x2744D0u;
            goto label_2744d0;
        }
    }
    ctx->pc = 0x274470u;
label_274470:
    // 0x274470: 0x1000000b  b           . + 4 + (0xB << 2)
label_274474:
    if (ctx->pc == 0x274474u) {
        ctx->pc = 0x274478u;
        goto label_274478;
    }
    ctx->pc = 0x274470u;
    {
        const bool branch_taken_0x274470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274470) {
            ctx->pc = 0x2744A0u;
            goto label_2744a0;
        }
    }
    ctx->pc = 0x274478u;
label_274478:
    // 0x274478: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_27447c:
    // 0x27447c: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_274480:
    // 0x274480: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_274484:
    if (ctx->pc == 0x274484u) {
        ctx->pc = 0x274484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274480u;
        // 0x274484: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274488u;
        goto label_274488;
    }
    ctx->pc = 0x274480u;
    {
        const bool branch_taken_0x274480 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x274484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274480u;
        // 0x274484: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274480) {
            ctx->pc = 0x2744D4u;
            goto label_2744d4;
        }
    }
    ctx->pc = 0x274488u;
label_274488:
    // 0x274488: 0xc09b492  jal         func_26D248
label_27448c:
    if (ctx->pc == 0x27448Cu) {
        ctx->pc = 0x274490u;
        goto label_274490;
    }
    ctx->pc = 0x274488u;
    SET_GPR_U32(ctx, 31, 0x274490u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274488u, 0x274490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274490u;
label_274490:
    // 0x274490: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_274494:
    if (ctx->pc == 0x274494u) {
        ctx->pc = 0x274494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274490u;
        // 0x274494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274498u;
        goto label_274498;
    }
    ctx->pc = 0x274490u;
    {
        const bool branch_taken_0x274490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274490u;
        // 0x274494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274490) {
            ctx->pc = 0x2744D4u;
            goto label_2744d4;
        }
    }
    ctx->pc = 0x274498u;
label_274498:
    // 0x274498: 0x1000000d  b           . + 4 + (0xD << 2)
label_27449c:
    if (ctx->pc == 0x27449Cu) {
        ctx->pc = 0x27449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274498u;
        // 0x27449c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744A0u;
        goto label_2744a0;
    }
    ctx->pc = 0x274498u;
    {
        const bool branch_taken_0x274498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274498u;
        // 0x27449c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274498) {
            ctx->pc = 0x2744D0u;
            goto label_2744d0;
        }
    }
    ctx->pc = 0x2744A0u;
label_2744a0:
    // 0x2744a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2744a4:
    if (ctx->pc == 0x2744A4u) {
        ctx->pc = 0x2744A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744A0u;
        // 0x2744a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744A8u;
        goto label_2744a8;
    }
    ctx->pc = 0x2744A0u;
    {
        const bool branch_taken_0x2744a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2744A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744A0u;
        // 0x2744a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744a0) {
            ctx->pc = 0x2744B0u;
            goto label_2744b0;
        }
    }
    ctx->pc = 0x2744A8u;
label_2744a8:
    // 0x2744a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2744ac:
    if (ctx->pc == 0x2744ACu) {
        ctx->pc = 0x2744ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744A8u;
        // 0x2744ac: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744B0u;
        goto label_2744b0;
    }
    ctx->pc = 0x2744A8u;
    {
        const bool branch_taken_0x2744a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2744ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744A8u;
        // 0x2744ac: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744a8) {
            ctx->pc = 0x2744C8u;
            goto label_2744c8;
        }
    }
    ctx->pc = 0x2744B0u;
label_2744b0:
    // 0x2744b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2744b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2744b4:
    // 0x2744b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2744b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2744b8:
    // 0x2744b8: 0xc09935e  jal         func_264D78
label_2744bc:
    if (ctx->pc == 0x2744BCu) {
        ctx->pc = 0x2744BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744B8u;
        // 0x2744bc: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744C0u;
        goto label_2744c0;
    }
    ctx->pc = 0x2744B8u;
    SET_GPR_U32(ctx, 31, 0x2744C0u);
    ctx->pc = 0x2744BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2744B8u;
    // 0x2744bc: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x2744B8u, 0x2744C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744C0u;
label_2744c0:
    // 0x2744c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2744c4:
    if (ctx->pc == 0x2744C4u) {
        ctx->pc = 0x2744C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744C0u;
        // 0x2744c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744C8u;
        goto label_2744c8;
    }
    ctx->pc = 0x2744C0u;
    {
        const bool branch_taken_0x2744c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744C0u;
        // 0x2744c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744c0) {
            ctx->pc = 0x2744D0u;
            goto label_2744d0;
        }
    }
    ctx->pc = 0x2744C8u;
label_2744c8:
    // 0x2744c8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x2744c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_2744cc:
    // 0x2744cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2744d0:
    // 0x2744d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2744d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2744d4:
    // 0x2744d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2744d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2744d8:
    // 0x2744d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2744d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2744dc:
    // 0x2744dc: 0x3e00008  jr          $ra
label_2744e0:
    if (ctx->pc == 0x2744E0u) {
        ctx->pc = 0x2744E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744DCu;
        // 0x2744e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2744E4u;
        goto label_2744e4;
    }
    ctx->pc = 0x2744DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744DCu;
        // 0x2744e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744E4u;
label_2744e4:
    // 0x2744e4: 0x0  nop
    ctx->pc = 0x2744e4u;
    // NOP
    ctx->pc = 0x2744e8u;
}
