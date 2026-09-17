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

// Function: sub_00271BC0
// Address: 0x271bc0 - 0x271e88
void sub_00271BC0_0x271bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271BC0_0x271bc0");
#endif

    switch (ctx->pc) {
        case 0x271c04u: goto label_271c04;
        case 0x271d00u: goto label_271d00;
        case 0x271d84u: goto label_271d84;
        case 0x271da0u: goto label_271da0;
        case 0x271dc0u: goto label_271dc0;
        case 0x271e14u: goto label_271e14;
        case 0x271e28u: goto label_271e28;
        case 0x271e50u: goto label_271e50;
        default: break;
    }

    ctx->pc = 0x271bc0u;

    // 0x271bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271bc4: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x271bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271bcc: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x271bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x271bd0: 0x146000a9  bnez        $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x271BD0u;
    {
        const bool branch_taken_0x271bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BD0u;
        // 0x271bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bd0) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271BD8u;
    // 0x271bd8: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x271bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x271bdc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x271bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x271be0: 0x94640026  lhu         $a0, 0x26($v1)
    ctx->pc = 0x271be0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x271be4: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x271BE4u;
    {
        const bool branch_taken_0x271be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BE4u;
        // 0x271be8: 0x8f87aa7c  lw          $a3, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271be4) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271BECu;
    // 0x271bec: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271bf0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x271bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x271bf4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x271BF4u;
    {
        const bool branch_taken_0x271bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271bf4) {
            ctx->pc = 0x271BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271BF4u;
            // 0x271bf8: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271BFCu;
    // 0x271bfc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271BFCu;
    SET_GPR_U32(ctx, 31, 0x271C04u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271BFCu, 0x271C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C04u;
label_271c04:
    // 0x271c04: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x271c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271c08: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271c0c: 0x84c30382  lh          $v1, 0x382($a2)
    ctx->pc = 0x271c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 898)));
    // 0x271c10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271c14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x271C14u;
    {
        const bool branch_taken_0x271c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C14u;
        // 0x271c18: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c14) {
            ctx->pc = 0x271C90u;
            goto label_271c90;
        }
    }
    ctx->pc = 0x271C1Cu;
    // 0x271c1c: 0x8f87aa7c  lw          $a3, -0x5584($gp)
    ctx->pc = 0x271c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271c20: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x271c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x271c24: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x271c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x271c28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271C28u;
    {
        const bool branch_taken_0x271c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C28u;
        // 0x271c2c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c28) {
            ctx->pc = 0x271C50u;
            goto label_271c50;
        }
    }
    ctx->pc = 0x271C30u;
    // 0x271c30: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x271c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x271c34: 0x2842fff6  slti        $v0, $v0, -0xA
    ctx->pc = 0x271c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x271c38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271C38u;
    {
        const bool branch_taken_0x271c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C38u;
        // 0x271c3c: 0x8f83aa80  lw          $v1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c38) {
            ctx->pc = 0x271C54u;
            goto label_271c54;
        }
    }
    ctx->pc = 0x271C40u;
    // 0x271c40: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x271c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271c48: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x271C48u;
    {
        const bool branch_taken_0x271c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C48u;
        // 0x271c4c: 0xa4c30006  sh          $v1, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c48) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271C50u;
label_271c50:
    // 0x271c50: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x271c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_271c54:
    // 0x271c54: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x271c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x271c58: 0x84650096  lh          $a1, 0x96($v1)
    ctx->pc = 0x271c58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x271c5c: 0x94820028  lhu         $v0, 0x28($a0)
    ctx->pc = 0x271c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x271c60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x271c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x271c64: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x271c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x271c68: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x271C68u;
    {
        const bool branch_taken_0x271c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c68) {
            ctx->pc = 0x271C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C68u;
            // 0x271c6c: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271C70u;
    // 0x271c70: 0x85020080  lh          $v0, 0x80($t0)
    ctx->pc = 0x271c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x271c74: 0x28424001  slti        $v0, $v0, 0x4001
    ctx->pc = 0x271c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x271c78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x271C78u;
    {
        const bool branch_taken_0x271c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c78) {
            ctx->pc = 0x271C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C78u;
            // 0x271c7c: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271C80u;
    // 0x271c80: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x271c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x271c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271c88: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x271C88u;
    {
        const bool branch_taken_0x271c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C88u;
        // 0x271c8c: 0xa5230006  sh          $v1, 0x6($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c88) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271C90u;
label_271c90:
    // 0x271c90: 0x8f87aa7c  lw          $a3, -0x5584($gp)
    ctx->pc = 0x271c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_271c94:
    // 0x271c94: 0x84e20080  lh          $v0, 0x80($a3)
    ctx->pc = 0x271c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
label_271c98:
    // 0x271c98: 0x28426001  slti        $v0, $v0, 0x6001
    ctx->pc = 0x271c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24577) ? 1 : 0);
    // 0x271c9c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x271C9Cu;
    {
        const bool branch_taken_0x271c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c9c) {
            ctx->pc = 0x271CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271C9Cu;
            // 0x271ca0: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271CA4u;
    // 0x271ca4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271ca8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x271ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x271cac: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x271CACu;
    {
        const bool branch_taken_0x271cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271cac) {
            ctx->pc = 0x271CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271CACu;
            // 0x271cb0: 0x84e20080  lh          $v0, 0x80($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271D70u;
            goto label_271d70;
        }
    }
    ctx->pc = 0x271CB4u;
    // 0x271cb4: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x271cb8: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x271cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x271cbc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CBCu;
    {
        const bool branch_taken_0x271cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271cbc) {
            ctx->pc = 0x271CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271CBCu;
            // 0x271cc0: 0x8cc20294  lw          $v0, 0x294($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271CD0u;
            goto label_271cd0;
        }
    }
    ctx->pc = 0x271CC4u;
    // 0x271cc4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x271CC4u;
    {
        const bool branch_taken_0x271cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CC4u;
        // 0x271cc8: 0xa4c00006  sh          $zero, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cc4) {
            ctx->pc = 0x271E74u;
            goto label_271e74;
        }
    }
    ctx->pc = 0x271CCCu;
    // 0x271ccc: 0x0  nop
    ctx->pc = 0x271cccu;
    // NOP
