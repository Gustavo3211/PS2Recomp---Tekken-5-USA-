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

// Function: sub_00505380
// Address: 0x505380 - 0x5054a0
void sub_00505380_0x505380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505380_0x505380");
#endif

    switch (ctx->pc) {
        case 0x5053b8u: goto label_5053b8;
        case 0x505470u: goto label_505470;
        case 0x505480u: goto label_505480;
        case 0x505490u: goto label_505490;
        default: break;
    }

    ctx->pc = 0x505380u;

    // 0x505380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505384: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x505388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50538c: 0x2450f080  addiu       $s0, $v0, -0xF80
    ctx->pc = 0x50538cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x505390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x505390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x505394: 0x86034cd0  lh          $v1, 0x4CD0($s0)
    ctx->pc = 0x505394u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903D50u));
    // 0x505398: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x505398u;
    {
        const bool branch_taken_0x505398 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505398u;
        // 0x50539c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505398) {
            ctx->pc = 0x5053B0u;
            goto label_5053b0;
        }
    }
    ctx->pc = 0x5053A0u;
    // 0x5053a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5053a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5053a4: 0x81414dc  j           func_505370
    ctx->pc = 0x5053A4u;
    ctx->pc = 0x5053A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5053A4u;
    // 0x5053a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505370u, 0x5053A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5053ACu;
    // 0x5053ac: 0x0  nop
    ctx->pc = 0x5053acu;
    // NOP
label_5053b0:
    // 0x5053b0: 0xc124620  jal         func_491880
    ctx->pc = 0x5053B0u;
    SET_GPR_U32(ctx, 31, 0x5053B8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x5053B0u, 0x5053B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5053B8u;
label_5053b8:
    // 0x5053b8: 0x2604000a  addiu       $a0, $s0, 0xA
    ctx->pc = 0x5053b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x5053bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x5053bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x5053c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5053c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5053c4: 0x8463e820  lh          $v1, -0x17E0($v1)
    ctx->pc = 0x5053c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x5053c8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x5053c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5053cc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x5053CCu;
    {
        const bool branch_taken_0x5053cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5053CCu;
        // 0x5053d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5053cc) {
            ctx->pc = 0x505438u;
            goto label_505438;
        }
    }
    ctx->pc = 0x5053D4u;
    // 0x5053d4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x5053D4u;
    {
        const bool branch_taken_0x5053d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5053D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5053D4u;
        // 0x5053d8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5053d4) {
            ctx->pc = 0x505418u;
            goto label_505418;
        }
    }
    ctx->pc = 0x5053DCu;
    // 0x5053dc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x5053dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x5053e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x5053E0u;
    {
        const bool branch_taken_0x5053e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5053e0) {
            ctx->pc = 0x5053E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5053E0u;
            // 0x5053e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5053F8u;
            goto label_5053f8;
        }
    }
    ctx->pc = 0x5053E8u;
    // 0x5053e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5053E8u;
    {
        const bool branch_taken_0x5053e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5053E8u;
        // 0x5053ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5053e8) {
            ctx->pc = 0x505408u;
            goto label_505408;
        }
    }
    ctx->pc = 0x5053F0u;
    // 0x5053f0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x5053F0u;
    {
        const bool branch_taken_0x5053f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5053F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5053F0u;
        // 0x5053f4: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5053f0) {
            ctx->pc = 0x505498u;
            goto label_505498;
        }
    }
    ctx->pc = 0x5053F8u;
label_5053f8:
    // 0x5053f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x5053F8u;
    {
        const bool branch_taken_0x5053f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5053F8u;
        // 0x5053fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5053f8) {
            ctx->pc = 0x505428u;
            goto label_505428;
        }
    }
    ctx->pc = 0x505400u;
    // 0x505400: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x505400u;
    {
        const bool branch_taken_0x505400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505400u;
        // 0x505404: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505400) {
            ctx->pc = 0x505498u;
            goto label_505498;
        }
    }
    ctx->pc = 0x505408u;
