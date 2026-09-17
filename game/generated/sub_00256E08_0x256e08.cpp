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

// Function: sub_00256E08
// Address: 0x256e08 - 0x256ec0
void sub_00256E08_0x256e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256E08_0x256e08");
#endif

    switch (ctx->pc) {
        case 0x256e20u: goto label_256e20;
        case 0x256e80u: goto label_256e80;
        default: break;
    }

    ctx->pc = 0x256e08u;

    // 0x256e08: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x256e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e0c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x256e0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x256e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256e18: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x256e18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x256e1c: 0x0  nop
    ctx->pc = 0x256e1cu;
    // NOP
label_256e20:
    // 0x256e20: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x256e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x256e24: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x256e28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256e2c: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x256e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x256e30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256e34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256e38: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x256e38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256e3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256e44: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x256e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x256e48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x256e48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x256e4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x256E4Cu;
    {
        const bool branch_taken_0x256e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E4Cu;
        // 0x256e50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e4c) {
            ctx->pc = 0x256E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256e20;
        }
    }
    ctx->pc = 0x256E54u;
    // 0x256e54: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x256e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x256e58: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x256e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x256e5c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x256e60: 0x79640000  lq          $a0, 0x0($t3)
    ctx->pc = 0x256e60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x256e64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x256e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256e68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256e6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256e70: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x256e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x256e74: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x256e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x256e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e7c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_256e80:
    // 0x256e80: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x256e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x256e84: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x256e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x256e88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256e8c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x256e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x256e90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256e94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x256e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256e98: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x256e98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256e9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x256e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x256ea0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x256ea4: 0x28e20019  slti        $v0, $a3, 0x19
    ctx->pc = 0x256ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x256ea8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x256ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x256eac: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x256EACu;
    {
        const bool branch_taken_0x256eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EACu;
        // 0x256eb0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256eac) {
            ctx->pc = 0x256E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256e80;
        }
    }
    ctx->pc = 0x256EB4u;
    // 0x256eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x256EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256EBCu;
    // 0x256ebc: 0x0  nop
    ctx->pc = 0x256ebcu;
    // NOP
    ctx->pc = 0x256ec0u;
}
