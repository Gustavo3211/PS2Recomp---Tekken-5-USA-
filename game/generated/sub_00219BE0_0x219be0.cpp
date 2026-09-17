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

// Function: sub_00219BE0
// Address: 0x219be0 - 0x219e80
void sub_00219BE0_0x219be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219BE0_0x219be0");
#endif

    switch (ctx->pc) {
        case 0x219c04u: goto label_219c04;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c20u: goto label_219c20;
        case 0x219c48u: goto label_219c48;
        case 0x219c90u: goto label_219c90;
        case 0x219ca0u: goto label_219ca0;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cd0u: goto label_219cd0;
        case 0x219ce0u: goto label_219ce0;
        case 0x219cecu: goto label_219cec;
        case 0x219cf4u: goto label_219cf4;
        case 0x219d00u: goto label_219d00;
        case 0x219d10u: goto label_219d10;
        case 0x219d18u: goto label_219d18;
        case 0x219d28u: goto label_219d28;
        case 0x219d38u: goto label_219d38;
        case 0x219d40u: goto label_219d40;
        case 0x219d64u: goto label_219d64;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d74u: goto label_219d74;
        case 0x219d90u: goto label_219d90;
        case 0x219da8u: goto label_219da8;
        case 0x219db0u: goto label_219db0;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dd0u: goto label_219dd0;
        case 0x219de4u: goto label_219de4;
        case 0x219decu: goto label_219dec;
        case 0x219df8u: goto label_219df8;
        case 0x219e24u: goto label_219e24;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e44u: goto label_219e44;
        case 0x219e60u: goto label_219e60;
        default: break;
    }

    ctx->pc = 0x219be0u;

    // 0x219be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219bf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219bf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219bf8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219bfc: 0xc08661c  jal         func_219870
    ctx->pc = 0x219BFCu;
    SET_GPR_U32(ctx, 31, 0x219C04u);
    ctx->pc = 0x219C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219BFCu;
    // 0x219c00: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x219BFCu, 0x219C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C04u;
label_219c04:
    // 0x219c04: 0xc086620  jal         func_219880
    ctx->pc = 0x219C04u;
    SET_GPR_U32(ctx, 31, 0x219C0Cu);
    ctx->pc = 0x219C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C04u;
    // 0x219c08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x219C04u, 0x219C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C0Cu;
label_219c0c:
    // 0x219c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c10: 0x8e8283c0  lw          $v0, -0x7C40($s4)
    ctx->pc = 0x219c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935488)));
    // 0x219c14: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x219c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x219c18: 0xc084f5a  jal         func_213D68
    ctx->pc = 0x219C18u;
    SET_GPR_U32(ctx, 31, 0x219C20u);
    ctx->pc = 0x219C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C18u;
    // 0x219c1c: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D68u, 0x219C18u, 0x219C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C20u;
label_219c20:
    // 0x219c20: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x219C20u;
    {
        const bool branch_taken_0x219c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219c20) {
            ctx->pc = 0x219C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C20u;
            // 0x219c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E64u;
            goto label_219e64;
        }
    }
    ctx->pc = 0x219C28u;
    // 0x219c28: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x219C28u;
    {
        const bool branch_taken_0x219c28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c28) {
            ctx->pc = 0x219C50u;
            goto label_219c50;
        }
    }
    ctx->pc = 0x219C30u;
    // 0x219c30: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x219c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x219c34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x219c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x219c38: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x219C38u;
    {
        const bool branch_taken_0x219c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c38) {
            ctx->pc = 0x219C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C38u;
            // 0x219c3c: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219C58u;
            goto label_219c58;
        }
    }
    ctx->pc = 0x219C40u;
    // 0x219c40: 0xc0b46da  jal         func_2D1B68
    ctx->pc = 0x219C40u;
    SET_GPR_U32(ctx, 31, 0x219C48u);
    ctx->pc = 0x2D1B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1B68u, 0x219C40u, 0x219C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C48u;
label_219c48:
    // 0x219c48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x219C48u;
    {
        const bool branch_taken_0x219c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C48u;
        // 0x219c4c: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c48) {
            ctx->pc = 0x219C54u;
            goto label_219c54;
        }
    }
    ctx->pc = 0x219C50u;
