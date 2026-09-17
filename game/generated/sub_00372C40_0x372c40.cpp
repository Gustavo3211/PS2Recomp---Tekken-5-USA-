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

// Function: sub_00372C40
// Address: 0x372c40 - 0x372d38
void sub_00372C40_0x372c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372C40_0x372c40");
#endif

    switch (ctx->pc) {
        case 0x372c64u: goto label_372c64;
        case 0x372c7cu: goto label_372c7c;
        default: break;
    }

    ctx->pc = 0x372c40u;

    // 0x372c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372c44: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372c4c: 0x245076e0  addiu       $s0, $v0, 0x76E0
    ctx->pc = 0x372c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30432));
    // 0x372c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372c50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D76E0u));
    // 0x372c54: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372C54u;
    {
        const bool branch_taken_0x372c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C54u;
        // 0x372c58: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c54) {
            ctx->pc = 0x372C7Cu;
            goto label_372c7c;
        }
    }
    ctx->pc = 0x372C5Cu;
    // 0x372c5c: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x372C5Cu;
    SET_GPR_U32(ctx, 31, 0x372C64u);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x372C5Cu, 0x372C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C64u;
label_372c64:
    // 0x372c64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372c68: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372c6c: 0x24a51b20  addiu       $a1, $a1, 0x1B20
    ctx->pc = 0x372c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6944));
    // 0x372c70: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x372c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x372c74: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372C74u;
    SET_GPR_U32(ctx, 31, 0x372C7Cu);
    ctx->pc = 0x372C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C74u;
    // 0x372c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372C74u, 0x372C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C7Cu;
label_372c7c:
    // 0x372c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372c84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372c88: 0x3e00008  jr          $ra
    ctx->pc = 0x372C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C88u;
        // 0x372c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C90u;
    // 0x372c90: 0x24840148  addiu       $a0, $a0, 0x148
    ctx->pc = 0x372c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    // 0x372c94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x372c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372c98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372C98u;
    {
        const bool branch_taken_0x372c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C98u;
        // 0x372c9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c98) {
            ctx->pc = 0x372CB0u;
            goto label_372cb0;
        }
    }
    ctx->pc = 0x372CA0u;
    // 0x372ca0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x372ca4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x372ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372ca8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372CA8u;
    {
        const bool branch_taken_0x372ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372ca8) {
            ctx->pc = 0x372CBCu;
            goto label_372cbc;
        }
    }
    ctx->pc = 0x372CB0u;
label_372cb0:
    // 0x372cb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x372cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cb8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_372cbc:
    // 0x372cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x372CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CBCu;
        // 0x372cc0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372CC4u;
    // 0x372cc4: 0x0  nop
    ctx->pc = 0x372cc4u;
    // NOP
    // 0x372cc8: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x372cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x372ccc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x372cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372cd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372CD0u;
    {
        const bool branch_taken_0x372cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CD0u;
        // 0x372cd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cd0) {
            ctx->pc = 0x372CE8u;
            goto label_372ce8;
        }
    }
    ctx->pc = 0x372CD8u;
    // 0x372cd8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x372cdc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x372cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372ce0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372CE0u;
    {
        const bool branch_taken_0x372ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372ce0) {
            ctx->pc = 0x372CF4u;
            goto label_372cf4;
        }
    }
    ctx->pc = 0x372CE8u;
label_372ce8:
    // 0x372ce8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x372cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cf0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_372cf4:
    // 0x372cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x372CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CF4u;
        // 0x372cf8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372CFCu;
    // 0x372cfc: 0x0  nop
    ctx->pc = 0x372cfcu;
    // NOP
    // 0x372d00: 0x24840158  addiu       $a0, $a0, 0x158
    ctx->pc = 0x372d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x372d04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x372d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372D08u;
    {
        const bool branch_taken_0x372d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D08u;
        // 0x372d0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d08) {
            ctx->pc = 0x372D20u;
            goto label_372d20;
        }
    }
    ctx->pc = 0x372D10u;
    // 0x372d10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x372d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x372d14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x372d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372d18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372D18u;
    {
        const bool branch_taken_0x372d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372d18) {
            ctx->pc = 0x372D2Cu;
            goto label_372d2c;
        }
    }
    ctx->pc = 0x372D20u;
label_372d20:
    // 0x372d20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x372d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x372d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d28: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_372d2c:
    // 0x372d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x372D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D2Cu;
        // 0x372d30: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372D34u;
    // 0x372d34: 0x0  nop
    ctx->pc = 0x372d34u;
    // NOP
    ctx->pc = 0x372d38u;
}
