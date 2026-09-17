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

// Function: sub_0026CF58
// Address: 0x26cf58 - 0x26d010
void sub_0026CF58_0x26cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CF58_0x26cf58");
#endif

    switch (ctx->pc) {
        case 0x26cf84u: goto label_26cf84;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cff8u: goto label_26cff8;
        default: break;
    }

    ctx->pc = 0x26cf58u;

    // 0x26cf58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26cf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26cf5c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cf60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26cf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26cf64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26cf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26cf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26cf6c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26cf70: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x26cf70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26cf74: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x26CF74u;
    {
        const bool branch_taken_0x26cf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF74u;
        // 0x26cf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf74) {
            ctx->pc = 0x26D000u;
            goto label_26d000;
        }
    }
    ctx->pc = 0x26CF7Cu;
    // 0x26cf7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26CF7Cu;
    SET_GPR_U32(ctx, 31, 0x26CF84u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26CF7Cu, 0x26CF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CF84u;
label_26cf84:
    // 0x26cf84: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26cf88: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26cf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26cf8c: 0x8483034e  lh          $v1, 0x34E($a0)
    ctx->pc = 0x26cf8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 846)));
    // 0x26cf90: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26cf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26cf94: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26CF94u;
    {
        const bool branch_taken_0x26cf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf94) {
            ctx->pc = 0x26CF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CF94u;
            // 0x26cf98: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CFE0u;
            goto label_26cfe0;
        }
    }
    ctx->pc = 0x26CF9Cu;
    // 0x26cf9c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x26cfa0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CFA0u;
    SET_GPR_U32(ctx, 31, 0x26CFA8u);
    ctx->pc = 0x26CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFA0u;
    // 0x26cfa4: 0x2484c418  addiu       $a0, $a0, -0x3BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CFA0u, 0x26CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFA8u;
label_26cfa8:
    // 0x26cfa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cfac: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26CFACu;
    {
        const bool branch_taken_0x26cfac = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x26CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFACu;
        // 0x26cfb0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfac) {
            ctx->pc = 0x26CFD0u;
            goto label_26cfd0;
        }
    }
    ctx->pc = 0x26CFB4u;
    // 0x26cfb4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x26cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26cfb8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26cfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26cfbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CFBCu;
    {
        const bool branch_taken_0x26cfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFBCu;
        // 0x26cfc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfbc) {
            ctx->pc = 0x26CFD4u;
            goto label_26cfd4;
        }
    }
    ctx->pc = 0x26CFC4u;
    // 0x26cfc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26CFC4u;
    {
        const bool branch_taken_0x26cfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFC4u;
        // 0x26cfc8: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfc4) {
            ctx->pc = 0x26CFF0u;
            goto label_26cff0;
        }
    }
    ctx->pc = 0x26CFCCu;
    // 0x26cfcc: 0x0  nop
    ctx->pc = 0x26cfccu;
    // NOP
label_26cfd0:
    // 0x26cfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cfd4:
    // 0x26cfd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CFD4u;
    {
        const bool branch_taken_0x26cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFD4u;
        // 0x26cfd8: 0xac6200f8  sw          $v0, 0xF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfd4) {
            ctx->pc = 0x26CFFCu;
            goto label_26cffc;
        }
    }
    ctx->pc = 0x26CFDCu;
    // 0x26cfdc: 0x0  nop
    ctx->pc = 0x26cfdcu;
    // NOP
label_26cfe0:
    // 0x26cfe0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26cfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26cfe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CFE4u;
    {
        const bool branch_taken_0x26cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFE4u;
        // 0x26cfe8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cfe4) {
            ctx->pc = 0x26D000u;
            goto label_26d000;
        }
    }
    ctx->pc = 0x26CFECu;
    // 0x26cfec: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_26cff0:
    // 0x26cff0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26CFF0u;
    SET_GPR_U32(ctx, 31, 0x26CFF8u);
    ctx->pc = 0x26CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFF0u;
    // 0x26cff4: 0x2484c3e0  addiu       $a0, $a0, -0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26CFF0u, 0x26CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CFF8u;
label_26cff8:
    // 0x26cff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26cffc:
    // 0x26cffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26cffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d000:
    // 0x26d000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d008: 0x3e00008  jr          $ra
    ctx->pc = 0x26D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D008u;
        // 0x26d00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D010u;
}