label_271cd0:
    // 0x271cd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271CD0u;
    {
        const bool branch_taken_0x271cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271cd0) {
            ctx->pc = 0x271CF8u;
            goto label_271cf8;
        }
    }
    ctx->pc = 0x271CD8u;
    // 0x271cd8: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x271cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271cdc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271ce0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271ce4: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x271CE4u;
    {
        const bool branch_taken_0x271ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x271CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CE4u;
        // 0x271ce8: 0x24044040  addiu       $a0, $zero, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ce4) {
            ctx->pc = 0x271CF0u;
            goto label_271cf0;
        }
    }
    ctx->pc = 0x271CECu;
    // 0x271cec: 0x24044020  addiu       $a0, $zero, 0x4020
    ctx->pc = 0x271cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
label_271cf0:
    // 0x271cf0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x271CF0u;
    {
        const bool branch_taken_0x271cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CF0u;
        // 0x271cf4: 0xa4c40006  sh          $a0, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cf0) {
            ctx->pc = 0x271E74u;
            goto label_271e74;
        }
    }
    ctx->pc = 0x271CF8u;
label_271cf8:
    // 0x271cf8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271CF8u;
    SET_GPR_U32(ctx, 31, 0x271D00u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271CF8u, 0x271D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D00u;
label_271d00:
    // 0x271d00: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x271d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271d04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271d08: 0x84a30380  lh          $v1, 0x380($a1)
    ctx->pc = 0x271d08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x271d0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271d10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x271D10u;
    {
        const bool branch_taken_0x271d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D10u;
        // 0x271d14: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d10) {
            ctx->pc = 0x271D60u;
            goto label_271d60;
        }
    }
    ctx->pc = 0x271D18u;
    // 0x271d18: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271d1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x271d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x271d20: 0x8482003e  lh          $v0, 0x3E($a0)
    ctx->pc = 0x271d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x271d24: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x271D24u;
    {
        const bool branch_taken_0x271d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x271D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D24u;
        // 0x271d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d24) {
            ctx->pc = 0x271D48u;
            goto label_271d48;
        }
    }
    ctx->pc = 0x271D2Cu;
    // 0x271d2c: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x271d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x271d30: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x271d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x271d34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x271D34u;
    {
        const bool branch_taken_0x271d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D34u;
        // 0x271d38: 0x24038000  addiu       $v1, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d34) {
            ctx->pc = 0x271D40u;
            goto label_271d40;
        }
    }
    ctx->pc = 0x271D3Cu;
    // 0x271d3c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x271d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_271d40:
    // 0x271d40: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x271d40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x271d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271d48:
    // 0x271d48: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x271D48u;
    {
        const bool branch_taken_0x271d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d48) {
            ctx->pc = 0x271D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271D48u;
            // 0x271d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271D50u;
    // 0x271d50: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x271d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271d54: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x271d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x271d58: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x271D58u;
    {
        const bool branch_taken_0x271d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D58u;
        // 0x271d5c: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d58) {
            ctx->pc = 0x271E74u;
            goto label_271e74;
        }
    }
    ctx->pc = 0x271D60u;
