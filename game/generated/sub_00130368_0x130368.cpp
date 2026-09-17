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

// Function: sub_00130368
// Address: 0x130368 - 0x130488
void sub_00130368_0x130368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130368_0x130368");
#endif

    switch (ctx->pc) {
        case 0x130368u: goto label_130368;
        case 0x13036cu: goto label_13036c;
        case 0x130370u: goto label_130370;
        case 0x130374u: goto label_130374;
        case 0x130378u: goto label_130378;
        case 0x13037cu: goto label_13037c;
        case 0x130380u: goto label_130380;
        case 0x130384u: goto label_130384;
        case 0x130388u: goto label_130388;
        case 0x13038cu: goto label_13038c;
        case 0x130390u: goto label_130390;
        case 0x130394u: goto label_130394;
        case 0x130398u: goto label_130398;
        case 0x13039cu: goto label_13039c;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303a4u: goto label_1303a4;
        case 0x1303a8u: goto label_1303a8;
        case 0x1303acu: goto label_1303ac;
        case 0x1303b0u: goto label_1303b0;
        case 0x1303b4u: goto label_1303b4;
        case 0x1303b8u: goto label_1303b8;
        case 0x1303bcu: goto label_1303bc;
        case 0x1303c0u: goto label_1303c0;
        case 0x1303c4u: goto label_1303c4;
        case 0x1303c8u: goto label_1303c8;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303d0u: goto label_1303d0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303dcu: goto label_1303dc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303e4u: goto label_1303e4;
        case 0x1303e8u: goto label_1303e8;
        case 0x1303ecu: goto label_1303ec;
        case 0x1303f0u: goto label_1303f0;
        case 0x1303f4u: goto label_1303f4;
        case 0x1303f8u: goto label_1303f8;
        case 0x1303fcu: goto label_1303fc;
        case 0x130400u: goto label_130400;
        case 0x130404u: goto label_130404;
        case 0x130408u: goto label_130408;
        case 0x13040cu: goto label_13040c;
        case 0x130410u: goto label_130410;
        case 0x130414u: goto label_130414;
        case 0x130418u: goto label_130418;
        case 0x13041cu: goto label_13041c;
        case 0x130420u: goto label_130420;
        case 0x130424u: goto label_130424;
        case 0x130428u: goto label_130428;
        case 0x13042cu: goto label_13042c;
        case 0x130430u: goto label_130430;
        case 0x130434u: goto label_130434;
        case 0x130438u: goto label_130438;
        case 0x13043cu: goto label_13043c;
        case 0x130440u: goto label_130440;
        case 0x130444u: goto label_130444;
        case 0x130448u: goto label_130448;
        case 0x13044cu: goto label_13044c;
        case 0x130450u: goto label_130450;
        case 0x130454u: goto label_130454;
        case 0x130458u: goto label_130458;
        case 0x13045cu: goto label_13045c;
        case 0x130460u: goto label_130460;
        case 0x130464u: goto label_130464;
        case 0x130468u: goto label_130468;
        case 0x13046cu: goto label_13046c;
        case 0x130470u: goto label_130470;
        case 0x130474u: goto label_130474;
        case 0x130478u: goto label_130478;
        case 0x13047cu: goto label_13047c;
        case 0x130480u: goto label_130480;
        case 0x130484u: goto label_130484;
        default: break;
    }

    ctx->pc = 0x130368u;

label_130368:
    // 0x130368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13036c:
    // 0x13036c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_130370:
    // 0x130370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_130374:
    // 0x130374: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x130374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_130378:
    // 0x130378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13037c:
    // 0x13037c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_130380:
    if (ctx->pc == 0x130380u) {
        ctx->pc = 0x130380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13037Cu;
        // 0x130380: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130384u;
        goto label_130384;
    }
    ctx->pc = 0x13037Cu;
    {
        const bool branch_taken_0x13037c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13037Cu;
        // 0x130380: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13037c) {
            ctx->pc = 0x1303A4u;
            goto label_1303a4;
        }
    }
    ctx->pc = 0x130384u;
label_130384:
    // 0x130384: 0xc04c054  jal         func_130150
