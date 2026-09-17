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

// Function: sub_0024DA30
// Address: 0x24da30 - 0x24db88
void sub_0024DA30_0x24da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DA30_0x24da30");
#endif

    switch (ctx->pc) {
        case 0x24dab0u: goto label_24dab0;
        case 0x24db00u: goto label_24db00;
        case 0x24db40u: goto label_24db40;
        default: break;
    }

    ctx->pc = 0x24da30u;

    // 0x24da30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24da34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24da38: 0x2444fb00  addiu       $a0, $v0, -0x500
    ctx->pc = 0x24da38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x24da3c: 0x9086000e  lbu         $a2, 0xE($a0)
    ctx->pc = 0x24da3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3AFB0Eu));
    // 0x24da40: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DA40u;
    {
        const bool branch_taken_0x24da40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x24DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA40u;
        // 0x24da44: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da40) {
            ctx->pc = 0x24DA60u;
            goto label_24da60;
        }
    }
    ctx->pc = 0x24DA48u;
    // 0x24da48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24da4c: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24DA4Cu;
    {
        const bool branch_taken_0x24da4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x24da4c) {
            ctx->pc = 0x24DA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA4Cu;
            // 0x24da50: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA78u;
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA54u;
    // 0x24da54: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA54u;
        // 0x24da58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA5Cu;
    // 0x24da5c: 0x0  nop
    ctx->pc = 0x24da5cu;
    // NOP
label_24da60:
    // 0x24da60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24da64: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x24da64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x24da68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24da68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x24da6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24DA6Cu;
    {
        const bool branch_taken_0x24da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA6Cu;
        // 0x24da70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da6c) {
            ctx->pc = 0x24DA8Cu;
            goto label_24da8c;
        }
    }
    ctx->pc = 0x24DA74u;
    // 0x24da74: 0x0  nop
    ctx->pc = 0x24da74u;
    // NOP
label_24da78:
    // 0x24da78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x24da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24da7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24da80: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24da80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x24da84: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x24da84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x24da88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24da88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24da8c:
    // 0x24da8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA8Cu;
        // 0x24da90: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA94u;
    // 0x24da94: 0x0  nop
    ctx->pc = 0x24da94u;
    // NOP
    // 0x24da98: 0x3c028fff  lui         $v0, 0x8FFF
    ctx->pc = 0x24da98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36863 << 16));
    // 0x24da9c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x24da9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x24daa0: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x24daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x24daa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24daa8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24daa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24daac: 0x0  nop
    ctx->pc = 0x24daacu;
    // NOP
label_24dab0:
    // 0x24dab0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dab4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x24dab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x24dab8: 0x0  nop
    ctx->pc = 0x24dab8u;
    // NOP
    // 0x24dabc: 0x0  nop
    ctx->pc = 0x24dabcu;
    // NOP
    // 0x24dac0: 0x0  nop
    ctx->pc = 0x24dac0u;
    // NOP
    // 0x24dac4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24DAC4u;
    {
        const bool branch_taken_0x24dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAC4u;
        // 0x24dac8: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dac4) {
            ctx->pc = 0x24DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dab0;
        }
    }
    ctx->pc = 0x24DACCu;
    // 0x24dacc: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x24daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x24dad0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24dad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24dad4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x24dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x24dad8: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x24dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x24dadc: 0x3e00008  jr          $ra
    ctx->pc = 0x24DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DADCu;
        // 0x24dae0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DAE4u;
    // 0x24dae4: 0x0  nop
    ctx->pc = 0x24dae4u;
    // NOP
    // 0x24dae8: 0x3c028fff  lui         $v0, 0x8FFF
    ctx->pc = 0x24dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36863 << 16));
    // 0x24daec: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x24daecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x24daf0: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x24daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x24daf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24daf8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24daf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24dafc: 0x0  nop
    ctx->pc = 0x24dafcu;
    // NOP
label_24db00:
    // 0x24db00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24db04: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x24db04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x24db08: 0x0  nop
    ctx->pc = 0x24db08u;
    // NOP
    // 0x24db0c: 0x0  nop
    ctx->pc = 0x24db0cu;
    // NOP
    // 0x24db10: 0x0  nop
    ctx->pc = 0x24db10u;
    // NOP
    // 0x24db14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24DB14u;
    {
        const bool branch_taken_0x24db14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB14u;
        // 0x24db18: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db14) {
            ctx->pc = 0x24DB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db00;
        }
    }
    ctx->pc = 0x24DB1Cu;
    // 0x24db1c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x24db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x24db20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24db24: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x24db24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x24db28: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x24db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x24db2c: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB2Cu;
        // 0x24db30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DB34u;
    // 0x24db34: 0x0  nop
    ctx->pc = 0x24db34u;
    // NOP
    // 0x24db38: 0x30843ff0  andi        $a0, $a0, 0x3FF0
    ctx->pc = 0x24db38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16368);
    // 0x24db3c: 0x0  nop
    ctx->pc = 0x24db3cu;
    // NOP
label_24db40:
    // 0x24db40: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x24db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x24db44: 0x8c42d400  lw          $v0, -0x2C00($v0)
    ctx->pc = 0x24db44u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x24db48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x24db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x24db4c: 0x0  nop
    ctx->pc = 0x24db4cu;
    // NOP
    // 0x24db50: 0x0  nop
    ctx->pc = 0x24db50u;
    // NOP
    // 0x24db54: 0x0  nop
    ctx->pc = 0x24db54u;
    // NOP
    // 0x24db58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24DB58u;
    {
        const bool branch_taken_0x24db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB58u;
        // 0x24db5c: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db58) {
            ctx->pc = 0x24DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db40;
        }
    }
    ctx->pc = 0x24DB60u;
    // 0x24db60: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24db60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24db64: 0xac25d430  sw          $a1, -0x2BD0($at)
    ctx->pc = 0x24db64u;
    runtime->Store32(rdram, ctx, 0x1000D430u, GPR_U32(ctx, 5)); // MMIO: 0x1000d430
    // 0x24db68: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24db68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24db6c: 0xac24d480  sw          $a0, -0x2B80($at)
    ctx->pc = 0x24db6cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x1000d480
    // 0x24db70: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24db70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24db74: 0xac20d420  sw          $zero, -0x2BE0($at)
    ctx->pc = 0x24db74u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x24db78: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x24db78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x24db7c: 0x3e00008  jr          $ra
    ctx->pc = 0x24DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB7Cu;
        // 0x24db80: 0xac22d400  sw          $v0, -0x2C00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DB84u;
    // 0x24db84: 0x0  nop
    ctx->pc = 0x24db84u;
    // NOP
    ctx->pc = 0x24db88u;
}
