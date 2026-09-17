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

// Function: sub_00375A38
// Address: 0x375a38 - 0x375ab8
void sub_00375A38_0x375a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375A38_0x375a38");
#endif

    switch (ctx->pc) {
        case 0x375a68u: goto label_375a68;
        default: break;
    }

    ctx->pc = 0x375a38u;

    // 0x375a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375a3c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x375a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x375a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a48: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x375a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x375a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375a50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x375a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x375a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x375a5c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x375a5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x375a60: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x375A60u;
    SET_GPR_U32(ctx, 31, 0x375A68u);
    ctx->pc = 0x375A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A60u;
    // 0x375a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x375A60u, 0x375A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A68u;
label_375a68:
    // 0x375a68: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375A68u;
    {
        const bool branch_taken_0x375a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x375A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A68u;
        // 0x375a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a68) {
            ctx->pc = 0x375A88u;
            goto label_375a88;
        }
    }
    ctx->pc = 0x375A70u;
    // 0x375a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a7c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375A7Cu;
    ctx->pc = 0x375A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A7Cu;
    // 0x375a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375A84u;
    // 0x375a84: 0x0  nop
    ctx->pc = 0x375a84u;
    // NOP
label_375a88:
    // 0x375a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a94: 0x3e00008  jr          $ra
    ctx->pc = 0x375A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A94u;
        // 0x375a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A9Cu;
    // 0x375a9c: 0x0  nop
    ctx->pc = 0x375a9cu;
    // NOP
    // 0x375aa0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375aa4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x375aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x375aa8: 0x246323a8  addiu       $v1, $v1, 0x23A8
    ctx->pc = 0x375aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9128));
    // 0x375aac: 0x3e00008  jr          $ra
    ctx->pc = 0x375AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AACu;
        // 0x375ab0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375AB4u;
    // 0x375ab4: 0x0  nop
    ctx->pc = 0x375ab4u;
    // NOP
    ctx->pc = 0x375ab8u;
}
