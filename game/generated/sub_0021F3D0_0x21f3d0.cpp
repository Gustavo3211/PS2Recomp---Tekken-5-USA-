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

// Function: sub_0021F3D0
// Address: 0x21f3d0 - 0x21f470
void sub_0021F3D0_0x21f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F3D0_0x21f3d0");
#endif

    switch (ctx->pc) {
        case 0x21f3f8u: goto label_21f3f8;
        case 0x21f40cu: goto label_21f40c;
        case 0x21f420u: goto label_21f420;
        case 0x21f430u: goto label_21f430;
        case 0x21f43cu: goto label_21f43c;
        case 0x21f448u: goto label_21f448;
        case 0x21f458u: goto label_21f458;
        case 0x21f468u: goto label_21f468;
        default: break;
    }

    ctx->pc = 0x21f3d0u;

    // 0x21f3d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21f3d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f3d8: 0xaf83c954  sw          $v1, -0x36AC($gp)
    ctx->pc = 0x21f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953300), GPR_U32(ctx, 3));
    // 0x21f3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f3e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21f3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f3e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F3E4u;
    {
        const bool branch_taken_0x21f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3E4u;
        // 0x21f3e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3e4) {
            ctx->pc = 0x21F428u;
            goto label_21f428;
        }
    }
    ctx->pc = 0x21F3ECu;
    // 0x21f3ec: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x21f3ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21f3f0: 0xc0c24c8  jal         func_309320
    ctx->pc = 0x21F3F0u;
    SET_GPR_U32(ctx, 31, 0x21F3F8u);
    ctx->pc = 0x21F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3F0u;
    // 0x21f3f4: 0x90650003  lbu         $a1, 0x3($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309320u, 0x21F3F0u, 0x21F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3F8u;
label_21f3f8:
    // 0x21f3f8: 0x8f82c954  lw          $v0, -0x36AC($gp)
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
    // 0x21f3fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f400: 0x90460006  lbu         $a2, 0x6($v0)
    ctx->pc = 0x21f400u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x21f404: 0xc0c24c8  jal         func_309320
    ctx->pc = 0x21F404u;
    SET_GPR_U32(ctx, 31, 0x21F40Cu);
    ctx->pc = 0x21F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F404u;
    // 0x21f408: 0x90450005  lbu         $a1, 0x5($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309320u, 0x21F404u, 0x21F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F40Cu;
label_21f40c:
    // 0x21f40c: 0x8f82c954  lw          $v0, -0x36AC($gp)
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
    // 0x21f410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f414: 0x90460008  lbu         $a2, 0x8($v0)
    ctx->pc = 0x21f414u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21f418: 0xc0c24c8  jal         func_309320
    ctx->pc = 0x21F418u;
    SET_GPR_U32(ctx, 31, 0x21F420u);
    ctx->pc = 0x21F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F418u;
    // 0x21f41c: 0x90450007  lbu         $a1, 0x7($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309320u, 0x21F418u, 0x21F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F420u;
label_21f420:
    // 0x21f420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21F420u;
    {
        const bool branch_taken_0x21f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F420u;
        // 0x21f424: 0x8f82c954  lw          $v0, -0x36AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f420) {
            ctx->pc = 0x21F434u;
            goto label_21f434;
        }
    }
    ctx->pc = 0x21F428u;
label_21f428:
    // 0x21f428: 0xc087cdc  jal         func_21F370
    ctx->pc = 0x21F428u;
    SET_GPR_U32(ctx, 31, 0x21F430u);
    ctx->pc = 0x21F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F370u, 0x21F428u, 0x21F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F430u;
label_21f430:
    // 0x21f430: 0x8f82c954  lw          $v0, -0x36AC($gp)
    ctx->pc = 0x21f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
label_21f434:
    // 0x21f434: 0xc0c2548  jal         func_309520
    ctx->pc = 0x21F434u;
    SET_GPR_U32(ctx, 31, 0x21F43Cu);
    ctx->pc = 0x21F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F434u;
    // 0x21f438: 0x90440001  lbu         $a0, 0x1($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309520u, 0x21F434u, 0x21F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F43Cu;
label_21f43c:
    // 0x21f43c: 0x8f82c954  lw          $v0, -0x36AC($gp)
    ctx->pc = 0x21f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
    // 0x21f440: 0xc0c2562  jal         func_309588
    ctx->pc = 0x21F440u;
    SET_GPR_U32(ctx, 31, 0x21F448u);
    ctx->pc = 0x21F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F440u;
    // 0x21f444: 0x90440002  lbu         $a0, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309588u, 0x21F440u, 0x21F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F448u;
label_21f448:
    // 0x21f448: 0x8f82c954  lw          $v0, -0x36AC($gp)
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953300)));
    // 0x21f44c: 0x8045000a  lb          $a1, 0xA($v0)
    ctx->pc = 0x21f44cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x21f450: 0xc0c2556  jal         func_309558
    ctx->pc = 0x21F450u;
    SET_GPR_U32(ctx, 31, 0x21F458u);
    ctx->pc = 0x21F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F450u;
    // 0x21f454: 0x80440009  lb          $a0, 0x9($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309558u, 0x21F450u, 0x21F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F458u;
label_21f458:
    // 0x21f458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F45Cu;
        // 0x21f460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F464u;
    // 0x21f464: 0x0  nop
    ctx->pc = 0x21f464u;
    // NOP
label_21f468:
    // 0x21f468: 0x3e00008  jr          $ra
    ctx->pc = 0x21F468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F470u;
}
