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

// Function: sub_0023F5C0
// Address: 0x23f5c0 - 0x23f7e0
void sub_0023F5C0_0x23f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F5C0_0x23f5c0");
#endif

    switch (ctx->pc) {
        case 0x23f628u: goto label_23f628;
        case 0x23f694u: goto label_23f694;
        case 0x23f6c4u: goto label_23f6c4;
        case 0x23f6e0u: goto label_23f6e0;
        case 0x23f6f8u: goto label_23f6f8;
        case 0x23f708u: goto label_23f708;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f75cu: goto label_23f75c;
        default: break;
    }

    ctx->pc = 0x23f5c0u;

    // 0x23f5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f5c4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f5c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f5cc: 0x24503598  addiu       $s0, $v0, 0x3598
    ctx->pc = 0x23f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13720));
    // 0x23f5d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f5d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f5dc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x23f5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f5e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23f5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f5ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x163598u));
    // 0x23f5f0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23F5F0u;
    {
        const bool branch_taken_0x23f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F0u;
        // 0x23f5f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5f0) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23F5F8u;
    // 0x23f5f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f5fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23f600: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x23f604: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23f608: 0x8e31b734  lw          $s1, -0x48CC($s1)
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
    // 0x23f60c: 0x1e200004  bgtz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F60Cu;
    {
        const bool branch_taken_0x23f60c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x23F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F60Cu;
        // 0x23f610: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f60c) {
            ctx->pc = 0x23F620u;
            goto label_23f620;
        }
    }
    ctx->pc = 0x23F614u;
    // 0x23f614: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x23F614u;
    {
        const bool branch_taken_0x23f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F614u;
        // 0x23f618: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f614) {
            ctx->pc = 0x23F7B0u;
            goto label_23f7b0;
        }
    }
    ctx->pc = 0x23F61Cu;
    // 0x23f61c: 0x0  nop
    ctx->pc = 0x23f61cu;
    // NOP
label_23f620:
    // 0x23f620: 0xc08fd10  jal         func_23F440
    ctx->pc = 0x23F620u;
    SET_GPR_U32(ctx, 31, 0x23F628u);
    ctx->pc = 0x23F624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F620u;
    // 0x23f624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F440u, 0x23F620u, 0x23F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F628u;
label_23f628:
    // 0x23f628: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f62c: 0x643000c  bgezl       $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x23F62Cu;
    {
        const bool branch_taken_0x23f62c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x23f62c) {
            ctx->pc = 0x23F630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F62Cu;
            // 0x23f630: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F660u;
            goto label_23f660;
        }
    }
    ctx->pc = 0x23F634u;
    // 0x23f634: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23f634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23f638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23f63c: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x23f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x23f640: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f644: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x16358Cu));
    // 0x23f648: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x23f648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x23f64c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f650: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x23f650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x23f654: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x23F654u;
    {
        const bool branch_taken_0x23f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F654u;
        // 0x23f658: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f654) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F65Cu;
    // 0x23f65c: 0x0  nop
    ctx->pc = 0x23f65cu;
    // NOP
label_23f660:
    // 0x23f660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f664: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F664u;
    {
        const bool branch_taken_0x23f664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f664) {
            ctx->pc = 0x23F684u;
            goto label_23f684;
        }
    }
    ctx->pc = 0x23F66Cu;
    // 0x23f66c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f670: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23f678: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x23f678u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x23f67c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23f680: 0x8e31b734  lw          $s1, -0x48CC($s1)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_23f684:
    // 0x23f684: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F684u;
    {
        const bool branch_taken_0x23f684 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x23F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F684u;
        // 0x23f688: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f684) {
            ctx->pc = 0x23F6A0u;
            goto label_23f6a0;
        }
    }
    ctx->pc = 0x23F68Cu;
    // 0x23f68c: 0xc08fd2e  jal         func_23F4B8
    ctx->pc = 0x23F68Cu;
    SET_GPR_U32(ctx, 31, 0x23F694u);
    ctx->pc = 0x23F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F68Cu;
    // 0x23f690: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F4B8u, 0x23F68Cu, 0x23F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F694u;
label_23f694:
    // 0x23f694: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23F694u;
    {
        const bool branch_taken_0x23f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F694u;
        // 0x23f698: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f694) {
            ctx->pc = 0x23F6C8u;
            goto label_23f6c8;
        }
    }
    ctx->pc = 0x23F69Cu;
    // 0x23f69c: 0x0  nop
    ctx->pc = 0x23f69cu;
    // NOP
