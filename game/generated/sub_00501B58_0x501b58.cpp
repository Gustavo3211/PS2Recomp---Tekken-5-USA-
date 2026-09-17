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

// Function: sub_00501B58
// Address: 0x501b58 - 0x501ee8
void sub_00501B58_0x501b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501B58_0x501b58");
#endif

    switch (ctx->pc) {
        case 0x501b6cu: goto label_501b6c;
        case 0x501b70u: goto label_501b70;
        case 0x501ba8u: goto label_501ba8;
        case 0x501c08u: goto label_501c08;
        case 0x501c44u: goto label_501c44;
        case 0x501c48u: goto label_501c48;
        case 0x501c7cu: goto label_501c7c;
        case 0x501c80u: goto label_501c80;
        case 0x501cb4u: goto label_501cb4;
        case 0x501cb8u: goto label_501cb8;
        case 0x501cecu: goto label_501cec;
        case 0x501cf0u: goto label_501cf0;
        case 0x501d10u: goto label_501d10;
        case 0x501e8cu: goto label_501e8c;
        case 0x501e90u: goto label_501e90;
        case 0x501ec4u: goto label_501ec4;
        case 0x501ec8u: goto label_501ec8;
        default: break;
    }

    ctx->pc = 0x501b58u;

label_501b58:
    // 0x501b58: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501b5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501b64: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501B64u;
    SET_GPR_U32(ctx, 31, 0x501B6Cu);
    ctx->pc = 0x501B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501B64u;
    // 0x501b68: 0x2484c838  addiu       $a0, $a0, -0x37C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501B64u, 0x501B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501B6Cu;
label_501b6c:
    // 0x501b6c: 0x0  nop
    ctx->pc = 0x501b6cu;
    // NOP
label_501b70:
    // 0x501b70: 0x0  nop
    ctx->pc = 0x501b70u;
    // NOP
    // 0x501b74: 0x0  nop
    ctx->pc = 0x501b74u;
    // NOP
    // 0x501b78: 0x0  nop
    ctx->pc = 0x501b78u;
    // NOP
    // 0x501b7c: 0x0  nop
    ctx->pc = 0x501b7cu;
    // NOP
    // 0x501b80: 0x0  nop
    ctx->pc = 0x501b80u;
    // NOP
    // 0x501b84: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501B84u;
    {
        const bool branch_taken_0x501b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501b84) {
            ctx->pc = 0x501B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501b70;
        }
    }
    ctx->pc = 0x501B8Cu;
    // 0x501b8c: 0x0  nop
    ctx->pc = 0x501b8cu;
    // NOP
    // 0x501b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x501b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x501b94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x501b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x501b98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x501b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501b9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x501b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x501ba0: 0xc1406d6  jal         func_501B58
    ctx->pc = 0x501BA0u;
    SET_GPR_U32(ctx, 31, 0x501BA8u);
    ctx->pc = 0x501BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501BA0u;
    // 0x501ba4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501B58u;
    goto label_501b58;
    ctx->pc = 0x501BA8u;
label_501ba8:
    // 0x501ba8: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x501ba8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501bac: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x501bacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x501bb0: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x501bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x501bb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x501bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x501bb8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x501bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x501bbc: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x501bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x501bc0: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x501bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x501bc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x501bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x501bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x501BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501BC8u;
        // 0x501bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501BD0u;
    // 0x501bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x501bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x501bd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x501bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501bd8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x501bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x501bdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x501bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501be0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x501be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x501be4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x501be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x501be8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x501be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501bec: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x501becu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x501bf0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x501bf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501bf4: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x501bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x501bf8: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x501bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x501bfc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x501bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x501c00: 0xc1406d6  jal         func_501B58
    ctx->pc = 0x501C00u;
    SET_GPR_U32(ctx, 31, 0x501C08u);
    ctx->pc = 0x501C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501C00u;
    // 0x501c04: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501B58u;
    goto label_501b58;
    ctx->pc = 0x501C08u;
label_501c08:
    // 0x501c08: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x501c08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501c0c: 0x97a50004  lhu         $a1, 0x4($sp)
    ctx->pc = 0x501c0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x501c10: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x501c10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x501c14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x501c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x501c18: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x501c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x501c1c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x501c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x501c20: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x501c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x501c24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x501c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x501c28: 0x3e00008  jr          $ra
    ctx->pc = 0x501C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501C28u;
        // 0x501c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501C30u;
    // 0x501c30: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501c3c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501C3Cu;
    SET_GPR_U32(ctx, 31, 0x501C44u);
    ctx->pc = 0x501C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501C3Cu;
    // 0x501c40: 0x2484c850  addiu       $a0, $a0, -0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501C3Cu, 0x501C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501C44u;
