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

// Function: sub_002422F8
// Address: 0x2422f8 - 0x242730
void sub_002422F8_0x2422f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002422F8_0x2422f8");
#endif

    switch (ctx->pc) {
        case 0x24232cu: goto label_24232c;
        case 0x242334u: goto label_242334;
        case 0x242344u: goto label_242344;
        case 0x242358u: goto label_242358;
        case 0x242360u: goto label_242360;
        case 0x242380u: goto label_242380;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423d8u: goto label_2423d8;
        case 0x242404u: goto label_242404;
        case 0x2426dcu: goto label_2426dc;
        case 0x24270cu: goto label_24270c;
        default: break;
    }

    ctx->pc = 0x2422f8u;

    // 0x2422f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2422fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2422fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242308: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24230c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x242310: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x242310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x242314: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x242318: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x24231c: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x242320: 0x26520710  addiu       $s2, $s2, 0x710
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1808));
    // 0x242324: 0xc09086a  jal         func_2421A8
    ctx->pc = 0x242324u;
    SET_GPR_U32(ctx, 31, 0x24232Cu);
    ctx->pc = 0x242328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242324u;
    // 0x242328: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2421A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A8u, 0x242324u, 0x24232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24232Cu;
label_24232c:
    // 0x24232c: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x24232Cu;
    SET_GPR_U32(ctx, 31, 0x242334u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x24232Cu, 0x242334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242334u;
label_242334:
    // 0x242334: 0x504000f6  beql        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x242334u;
    {
        const bool branch_taken_0x242334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242334) {
            ctx->pc = 0x242338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242334u;
            // 0x242338: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242710u;
            goto label_242710;
        }
    }
    ctx->pc = 0x24233Cu;
    // 0x24233c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x24233Cu;
    SET_GPR_U32(ctx, 31, 0x242344u);
    ctx->pc = 0x242340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24233Cu;
    // 0x242340: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x24233Cu, 0x242344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242344u;
label_242344:
    // 0x242344: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242348: 0x184000ee  blez        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x242348u;
    {
        const bool branch_taken_0x242348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x242348) {
            ctx->pc = 0x242704u;
            goto label_242704;
        }
    }
    ctx->pc = 0x242350u;
    // 0x242350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242354: 0x0  nop
    ctx->pc = 0x242354u;
    // NOP
label_242358:
    // 0x242358: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x242358u;
    SET_GPR_U32(ctx, 31, 0x242360u);
    ctx->pc = 0x24235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242358u;
    // 0x24235c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x242358u, 0x242360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242360u;
label_242360:
    // 0x242360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242364: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x242364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x242368: 0x504000e2  beql        $v0, $zero, . + 4 + (0xE2 << 2)
    ctx->pc = 0x242368u;
    {
        const bool branch_taken_0x242368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242368) {
            ctx->pc = 0x24236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242368u;
            // 0x24236c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426F4u;
            goto label_2426f4;
        }
    }
    ctx->pc = 0x242370u;
    // 0x242370: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x242374: 0x188000de  blez        $a0, . + 4 + (0xDE << 2)
    ctx->pc = 0x242374u;
    {
        const bool branch_taken_0x242374 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x242378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242374u;
        // 0x242378: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242374) {
            ctx->pc = 0x2426F0u;
            goto label_2426f0;
        }
    }
    ctx->pc = 0x24237Cu;
    // 0x24237c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_242380:
    // 0x242380: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x242380u;
    {
        const bool branch_taken_0x242380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242380u;
        // 0x242384: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242380) {
            ctx->pc = 0x242398u;
            goto label_242398;
        }
    }
    ctx->pc = 0x242388u;
    // 0x242388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24238c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24238Cu;
    {
        const bool branch_taken_0x24238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24238Cu;
        // 0x242390: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24238c) {
            ctx->pc = 0x24239Cu;
            goto label_24239c;
        }
    }
    ctx->pc = 0x242394u;
    // 0x242394: 0x0  nop
    ctx->pc = 0x242394u;
    // NOP
label_242398:
    // 0x242398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x242398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24239c:
    // 0x24239c: 0x44000d0  bltz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x24239Cu;
    {
        const bool branch_taken_0x24239c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2423A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24239Cu;
        // 0x2423a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24239c) {
            ctx->pc = 0x2426E0u;
            goto label_2426e0;
        }
    }
    ctx->pc = 0x2423A4u;
    // 0x2423a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2423a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2423a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423ac: 0xc0905d8  jal         func_241760
    ctx->pc = 0x2423ACu;
    SET_GPR_U32(ctx, 31, 0x2423B4u);
    ctx->pc = 0x2423B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423ACu;
    // 0x2423b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241760u, 0x2423ACu, 0x2423B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423B4u;
