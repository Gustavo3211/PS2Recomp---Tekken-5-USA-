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

// Function: sub_00295B28
// Address: 0x295b28 - 0x296048
void sub_00295B28_0x295b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295B28_0x295b28");
#endif

    switch (ctx->pc) {
        case 0x295b80u: goto label_295b80;
        case 0x295b90u: goto label_295b90;
        case 0x295ba0u: goto label_295ba0;
        case 0x295bacu: goto label_295bac;
        case 0x295bccu: goto label_295bcc;
        case 0x295be0u: goto label_295be0;
        case 0x295bf8u: goto label_295bf8;
        case 0x295c10u: goto label_295c10;
        case 0x295c20u: goto label_295c20;
        case 0x295c40u: goto label_295c40;
        case 0x295c50u: goto label_295c50;
        case 0x295cc4u: goto label_295cc4;
        case 0x295d6cu: goto label_295d6c;
        case 0x295d80u: goto label_295d80;
        case 0x295dd8u: goto label_295dd8;
        case 0x295df8u: goto label_295df8;
        case 0x295e14u: goto label_295e14;
        case 0x295e38u: goto label_295e38;
        case 0x295e54u: goto label_295e54;
        case 0x295e6cu: goto label_295e6c;
        case 0x295ea0u: goto label_295ea0;
        case 0x295f1cu: goto label_295f1c;
        case 0x295f54u: goto label_295f54;
        case 0x295f70u: goto label_295f70;
        case 0x295f84u: goto label_295f84;
        case 0x295fc0u: goto label_295fc0;
        case 0x295fd8u: goto label_295fd8;
        default: break;
    }

    ctx->pc = 0x295b28u;

    // 0x295b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295b2c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x295b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x295b30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x295b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x295b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x295b38: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x295b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x295b3c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x295b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x295b40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x295b44: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x295b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x295b48: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x295b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x295b4c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x295b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x295b50: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x295b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x295b54: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x295b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x295b58: 0x5040012b  beql        $v0, $zero, . + 4 + (0x12B << 2)
    ctx->pc = 0x295B58u;
    {
        const bool branch_taken_0x295b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b58) {
            ctx->pc = 0x295B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295B58u;
            // 0x295b5c: 0x96420150  lhu         $v0, 0x150($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296008u;
            goto label_296008;
        }
    }
    ctx->pc = 0x295B60u;
    // 0x295b60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x295b64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x295b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295b6c: 0x8c63baa0  lw          $v1, -0x4560($v1)
    ctx->pc = 0x295b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949536)));
    // 0x295b70: 0x600008  jr          $v1
    ctx->pc = 0x295B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295B78u: goto label_295b78;
            case 0x295BD8u: goto label_295bd8;
            case 0x295C38u: goto label_295c38;
            case 0x295C48u: goto label_295c48;
            case 0x295D78u: goto label_295d78;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DF0u: goto label_295df0;
            case 0x295FD0u: goto label_295fd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295B70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295B78u;
label_295b78:
    // 0x295b78: 0xc089622  jal         func_225888
    ctx->pc = 0x295B78u;
    SET_GPR_U32(ctx, 31, 0x295B80u);
    ctx->pc = 0x295B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B78u;
    // 0x295b7c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x295B78u, 0x295B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B80u;
