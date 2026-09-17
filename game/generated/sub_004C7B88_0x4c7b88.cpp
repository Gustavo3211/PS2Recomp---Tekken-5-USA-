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

// Function: sub_004C7B88
// Address: 0x4c7b88 - 0x4c8350
void sub_004C7B88_0x4c7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7B88_0x4c7b88");
#endif

    switch (ctx->pc) {
        case 0x4c7ba4u: goto label_4c7ba4;
        case 0x4c7bc0u: goto label_4c7bc0;
        case 0x4c7cdcu: goto label_4c7cdc;
        case 0x4c7d30u: goto label_4c7d30;
        case 0x4c7d38u: goto label_4c7d38;
        case 0x4c7e58u: goto label_4c7e58;
        case 0x4c7ec0u: goto label_4c7ec0;
        case 0x4c8020u: goto label_4c8020;
        case 0x4c8304u: goto label_4c8304;
        case 0x4c830cu: goto label_4c830c;
        case 0x4c8314u: goto label_4c8314;
        case 0x4c831cu: goto label_4c831c;
        default: break;
    }

    ctx->pc = 0x4c7b88u;

    // 0x4c7b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c7b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c7b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c7b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c7b9c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C7B9Cu;
    SET_GPR_U32(ctx, 31, 0x4C7BA4u);
    ctx->pc = 0x4C7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7B9Cu;
    // 0x4c7ba0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C7B9Cu, 0x4C7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7BA4u;
label_4c7ba4:
    // 0x4c7ba4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c7ba8: 0xac620f48  sw          $v0, 0xF48($v1)
    ctx->pc = 0x4c7ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F48u, _value); } while (0);
    // 0x4c7bac: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c7bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7bb0: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4C7BB0u;
    {
        const bool branch_taken_0x4c7bb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c7bb0) {
            ctx->pc = 0x4C7BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7BB0u;
            // 0x4c7bb4: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7BECu;
            goto label_4c7bec;
        }
    }
    ctx->pc = 0x4C7BB8u;
    // 0x4c7bb8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C7BB8u;
    SET_GPR_U32(ctx, 31, 0x4C7BC0u);
    ctx->pc = 0x4C7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7BB8u;
    // 0x4c7bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C7BB8u, 0x4C7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7BC0u;
label_4c7bc0:
    // 0x4c7bc0: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4c7bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c7bc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c7bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c7bcc: 0xa60301c2  sh          $v1, 0x1C2($s0)
    ctx->pc = 0x4c7bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7bd0: 0xa60201b6  sh          $v0, 0x1B6($s0)
    ctx->pc = 0x4c7bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7bd4: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4c7bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c7bd8: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4c7bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7bdc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c7bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7be0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c7be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c7be4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4c7be4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7be8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c7be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4c7bec:
    // 0x4c7bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c7becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c7bf0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C7BF0u;
    {
        const bool branch_taken_0x4c7bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7BF0u;
        // 0x4c7bf4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7bf0) {
            ctx->pc = 0x4C7C40u;
            goto label_4c7c40;
        }
    }
    ctx->pc = 0x4C7BF8u;
    // 0x4c7bf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C7BF8u;
    {
        const bool branch_taken_0x4c7bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7bf8) {
            ctx->pc = 0x4C7BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7BF8u;
            // 0x4c7bfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7C10u;
            goto label_4c7c10;
        }
    }
    ctx->pc = 0x4C7C00u;
    // 0x4c7c00: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C7C00u;
    {
        const bool branch_taken_0x4c7c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7c00) {
            ctx->pc = 0x4C7C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7C00u;
            // 0x4c7c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7C28u;
            goto label_4c7c28;
        }
    }
    ctx->pc = 0x4C7C08u;
    // 0x4c7c08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4C7C08u;
    {
        const bool branch_taken_0x4c7c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C08u;
        // 0x4c7c0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c08) {
            ctx->pc = 0x4C7C88u;
            goto label_4c7c88;
        }
    }
    ctx->pc = 0x4C7C10u;