label_2423b4:
    // 0x2423b4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2423b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423b8: 0x518000c9  beql        $t4, $zero, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2423B8u;
    {
        const bool branch_taken_0x2423b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423b8) {
            ctx->pc = 0x2423BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2423B8u;
            // 0x2423bc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426E0u;
            goto label_2426e0;
        }
    }
    ctx->pc = 0x2423C0u;
    // 0x2423c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2423c4: 0x184000bc  blez        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2423C4u;
    {
        const bool branch_taken_0x2423c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2423C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423C4u;
        // 0x2423c8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423c4) {
            ctx->pc = 0x2426B8u;
            goto label_2426b8;
        }
    }
    ctx->pc = 0x2423CCu;
    // 0x2423cc: 0xc784880c  lwc1        $f4, -0x77F4($gp)
    ctx->pc = 0x2423ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2423d0: 0x240f4000  addiu       $t7, $zero, 0x4000
    ctx->pc = 0x2423d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2423d4: 0x0  nop
    ctx->pc = 0x2423d4u;
    // NOP
label_2423d8:
    // 0x2423d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2423d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2423dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2423DCu;
    {
        const bool branch_taken_0x2423dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423DCu;
        // 0x2423e0: 0x181100  sll         $v0, $t8, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423dc) {
            ctx->pc = 0x2423F0u;
            goto label_2423f0;
        }
    }
    ctx->pc = 0x2423E4u;
    // 0x2423e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2423e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2423E8u;
    {
        const bool branch_taken_0x2423e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423E8u;
        // 0x2423ec: 0x8c4e000c  lw          $t6, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423e8) {
            ctx->pc = 0x2423F4u;
            goto label_2423f4;
        }
    }
    ctx->pc = 0x2423F0u;
label_2423f0:
    // 0x2423f0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2423f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2423f4:
    // 0x2423f4: 0x55c00006  bnel        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2423F4u;
    {
        const bool branch_taken_0x2423f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2423f4) {
            ctx->pc = 0x2423F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2423F4u;
            // 0x2423f8: 0x8d840000  lw          $a0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242410u;
            goto label_242410;
        }
    }
    ctx->pc = 0x2423FCu;
    // 0x2423fc: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2423FCu;
    SET_GPR_U32(ctx, 31, 0x242404u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2423FCu, 0x242404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242404u;
label_242404:
    // 0x242404: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x242404u;
    {
        const bool branch_taken_0x242404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242404u;
        // 0x242408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242404) {
            ctx->pc = 0x242710u;
            goto label_242710;
        }
    }
    ctx->pc = 0x24240Cu;
    // 0x24240c: 0x0  nop
    ctx->pc = 0x24240cu;
    // NOP
