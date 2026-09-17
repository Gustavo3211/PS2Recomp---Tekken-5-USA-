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

// Function: sub_00321F78
// Address: 0x321f78 - 0x322018
void sub_00321F78_0x321f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321F78_0x321f78");
#endif

    switch (ctx->pc) {
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        case 0x321fa8u: goto label_321fa8;
        case 0x321facu: goto label_321fac;
        case 0x321fb0u: goto label_321fb0;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fbcu: goto label_321fbc;
        case 0x321fc0u: goto label_321fc0;
        case 0x321fc4u: goto label_321fc4;
        case 0x321fc8u: goto label_321fc8;
        case 0x321fccu: goto label_321fcc;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fd4u: goto label_321fd4;
        case 0x321fd8u: goto label_321fd8;
        case 0x321fdcu: goto label_321fdc;
        case 0x321fe0u: goto label_321fe0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321fe8u: goto label_321fe8;
        case 0x321fecu: goto label_321fec;
        case 0x321ff0u: goto label_321ff0;
        case 0x321ff4u: goto label_321ff4;
        case 0x321ff8u: goto label_321ff8;
        case 0x321ffcu: goto label_321ffc;
        case 0x322000u: goto label_322000;
        case 0x322004u: goto label_322004;
        case 0x322008u: goto label_322008;
        case 0x32200cu: goto label_32200c;
        case 0x322010u: goto label_322010;
        case 0x322014u: goto label_322014;
        default: break;
    }

    ctx->pc = 0x321f78u;

label_321f78:
    // 0x321f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321f7c:
    // 0x321f7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_321f80:
    // 0x321f80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x321f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321f84:
    // 0x321f84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x321f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_321f88:
    // 0x321f88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x321f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321f8c:
    // 0x321f8c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x321f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321f90:
    // 0x321f90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_321f94:
    // 0x321f94: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x321f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_321f98:
    // 0x321f98: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x321f98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321f9c:
    // 0x321f9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321fa0:
    // 0x321fa0: 0x40f809  jalr        $v0
label_321fa4:
    if (ctx->pc == 0x321FA4u) {
        ctx->pc = 0x321FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FA0u;
        // 0x321fa4: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FA8u;
        goto label_321fa8;
    }
    ctx->pc = 0x321FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321FA8u);
        ctx->pc = 0x321FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FA0u;
        // 0x321fa4: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321FA0u, 0x321FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321FA8u;
label_321fa8:
    // 0x321fa8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x321fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_321fac:
    // 0x321fac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_321fb0:
    if (ctx->pc == 0x321FB0u) {
        ctx->pc = 0x321FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FACu;
        // 0x321fb0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FB4u;
        goto label_321fb4;
    }
    ctx->pc = 0x321FACu;
    {
        const bool branch_taken_0x321fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x321FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FACu;
        // 0x321fb0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fac) {
            ctx->pc = 0x321FC0u;
            goto label_321fc0;
        }
    }
    ctx->pc = 0x321FB4u;
label_321fb4:
    // 0x321fb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_321fb8:
    // 0x321fb8: 0x10000012  b           . + 4 + (0x12 << 2)
label_321fbc:
    if (ctx->pc == 0x321FBCu) {
        ctx->pc = 0x321FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FB8u;
        // 0x321fbc: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FC0u;
        goto label_321fc0;
    }
    ctx->pc = 0x321FB8u;
    {
        const bool branch_taken_0x321fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FB8u;
        // 0x321fbc: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fb8) {
            ctx->pc = 0x322004u;
            goto label_322004;
        }
    }
    ctx->pc = 0x321FC0u;
label_321fc0:
    // 0x321fc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x321fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321fc4:
    // 0x321fc4: 0xc0cf25c  jal         func_33C970
label_321fc8:
    if (ctx->pc == 0x321FC8u) {
        ctx->pc = 0x321FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC4u;
        // 0x321fc8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FCCu;
        goto label_321fcc;
    }
    ctx->pc = 0x321FC4u;
    SET_GPR_U32(ctx, 31, 0x321FCCu);
    ctx->pc = 0x321FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FC4u;
    // 0x321fc8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x321FC4u, 0x321FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FCCu;
label_321fcc:
    // 0x321fcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_321fd0:
    if (ctx->pc == 0x321FD0u) {
        ctx->pc = 0x321FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FCCu;
        // 0x321fd0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FD4u;
        goto label_321fd4;
    }
    ctx->pc = 0x321FCCu;
    {
        const bool branch_taken_0x321fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FCCu;
        // 0x321fd0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fcc) {
            ctx->pc = 0x321FF8u;
            goto label_321ff8;
        }
    }
    ctx->pc = 0x321FD4u;
label_321fd4:
    // 0x321fd4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x321fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_321fd8:
    // 0x321fd8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x321fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_321fdc:
    // 0x321fdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x321fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321fe0:
    // 0x321fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321fe4:
    // 0x321fe4: 0x40f809  jalr        $v0
label_321fe8:
    if (ctx->pc == 0x321FE8u) {
        ctx->pc = 0x321FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FE4u;
        // 0x321fe8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FECu;
        goto label_321fec;
    }
    ctx->pc = 0x321FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321FECu);
        ctx->pc = 0x321FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FE4u;
        // 0x321fe8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321FE4u, 0x321FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321FECu;
label_321fec:
    // 0x321fec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x321fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_321ff0:
    // 0x321ff0: 0x10000004  b           . + 4 + (0x4 << 2)
label_321ff4:
    if (ctx->pc == 0x321FF4u) {
        ctx->pc = 0x321FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FF0u;
        // 0x321ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FF8u;
        goto label_321ff8;
    }
    ctx->pc = 0x321FF0u;
    {
        const bool branch_taken_0x321ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FF0u;
        // 0x321ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ff0) {
            ctx->pc = 0x322004u;
            goto label_322004;
        }
    }
    ctx->pc = 0x321FF8u;
label_321ff8:
    // 0x321ff8: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x321ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_321ffc:
    // 0x321ffc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x321ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_322000:
    // 0x322000: 0x34420057  ori         $v0, $v0, 0x57
    ctx->pc = 0x322000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)87);
label_322004:
    // 0x322004: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x322004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322008:
    // 0x322008: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32200c:
    // 0x32200c: 0x3e00008  jr          $ra
label_322010:
    if (ctx->pc == 0x322010u) {
        ctx->pc = 0x322010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32200Cu;
        // 0x322010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322014u;
        goto label_322014;
    }
    ctx->pc = 0x32200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32200Cu;
        // 0x322010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32200Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322014u;
label_322014:
    // 0x322014: 0x0  nop
    ctx->pc = 0x322014u;
    // NOP
    ctx->pc = 0x322018u;
}
