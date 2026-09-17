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

// Function: sub_0022F8F0
// Address: 0x22f8f0 - 0x22f980
void sub_0022F8F0_0x22f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F8F0_0x22f8f0");
#endif

    switch (ctx->pc) {
        case 0x22f914u: goto label_22f914;
        case 0x22f918u: goto label_22f918;
        case 0x22f928u: goto label_22f928;
        case 0x22f95cu: goto label_22f95c;
        case 0x22f964u: goto label_22f964;
        default: break;
    }

    ctx->pc = 0x22f8f0u;

    // 0x22f8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22f8f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f900: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f908: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22f90c: 0xc08be0e  jal         func_22F838
    ctx->pc = 0x22F90Cu;
    SET_GPR_U32(ctx, 31, 0x22F914u);
    ctx->pc = 0x22F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F90Cu;
    // 0x22f910: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F838u, 0x22F90Cu, 0x22F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F914u;
label_22f914:
    // 0x22f914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f918:
    // 0x22f918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f91c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22f920: 0xc090b38  jal         func_242CE0
    ctx->pc = 0x22F920u;
    SET_GPR_U32(ctx, 31, 0x22F928u);
    ctx->pc = 0x22F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F920u;
    // 0x22f924: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242CE0u, 0x22F920u, 0x22F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F928u;
label_22f928:
    // 0x22f928: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x22f928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x22f92c: 0x2e23001e  sltiu       $v1, $s1, 0x1E
    ctx->pc = 0x22f92cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x22f930: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x22f930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22f934: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22f938: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22F938u;
    {
        const bool branch_taken_0x22f938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F938u;
        // 0x22f93c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f938) {
            ctx->pc = 0x22F918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f918;
        }
    }
    ctx->pc = 0x22F940u;
    // 0x22f940: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x22f940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x22f944: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x22f948: 0x24e72db0  addiu       $a3, $a3, 0x2DB0
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11696));
    // 0x22f94c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f950: 0x24057a58  addiu       $a1, $zero, 0x7A58
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31320));
    // 0x22f954: 0xc089248  jal         func_224920
    ctx->pc = 0x22F954u;
    SET_GPR_U32(ctx, 31, 0x22F95Cu);
    ctx->pc = 0x22F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F954u;
    // 0x22f958: 0x34c60006  ori         $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22F954u, 0x22F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F95Cu;
label_22f95c:
    // 0x22f95c: 0xc08be20  jal         func_22F880
    ctx->pc = 0x22F95Cu;
    SET_GPR_U32(ctx, 31, 0x22F964u);
    ctx->pc = 0x22F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F95Cu;
    // 0x22f960: 0xaf82a538  sw          $v0, -0x5AC8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F880u, 0x22F95Cu, 0x22F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F964u;
label_22f964:
    // 0x22f964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f96c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f970: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22f970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f974: 0x3e00008  jr          $ra
    ctx->pc = 0x22F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F974u;
        // 0x22f978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F97Cu;
    // 0x22f97c: 0x0  nop
    ctx->pc = 0x22f97cu;
    // NOP
    ctx->pc = 0x22f980u;
}
