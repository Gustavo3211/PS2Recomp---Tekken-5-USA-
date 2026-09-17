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

// Function: sub_0036DAA8
// Address: 0x36daa8 - 0x36dbe0
void sub_0036DAA8_0x36daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DAA8_0x36daa8");
#endif

    switch (ctx->pc) {
        case 0x36daccu: goto label_36dacc;
        case 0x36dae4u: goto label_36dae4;
        default: break;
    }

    ctx->pc = 0x36daa8u;

    // 0x36daa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36daac: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36dab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36dab4: 0x24507160  addiu       $s0, $v0, 0x7160
    ctx->pc = 0x36dab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29024));
    // 0x36dab8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7160u));
    // 0x36dabc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36DABCu;
    {
        const bool branch_taken_0x36dabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DABCu;
        // 0x36dac0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dabc) {
            ctx->pc = 0x36DAE4u;
            goto label_36dae4;
        }
    }
    ctx->pc = 0x36DAC4u;
    // 0x36dac4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36DAC4u;
    SET_GPR_U32(ctx, 31, 0x36DACCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36DAC4u, 0x36DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DACCu;
label_36dacc:
    // 0x36dacc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36daccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36dad0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36dad4: 0x24a5f870  addiu       $a1, $a1, -0x790
    ctx->pc = 0x36dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965360));
    // 0x36dad8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36dadc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36DADCu;
    SET_GPR_U32(ctx, 31, 0x36DAE4u);
    ctx->pc = 0x36DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DADCu;
    // 0x36dae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36DADCu, 0x36DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAE4u;
label_36dae4:
    // 0x36dae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36dae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36daec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36daecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36daf0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAF0u;
        // 0x36daf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DAF8u;
    // 0x36daf8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x36daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x36dafc: 0x3e00008  jr          $ra
    ctx->pc = 0x36DAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAFCu;
        // 0x36db00: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB04u;
    // 0x36db04: 0x0  nop
    ctx->pc = 0x36db04u;
    // NOP
    // 0x36db08: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x36db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x36db0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB0Cu;
        // 0x36db10: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB14u;
    // 0x36db14: 0x0  nop
    ctx->pc = 0x36db14u;
    // NOP
    // 0x36db18: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x36db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x36db1c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DB1Cu;
    {
        const bool branch_taken_0x36db1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x36DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB1Cu;
        // 0x36db20: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db1c) {
            ctx->pc = 0x36DB28u;
            goto label_36db28;
        }
    }
    ctx->pc = 0x36DB24u;
    // 0x36db24: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x36db24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_36db28:
    // 0x36db28: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB30u;
    // 0x36db30: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x36db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x36db34: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x36DB34u;
    {
        const bool branch_taken_0x36db34 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x36db34) {
            ctx->pc = 0x36DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DB34u;
            // 0x36db38: 0xac8000c4  sw          $zero, 0xC4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DB3Cu;
            goto label_36db3c;
        }
    }
    ctx->pc = 0x36DB3Cu;
label_36db3c:
    // 0x36db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB44u;
    // 0x36db44: 0x0  nop
    ctx->pc = 0x36db44u;
    // NOP
    // 0x36db48: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x36db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x36db4c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB4Cu;
        // 0x36db50: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB54u;
    // 0x36db54: 0x0  nop
    ctx->pc = 0x36db54u;
    // NOP
    // 0x36db58: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x36db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x36db5c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB5Cu;
        // 0x36db60: 0xac8200bc  sw          $v0, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB64u;
    // 0x36db64: 0x0  nop
    ctx->pc = 0x36db64u;
    // NOP
    // 0x36db68: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB68u;
        // 0x36db6c: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB70u;
    // 0x36db70: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x36db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x36db74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36db78: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB78u;
        // 0x36db7c: 0xac8200b8  sw          $v0, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB80u;
    // 0x36db80: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB80u;
        // 0x36db84: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB88u;
    // 0x36db88: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x36db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x36db8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36db90: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB90u;
        // 0x36db94: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DB98u;
    // 0x36db98: 0x3e00008  jr          $ra
    ctx->pc = 0x36DB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB98u;
        // 0x36db9c: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBA0u;
    // 0x36dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBA0u;
        // 0x36dba4: 0xc48000ac  lwc1        $f0, 0xAC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBA8u;
    // 0x36dba8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBA8u;
        // 0x36dbac: 0xc48000b4  lwc1        $f0, 0xB4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBB0u;
    // 0x36dbb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36dbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36dbb4: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x36dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x36dbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBB8u;
        // 0x36dbbc: 0xe48000b4  swc1        $f0, 0xB4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBC0u;
    // 0x36dbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBC0u;
        // 0x36dbc4: 0xc48000c8  lwc1        $f0, 0xC8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBC8u;
    // 0x36dbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBC8u;
        // 0x36dbcc: 0xc48000cc  lwc1        $f0, 0xCC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBD0u;
    // 0x36dbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBD0u;
        // 0x36dbd4: 0xc48000d0  lwc1        $f0, 0xD0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBD8u;
    // 0x36dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBD8u;
        // 0x36dbdc: 0xc48000d4  lwc1        $f0, 0xD4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBE0u;
}