label_295b80:
    // 0x295b80: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x295B80u;
    {
        const bool branch_taken_0x295b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B80u;
        // 0x295b84: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b80) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295B88u;
    // 0x295b88: 0xc089622  jal         func_225888
    ctx->pc = 0x295B88u;
    SET_GPR_U32(ctx, 31, 0x295B90u);
    ctx->pc = 0x295B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B88u;
    // 0x295b8c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x295B88u, 0x295B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B90u;
label_295b90:
    // 0x295b90: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x295B90u;
    {
        const bool branch_taken_0x295b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B90u;
        // 0x295b94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b90) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295B98u;
    // 0x295b98: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x295B98u;
    SET_GPR_U32(ctx, 31, 0x295BA0u);
    ctx->pc = 0x295B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B98u;
    // 0x295b9c: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x295B98u, 0x295BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BA0u;
label_295ba0:
    // 0x295ba0: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x295ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x295ba4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x295BA4u;
    SET_GPR_U32(ctx, 31, 0x295BACu);
    ctx->pc = 0x295BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BA4u;
    // 0x295ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x295BA4u, 0x295BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BACu;
label_295bac:
    // 0x295bac: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x295bacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x295bb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295bb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295bbc: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x295bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x295bc0: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x295bc4: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x295BC4u;
    SET_GPR_U32(ctx, 31, 0x295BCCu);
    ctx->pc = 0x295BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BC4u;
    // 0x295bc8: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x295BC4u, 0x295BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BCCu;
label_295bcc:
    // 0x295bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295bd0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x295BD0u;
    {
        const bool branch_taken_0x295bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BD0u;
        // 0x295bd4: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bd0) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295BD8u;
label_295bd8:
    // 0x295bd8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295BD8u;
    SET_GPR_U32(ctx, 31, 0x295BE0u);
    ctx->pc = 0x295BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BD8u;
    // 0x295bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295BD8u, 0x295BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BE0u;
label_295be0:
    // 0x295be0: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x295be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x295be4: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x295BE4u;
    {
        const bool branch_taken_0x295be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BE4u;
        // 0x295be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295be4) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295BECu;
    // 0x295bec: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x295becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x295bf0: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x295BF0u;
    SET_GPR_U32(ctx, 31, 0x295BF8u);
    ctx->pc = 0x295BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BF0u;
    // 0x295bf4: 0x8c5000a4  lw          $s0, 0xA4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x295BF0u, 0x295BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BF8u;
label_295bf8:
    // 0x295bf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295BF8u;
    {
        const bool branch_taken_0x295bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BF8u;
        // 0x295bfc: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bf8) {
            ctx->pc = 0x295C14u;
            goto label_295c14;
        }
    }
    ctx->pc = 0x295C00u;
    // 0x295c00: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x295c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x295c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c08: 0xc0ad894  jal         func_2B6250
    ctx->pc = 0x295C08u;
    SET_GPR_U32(ctx, 31, 0x295C10u);
    ctx->pc = 0x295C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C08u;
    // 0x295c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6250u, 0x295C08u, 0x295C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C10u;
label_295c10:
    // 0x295c10: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x295c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_295c14:
    // 0x295c14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x295c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c18: 0xc0a516e  jal         func_2945B8
    ctx->pc = 0x295C18u;
    SET_GPR_U32(ctx, 31, 0x295C20u);
    ctx->pc = 0x295C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C18u;
    // 0x295c1c: 0x24847378  addiu       $a0, $a0, 0x7378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2945B8u, 0x295C18u, 0x295C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C20u;
label_295c20:
    // 0x295c20: 0x96420150  lhu         $v0, 0x150($s2)
    ctx->pc = 0x295c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x295c24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295c28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x295c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x295c2c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x295C2Cu;
    {
        const bool branch_taken_0x295c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C2Cu;
        // 0x295c30: 0xae430048  sw          $v1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c2c) {
            ctx->pc = 0x296014u;
            goto label_296014;
        }
    }
    ctx->pc = 0x295C34u;
    // 0x295c34: 0x0  nop
    ctx->pc = 0x295c34u;
    // NOP
label_295c38:
    // 0x295c38: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295C38u;
    SET_GPR_U32(ctx, 31, 0x295C40u);
    ctx->pc = 0x295C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C38u;
    // 0x295c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295C38u, 0x295C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C40u;
label_295c40:
    // 0x295c40: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x295C40u;
    {
        const bool branch_taken_0x295c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C40u;
        // 0x295c44: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c40) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295C48u;
label_295c48:
    // 0x295c48: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295C48u;
    SET_GPR_U32(ctx, 31, 0x295C50u);
    ctx->pc = 0x295C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C48u;
    // 0x295c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295C48u, 0x295C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C50u;
label_295c50:
    // 0x295c50: 0x82460154  lb          $a2, 0x154($s2)
    ctx->pc = 0x295c50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x295c54: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x295c58: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x295c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x295c5c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x295c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x295c60: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x295c60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x295c64: 0x2810  mfhi        $a1
    ctx->pc = 0x295c64u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x295c68: 0x9812  mflo        $s3
    ctx->pc = 0x295c68u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x295c6c: 0x14a000ea  bnez        $a1, . + 4 + (0xEA << 2)
    ctx->pc = 0x295C6Cu;
    {
        const bool branch_taken_0x295c6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C6Cu;
        // 0x295c70: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c6c) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295C74u;
    // 0x295c74: 0x126000e8  beqz        $s3, . + 4 + (0xE8 << 2)
    ctx->pc = 0x295C74u;
    {
        const bool branch_taken_0x295c74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C74u;
        // 0x295c78: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c74) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295C7Cu;
    // 0x295c7c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x295c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295c80: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x295C80u;
    {
        const bool branch_taken_0x295c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295c80) {
            ctx->pc = 0x295C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295C80u;
            // 0x295c84: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295D40u;
            goto label_295d40;
        }
    }
    ctx->pc = 0x295C88u;
    // 0x295c88: 0x82420153  lb          $v0, 0x153($s2)
    ctx->pc = 0x295c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 339)));
    // 0x295c8c: 0x93a023  subu        $s4, $a0, $s3
    ctx->pc = 0x295c8cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x295c90: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x295c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295c94: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x295C94u;
    {
        const bool branch_taken_0x295c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295C94u;
        // 0x295c98: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c94) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295C9Cu;
    // 0x295c9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x295c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x295ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ca4: 0x8c43b710  lw          $v1, -0x48F0($v0)
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BB710u));
    // 0x295ca8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x295ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x295cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cb0: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x295cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x295cb4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x295cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x295cb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295cbc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x295CBCu;
    SET_GPR_U32(ctx, 31, 0x295CC4u);
    ctx->pc = 0x295CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CBCu;
    // 0x295cc0: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x295CBCu, 0x295CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CC4u;
