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

// Function: sub_00247990
// Address: 0x247990 - 0x247a28
void sub_00247990_0x247990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247990_0x247990");
#endif

    switch (ctx->pc) {
        case 0x2479e8u: goto label_2479e8;
        case 0x2479f8u: goto label_2479f8;
        case 0x247a08u: goto label_247a08;
        case 0x247a18u: goto label_247a18;
        default: break;
    }

    ctx->pc = 0x247990u;

    // 0x247990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247994: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x247994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24799c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x24799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2479a0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2479A0u;
    {
        const bool branch_taken_0x2479a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479a0) {
            ctx->pc = 0x2479A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2479A0u;
            // 0x2479a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A1Cu;
            goto label_247a1c;
        }
    }
    ctx->pc = 0x2479A8u;
    // 0x2479a8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2479a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2479ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2479acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2479b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2479b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2479b4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2479B4u;
    {
        const bool branch_taken_0x2479b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2479b4) {
            ctx->pc = 0x2479F0u;
            goto label_2479f0;
        }
    }
    ctx->pc = 0x2479BCu;
    // 0x2479bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2479BCu;
    {
        const bool branch_taken_0x2479bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2479C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479BCu;
        // 0x2479c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479bc) {
            ctx->pc = 0x2479E0u;
            goto label_2479e0;
        }
    }
    ctx->pc = 0x2479C4u;
    // 0x2479c4: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2479C4u;
    {
        const bool branch_taken_0x2479c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2479C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479C4u;
        // 0x2479c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479c4) {
            ctx->pc = 0x247A00u;
            goto label_247a00;
        }
    }
    ctx->pc = 0x2479CCu;
    // 0x2479cc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2479CCu;
    {
        const bool branch_taken_0x2479cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2479D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479CCu;
        // 0x2479d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479cc) {
            ctx->pc = 0x247A10u;
            goto label_247a10;
        }
    }
    ctx->pc = 0x2479D4u;
    // 0x2479d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2479D4u;
    {
        const bool branch_taken_0x2479d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479d4) {
            ctx->pc = 0x247A1Cu;
            goto label_247a1c;
        }
    }
    ctx->pc = 0x2479DCu;
    // 0x2479dc: 0x0  nop
    ctx->pc = 0x2479dcu;
    // NOP
label_2479e0:
    // 0x2479e0: 0xc091ef0  jal         func_247BC0
    ctx->pc = 0x2479E0u;
    SET_GPR_U32(ctx, 31, 0x2479E8u);
    ctx->pc = 0x247BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BC0u, 0x2479E0u, 0x2479E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479E8u;
label_2479e8:
    // 0x2479e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2479E8u;
    {
        const bool branch_taken_0x2479e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2479ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479E8u;
        // 0x2479ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479e8) {
            ctx->pc = 0x247A1Cu;
            goto label_247a1c;
        }
    }
    ctx->pc = 0x2479F0u;
label_2479f0:
    // 0x2479f0: 0xc091f4a  jal         func_247D28
    ctx->pc = 0x2479F0u;
    SET_GPR_U32(ctx, 31, 0x2479F8u);
    ctx->pc = 0x247D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D28u, 0x2479F0u, 0x2479F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479F8u;
label_2479f8:
    // 0x2479f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2479F8u;
    {
        const bool branch_taken_0x2479f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2479FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479F8u;
        // 0x2479fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479f8) {
            ctx->pc = 0x247A1Cu;
            goto label_247a1c;
        }
    }
    ctx->pc = 0x247A00u;
label_247a00:
    // 0x247a00: 0xc091fa6  jal         func_247E98
    ctx->pc = 0x247A00u;
    SET_GPR_U32(ctx, 31, 0x247A08u);
    ctx->pc = 0x247E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247E98u, 0x247A00u, 0x247A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A08u;
label_247a08:
    // 0x247a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247A08u;
    {
        const bool branch_taken_0x247a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A08u;
        // 0x247a0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a08) {
            ctx->pc = 0x247A1Cu;
            goto label_247a1c;
        }
    }
    ctx->pc = 0x247A10u;
label_247a10:
    // 0x247a10: 0xc091fde  jal         func_247F78
    ctx->pc = 0x247A10u;
    SET_GPR_U32(ctx, 31, 0x247A18u);
    ctx->pc = 0x247F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247F78u, 0x247A10u, 0x247A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A18u;
label_247a18:
    // 0x247a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247a1c:
    // 0x247a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x247A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A1Cu;
        // 0x247a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A24u;
    // 0x247a24: 0x0  nop
    ctx->pc = 0x247a24u;
    // NOP
    ctx->pc = 0x247a28u;
}
