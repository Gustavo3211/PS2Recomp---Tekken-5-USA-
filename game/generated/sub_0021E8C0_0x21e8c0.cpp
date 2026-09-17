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

// Function: sub_0021E8C0
// Address: 0x21e8c0 - 0x21e948
void sub_0021E8C0_0x21e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E8C0_0x21e8c0");
#endif

    switch (ctx->pc) {
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e910u: goto label_21e910;
        default: break;
    }

    ctx->pc = 0x21e8c0u;

    // 0x21e8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e8c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x21e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x21e8c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21e8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e8d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21e8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e8d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e8dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e8e0: 0x24120015  addiu       $s2, $zero, 0x15
    ctx->pc = 0x21e8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21e8e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21e8e8: 0x2413026b  addiu       $s3, $zero, 0x26B
    ctx->pc = 0x21e8e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x21e8ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21e8f0: 0x2454bed8  addiu       $s4, $v0, -0x4128
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950616));
    // 0x21e8f4: 0x0  nop
    ctx->pc = 0x21e8f4u;
    // NOP
label_21e8f8:
    // 0x21e8f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e900: 0x270280b  movn        $a1, $s3, $s0
    ctx->pc = 0x21e900u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x21e904: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e908: 0xc08750c  jal         func_21D430
    ctx->pc = 0x21E908u;
    SET_GPR_U32(ctx, 31, 0x21E910u);
    ctx->pc = 0x21E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E908u;
    // 0x21e90c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D430u, 0x21E908u, 0x21E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E910u;
label_21e910:
    // 0x21e910: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21e910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21e914: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e918: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21e91c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x21e91cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21e920: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21E920u;
    {
        const bool branch_taken_0x21e920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E920u;
        // 0x21e924: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e920) {
            ctx->pc = 0x21E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e8f8;
        }
    }
    ctx->pc = 0x21E928u;
    // 0x21e928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e92c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e934: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21e934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e938: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21e938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e93c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21e93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e940: 0x3e00008  jr          $ra
    ctx->pc = 0x21E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E940u;
        // 0x21e944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E948u;
}
