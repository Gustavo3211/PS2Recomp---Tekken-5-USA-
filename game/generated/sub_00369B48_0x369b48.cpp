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

// Function: sub_00369B48
// Address: 0x369b48 - 0x369c60
void sub_00369B48_0x369b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369B48_0x369b48");
#endif

    switch (ctx->pc) {
        case 0x369b60u: goto label_369b60;
        case 0x369b70u: goto label_369b70;
        case 0x369b8cu: goto label_369b8c;
        case 0x369b98u: goto label_369b98;
        case 0x369ba4u: goto label_369ba4;
        case 0x369bc8u: goto label_369bc8;
        case 0x369bd8u: goto label_369bd8;
        case 0x369becu: goto label_369bec;
        case 0x369c18u: goto label_369c18;
        case 0x369c20u: goto label_369c20;
        case 0x369c2cu: goto label_369c2c;
        case 0x369c38u: goto label_369c38;
        case 0x369c48u: goto label_369c48;
        default: break;
    }

    ctx->pc = 0x369b48u;

    // 0x369b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x369b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369b58: 0xc0a6100  jal         func_298400
    ctx->pc = 0x369B58u;
    SET_GPR_U32(ctx, 31, 0x369B60u);
    ctx->pc = 0x369B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B58u;
    // 0x369b5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x369B58u, 0x369B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B60u;
label_369b60:
    // 0x369b60: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x369B60u;
    {
        const bool branch_taken_0x369b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369b60) {
            ctx->pc = 0x369B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369B60u;
            // 0x369b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369C4Cu;
            goto label_369c4c;
        }
    }
    ctx->pc = 0x369B68u;
    // 0x369b68: 0xc0403da  jal         func_100F68
    ctx->pc = 0x369B68u;
    SET_GPR_U32(ctx, 31, 0x369B70u);
    ctx->pc = 0x100F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100F68u, 0x369B68u, 0x369B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B70u;
label_369b70:
    // 0x369b70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x369b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369b74: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x369b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x369b78: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x369b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x369b7c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x369B7Cu;
    {
        const bool branch_taken_0x369b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369b7c) {
            ctx->pc = 0x369BC0u;
            goto label_369bc0;
        }
    }
    ctx->pc = 0x369B84u;
    // 0x369b84: 0xc040454  jal         func_101150
    ctx->pc = 0x369B84u;
    SET_GPR_U32(ctx, 31, 0x369B8Cu);
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x369B84u, 0x369B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B8Cu;
label_369b8c:
    // 0x369b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b90: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x369B90u;
    SET_GPR_U32(ctx, 31, 0x369B98u);
    ctx->pc = 0x369B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B90u;
    // 0x369b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x369B90u, 0x369B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B98u;
label_369b98:
    // 0x369b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x369b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b9c: 0xc0a4d12  jal         func_293448
    ctx->pc = 0x369B9Cu;
    SET_GPR_U32(ctx, 31, 0x369BA4u);
    ctx->pc = 0x369BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B9Cu;
    // 0x369ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293448u, 0x369B9Cu, 0x369BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BA4u;
label_369ba4:
    // 0x369ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369bb4: 0x80c2320  j           func_308C80
    ctx->pc = 0x369BB4u;
    ctx->pc = 0x369BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BB4u;
    // 0x369bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308C80u;
    sub_00308C80_0x308c80(rdram, ctx, runtime); return;
    ctx->pc = 0x369BBCu;
    // 0x369bbc: 0x0  nop
    ctx->pc = 0x369bbcu;
    // NOP
label_369bc0:
    // 0x369bc0: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x369BC0u;
    SET_GPR_U32(ctx, 31, 0x369BC8u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x369BC0u, 0x369BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BC8u;
label_369bc8:
    // 0x369bc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x369BC8u;
    {
        const bool branch_taken_0x369bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BC8u;
        // 0x369bcc: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bc8) {
            ctx->pc = 0x369C08u;
            goto label_369c08;
        }
    }
    ctx->pc = 0x369BD0u;
    // 0x369bd0: 0xc0a9488  jal         func_2A5220
    ctx->pc = 0x369BD0u;
    SET_GPR_U32(ctx, 31, 0x369BD8u);
    ctx->pc = 0x2A5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5220u, 0x369BD0u, 0x369BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BD8u;
label_369bd8:
    // 0x369bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x369BDCu;
    {
        const bool branch_taken_0x369bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BDCu;
        // 0x369be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bdc) {
            ctx->pc = 0x369C08u;
            goto label_369c08;
        }
    }
    ctx->pc = 0x369BE4u;
    // 0x369be4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x369BE4u;
    SET_GPR_U32(ctx, 31, 0x369BECu);
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x369BE4u, 0x369BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BECu;
label_369bec:
    // 0x369bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x369bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369bfc: 0x80a94c2  j           func_2A5308
    ctx->pc = 0x369BFCu;
    ctx->pc = 0x369C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BFCu;
    // 0x369c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5308u;
    sub_002A5308_0x2a5308(rdram, ctx, runtime); return;
    ctx->pc = 0x369C04u;
    // 0x369c04: 0x0  nop
    ctx->pc = 0x369c04u;
    // NOP
label_369c08:
    // 0x369c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369c0c: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x369c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x369c10: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x369C10u;
    SET_GPR_U32(ctx, 31, 0x369C18u);
    ctx->pc = 0x369C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C10u;
    // 0x369c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x369C10u, 0x369C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C18u;
label_369c18:
    // 0x369c18: 0xc0a7a3c  jal         func_29E8F0
    ctx->pc = 0x369C18u;
    SET_GPR_U32(ctx, 31, 0x369C20u);
    ctx->pc = 0x369C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C18u;
    // 0x369c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8F0u, 0x369C18u, 0x369C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C20u;
label_369c20:
    // 0x369c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c24: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x369C24u;
    SET_GPR_U32(ctx, 31, 0x369C2Cu);
    ctx->pc = 0x369C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C24u;
    // 0x369c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x369C24u, 0x369C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C2Cu;
label_369c2c:
    // 0x369c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x369c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c30: 0xc0a2afe  jal         func_28ABF8
    ctx->pc = 0x369C30u;
    SET_GPR_U32(ctx, 31, 0x369C38u);
    ctx->pc = 0x369C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C30u;
    // 0x369c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABF8u, 0x369C30u, 0x369C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C38u;
label_369c38:
    // 0x369c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x369c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x369c40: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x369C40u;
    SET_GPR_U32(ctx, 31, 0x369C48u);
    ctx->pc = 0x369C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C40u;
    // 0x369c44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x369C40u, 0x369C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C48u;
label_369c48:
    // 0x369c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_369c4c:
    // 0x369c4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369c54: 0x3e00008  jr          $ra
    ctx->pc = 0x369C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C54u;
        // 0x369c58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369C5Cu;
    // 0x369c5c: 0x0  nop
    ctx->pc = 0x369c5cu;
    // NOP
    ctx->pc = 0x369c60u;
}