label_4c7c10:
    // 0x4c7c10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C7C10u;
    {
        const bool branch_taken_0x4c7c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C10u;
        // 0x4c7c14: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c10) {
            ctx->pc = 0x4C7C58u;
            goto label_4c7c58;
        }
    }
    ctx->pc = 0x4C7C18u;
    // 0x4c7c18: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4C7C18u;
    {
        const bool branch_taken_0x4c7c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C18u;
        // 0x4c7c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c18) {
            ctx->pc = 0x4C7C70u;
            goto label_4c7c70;
        }
    }
    ctx->pc = 0x4C7C20u;
    // 0x4c7c20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4C7C20u;
    {
        const bool branch_taken_0x4c7c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C20u;
        // 0x4c7c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7c20) {
            ctx->pc = 0x4C7C88u;
            goto label_4c7c88;
        }
    }
    ctx->pc = 0x4C7C28u;
label_4c7c28:
    // 0x4c7c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7c2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7c34: 0x8131f26  j           func_4C7C98
    ctx->pc = 0x4C7C34u;
    ctx->pc = 0x4C7C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7C34u;
    // 0x4c7c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7C98u;
    goto label_4c7c98;
    ctx->pc = 0x4C7C3Cu;
    // 0x4c7c3c: 0x0  nop
    ctx->pc = 0x4c7c3cu;
    // NOP
label_4c7c40:
    // 0x4c7c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7c48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7c50: 0x8131f68  j           func_4C7DA0
    ctx->pc = 0x4C7C50u;
    ctx->pc = 0x4C7C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7C50u;
    // 0x4c7c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7DA0u;
    goto label_4c7da0;
    ctx->pc = 0x4C7C58u;
label_4c7c58:
    // 0x4c7c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c7c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7c68: 0x8132014  j           func_4C8050
    ctx->pc = 0x4C7C68u;
    ctx->pc = 0x4C7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7C68u;
    // 0x4c7c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8050u;
    goto label_4c8050;
    ctx->pc = 0x4C7C70u;
label_4c7c70:
    // 0x4c7c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7c7c: 0x813209c  j           func_4C8270
    ctx->pc = 0x4C7C7Cu;
    ctx->pc = 0x4C7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7C7Cu;
    // 0x4c7c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8270u;
    goto label_4c8270;
    ctx->pc = 0x4C7C84u;
    // 0x4c7c84: 0x0  nop
    ctx->pc = 0x4c7c84u;
    // NOP
label_4c7c88:
    // 0x4c7c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7c90: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7C90u;
        // 0x4c7c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C7C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C7C98u;
label_4c7c98:
    // 0x4c7c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c7c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c7c9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c7c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c7ca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7ca4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c7ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c7cac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c7cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7cb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c7cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c7cb4: 0x24630f24  addiu       $v1, $v1, 0xF24
    ctx->pc = 0x4c7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3876));
    // 0x4c7cb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c7cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c7cbc: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x4c7cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x4c7cc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c7cc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c7cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c7cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c7ccc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c7cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c7cd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4c7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4c7cd4: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4C7CD4u;
    SET_GPR_U32(ctx, 31, 0x4C7CDCu);
    ctx->pc = 0x4C7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7CD4u;
    // 0x4c7cd8: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4C7CD4u, 0x4C7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7CDCu;
label_4c7cdc:
    // 0x4c7cdc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4C7CDCu;
    {
        const bool branch_taken_0x4c7cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c7cdc) {
            ctx->pc = 0x4C7CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7CDCu;
            // 0x4c7ce0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7D08u;
            goto label_4c7d08;
        }
    }
    ctx->pc = 0x4C7CE4u;
    // 0x4c7ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c7ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7cf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7cf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c7cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c7cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c7cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7cfc: 0x8131f7a  j           func_4C7DE8
    ctx->pc = 0x4C7CFCu;
    ctx->pc = 0x4C7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7CFCu;
    // 0x4c7d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7DE8u;
    goto label_4c7de8;
    ctx->pc = 0x4C7D04u;
    // 0x4c7d04: 0x0  nop
    ctx->pc = 0x4c7d04u;
    // NOP
label_4c7d08:
    // 0x4c7d08: 0x24440f3c  addiu       $a0, $v0, 0xF3C
    ctx->pc = 0x4c7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3900));
    // 0x4c7d0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c7d10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7d14: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4c7d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4c7d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c7d1c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c7d1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c7d20: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4C7D20u;
    {
        const bool branch_taken_0x4c7d20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7D20u;
        // 0x4c7d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7d20) {
            ctx->pc = 0x4C7D70u;
            goto label_4c7d70;
        }
    }
    ctx->pc = 0x4C7D28u;
    // 0x4c7d28: 0x24130042  addiu       $s3, $zero, 0x42
    ctx->pc = 0x4c7d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4c7d2c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c7d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_4c7d30:
    // 0x4c7d30: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4C7D30u;
    SET_GPR_U32(ctx, 31, 0x4C7D38u);
    ctx->pc = 0x4C7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7D30u;
    // 0x4c7d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4C7D30u, 0x4C7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7D38u;