label_295cc4:
    // 0x295cc4: 0x2148023  subu        $s0, $s0, $s4
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x295cc8: 0x82480152  lb          $t0, 0x152($s2)
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x295ccc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x295cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x295cd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x295cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295cd4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x295cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x295cd8: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x295cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x295cdc: 0x2463e270  addiu       $v1, $v1, -0x1D90
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959728));
    // 0x295ce0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x295ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295ce4: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x295ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x295ce8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x295ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x295cec: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x295cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
    // 0x295cf0: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x295cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x295cf4: 0x2421b7c8  addiu       $at, $at, -0x4838
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948808));
    // 0x295cf8: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x295cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x295cfc: 0xac480054  sw          $t0, 0x54($v0)
    ctx->pc = 0x295cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 8));
    // 0x295d00: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x295d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x295d04: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x295d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x295d08: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x295d0c: 0xac54005c  sw          $s4, 0x5C($v0)
    ctx->pc = 0x295d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 20));
    // 0x295d10: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x295d14: 0x24c6ba88  addiu       $a2, $a2, -0x4578
    ctx->pc = 0x295d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949512));
    // 0x295d18: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x295d1c: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x295d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x295d20: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x295d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x295d24: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x295d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x295d28: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x295d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x295d2c: 0xac51006c  sw          $s1, 0x6C($v0)
    ctx->pc = 0x295d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 17));
    // 0x295d30: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x295d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x295d34: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x295d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    // 0x295d38: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x295D38u;
    {
        const bool branch_taken_0x295d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D38u;
        // 0x295d3c: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d38) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295D40u;
label_295d40:
    // 0x295d40: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x295d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x295d44: 0x8c62b710  lw          $v0, -0x48F0($v1)
    ctx->pc = 0x295d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x295d48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x295d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295D4Cu;
    {
        const bool branch_taken_0x295d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D4Cu;
        // 0x295d50: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d4c) {
            ctx->pc = 0x295D60u;
            goto label_295d60;
        }
    }
    ctx->pc = 0x295D54u;
    // 0x295d54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x295d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295d58: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x295D58u;
    {
        const bool branch_taken_0x295d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D58u;
        // 0x295d5c: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d58) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295D60u;
label_295d60:
    // 0x295d60: 0x24050708  addiu       $a1, $zero, 0x708
    ctx->pc = 0x295d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x295d64: 0xc0a62b2  jal         func_298AC8
    ctx->pc = 0x295D64u;
    SET_GPR_U32(ctx, 31, 0x295D6Cu);
    ctx->pc = 0x295D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D64u;
    // 0x295d68: 0x2484c5b0  addiu       $a0, $a0, -0x3A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298AC8u, 0x295D64u, 0x295D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D6Cu;
label_295d6c:
    // 0x295d6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x295d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295d70: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x295D70u;
    {
        const bool branch_taken_0x295d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D70u;
        // 0x295d74: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d70) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295D78u;
label_295d78:
    // 0x295d78: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295D78u;
    SET_GPR_U32(ctx, 31, 0x295D80u);
    ctx->pc = 0x295D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D78u;
    // 0x295d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295D78u, 0x295D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D80u;
label_295d80:
    // 0x295d80: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x295d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x295d84: 0x2842005f  slti        $v0, $v0, 0x5F
    ctx->pc = 0x295d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)95) ? 1 : 0);
    // 0x295d88: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x295D88u;
    {
        const bool branch_taken_0x295d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D88u;
        // 0x295d8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d88) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295D90u;
    // 0x295d90: 0x92420154  lbu         $v0, 0x154($s2)
    ctx->pc = 0x295d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x295d94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295d98: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x295d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x295d9c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x295D9Cu;
    {
        const bool branch_taken_0x295d9c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x295DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D9Cu;
        // 0x295da0: 0xa2420154  sb          $v0, 0x154($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 340), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d9c) {
            ctx->pc = 0x295DC8u;
            goto label_295dc8;
        }
    }
    ctx->pc = 0x295DA4u;
    // 0x295da4: 0x82430152  lb          $v1, 0x152($s2)
    ctx->pc = 0x295da4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x295da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x295da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295dac: 0x50620085  beql        $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x295DACu;
    {
        const bool branch_taken_0x295dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x295dac) {
            ctx->pc = 0x295DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295DACu;
            // 0x295db0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FC4u;
            goto label_295fc4;
        }
    }
    ctx->pc = 0x295DB4u;
    // 0x295db4: 0x96420150  lhu         $v0, 0x150($s2)
    ctx->pc = 0x295db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x295db8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x295db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x295dbc: 0xa6420150  sh          $v0, 0x150($s2)
    ctx->pc = 0x295dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 336), (uint16_t)GPR_U32(ctx, 2));
    // 0x295dc0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x295DC0u;
    {
        const bool branch_taken_0x295dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DC0u;
        // 0x295dc4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dc0) {
            ctx->pc = 0x295FC4u;
            goto label_295fc4;
        }
    }
    ctx->pc = 0x295DC8u;
