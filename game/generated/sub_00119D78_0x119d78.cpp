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

// Function: sub_00119D78
// Address: 0x119d78 - 0x119e28
void sub_00119D78_0x119d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119D78_0x119d78");
#endif

    switch (ctx->pc) {
        case 0x119dc8u: goto label_119dc8;
        case 0x119de8u: goto label_119de8;
        case 0x119df8u: goto label_119df8;
        case 0x119e08u: goto label_119e08;
        default: break;
    }

    ctx->pc = 0x119d78u;

label_119d78:
    // 0x119d78: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x119d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x119d7c: 0x24432148  addiu       $v1, $v0, 0x2148
    ctx->pc = 0x119d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119d80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x119d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x132150u));
    // 0x119d84: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119D84u;
    {
        const bool branch_taken_0x119d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x119d84) {
            ctx->pc = 0x119D98u;
            goto label_119d98;
        }
    }
    ctx->pc = 0x119D8Cu;
    // 0x119d8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119d90: 0x3e00008  jr          $ra
    ctx->pc = 0x119D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D90u;
        // 0x119d94: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D98u;
label_119d98:
    // 0x119d98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119D98u;
    {
        const bool branch_taken_0x119d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x119d98) {
            ctx->pc = 0x119DA8u;
            goto label_119da8;
        }
    }
    ctx->pc = 0x119DA0u;
    // 0x119da0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x119da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x119da4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x119da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_119da8:
    // 0x119da8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119DA8u;
    {
        const bool branch_taken_0x119da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x119da8) {
            ctx->pc = 0x119DC0u;
            goto label_119dc0;
        }
    }
    ctx->pc = 0x119DB0u;
    // 0x119db0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x119db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x119db4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x119db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x119db8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119dbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x119dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_119dc0:
    // 0x119dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x119DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DC0u;
        // 0x119dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119DC8u;
label_119dc8:
    // 0x119dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119dcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119dd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119ddc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119de0: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119DE0u;
    SET_GPR_U32(ctx, 31, 0x119DE8u);
    ctx->pc = 0x119DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DE0u;
    // 0x119de4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119DE0u, 0x119DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DE8u;
label_119de8:
    // 0x119de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119df0: 0xc04675e  jal         func_119D78
    ctx->pc = 0x119DF0u;
    SET_GPR_U32(ctx, 31, 0x119DF8u);
    ctx->pc = 0x119DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DF0u;
    // 0x119df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D78u;
    goto label_119d78;
    ctx->pc = 0x119DF8u;
label_119df8:
    // 0x119df8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x119DF8u;
    {
        const bool branch_taken_0x119df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DF8u;
        // 0x119dfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119df8) {
            ctx->pc = 0x119E08u;
            goto label_119e08;
        }
    }
    ctx->pc = 0x119E00u;
    // 0x119e00: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119E00u;
    SET_GPR_U32(ctx, 31, 0x119E08u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119E00u, 0x119E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E08u;
label_119e08:
    // 0x119e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119e10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119e14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x119E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119E24u;
    // 0x119e24: 0x0  nop
    ctx->pc = 0x119e24u;
    // NOP
    ctx->pc = 0x119e28u;
}