label_4c7d38:
    // 0x4c7d38: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x4c7d38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4c7d3c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c7d3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7d40: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4c7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4c7d44: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4c7d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7d48: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c7d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7d4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c7d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4c7d54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c7d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c7d58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7d5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c7d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7d60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c7d64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c7d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7d68: 0x441fff1  bgez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4C7D68u;
    {
        const bool branch_taken_0x4c7d68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4c7d68) {
            ctx->pc = 0x4C7D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c7d30;
        }
    }
    ctx->pc = 0x4C7D70u;
label_4c7d70:
    // 0x4c7d70: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4c7d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c7d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7d78: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c7d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c7d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7d84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c7d88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7d8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c7d8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c7d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7d94: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c7d94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7d98: 0x8131f68  j           func_4C7DA0
    ctx->pc = 0x4C7D98u;
    ctx->pc = 0x4C7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7D98u;
    // 0x4c7d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7DA0u;
    goto label_4c7da0;
    ctx->pc = 0x4C7DA0u;
label_4c7da0:
    // 0x4c7da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c7da4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c7da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c7da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c7dac: 0x8c850140  lw          $a1, 0x140($a0)
    ctx->pc = 0x4c7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x4c7db0: 0xac450f40  sw          $a1, 0xF40($v0)
    ctx->pc = 0x4c7db0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F40u, _value); } while (0);
    // 0x4c7db4: 0x84a30160  lh          $v1, 0x160($a1)
    ctx->pc = 0x4c7db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x4c7db8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C7DB8u;
    {
        const bool branch_taken_0x4c7db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7DB8u;
        // 0x4c7dbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7db8) {
            ctx->pc = 0x4C7DC8u;
            goto label_4c7dc8;
        }
    }
    ctx->pc = 0x4C7DC0u;
    // 0x4c7dc0: 0x8131ff0  j           func_4C7FC0
    ctx->pc = 0x4C7DC0u;
    ctx->pc = 0x4C7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7DC0u;
    // 0x4c7dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7FC0u;
    goto label_4c7fc0;
    ctx->pc = 0x4C7DC8u;
label_4c7dc8:
    // 0x4c7dc8: 0x84a201b4  lh          $v0, 0x1B4($a1)
    ctx->pc = 0x4c7dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 436)));
    // 0x4c7dcc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C7DCCu;
    {
        const bool branch_taken_0x4c7dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c7dcc) {
            ctx->pc = 0x4C7DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7DCCu;
            // 0x4c7dd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7DE0u;
            goto label_4c7de0;
        }
    }
    ctx->pc = 0x4C7DD4u;
    // 0x4c7dd4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C7DD4u;
    ctx->pc = 0x4C7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7DD4u;
    // 0x4c7dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C7DDCu;
    // 0x4c7ddc: 0x0  nop
    ctx->pc = 0x4c7ddcu;
    // NOP
label_4c7de0:
    // 0x4c7de0: 0x8131f7a  j           func_4C7DE8
    ctx->pc = 0x4C7DE0u;
    ctx->pc = 0x4C7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7DE0u;
    // 0x4c7de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7DE8u;
    goto label_4c7de8;
    ctx->pc = 0x4C7DE8u;
