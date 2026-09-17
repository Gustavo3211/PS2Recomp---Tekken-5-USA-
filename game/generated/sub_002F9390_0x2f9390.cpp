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

// Function: sub_002F9390
// Address: 0x2f9390 - 0x2f9520
void sub_002F9390_0x2f9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9390_0x2f9390");
#endif

    switch (ctx->pc) {
        case 0x2f93d4u: goto label_2f93d4;
        case 0x2f9408u: goto label_2f9408;
        case 0x2f944cu: goto label_2f944c;
        case 0x2f94acu: goto label_2f94ac;
        case 0x2f94bcu: goto label_2f94bc;
        case 0x2f94ecu: goto label_2f94ec;
        case 0x2f94f4u: goto label_2f94f4;
        case 0x2f94fcu: goto label_2f94fc;
        default: break;
    }

    ctx->pc = 0x2f9390u;

    // 0x2f9390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f9390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f9394: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9398: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f9398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f939c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f939cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f93a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f93a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93a4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2f93a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2f93a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f93a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f93ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f93acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f93b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f93b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f93b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f93b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f93bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f93c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f93c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f93c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f93c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f93c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f93cc: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2F93CCu;
    SET_GPR_U32(ctx, 31, 0x2F93D4u);
    ctx->pc = 0x2F93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F93CCu;
    // 0x2f93d0: 0x2444c450  addiu       $a0, $v0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2F93CCu, 0x2F93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F93D4u;
label_2f93d4:
    // 0x2f93d4: 0x26450140  addiu       $a1, $s2, 0x140
    ctx->pc = 0x2f93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2f93d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f93dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F93DCu;
    {
        const bool branch_taken_0x2f93dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f93dc) {
            ctx->pc = 0x2F93E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F93DCu;
            // 0x2f93e0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F93F8u;
            goto label_2f93f8;
        }
    }
    ctx->pc = 0x2F93E4u;
    // 0x2f93e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f93e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f93ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F93ECu;
    {
        const bool branch_taken_0x2f93ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f93ec) {
            ctx->pc = 0x2F9400u;
            goto label_2f9400;
        }
    }
    ctx->pc = 0x2F93F4u;
    // 0x2f93f4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f93f8:
    // 0x2f93f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f93f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9400:
    // 0x2f9400: 0xc0bb632  jal         func_2ED8C8
    ctx->pc = 0x2F9400u;
    SET_GPR_U32(ctx, 31, 0x2F9408u);
    ctx->pc = 0x2ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED8C8u, 0x2F9400u, 0x2F9408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9408u;
label_2f9408:
    // 0x2f9408: 0x264400b8  addiu       $a0, $s2, 0xB8
    ctx->pc = 0x2f9408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x2f940c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f9410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9410u;
    {
        const bool branch_taken_0x2f9410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9410u;
        // 0x2f9414: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9410) {
            ctx->pc = 0x2F9428u;
            goto label_2f9428;
        }
    }
    ctx->pc = 0x2F9418u;
    // 0x2f9418: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f941c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9420: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9420u;
    {
        const bool branch_taken_0x2f9420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9420u;
        // 0x2f9424: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9420) {
            ctx->pc = 0x2F9438u;
            goto label_2f9438;
        }
    }
    ctx->pc = 0x2F9428u;
label_2f9428:
    // 0x2f9428: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f9428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f942c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9430: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f9430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f9434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9438:
    // 0x2f9438: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f9438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2f943c: 0xaca2015c  sw          $v0, 0x15C($a1)
    ctx->pc = 0x2f943cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 2));
    // 0x2f9440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9444: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2F9444u;
    SET_GPR_U32(ctx, 31, 0x2F944Cu);
    ctx->pc = 0x2F9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9444u;
    // 0x2f9448: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2F9444u, 0x2F944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F944Cu;