label_501c44:
    // 0x501c44: 0x0  nop
    ctx->pc = 0x501c44u;
    // NOP
label_501c48:
    // 0x501c48: 0x0  nop
    ctx->pc = 0x501c48u;
    // NOP
    // 0x501c4c: 0x0  nop
    ctx->pc = 0x501c4cu;
    // NOP
    // 0x501c50: 0x0  nop
    ctx->pc = 0x501c50u;
    // NOP
    // 0x501c54: 0x0  nop
    ctx->pc = 0x501c54u;
    // NOP
    // 0x501c58: 0x0  nop
    ctx->pc = 0x501c58u;
    // NOP
    // 0x501c5c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501C5Cu;
    {
        const bool branch_taken_0x501c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501c5c) {
            ctx->pc = 0x501C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501c48;
        }
    }
    ctx->pc = 0x501C64u;
    // 0x501c64: 0x0  nop
    ctx->pc = 0x501c64u;
    // NOP
    // 0x501c68: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501c6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501c74: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501C74u;
    SET_GPR_U32(ctx, 31, 0x501C7Cu);
    ctx->pc = 0x501C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501C74u;
    // 0x501c78: 0x2484c868  addiu       $a0, $a0, -0x3798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501C74u, 0x501C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501C7Cu;
label_501c7c:
    // 0x501c7c: 0x0  nop
    ctx->pc = 0x501c7cu;
    // NOP
label_501c80:
    // 0x501c80: 0x0  nop
    ctx->pc = 0x501c80u;
    // NOP
    // 0x501c84: 0x0  nop
    ctx->pc = 0x501c84u;
    // NOP
    // 0x501c88: 0x0  nop
    ctx->pc = 0x501c88u;
    // NOP
    // 0x501c8c: 0x0  nop
    ctx->pc = 0x501c8cu;
    // NOP
    // 0x501c90: 0x0  nop
    ctx->pc = 0x501c90u;
    // NOP
    // 0x501c94: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501C94u;
    {
        const bool branch_taken_0x501c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501c94) {
            ctx->pc = 0x501C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501c80;
        }
    }
    ctx->pc = 0x501C9Cu;
    // 0x501c9c: 0x0  nop
    ctx->pc = 0x501c9cu;
    // NOP
    // 0x501ca0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501ca4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501cac: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501CACu;
    SET_GPR_U32(ctx, 31, 0x501CB4u);
    ctx->pc = 0x501CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501CACu;
    // 0x501cb0: 0x2484c880  addiu       $a0, $a0, -0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501CACu, 0x501CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501CB4u;
label_501cb4:
    // 0x501cb4: 0x0  nop
    ctx->pc = 0x501cb4u;
    // NOP
label_501cb8:
    // 0x501cb8: 0x0  nop
    ctx->pc = 0x501cb8u;
    // NOP
    // 0x501cbc: 0x0  nop
    ctx->pc = 0x501cbcu;
    // NOP
    // 0x501cc0: 0x0  nop
    ctx->pc = 0x501cc0u;
    // NOP
    // 0x501cc4: 0x0  nop
    ctx->pc = 0x501cc4u;
    // NOP
    // 0x501cc8: 0x0  nop
    ctx->pc = 0x501cc8u;
    // NOP
    // 0x501ccc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501CCCu;
    {
        const bool branch_taken_0x501ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501ccc) {
            ctx->pc = 0x501CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501cb8;
        }
    }
    ctx->pc = 0x501CD4u;
    // 0x501cd4: 0x0  nop
    ctx->pc = 0x501cd4u;
    // NOP
    // 0x501cd8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501cdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501ce4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501CE4u;
    SET_GPR_U32(ctx, 31, 0x501CECu);
    ctx->pc = 0x501CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501CE4u;
    // 0x501ce8: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501CE4u, 0x501CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501CECu;
label_501cec:
    // 0x501cec: 0x0  nop
    ctx->pc = 0x501cecu;
    // NOP
