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

// Function: sub_002F0348
// Address: 0x2f0348 - 0x2f04f8
void sub_002F0348_0x2f0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0348_0x2f0348");
#endif

    switch (ctx->pc) {
        case 0x2f0348u: goto label_2f0348;
        case 0x2f034cu: goto label_2f034c;
        case 0x2f0350u: goto label_2f0350;
        case 0x2f0354u: goto label_2f0354;
        case 0x2f0358u: goto label_2f0358;
        case 0x2f035cu: goto label_2f035c;
        case 0x2f0360u: goto label_2f0360;
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0368u: goto label_2f0368;
        case 0x2f036cu: goto label_2f036c;
        case 0x2f0370u: goto label_2f0370;
        case 0x2f0374u: goto label_2f0374;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f037cu: goto label_2f037c;
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        default: break;
    }

    ctx->pc = 0x2f0348u;

label_2f0348:
    // 0x2f0348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f034c:
    // 0x2f034c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0350:
    // 0x2f0350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f0354:
    // 0x2f0354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0358:
    // 0x2f0358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f035c:
    // 0x2f035c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f0360:
    // 0x2f0360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f0360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2f0364:
    // 0x2f0364: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x2f0364u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2f0368:
    // 0x2f0368: 0x12220027  beq         $s1, $v0, . + 4 + (0x27 << 2)
label_2f036c:
    if (ctx->pc == 0x2F036Cu) {
        ctx->pc = 0x2F036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0368u;
        // 0x2f036c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0370u;
        goto label_2f0370;
    }
    ctx->pc = 0x2F0368u;
    {
        const bool branch_taken_0x2f0368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0368u;
        // 0x2f036c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0368) {
            ctx->pc = 0x2F0408u;
            goto label_2f0408;
        }
    }
    ctx->pc = 0x2F0370u;
label_2f0370:
    // 0x2f0370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f0374:
    if (ctx->pc == 0x2F0374u) {
        ctx->pc = 0x2F0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0370u;
        // 0x2f0374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0378u;
        goto label_2f0378;
    }
    ctx->pc = 0x2F0370u;
    {
        const bool branch_taken_0x2f0370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0370u;
        // 0x2f0374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0370) {
            ctx->pc = 0x2F0388u;
            goto label_2f0388;
        }
    }
    ctx->pc = 0x2F0378u;
label_2f0378:
    // 0x2f0378: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2f037c:
    if (ctx->pc == 0x2F037Cu) {
        ctx->pc = 0x2F037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0378u;
        // 0x2f037c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0380u;
        goto label_2f0380;
    }
    ctx->pc = 0x2F0378u;
    {
        const bool branch_taken_0x2f0378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0378) {
            ctx->pc = 0x2F037Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0378u;
            // 0x2f037c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F03A0u;
            goto label_2f03a0;
        }
    }
    ctx->pc = 0x2F0380u;
label_2f0380:
    // 0x2f0380: 0x10000054  b           . + 4 + (0x54 << 2)
label_2f0384:
    if (ctx->pc == 0x2F0384u) {
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0380u;
        // 0x2f0384: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0388u;
        goto label_2f0388;
    }
    ctx->pc = 0x2F0380u;
    {
        const bool branch_taken_0x2f0380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0380u;
        // 0x2f0384: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0380) {
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F0388u;
label_2f0388:
    // 0x2f0388: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
label_2f038c:
    if (ctx->pc == 0x2F038Cu) {
        ctx->pc = 0x2F038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0388u;
        // 0x2f038c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0390u;
        goto label_2f0390;
    }
    ctx->pc = 0x2F0388u;
    {
        const bool branch_taken_0x2f0388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0388u;
        // 0x2f038c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0388) {
            ctx->pc = 0x2F04B0u;
            goto label_2f04b0;
        }
    }
    ctx->pc = 0x2F0390u;
label_2f0390:
    // 0x2f0390: 0x52230053  beql        $s1, $v1, . + 4 + (0x53 << 2)
