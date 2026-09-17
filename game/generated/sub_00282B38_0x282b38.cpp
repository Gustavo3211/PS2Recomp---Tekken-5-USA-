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

// Function: sub_00282B38
// Address: 0x282b38 - 0x282bc8
void sub_00282B38_0x282b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282B38_0x282b38");
#endif

    switch (ctx->pc) {
        case 0x282b58u: goto label_282b58;
        case 0x282b98u: goto label_282b98;
        default: break;
    }

    ctx->pc = 0x282b38u;

    // 0x282b38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x282b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b40: 0x24ec0004  addiu       $t4, $a3, 0x4
    ctx->pc = 0x282b40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x282b44: 0xace00064  sw          $zero, 0x64($a3)
    ctx->pc = 0x282b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 0));
    // 0x282b48: 0x24eb000c  addiu       $t3, $a3, 0xC
    ctx->pc = 0x282b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x282b4c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x282b4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b50: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x282b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x282b54: 0x0  nop
    ctx->pc = 0x282b54u;
    // NOP
label_282b58:
    // 0x282b58: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x282b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x282b5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x282b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x282b60: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x282b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x282b64: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x282b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x282b68: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x282b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x282b6c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x282b70: 0x2905000d  slti        $a1, $t0, 0xD
    ctx->pc = 0x282b70u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x282b74: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x282b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x282b78: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x282b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x282b7c: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x282b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x282b80: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x282B80u;
    {
        const bool branch_taken_0x282b80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B80u;
        // 0x282b84: 0xacc00110  sw          $zero, 0x110($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b80) {
            ctx->pc = 0x282B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282b58;
        }
    }
    ctx->pc = 0x282B88u;
    // 0x282b88: 0xace0014c  sw          $zero, 0x14C($a3)
    ctx->pc = 0x282b88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 332), GPR_U32(ctx, 0));
    // 0x282b8c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x282b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b90: 0xace00150  sw          $zero, 0x150($a3)
    ctx->pc = 0x282b90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 336), GPR_U32(ctx, 0));
    // 0x282b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282b98:
    // 0x282b98: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x282b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x282b9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x282b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x282ba0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x282ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x282ba4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x282ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x282ba8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x282ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x282bac: 0xac400150  sw          $zero, 0x150($v0)
    ctx->pc = 0x282bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
    // 0x282bb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282BB0u;
    {
        const bool branch_taken_0x282bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BB0u;
        // 0x282bb4: 0xac800160  sw          $zero, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282bb0) {
            ctx->pc = 0x282B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282b98;
        }
    }
    ctx->pc = 0x282BB8u;
    // 0x282bb8: 0xace00170  sw          $zero, 0x170($a3)
    ctx->pc = 0x282bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 368), GPR_U32(ctx, 0));
    // 0x282bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x282BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282BBCu;
        // 0x282bc0: 0xace0016c  sw          $zero, 0x16C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282BC4u;
    // 0x282bc4: 0x0  nop
    ctx->pc = 0x282bc4u;
    // NOP
    ctx->pc = 0x282bc8u;
}