label_271d60:
    // 0x271d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d64: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x271D64u;
    {
        const bool branch_taken_0x271d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D64u;
        // 0x271d68: 0xaca3008c  sw          $v1, 0x8C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d64) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271D6Cu;
    // 0x271d6c: 0x0  nop
    ctx->pc = 0x271d6cu;
    // NOP
label_271d70:
    // 0x271d70: 0x28421001  slti        $v0, $v0, 0x1001
    ctx->pc = 0x271d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x271d74: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x271D74u;
    {
        const bool branch_taken_0x271d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D74u;
        // 0x271d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d74) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271D7Cu;
    // 0x271d7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271D7Cu;
    SET_GPR_U32(ctx, 31, 0x271D84u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271D7Cu, 0x271D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D84u;
label_271d84:
    // 0x271d84: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x271d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271d88: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x271d8c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x271d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271d90: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x271D90u;
    {
        const bool branch_taken_0x271d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D90u;
        // 0x271d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d90) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271D98u;
    // 0x271d98: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271D98u;
    SET_GPR_U32(ctx, 31, 0x271DA0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271D98u, 0x271DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DA0u;
label_271da0:
    // 0x271da0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x271da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271da4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271da8: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x271da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x271dac: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x271dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271db0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x271DB0u;
    {
        const bool branch_taken_0x271db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DB0u;
        // 0x271db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271db0) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271DB8u;
    // 0x271db8: 0xc09935e  jal         func_264D78
    ctx->pc = 0x271DB8u;
    SET_GPR_U32(ctx, 31, 0x271DC0u);
    ctx->pc = 0x271DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DB8u;
    // 0x271dbc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x271DB8u, 0x271DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DC0u;
label_271dc0:
    // 0x271dc0: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271dc4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x271dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x271dc8: 0x8482003e  lh          $v0, 0x3E($a0)
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x271dcc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271DCCu;
    {
        const bool branch_taken_0x271dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x271DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DCCu;
        // 0x271dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dcc) {
            ctx->pc = 0x271DF4u;
            goto label_271df4;
        }
    }
    ctx->pc = 0x271DD4u;
    // 0x271dd4: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x271dd8: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x271dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x271ddc: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x271ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x271de0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x271DE0u;
    {
        const bool branch_taken_0x271de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DE0u;
        // 0x271de4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271de0) {
            ctx->pc = 0x271DECu;
            goto label_271dec;
        }
    }
    ctx->pc = 0x271DE8u;
    // 0x271de8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x271de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_271dec:
    // 0x271dec: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x271decu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x271df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271df4:
    // 0x271df4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x271DF4u;
    {
        const bool branch_taken_0x271df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DF4u;
        // 0x271df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271df4) {
            ctx->pc = 0x271E78u;
            goto label_271e78;
        }
    }
    ctx->pc = 0x271DFCu;
    // 0x271dfc: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x271dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271e00: 0x8cc2029c  lw          $v0, 0x29C($a2)
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 668)));
    // 0x271e04: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x271E04u;
    {
        const bool branch_taken_0x271e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271e04) {
            ctx->pc = 0x271E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271E04u;
            // 0x271e08: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271E3Cu;
            goto label_271e3c;
        }
    }
    ctx->pc = 0x271E0Cu;
    // 0x271e0c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271E0Cu;
    SET_GPR_U32(ctx, 31, 0x271E14u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271E0Cu, 0x271E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E14u;
label_271e14:
    // 0x271e14: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x271e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x271e18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271E18u;
    {
        const bool branch_taken_0x271e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E18u;
        // 0x271e1c: 0x8f86aa78  lw          $a2, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e18) {
            ctx->pc = 0x271E38u;
            goto label_271e38;
        }
    }
    ctx->pc = 0x271E20u;
    // 0x271e20: 0xc09bb60  jal         func_26ED80
    ctx->pc = 0x271E20u;
    SET_GPR_U32(ctx, 31, 0x271E28u);
    ctx->pc = 0x26ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED80u, 0x271E20u, 0x271E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E28u;
label_271e28:
    // 0x271e28: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x271e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271e2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x271E2Cu;
    {
        const bool branch_taken_0x271e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E2Cu;
        // 0x271e30: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e2c) {
            ctx->pc = 0x271E74u;
            goto label_271e74;
        }
    }
    ctx->pc = 0x271E34u;
    // 0x271e34: 0x0  nop
    ctx->pc = 0x271e34u;
    // NOP
label_271e38:
    // 0x271e38: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_271e3c:
    // 0x271e3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x271e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271e40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x271E40u;
    {
        const bool branch_taken_0x271e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E40u;
        // 0x271e44: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e40) {
            ctx->pc = 0x271E70u;
            goto label_271e70;
        }
    }
    ctx->pc = 0x271E48u;
    // 0x271e48: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271E48u;
    SET_GPR_U32(ctx, 31, 0x271E50u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271E48u, 0x271E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E50u;
label_271e50:
    // 0x271e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271E54u;
    {
        const bool branch_taken_0x271e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E54u;
        // 0x271e58: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e54) {
            ctx->pc = 0x271E68u;
            goto label_271e68;
        }
    }
    ctx->pc = 0x271E5Cu;
    // 0x271e5c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x271e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271E60u;
    {
        const bool branch_taken_0x271e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E60u;
        // 0x271e64: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e60) {
            ctx->pc = 0x271E74u;
            goto label_271e74;
        }
    }
    ctx->pc = 0x271E68u;
label_271e68:
    // 0x271e68: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x271e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271e6c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_271e70:
    // 0x271e70: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x271e70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_271e74:
    // 0x271e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271e78:
    // 0x271e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x271E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E7Cu;
        // 0x271e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271E84u;
    // 0x271e84: 0x0  nop
    ctx->pc = 0x271e84u;
    // NOP
    ctx->pc = 0x271e88u;
}
