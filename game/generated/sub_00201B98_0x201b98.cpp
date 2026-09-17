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

// Function: sub_00201B98
// Address: 0x201b98 - 0x201cd0
void sub_00201B98_0x201b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B98_0x201b98");
#endif

    ctx->pc = 0x201b98u;

    // 0x201b98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x201b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b9c: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x201b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x201ba0: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x201ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x201ba4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x201ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x201ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x201ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x201bac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x201BACu;
    {
        const bool branch_taken_0x201bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BACu;
        // 0x201bb0: 0xa4a00154  sh          $zero, 0x154($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 340), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bac) {
            ctx->pc = 0x201C00u;
            goto label_201c00;
        }
    }
    ctx->pc = 0x201BB4u;
    // 0x201bb4: 0x84a30088  lh          $v1, 0x88($a1)
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x201bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201bbc: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x201BBCu;
    {
        const bool branch_taken_0x201bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BBCu;
        // 0x201bc0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bbc) {
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201BC4u;
    // 0x201bc4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x201bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x201bc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201BC8u;
    {
        const bool branch_taken_0x201bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BC8u;
        // 0x201bcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bc8) {
            ctx->pc = 0x201BE0u;
            goto label_201be0;
        }
    }
    ctx->pc = 0x201BD0u;
    // 0x201bd0: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x201BD0u;
    {
        const bool branch_taken_0x201bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BD0u;
        // 0x201bd4: 0x84a20154  lh          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bd0) {
            ctx->pc = 0x201CACu;
            goto label_201cac;
        }
    }
    ctx->pc = 0x201BD8u;
    // 0x201bd8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x201BD8u;
    {
        const bool branch_taken_0x201bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201bd8) {
            ctx->pc = 0x201CACu;
            goto label_201cac;
        }
    }
    ctx->pc = 0x201BE0u;
label_201be0:
    // 0x201be0: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x201BE0u;
    {
        const bool branch_taken_0x201be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201be0) {
            ctx->pc = 0x201BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BE0u;
            // 0x201be4: 0xa4a00154  sh          $zero, 0x154($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 340), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA8u;
            goto label_201ca8;
        }
    }
    ctx->pc = 0x201BE8u;
    // 0x201be8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201bec: 0x5062002d  beql        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x201BECu;
    {
        const bool branch_taken_0x201bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201bec) {
            ctx->pc = 0x201BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BECu;
            // 0x201bf0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201BF4u;
    // 0x201bf4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x201BF4u;
    {
        const bool branch_taken_0x201bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF4u;
        // 0x201bf8: 0x84a20154  lh          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bf4) {
            ctx->pc = 0x201CACu;
            goto label_201cac;
        }
    }
    ctx->pc = 0x201BFCu;
    // 0x201bfc: 0x0  nop
    ctx->pc = 0x201bfcu;
    // NOP
label_201c00:
    // 0x201c00: 0x84a30088  lh          $v1, 0x88($a1)
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x201c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201c08: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x201C08u;
    {
        const bool branch_taken_0x201c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C08u;
        // 0x201c0c: 0x94a60088  lhu         $a2, 0x88($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c08) {
            ctx->pc = 0x201CA0u;
            goto label_201ca0;
        }
    }
    ctx->pc = 0x201C10u;
    // 0x201c10: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x201c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x201c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201C14u;
    {
        const bool branch_taken_0x201c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C14u;
        // 0x201c18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c14) {
            ctx->pc = 0x201C30u;
            goto label_201c30;
        }
    }
    ctx->pc = 0x201C1Cu;
    // 0x201c1c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x201C1Cu;
    {
        const bool branch_taken_0x201c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c1c) {
            ctx->pc = 0x201C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C1Cu;
            // 0x201c20: 0xc4a10754  lwc1        $f1, 0x754($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x201C4Cu;
            goto label_201c4c;
        }
    }
    ctx->pc = 0x201C24u;
    // 0x201c24: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x201C24u;
    {
        const bool branch_taken_0x201c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C24u;
        // 0x201c28: 0x84a20154  lh          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c24) {
            ctx->pc = 0x201CACu;
            goto label_201cac;
        }
    }
    ctx->pc = 0x201C2Cu;
    // 0x201c2c: 0x0  nop
    ctx->pc = 0x201c2cu;
    // NOP