label_295dc8:
    // 0x295dc8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x295DC8u;
    {
        const bool branch_taken_0x295dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DC8u;
        // 0x295dcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dc8) {
            ctx->pc = 0x295FC4u;
            goto label_295fc4;
        }
    }
    ctx->pc = 0x295DD0u;
label_295dd0:
    // 0x295dd0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295DD0u;
    SET_GPR_U32(ctx, 31, 0x295DD8u);
    ctx->pc = 0x295DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DD0u;
    // 0x295dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295DD0u, 0x295DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DD8u;
label_295dd8:
    // 0x295dd8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x295dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x295ddc: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x295ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x295de0: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x295DE0u;
    {
        const bool branch_taken_0x295de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DE0u;
        // 0x295de4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295de0) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295DE8u;
    // 0x295de8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x295DE8u;
    {
        const bool branch_taken_0x295de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DE8u;
        // 0x295dec: 0x96420150  lhu         $v0, 0x150($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295de8) {
            ctx->pc = 0x296008u;
            goto label_296008;
        }
    }
    ctx->pc = 0x295DF0u;
label_295df0:
    // 0x295df0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295DF0u;
    SET_GPR_U32(ctx, 31, 0x295DF8u);
    ctx->pc = 0x295DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DF0u;
    // 0x295df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295DF0u, 0x295DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DF8u;
