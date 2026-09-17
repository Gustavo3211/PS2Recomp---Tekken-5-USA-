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

// Function: sub_0033D3E0
// Address: 0x33d3e0 - 0x33d468
void sub_0033D3E0_0x33d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D3E0_0x33d3e0");
#endif

    switch (ctx->pc) {
        case 0x33d3e0u: goto label_33d3e0;
        case 0x33d3e4u: goto label_33d3e4;
        case 0x33d3e8u: goto label_33d3e8;
        case 0x33d3ecu: goto label_33d3ec;
        case 0x33d3f0u: goto label_33d3f0;
        case 0x33d3f4u: goto label_33d3f4;
        case 0x33d3f8u: goto label_33d3f8;
        case 0x33d3fcu: goto label_33d3fc;
        case 0x33d400u: goto label_33d400;
        case 0x33d404u: goto label_33d404;
        case 0x33d408u: goto label_33d408;
        case 0x33d40cu: goto label_33d40c;
        case 0x33d410u: goto label_33d410;
        case 0x33d414u: goto label_33d414;
        case 0x33d418u: goto label_33d418;
        case 0x33d41cu: goto label_33d41c;
        case 0x33d420u: goto label_33d420;
        case 0x33d424u: goto label_33d424;
        case 0x33d428u: goto label_33d428;
        case 0x33d42cu: goto label_33d42c;
        case 0x33d430u: goto label_33d430;
        case 0x33d434u: goto label_33d434;
        case 0x33d438u: goto label_33d438;
        case 0x33d43cu: goto label_33d43c;
        case 0x33d440u: goto label_33d440;
        case 0x33d444u: goto label_33d444;
        case 0x33d448u: goto label_33d448;
        case 0x33d44cu: goto label_33d44c;
        case 0x33d450u: goto label_33d450;
        case 0x33d454u: goto label_33d454;
        case 0x33d458u: goto label_33d458;
        case 0x33d45cu: goto label_33d45c;
        case 0x33d460u: goto label_33d460;
        case 0x33d464u: goto label_33d464;
        default: break;
    }

    ctx->pc = 0x33d3e0u;

label_33d3e0:
    // 0x33d3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33d3e4:
    // 0x33d3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d3e8:
    // 0x33d3e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d3ec:
    // 0x33d3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33d3f0:
    // 0x33d3f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33d3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d3f4:
    // 0x33d3f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33d3f8:
    // 0x33d3f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33d3fc:
    // 0x33d3fc: 0xc0cf424  jal         func_33D090
label_33d400:
    if (ctx->pc == 0x33D400u) {
        ctx->pc = 0x33D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3FCu;
        // 0x33d400: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D404u;
        goto label_33d404;
    }
    ctx->pc = 0x33D3FCu;
    SET_GPR_U32(ctx, 31, 0x33D404u);
    ctx->pc = 0x33D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D3FCu;
    // 0x33d400: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33D3FCu, 0x33D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D404u;
label_33d404:
    // 0x33d404: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_33d408:
    if (ctx->pc == 0x33D408u) {
        ctx->pc = 0x33D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D404u;
        // 0x33d408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D40Cu;
        goto label_33d40c;
    }
    ctx->pc = 0x33D404u;
    {
        const bool branch_taken_0x33d404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d404) {
            ctx->pc = 0x33D408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D404u;
            // 0x33d408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D454u;
            goto label_33d454;
        }
    }
    ctx->pc = 0x33D40Cu;
label_33d40c:
    // 0x33d40c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d410:
    // 0x33d410: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x33d410u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33d414:
    // 0x33d414: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_33d418:
    // 0x33d418: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x33d418u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33d41c:
    // 0x33d41c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d420:
    // 0x33d420: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33d420u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33d424:
    // 0x33d424: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d428:
    // 0x33d428: 0x2452806  srlv        $a1, $a1, $s2
    ctx->pc = 0x33d428u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
label_33d42c:
    // 0x33d42c: 0x60f809  jalr        $v1
label_33d430:
    if (ctx->pc == 0x33D430u) {
        ctx->pc = 0x33D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D42Cu;
        // 0x33d430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D434u;
        goto label_33d434;
    }
    ctx->pc = 0x33D42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D434u);
        ctx->pc = 0x33D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D42Cu;
        // 0x33d430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D42Cu, 0x33D434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D434u;
label_33d434:
    // 0x33d434: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d438:
    // 0x33d438: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33d43c:
    // 0x33d43c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d43cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d440:
    // 0x33d440: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d444:
    // 0x33d444: 0x60f809  jalr        $v1
label_33d448:
    if (ctx->pc == 0x33D448u) {
        ctx->pc = 0x33D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D444u;
        // 0x33d448: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D44Cu;
        goto label_33d44c;
    }
    ctx->pc = 0x33D444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D44Cu);
        ctx->pc = 0x33D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D444u;
        // 0x33d448: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D444u, 0x33D44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D44Cu;
label_33d44c:
    // 0x33d44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d450:
    // 0x33d450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d454:
    // 0x33d454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d458:
    // 0x33d458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33d458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d45c:
    // 0x33d45c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33d45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33d460:
    // 0x33d460: 0x3e00008  jr          $ra
label_33d464:
    if (ctx->pc == 0x33D464u) {
        ctx->pc = 0x33D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D460u;
        // 0x33d464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D468u;
        goto label_fallthrough_0x33d460;
    }
    ctx->pc = 0x33D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D460u;
        // 0x33d464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d460:
    ctx->pc = 0x33D468u;
}