label_2f0394:
    if (ctx->pc == 0x2F0394u) {
        ctx->pc = 0x2F0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0390u;
        // 0x2f0394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0398u;
        goto label_2f0398;
    }
    ctx->pc = 0x2F0390u;
    {
        const bool branch_taken_0x2f0390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f0390) {
            ctx->pc = 0x2F0394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0390u;
            // 0x2f0394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04E0u;
            goto label_2f04e0;
        }
    }
    ctx->pc = 0x2F0398u;
label_2f0398:
    // 0x2f0398: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2f039c:
    if (ctx->pc == 0x2F039Cu) {
        ctx->pc = 0x2F039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0398u;
        // 0x2f039c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03A0u;
        goto label_2f03a0;
    }
    ctx->pc = 0x2F0398u;
    {
        const bool branch_taken_0x2f0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0398u;
        // 0x2f039c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0398) {
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F03A0u;
label_2f03a0:
    // 0x2f03a0: 0xa2000130  sb          $zero, 0x130($s0)
    ctx->pc = 0x2f03a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 0));
label_2f03a4:
    // 0x2f03a4: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f03a8:
    // 0x2f03a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f03a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f03ac:
    // 0x2f03ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f03b0:
    // 0x2f03b0: 0x60f809  jalr        $v1
label_2f03b4:
    if (ctx->pc == 0x2F03B4u) {
        ctx->pc = 0x2F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B0u;
        // 0x2f03b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03B8u;
        goto label_2f03b8;
    }
    ctx->pc = 0x2F03B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F03B8u);
        ctx->pc = 0x2F03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03B0u;
        // 0x2f03b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F03B0u, 0x2F03B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F03B8u;
label_2f03b8:
    // 0x2f03b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f03bc:
    // 0x2f03bc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2f03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2f03c0:
    // 0x2f03c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f03c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f03c4:
    // 0x2f03c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f03c8:
    // 0x2f03c8: 0x60f809  jalr        $v1
label_2f03cc:
    if (ctx->pc == 0x2F03CCu) {
        ctx->pc = 0x2F03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03C8u;
        // 0x2f03cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03D0u;
        goto label_2f03d0;
    }
    ctx->pc = 0x2F03C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F03D0u);
        ctx->pc = 0x2F03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03C8u;
        // 0x2f03cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F03C8u, 0x2F03D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F03D0u;
label_2f03d0:
    // 0x2f03d0: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x2f03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2f03d4:
    // 0x2f03d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f03d8:
    if (ctx->pc == 0x2F03D8u) {
        ctx->pc = 0x2F03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D4u;
        // 0x2f03d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03DCu;
        goto label_2f03dc;
    }
    ctx->pc = 0x2F03D4u;
    {
        const bool branch_taken_0x2f03d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03D4u;
        // 0x2f03d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03d4) {
            ctx->pc = 0x2F03E8u;
            goto label_2f03e8;
        }
    }
    ctx->pc = 0x2F03DCu;
label_2f03dc:
    // 0x2f03dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f03e0:
    // 0x2f03e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f03e4:
    if (ctx->pc == 0x2F03E4u) {
        ctx->pc = 0x2F03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E0u;
        // 0x2f03e4: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F03E8u;
        goto label_2f03e8;
    }
    ctx->pc = 0x2F03E0u;
    {
        const bool branch_taken_0x2f03e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03E0u;
        // 0x2f03e4: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03e0) {
            ctx->pc = 0x2F03F0u;
            goto label_2f03f0;
        }
    }
    ctx->pc = 0x2F03E8u;
label_2f03e8:
    // 0x2f03e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f03ec:
    // 0x2f03ec: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2f03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2f03f0:
    // 0x2f03f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f03f4:
    // 0x2f03f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f03f8:
    // 0x2f03f8: 0x60f809  jalr        $v1
label_2f03fc:
    if (ctx->pc == 0x2F03FCu) {
        ctx->pc = 0x2F03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F8u;
        // 0x2f03fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0400u;
        goto label_2f0400;
    }
    ctx->pc = 0x2F03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0400u);
        ctx->pc = 0x2F03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F8u;
        // 0x2f03fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F03F8u, 0x2F0400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0400u;
label_2f0400:
    // 0x2f0400: 0x10000034  b           . + 4 + (0x34 << 2)