label_242410:
    // 0x242410: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x242410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x242414: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x242414u;
    {
        const bool branch_taken_0x242414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242414u;
        // 0x242418: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242414) {
            ctx->pc = 0x2426A0u;
            goto label_2426a0;
        }
    }
    ctx->pc = 0x24241Cu;
    // 0x24241c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x24241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x242420: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x242420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x242424: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x242424u;
    {
        const bool branch_taken_0x242424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242424u;
        // 0x242428: 0xad820000  sw          $v0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242424) {
            ctx->pc = 0x242660u;
            goto label_242660;
        }
    }
    ctx->pc = 0x24242Cu;
    // 0x24242c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x24242cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x242430: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x242430u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x242434: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x242434u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x242438: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x242438u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24243c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x24243cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x242440: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x242440u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x242444: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x242444u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x242448: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x242448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x24244c: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x24244Cu;
    {
        const bool branch_taken_0x24244c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24244c) {
            ctx->pc = 0x242450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24244Cu;
            // 0x242450: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426A8u;
            goto label_2426a8;
        }
    }
    ctx->pc = 0x242454u;
    // 0x242454: 0x8d8d001c  lw          $t5, 0x1C($t4)
    ctx->pc = 0x242454u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x242458: 0x51a00093  beql        $t5, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x242458u;
    {
        const bool branch_taken_0x242458 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x242458) {
            ctx->pc = 0x24245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242458u;
            // 0x24245c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426A8u;
            goto label_2426a8;
        }
    }
    ctx->pc = 0x242460u;
    // 0x242460: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x242460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x242464: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x242464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242468: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x242468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24246c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24246cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x242470: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x242470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x242474: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x242474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x242478: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x242478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24247c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24247cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x242480: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x242480u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x242484: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x242484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242488: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x242488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24248c: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x24248cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242490: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x242490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x242494: 0xc5a20008  lwc1        $f2, 0x8($t5)
    ctx->pc = 0x242494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242498: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
    // 0x24249c: 0x256a0340  addiu       $t2, $t3, 0x340
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 832));
    // 0x2424a0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2424a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2424a4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2424a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2424a8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2424a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2424ac: 0x30a23fff  andi        $v0, $a1, 0x3FFF
    ctx->pc = 0x2424acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x2424b0: 0x24a84000  addiu       $t0, $a1, 0x4000
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x2424b4: 0x1e23023  subu        $a2, $t7, $v0
    ctx->pc = 0x2424b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2424b8: 0x31094000  andi        $t1, $t0, 0x4000
    ctx->pc = 0x2424b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2424bc: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x2424bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x2424c0: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x2424c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x2424c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2424c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2424c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2424c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2424cc: 0x87180b  movn        $v1, $a0, $a3
    ctx->pc = 0x2424ccu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2424d0: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x2424d0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2424d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2424d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2424dc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2424dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2424e0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2424e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2424e8: 0x31088000  andi        $t0, $t0, 0x8000
    ctx->pc = 0x2424e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2424ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2424f0: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2424f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2424f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2424f8: 0xc81825  or          $v1, $a2, $t0
    ctx->pc = 0x2424f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2424fc: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2424fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x242500: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x242500u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x242504: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x242504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x242508: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x242508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24250c: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x24250cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x242510: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x242510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242514: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x242514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x242518: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x242518u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x24251c: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x24251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242520: 0x256a0340  addiu       $t2, $t3, 0x340
    ctx->pc = 0x242520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 832));
    // 0x242524: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x242524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x242528: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x242528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24252c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24252cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x242530: 0x30a23fff  andi        $v0, $a1, 0x3FFF
    ctx->pc = 0x242530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x242534: 0x24a84000  addiu       $t0, $a1, 0x4000
    ctx->pc = 0x242534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x242538: 0x1e23023  subu        $a2, $t7, $v0
    ctx->pc = 0x242538u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x24253c: 0x31094000  andi        $t1, $t0, 0x4000
    ctx->pc = 0x24253cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x242540: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x242540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x242544: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x242544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x242548: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x242548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24254c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24254cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242550: 0x87180b  movn        $v1, $a0, $a3
    ctx->pc = 0x242550u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x242554: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x242554u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x242558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24255c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24255cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x242560: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x242564: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x242564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x242568: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24256c: 0x31088000  andi        $t0, $t0, 0x8000
    ctx->pc = 0x24256cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x242570: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242574: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x242578: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x242578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x24257c: 0xc81825  or          $v1, $a2, $t0
    ctx->pc = 0x24257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x242580: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x242580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x242584: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x242584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x242588: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x242588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24258c: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x24258cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242590: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x242590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x242594: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x242594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242598: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x242598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24259c: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x24259cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2425a0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2425a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2425a4: 0x256b0340  addiu       $t3, $t3, 0x340
    ctx->pc = 0x2425a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 832));
    // 0x2425a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2425a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2425ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2425acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2425b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2425b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2425b4: 0x30a23fff  andi        $v0, $a1, 0x3FFF
    ctx->pc = 0x2425b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x2425b8: 0x24a84000  addiu       $t0, $a1, 0x4000
    ctx->pc = 0x2425b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x2425bc: 0x1e23023  subu        $a2, $t7, $v0
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2425c0: 0x31094000  andi        $t1, $t0, 0x4000
    ctx->pc = 0x2425c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x2425c4: 0x30a74000  andi        $a3, $a1, 0x4000
    ctx->pc = 0x2425c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x2425c8: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x2425c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x2425cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2425ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2425d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2425d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2425d4: 0x87180b  movn        $v1, $a0, $a3
    ctx->pc = 0x2425d4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2425d8: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x2425d8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2425dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2425dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2425e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2425e4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2425e8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2425ec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2425ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2425f0: 0x31088000  andi        $t0, $t0, 0x8000
    ctx->pc = 0x2425f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x2425f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2425f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2425f8: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2425f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2425fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2425fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x242600: 0xc81825  or          $v1, $a2, $t0
    ctx->pc = 0x242600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x242604: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x242604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x242608: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x242608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24260c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24260cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x242610: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x242610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x242614: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x242614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x242618: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x242618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24261c: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x24261cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x242620: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x242620u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x242624: 0xc5820008  lwc1        $f2, 0x8($t4)
    ctx->pc = 0x242624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242628: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x242628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24262c: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x24262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242630: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x242630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x242634: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x242634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x242638: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x242638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24263c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24263cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x242640: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x242640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x242644: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x242644u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x242648: 0x4be1e718  vmulx.xyzw  $vf28, $vf28, $vf1x
    ctx->pc = 0x242648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24264c: 0x4be2ef58  vmulx.xyzw  $vf29, $vf29, $vf2x
    ctx->pc = 0x24264cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x242650: 0x4be3f798  vmulx.xyzw  $vf30, $vf30, $vf3x
    ctx->pc = 0x242650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x242654: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x242654u;
    {
        const bool branch_taken_0x242654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242654u;
        // 0x242658: 0x8dc20024  lw          $v0, 0x24($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242654) {
            ctx->pc = 0x242680u;
            goto label_242680;
        }
    }
    ctx->pc = 0x24265Cu;
    // 0x24265c: 0x0  nop
    ctx->pc = 0x24265cu;
    // NOP