label_505408:
    // 0x505408: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x505408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50540c: 0x81414b4  j           func_5052D0
    ctx->pc = 0x50540Cu;
    ctx->pc = 0x505410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50540Cu;
    // 0x505410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5052D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5052D0u, 0x50540Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505414u;
    // 0x505414: 0x0  nop
    ctx->pc = 0x505414u;
    // NOP
label_505418:
    // 0x505418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50541c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50541cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x505420: 0x81414c4  j           func_505310
    ctx->pc = 0x505420u;
    ctx->pc = 0x505424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505420u;
    // 0x505424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505310u, 0x505420u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505428u;
label_505428:
    // 0x505428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x505428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50542c: 0x81414ce  j           func_505338
    ctx->pc = 0x50542Cu;
    ctx->pc = 0x505430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50542Cu;
    // 0x505430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505338u, 0x50542Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505434u;
    // 0x505434: 0x0  nop
    ctx->pc = 0x505434u;
    // NOP
label_505438:
    // 0x505438: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x505438u;
    {
        const bool branch_taken_0x505438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505438u;
        // 0x50543c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x505438) {
            ctx->pc = 0x505478u;
            goto label_505478;
        }
    }
    ctx->pc = 0x505440u;
    // 0x505440: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x505440u;
    {
        const bool branch_taken_0x505440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x505440) {
            ctx->pc = 0x505444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505440u;
            // 0x505444: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x505458u;
            goto label_505458;
        }
    }
    ctx->pc = 0x505448u;
    // 0x505448: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x505448u;
    {
        const bool branch_taken_0x505448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x505448) {
            ctx->pc = 0x505468u;
            goto label_505468;
        }
    }
    ctx->pc = 0x505450u;
    // 0x505450: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x505450u;
    {
        const bool branch_taken_0x505450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505450u;
        // 0x505454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505450) {
            ctx->pc = 0x505494u;
            goto label_505494;
        }
    }
    ctx->pc = 0x505458u;
label_505458:
    // 0x505458: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x505458u;
    {
        const bool branch_taken_0x505458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505458u;
        // 0x50545c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505458) {
            ctx->pc = 0x505488u;
            goto label_505488;
        }
    }
    ctx->pc = 0x505460u;
    // 0x505460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x505460u;
    {
        const bool branch_taken_0x505460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505460u;
        // 0x505464: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505460) {
            ctx->pc = 0x505498u;
            goto label_505498;
        }
    }
    ctx->pc = 0x505468u;
label_505468:
    // 0x505468: 0xc1414ae  jal         func_5052B8
    ctx->pc = 0x505468u;
    SET_GPR_U32(ctx, 31, 0x505470u);
    ctx->pc = 0x5052B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5052B8u, 0x505468u, 0x505470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505470u;
label_505470:
    // 0x505470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x505470u;
    {
        const bool branch_taken_0x505470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505470u;
        // 0x505474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505470) {
            ctx->pc = 0x505494u;
            goto label_505494;
        }
    }
    ctx->pc = 0x505478u;
label_505478:
    // 0x505478: 0xc1414ba  jal         func_5052E8
    ctx->pc = 0x505478u;
    SET_GPR_U32(ctx, 31, 0x505480u);
    ctx->pc = 0x5052E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5052E8u, 0x505478u, 0x505480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505480u;
label_505480:
    // 0x505480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x505480u;
    {
        const bool branch_taken_0x505480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505480u;
        // 0x505484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505480) {
            ctx->pc = 0x505494u;
            goto label_505494;
        }
    }
    ctx->pc = 0x505488u;
label_505488:
    // 0x505488: 0xc1414ba  jal         func_5052E8
    ctx->pc = 0x505488u;
    SET_GPR_U32(ctx, 31, 0x505490u);
    ctx->pc = 0x5052E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5052E8u, 0x505488u, 0x505490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505490u;
label_505490:
    // 0x505490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_505494:
    // 0x505494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x505494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_505498:
    // 0x505498: 0x3e00008  jr          $ra
    ctx->pc = 0x505498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505498u;
        // 0x50549c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5054A0u;
}
