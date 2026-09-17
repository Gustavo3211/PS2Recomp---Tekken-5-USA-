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

// Function: sub_00500CE0
// Address: 0x500ce0 - 0x500dd0
void sub_00500CE0_0x500ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500CE0_0x500ce0");
#endif

    switch (ctx->pc) {
        case 0x500d04u: goto label_500d04;
        case 0x500d10u: goto label_500d10;
        case 0x500da0u: goto label_500da0;
        case 0x500dacu: goto label_500dac;
        default: break;
    }

    ctx->pc = 0x500ce0u;

label_500ce0:
    // 0x500ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500ce4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x500ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x500ce8: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500cec: 0x2610a680  addiu       $s0, $s0, -0x5980
    ctx->pc = 0x500cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944384));
    // 0x500cf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x500cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x500cf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x500cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500cf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x500cfc: 0xc1401f2  jal         func_5007C8
    ctx->pc = 0x500CFCu;
    SET_GPR_U32(ctx, 31, 0x500D04u);
    ctx->pc = 0x500D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500CFCu;
    // 0x500d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5007C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5007C8u, 0x500CFCu, 0x500D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500D04u;
label_500d04:
    // 0x500d04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x500d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d08: 0xc14020e  jal         func_500838
    ctx->pc = 0x500D08u;
    SET_GPR_U32(ctx, 31, 0x500D10u);
    ctx->pc = 0x500D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500D08u;
    // 0x500d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500838u, 0x500D08u, 0x500D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500D10u;
label_500d10:
    // 0x500d10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x500d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500d14: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x500d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x500d18: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x500d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500d1c: 0x246a0fff  addiu       $t2, $v1, 0xFFF
    ctx->pc = 0x500d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x500d20: 0x28680000  slti        $t0, $v1, 0x0
    ctx->pc = 0x500d20u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500d24: 0x24890fff  addiu       $t1, $a0, 0xFFF
    ctx->pc = 0x500d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x500d28: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x500d28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500d2c: 0x24470fff  addiu       $a3, $v0, 0xFFF
    ctx->pc = 0x500d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x500d30: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x500d30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500d34: 0x148180b  movn        $v1, $t2, $t0
    ctx->pc = 0x500d34u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x500d38: 0x126200b  movn        $a0, $t1, $a2
    ctx->pc = 0x500d38u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 9));
    // 0x500d3c: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x500d3cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x500d40: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x500d40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x500d44: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x500d44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x500d48: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x500d48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x500d4c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x500d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x500d50: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x500d50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x500d54: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x500d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x500d58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x500d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500d5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x500d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x500d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500d64: 0x3e00008  jr          $ra
    ctx->pc = 0x500D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500D64u;
        // 0x500d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500D6Cu;
    // 0x500d6c: 0x0  nop
    ctx->pc = 0x500d6cu;
    // NOP
    // 0x500d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500d78: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x500d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x500d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d84: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x500d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500d8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500d90: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x500d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x500d98: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500D98u;
    SET_GPR_U32(ctx, 31, 0x500DA0u);
    ctx->pc = 0x500D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500D98u;
    // 0x500d9c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500CE0u;
    goto label_500ce0;
    ctx->pc = 0x500DA0u;
label_500da0:
    // 0x500da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x500da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500da4: 0xc140338  jal         func_500CE0
    ctx->pc = 0x500DA4u;
    SET_GPR_U32(ctx, 31, 0x500DACu);
    ctx->pc = 0x500DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500DA4u;
    // 0x500da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500CE0u;
    goto label_500ce0;
    ctx->pc = 0x500DACu;
label_500dac:
    // 0x500dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500db0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x500db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500db4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x500db4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500dc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x500dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500dc8: 0x8140338  j           func_500CE0
    ctx->pc = 0x500DC8u;
    ctx->pc = 0x500DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500DC8u;
    // 0x500dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500CE0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_500ce0;
    ctx->pc = 0x500DD0u;
}
