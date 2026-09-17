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

// Function: sub_00359C90
// Address: 0x359c90 - 0x359d30
void sub_00359C90_0x359c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359C90_0x359c90");
#endif

    switch (ctx->pc) {
        case 0x359ce0u: goto label_359ce0;
        case 0x359cecu: goto label_359cec;
        case 0x359cf8u: goto label_359cf8;
        case 0x359d04u: goto label_359d04;
        case 0x359d10u: goto label_359d10;
        case 0x359d1cu: goto label_359d1c;
        default: break;
    }

    ctx->pc = 0x359c90u;

    // 0x359c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359c94: 0x8f83c7b0  lw          $v1, -0x3850($gp)
    ctx->pc = 0x359c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952880)));
    // 0x359c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x359ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359ca4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359ca8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359CA8u;
    {
        const bool branch_taken_0x359ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x359CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CA8u;
        // 0x359cac: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ca8) {
            ctx->pc = 0x359CB8u;
            goto label_359cb8;
        }
    }
    ctx->pc = 0x359CB0u;
    // 0x359cb0: 0x5203001b  beql        $s0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x359CB0u;
    {
        const bool branch_taken_0x359cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x359cb0) {
            ctx->pc = 0x359CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359CB0u;
            // 0x359cb4: 0xaf90c7b0  sw          $s0, -0x3850($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294952880), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359D20u;
            goto label_359d20;
        }
    }
    ctx->pc = 0x359CB8u;
label_359cb8:
    // 0x359cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x359cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x359cbc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359CBCu;
    {
        const bool branch_taken_0x359cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x359cbc) {
            ctx->pc = 0x359CCCu;
            goto label_359ccc;
        }
    }
    ctx->pc = 0x359CC4u;
    // 0x359cc4: 0x52030016  beql        $s0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x359CC4u;
    {
        const bool branch_taken_0x359cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x359cc4) {
            ctx->pc = 0x359CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359CC4u;
            // 0x359cc8: 0xaf90c7b0  sw          $s0, -0x3850($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294952880), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359D20u;
            goto label_359d20;
        }
    }
    ctx->pc = 0x359CCCu;
label_359ccc:
    // 0x359ccc: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x359CCCu;
    {
        const bool branch_taken_0x359ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359ccc) {
            ctx->pc = 0x359CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359CCCu;
            // 0x359cd0: 0xaf90c7b0  sw          $s0, -0x3850($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294952880), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359D20u;
            goto label_359d20;
        }
    }
    ctx->pc = 0x359CD4u;
    // 0x359cd4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359cd8: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359CD8u;
    SET_GPR_U32(ctx, 31, 0x359CE0u);
    ctx->pc = 0x359CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CD8u;
    // 0x359cdc: 0x248451f0  addiu       $a0, $a0, 0x51F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359CD8u, 0x359CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CE0u;
label_359ce0:
    // 0x359ce0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359ce4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359CE4u;
    SET_GPR_U32(ctx, 31, 0x359CECu);
    ctx->pc = 0x359CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CE4u;
    // 0x359ce8: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359CE4u, 0x359CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CECu;
label_359cec:
    // 0x359cec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359cf0: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359CF0u;
    SET_GPR_U32(ctx, 31, 0x359CF8u);
    ctx->pc = 0x359CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CF0u;
    // 0x359cf4: 0x24845248  addiu       $a0, $a0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359CF0u, 0x359CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CF8u;
label_359cf8:
    // 0x359cf8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359cfc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359CFCu;
    SET_GPR_U32(ctx, 31, 0x359D04u);
    ctx->pc = 0x359D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CFCu;
    // 0x359d00: 0x24845268  addiu       $a0, $a0, 0x5268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359CFCu, 0x359D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D04u;
label_359d04:
    // 0x359d04: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359d08: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359D08u;
    SET_GPR_U32(ctx, 31, 0x359D10u);
    ctx->pc = 0x359D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D08u;
    // 0x359d0c: 0x24845290  addiu       $a0, $a0, 0x5290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359D08u, 0x359D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D10u;
label_359d10:
    // 0x359d10: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x359d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x359d14: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x359D14u;
    SET_GPR_U32(ctx, 31, 0x359D1Cu);
    ctx->pc = 0x359D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D14u;
    // 0x359d18: 0x248452b8  addiu       $a0, $a0, 0x52B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x359D14u, 0x359D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D1Cu;
label_359d1c:
    // 0x359d1c: 0xaf90c7b0  sw          $s0, -0x3850($gp)
    ctx->pc = 0x359d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952880), GPR_U32(ctx, 16));
label_359d20:
    // 0x359d20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d28: 0x3e00008  jr          $ra
    ctx->pc = 0x359D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D28u;
        // 0x359d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D30u;
}
