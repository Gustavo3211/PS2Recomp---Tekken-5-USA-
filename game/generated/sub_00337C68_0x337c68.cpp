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

// Function: sub_00337C68
// Address: 0x337c68 - 0x337d10
void sub_00337C68_0x337c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337C68_0x337c68");
#endif

    switch (ctx->pc) {
        case 0x337cd8u: goto label_337cd8;
        case 0x337ce8u: goto label_337ce8;
        default: break;
    }

    ctx->pc = 0x337c68u;

label_337c68:
    // 0x337c68: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x337c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x337c6c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337c70: 0x24660a60  addiu       $a2, $v1, 0xA60
    ctx->pc = 0x337c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337c74: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x337c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440A68u));
    // 0x337c78: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x337C78u;
    {
        const bool branch_taken_0x337c78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x337C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C78u;
        // 0x337c7c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c78) {
            ctx->pc = 0x337CACu;
            goto label_337cac;
        }
    }
    ctx->pc = 0x337C80u;
    // 0x337c80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337C80u;
    {
        const bool branch_taken_0x337c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c80) {
            ctx->pc = 0x337C90u;
            goto label_337c90;
        }
    }
    ctx->pc = 0x337C88u;
    // 0x337c88: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x337c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x337c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x337c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_337c90:
    // 0x337c90: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x337C90u;
    {
        const bool branch_taken_0x337c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c90) {
            ctx->pc = 0x337C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337C90u;
            // 0x337c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337CACu;
            goto label_337cac;
        }
    }
    ctx->pc = 0x337C98u;
    // 0x337c98: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x337c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x337c9c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x337c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x337ca0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x337ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337ca4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x337ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x337ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337cac:
    // 0x337cac: 0x3e00008  jr          $ra
    ctx->pc = 0x337CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337CB4u;
    // 0x337cb4: 0x0  nop
    ctx->pc = 0x337cb4u;
    // NOP
    // 0x337cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337cc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337ccc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337cd0: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337CD0u;
    SET_GPR_U32(ctx, 31, 0x337CD8u);
    ctx->pc = 0x337CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CD0u;
    // 0x337cd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337CD0u, 0x337CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337CD8u;
label_337cd8:
    // 0x337cd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x337cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ce0: 0xc0cdf1a  jal         func_337C68
    ctx->pc = 0x337CE0u;
    SET_GPR_U32(ctx, 31, 0x337CE8u);
    ctx->pc = 0x337CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CE0u;
    // 0x337ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337C68u;
    goto label_337c68;
    ctx->pc = 0x337CE8u;
label_337ce8:
    // 0x337ce8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x337CE8u;
    {
        const bool branch_taken_0x337ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x337CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CE8u;
        // 0x337cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ce8) {
            ctx->pc = 0x337CFCu;
            goto label_337cfc;
        }
    }
    ctx->pc = 0x337CF0u;
    // 0x337cf0: 0xf  sync
    ctx->pc = 0x337cf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337cf4: 0x42000038  ei
    ctx->pc = 0x337cf4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337cfc:
    // 0x337cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337d08: 0x3e00008  jr          $ra
    ctx->pc = 0x337D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D08u;
        // 0x337d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337D10u;
}
