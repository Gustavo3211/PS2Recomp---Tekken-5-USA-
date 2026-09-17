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

// Function: sub_0035522C
// Address: 0x35522c - 0x3553a0
void sub_0035522C_0x35522c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035522C_0x35522c");
#endif

    ctx->pc = 0x35522cu;

    // 0x35522c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35522cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355230: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x355230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x355234: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355234u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355238: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355238u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35523c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35523cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x355240: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355244: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x355244u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355248: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x355248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x35524c: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x35524Cu;
    {
        const bool branch_taken_0x35524c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35524c) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x355254u;
    // 0x355254: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35525c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x35525cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355260: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x355260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x355264: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x355264u;
    {
        const bool branch_taken_0x355264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355264) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x35526Cu;
    // 0x35526c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355270: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x355270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x355274: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x355274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355278: 0x28420061  slti        $v0, $v0, 0x61
    ctx->pc = 0x355278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x35527c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x35527Cu;
    {
        const bool branch_taken_0x35527c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35527c) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x355284u;
    // 0x355284: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355288: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x355288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x35528c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x35528cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355290: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x355290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x355294: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x355294u;
    {
        const bool branch_taken_0x355294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355294) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x35529Cu;
    // 0x35529c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3552a0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x3552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3552a4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x3552a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3552a8: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x3552a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3552ac: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3552ACu;
    {
        const bool branch_taken_0x3552ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3552ac) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x3552B4u;
    // 0x3552b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3552b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3552b8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x3552b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3552bc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x3552bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3552c0: 0x28420034  slti        $v0, $v0, 0x34
    ctx->pc = 0x3552c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x3552c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3552C4u;
    {
        const bool branch_taken_0x3552c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3552c4) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x3552CCu;
    // 0x3552cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3552ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3552d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3552d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3552d4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3552d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3552d8: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x3552d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3552dc: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3552DCu;
    {
        const bool branch_taken_0x3552dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3552dc) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x3552E4u;
    // 0x3552e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3552e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3552e8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3552e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3552ec: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x3552ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3552f0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3552F0u;
    {
        const bool branch_taken_0x3552f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3552f0) {
            ctx->pc = 0x355388u;
            goto label_355388;
        }
    }
    ctx->pc = 0x3552F8u;
    // 0x3552f8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x3552f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3552fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3552fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355300: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x355300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x355304: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x355304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355308: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x355308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x35530c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35530cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x355310: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x355310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355314: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355318: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x355318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x35531c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x35531cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355320: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x355320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x355324: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x355324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x355328: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35532c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355330: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x355330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x355334: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355338: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x355338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35533c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35533Cu;
    {
        const bool branch_taken_0x35533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35533c) {
            ctx->pc = 0x35536Cu;
            goto label_35536c;
        }
    }
    ctx->pc = 0x355344u;
    // 0x355344: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355348: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355348u;
    {
        const bool branch_taken_0x355348 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x355348) {
            ctx->pc = 0x35536Cu;
            goto label_35536c;
        }
    }
    ctx->pc = 0x355350u;
    // 0x355350: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355354: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x355354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x355358: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x355358u;
    {
        const bool branch_taken_0x355358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355358) {
            ctx->pc = 0x355378u;
            goto label_355378;
        }
    }
    ctx->pc = 0x355360u;
    // 0x355360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355364: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x355364u;
    {
        const bool branch_taken_0x355364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355364) {
            ctx->pc = 0x35538Cu;
            goto label_35538c;
        }
    }
    ctx->pc = 0x35536Cu;
label_35536c:
    // 0x35536c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35536cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x355370u;
    {
        const bool branch_taken_0x355370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355370) {
            ctx->pc = 0x35538Cu;
            goto label_35538c;
        }
    }
    ctx->pc = 0x355378u;
label_355378:
    // 0x355378: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x35537c: 0x2442bb58  addiu       $v0, $v0, -0x44A8
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949720));
    // 0x355380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355380u;
    {
        const bool branch_taken_0x355380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355380) {
            ctx->pc = 0x35538Cu;
            goto label_35538c;
        }
    }
    ctx->pc = 0x355388u;
label_355388:
    // 0x355388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35538c:
    // 0x35538c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35538cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355390: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x355390u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355394: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355398: 0x3e00008  jr          $ra
    ctx->pc = 0x355398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3553A0u;
}