label_130388:
    if (ctx->pc == 0x130388u) {
        ctx->pc = 0x13038Cu;
        goto label_13038c;
    }
    ctx->pc = 0x130384u;
    SET_GPR_U32(ctx, 31, 0x13038Cu);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x130384u, 0x13038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13038Cu;
label_13038c:
    // 0x13038c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_130390:
    // 0x130390: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
label_130394:
    // 0x130394: 0x24a5f320  addiu       $a1, $a1, -0xCE0
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
label_130398:
    // 0x130398: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x130398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
label_13039c:
    // 0x13039c: 0xc0493ca  jal         func_124F28
label_1303a0:
    if (ctx->pc == 0x1303A0u) {
        ctx->pc = 0x1303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13039Cu;
        // 0x1303a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303A4u;
        goto label_1303a4;
    }
    ctx->pc = 0x13039Cu;
    SET_GPR_U32(ctx, 31, 0x1303A4u);
    ctx->pc = 0x1303A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13039Cu;
    // 0x1303a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x13039Cu, 0x1303A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A4u;
label_1303a4:
    // 0x1303a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1303a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1303a8:
    // 0x1303a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1303a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1303ac:
    // 0x1303ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1303acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1303b0:
    // 0x1303b0: 0x3e00008  jr          $ra
label_1303b4:
    if (ctx->pc == 0x1303B4u) {
        ctx->pc = 0x1303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303B0u;
        // 0x1303b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303B8u;
        goto label_1303b8;
    }
    ctx->pc = 0x1303B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303B0u;
        // 0x1303b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1303B8u;
label_1303b8:
    // 0x1303b8: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x1303b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_1303bc:
    // 0x1303bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1303bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1303c0:
    // 0x1303c0: 0x24634bf8  addiu       $v1, $v1, 0x4BF8
    ctx->pc = 0x1303c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19448));
label_1303c4:
    // 0x1303c4: 0x3e00008  jr          $ra
label_1303c8:
    if (ctx->pc == 0x1303C8u) {
        ctx->pc = 0x1303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C4u;
        // 0x1303c8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303CCu;
        goto label_1303cc;
    }
    ctx->pc = 0x1303C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C4u;
        // 0x1303c8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1303CCu;
label_1303cc:
    // 0x1303cc: 0x0  nop
    ctx->pc = 0x1303ccu;
    // NOP
label_1303d0:
    // 0x1303d0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1303d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1303d4:
    // 0x1303d4: 0x3e00008  jr          $ra
label_1303d8:
    if (ctx->pc == 0x1303D8u) {
        ctx->pc = 0x1303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D4u;
        // 0x1303d8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303DCu;
        goto label_1303dc;
    }
    ctx->pc = 0x1303D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D4u;
        // 0x1303d8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1303DCu;
label_1303dc:
    // 0x1303dc: 0x0  nop
    ctx->pc = 0x1303dcu;
    // NOP
label_1303e0:
    // 0x1303e0: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_1303e4:
    // 0x1303e4: 0x3e00008  jr          $ra
label_1303e8:
    if (ctx->pc == 0x1303E8u) {
        ctx->pc = 0x1303E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303E4u;
        // 0x1303e8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303ECu;
        goto label_1303ec;
    }
    ctx->pc = 0x1303E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303E4u;
        // 0x1303e8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1303ECu;
label_1303ec:
    // 0x1303ec: 0x0  nop
    ctx->pc = 0x1303ecu;
    // NOP
label_1303f0:
    // 0x1303f0: 0x30820006  andi        $v0, $a0, 0x6
    ctx->pc = 0x1303f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_1303f4:
    // 0x1303f4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1303f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1303f8:
    // 0x1303f8: 0x3e00008  jr          $ra
label_1303fc:
    if (ctx->pc == 0x1303FCu) {
        ctx->pc = 0x1303FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303F8u;
        // 0x1303fc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130400u;
        goto label_130400;
    }
    ctx->pc = 0x1303F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303F8u;
        // 0x1303fc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130400u;
label_130400:
    // 0x130400: 0x30820005  andi        $v0, $a0, 0x5
    ctx->pc = 0x130400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)5);