label_2f0404:
    if (ctx->pc == 0x2F0404u) {
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0408u;
        goto label_2f0408;
    }
    ctx->pc = 0x2F0400u;
    {
        const bool branch_taken_0x2f0400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0400u;
        // 0x2f0404: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0400) {
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F0408u;
label_2f0408:
    // 0x2f0408: 0xc0bbfa6  jal         func_2EFE98
label_2f040c:
    if (ctx->pc == 0x2F040Cu) {
        ctx->pc = 0x2F0410u;
        goto label_2f0410;
    }
    ctx->pc = 0x2F0408u;
    SET_GPR_U32(ctx, 31, 0x2F0410u);
    ctx->pc = 0x2EFE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFE98u, 0x2F0408u, 0x2F0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0410u;
label_2f0410:
    // 0x2f0410: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_2f0414:
    if (ctx->pc == 0x2F0414u) {
        ctx->pc = 0x2F0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0410u;
        // 0x2f0414: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0418u;
        goto label_2f0418;
    }
    ctx->pc = 0x2F0410u;
    {
        const bool branch_taken_0x2f0410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0410) {
            ctx->pc = 0x2F0414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0410u;
            // 0x2f0414: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F0418u;
label_2f0418:
    // 0x2f0418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f041c:
    // 0x2f041c: 0xc0bc0c8  jal         func_2F0320
label_2f0420:
    if (ctx->pc == 0x2F0420u) {
        ctx->pc = 0x2F0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F041Cu;
        // 0x2f0420: 0x26120130  addiu       $s2, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0424u;
        goto label_2f0424;
    }
    ctx->pc = 0x2F041Cu;
    SET_GPR_U32(ctx, 31, 0x2F0424u);
    ctx->pc = 0x2F0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F041Cu;
    // 0x2f0420: 0x26120130  addiu       $s2, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0320u, 0x2F041Cu, 0x2F0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0424u;
label_2f0424:
    // 0x2f0424: 0xae110100  sw          $s1, 0x100($s0)
    ctx->pc = 0x2f0424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 17));
label_2f0428:
    // 0x2f0428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f042c:
    // 0x2f042c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2f042cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f0430:
    // 0x2f0430: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2f0434:
    if (ctx->pc == 0x2F0434u) {
        ctx->pc = 0x2F0438u;
        goto label_2f0438;
    }
    ctx->pc = 0x2F0430u;
    {
        const bool branch_taken_0x2f0430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f0430) {
            ctx->pc = 0x2F0440u;
            goto label_2f0440;
        }
    }
    ctx->pc = 0x2F0438u;
label_2f0438:
    // 0x2f0438: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2f0438u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f043c:
    // 0x2f043c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f043cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0440:
    // 0x2f0440: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2f0444:
    if (ctx->pc == 0x2F0444u) {
        ctx->pc = 0x2F0448u;
        goto label_2f0448;
    }
    ctx->pc = 0x2F0440u;
    {
        const bool branch_taken_0x2f0440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0440) {
            ctx->pc = 0x2F0464u;
            goto label_2f0464;
        }
    }
    ctx->pc = 0x2F0448u;
label_2f0448:
    // 0x2f0448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f044c:
    // 0x2f044c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f0450:
    // 0x2f0450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0454:
    // 0x2f0454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0458:
    // 0x2f0458: 0x60f809  jalr        $v1
label_2f045c:
    if (ctx->pc == 0x2F045Cu) {
        ctx->pc = 0x2F045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0458u;
        // 0x2f045c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0460u;
        goto label_2f0460;
    }
    ctx->pc = 0x2F0458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0460u);
        ctx->pc = 0x2F045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0458u;
        // 0x2f045c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0458u, 0x2F0460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0460u;
label_2f0460:
    // 0x2f0460: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2f0460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f0464:
    // 0x2f0464: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
