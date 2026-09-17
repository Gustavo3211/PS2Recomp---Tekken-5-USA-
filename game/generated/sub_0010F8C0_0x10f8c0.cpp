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

// Function: sub_0010F8C0
// Address: 0x10f8c0 - 0x10f968
void sub_0010F8C0_0x10f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F8C0_0x10f8c0");
#endif

    switch (ctx->pc) {
        case 0x10f8d8u: goto label_10f8d8;
        case 0x10f8e0u: goto label_10f8e0;
        case 0x10f904u: goto label_10f904;
        case 0x10f910u: goto label_10f910;
        case 0x10f934u: goto label_10f934;
        case 0x10f954u: goto label_10f954;
        default: break;
    }

    ctx->pc = 0x10f8c0u;

    // 0x10f8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f8c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f8c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f8d0: 0xc043dc4  jal         func_10F710
    ctx->pc = 0x10F8D0u;
    SET_GPR_U32(ctx, 31, 0x10F8D8u);
    ctx->pc = 0x10F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8D0u;
    // 0x10f8d4: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F710u, 0x10F8D0u, 0x10F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8D8u;
label_10f8d8:
    // 0x10f8d8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10F8D8u;
    SET_GPR_U32(ctx, 31, 0x10F8E0u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10F8D8u, 0x10F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8E0u;
label_10f8e0:
    // 0x10f8e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10f8e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f8e8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10f8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10f8ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10f8ecu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10f8f0: 0xf  sync
    ctx->pc = 0x10f8f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10f8f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F8F4u;
    {
        const bool branch_taken_0x10f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8F4u;
        // 0x10f8f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8f4) {
            ctx->pc = 0x10F908u;
            goto label_10f908;
        }
    }
    ctx->pc = 0x10F8FCu;
    // 0x10f8fc: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10F8FCu;
    SET_GPR_U32(ctx, 31, 0x10F904u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10F8FCu, 0x10F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F904u;
label_10f904:
    // 0x10f904: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10f904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10f908:
    // 0x10f908: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10f908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10f90c: 0x0  nop
    ctx->pc = 0x10f90cu;
    // NOP
label_10f910:
    // 0x10f910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x10f914: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10f918: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F918u;
    {
        const bool branch_taken_0x10f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f918) {
            ctx->pc = 0x10F92Cu;
            goto label_10f92c;
        }
    }
    ctx->pc = 0x10F920u;
    // 0x10f920: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f924: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10F924u;
    {
        const bool branch_taken_0x10f924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f924) {
            ctx->pc = 0x10F910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f910;
        }
    }
    ctx->pc = 0x10F92Cu;
label_10f92c:
    // 0x10f92c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10F92Cu;
    SET_GPR_U32(ctx, 31, 0x10F934u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10F92Cu, 0x10F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F934u;
label_10f934:
    // 0x10f934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f938: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10f93c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x10f93cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x10f940: 0xf  sync
    ctx->pc = 0x10f940u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10f944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F944u;
    {
        const bool branch_taken_0x10f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f944) {
            ctx->pc = 0x10F954u;
            goto label_10f954;
        }
    }
    ctx->pc = 0x10F94Cu;
    // 0x10f94c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10F94Cu;
    SET_GPR_U32(ctx, 31, 0x10F954u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10F94Cu, 0x10F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F954u;
label_10f954:
    // 0x10f954: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x10f954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F95Cu;
        // 0x10f960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F964u;
    // 0x10f964: 0x0  nop
    ctx->pc = 0x10f964u;
    // NOP
    ctx->pc = 0x10f968u;
}