label_201c30:
    // 0x201c30: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201C30u;
    {
        const bool branch_taken_0x201c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x201C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C30u;
        // 0x201c34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c30) {
            ctx->pc = 0x201C48u;
            goto label_201c48;
        }
    }
    ctx->pc = 0x201C38u;
    // 0x201c38: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x201C38u;
    {
        const bool branch_taken_0x201c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201c38) {
            ctx->pc = 0x201C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C38u;
            // 0x201c3c: 0xa4a40154  sh          $a0, 0x154($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 340), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA8u;
            goto label_201ca8;
        }
    }
    ctx->pc = 0x201C40u;
    // 0x201c40: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x201C40u;
    {
        const bool branch_taken_0x201c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C40u;
        // 0x201c44: 0x84a20154  lh          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c40) {
            ctx->pc = 0x201CACu;
            goto label_201cac;
        }
    }
    ctx->pc = 0x201C48u;
label_201c48:
    // 0x201c48: 0xc4a10754  lwc1        $f1, 0x754($a1)
    ctx->pc = 0x201c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201c4c:
    // 0x201c4c: 0x3c014438  lui         $at, 0x4438
    ctx->pc = 0x201c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17464 << 16));
    // 0x201c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x201c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201c58: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x201C58u;
    {
        const bool branch_taken_0x201c58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x201C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C58u;
        // 0x201c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c58) {
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C60u;
    // 0x201c60: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x201c64: 0x94a40158  lhu         $a0, 0x158($a1)
    ctx->pc = 0x201c64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x201c68: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x201c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x201c6c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C6Cu;
    {
        const bool branch_taken_0x201c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x201c6c) {
            ctx->pc = 0x201C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C6Cu;
            // 0x201c70: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201C80u;
            goto label_201c80;
        }
    }
    ctx->pc = 0x201C74u;
    // 0x201c74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201C74u;
    {
        const bool branch_taken_0x201c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C74u;
        // 0x201c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c74) {
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C7Cu;
    // 0x201c7c: 0x0  nop
    ctx->pc = 0x201c7cu;
    // NOP
label_201c80:
    // 0x201c80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x201c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x201c84: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x201C84u;
    {
        const bool branch_taken_0x201c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c84) {
            ctx->pc = 0x201C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C84u;
            // 0x201c88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C8Cu;
    // 0x201c8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201c90: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201C90u;
    {
        const bool branch_taken_0x201c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x201c90) {
            ctx->pc = 0x201C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C90u;
            // 0x201c94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C98u;
    // 0x201c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201C98u;
    {
        const bool branch_taken_0x201c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C98u;
        // 0x201c9c: 0xa4a30154  sh          $v1, 0x154($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 340), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c98) {
            ctx->pc = 0x201CA8u;
            goto label_201ca8;
        }
    }
    ctx->pc = 0x201CA0u;
label_201ca0:
    // 0x201ca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201ca4:
    // 0x201ca4: 0xa4a20154  sh          $v0, 0x154($a1)
    ctx->pc = 0x201ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 340), (uint16_t)GPR_U32(ctx, 2));
label_201ca8:
    // 0x201ca8: 0x84a20154  lh          $v0, 0x154($a1)
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
label_201cac:
    // 0x201cac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x201cb0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201cb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x201cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x201cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201cc0: 0x944239c8  lhu         $v0, 0x39C8($v0)
    ctx->pc = 0x201cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14792)));
    // 0x201cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x201CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CC4u;
        // 0x201cc8: 0xa4a20304  sh          $v0, 0x304($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 772), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201CCCu;
    // 0x201ccc: 0x0  nop
    ctx->pc = 0x201cccu;
    // NOP
    ctx->pc = 0x201cd0u;
}