label_2f0468:
    if (ctx->pc == 0x2F0468u) {
        ctx->pc = 0x2F0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0464u;
        // 0x2f0468: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F046Cu;
        goto label_2f046c;
    }
    ctx->pc = 0x2F0464u;
    {
        const bool branch_taken_0x2f0464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0464) {
            ctx->pc = 0x2F0468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0464u;
            // 0x2f0468: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F046Cu;
label_2f046c:
    // 0x2f046c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f0470:
    // 0x2f0470: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2f0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2f0474:
    // 0x2f0474: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0478:
    // 0x2f0478: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f047c:
    // 0x2f047c: 0x60f809  jalr        $v1
label_2f0480:
    if (ctx->pc == 0x2F0480u) {
        ctx->pc = 0x2F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F047Cu;
        // 0x2f0480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0484u;
        goto label_2f0484;
    }
    ctx->pc = 0x2F047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0484u);
        ctx->pc = 0x2F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F047Cu;
        // 0x2f0480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F047Cu, 0x2F0484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0484u;
label_2f0484:
    // 0x2f0484: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2f0484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f0488:
    // 0x2f0488: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_2f048c:
    if (ctx->pc == 0x2F048Cu) {
        ctx->pc = 0x2F048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0488u;
        // 0x2f048c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0490u;
        goto label_2f0490;
    }
    ctx->pc = 0x2F0488u;
    {
        const bool branch_taken_0x2f0488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0488) {
            ctx->pc = 0x2F048Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0488u;
            // 0x2f048c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F0490u;
label_2f0490:
    // 0x2f0490: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f0490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f0494:
    // 0x2f0494: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2f0494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2f0498:
    // 0x2f0498: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f049c:
    // 0x2f049c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f04a0:
    // 0x2f04a0: 0x60f809  jalr        $v1
label_2f04a4:
    if (ctx->pc == 0x2F04A4u) {
        ctx->pc = 0x2F04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A0u;
        // 0x2f04a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04A8u;
        goto label_2f04a8;
    }
    ctx->pc = 0x2F04A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F04A8u);
        ctx->pc = 0x2F04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A0u;
        // 0x2f04a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04A0u, 0x2F04A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F04A8u;
label_2f04a8:
    // 0x2f04a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f04ac:
    if (ctx->pc == 0x2F04ACu) {
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04B0u;
        goto label_2f04b0;
    }
    ctx->pc = 0x2F04A8u;
    {
        const bool branch_taken_0x2f04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A8u;
        // 0x2f04ac: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04a8) {
            ctx->pc = 0x2F04D4u;
            goto label_2f04d4;
        }
    }
    ctx->pc = 0x2F04B0u;
label_2f04b0:
    // 0x2f04b0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2f04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2f04b4:
    // 0x2f04b4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2f04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2f04b8:
    // 0x2f04b8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2f04bc:
    // 0x2f04bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f04c0:
    // 0x2f04c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f04c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f04c4:
    // 0x2f04c4: 0x10a40002  beq         $a1, $a0, . + 4 + (0x2 << 2)
label_2f04c8:
    if (ctx->pc == 0x2F04C8u) {
        ctx->pc = 0x2F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C4u;
        // 0x2f04c8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04CCu;
        goto label_2f04cc;
    }
    ctx->pc = 0x2F04C4u;
    {
        const bool branch_taken_0x2f04c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04C4u;
        // 0x2f04c8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f04c4) {
            ctx->pc = 0x2F04D0u;
            goto label_2f04d0;
        }
    }
    ctx->pc = 0x2F04CCu;
label_2f04cc:
    // 0x2f04cc: 0xae110100  sw          $s1, 0x100($s0)
    ctx->pc = 0x2f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 17));
label_2f04d0:
    // 0x2f04d0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2f04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2f04d4:
    // 0x2f04d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f04d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04d8:
    // 0x2f04d8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2f04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2f04dc:
    // 0x2f04dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f04dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f04e0:
    // 0x2f04e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f04e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f04e4:
    // 0x2f04e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f04e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f04e8:
    // 0x2f04e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f04e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f04ec:
    // 0x2f04ec: 0x3e00008  jr          $ra
label_2f04f0:
    if (ctx->pc == 0x2F04F0u) {
        ctx->pc = 0x2F04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04ECu;
        // 0x2f04f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04F4u;
        goto label_2f04f4;
    }
    ctx->pc = 0x2F04ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04ECu;
        // 0x2f04f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04F4u;
label_2f04f4:
    // 0x2f04f4: 0x0  nop
    ctx->pc = 0x2f04f4u;
    // NOP
    ctx->pc = 0x2f04f8u;
}