label_4c7de8:
    // 0x4c7de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c7dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7df0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c7df0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c7df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c7df8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4c7df8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4c7dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c7dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c7e00: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4c7e00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4c7e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c7e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c7e08: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4c7e08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7e0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c7e10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c7e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7e14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c7e18: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c7e18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c7e1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c7e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4c7e20: 0x26b50f40  addiu       $s5, $s5, 0xF40
    ctx->pc = 0x4c7e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3904));
    // 0x4c7e24: 0x26100f30  addiu       $s0, $s0, 0xF30
    ctx->pc = 0x4c7e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3888));
    // 0x4c7e28: 0x26310f34  addiu       $s1, $s1, 0xF34
    ctx->pc = 0x4c7e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3892));
    // 0x4c7e2c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c7e30: 0x26520f38  addiu       $s2, $s2, 0xF38
    ctx->pc = 0x4c7e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3896));
    // 0x4c7e34: 0x94430118  lhu         $v1, 0x118($v0)
    ctx->pc = 0x4c7e34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x4c7e38: 0xa6830118  sh          $v1, 0x118($s4)
    ctx->pc = 0x4c7e38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7e3c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c7e40: 0x9443011c  lhu         $v1, 0x11C($v0)
    ctx->pc = 0x4c7e40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x4c7e44: 0xa683011c  sh          $v1, 0x11C($s4)
    ctx->pc = 0x4c7e44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c7e48: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c7e4c: 0x94430120  lhu         $v1, 0x120($v0)
    ctx->pc = 0x4c7e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x4c7e50: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C7E50u;
    SET_GPR_U32(ctx, 31, 0x4C7E58u);
    ctx->pc = 0x4C7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7E50u;
    // 0x4c7e54: 0xa6830120  sh          $v1, 0x120($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C7E50u, 0x4C7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7E58u;
label_4c7e58:
    // 0x4c7e58: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x4c7e58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7e5c: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x4c7e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7e60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7e64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7e68: 0x34420051  ori         $v0, $v0, 0x51
    ctx->pc = 0x4c7e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)81);
    // 0x4c7e6c: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x4c7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x4c7e70: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4c7e70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4c7e74: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4c7e74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4c7e78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7e7c: 0x1846024  and         $t4, $t4, $a0
    ctx->pc = 0x4c7e7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x4c7e80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c7e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7e84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c7e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7e88: 0x1735824  and         $t3, $t3, $s3
    ctx->pc = 0x4c7e88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x4c7e8c: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x4c7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x4c7e90: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c7e94: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x4c7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x4c7e98: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c7e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c7e9c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c7ea0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c7ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c7ea4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4c7ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7ea8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4c7ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7eac: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x4c7eacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7eb0: 0x24a50f24  addiu       $a1, $a1, 0xF24
    ctx->pc = 0x4c7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3876));
    // 0x4c7eb4: 0x24c60f28  addiu       $a2, $a2, 0xF28
    ctx->pc = 0x4c7eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3880));
    // 0x4c7eb8: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4C7EB8u;
    SET_GPR_U32(ctx, 31, 0x4C7EC0u);
    ctx->pc = 0x4C7EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7EB8u;
    // 0x4c7ebc: 0x24e70f2c  addiu       $a3, $a3, 0xF2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4C7EB8u, 0x4C7EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7EC0u;
label_4c7ec0:
    // 0x4c7ec0: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4c7ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7ec4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4c7ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7ec8: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x4c7ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4c7ecc: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x4c7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4c7ed0: 0x268a0014  addiu       $t2, $s4, 0x14
    ctx->pc = 0x4c7ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4c7ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7ed8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x4c7ed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4c7edc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7ee0: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c7ee0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7ee4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7ee8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7eec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c7eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c7ef0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4c7ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7ef4: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4c7ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4c7ef8: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4c7ef8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7efc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c7f00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7f04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c7f08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c7f08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c7f0c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x4c7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4c7f10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4c7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7f14: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7f18: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c7f18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7f1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7f20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7f24: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c7f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c7f28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7f2c: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x4c7f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x4c7f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7f34: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c7f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c7f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c7f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7f3c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4c7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4c7f40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c7f44: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x4c7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x4c7f48: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7f4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7f4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7f50: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c7f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c7f54: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4c7f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4c7f58: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4c7f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4c7f5c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4c7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4c7f60: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4c7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c7f64: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7f68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c7f6c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c7f70: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c7f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c7f74: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c7f78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7f80: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c7f8c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c7f90: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c7f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c7f94: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4c7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c7f98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7fa0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7fa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c7fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c7fa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7fac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c7fb0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c7fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4c7fb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c7fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7FB8u;
        // 0x4c7fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C7FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C7FC0u;
