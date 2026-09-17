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

// Function: sub_002173B8
// Address: 0x2173b8 - 0x217488
void sub_002173B8_0x2173b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002173B8_0x2173b8");
#endif

    switch (ctx->pc) {
        case 0x2173fcu: goto label_2173fc;
        case 0x217404u: goto label_217404;
        case 0x217414u: goto label_217414;
        case 0x21741cu: goto label_21741c;
        case 0x217428u: goto label_217428;
        case 0x217430u: goto label_217430;
        case 0x21743cu: goto label_21743c;
        default: break;
    }

    ctx->pc = 0x2173b8u;

    // 0x2173b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2173b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2173bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2173bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2173c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2173c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2173c4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2173c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2173c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2173c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2173cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2173ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2173d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2173d4: 0x26108858  addiu       $s0, $s0, -0x77A8
    ctx->pc = 0x2173d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x2173d8: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2173d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2173dc: 0x90a60032  lbu         $a2, 0x32($a1)
    ctx->pc = 0x2173dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x2173e0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2173e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2173e4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x2173e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2173e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2173e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2173ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2173ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2173f0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2173f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2173f4: 0xc086f3a  jal         func_21BCE8
    ctx->pc = 0x2173F4u;
    SET_GPR_U32(ctx, 31, 0x2173FCu);
    ctx->pc = 0x2173F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173F4u;
    // 0x2173f8: 0x90a40032  lbu         $a0, 0x32($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCE8u, 0x2173F4u, 0x2173FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173FCu;
label_2173fc:
    // 0x2173fc: 0xc086f2c  jal         func_21BCB0
    ctx->pc = 0x2173FCu;
    SET_GPR_U32(ctx, 31, 0x217404u);
    ctx->pc = 0x21BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCB0u, 0x2173FCu, 0x217404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217404u;
label_217404:
    // 0x217404: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x217404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x217408: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x21740c: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x21740Cu;
    SET_GPR_U32(ctx, 31, 0x217414u);
    ctx->pc = 0x217410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21740Cu;
    // 0x217410: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x21740Cu, 0x217414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217414u;
label_217414:
    // 0x217414: 0xc0821ce  jal         func_208738
    ctx->pc = 0x217414u;
    SET_GPR_U32(ctx, 31, 0x21741Cu);
    ctx->pc = 0x217418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217414u;
    // 0x217418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x217414u, 0x21741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21741Cu;
label_21741c:
    // 0x21741c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217420: 0xc092460  jal         func_249180
    ctx->pc = 0x217420u;
    SET_GPR_U32(ctx, 31, 0x217428u);
    ctx->pc = 0x217424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217420u;
    // 0x217424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x217420u, 0x217428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217428u;
label_217428:
    // 0x217428: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x217428u;
    SET_GPR_U32(ctx, 31, 0x217430u);
    ctx->pc = 0x21742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217428u;
    // 0x21742c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x217428u, 0x217430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217430u;
label_217430:
    // 0x217430: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x217434: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x217434u;
    SET_GPR_U32(ctx, 31, 0x21743Cu);
    ctx->pc = 0x217438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217434u;
    // 0x217438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x217434u, 0x21743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21743Cu;
label_21743c:
    // 0x21743c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217440: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x217440u;
    {
        const bool branch_taken_0x217440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217440u;
        // 0x217444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217440) {
            ctx->pc = 0x21745Cu;
            goto label_21745c;
        }
    }
    ctx->pc = 0x217448u;
    // 0x217448: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x217448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21744c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21744cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217450: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x217450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x217454: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x217454u;
    {
        const bool branch_taken_0x217454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x217454) {
            ctx->pc = 0x217458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217454u;
            // 0x217458: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21746Cu;
            goto label_21746c;
        }
    }
    ctx->pc = 0x21745Cu;
label_21745c:
    // 0x21745c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21745cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x217460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217464: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x217464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x217468: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x18u));
label_21746c:
    // 0x21746c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21746cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217478: 0xa0600051  sb          $zero, 0x51($v1)
    ctx->pc = 0x217478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x21747c: 0x3e00008  jr          $ra
    ctx->pc = 0x21747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21747Cu;
        // 0x217480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217484u;
    // 0x217484: 0x0  nop
    ctx->pc = 0x217484u;
    // NOP
    ctx->pc = 0x217488u;
}