label_295df8:
    // 0x295df8: 0x82430152  lb          $v1, 0x152($s2)
    ctx->pc = 0x295df8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x295dfc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x295DFCu;
    {
        const bool branch_taken_0x295dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DFCu;
        // 0x295e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dfc) {
            ctx->pc = 0x295E20u;
            goto label_295e20;
        }
    }
    ctx->pc = 0x295E04u;
    // 0x295e04: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x295e04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x295e08: 0x26b0b710  addiu       $s0, $s5, -0x48F0
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948624));
    // 0x295e0c: 0xc0880d8  jal         func_220360
    ctx->pc = 0x295E0Cu;
    SET_GPR_U32(ctx, 31, 0x295E14u);
    ctx->pc = 0x295E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E0Cu;
    // 0x295e10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x295E0Cu, 0x295E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E14u;
label_295e14:
    // 0x295e14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x295E14u;
    {
        const bool branch_taken_0x295e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E14u;
        // 0x295e18: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e14) {
            ctx->pc = 0x295E3Cu;
            goto label_295e3c;
        }
    }
    ctx->pc = 0x295E1Cu;
    // 0x295e1c: 0x0  nop
    ctx->pc = 0x295e1cu;
    // NOP
label_295e20:
    // 0x295e20: 0x54620079  bnel        $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x295E20u;
    {
        const bool branch_taken_0x295e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295e20) {
            ctx->pc = 0x295E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295E20u;
            // 0x295e24: 0x96420150  lhu         $v0, 0x150($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296008u;
            goto label_296008;
        }
    }
    ctx->pc = 0x295E28u;
    // 0x295e28: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x295e28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x295e2c: 0x26b0b710  addiu       $s0, $s5, -0x48F0
    ctx->pc = 0x295e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948624));
    // 0x295e30: 0xc0880e2  jal         func_220388
    ctx->pc = 0x295E30u;
    SET_GPR_U32(ctx, 31, 0x295E38u);
    ctx->pc = 0x295E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E30u;
    // 0x295e34: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220388u, 0x295E30u, 0x295E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E38u;
label_295e38:
    // 0x295e38: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_295e3c:
    // 0x295e3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x295e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e40: 0x26a2b710  addiu       $v0, $s5, -0x48F0
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948624));
    // 0x295e44: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x295e44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x295e48: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x295e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x295e4c: 0xc086428  jal         func_2190A0
    ctx->pc = 0x295E4Cu;
    SET_GPR_U32(ctx, 31, 0x295E54u);
    ctx->pc = 0x295E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E4Cu;
    // 0x295e50: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x295E4Cu, 0x295E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E54u;
label_295e54:
    // 0x295e54: 0x26c4c5b0  addiu       $a0, $s6, -0x3A50
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952368));
    // 0x295e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x295e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e64: 0xc0a62c2  jal         func_298B08
    ctx->pc = 0x295E64u;
    SET_GPR_U32(ctx, 31, 0x295E6Cu);
    ctx->pc = 0x295E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E64u;
    // 0x295e68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B08u, 0x295E64u, 0x295E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E6Cu;
