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

// Function: sub_00375BB8
// Address: 0x375bb8 - 0x375c30
void sub_00375BB8_0x375bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375BB8_0x375bb8");
#endif

    switch (ctx->pc) {
        case 0x375be8u: goto label_375be8;
        default: break;
    }

    ctx->pc = 0x375bb8u;

    // 0x375bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375bbc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375bc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x375bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x375bc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bc8: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x375bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x375bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375bd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375bd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x375bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x375bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x375bdc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x375bdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x375be0: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x375BE0u;
    SET_GPR_U32(ctx, 31, 0x375BE8u);
    ctx->pc = 0x375BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BE0u;
    // 0x375be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x375BE0u, 0x375BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BE8u;
label_375be8:
    // 0x375be8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375BE8u;
    {
        const bool branch_taken_0x375be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x375BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BE8u;
        // 0x375bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375be8) {
            ctx->pc = 0x375C08u;
            goto label_375c08;
        }
    }
    ctx->pc = 0x375BF0u;
    // 0x375bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375bfc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375BFCu;
    ctx->pc = 0x375C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BFCu;
    // 0x375c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375C04u;
    // 0x375c04: 0x0  nop
    ctx->pc = 0x375c04u;
    // NOP
label_375c08:
    // 0x375c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375c14: 0x3e00008  jr          $ra
    ctx->pc = 0x375C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C14u;
        // 0x375c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C1Cu;
    // 0x375c1c: 0x0  nop
    ctx->pc = 0x375c1cu;
    // NOP
    // 0x375c20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375c24: 0x24632480  addiu       $v1, $v1, 0x2480
    ctx->pc = 0x375c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9344));
    // 0x375c28: 0x3e00008  jr          $ra
    ctx->pc = 0x375C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C28u;
        // 0x375c2c: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C30u;
}
