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

// Function: sub_00324408
// Address: 0x324408 - 0x3244c8
void sub_00324408_0x324408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324408_0x324408");
#endif

    switch (ctx->pc) {
        case 0x324408u: goto label_324408;
        case 0x32440cu: goto label_32440c;
        case 0x324410u: goto label_324410;
        case 0x324414u: goto label_324414;
        case 0x324418u: goto label_324418;
        case 0x32441cu: goto label_32441c;
        case 0x324420u: goto label_324420;
        case 0x324424u: goto label_324424;
        case 0x324428u: goto label_324428;
        case 0x32442cu: goto label_32442c;
        case 0x324430u: goto label_324430;
        case 0x324434u: goto label_324434;
        case 0x324438u: goto label_324438;
        case 0x32443cu: goto label_32443c;
        case 0x324440u: goto label_324440;
        case 0x324444u: goto label_324444;
        case 0x324448u: goto label_324448;
        case 0x32444cu: goto label_32444c;
        case 0x324450u: goto label_324450;
        case 0x324454u: goto label_324454;
        case 0x324458u: goto label_324458;
        case 0x32445cu: goto label_32445c;
        case 0x324460u: goto label_324460;
        case 0x324464u: goto label_324464;
        case 0x324468u: goto label_324468;
        case 0x32446cu: goto label_32446c;
        case 0x324470u: goto label_324470;
        case 0x324474u: goto label_324474;
        case 0x324478u: goto label_324478;
        case 0x32447cu: goto label_32447c;
        case 0x324480u: goto label_324480;
        case 0x324484u: goto label_324484;
        case 0x324488u: goto label_324488;
        case 0x32448cu: goto label_32448c;
        case 0x324490u: goto label_324490;
        case 0x324494u: goto label_324494;
        case 0x324498u: goto label_324498;
        case 0x32449cu: goto label_32449c;
        case 0x3244a0u: goto label_3244a0;
        case 0x3244a4u: goto label_3244a4;
        case 0x3244a8u: goto label_3244a8;
        case 0x3244acu: goto label_3244ac;
        case 0x3244b0u: goto label_3244b0;
        case 0x3244b4u: goto label_3244b4;
        case 0x3244b8u: goto label_3244b8;
        case 0x3244bcu: goto label_3244bc;
        case 0x3244c0u: goto label_3244c0;
        case 0x3244c4u: goto label_3244c4;
        default: break;
    }

    ctx->pc = 0x324408u;

label_324408:
    // 0x324408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32440c:
    // 0x32440c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x32440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_324410:
    // 0x324410: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x324410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_324414:
    // 0x324414: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x324414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_324418:
    // 0x324418: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x324418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_32441c:
    // 0x32441c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x32441cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_324420:
    // 0x324420: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
label_324424:
    // 0x324424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x324424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_324428:
    // 0x324428: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x324428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_32442c:
    // 0x32442c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x32442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_324430:
    // 0x324430: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x324430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_324434:
    // 0x324434: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x324434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_324438:
    // 0x324438: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x324438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32443c:
    // 0x32443c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x32443cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_324440:
    // 0x324440: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324444:
    // 0x324444: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x324444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
label_324448:
    // 0x324448: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_32444c:
    // 0x32444c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x32444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_324450:
    // 0x324450: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x324450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_324454:
    // 0x324454: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x324454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_324458:
    // 0x324458: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x324458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32445c:
    // 0x32445c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32445cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_324460:
    // 0x324460: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x324460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_324464:
    // 0x324464: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x324464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324468:
    // 0x324468: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_32446c:
    if (ctx->pc == 0x32446Cu) {
        ctx->pc = 0x32446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324468u;
        // 0x32446c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324470u;
        goto label_324470;
    }
    ctx->pc = 0x324468u;
    {
        const bool branch_taken_0x324468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324468u;
        // 0x32446c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324468) {
            ctx->pc = 0x3244ACu;
            goto label_3244ac;
        }
    }
    ctx->pc = 0x324470u;
label_324470:
    // 0x324470: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x324470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_324474:
    // 0x324474: 0x0  nop
    ctx->pc = 0x324474u;
    // NOP
label_324478:
    // 0x324478: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x324478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32447c:
    // 0x32447c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_324480:
    // 0x324480: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x324480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_324484:
    // 0x324484: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324488:
    // 0x324488: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x324488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32448c:
    // 0x32448c: 0x60f809  jalr        $v1
label_324490:
    if (ctx->pc == 0x324490u) {
        ctx->pc = 0x324490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32448Cu;
        // 0x324490: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324494u;
        goto label_324494;
    }
    ctx->pc = 0x32448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x324494u);
        ctx->pc = 0x324490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32448Cu;
        // 0x324490: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32448Cu, 0x324494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324494u;
label_324494:
    // 0x324494: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324498:
    // 0x324498: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32449c:
    // 0x32449c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32449cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3244a0:
    // 0x3244a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3244a4:
    // 0x3244a4: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
label_3244a8:
    if (ctx->pc == 0x3244A8u) {
        ctx->pc = 0x3244A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244A4u;
        // 0x3244a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3244ACu;
        goto label_3244ac;
    }
    ctx->pc = 0x3244A4u;
    {
        const bool branch_taken_0x3244a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3244a4) {
            ctx->pc = 0x3244A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244A4u;
            // 0x3244a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324478;
        }
    }
    ctx->pc = 0x3244ACu;
label_3244ac:
    // 0x3244ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3244acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3244b0:
    // 0x3244b0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3244b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3244b4:
    // 0x3244b4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3244b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3244b8:
    // 0x3244b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3244b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3244bc:
    // 0x3244bc: 0x3e00008  jr          $ra
label_3244c0:
    if (ctx->pc == 0x3244C0u) {
        ctx->pc = 0x3244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244BCu;
        // 0x3244c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3244C4u;
        goto label_3244c4;
    }
    ctx->pc = 0x3244BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244BCu;
        // 0x3244c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3244BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3244C4u;
label_3244c4:
    // 0x3244c4: 0x0  nop
    ctx->pc = 0x3244c4u;
    // NOP
    ctx->pc = 0x3244c8u;
}