label_295e6c:
    // 0x295e6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x295e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295e70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x295e70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295e78: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x295e78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x295e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e80: 0x8010  mfhi        $s0
    ctx->pc = 0x295e80u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x295e84: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295e88: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x295e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x295e8c: 0x242174ac  addiu       $at, $at, 0x74AC
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29868));
    // 0x295e90: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x295e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x295e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295e98: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x295E98u;
    SET_GPR_U32(ctx, 31, 0x295EA0u);
    ctx->pc = 0x295E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E98u;
    // 0x295e9c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x295E98u, 0x295EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295EA0u;
label_295ea0:
    // 0x295ea0: 0x8f84b5c0  lw          $a0, -0x4A40($gp)
    ctx->pc = 0x295ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948288)));
    // 0x295ea4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295ea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295eac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295eb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295eb4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x295eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x295eb8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295ebc: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x295ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x295ec0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x295EC0u;
    {
        const bool branch_taken_0x295ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x295EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EC0u;
        // 0x295ec4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ec0) {
            ctx->pc = 0x295ED4u;
            goto label_295ed4;
        }
    }
    ctx->pc = 0x295EC8u;
    // 0x295ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295ecc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295ECCu;
    {
        const bool branch_taken_0x295ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295ecc) {
            ctx->pc = 0x295ED8u;
            goto label_295ed8;
        }
    }
    ctx->pc = 0x295ED4u;
label_295ed4:
    // 0x295ed4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x295ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295ed8:
    // 0x295ed8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295edc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x295edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x295ee0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x295ee4: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x295ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x295ee8: 0x26c4c5b0  addiu       $a0, $s6, -0x3A50
    ctx->pc = 0x295ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952368));
    // 0x295eec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x295eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x295ef0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x295ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295ef4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x295ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ef8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x295ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295efc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x295efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x295f00: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x295f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x295f04: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x295f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x295f08: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x295f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295f0c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x295f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295f10: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x295f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295f14: 0xc0a6374  jal         func_298DD0
    ctx->pc = 0x295F14u;
    SET_GPR_U32(ctx, 31, 0x295F1Cu);
    ctx->pc = 0x295F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F14u;
    // 0x295f18: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298DD0u, 0x295F14u, 0x295F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F1Cu;
label_295f1c:
    // 0x295f1c: 0x681003f  bgez        $s4, . + 4 + (0x3F << 2)
    ctx->pc = 0x295F1Cu;
    {
        const bool branch_taken_0x295f1c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x295F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F1Cu;
        // 0x295f20: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f1c) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295F24u;
    // 0x295f24: 0x82420152  lb          $v0, 0x152($s2)
    ctx->pc = 0x295f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x295f28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x295F28u;
    {
        const bool branch_taken_0x295f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F28u;
        // 0x295f2c: 0x26a3b710  addiu       $v1, $s5, -0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f28) {
            ctx->pc = 0x295FA0u;
            goto label_295fa0;
        }
    }
    ctx->pc = 0x295F30u;
    // 0x295f30: 0x26b1b710  addiu       $s1, $s5, -0x48F0
    ctx->pc = 0x295f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948624));
    // 0x295f34: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x295f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x295f38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295f3c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x295f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x295f40: 0x2484b7c8  addiu       $a0, $a0, -0x4838
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948808));
    // 0x295f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x295f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295f4c: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x295F4Cu;
    SET_GPR_U32(ctx, 31, 0x295F54u);
    ctx->pc = 0x295F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F4Cu;
    // 0x295f50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x295F4Cu, 0x295F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F54u;
label_295f54:
    // 0x295f54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x295f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295f58: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x295f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x295f5c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x295f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x295f60: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x295F60u;
    {
        const bool branch_taken_0x295f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295f60) {
            ctx->pc = 0x295F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295F60u;
            // 0x295f64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FC4u;
            goto label_295fc4;
        }
    }
    ctx->pc = 0x295F68u;
    // 0x295f68: 0xc0880e2  jal         func_220388
    ctx->pc = 0x295F68u;
    SET_GPR_U32(ctx, 31, 0x295F70u);
    ctx->pc = 0x295F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F68u;
    // 0x295f6c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220388u, 0x295F68u, 0x295F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F70u;
