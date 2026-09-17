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

// Function: sub_004A9B30
// Address: 0x4a9b30 - 0x4a9bc0
void sub_004A9B30_0x4a9b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B30_0x4a9b30");
#endif

    ctx->pc = 0x4a9b30u;

    // 0x4a9b30: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a9b34: 0x2462d680  addiu       $v0, $v1, -0x2980
    ctx->pc = 0x4a9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4a9b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a9b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b3c: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x4a9b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a9b40: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x4a9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x4a9b44: 0x84a3006c  lh          $v1, 0x6C($a1)
    ctx->pc = 0x4a9b44u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6ECu));
    // 0x4a9b48: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a9b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D686u));
    // 0x4a9b4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a9b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9b50: 0x24a7006e  addiu       $a3, $a1, 0x6E
    ctx->pc = 0x4a9b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 110));
    // 0x4a9b54: 0x24c8009c  addiu       $t0, $a2, 0x9C
    ctx->pc = 0x4a9b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 156));
    // 0x4a9b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a9b5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9B5Cu;
    {
        const bool branch_taken_0x4a9b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B5Cu;
        // 0x4a9b60: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b5c) {
            ctx->pc = 0x4A9B70u;
            goto label_4a9b70;
        }
    }
    ctx->pc = 0x4A9B64u;
    // 0x4a9b64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9B64u;
    {
        const bool branch_taken_0x4a9b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B64u;
        // 0x4a9b68: 0xa4a0006e  sh          $zero, 0x6E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 110), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b64) {
            ctx->pc = 0x4A9B7Cu;
            goto label_4a9b7c;
        }
    }
    ctx->pc = 0x4A9B6Cu;
    // 0x4a9b6c: 0x0  nop
    ctx->pc = 0x4a9b6cu;
    // NOP
label_4a9b70:
    // 0x4a9b70: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a9b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a9b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a9b78: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4a9b78u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a9b7c:
    // 0x4a9b7c: 0x84c2006e  lh          $v0, 0x6E($a2)
    ctx->pc = 0x4a9b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 110)));
    // 0x4a9b80: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4A9B80u;
    {
        const bool branch_taken_0x4a9b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9b80) {
            ctx->pc = 0x4A9B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9B80u;
            // 0x4a9b84: 0x95220000  lhu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9BB0u;
            goto label_4a9bb0;
        }
    }
    ctx->pc = 0x4A9B88u;
    // 0x4a9b88: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4a9b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a9b8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9B8Cu;
    {
        const bool branch_taken_0x4a9b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B8Cu;
        // 0x4a9b90: 0x24c3009e  addiu       $v1, $a2, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b8c) {
            ctx->pc = 0x4A9BA4u;
            goto label_4a9ba4;
        }
    }
    ctx->pc = 0x4A9B94u;
    // 0x4a9b94: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x4a9b94u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a9b98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a9b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9b9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4a9b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4a9ba0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a9ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a9ba4:
    // 0x4a9ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9ba8: 0xa4c20070  sh          $v0, 0x70($a2)
    ctx->pc = 0x4a9ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a9bac: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4a9bacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4a9bb0:
    // 0x4a9bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a9bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9BB4u;
        // 0x4a9bb8: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9BBCu;
    // 0x4a9bbc: 0x0  nop
    ctx->pc = 0x4a9bbcu;
    // NOP
    ctx->pc = 0x4a9bc0u;
}