label_2f944c:
    // 0x2f944c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2f944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f9450: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9454: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9454u;
    {
        const bool branch_taken_0x2f9454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9454) {
            ctx->pc = 0x2F9458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9454u;
            // 0x2f9458: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9470u;
            goto label_2f9470;
        }
    }
    ctx->pc = 0x2F945Cu;
    // 0x2f945c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9460: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9464: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9464u;
    {
        const bool branch_taken_0x2f9464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9464u;
        // 0x2f9468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9464) {
            ctx->pc = 0x2F9478u;
            goto label_2f9478;
        }
    }
    ctx->pc = 0x2F946Cu;
    // 0x2f946c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f946cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9470:
    // 0x2f9470: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f9470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9474: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9478:
    // 0x2f9478: 0x26500150  addiu       $s0, $s2, 0x150
    ctx->pc = 0x2f9478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2f947c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9480: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9480u;
    {
        const bool branch_taken_0x2f9480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9480) {
            ctx->pc = 0x2F9484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9480u;
            // 0x2f9484: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F949Cu;
            goto label_2f949c;
        }
    }
    ctx->pc = 0x2F9488u;
    // 0x2f9488: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f948c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f9490: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9490u;
    {
        const bool branch_taken_0x2f9490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9490) {
            ctx->pc = 0x2F94A4u;
            goto label_2f94a4;
        }
    }
    ctx->pc = 0x2F9498u;
    // 0x2f9498: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f9498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f949c:
    // 0x2f949c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f94a4:
    // 0x2f94a4: 0xc0bdee8  jal         func_2F7BA0
    ctx->pc = 0x2F94A4u;
    SET_GPR_U32(ctx, 31, 0x2F94ACu);
    ctx->pc = 0x2F7BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7BA0u, 0x2F94A4u, 0x2F94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94ACu;
label_2f94ac:
    // 0x2f94ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f94acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f94b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94b4: 0xc090280  jal         func_240A00
    ctx->pc = 0x2F94B4u;
    SET_GPR_U32(ctx, 31, 0x2F94BCu);
    ctx->pc = 0x2F94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94B4u;
    // 0x2f94b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240A00u, 0x2F94B4u, 0x2F94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94BCu;
label_2f94bc:
    // 0x2f94bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f94c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F94C0u;
    {
        const bool branch_taken_0x2f94c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f94c0) {
            ctx->pc = 0x2F94C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F94C0u;
            // 0x2f94c4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F94DCu;
            goto label_2f94dc;
        }
    }
    ctx->pc = 0x2F94C8u;
    // 0x2f94c8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f94cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f94d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F94D0u;
    {
        const bool branch_taken_0x2f94d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f94d0) {
            ctx->pc = 0x2F94E4u;
            goto label_2f94e4;
        }
    }
    ctx->pc = 0x2F94D8u;
    // 0x2f94d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f94dc:
    // 0x2f94dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f94e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f94e4:
    // 0x2f94e4: 0xc0bdee8  jal         func_2F7BA0
    ctx->pc = 0x2F94E4u;
    SET_GPR_U32(ctx, 31, 0x2F94ECu);
    ctx->pc = 0x2F7BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7BA0u, 0x2F94E4u, 0x2F94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94ECu;
label_2f94ec:
    // 0x2f94ec: 0xc0b69ca  jal         func_2DA728
    ctx->pc = 0x2F94ECu;
    SET_GPR_U32(ctx, 31, 0x2F94F4u);
    ctx->pc = 0x2F94F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94ECu;
    // 0x2f94f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA728u, 0x2F94ECu, 0x2F94F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94F4u;
label_2f94f4:
    // 0x2f94f4: 0xc0b6b36  jal         func_2DACD8
    ctx->pc = 0x2F94F4u;
    SET_GPR_U32(ctx, 31, 0x2F94FCu);
    ctx->pc = 0x2DACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACD8u, 0x2F94F4u, 0x2F94FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94FCu;
label_2f94fc:
    // 0x2f94fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9504: 0xae430160  sw          $v1, 0x160($s2)
    ctx->pc = 0x2f9504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
    // 0x2f9508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f950c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f950cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9510: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f9510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f9514: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9514u;
        // 0x2f9518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F951Cu;
    // 0x2f951c: 0x0  nop
    ctx->pc = 0x2f951cu;
    // NOP
    ctx->pc = 0x2f9520u;
}
