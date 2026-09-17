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

// Function: sub_00256D38
// Address: 0x256d38 - 0x256e08
void sub_00256D38_0x256d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256D38_0x256d38");
#endif

    switch (ctx->pc) {
        case 0x256d80u: goto label_256d80;
        case 0x256d98u: goto label_256d98;
        case 0x256db8u: goto label_256db8;
        default: break;
    }

    ctx->pc = 0x256d38u;

    // 0x256d38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x256d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x256d3c: 0x8f82cc64  lw          $v0, -0x339C($gp)
    ctx->pc = 0x256d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954084)));
    // 0x256d40: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x256d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x256d44: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x256d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x256d48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x256d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d4c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x256d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x256d50: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x256d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x256d54: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x256d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x256d58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x256d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d5c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x256d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x256d60: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x256d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d64: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x256d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x256d68: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x256d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256d6c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x256d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x256d70: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x256D70u;
    {
        const bool branch_taken_0x256d70 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x256D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D70u;
        // 0x256d74: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d70) {
            ctx->pc = 0x256DA0u;
            goto label_256da0;
        }
    }
    ctx->pc = 0x256D78u;
    // 0x256d78: 0x8f86cc60  lw          $a2, -0x33A0($gp)
    ctx->pc = 0x256d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
    // 0x256d7c: 0x0  nop
    ctx->pc = 0x256d7cu;
    // NOP
label_256d80:
    // 0x256d80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x256d84: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x256d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x256d88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x256d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x256d90: 0xc08491e  jal         func_212478
    ctx->pc = 0x256D90u;
    SET_GPR_U32(ctx, 31, 0x256D98u);
    ctx->pc = 0x256D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D90u;
    // 0x256d94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x256D90u, 0x256D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D98u;
label_256d98:
    // 0x256d98: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x256D98u;
    {
        const bool branch_taken_0x256d98 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x256D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D98u;
        // 0x256d9c: 0x8f86cc60  lw          $a2, -0x33A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d98) {
            ctx->pc = 0x256D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256d80;
        }
    }
    ctx->pc = 0x256DA0u;
label_256da0:
    // 0x256da0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x256da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256da8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x256da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x256dac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256db0: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x256db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x256db4: 0x0  nop
    ctx->pc = 0x256db4u;
    // NOP
label_256db8:
    // 0x256db8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x256db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x256dbc: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x256dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x256dc0: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x256dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x256dc4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x256dc8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x256dc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256dcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256dd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x256dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x256dd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x256dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x256dd8: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x256dd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x256ddc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x256DDCu;
    {
        const bool branch_taken_0x256ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x256DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DDCu;
        // 0x256de0: 0x7c430140  sq          $v1, 0x140($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ddc) {
            ctx->pc = 0x256DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256db8;
        }
    }
    ctx->pc = 0x256DE4u;
    // 0x256de4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x256de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256de8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x256de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x256dec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x256decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256df0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x256df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x256df4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x256df4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256df8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x256df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x256dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x256DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DFCu;
        // 0x256e00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256E04u;
    // 0x256e04: 0x0  nop
    ctx->pc = 0x256e04u;
    // NOP
    ctx->pc = 0x256e08u;
}