label_219c50:
    // 0x219c50: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x219c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_219c54:
    // 0x219c54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x219c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_219c58:
    // 0x219c58: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x219c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x219c5c: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x219C5Cu;
    {
        const bool branch_taken_0x219c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C5Cu;
        // 0x219c60: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c5c) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219C64u;
    // 0x219c64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x219c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219c68: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x219c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219c70: 0x8c636850  lw          $v1, 0x6850($v1)
    ctx->pc = 0x219c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26704)));
    // 0x219c74: 0x600008  jr          $v1
    ctx->pc = 0x219C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219C80u: goto label_219c80;
            case 0x219D20u: goto label_219d20;
            case 0x219D80u: goto label_219d80;
            case 0x219DC8u: goto label_219dc8;
            case 0x219DD8u: goto label_219dd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x219C7Cu;
    // 0x219c7c: 0x0  nop
    ctx->pc = 0x219c7cu;
    // NOP
label_219c80:
    // 0x219c80: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x219C80u;
    {
        const bool branch_taken_0x219c80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c80) {
            ctx->pc = 0x219C98u;
            goto label_219c98;
        }
    }
    ctx->pc = 0x219C88u;
    // 0x219c88: 0xc0b46a4  jal         func_2D1A90
    ctx->pc = 0x219C88u;
    SET_GPR_U32(ctx, 31, 0x219C90u);
    ctx->pc = 0x2D1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A90u, 0x219C88u, 0x219C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C90u;
