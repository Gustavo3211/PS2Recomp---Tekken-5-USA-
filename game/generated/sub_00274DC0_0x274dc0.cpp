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

// Function: sub_00274DC0
// Address: 0x274dc0 - 0x274e60
void sub_00274DC0_0x274dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274DC0_0x274dc0");
#endif

    switch (ctx->pc) {
        case 0x274df0u: goto label_274df0;
        case 0x274e24u: goto label_274e24;
        case 0x274e38u: goto label_274e38;
        case 0x274e48u: goto label_274e48;
        default: break;
    }

    ctx->pc = 0x274dc0u;

    // 0x274dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274dc4: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x274dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274dcc: 0x9043018b  lbu         $v1, 0x18B($v0)
    ctx->pc = 0x274dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 395)));
    // 0x274dd0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x274DD0u;
    {
        const bool branch_taken_0x274dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DD0u;
        // 0x274dd4: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dd0) {
            ctx->pc = 0x274E50u;
            goto label_274e50;
        }
    }
    ctx->pc = 0x274DD8u;
    // 0x274dd8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x274ddc: 0x5860001d  blezl       $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x274DDCu;
    {
        const bool branch_taken_0x274ddc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x274ddc) {
            ctx->pc = 0x274DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274DDCu;
            // 0x274de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274E54u;
            goto label_274e54;
        }
    }
    ctx->pc = 0x274DE4u;
    // 0x274de4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274de8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x274DE8u;
    SET_GPR_U32(ctx, 31, 0x274DF0u);
    ctx->pc = 0x274DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274DE8u;
    // 0x274dec: 0x2484c9a0  addiu       $a0, $a0, -0x3660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x274DE8u, 0x274DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DF0u;
label_274df0:
    // 0x274df0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274df4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x274DF4u;
    {
        const bool branch_taken_0x274df4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x274DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DF4u;
        // 0x274df8: 0x2484c988  addiu       $a0, $a0, -0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274df4) {
            ctx->pc = 0x274E30u;
            goto label_274e30;
        }
    }
    ctx->pc = 0x274DFCu;
    // 0x274dfc: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274e00: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x274e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274e04: 0x94620176  lhu         $v0, 0x176($v1)
    ctx->pc = 0x274e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 374)));
    // 0x274e08: 0x848503ac  lh          $a1, 0x3AC($a0)
    ctx->pc = 0x274e08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 940)));
    // 0x274e0c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x274e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x274e10: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x274e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x274e14: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x274E14u;
    {
        const bool branch_taken_0x274e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e14) {
            ctx->pc = 0x274E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274E14u;
            // 0x274e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274E54u;
            goto label_274e54;
        }
    }
    ctx->pc = 0x274E1Cu;
    // 0x274e1c: 0xc09b492  jal         func_26D248
    ctx->pc = 0x274E1Cu;
    SET_GPR_U32(ctx, 31, 0x274E24u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274E1Cu, 0x274E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E24u;
label_274e24:
    // 0x274e24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274E24u;
    {
        const bool branch_taken_0x274e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E24u;
        // 0x274e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e24) {
            ctx->pc = 0x274E54u;
            goto label_274e54;
        }
    }
    ctx->pc = 0x274E2Cu;
    // 0x274e2c: 0x0  nop
    ctx->pc = 0x274e2cu;
    // NOP
label_274e30:
    // 0x274e30: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x274E30u;
    SET_GPR_U32(ctx, 31, 0x274E38u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x274E30u, 0x274E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E38u;
label_274e38:
    // 0x274e38: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E38u;
    {
        const bool branch_taken_0x274e38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x274e38) {
            ctx->pc = 0x274E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274E38u;
            // 0x274e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274E54u;
            goto label_274e54;
        }
    }
    ctx->pc = 0x274E40u;
    // 0x274e40: 0xc09b492  jal         func_26D248
    ctx->pc = 0x274E40u;
    SET_GPR_U32(ctx, 31, 0x274E48u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274E40u, 0x274E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E48u;
label_274e48:
    // 0x274e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274E48u;
    {
        const bool branch_taken_0x274e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E48u;
        // 0x274e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e48) {
            ctx->pc = 0x274E54u;
            goto label_274e54;
        }
    }
    ctx->pc = 0x274E50u;
label_274e50:
    // 0x274e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274e54:
    // 0x274e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274e58: 0x3e00008  jr          $ra
    ctx->pc = 0x274E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E58u;
        // 0x274e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E60u;
}
