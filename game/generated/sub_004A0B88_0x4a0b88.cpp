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

// Function: sub_004A0B88
// Address: 0x4a0b88 - 0x4a0c60
void sub_004A0B88_0x4a0b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0B88_0x4a0b88");
#endif

    switch (ctx->pc) {
        case 0x4a0c08u: goto label_4a0c08;
        default: break;
    }

    ctx->pc = 0x4a0b88u;

    // 0x4a0b88: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4a0b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x4a0b8c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a0b90: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x4a0b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4a0b94: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4a0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a0b98: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4a0b9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4a0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4a0ba0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a0ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x4a0ba4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4a0ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x4a0ba8: 0xac402240  sw          $zero, 0x2240($v0)
    ctx->pc = 0x4a0ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F8C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F8C0u, _value); } while (0);
    // 0x4a0bac: 0xac402238  sw          $zero, 0x2238($v0)
    ctx->pc = 0x4a0bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F8B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F8B8u, _value); } while (0);
    // 0x4a0bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BB0u;
        // 0x4a0bb4: 0xac40223c  sw          $zero, 0x223C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0BB8u;
    // 0x4a0bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a0bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a0bc0: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A0BC0u;
    {
        const bool branch_taken_0x4a0bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BC0u;
        // 0x4a0bc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0bc0) {
            ctx->pc = 0x4A0C18u;
            goto label_4a0c18;
        }
    }
    ctx->pc = 0x4A0BC8u;
    // 0x4a0bc8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x4a0bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a0bcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0BCCu;
    {
        const bool branch_taken_0x4a0bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0bcc) {
            ctx->pc = 0x4A0BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0BCCu;
            // 0x4a0bd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0BE8u;
            goto label_4a0be8;
        }
    }
    ctx->pc = 0x4A0BD4u;
    // 0x4a0bd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A0BD4u;
    {
        const bool branch_taken_0x4a0bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BD4u;
        // 0x4a0bd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0bd4) {
            ctx->pc = 0x4A0C00u;
            goto label_4a0c00;
        }
    }
    ctx->pc = 0x4A0BDCu;
    // 0x4a0bdc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4A0BDCu;
    {
        const bool branch_taken_0x4a0bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0bdc) {
            ctx->pc = 0x4A0C58u;
            goto label_4a0c58;
        }
    }
    ctx->pc = 0x4A0BE4u;
    // 0x4a0be4: 0x0  nop
    ctx->pc = 0x4a0be4u;
    // NOP
label_4a0be8:
    // 0x4a0be8: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A0BE8u;
    {
        const bool branch_taken_0x4a0be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BE8u;
        // 0x4a0bec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0be8) {
            ctx->pc = 0x4A0C40u;
            goto label_4a0c40;
        }
    }
    ctx->pc = 0x4A0BF0u;
    // 0x4a0bf0: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A0BF0u;
    {
        const bool branch_taken_0x4a0bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BF0u;
        // 0x4a0bf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0bf0) {
            ctx->pc = 0x4A0C30u;
            goto label_4a0c30;
        }
    }
    ctx->pc = 0x4A0BF8u;
    // 0x4a0bf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4A0BF8u;
    {
        const bool branch_taken_0x4a0bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0bf8) {
            ctx->pc = 0x4A0C58u;
            goto label_4a0c58;
        }
    }
    ctx->pc = 0x4A0C00u;
label_4a0c00:
    // 0x4a0c00: 0xc1220b8  jal         func_4882E0
    ctx->pc = 0x4A0C00u;
    SET_GPR_U32(ctx, 31, 0x4A0C08u);
    ctx->pc = 0x4882E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4882E0u, 0x4A0C00u, 0x4A0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0C08u;
label_4a0c08:
    // 0x4a0c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0c0c: 0x814436e  j           func_510DB8
    ctx->pc = 0x4A0C0Cu;
    ctx->pc = 0x4A0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0C0Cu;
    // 0x4a0c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510DB8u;
    sub_00510DB8_0x510db8(rdram, ctx, runtime); return;
    ctx->pc = 0x4A0C14u;
    // 0x4a0c14: 0x0  nop
    ctx->pc = 0x4a0c14u;
    // NOP
label_4a0c18:
    // 0x4a0c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0c1c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a0c20: 0xa444d716  sh          $a0, -0x28EA($v0)
    ctx->pc = 0x4a0c20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x4a0c24: 0x8122cc6  j           func_48B318
    ctx->pc = 0x4A0C24u;
    ctx->pc = 0x4A0C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0C24u;
    // 0x4a0c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x4A0C2Cu;
    // 0x4a0c2c: 0x0  nop
    ctx->pc = 0x4a0c2cu;
    // NOP
label_4a0c30:
    // 0x4a0c30: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a0c34: 0xa444d716  sh          $a0, -0x28EA($v0)
    ctx->pc = 0x4a0c34u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x4a0c38: 0x8122cc6  j           func_48B318
    ctx->pc = 0x4A0C38u;
    ctx->pc = 0x4A0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0C38u;
    // 0x4a0c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    sub_0048B318_0x48b318(rdram, ctx, runtime); return;
    ctx->pc = 0x4A0C40u;
label_4a0c40:
    // 0x4a0c40: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a0c44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4a0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a0c48: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4a0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a0c4c: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x4a0c4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x4a0c50: 0xa440220a  sh          $zero, 0x220A($v0)
    ctx->pc = 0x4a0c50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F88Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F88Au, _value); } while (0);
    // 0x4a0c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0c58:
    // 0x4a0c58: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C58u;
        // 0x4a0c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C60u;
}
