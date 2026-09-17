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

// Function: sub_0048CA40
// Address: 0x48ca40 - 0x48cac0
void sub_0048CA40_0x48ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CA40_0x48ca40");
#endif

    ctx->pc = 0x48ca40u;

    // 0x48ca40: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48ca44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ca44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ca48: 0x2444d680  addiu       $a0, $v0, -0x2980
    ctx->pc = 0x48ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48ca4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ca50: 0x248522cc  addiu       $a1, $a0, 0x22CC
    ctx->pc = 0x48ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8908));
    // 0x48ca54: 0x248722d0  addiu       $a3, $a0, 0x22D0
    ctx->pc = 0x48ca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8912));
    // 0x48ca58: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x48ca58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F94Cu));
    // 0x48ca5c: 0x248622d2  addiu       $a2, $a0, 0x22D2
    ctx->pc = 0x48ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8914));
    // 0x48ca60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48ca64: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48ca68: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x48CA68u;
    {
        const bool branch_taken_0x48ca68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA68u;
        // 0x48ca6c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ca68) {
            ctx->pc = 0x48CA94u;
            goto label_48ca94;
        }
    }
    ctx->pc = 0x48CA70u;
    // 0x48ca70: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x48ca70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48ca74: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x48ca74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ca78: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x48ca78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48ca7c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x48ca7cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48ca80: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x48ca80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ca84: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x48ca84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48ca88: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x48ca88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ca8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48ca90: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x48ca90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_48ca94:
    // 0x48ca94: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x48ca94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48ca98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48CA98u;
    {
        const bool branch_taken_0x48ca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA98u;
        // 0x48ca9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ca98) {
            ctx->pc = 0x48CAA8u;
            goto label_48caa8;
        }
    }
    ctx->pc = 0x48CAA0u;
    // 0x48caa0: 0x812381a  j           func_48E068
    ctx->pc = 0x48CAA0u;
    ctx->pc = 0x48CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CAA0u;
    // 0x48caa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E068u;
    sub_0048E068_0x48e068(rdram, ctx, runtime); return;
    ctx->pc = 0x48CAA8u;
label_48caa8:
    // 0x48caa8: 0x3e00008  jr          $ra
    ctx->pc = 0x48CAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAA8u;
        // 0x48caac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CAB0u;
    // 0x48cab0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48cab4: 0x3e00008  jr          $ra
    ctx->pc = 0x48CAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAB4u;
        // 0x48cab8: 0xa440f940  sh          $zero, -0x6C0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965568), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CABCu;
    // 0x48cabc: 0x0  nop
    ctx->pc = 0x48cabcu;
    // NOP
    ctx->pc = 0x48cac0u;
}