label_219c90:
    // 0x219c90: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x219C90u;
    {
        const bool branch_taken_0x219c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C90u;
        // 0x219c94: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c90) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219C98u;
label_219c98:
    // 0x219c98: 0xc093542  jal         func_24D508
    ctx->pc = 0x219C98u;
    SET_GPR_U32(ctx, 31, 0x219CA0u);
    ctx->pc = 0x24D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D508u, 0x219C98u, 0x219CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x219ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x219ca4: 0x268483c0  addiu       $a0, $s4, -0x7C40
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x219ca8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x219ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219cac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x219cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219cb0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x219CB0u;
    {
        const bool branch_taken_0x219cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x219cb0) {
            ctx->pc = 0x219CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219CB0u;
            // 0x219cb4: 0xa080000e  sb          $zero, 0xE($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219CB8u;
label_219cb8:
    // 0x219cb8: 0xc089662  jal         func_225988
    ctx->pc = 0x219CB8u;
    SET_GPR_U32(ctx, 31, 0x219CC0u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x219CB8u, 0x219CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CC0u;
label_219cc0:
    // 0x219cc0: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x219CC0u;
    {
        const bool branch_taken_0x219cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219cc0) {
            ctx->pc = 0x219CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219CC0u;
            // 0x219cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E64u;
            goto label_219e64;
        }
    }
    ctx->pc = 0x219CC8u;
    // 0x219cc8: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x219CC8u;
    SET_GPR_U32(ctx, 31, 0x219CD0u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x219CC8u, 0x219CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CD0u;
label_219cd0:
    // 0x219cd0: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x219CD0u;
    {
        const bool branch_taken_0x219cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219cd0) {
            ctx->pc = 0x219CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219CD0u;
            // 0x219cd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E64u;
            goto label_219e64;
        }
    }
    ctx->pc = 0x219CD8u;
    // 0x219cd8: 0xc0403da  jal         func_100F68
    ctx->pc = 0x219CD8u;
    SET_GPR_U32(ctx, 31, 0x219CE0u);
    ctx->pc = 0x100F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100F68u, 0x219CD8u, 0x219CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CE0u;
label_219ce0:
    // 0x219ce0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x219ce4: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x219CE4u;
    SET_GPR_U32(ctx, 31, 0x219CECu);
    ctx->pc = 0x219CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CE4u;
    // 0x219ce8: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x219CE4u, 0x219CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CECu;
label_219cec:
    // 0x219cec: 0xc0a7a3c  jal         func_29E8F0
    ctx->pc = 0x219CECu;
    SET_GPR_U32(ctx, 31, 0x219CF4u);
    ctx->pc = 0x219CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CECu;
    // 0x219cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8F0u, 0x219CECu, 0x219CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CF4u;
label_219cf4:
    // 0x219cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cf8: 0xc09342a  jal         func_24D0A8
    ctx->pc = 0x219CF8u;
    SET_GPR_U32(ctx, 31, 0x219D00u);
    ctx->pc = 0x219CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CF8u;
    // 0x219cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D0A8u, 0x219CF8u, 0x219D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D00u;
label_219d00:
    // 0x219d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d08: 0xc092fca  jal         func_24BF28
    ctx->pc = 0x219D08u;
    SET_GPR_U32(ctx, 31, 0x219D10u);
    ctx->pc = 0x219D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D08u;
    // 0x219d0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF28u, 0x219D08u, 0x219D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D10u;
label_219d10:
    // 0x219d10: 0xc093550  jal         func_24D540
    ctx->pc = 0x219D10u;
    SET_GPR_U32(ctx, 31, 0x219D18u);
    ctx->pc = 0x24D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D540u, 0x219D10u, 0x219D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D18u;
label_219d18:
    // 0x219d18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x219D18u;
    {
        const bool branch_taken_0x219d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D18u;
        // 0x219d1c: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d18) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219D20u;
label_219d20:
    // 0x219d20: 0xc0a7a6e  jal         func_29E9B8
    ctx->pc = 0x219D20u;
    SET_GPR_U32(ctx, 31, 0x219D28u);
    ctx->pc = 0x29E9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9B8u, 0x219D20u, 0x219D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D28u;
label_219d28:
    // 0x219d28: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x219D28u;
    {
        const bool branch_taken_0x219d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D28u;
        // 0x219d2c: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d28) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219D30u;
    // 0x219d30: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x219D30u;
    SET_GPR_U32(ctx, 31, 0x219D38u);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x219D30u, 0x219D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D38u;
label_219d38:
    // 0x219d38: 0xc07c3b8  jal         func_1F0EE0
    ctx->pc = 0x219D38u;
    SET_GPR_U32(ctx, 31, 0x219D40u);
    ctx->pc = 0x219D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D38u;
    // 0x219d3c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0EE0u, 0x219D38u, 0x219D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D40u;
label_219d40:
    // 0x219d40: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x219d44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219d48: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x219d4c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x219d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x219d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d54: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x219d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x219d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d5c: 0xc0934e8  jal         func_24D3A0
    ctx->pc = 0x219D5Cu;
    SET_GPR_U32(ctx, 31, 0x219D64u);
    ctx->pc = 0x219D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D5Cu;
    // 0x219d60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D3A0u, 0x219D5Cu, 0x219D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D64u;
label_219d64:
    // 0x219d64: 0xc09352c  jal         func_24D4B0
    ctx->pc = 0x219D64u;
    SET_GPR_U32(ctx, 31, 0x219D6Cu);
    ctx->pc = 0x219D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D64u;
    // 0x219d68: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4B0u, 0x219D64u, 0x219D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D6Cu;
label_219d6c:
    // 0x219d6c: 0xc086612  jal         func_219848
    ctx->pc = 0x219D6Cu;
    SET_GPR_U32(ctx, 31, 0x219D74u);
    ctx->pc = 0x219D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D6Cu;
    // 0x219d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219848u, 0x219D6Cu, 0x219D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D74u;
label_219d74:
    // 0x219d74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x219D74u;
    {
        const bool branch_taken_0x219d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D74u;
        // 0x219d78: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d74) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219D7Cu;
    // 0x219d7c: 0x0  nop
    ctx->pc = 0x219d7cu;
    // NOP
label_219d80:
    // 0x219d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d88: 0xc0934e8  jal         func_24D3A0
    ctx->pc = 0x219D88u;
    SET_GPR_U32(ctx, 31, 0x219D90u);
    ctx->pc = 0x219D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D88u;
    // 0x219d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D3A0u, 0x219D88u, 0x219D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D90u;
label_219d90:
    // 0x219d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219D90u;
    {
        const bool branch_taken_0x219d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D90u;
        // 0x219d94: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d90) {
            ctx->pc = 0x219DA0u;
            goto label_219da0;
        }
    }
    ctx->pc = 0x219D98u;
    // 0x219d98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x219d9c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x219d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_219da0:
    // 0x219da0: 0xc0b27de  jal         func_2C9F78
    ctx->pc = 0x219DA0u;
    SET_GPR_U32(ctx, 31, 0x219DA8u);
    ctx->pc = 0x2C9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9F78u, 0x219DA0u, 0x219DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DA8u;
label_219da8:
    // 0x219da8: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x219DA8u;
    SET_GPR_U32(ctx, 31, 0x219DB0u);
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x219DA8u, 0x219DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DB0u;
label_219db0:
    // 0x219db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219db8: 0xc092fca  jal         func_24BF28
    ctx->pc = 0x219DB8u;
    SET_GPR_U32(ctx, 31, 0x219DC0u);
    ctx->pc = 0x219DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DB8u;
    // 0x219dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF28u, 0x219DB8u, 0x219DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DC0u;
label_219dc0:
    // 0x219dc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x219DC0u;
    {
        const bool branch_taken_0x219dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC0u;
        // 0x219dc4: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dc0) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219DC8u;
label_219dc8:
    // 0x219dc8: 0xc09355a  jal         func_24D568
    ctx->pc = 0x219DC8u;
    SET_GPR_U32(ctx, 31, 0x219DD0u);
    ctx->pc = 0x219DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DC8u;
    // 0x219dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D568u, 0x219DC8u, 0x219DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DD0u;
label_219dd0:
    // 0x219dd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x219DD0u;
    {
        const bool branch_taken_0x219dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DD0u;
        // 0x219dd4: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dd0) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219DD8u;
label_219dd8:
    // 0x219dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ddc: 0xc093480  jal         func_24D200
    ctx->pc = 0x219DDCu;
    SET_GPR_U32(ctx, 31, 0x219DE4u);
    ctx->pc = 0x219DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DDCu;
    // 0x219de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D200u, 0x219DDCu, 0x219DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DE4u;
label_219de4:
    // 0x219de4: 0xc093536  jal         func_24D4D8
    ctx->pc = 0x219DE4u;
    SET_GPR_U32(ctx, 31, 0x219DECu);
    ctx->pc = 0x24D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4D8u, 0x219DE4u, 0x219DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DECu;
label_219dec:
    // 0x219dec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219df0: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x219DF0u;
    SET_GPR_U32(ctx, 31, 0x219DF8u);
    ctx->pc = 0x219DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DF0u;
    // 0x219df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x219DF0u, 0x219DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DF8u;
label_219df8:
    // 0x219df8: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_219dfc:
    // 0x219dfc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x219dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x219e00: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x219e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219e04: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x219E04u;
    {
        const bool branch_taken_0x219e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e04) {
            ctx->pc = 0x219E64u;
            goto label_219e64;
        }
    }
    ctx->pc = 0x219E0Cu;
    // 0x219e0c: 0x269083c0  addiu       $s0, $s4, -0x7C40
    ctx->pc = 0x219e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935488));
    // 0x219e10: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x219e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x219e14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x219E14u;
    {
        const bool branch_taken_0x219e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e14) {
            ctx->pc = 0x219E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E14u;
            // 0x219e18: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E28u;
            goto label_219e28;
        }
    }
    ctx->pc = 0x219E1Cu;
    // 0x219e1c: 0xc092ecc  jal         func_24BB30
    ctx->pc = 0x219E1Cu;
    SET_GPR_U32(ctx, 31, 0x219E24u);
    ctx->pc = 0x24BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB30u, 0x219E1Cu, 0x219E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E24u;
label_219e24:
    // 0x219e24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_219e28:
    // 0x219e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x219e2c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219E2Cu;
    {
        const bool branch_taken_0x219e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E2Cu;
        // 0x219e30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e2c) {
            ctx->pc = 0x219E4Cu;
            goto label_219e4c;
        }
    }
    ctx->pc = 0x219E34u;
    // 0x219e34: 0xc086652  jal         func_219948
    ctx->pc = 0x219E34u;
    SET_GPR_U32(ctx, 31, 0x219E3Cu);
    ctx->pc = 0x219E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E34u;
    // 0x219e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219948u, 0x219E34u, 0x219E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E3Cu;
label_219e3c:
    // 0x219e3c: 0xc086670  jal         func_2199C0
    ctx->pc = 0x219E3Cu;
    SET_GPR_U32(ctx, 31, 0x219E44u);
    ctx->pc = 0x219E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E3Cu;
    // 0x219e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2199C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2199C0u, 0x219E3Cu, 0x219E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E44u;
label_219e44:
    // 0x219e44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219e48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219e4c:
    // 0x219e4c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219E4Cu;
    {
        const bool branch_taken_0x219e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219e4c) {
            ctx->pc = 0x219E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E4Cu;
            // 0x219e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E64u;
            goto label_219e64;
        }
    }
    ctx->pc = 0x219E54u;
    // 0x219e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219e58: 0xc0866ae  jal         func_219AB8
    ctx->pc = 0x219E58u;
    SET_GPR_U32(ctx, 31, 0x219E60u);
    ctx->pc = 0x219E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E58u;
    // 0x219e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB8u, 0x219E58u, 0x219E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_219e64:
    // 0x219e64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219e68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219e70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219e74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219e78: 0x3e00008  jr          $ra
    ctx->pc = 0x219E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E78u;
        // 0x219e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E80u;
}