label_501cf0:
    // 0x501cf0: 0x0  nop
    ctx->pc = 0x501cf0u;
    // NOP
    // 0x501cf4: 0x0  nop
    ctx->pc = 0x501cf4u;
    // NOP
    // 0x501cf8: 0x0  nop
    ctx->pc = 0x501cf8u;
    // NOP
    // 0x501cfc: 0x0  nop
    ctx->pc = 0x501cfcu;
    // NOP
    // 0x501d00: 0x0  nop
    ctx->pc = 0x501d00u;
    // NOP
    // 0x501d04: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501D04u;
    {
        const bool branch_taken_0x501d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501d04) {
            ctx->pc = 0x501CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501cf0;
        }
    }
    ctx->pc = 0x501D0Cu;
    // 0x501d0c: 0x0  nop
    ctx->pc = 0x501d0cu;
    // NOP
label_501d10:
    // 0x501d10: 0x41023  negu        $v0, $a0
    ctx->pc = 0x501d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x501d14: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x501d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x501d18: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x501d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x501d1c: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x501d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x501d20: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x501d20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501d24: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x501d24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x501d28: 0x2812  mflo        $a1
    ctx->pc = 0x501d28u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x501d2c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x501d2cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501d30: 0x1012  mflo        $v0
    ctx->pc = 0x501d30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x501d34: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x501d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x501d38: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x501d38u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501d3c: 0x2012  mflo        $a0
    ctx->pc = 0x501d3cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x501d40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x501d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x501d44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x501d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x501d48: 0xe3382b  sltu        $a3, $a3, $v1
    ctx->pc = 0x501d48u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x501d4c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x501D4Cu;
    {
        const bool branch_taken_0x501d4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x501D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501D4Cu;
        // 0x501d50: 0x52b00  sll         $a1, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501d4c) {
            ctx->pc = 0x501D60u;
            goto label_501d60;
        }
    }
    ctx->pc = 0x501D54u;
    // 0x501d54: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x501d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x501d58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x501D58u;
    {
        const bool branch_taken_0x501d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501D58u;
        // 0x501d5c: 0xa444a6a4  sh          $a0, -0x595C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294944420), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501d58) {
            ctx->pc = 0x501D78u;
            goto label_501d78;
        }
    }
    ctx->pc = 0x501D60u;
label_501d60:
    // 0x501d60: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x501D60u;
    {
        const bool branch_taken_0x501d60 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x501D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501D60u;
        // 0x501d64: 0x3c03008f  lui         $v1, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501d60) {
            ctx->pc = 0x501D70u;
            goto label_501d70;
        }
    }
    ctx->pc = 0x501D68u;
    // 0x501d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x501D68u;
    {
        const bool branch_taken_0x501d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501D68u;
        // 0x501d6c: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501d68) {
            ctx->pc = 0x501D74u;
            goto label_501d74;
        }
    }
    ctx->pc = 0x501D70u;
label_501d70:
    // 0x501d70: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x501d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_501d74:
    // 0x501d74: 0xa462a6a4  sh          $v0, -0x595C($v1)
    ctx->pc = 0x501d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944420), (uint16_t)GPR_U32(ctx, 2));