label_23f6a0:
    // 0x23f6a0: 0x8c4335a0  lw          $v1, 0x35A0($v0)
    ctx->pc = 0x23f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13728)));
    // 0x23f6a4: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23F6A4u;
    {
        const bool branch_taken_0x23f6a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x23f6a4) {
            ctx->pc = 0x23F6D8u;
            goto label_23f6d8;
        }
    }
    ctx->pc = 0x23F6ACu;
    // 0x23f6ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23f6b0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x23f6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23f6b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F6B4u;
    {
        const bool branch_taken_0x23f6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f6b4) {
            ctx->pc = 0x23F6D8u;
            goto label_23f6d8;
        }
    }
    ctx->pc = 0x23F6BCu;
    // 0x23f6bc: 0xc08fd2e  jal         func_23F4B8
    ctx->pc = 0x23F6BCu;
    SET_GPR_U32(ctx, 31, 0x23F6C4u);
    ctx->pc = 0x23F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6BCu;
    // 0x23f6c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F4B8u, 0x23F6BCu, 0x23F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6C4u;
label_23f6c4:
    // 0x23f6c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23f6c8:
    // 0x23f6c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f6cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23f6d0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23F6D0u;
    {
        const bool branch_taken_0x23f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6D0u;
        // 0x23f6d4: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6d0) {
            ctx->pc = 0x23F7B4u;
            goto label_23f7b4;
        }
    }
    ctx->pc = 0x23F6D8u;
label_23f6d8:
    // 0x23f6d8: 0xc08fcde  jal         func_23F378
    ctx->pc = 0x23F6D8u;
    SET_GPR_U32(ctx, 31, 0x23F6E0u);
    ctx->pc = 0x23F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6D8u;
    // 0x23f6dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F378u, 0x23F6D8u, 0x23F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6E0u;
label_23f6e0:
    // 0x23f6e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f6e4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23f6e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23f6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6f0: 0xc08fcf4  jal         func_23F3D0
    ctx->pc = 0x23F6F0u;
    SET_GPR_U32(ctx, 31, 0x23F6F8u);
    ctx->pc = 0x23F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6F0u;
    // 0x23f6f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3D0u, 0x23F6F0u, 0x23F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6F8u;
label_23f6f8:
    // 0x23f6f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f6fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23f6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f700: 0xc08fd2e  jal         func_23F4B8
    ctx->pc = 0x23F700u;
    SET_GPR_U32(ctx, 31, 0x23F708u);
    ctx->pc = 0x23F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F700u;
    // 0x23f704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F4B8u, 0x23F700u, 0x23F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F708u;
label_23f708:
    // 0x23f708: 0x623000d  bgezl       $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x23F708u;
    {
        const bool branch_taken_0x23f708 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x23f708) {
            ctx->pc = 0x23F70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F708u;
            // 0x23f70c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F740u;
            goto label_23f740;
        }
    }
    ctx->pc = 0x23F710u;
    // 0x23f710: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23f714: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f71c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f71cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f720: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23f724: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x23f728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f738: 0x808fd3c  j           func_23F4F0
    ctx->pc = 0x23F738u;
    ctx->pc = 0x23F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F738u;
    // 0x23f73c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F4F0u, 0x23F738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23F740u;
label_23f740:
    // 0x23f740: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f744: 0xc08fd44  jal         func_23F510
    ctx->pc = 0x23F744u;
    SET_GPR_U32(ctx, 31, 0x23F74Cu);
    ctx->pc = 0x23F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F744u;
    // 0x23f748: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F510u, 0x23F744u, 0x23F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F74Cu;
label_23f74c:
    // 0x23f74c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23f750: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23f750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f754: 0xc08fc98  jal         func_23F260
    ctx->pc = 0x23F754u;
    SET_GPR_U32(ctx, 31, 0x23F75Cu);
    ctx->pc = 0x23F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F754u;
    // 0x23f758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F260u, 0x23F754u, 0x23F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F75Cu;
label_23f75c:
    // 0x23f75c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23f760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f764: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23f764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23f768: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23f76c: 0x8c84e9b8  lw          $a0, -0x1648($a0)
    ctx->pc = 0x23f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961592)));
    // 0x23f770: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F770u;
    {
        const bool branch_taken_0x23f770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F770u;
        // 0x23f774: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f770) {
            ctx->pc = 0x23F7A8u;
            goto label_23f7a8;
        }
    }
    ctx->pc = 0x23F778u;
    // 0x23f778: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23f778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f77c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f780: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f784: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23f788: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23f788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x23f78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f79c: 0x808fd3c  j           func_23F4F0
    ctx->pc = 0x23F79Cu;
    ctx->pc = 0x23F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F79Cu;
    // 0x23f7a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F4F0u, 0x23F79Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23F7A4u;
    // 0x23f7a4: 0x0  nop
    ctx->pc = 0x23f7a4u;
    // NOP
label_23f7a8:
    // 0x23f7a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f7ac: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x23f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_23f7b0:
    // 0x23f7b0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_23f7b4:
    // 0x23f7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f7bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f7c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f7c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7C8u;
        // 0x23f7cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7D0u;
    // 0x23f7d0: 0x2782a990  addiu       $v0, $gp, -0x5670
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945168));
    // 0x23f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7DCu;
    // 0x23f7dc: 0x0  nop
    ctx->pc = 0x23f7dcu;
    // NOP
    ctx->pc = 0x23f7e0u;
}
