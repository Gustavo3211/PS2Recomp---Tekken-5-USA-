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

// Function: sub_002CE3D0
// Address: 0x2ce3d0 - 0x2ce468
void sub_002CE3D0_0x2ce3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE3D0_0x2ce3d0");
#endif

    switch (ctx->pc) {
        case 0x2ce3d0u: goto label_2ce3d0;
        case 0x2ce3d4u: goto label_2ce3d4;
        case 0x2ce3d8u: goto label_2ce3d8;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3e0u: goto label_2ce3e0;
        case 0x2ce3e4u: goto label_2ce3e4;
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3ecu: goto label_2ce3ec;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3f4u: goto label_2ce3f4;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce400u: goto label_2ce400;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce40cu: goto label_2ce40c;
        case 0x2ce410u: goto label_2ce410;
        case 0x2ce414u: goto label_2ce414;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce41cu: goto label_2ce41c;
        case 0x2ce420u: goto label_2ce420;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce42cu: goto label_2ce42c;
        case 0x2ce430u: goto label_2ce430;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce438u: goto label_2ce438;
        case 0x2ce43cu: goto label_2ce43c;
        case 0x2ce440u: goto label_2ce440;
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce448u: goto label_2ce448;
        case 0x2ce44cu: goto label_2ce44c;
        case 0x2ce450u: goto label_2ce450;
        case 0x2ce454u: goto label_2ce454;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce45cu: goto label_2ce45c;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce464u: goto label_2ce464;
        default: break;
    }

    ctx->pc = 0x2ce3d0u;

label_2ce3d0:
    // 0x2ce3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ce3d4:
    // 0x2ce3d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ce3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ce3d8:
    // 0x2ce3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ce3dc:
    // 0x2ce3dc: 0x24860098  addiu       $a2, $a0, 0x98
    ctx->pc = 0x2ce3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
label_2ce3e0:
    // 0x2ce3e0: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2ce3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_2ce3e4:
    // 0x2ce3e4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2ce3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_2ce3e8:
    // 0x2ce3e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ce3ec:
    // 0x2ce3ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ce3f0:
    if (ctx->pc == 0x2CE3F0u) {
        ctx->pc = 0x2CE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3ECu;
        // 0x2ce3f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE3F4u;
        goto label_2ce3f4;
    }
    ctx->pc = 0x2CE3ECu;
    {
        const bool branch_taken_0x2ce3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3ECu;
        // 0x2ce3f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3ec) {
            ctx->pc = 0x2CE404u;
            goto label_2ce404;
        }
    }
    ctx->pc = 0x2CE3F4u;
label_2ce3f4:
    // 0x2ce3f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ce3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ce3f8:
    // 0x2ce3f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ce3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ce3fc:
    // 0x2ce3fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2ce400:
    if (ctx->pc == 0x2CE400u) {
        ctx->pc = 0x2CE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3FCu;
        // 0x2ce400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE404u;
        goto label_2ce404;
    }
    ctx->pc = 0x2CE3FCu;
    {
        const bool branch_taken_0x2ce3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3FCu;
        // 0x2ce400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3fc) {
            ctx->pc = 0x2CE414u;
            goto label_2ce414;
        }
    }
    ctx->pc = 0x2CE404u;
label_2ce404:
    // 0x2ce404: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ce404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ce408:
    // 0x2ce408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce40c:
    // 0x2ce40c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ce40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2ce410:
    // 0x2ce410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce414:
    // 0x2ce414: 0xaca2015c  sw          $v0, 0x15C($a1)
    ctx->pc = 0x2ce414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 2));
label_2ce418:
    // 0x2ce418: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ce418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ce41c:
    // 0x2ce41c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ce420:
    if (ctx->pc == 0x2CE420u) {
        ctx->pc = 0x2CE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE41Cu;
        // 0x2ce420: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE424u;
        goto label_2ce424;
    }
    ctx->pc = 0x2CE41Cu;
    {
        const bool branch_taken_0x2ce41c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce41c) {
            ctx->pc = 0x2CE420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE41Cu;
            // 0x2ce420: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE438u;
            goto label_2ce438;
        }
    }
    ctx->pc = 0x2CE424u;
label_2ce424:
    // 0x2ce424: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ce424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ce428:
    // 0x2ce428: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ce428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2ce42c:
    // 0x2ce42c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ce430:
    if (ctx->pc == 0x2CE430u) {
        ctx->pc = 0x2CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE42Cu;
        // 0x2ce430: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE434u;
        goto label_2ce434;
    }
    ctx->pc = 0x2CE42Cu;
    {
        const bool branch_taken_0x2ce42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE42Cu;
        // 0x2ce430: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce42c) {
            ctx->pc = 0x2CE440u;
            goto label_2ce440;
        }
    }
    ctx->pc = 0x2CE434u;
label_2ce434:
    // 0x2ce434: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ce434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2ce438:
    // 0x2ce438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce43c:
    // 0x2ce43c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ce43cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2ce440:
    // 0x2ce440: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2ce444:
    // 0x2ce444: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2ce448:
    // 0x2ce448: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ce448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce44c:
    // 0x2ce44c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ce450:
    // 0x2ce450: 0x60f809  jalr        $v1
label_2ce454:
    if (ctx->pc == 0x2CE454u) {
        ctx->pc = 0x2CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE450u;
        // 0x2ce454: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE458u;
        goto label_2ce458;
    }
    ctx->pc = 0x2CE450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CE458u);
        ctx->pc = 0x2CE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE450u;
        // 0x2ce454: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE450u, 0x2CE458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE458u;
label_2ce458:
    // 0x2ce458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce45c:
    // 0x2ce45c: 0x3e00008  jr          $ra
label_2ce460:
    if (ctx->pc == 0x2CE460u) {
        ctx->pc = 0x2CE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE45Cu;
        // 0x2ce460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE464u;
        goto label_2ce464;
    }
    ctx->pc = 0x2CE45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE45Cu;
        // 0x2ce460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE464u;
label_2ce464:
    // 0x2ce464: 0x0  nop
    ctx->pc = 0x2ce464u;
    // NOP
    ctx->pc = 0x2ce468u;
}
