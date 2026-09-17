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

// Function: sub_004E2BF0
// Address: 0x4e2bf0 - 0x4e2cc8
void sub_004E2BF0_0x4e2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2BF0_0x4e2bf0");
#endif

    switch (ctx->pc) {
        case 0x4e2bf0u: goto label_4e2bf0;
        case 0x4e2bf4u: goto label_4e2bf4;
        case 0x4e2bf8u: goto label_4e2bf8;
        case 0x4e2bfcu: goto label_4e2bfc;
        case 0x4e2c00u: goto label_4e2c00;
        case 0x4e2c04u: goto label_4e2c04;
        case 0x4e2c08u: goto label_4e2c08;
        case 0x4e2c0cu: goto label_4e2c0c;
        case 0x4e2c10u: goto label_4e2c10;
        case 0x4e2c14u: goto label_4e2c14;
        case 0x4e2c18u: goto label_4e2c18;
        case 0x4e2c1cu: goto label_4e2c1c;
        case 0x4e2c20u: goto label_4e2c20;
        case 0x4e2c24u: goto label_4e2c24;
        case 0x4e2c28u: goto label_4e2c28;
        case 0x4e2c2cu: goto label_4e2c2c;
        case 0x4e2c30u: goto label_4e2c30;
        case 0x4e2c34u: goto label_4e2c34;
        case 0x4e2c38u: goto label_4e2c38;
        case 0x4e2c3cu: goto label_4e2c3c;
        case 0x4e2c40u: goto label_4e2c40;
        case 0x4e2c44u: goto label_4e2c44;
        case 0x4e2c48u: goto label_4e2c48;
        case 0x4e2c4cu: goto label_4e2c4c;
        case 0x4e2c50u: goto label_4e2c50;
        case 0x4e2c54u: goto label_4e2c54;
        case 0x4e2c58u: goto label_4e2c58;
        case 0x4e2c5cu: goto label_4e2c5c;
        case 0x4e2c60u: goto label_4e2c60;
        case 0x4e2c64u: goto label_4e2c64;
        case 0x4e2c68u: goto label_4e2c68;
        case 0x4e2c6cu: goto label_4e2c6c;
        case 0x4e2c70u: goto label_4e2c70;
        case 0x4e2c74u: goto label_4e2c74;
        case 0x4e2c78u: goto label_4e2c78;
        case 0x4e2c7cu: goto label_4e2c7c;
        case 0x4e2c80u: goto label_4e2c80;
        case 0x4e2c84u: goto label_4e2c84;
        case 0x4e2c88u: goto label_4e2c88;
        case 0x4e2c8cu: goto label_4e2c8c;
        case 0x4e2c90u: goto label_4e2c90;
        case 0x4e2c94u: goto label_4e2c94;
        case 0x4e2c98u: goto label_4e2c98;
        case 0x4e2c9cu: goto label_4e2c9c;
        case 0x4e2ca0u: goto label_4e2ca0;
        case 0x4e2ca4u: goto label_4e2ca4;
        case 0x4e2ca8u: goto label_4e2ca8;
        case 0x4e2cacu: goto label_4e2cac;
        case 0x4e2cb0u: goto label_4e2cb0;
        case 0x4e2cb4u: goto label_4e2cb4;
        case 0x4e2cb8u: goto label_4e2cb8;
        case 0x4e2cbcu: goto label_4e2cbc;
        case 0x4e2cc0u: goto label_4e2cc0;
        case 0x4e2cc4u: goto label_4e2cc4;
        default: break;
    }

    ctx->pc = 0x4e2bf0u;

label_4e2bf0:
    // 0x4e2bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e2bf4:
    // 0x4e2bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e2bf8:
    // 0x4e2bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e2bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2bfc:
    // 0x4e2bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e2bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e2c00:
    // 0x4e2c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e2c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e2c04:
    // 0x4e2c04: 0xc1232f2  jal         func_48CBC8
label_4e2c08:
    if (ctx->pc == 0x4E2C08u) {
        ctx->pc = 0x4E2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C04u;
        // 0x4e2c08: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C0Cu;
        goto label_4e2c0c;
    }
    ctx->pc = 0x4E2C04u;
    SET_GPR_U32(ctx, 31, 0x4E2C0Cu);
    ctx->pc = 0x4E2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2C04u;
    // 0x4e2c08: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E2C04u, 0x4E2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2C0Cu;
label_4e2c0c:
    // 0x4e2c0c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4e2c10:
    // 0x4e2c10: 0xac621198  sw          $v0, 0x1198($v1)
    ctx->pc = 0x4e2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4504), GPR_U32(ctx, 2));