label_295f70:
    // 0x295f70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x295f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f78: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x295f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295f7c: 0xc04a58e  jal         func_129638
    ctx->pc = 0x295F7Cu;
    SET_GPR_U32(ctx, 31, 0x295F84u);
    ctx->pc = 0x295F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F7Cu;
    // 0x295f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x295F7Cu, 0x295F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F84u;
label_295f84:
    // 0x295f84: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x295f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x295f88: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x295f8c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295f90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x295f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295f94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295F94u;
    {
        const bool branch_taken_0x295f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F94u;
        // 0x295f98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f94) {
            ctx->pc = 0x295FC0u;
            goto label_295fc0;
        }
    }
    ctx->pc = 0x295F9Cu;
    // 0x295f9c: 0x0  nop
    ctx->pc = 0x295f9cu;
    // NOP
label_295fa0:
    // 0x295fa0: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x295fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x295fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x295fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295fa8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x295fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x295fac: 0x2484b7c8  addiu       $a0, $a0, -0x4838
    ctx->pc = 0x295facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948808));
    // 0x295fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295fb4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x295fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x295fb8: 0xc0a5070  jal         func_2941C0
    ctx->pc = 0x295FB8u;
    SET_GPR_U32(ctx, 31, 0x295FC0u);
    ctx->pc = 0x295FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FB8u;
    // 0x295fbc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2941C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2941C0u, 0x295FB8u, 0x295FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FC0u;
label_295fc0:
    // 0x295fc0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_295fc4:
    // 0x295fc4: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x295fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x295fc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x295FC8u;
    {
        const bool branch_taken_0x295fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FC8u;
        // 0x295fcc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fc8) {
            ctx->pc = 0x296018u;
            goto label_296018;
        }
    }
    ctx->pc = 0x295FD0u;
label_295fd0:
    // 0x295fd0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x295FD0u;
    SET_GPR_U32(ctx, 31, 0x295FD8u);
    ctx->pc = 0x295FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FD0u;
    // 0x295fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x295FD0u, 0x295FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FD8u;
label_295fd8:
    // 0x295fd8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x295fdc: 0x284200b4  slti        $v0, $v0, 0xB4
    ctx->pc = 0x295fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x295fe0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x295FE0u;
    {
        const bool branch_taken_0x295fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FE0u;
        // 0x295fe4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fe0) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295FE8u;
    // 0x295fe8: 0x96430150  lhu         $v1, 0x150($s2)
    ctx->pc = 0x295fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x295fec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x295fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295ff0: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x295ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x295ff4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x295ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x295ff8: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x295ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x295ffc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295FFCu;
    {
        const bool branch_taken_0x295ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FFCu;
        // 0x296000: 0xa6430150  sh          $v1, 0x150($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 336), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ffc) {
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x296004u;
    // 0x296004: 0x0  nop
    ctx->pc = 0x296004u;
    // NOP
label_296008:
    // 0x296008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29600c: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x29600cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x296010: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x296010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_296014:
    // 0x296014: 0xa6420150  sh          $v0, 0x150($s2)
    ctx->pc = 0x296014u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 336), (uint16_t)GPR_U32(ctx, 2));
label_296018:
    // 0x296018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x296018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29601c:
    // 0x29601c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29601cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296020: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x296020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296024: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x296024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296028: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x296028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29602c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29602cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296030: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x296030u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296034: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x296034u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296038: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x296038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29603c: 0x3e00008  jr          $ra
    ctx->pc = 0x29603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29603Cu;
        // 0x296040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296044u;
    // 0x296044: 0x0  nop
    ctx->pc = 0x296044u;
    // NOP
    ctx->pc = 0x296048u;
}