label_130404:
    // 0x130404: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x130404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_130408:
    // 0x130408: 0x3e00008  jr          $ra
label_13040c:
    if (ctx->pc == 0x13040Cu) {
        ctx->pc = 0x13040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130408u;
        // 0x13040c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130410u;
        goto label_130410;
    }
    ctx->pc = 0x130408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130408u;
        // 0x13040c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130410u;
label_130410:
    // 0x130410: 0x30820005  andi        $v0, $a0, 0x5
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)5);
label_130414:
    // 0x130414: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_130418:
    // 0x130418: 0x3e00008  jr          $ra
label_13041c:
    if (ctx->pc == 0x13041Cu) {
        ctx->pc = 0x13041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130418u;
        // 0x13041c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130420u;
        goto label_130420;
    }
    ctx->pc = 0x130418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130418u;
        // 0x13041c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130420u;
label_130420:
    // 0x130420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_130424:
    // 0x130424: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x130424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_130428:
    // 0x130428: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x130428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_13042c:
    // 0x13042c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x13042cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_130430:
    // 0x130430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_130434:
    // 0x130434: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x130434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130438:
    // 0x130438: 0x5200007  bltz        $t1, . + 4 + (0x7 << 2)
label_13043c:
    if (ctx->pc == 0x13043Cu) {
        ctx->pc = 0x13043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130438u;
        // 0x13043c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130440u;
        goto label_130440;
    }
    ctx->pc = 0x130438u;
    {
        const bool branch_taken_0x130438 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x13043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130438u;
        // 0x13043c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130438) {
            ctx->pc = 0x130458u;
            goto label_130458;
        }
    }
    ctx->pc = 0x130440u;
label_130440:
    // 0x130440: 0x492026  xor         $a0, $v0, $t1
    ctx->pc = 0x130440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_130444:
    // 0x130444: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_130448:
    // 0x130448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13044c:
    // 0x13044c: 0x1000000b  b           . + 4 + (0xB << 2)
label_130450:
    if (ctx->pc == 0x130450u) {
        ctx->pc = 0x130450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13044Cu;
        // 0x130450: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130454u;
        goto label_130454;
    }
    ctx->pc = 0x13044Cu;
    {
        const bool branch_taken_0x13044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13044Cu;
        // 0x130450: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13044c) {
            ctx->pc = 0x13047Cu;
            goto label_13047c;
        }
    }
    ctx->pc = 0x130454u;
label_130454:
    // 0x130454: 0x0  nop
    ctx->pc = 0x130454u;
    // NOP
label_130458:
    // 0x130458: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x130458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_13045c:
    // 0x13045c: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
label_130460:
    if (ctx->pc == 0x130460u) {
        ctx->pc = 0x130460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13045Cu;
        // 0x130460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130464u;
        goto label_130464;
    }
    ctx->pc = 0x13045Cu;
    {
        const bool branch_taken_0x13045c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x130460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13045Cu;
        // 0x130460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13045c) {
            ctx->pc = 0x13047Cu;
            goto label_13047c;
        }
    }
    ctx->pc = 0x130464u;
label_130464:
    // 0x130464: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x130464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_130468:
    // 0x130468: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x130468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_13046c:
    // 0x13046c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_130470:
    // 0x130470: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x130470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_130474:
    // 0x130474: 0x40f809  jalr        $v0
label_130478:
    if (ctx->pc == 0x130478u) {
        ctx->pc = 0x130478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130474u;
        // 0x130478: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13047Cu;
        goto label_13047c;
    }
    ctx->pc = 0x130474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13047Cu);
        ctx->pc = 0x130478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130474u;
        // 0x130478: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130474u, 0x13047Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13047Cu;
label_13047c:
    // 0x13047c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13047cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130480:
    // 0x130480: 0x3e00008  jr          $ra
label_130484:
    if (ctx->pc == 0x130484u) {
        ctx->pc = 0x130484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130480u;
        // 0x130484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130488u;
        goto label_fallthrough_0x130480;
    }
    ctx->pc = 0x130480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130480u;
        // 0x130484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x130480:
    ctx->pc = 0x130488u;
}
