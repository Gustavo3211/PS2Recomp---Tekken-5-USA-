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

// Function: sub_00281EB0
// Address: 0x281eb0 - 0x281f90
void sub_00281EB0_0x281eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281EB0_0x281eb0");
#endif

    ctx->pc = 0x281eb0u;

    // 0x281eb0: 0x8c8307c8  lw          $v1, 0x7C8($a0)
    ctx->pc = 0x281eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1992)));
    // 0x281eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281eb8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x281EB8u;
    {
        const bool branch_taken_0x281eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EB8u;
        // 0x281ebc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281eb8) {
            ctx->pc = 0x281EF8u;
            goto label_281ef8;
        }
    }
    ctx->pc = 0x281EC0u;
    // 0x281ec0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x281EC0u;
    {
        const bool branch_taken_0x281ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ec0) {
            ctx->pc = 0x281EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281EC0u;
            // 0x281ec4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x281ED8u;
            goto label_281ed8;
        }
    }
    ctx->pc = 0x281EC8u;
    // 0x281ec8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x281EC8u;
    {
        const bool branch_taken_0x281ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ec8) {
            ctx->pc = 0x281ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281EC8u;
            // 0x281ecc: 0xac8007fc  sw          $zero, 0x7FC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2044), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281EE8u;
            goto label_281ee8;
        }
    }
    ctx->pc = 0x281ED0u;
    // 0x281ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x281ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281ED8u;
label_281ed8:
    // 0x281ed8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x281ED8u;
    {
        const bool branch_taken_0x281ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ed8) {
            ctx->pc = 0x281F84u;
            goto label_281f84;
        }
    }
    ctx->pc = 0x281EE0u;
    // 0x281ee0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x281EE0u;
    {
        const bool branch_taken_0x281ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EE0u;
        // 0x281ee4: 0x8c850804  lw          $a1, 0x804($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ee0) {
            ctx->pc = 0x281F38u;
            goto label_281f38;
        }
    }
    ctx->pc = 0x281EE8u;
label_281ee8:
    // 0x281ee8: 0xac800800  sw          $zero, 0x800($a0)
    ctx->pc = 0x281ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 0));
    // 0x281eec: 0xac800804  sw          $zero, 0x804($a0)
    ctx->pc = 0x281eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 0));
    // 0x281ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x281EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF0u;
        // 0x281ef4: 0xac8007f8  sw          $zero, 0x7F8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281EF8u;
label_281ef8:
    // 0x281ef8: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x281efc: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281EFCu;
    {
        const bool branch_taken_0x281efc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x281efc) {
            ctx->pc = 0x281F20u;
            goto label_281f20;
        }
    }
    ctx->pc = 0x281F04u;
    // 0x281f04: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x281f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x281f08: 0x8c830800  lw          $v1, 0x800($a0)
    ctx->pc = 0x281f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x281f0c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x281F0Cu;
    {
        const bool branch_taken_0x281f0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x281f0c) {
            ctx->pc = 0x281F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281F0Cu;
            // 0x281f10: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281F14u;
            goto label_281f14;
        }
    }
    ctx->pc = 0x281F14u;
label_281f14:
    // 0x281f14: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x281f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281f18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x281F18u;
    {
        const bool branch_taken_0x281f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F18u;
        // 0x281f1c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f18) {
            ctx->pc = 0x281F60u;
            goto label_281f60;
        }
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0x4a10018  bgez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x281F20u;
    {
        const bool branch_taken_0x281f20 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x281f20) {
            ctx->pc = 0x281F84u;
            goto label_281f84;
        }
    }
    ctx->pc = 0x281F28u;
    // 0x281f28: 0xac800804  sw          $zero, 0x804($a0)
    ctx->pc = 0x281f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 0));
    // 0x281f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x281F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F2Cu;
        // 0x281f30: 0xac800800  sw          $zero, 0x800($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F34u;
    // 0x281f34: 0x0  nop
    ctx->pc = 0x281f34u;
    // NOP
label_281f38:
    // 0x281f38: 0x8c8307fc  lw          $v1, 0x7FC($a0)
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2044)));
    // 0x281f3c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x281f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x281f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281F40u;
    {
        const bool branch_taken_0x281f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F40u;
        // 0x281f44: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f40) {
            ctx->pc = 0x281F70u;
            goto label_281f70;
        }
    }
    ctx->pc = 0x281F48u;
    // 0x281f48: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x281f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x281f4c: 0x8c830800  lw          $v1, 0x800($a0)
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x281f50: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x281F50u;
    {
        const bool branch_taken_0x281f50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x281f50) {
            ctx->pc = 0x281F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281F50u;
            // 0x281f54: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281F58u;
            goto label_281f58;
        }
    }
    ctx->pc = 0x281F58u;
label_281f58:
    // 0x281f58: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x281f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281f5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x281f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_281f60:
    // 0x281f60: 0xac820804  sw          $v0, 0x804($a0)
    ctx->pc = 0x281f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 2));
    // 0x281f64: 0x3e00008  jr          $ra
    ctx->pc = 0x281F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F64u;
        // 0x281f68: 0xac830800  sw          $v1, 0x800($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F6Cu;
    // 0x281f6c: 0x0  nop
    ctx->pc = 0x281f6cu;
    // NOP
label_281f70:
    // 0x281f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281F70u;
    {
        const bool branch_taken_0x281f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f70) {
            ctx->pc = 0x281F84u;
            goto label_281f84;
        }
    }
    ctx->pc = 0x281F78u;
    // 0x281f78: 0x8c8207f8  lw          $v0, 0x7F8($a0)
    ctx->pc = 0x281f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2040)));
    // 0x281f7c: 0xac830804  sw          $v1, 0x804($a0)
    ctx->pc = 0x281f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 3));
    // 0x281f80: 0xac820800  sw          $v0, 0x800($a0)
    ctx->pc = 0x281f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 2));
label_281f84:
    // 0x281f84: 0x3e00008  jr          $ra
    ctx->pc = 0x281F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F8Cu;
    // 0x281f8c: 0x0  nop
    ctx->pc = 0x281f8cu;
    // NOP
    ctx->pc = 0x281f90u;
}