label_4c7fc0:
    // 0x4c7fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c7fc4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c7fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c7fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c7fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c7fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c7fd4: 0x24a50f40  addiu       $a1, $a1, 0xF40
    ctx->pc = 0x4c7fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3904));
    // 0x4c7fd8: 0x2406c000  addiu       $a2, $zero, -0x4000
    ctx->pc = 0x4c7fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4c7fdc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x4c7fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4c7fe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c7fe4: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x4c7fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4c7fe8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x4c7fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c7fec: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x4c7fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x4c7ff0: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x4c7ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c7ff4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c7ff8: 0x9462011c  lhu         $v0, 0x11C($v1)
    ctx->pc = 0x4c7ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x4c7ffc: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x4c7ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c8000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c8004: 0x94620120  lhu         $v0, 0x120($v1)
    ctx->pc = 0x4c8004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x4c8008: 0xa6060162  sh          $a2, 0x162($s0)
    ctx->pc = 0x4c8008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c800c: 0xa6020120  sh          $v0, 0x120($s0)
    ctx->pc = 0x4c800cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8010: 0xa607015a  sh          $a3, 0x15A($s0)
    ctx->pc = 0x4c8010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 7));
    // 0x4c8014: 0xa608015c  sh          $t0, 0x15C($s0)
    ctx->pc = 0x4c8014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 8));
    // 0x4c8018: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C8018u;
    SET_GPR_U32(ctx, 31, 0x4C8020u);
    ctx->pc = 0x4C801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8018u;
    // 0x4c801c: 0xa6090158  sh          $t1, 0x158($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C8018u, 0x4C8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8020u;
label_4c8020:
    // 0x4c8020: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c8020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c8024: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4c8024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8028: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c8028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c802c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8034: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c8034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c8038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c803c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8040: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8040u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8044: 0x8132014  j           func_4C8050
    ctx->pc = 0x4C8044u;
    ctx->pc = 0x4C8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8044u;
    // 0x4c8048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8050u;
    goto label_4c8050;
    ctx->pc = 0x4C804Cu;
    // 0x4c804c: 0x0  nop
    ctx->pc = 0x4c804cu;
    // NOP
label_4c8050:
    // 0x4c8050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c8054: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4c8054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c805c: 0x85620148  lh          $v0, 0x148($t3)
    ctx->pc = 0x4c805cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 328)));
    // 0x4c8060: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4C8060u;
    {
        const bool branch_taken_0x4c8060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8060u;
        // 0x4c8064: 0x3c06007f  lui         $a2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8060) {
            ctx->pc = 0x4C81F8u;
            goto label_4c81f8;
        }
    }
    ctx->pc = 0x4C8068u;
    // 0x4c8068: 0x25650162  addiu       $a1, $t3, 0x162
    ctx->pc = 0x4c8068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 354));
    // 0x4c806c: 0x24c40f24  addiu       $a0, $a2, 0xF24
    ctx->pc = 0x4c806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 3876));
    // 0x4c8070: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c8070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8074: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8078: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c8078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c807c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4c807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4c8080: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x4c8080u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c8084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c8088: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c808c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c808cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c8090: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c8090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8094: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4C8094u;
    {
        const bool branch_taken_0x4c8094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8094u;
        // 0x4c8098: 0xa0782d  daddu       $t7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8094) {
            ctx->pc = 0x4C81FCu;
            goto label_4c81fc;
        }
    }
    ctx->pc = 0x4C809Cu;
    // 0x4c809c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c809cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c80a0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C80A0u;
    {
        const bool branch_taken_0x4c80a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C80A0u;
        // 0x4c80a4: 0x25850f28  addiu       $a1, $t4, 0xF28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c80a0) {
            ctx->pc = 0x4C80B8u;
            goto label_4c80b8;
        }
    }
    ctx->pc = 0x4C80A8u;
    // 0x4c80a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c80ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C80ACu;
    {
        const bool branch_taken_0x4c80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C80ACu;
        // 0x4c80b0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c80ac) {
            ctx->pc = 0x4C80C0u;
            goto label_4c80c0;
        }
    }
    ctx->pc = 0x4C80B4u;
    // 0x4c80b4: 0x0  nop
    ctx->pc = 0x4c80b4u;
    // NOP