label_242660:
    // 0x242660: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x242664: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x242664u;
    {
        const bool branch_taken_0x242664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242664) {
            ctx->pc = 0x242668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242664u;
            // 0x242668: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426A8u;
            goto label_2426a8;
        }
    }
    ctx->pc = 0x24266Cu;
    // 0x24266c: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x24266cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242670: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x242670u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x242674: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x242674u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x242678: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x242678u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x24267c: 0x8dc20024  lw          $v0, 0x24($t6)
    ctx->pc = 0x24267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 36)));
label_242680:
    // 0x242680: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242684: 0xf87c0000  sqc2        $vf28, 0x0($v1)
    ctx->pc = 0x242684u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x242688: 0xf87d0010  sqc2        $vf29, 0x10($v1)
    ctx->pc = 0x242688u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x24268c: 0xf87e0020  sqc2        $vf30, 0x20($v1)
    ctx->pc = 0x24268cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x242690: 0xf87f0030  sqc2        $vf31, 0x30($v1)
    ctx->pc = 0x242690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x242694: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x242694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x242698u;
    {
        const bool branch_taken_0x242698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242698u;
        // 0x24269c: 0xe5c00030  swc1        $f0, 0x30($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242698) {
            ctx->pc = 0x2426A4u;
            goto label_2426a4;
        }
    }
    ctx->pc = 0x2426A0u;
label_2426a0:
    // 0x2426a0: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x2426a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_2426a4:
    // 0x2426a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2426a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2426a8:
    // 0x2426a8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2426ac: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x2426acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2426b0: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2426B0u;
    {
        const bool branch_taken_0x2426b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2426B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426B0u;
        // 0x2426b4: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426b0) {
            ctx->pc = 0x2423D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2423d8;
        }
    }
    ctx->pc = 0x2426B8u;
label_2426b8:
    // 0x2426b8: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2426b8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2426bc: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2426bcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2426c0: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2426c0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2426c4: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2426c4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2426c8: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2426c8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2426cc: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2426ccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2426d0: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2426d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2426d4: 0xc0c10c0  jal         func_304300
    ctx->pc = 0x2426D4u;
    SET_GPR_U32(ctx, 31, 0x2426DCu);
    ctx->pc = 0x2426D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426D4u;
    // 0x2426d8: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304300u, 0x2426D4u, 0x2426DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426DCu;
label_2426dc:
    // 0x2426dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2426dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2426e0:
    // 0x2426e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2426e4: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x2426e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2426e8: 0x5440ff25  bnel        $v0, $zero, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2426E8u;
    {
        const bool branch_taken_0x2426e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2426e8) {
            ctx->pc = 0x2426ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426E8u;
            // 0x2426ec: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242380;
        }
    }
    ctx->pc = 0x2426F0u;
label_2426f0:
    // 0x2426f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2426f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2426f4:
    // 0x2426f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2426f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2426f8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2426f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2426fc: 0x5440ff16  bnel        $v0, $zero, . + 4 + (-0xEA << 2)
    ctx->pc = 0x2426FCu;
    {
        const bool branch_taken_0x2426fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2426fc) {
            ctx->pc = 0x242700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2426FCu;
            // 0x242700: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242358;
        }
    }
    ctx->pc = 0x242704u;
label_242704:
    // 0x242704: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x242704u;
    SET_GPR_U32(ctx, 31, 0x24270Cu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x242704u, 0x24270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24270Cu;
label_24270c:
    // 0x24270c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24270cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242710:
    // 0x242710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242714: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242718: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24271c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24271cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242720: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x242720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x242724: 0x3e00008  jr          $ra
    ctx->pc = 0x242724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242724u;
        // 0x242728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24272Cu;
    // 0x24272c: 0x0  nop
    ctx->pc = 0x24272cu;
    // NOP
    ctx->pc = 0x242730u;
}
