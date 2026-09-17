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

// Function: sub_0010FAA0
// Address: 0x10faa0 - 0x10fb50
void sub_0010FAA0_0x10faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FAA0_0x10faa0");
#endif

    switch (ctx->pc) {
        case 0x10fac8u: goto label_10fac8;
        case 0x10faf8u: goto label_10faf8;
        case 0x10fb0cu: goto label_10fb0c;
        default: break;
    }

    ctx->pc = 0x10faa0u;

    // 0x10faa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10faa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10faa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10faac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fab4: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x10fab8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10fabc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10fabcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10fac0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10FAC0u;
    {
        const bool branch_taken_0x10fac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC0u;
        // 0x10fac4: 0x3c120013  lui         $s2, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fac0) {
            ctx->pc = 0x10FAECu;
            goto label_10faec;
        }
    }
    ctx->pc = 0x10FAC8u;
label_10fac8:
    // 0x10fac8: 0x42000039  di
    ctx->pc = 0x10fac8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10facc: 0x40f  sync.p
    ctx->pc = 0x10faccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10fad0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10fad4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10fad8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10fadc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FADCu;
    {
        const bool branch_taken_0x10fadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fadc) {
            ctx->pc = 0x10FAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fac8;
        }
    }
    ctx->pc = 0x10FAE4u;
    // 0x10fae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FAE4u;
    {
        const bool branch_taken_0x10fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAE4u;
        // 0x10fae8: 0x8e4210fc  lw          $v0, 0x10FC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fae4) {
            ctx->pc = 0x10FAF0u;
            goto label_10faf0;
        }
    }
    ctx->pc = 0x10FAECu;
label_10faec:
    // 0x10faec: 0x8e4210fc  lw          $v0, 0x10FC($s2)
    ctx->pc = 0x10faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4348)));
label_10faf0:
    // 0x10faf0: 0xc043ce0  jal         func_10F380
    ctx->pc = 0x10FAF0u;
    SET_GPR_U32(ctx, 31, 0x10FAF8u);
    ctx->pc = 0x10FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAF0u;
    // 0x10faf4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F380u, 0x10FAF0u, 0x10FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAF8u;
label_10faf8:
    // 0x10faf8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10faf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10fafc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10FAFCu;
    {
        const bool branch_taken_0x10fafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAFCu;
        // 0x10fb00: 0x8e4210fc  lw          $v0, 0x10FC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fafc) {
            ctx->pc = 0x10FB28u;
            goto label_10fb28;
        }
    }
    ctx->pc = 0x10FB04u;
    // 0x10fb04: 0xc049dbc  jal         func_1276F0
    ctx->pc = 0x10FB04u;
    SET_GPR_U32(ctx, 31, 0x10FB0Cu);
    ctx->pc = 0x1276F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276F0u, 0x10FB04u, 0x10FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB0Cu;
label_10fb0c:
    // 0x10fb0c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10fb10: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FB10u;
    {
        const bool branch_taken_0x10fb10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB10u;
        // 0x10fb14: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb10) {
            ctx->pc = 0x10FB1Cu;
            goto label_10fb1c;
        }
    }
    ctx->pc = 0x10FB18u;
    // 0x10fb18: 0x42000038  ei
    ctx->pc = 0x10fb18u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10fb1c:
    // 0x10fb1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10fb20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FB34u;
            goto label_10fb34;
        }
    }
    ctx->pc = 0x10FB28u;
label_10fb28:
    // 0x10fb28: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FB28u;
    {
        const bool branch_taken_0x10fb28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB28u;
        // 0x10fb2c: 0xae5010fc  sw          $s0, 0x10FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4348), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb28) {
            ctx->pc = 0x10FB34u;
            goto label_10fb34;
        }
    }
    ctx->pc = 0x10FB30u;
    // 0x10fb30: 0x42000038  ei
    ctx->pc = 0x10fb30u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10fb34:
    // 0x10fb34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fb38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fb38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fb3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb44: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB44u;
        // 0x10fb48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB4Cu;
    // 0x10fb4c: 0x0  nop
    ctx->pc = 0x10fb4cu;
    // NOP
    ctx->pc = 0x10fb50u;
}