label_4c80b8:
    // 0x4c80b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c80bc: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4c80bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4c80c0:
    // 0x4c80c0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c80c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c80c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c80c8: 0x25ca0f2c  addiu       $t2, $t6, 0xF2C
    ctx->pc = 0x4c80c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 3884));
    // 0x4c80cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4c80ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4c80d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F2Cu));
    // 0x4c80d4: 0x25a80f24  addiu       $t0, $t5, 0xF24
    ctx->pc = 0x4c80d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 3876));
    // 0x4c80d8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c80dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c80dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c80e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c80e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c80e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c80e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c80e8: 0x95870f28  lhu         $a3, 0xF28($t4)
    ctx->pc = 0x4c80e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3880)));
    // 0x4c80ec: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c80ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c80f0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c80f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c80f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c80f8: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4c80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c80fc: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c80fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8100: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c8100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c8104: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c8104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8108: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c8108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c810c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c8110: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c8110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c8114: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c8114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c8118: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c811c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c811cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8120: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8120u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c8124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8128: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c8128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c812c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c8130: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c8130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c8134: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8138: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c8138u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c813c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c813cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c8140: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c8140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c8144: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c8144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c8148: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c8148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c814c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c814cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c8150: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c8150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c8154: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8154u;
    {
        const bool branch_taken_0x4c8154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8154u;
        // 0x4c8158: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8154) {
            ctx->pc = 0x4C8164u;
            goto label_4c8164;
        }
    }
    ctx->pc = 0x4C815Cu;
    // 0x4c815c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8160: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4c8160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c8164:
    // 0x4c8164: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c8164u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c8168: 0x25c60f2c  addiu       $a2, $t6, 0xF2C
    ctx->pc = 0x4c8168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 3884));
    // 0x4c816c: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x4c816cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c8170: 0x25a70f24  addiu       $a3, $t5, 0xF24
    ctx->pc = 0x4c8170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 3876));
    // 0x4c8174: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x4c8174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c8178: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c8178u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c817c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c8180: 0x91830f28  lbu         $v1, 0xF28($t4)
    ctx->pc = 0x4c8180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3880)));
    // 0x4c8184: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c8188: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4c8188u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4c818c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x4c818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x4c8190: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4c8190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c8194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c8198: 0x8da50f24  lw          $a1, 0xF24($t5)
    ctx->pc = 0x4c8198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 3876)));
    // 0x4c819c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c819cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c81a0: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x4c81a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x4c81a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c81a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c81a8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x4c81a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c81ac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x4c81acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x4c81b0: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x4c81b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4c81b4: 0xada50f24  sw          $a1, 0xF24($t5)
    ctx->pc = 0x4c81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3876), GPR_U32(ctx, 5));
    // 0x4c81b8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c81b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c81bc: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4c81bcu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c81c0: 0x85650118  lh          $a1, 0x118($t3)
    ctx->pc = 0x4c81c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 280)));
    // 0x4c81c4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4c81c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c81c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c81cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c81d0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c81d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c81d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c81d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c81d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c81d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c81dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4c81dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4c81e0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c81e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c81e4: 0xa50224a0  sh          $v0, 0x24A0($t0)
    ctx->pc = 0x4c81e4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c81e8: 0x9563011c  lhu         $v1, 0x11C($t3)
    ctx->pc = 0x4c81e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 284)));
    // 0x4c81ec: 0xa50324a2  sh          $v1, 0x24A2($t0)
    ctx->pc = 0x4c81ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9378), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c81f0: 0x81320bc  j           func_4C82F0
    ctx->pc = 0x4C81F0u;
    ctx->pc = 0x4C81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C81F0u;
    // 0x4c81f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C82F0u;
    goto label_4c82f0;
    ctx->pc = 0x4C81F8u;
label_4c81f8:
    // 0x4c81f8: 0x25650162  addiu       $a1, $t3, 0x162
    ctx->pc = 0x4c81f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 354));
label_4c81fc:
    // 0x4c81fc: 0x24c60f24  addiu       $a2, $a2, 0xF24
    ctx->pc = 0x4c81fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3876));
    // 0x4c8200: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c8200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8204: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c8208: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c8208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c820c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c8210: 0x25680118  addiu       $t0, $t3, 0x118
    ctx->pc = 0x4c8210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 280));
    // 0x4c8214: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c8218: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4c8218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c821c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8220: 0x256901bc  addiu       $t1, $t3, 0x1BC
    ctx->pc = 0x4c8220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 444));
    // 0x4c8224: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c8224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c8228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c8228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c822c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8230: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4c8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8234: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c8234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c8238: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4c8238u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c823c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c8240: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c8240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c8244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c8244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c8248: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c8248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c824c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c824cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c8250: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4c8250u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8254: 0xa56a015e  sh          $t2, 0x15E($t3)
    ctx->pc = 0x4c8254u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 350), (uint16_t)GPR_U32(ctx, 10));
    // 0x4c8258: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c8258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c825c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c8260: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c8260u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c8264: 0x813209c  j           func_4C8270
    ctx->pc = 0x4C8264u;
    ctx->pc = 0x4C8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8264u;
    // 0x4c8268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8270u;
    goto label_4c8270;
    ctx->pc = 0x4C826Cu;
    // 0x4c826c: 0x0  nop
    ctx->pc = 0x4c826cu;
    // NOP