label_4e2c14:
    // 0x4e2c14: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e2c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e2c18:
    // 0x4e2c18: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
label_4e2c1c:
    if (ctx->pc == 0x4E2C1Cu) {
        ctx->pc = 0x4E2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C18u;
        // 0x4e2c1c: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C20u;
        goto label_4e2c20;
    }
    ctx->pc = 0x4E2C18u;
    {
        const bool branch_taken_0x4e2c18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e2c18) {
            ctx->pc = 0x4E2C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2C18u;
            // 0x4e2c1c: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C44u;
            goto label_4e2c44;
        }
    }
    ctx->pc = 0x4E2C20u;
label_4e2c20:
    // 0x4e2c20: 0xc12b642  jal         func_4AD908
label_4e2c24:
    if (ctx->pc == 0x4E2C24u) {
        ctx->pc = 0x4E2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C20u;
        // 0x4e2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C28u;
        goto label_4e2c28;
    }
    ctx->pc = 0x4E2C20u;
    SET_GPR_U32(ctx, 31, 0x4E2C28u);
    ctx->pc = 0x4E2C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2C20u;
    // 0x4e2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E2C20u, 0x4E2C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E2C28u;
label_4e2c28:
    // 0x4e2c28: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e2c28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4e2c2c:
    // 0x4e2c2c: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4e2c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4e2c30:
    // 0x4e2c30: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4e2c30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4e2c34:
    // 0x4e2c34: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e2c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e2c38:
    // 0x4e2c38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e2c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4e2c3c:
    // 0x4e2c3c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e2c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e2c40:
    // 0x4e2c40: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e2c44:
    // 0x4e2c44: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4e2c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4e2c48:
    // 0x4e2c48: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x4e2c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_4e2c4c:
    // 0x4e2c4c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e2c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4e2c50:
    // 0x4e2c50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e2c54:
    // 0x4e2c54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e2c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4e2c58:
    // 0x4e2c58: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4e2c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4e2c5c:
    // 0x4e2c5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e2c60:
    // 0x4e2c60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e2c64:
    // 0x4e2c64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e2c68:
    // 0x4e2c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e2c6c:
    // 0x4e2c6c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e2c6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e2c70:
    // 0x4e2c70: 0x2442ff85  addiu       $v0, $v0, -0x7B
    ctx->pc = 0x4e2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967173));
label_4e2c74:
    // 0x4e2c74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e2c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4e2c78:
    // 0x4e2c78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e2c7c:
    // 0x4e2c7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e2c80:
    // 0x4e2c80: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e2c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e2c84:
    // 0x4e2c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e2c88:
    // 0x4e2c88: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4e2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4e2c8c:
    // 0x4e2c8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e2c90:
    // 0x4e2c90: 0x8c637d70  lw          $v1, 0x7D70($v1)
    ctx->pc = 0x4e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32112)));
label_4e2c94:
    // 0x4e2c94: 0xacc3119c  sw          $v1, 0x119C($a2)
    ctx->pc = 0x4e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4508), GPR_U32(ctx, 3));
label_4e2c98:
    // 0x4e2c98: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e2c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4e2c9c:
    // 0x4e2c9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e2ca0:
    // 0x4e2ca0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e2ca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e2ca4:
    // 0x4e2ca4: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4e2ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4e2ca8:
    // 0x4e2ca8: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_4e2cac:
    if (ctx->pc == 0x4E2CACu) {
        ctx->pc = 0x4E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2CA8u;
        // 0x4e2cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2CB0u;
        goto label_4e2cb0;
    }
    ctx->pc = 0x4E2CA8u;
    {
        const bool branch_taken_0x4e2ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2ca8) {
            ctx->pc = 0x4E2CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2CA8u;
            // 0x4e2cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D58u;
            return;
        }
    }
    ctx->pc = 0x4E2CB0u;
label_4e2cb0:
    // 0x4e2cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e2cb4:
    // 0x4e2cb4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4e2cb8:
    // 0x4e2cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e2cbc:
    // 0x4e2cbc: 0x8c63b9c0  lw          $v1, -0x4640($v1)
    ctx->pc = 0x4e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949312)));
label_4e2cc0:
    // 0x4e2cc0: 0x600008  jr          $v1
label_4e2cc4:
    if (ctx->pc == 0x4E2CC4u) {
        ctx->pc = 0x4E2CC8u;
        goto label_fallthrough_0x4e2cc0;
    }
    ctx->pc = 0x4E2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2CC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e2cc0:
    ctx->pc = 0x4E2CC8u;
}
