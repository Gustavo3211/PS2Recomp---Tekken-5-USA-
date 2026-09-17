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

// Function: sub_00101080
// Address: 0x101080 - 0x101100
void sub_00101080_0x101080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101080_0x101080");
#endif

    switch (ctx->pc) {
        case 0x101094u: goto label_101094;
        case 0x10109cu: goto label_10109c;
        case 0x1010a4u: goto label_1010a4;
        case 0x1010acu: goto label_1010ac;
        case 0x1010b4u: goto label_1010b4;
        case 0x1010bcu: goto label_1010bc;
        case 0x1010c4u: goto label_1010c4;
        case 0x1010dcu: goto label_1010dc;
        case 0x1010ecu: goto label_1010ec;
        default: break;
    }

    ctx->pc = 0x101080u;

    // 0x101080: 0x8c4583c0  lw          $a1, -0x7C40($v0)
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x101084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x101088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10108c: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x10108Cu;
    SET_GPR_U32(ctx, 31, 0x101094u);
    ctx->pc = 0x101090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10108Cu;
    // 0x101090: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x10108Cu, 0x101094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101094u;
label_101094:
    // 0x101094: 0xc04019e  jal         func_100678
    ctx->pc = 0x101094u;
    SET_GPR_U32(ctx, 31, 0x10109Cu);
    ctx->pc = 0x101098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101094u;
    // 0x101098: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x101094u, 0x10109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10109Cu;
label_10109c:
    // 0x10109c: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x10109Cu;
    SET_GPR_U32(ctx, 31, 0x1010A4u);
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x10109Cu, 0x1010A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A4u;
label_1010a4:
    // 0x1010a4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1010A4u;
    SET_GPR_U32(ctx, 31, 0x1010ACu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1010A4u, 0x1010ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010ACu;
label_1010ac:
    // 0x1010ac: 0xc0401d0  jal         func_100740
    ctx->pc = 0x1010ACu;
    SET_GPR_U32(ctx, 31, 0x1010B4u);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x1010ACu, 0x1010B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B4u;
label_1010b4:
    // 0x1010b4: 0xc0401c4  jal         func_100710
    ctx->pc = 0x1010B4u;
    SET_GPR_U32(ctx, 31, 0x1010BCu);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x1010B4u, 0x1010BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010BCu;
label_1010bc:
    // 0x1010bc: 0xc0401ca  jal         func_100728
    ctx->pc = 0x1010BCu;
    SET_GPR_U32(ctx, 31, 0x1010C4u);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x1010BCu, 0x1010C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C4u;
label_1010c4:
    // 0x1010c4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x1010c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x1010c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1010c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1010cc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1010CCu;
    {
        const bool branch_taken_0x1010cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1010D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010CCu;
        // 0x1010d0: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010cc) {
            ctx->pc = 0x1010DCu;
            goto label_1010dc;
        }
    }
    ctx->pc = 0x1010D4u;
    // 0x1010d4: 0xc0402ba  jal         func_100AE8
    ctx->pc = 0x1010D4u;
    SET_GPR_U32(ctx, 31, 0x1010DCu);
    ctx->pc = 0x100AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AE8u, 0x1010D4u, 0x1010DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010DCu;
label_1010dc:
    // 0x1010dc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1010e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1010e4: 0xc04007a  jal         func_1001E8
    ctx->pc = 0x1010E4u;
    SET_GPR_U32(ctx, 31, 0x1010ECu);
    ctx->pc = 0x1010E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010E4u;
    // 0x1010e8: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001E8u, 0x1010E4u, 0x1010ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010ECu;
label_1010ec:
    // 0x1010ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1010ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1010f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1010f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010F4u;
        // 0x1010f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010FCu;
    // 0x1010fc: 0x0  nop
    ctx->pc = 0x1010fcu;
    // NOP
    ctx->pc = 0x101100u;
}