label_4c8270:
    // 0x4c8270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c8274: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4c8274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c8278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c827c: 0x25030160  addiu       $v1, $t0, 0x160
    ctx->pc = 0x4c827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 352));
    // 0x4c8280: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c8280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c8284: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c8284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8288: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c8288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c828c: 0x24a50f24  addiu       $a1, $a1, 0xF24
    ctx->pc = 0x4c828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3876));
    // 0x4c8290: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x4c8290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4c8294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c8294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c8298: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c8298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c829c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c82a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c82a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c82a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c82a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c82ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c82acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c82b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c82b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c82b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c82b8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c82b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c82bc: 0x54470004  bnel        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C82BCu;
    {
        const bool branch_taken_0x4c82bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x4c82bc) {
            ctx->pc = 0x4C82C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C82BCu;
            // 0x4c82c0: 0x95020118  lhu         $v0, 0x118($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C82D0u;
            goto label_4c82d0;
        }
    }
    ctx->pc = 0x4C82C4u;
    // 0x4c82c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c82c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c82c8: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C82C8u;
    ctx->pc = 0x4C82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C82C8u;
    // 0x4c82cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C82D0u;
label_4c82d0:
    // 0x4c82d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c82d4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4c82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c82d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c82dc: 0xa46224a0  sh          $v0, 0x24A0($v1)
    ctx->pc = 0x4c82dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4c82e0: 0x9505011c  lhu         $a1, 0x11C($t0)
    ctx->pc = 0x4c82e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 284)));
    // 0x4c82e4: 0xa46524a2  sh          $a1, 0x24A2($v1)
    ctx->pc = 0x4c82e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FB22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB22u, _value); } while (0);
    // 0x4c82e8: 0x81320bc  j           func_4C82F0
    ctx->pc = 0x4C82E8u;
    ctx->pc = 0x4C82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C82E8u;
    // 0x4c82ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C82F0u;
    goto label_4c82f0;
    ctx->pc = 0x4C82F0u;
label_4c82f0:
    // 0x4c82f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c82f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c82f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c82f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c82f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c82f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c82fc: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4C82FCu;
    SET_GPR_U32(ctx, 31, 0x4C8304u);
    ctx->pc = 0x4C8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C82FCu;
    // 0x4c8300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4C82FCu, 0x4C8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8304u;
label_4c8304:
    // 0x4c8304: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C8304u;
    SET_GPR_U32(ctx, 31, 0x4C830Cu);
    ctx->pc = 0x4C8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8304u;
    // 0x4c8308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C8304u, 0x4C830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C830Cu;
label_4c830c:
    // 0x4c830c: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C830Cu;
    SET_GPR_U32(ctx, 31, 0x4C8314u);
    ctx->pc = 0x4C8310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C830Cu;
    // 0x4c8310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C830Cu, 0x4C8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8314u;
label_4c8314:
    // 0x4c8314: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C8314u;
    SET_GPR_U32(ctx, 31, 0x4C831Cu);
    ctx->pc = 0x4C8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8314u;
    // 0x4c8318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C8314u, 0x4C831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C831Cu;
label_4c831c:
    // 0x4c831c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C831Cu;
    {
        const bool branch_taken_0x4c831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C831Cu;
        // 0x4c8320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c831c) {
            ctx->pc = 0x4C8340u;
            goto label_4c8340;
        }
    }
    ctx->pc = 0x4C8324u;
    // 0x4c8324: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c8328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c832c: 0x8c450f40  lw          $a1, 0xF40($v0)
    ctx->pc = 0x4c832cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F40u));
    // 0x4c8330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8334: 0x8126ee2  j           func_49BB88
    ctx->pc = 0x4C8334u;
    ctx->pc = 0x4C8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8334u;
    // 0x4c8338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    sub_0049BB88_0x49bb88(rdram, ctx, runtime); return;
    ctx->pc = 0x4C833Cu;
    // 0x4c833c: 0x0  nop
    ctx->pc = 0x4c833cu;
    // NOP
label_4c8340:
    // 0x4c8340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8344: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8348: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8348u;
        // 0x4c834c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8350u;
}