label_501d78:
    // 0x501d78: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x501d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x501d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x501D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501D7Cu;
        // 0x501d80: 0xac45a6a8  sw          $a1, -0x5958($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294944424), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501D84u;
    // 0x501d84: 0x0  nop
    ctx->pc = 0x501d84u;
    // NOP
    // 0x501d88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x501d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501d8c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x501d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x501d90: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x501d90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x501d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x501d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x501d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x501d9c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x501d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x501da0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x501da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x501da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x501da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x501da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501dac: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x501dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x501db0: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x501db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x501db4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x501db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x501db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501dbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x501dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x501dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501dc4: 0xace2a660  sw          $v0, -0x59A0($a3)
    ctx->pc = 0x501dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EA660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA660u, _value); } while (0);
    // 0x501dc8: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x501dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x501dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x501dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501dd0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x501dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501dd4: 0xad09a668  sw          $t1, -0x5998($t0)
    ctx->pc = 0x501dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8EA668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA668u, _value); } while (0);
    // 0x501dd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x501dd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x501ddc: 0xe461a664  swc1        $f1, -0x599C($v1)
    ctx->pc = 0x501ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EA664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA664u, _value); } while (0); }
    // 0x501de0: 0x2012  mflo        $a0
    ctx->pc = 0x501de0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x501de4: 0x8140744  j           func_501D10
    ctx->pc = 0x501DE4u;
    ctx->pc = 0x501DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501DE4u;
    // 0x501de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501D10u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_501d10;
    ctx->pc = 0x501DECu;
    // 0x501dec: 0x0  nop
    ctx->pc = 0x501decu;
    // NOP
    // 0x501df0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x501df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501df4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x501df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x501df8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x501df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x501dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x501dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x501e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x501e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x501e04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x501e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501e0c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x501e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x501e10: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x501e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x501e14: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x501e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x501e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501e1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x501e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x501e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x501e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x501e24: 0xac62a664  sw          $v0, -0x599C($v1)
    ctx->pc = 0x501e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944356), GPR_U32(ctx, 2));
    // 0x501e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x501e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501e2c: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x501e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x501e30: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x501e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501e34: 0xace9a668  sw          $t1, -0x5998($a3)
    ctx->pc = 0x501e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8EA668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA668u, _value); } while (0);
    // 0x501e38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x501e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x501e3c: 0xe501a660  swc1        $f1, -0x59A0($t0)
    ctx->pc = 0x501e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EA660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA660u, _value); } while (0); }
    // 0x501e40: 0x8140744  j           func_501D10
    ctx->pc = 0x501E40u;
    ctx->pc = 0x501E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501E40u;
    // 0x501e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501D10u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_501d10;
    ctx->pc = 0x501E48u;
    // 0x501e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501e4c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x501e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x501e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501e54: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x501e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x501e58: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x501e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x501e5c: 0xac44a664  sw          $a0, -0x599C($v0)
    ctx->pc = 0x501e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EA664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA664u, _value); } while (0);
    // 0x501e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x501e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501e64: 0xac65a660  sw          $a1, -0x59A0($v1)
    ctx->pc = 0x501e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EA660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA660u, _value); } while (0);
    // 0x501e68: 0xace6a668  sw          $a2, -0x5998($a3)
    ctx->pc = 0x501e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EA668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA668u, _value); } while (0);
    // 0x501e6c: 0x8140744  j           func_501D10
    ctx->pc = 0x501E6Cu;
    ctx->pc = 0x501E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501E6Cu;
    // 0x501e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501D10u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_501d10;
    ctx->pc = 0x501E74u;
    // 0x501e74: 0x0  nop
    ctx->pc = 0x501e74u;
    // NOP
    // 0x501e78: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501e84: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501E84u;
    SET_GPR_U32(ctx, 31, 0x501E8Cu);
    ctx->pc = 0x501E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501E84u;
    // 0x501e88: 0x2484c8b0  addiu       $a0, $a0, -0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501E84u, 0x501E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501E8Cu;
label_501e8c:
    // 0x501e8c: 0x0  nop
    ctx->pc = 0x501e8cu;
    // NOP
label_501e90:
    // 0x501e90: 0x0  nop
    ctx->pc = 0x501e90u;
    // NOP
    // 0x501e94: 0x0  nop
    ctx->pc = 0x501e94u;
    // NOP
    // 0x501e98: 0x0  nop
    ctx->pc = 0x501e98u;
    // NOP
    // 0x501e9c: 0x0  nop
    ctx->pc = 0x501e9cu;
    // NOP
    // 0x501ea0: 0x0  nop
    ctx->pc = 0x501ea0u;
    // NOP
    // 0x501ea4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501EA4u;
    {
        const bool branch_taken_0x501ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501ea4) {
            ctx->pc = 0x501E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501e90;
        }
    }
    ctx->pc = 0x501EACu;
    // 0x501eac: 0x0  nop
    ctx->pc = 0x501eacu;
    // NOP
    // 0x501eb0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501eb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501ebc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501EBCu;
    SET_GPR_U32(ctx, 31, 0x501EC4u);
    ctx->pc = 0x501EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501EBCu;
    // 0x501ec0: 0x2484c8c8  addiu       $a0, $a0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501EBCu, 0x501EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501EC4u;
label_501ec4:
    // 0x501ec4: 0x0  nop
    ctx->pc = 0x501ec4u;
    // NOP
label_501ec8:
    // 0x501ec8: 0x0  nop
    ctx->pc = 0x501ec8u;
    // NOP
    // 0x501ecc: 0x0  nop
    ctx->pc = 0x501eccu;
    // NOP
    // 0x501ed0: 0x0  nop
    ctx->pc = 0x501ed0u;
    // NOP
    // 0x501ed4: 0x0  nop
    ctx->pc = 0x501ed4u;
    // NOP
    // 0x501ed8: 0x0  nop
    ctx->pc = 0x501ed8u;
    // NOP
    // 0x501edc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501EDCu;
    {
        const bool branch_taken_0x501edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501edc) {
            ctx->pc = 0x501EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501ec8;
        }
    }
    ctx->pc = 0x501EE4u;
    // 0x501ee4: 0x0  nop
    ctx->pc = 0x501ee4u;
    // NOP
    ctx->pc = 0x501ee8u;
}
