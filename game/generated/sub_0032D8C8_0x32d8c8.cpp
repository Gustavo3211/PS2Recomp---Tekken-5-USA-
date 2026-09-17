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

// Function: sub_0032D8C8
// Address: 0x32d8c8 - 0x32d928
void sub_0032D8C8_0x32d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D8C8_0x32d8c8");
#endif

    switch (ctx->pc) {
        case 0x32d8e0u: goto label_32d8e0;
        case 0x32d91cu: goto label_32d91c;
        default: break;
    }

    ctx->pc = 0x32d8c8u;

    // 0x32d8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d8cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32d8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d8d4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x32d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32d8d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d8dc: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x32d8dcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_32d8e0:
    // 0x32d8e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x32d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x32d8e4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x32d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x32d8e8: 0x0  nop
    ctx->pc = 0x32d8e8u;
    // NOP
    // 0x32d8ec: 0x0  nop
    ctx->pc = 0x32d8ecu;
    // NOP
    // 0x32d8f0: 0x0  nop
    ctx->pc = 0x32d8f0u;
    // NOP
    // 0x32d8f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32D8F4u;
    {
        const bool branch_taken_0x32d8f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8F4u;
        // 0x32d8f8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8f4) {
            ctx->pc = 0x32D8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d8e0;
        }
    }
    ctx->pc = 0x32D8FCu;
    // 0x32d8fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d900: 0xac6000e0  sw          $zero, 0xE0($v1)
    ctx->pc = 0x32d900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
    // 0x32d904: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x32d904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
    // 0x32d908: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d90c: 0xac6000e4  sw          $zero, 0xE4($v1)
    ctx->pc = 0x32d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 0));
    // 0x32d910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d914: 0xc0cb77e  jal         func_32DDF8
    ctx->pc = 0x32D914u;
    SET_GPR_U32(ctx, 31, 0x32D91Cu);
    ctx->pc = 0x32D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D914u;
    // 0x32d918: 0xac6000ec  sw          $zero, 0xEC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DDF8u, 0x32D914u, 0x32D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D91Cu;
label_32d91c:
    // 0x32d91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d920: 0x3e00008  jr          $ra
    ctx->pc = 0x32D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D920u;
        // 0x32d924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D928u;
}
