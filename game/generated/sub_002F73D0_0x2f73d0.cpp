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

// Function: sub_002F73D0
// Address: 0x2f73d0 - 0x2f74e0
void sub_002F73D0_0x2f73d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F73D0_0x2f73d0");
#endif

    switch (ctx->pc) {
        case 0x2f73f0u: goto label_2f73f0;
        case 0x2f7400u: goto label_2f7400;
        case 0x2f7410u: goto label_2f7410;
        case 0x2f7424u: goto label_2f7424;
        case 0x2f742cu: goto label_2f742c;
        default: break;
    }

    ctx->pc = 0x2f73d0u;

    // 0x2f73d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f73d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f73d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f73d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f73d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f73dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f73dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f73e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f73e8: 0xc0bddc0  jal         func_2F7700
    ctx->pc = 0x2F73E8u;
    SET_GPR_U32(ctx, 31, 0x2F73F0u);
    ctx->pc = 0x2F73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F73E8u;
    // 0x2f73ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7700u, 0x2F73E8u, 0x2F73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F73F0u;
label_2f73f0:
    // 0x2f73f0: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x2f73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x2f73f4: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2f73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2f73f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f73f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73fc: 0x0  nop
    ctx->pc = 0x2f73fcu;
    // NOP
label_2f7400:
    // 0x2f7400: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f7400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f7404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7408: 0xc0bdb32  jal         func_2F6CC8
    ctx->pc = 0x2F7408u;
    SET_GPR_U32(ctx, 31, 0x2F7410u);
    ctx->pc = 0x2F740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7408u;
    // 0x2f740c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6CC8u, 0x2F7408u, 0x2F7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7410u;
label_2f7410:
    // 0x2f7410: 0x2a020022  slti        $v0, $s0, 0x22
    ctx->pc = 0x2f7410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x2f7414: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7414u;
    {
        const bool branch_taken_0x2f7414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7414u;
        // 0x2f7418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7414) {
            ctx->pc = 0x2F7400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7400;
        }
    }
    ctx->pc = 0x2F741Cu;
    // 0x2f741c: 0xc0bdd38  jal         func_2F74E0
    ctx->pc = 0x2F741Cu;
    SET_GPR_U32(ctx, 31, 0x2F7424u);
    ctx->pc = 0x2F7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F741Cu;
    // 0x2f7420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F74E0u, 0x2F741Cu, 0x2F7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7424u;
label_2f7424:
    // 0x2f7424: 0xc086304  jal         func_218C10
    ctx->pc = 0x2F7424u;
    SET_GPR_U32(ctx, 31, 0x2F742Cu);
    ctx->pc = 0x2F7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7424u;
    // 0x2f7428: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2F7424u, 0x2F742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F742Cu;
label_2f742c:
    // 0x2f742c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2f742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2f7430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7438: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2f7438u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f743c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F743Cu;
    {
        const bool branch_taken_0x2f743c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F743Cu;
        // 0x2f7440: 0xa222014c  sb          $v0, 0x14C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 332), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f743c) {
            ctx->pc = 0x2F7450u;
            goto label_2f7450;
        }
    }
    ctx->pc = 0x2F7444u;
    // 0x2f7444: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7448: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2f7448u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f744c: 0xa222014d  sb          $v0, 0x14D($s1)
    ctx->pc = 0x2f744cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 333), (uint8_t)GPR_U32(ctx, 2));
label_2f7450:
    // 0x2f7450: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2f7450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7454: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f7458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f745c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F745Cu;
    {
        const bool branch_taken_0x2f745c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F745Cu;
        // 0x2f7460: 0xa0620140  sb          $v0, 0x140($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f745c) {
            ctx->pc = 0x2F7474u;
            goto label_2f7474;
        }
    }
    ctx->pc = 0x2F7464u;
    // 0x2f7464: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x2f7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7468: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f746c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f7470: 0xa0620140  sb          $v0, 0x140($v1)
    ctx->pc = 0x2f7470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 2));
label_2f7474:
    // 0x2f7474: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x2f7474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7478: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7478u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f747c: 0x1845021  addu        $t2, $t4, $a0
    ctx->pc = 0x2f747cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7480: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f7484: 0x1844821  addu        $t1, $t4, $a0
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7488: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7488u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f748c: 0x1844021  addu        $t0, $t4, $a0
    ctx->pc = 0x2f748cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7490: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f7494: 0x1843821  addu        $a3, $t4, $a0
    ctx->pc = 0x2f7494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f7498: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2f7498u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f749c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f74a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f74a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2f74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f74a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f74ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f74acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f74b0: 0xa1620140  sb          $v0, 0x140($t3)
    ctx->pc = 0x2f74b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f74b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f74b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f74b8: 0xa1430140  sb          $v1, 0x140($t2)
    ctx->pc = 0x2f74b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 320), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f74bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f74bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f74c0: 0xa1240140  sb          $a0, 0x140($t1)
    ctx->pc = 0x2f74c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f74c4: 0xa1050140  sb          $a1, 0x140($t0)
    ctx->pc = 0x2f74c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 320), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f74c8: 0xa0e60140  sb          $a2, 0x140($a3)
    ctx->pc = 0x2f74c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 320), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f74cc: 0xae2c0158  sw          $t4, 0x158($s1)
    ctx->pc = 0x2f74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 12));
    // 0x2f74d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f74d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f74d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F74D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74D4u;
        // 0x2f74d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F74D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F74DCu;
    // 0x2f74dc: 0x0  nop
    ctx->pc = 0x2f74dcu;
    // NOP
    ctx->pc = 0x2f74e0u;
}
