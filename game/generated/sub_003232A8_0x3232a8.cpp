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

// Function: sub_003232A8
// Address: 0x3232a8 - 0x323368
void sub_003232A8_0x3232a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003232A8_0x3232a8");
#endif

    switch (ctx->pc) {
        case 0x3232e4u: goto label_3232e4;
        case 0x323308u: goto label_323308;
        case 0x323310u: goto label_323310;
        case 0x323344u: goto label_323344;
        case 0x323350u: goto label_323350;
        default: break;
    }

    ctx->pc = 0x3232a8u;

    // 0x3232a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3232a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3232ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3232acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3232b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3232b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3232b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3232b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3232b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3232b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3232bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3232bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3232c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3232c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3232c4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3232C4u;
    {
        const bool branch_taken_0x3232c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3232C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C4u;
        // 0x3232c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232c4) {
            ctx->pc = 0x323338u;
            goto label_323338;
        }
    }
    ctx->pc = 0x3232CCu;
    // 0x3232cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3232CCu;
    {
        const bool branch_taken_0x3232cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232CCu;
        // 0x3232d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232cc) {
            ctx->pc = 0x323300u;
            goto label_323300;
        }
    }
    ctx->pc = 0x3232D4u;
    // 0x3232d4: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3232D4u;
    {
        const bool branch_taken_0x3232d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3232d4) {
            ctx->pc = 0x3232D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3232D4u;
            // 0x3232d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323354u;
            goto label_323354;
        }
    }
    ctx->pc = 0x3232DCu;
    // 0x3232dc: 0xc0ca85c  jal         func_32A170
    ctx->pc = 0x3232DCu;
    SET_GPR_U32(ctx, 31, 0x3232E4u);
    ctx->pc = 0x3232E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232DCu;
    // 0x3232e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A170u, 0x3232DCu, 0x3232E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3232E4u;
label_3232e4:
    // 0x3232e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3232e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3232e8: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x3232e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x3232ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3232ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3232f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3232f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3232f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3232f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3232f8: 0x80ca926  j           func_32A498
    ctx->pc = 0x3232F8u;
    ctx->pc = 0x3232FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3232F8u;
    // 0x3232fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A498u, 0x3232F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323300u;
label_323300:
    // 0x323300: 0xc0ca85c  jal         func_32A170
    ctx->pc = 0x323300u;
    SET_GPR_U32(ctx, 31, 0x323308u);
    ctx->pc = 0x323304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323300u;
    // 0x323304: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A170u, 0x323300u, 0x323308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323308u;
label_323308:
    // 0x323308: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x323308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x32330c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x32330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_323310:
    // 0x323310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x323314: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x323314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x323318: 0x0  nop
    ctx->pc = 0x323318u;
    // NOP
    // 0x32331c: 0x0  nop
    ctx->pc = 0x32331cu;
    // NOP
    // 0x323320: 0x0  nop
    ctx->pc = 0x323320u;
    // NOP
    // 0x323324: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x323324u;
    {
        const bool branch_taken_0x323324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323324u;
        // 0x323328: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323324) {
            ctx->pc = 0x323310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323310;
        }
    }
    ctx->pc = 0x32332Cu;
    // 0x32332c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32332Cu;
    {
        const bool branch_taken_0x32332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32332Cu;
        // 0x323330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32332c) {
            ctx->pc = 0x323354u;
            goto label_323354;
        }
    }
    ctx->pc = 0x323334u;
    // 0x323334: 0x0  nop
    ctx->pc = 0x323334u;
    // NOP
label_323338:
    // 0x323338: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32333c: 0xc0ca85c  jal         func_32A170
    ctx->pc = 0x32333Cu;
    SET_GPR_U32(ctx, 31, 0x323344u);
    ctx->pc = 0x323340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32333Cu;
    // 0x323340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A170u, 0x32333Cu, 0x323344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323344u;
label_323344:
    // 0x323344: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x323344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323348: 0xc0ca876  jal         func_32A1D8
    ctx->pc = 0x323348u;
    SET_GPR_U32(ctx, 31, 0x323350u);
    ctx->pc = 0x32334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323348u;
    // 0x32334c: 0x26250024  addiu       $a1, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1D8u, 0x323348u, 0x323350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323350u;
label_323350:
    // 0x323350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323354:
    // 0x323354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32335c: 0x3e00008  jr          $ra
    ctx->pc = 0x32335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32335Cu;
        // 0x323360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323364u;
    // 0x323364: 0x0  nop
    ctx->pc = 0x323364u;
    // NOP
    ctx->pc = 0x323368u;
}
