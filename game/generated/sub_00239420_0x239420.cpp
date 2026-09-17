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

// Function: sub_00239420
// Address: 0x239420 - 0x239500
void sub_00239420_0x239420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239420_0x239420");
#endif

    switch (ctx->pc) {
        case 0x239444u: goto label_239444;
        case 0x23944cu: goto label_23944c;
        case 0x239460u: goto label_239460;
        case 0x239474u: goto label_239474;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394d0u: goto label_2394d0;
        default: break;
    }

    ctx->pc = 0x239420u;

    // 0x239420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23942c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23943c: 0xc042e40  jal         func_10B900
    ctx->pc = 0x23943Cu;
    SET_GPR_U32(ctx, 31, 0x239444u);
    ctx->pc = 0x239440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23943Cu;
    // 0x239440: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B900u, 0x23943Cu, 0x239444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239444u;
label_239444:
    // 0x239444: 0xc04339c  jal         func_10CE70
    ctx->pc = 0x239444u;
    SET_GPR_U32(ctx, 31, 0x23944Cu);
    ctx->pc = 0x239448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239444u;
    // 0x239448: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE70u, 0x239444u, 0x23944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23944Cu;
label_23944c:
    // 0x23944c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x239450: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239454: 0x2473d400  addiu       $s3, $v1, -0x2C00
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956032));
    // 0x239458: 0x2451d600  addiu       $s1, $v0, -0x2A00
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x23945c: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_239460:
    // 0x239460: 0x103200  sll         $a2, $s0, 8
    ctx->pc = 0x239460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x239464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239468: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x239468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x23946c: 0xc042f56  jal         func_10BD58
    ctx->pc = 0x23946Cu;
    SET_GPR_U32(ctx, 31, 0x239474u);
    ctx->pc = 0x239470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23946Cu;
    // 0x239470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD58u, 0x23946Cu, 0x239474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239474u;
label_239474:
    // 0x239474: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x239474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x239478: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x239478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23947c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x239480: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239484: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x239484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239488: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x23948c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x239490: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x239490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x239494: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x239494u;
    {
        const bool branch_taken_0x239494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239494u;
        // 0x239498: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239494) {
            ctx->pc = 0x239460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239460;
        }
    }
    ctx->pc = 0x23949Cu;
    // 0x23949c: 0xc08e7e8  jal         func_239FA0
    ctx->pc = 0x23949Cu;
    SET_GPR_U32(ctx, 31, 0x2394A4u);
    ctx->pc = 0x239FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239FA0u, 0x23949Cu, 0x2394A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394A4u;
label_2394a4:
    // 0x2394a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2394a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2394a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2394a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2394ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2394acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2394b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2394b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2394b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2394b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2394b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2394B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B8u;
        // 0x2394bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394C0u;
    // 0x2394c0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2394c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2394c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2394c8: 0x2445d608  addiu       $a1, $v0, -0x29F8
    ctx->pc = 0x2394c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956552));
    // 0x2394cc: 0x0  nop
    ctx->pc = 0x2394ccu;
    // NOP
label_2394d0:
    // 0x2394d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2394d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2394d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2394d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2394d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2394dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2394dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2394e0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2394e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2394e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2394e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2394e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2394E8u;
    {
        const bool branch_taken_0x2394e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394E8u;
        // 0x2394ec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394e8) {
            ctx->pc = 0x2394D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2394d0;
        }
    }
    ctx->pc = 0x2394F0u;
    // 0x2394f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2394F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394F8u;
    // 0x2394f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2394F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394F8u;
        // 0x2394fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239500u;
}
