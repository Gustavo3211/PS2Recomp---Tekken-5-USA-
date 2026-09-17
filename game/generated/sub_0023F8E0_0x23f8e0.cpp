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

// Function: sub_0023F8E0
// Address: 0x23f8e0 - 0x23f988
void sub_0023F8E0_0x23f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F8E0_0x23f8e0");
#endif

    switch (ctx->pc) {
        case 0x23f90cu: goto label_23f90c;
        case 0x23f920u: goto label_23f920;
        case 0x23f960u: goto label_23f960;
        case 0x23f970u: goto label_23f970;
        default: break;
    }

    ctx->pc = 0x23f8e0u;

    // 0x23f8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23f8e4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x23f8e8: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x23f8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x23f8ec: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x23f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x23f8f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f8f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23f8fc: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x23f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x23f900: 0x26103580  addiu       $s0, $s0, 0x3580
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13696));
    // 0x23f904: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x23F904u;
    SET_GPR_U32(ctx, 31, 0x23F90Cu);
    ctx->pc = 0x23F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F904u;
    // 0x23f908: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x23F904u, 0x23F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F90Cu;
label_23f90c:
    // 0x23f90c: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x23f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x23f910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23f910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f914: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23f914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23f918: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x23F918u;
    SET_GPR_U32(ctx, 31, 0x23F920u);
    ctx->pc = 0x23F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F918u;
    // 0x23f91c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x23F918u, 0x23F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F920u;
label_23f920:
    // 0x23f920: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x23f924: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23f924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23f928: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x23f928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x23f92c: 0x2463f898  addiu       $v1, $v1, -0x768
    ctx->pc = 0x23f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965400));
    // 0x23f930: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23f934: 0x24061c00  addiu       $a2, $zero, 0x1C00
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x23f938: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x23f93c: 0x24e78870  addiu       $a3, $a3, -0x7790
    ctx->pc = 0x23f93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936688));
    // 0x23f940: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x23f940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23f944: 0x24a51080  addiu       $a1, $a1, 0x1080
    ctx->pc = 0x23f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x23f948: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x23f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x23f94c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x23f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x23f950: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x23f950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x23f954: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x23f954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x23f958: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x23F958u;
    SET_GPR_U32(ctx, 31, 0x23F960u);
    ctx->pc = 0x23F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F958u;
    // 0x23f95c: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x23F958u, 0x23F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F960u;
label_23f960:
    // 0x23f960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f968: 0xc044138  jal         func_1104E0
    ctx->pc = 0x23F968u;
    SET_GPR_U32(ctx, 31, 0x23F970u);
    ctx->pc = 0x23F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F968u;
    // 0x23f96c: 0xaf82c998  sw          $v0, -0x3668($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x23F968u, 0x23F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F970u;
label_23f970:
    // 0x23f970: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x23f970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f974: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x23f974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23f978: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F97Cu;
        // 0x23f980: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F984u;
    // 0x23f984: 0x0  nop
    ctx->pc = 0x23f984u;
    // NOP
    ctx->pc = 0x23f988u;
}
