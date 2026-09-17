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

// Function: sub_002E73E0
// Address: 0x2e73e0 - 0x2e7490
void sub_002E73E0_0x2e73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E73E0_0x2e73e0");
#endif

    switch (ctx->pc) {
        case 0x2e7408u: goto label_2e7408;
        case 0x2e743cu: goto label_2e743c;
        case 0x2e7474u: goto label_2e7474;
        default: break;
    }

    ctx->pc = 0x2e73e0u;

    // 0x2e73e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e73e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e73e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e73e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e73e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e73ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e73ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e73f4: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2e73f8: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2e73f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2e73fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e73fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7400: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2E7400u;
    SET_GPR_U32(ctx, 31, 0x2E7408u);
    ctx->pc = 0x2E7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7400u;
    // 0x2e7404: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2E7400u, 0x2E7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7408u;
label_2e7408:
    // 0x2e7408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e740c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e740cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e7410: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7410u;
    {
        const bool branch_taken_0x2e7410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7410u;
        // 0x2e7414: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7410) {
            ctx->pc = 0x2E7428u;
            goto label_2e7428;
        }
    }
    ctx->pc = 0x2E7418u;
    // 0x2e7418: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e741c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e7420: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7420u;
    {
        const bool branch_taken_0x2e7420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7420) {
            ctx->pc = 0x2E7434u;
            goto label_2e7434;
        }
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e742c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7430: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2e7434:
    // 0x2e7434: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E7434u;
    SET_GPR_U32(ctx, 31, 0x2E743Cu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E7434u, 0x2E743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E743Cu;
label_2e743c:
    // 0x2e743c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e743cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e7440: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2e7440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2e7444: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7448: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7448u;
    {
        const bool branch_taken_0x2e7448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7448u;
        // 0x2e744c: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7448) {
            ctx->pc = 0x2E7460u;
            goto label_2e7460;
        }
    }
    ctx->pc = 0x2E7450u;
    // 0x2e7450: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e7454: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e7458: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7458u;
    {
        const bool branch_taken_0x2e7458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7458) {
            ctx->pc = 0x2E746Cu;
            goto label_2e746c;
        }
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e7460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e7464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e7464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7468: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2e746c:
    // 0x2e746c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E746Cu;
    SET_GPR_U32(ctx, 31, 0x2E7474u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E746Cu, 0x2E7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7474u;
label_2e7474:
    // 0x2e7474: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2e7474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2e7478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e7478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e747c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e747cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e7480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7484: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7484u;
        // 0x2e7488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E748Cu;
    // 0x2e748c: 0x0  nop
    ctx->pc = 0x2e748cu;
    // NOP
    ctx->pc = 0x2e7490u;
}
