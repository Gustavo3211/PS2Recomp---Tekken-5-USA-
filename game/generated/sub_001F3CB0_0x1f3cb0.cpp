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

// Function: sub_001F3CB0
// Address: 0x1f3cb0 - 0x1f3f20
void sub_001F3CB0_0x1f3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3CB0_0x1f3cb0");
#endif

    switch (ctx->pc) {
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3f00u: goto label_1f3f00;
        default: break;
    }

    ctx->pc = 0x1f3cb0u;

    // 0x1f3cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3cb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f3cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3cbc: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f3cc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3cc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3cc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f3cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f3ccc: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f3cd0: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1F3CD0u;
    {
        const bool branch_taken_0x1f3cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CD0u;
        // 0x1f3cd4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3cd0) {
            ctx->pc = 0x1F3E70u;
            goto label_1f3e70;
        }
    }
    ctx->pc = 0x1F3CD8u;
    // 0x1f3cd8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f3cdc: 0x260323b0  addiu       $v1, $s0, 0x23B0
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    // 0x1f3ce0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f3ce4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f3ce8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3CE8u;
    {
        const bool branch_taken_0x1f3ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CE8u;
        // 0x1f3cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ce8) {
            ctx->pc = 0x1F3CFCu;
            goto label_1f3cfc;
        }
    }
    ctx->pc = 0x1F3CF0u;
    // 0x1f3cf0: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f3cf4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3CF4u;
    {
        const bool branch_taken_0x1f3cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3cf4) {
            ctx->pc = 0x1F3D00u;
            goto label_1f3d00;
        }
    }
    ctx->pc = 0x1F3CFCu;
label_1f3cfc:
    // 0x1f3cfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3d00:
    // 0x1f3d00: 0x14a0003f  bnez        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1F3D00u;
    {
        const bool branch_taken_0x1f3d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D00u;
        // 0x1f3d04: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d00) {
            ctx->pc = 0x1F3E00u;
            goto label_1f3e00;
        }
    }
    ctx->pc = 0x1F3D08u;
    // 0x1f3d08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3d0c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f3d10: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3D10u;
    {
        const bool branch_taken_0x1f3d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f3d10) {
            ctx->pc = 0x1F3D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D10u;
            // 0x1f3d14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3D24u;
            goto label_1f3d24;
        }
    }
    ctx->pc = 0x1F3D18u;
    // 0x1f3d18: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F3D18u;
    SET_GPR_U32(ctx, 31, 0x1F3D20u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F3D18u, 0x1F3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D20u;
label_1f3d20:
    // 0x1f3d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d24:
    // 0x1f3d24: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F3D24u;
    SET_GPR_U32(ctx, 31, 0x1F3D2Cu);
    ctx->pc = 0x1F3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D24u;
    // 0x1f3d28: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F3D24u, 0x1F3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D2Cu;
label_1f3d2c:
    // 0x1f3d2c: 0xc0b3d38  jal         func_2CF4E0
    ctx->pc = 0x1F3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D34u);
    ctx->pc = 0x2CF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4E0u, 0x1F3D2Cu, 0x1F3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D34u;
label_1f3d34:
    // 0x1f3d34: 0xc07d1e0  jal         func_1F4780
    ctx->pc = 0x1F3D34u;
    SET_GPR_U32(ctx, 31, 0x1F3D3Cu);
    ctx->pc = 0x1F4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4780u, 0x1F3D34u, 0x1F3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D3Cu;
label_1f3d3c:
    // 0x1f3d3c: 0xc084210  jal         func_210840
    ctx->pc = 0x1F3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D44u);
    ctx->pc = 0x1F3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D3Cu;
    // 0x1f3d40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210840u, 0x1F3D3Cu, 0x1F3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D44u;
label_1f3d44:
    // 0x1f3d44: 0xc08023a  jal         func_2008E8
    ctx->pc = 0x1F3D44u;
    SET_GPR_U32(ctx, 31, 0x1F3D4Cu);
    ctx->pc = 0x2008E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008E8u, 0x1F3D44u, 0x1F3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D4Cu;
label_1f3d4c:
    // 0x1f3d4c: 0xc0809e0  jal         func_202780
    ctx->pc = 0x1F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D54u);
    ctx->pc = 0x202780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202780u, 0x1F3D4Cu, 0x1F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D54u;
label_1f3d54:
    // 0x1f3d54: 0xc07f872  jal         func_1FE1C8
    ctx->pc = 0x1F3D54u;
    SET_GPR_U32(ctx, 31, 0x1F3D5Cu);
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1F3D54u, 0x1F3D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D5Cu;
label_1f3d5c:
    // 0x1f3d5c: 0xc07d46c  jal         func_1F51B0
    ctx->pc = 0x1F3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D64u);
    ctx->pc = 0x1F51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51B0u, 0x1F3D5Cu, 0x1F3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D64u;
label_1f3d64:
    // 0x1f3d64: 0xc0958bc  jal         func_2562F0
    ctx->pc = 0x1F3D64u;
    SET_GPR_U32(ctx, 31, 0x1F3D6Cu);
    ctx->pc = 0x2562F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2562F0u, 0x1F3D64u, 0x1F3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D6Cu;
label_1f3d6c:
    // 0x1f3d6c: 0xc07d946  jal         func_1F6518
    ctx->pc = 0x1F3D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D74u);
    ctx->pc = 0x1F6518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6518u, 0x1F3D6Cu, 0x1F3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D74u;
label_1f3d74:
    // 0x1f3d74: 0xc07da10  jal         func_1F6840
    ctx->pc = 0x1F3D74u;
    SET_GPR_U32(ctx, 31, 0x1F3D7Cu);
    ctx->pc = 0x1F6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6840u, 0x1F3D74u, 0x1F3D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D7Cu;
label_1f3d7c:
    // 0x1f3d7c: 0xc080274  jal         func_2009D0
    ctx->pc = 0x1F3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D84u);
    ctx->pc = 0x2009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2009D0u, 0x1F3D7Cu, 0x1F3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D84u;
label_1f3d84:
    // 0x1f3d84: 0xc07d6e6  jal         func_1F5B98
    ctx->pc = 0x1F3D84u;
    SET_GPR_U32(ctx, 31, 0x1F3D8Cu);
    ctx->pc = 0x1F5B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B98u, 0x1F3D84u, 0x1F3D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D8Cu;
label_1f3d8c:
    // 0x1f3d8c: 0xc07d97e  jal         func_1F65F8
    ctx->pc = 0x1F3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D94u);
    ctx->pc = 0x1F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F65F8u, 0x1F3D8Cu, 0x1F3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D94u;
label_1f3d94:
    // 0x1f3d94: 0xc07d9b6  jal         func_1F66D8
    ctx->pc = 0x1F3D94u;
    SET_GPR_U32(ctx, 31, 0x1F3D9Cu);
    ctx->pc = 0x1F66D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F66D8u, 0x1F3D94u, 0x1F3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D9Cu;
label_1f3d9c:
    // 0x1f3d9c: 0x8e0283c0  lw          $v0, -0x7C40($s0)
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
    // 0x1f3da0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1f3da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1f3da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3DA4u;
    {
        const bool branch_taken_0x1f3da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3da4) {
            ctx->pc = 0x1F3DB4u;
            goto label_1f3db4;
        }
    }
    ctx->pc = 0x1F3DACu;
    // 0x1f3dac: 0xc07c4d6  jal         func_1F1358
    ctx->pc = 0x1F3DACu;
    SET_GPR_U32(ctx, 31, 0x1F3DB4u);
    ctx->pc = 0x1F1358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1358u, 0x1F3DACu, 0x1F3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DB4u;
label_1f3db4:
    // 0x1f3db4: 0xc07d7cc  jal         func_1F5F30
    ctx->pc = 0x1F3DB4u;
    SET_GPR_U32(ctx, 31, 0x1F3DBCu);
    ctx->pc = 0x1F5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5F30u, 0x1F3DB4u, 0x1F3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DBCu;
label_1f3dbc:
    // 0x1f3dbc: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x1f3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x1f3dc0: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x1f3dc4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f3dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f3dc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3DC8u;
    {
        const bool branch_taken_0x1f3dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DC8u;
        // 0x1f3dcc: 0xaf839734  sw          $v1, -0x68CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dc8) {
            ctx->pc = 0x1F3DDCu;
            goto label_1f3ddc;
        }
    }
    ctx->pc = 0x1F3DD0u;
    // 0x1f3dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3dd4: 0xc092d46  jal         func_24B518
    ctx->pc = 0x1F3DD4u;
    SET_GPR_U32(ctx, 31, 0x1F3DDCu);
    ctx->pc = 0x1F3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DD4u;
    // 0x1f3dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B518u, 0x1F3DD4u, 0x1F3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DDCu;
label_1f3ddc:
    // 0x1f3ddc: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x1f3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x1f3de0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f3de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1f3de4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F3DE4u;
    {
        const bool branch_taken_0x1f3de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DE4u;
        // 0x1f3de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3de4) {
            ctx->pc = 0x1F3E44u;
            goto label_1f3e44;
        }
    }
    ctx->pc = 0x1F3DECu;
    // 0x1f3dec: 0xc092d46  jal         func_24B518
    ctx->pc = 0x1F3DECu;
    SET_GPR_U32(ctx, 31, 0x1F3DF4u);
    ctx->pc = 0x1F3DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DECu;
    // 0x1f3df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B518u, 0x1F3DECu, 0x1F3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DF4u;
label_1f3df4:
    // 0x1f3df4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F3DF4u;
    {
        const bool branch_taken_0x1f3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DF4u;
        // 0x1f3df8: 0x260283c0  addiu       $v0, $s0, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3df4) {
            ctx->pc = 0x1F3E48u;
            goto label_1f3e48;
        }
    }
    ctx->pc = 0x1F3DFCu;
    // 0x1f3dfc: 0x0  nop
    ctx->pc = 0x1f3dfcu;
    // NOP
label_1f3e00:
    // 0x1f3e00: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F3E00u;
    SET_GPR_U32(ctx, 31, 0x1F3E08u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F3E00u, 0x1F3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E08u;
label_1f3e08:
    // 0x1f3e08: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F3E08u;
    SET_GPR_U32(ctx, 31, 0x1F3E10u);
    ctx->pc = 0x1F3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E08u;
    // 0x1f3e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F3E08u, 0x1F3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E10u;
label_1f3e10:
    // 0x1f3e10: 0xc0b3d38  jal         func_2CF4E0
    ctx->pc = 0x1F3E10u;
    SET_GPR_U32(ctx, 31, 0x1F3E18u);
    ctx->pc = 0x2CF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4E0u, 0x1F3E10u, 0x1F3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E18u;
label_1f3e18:
    // 0x1f3e18: 0x260223b0  addiu       $v0, $s0, 0x23B0
    ctx->pc = 0x1f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    // 0x1f3e1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f3e20: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1f3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f3e24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3E24u;
    {
        const bool branch_taken_0x1f3e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e24) {
            ctx->pc = 0x1F3E3Cu;
            goto label_1f3e3c;
        }
    }
    ctx->pc = 0x1F3E2Cu;
    // 0x1f3e2c: 0xc07c4d6  jal         func_1F1358
    ctx->pc = 0x1F3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E34u);
    ctx->pc = 0x1F1358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1358u, 0x1F3E2Cu, 0x1F3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E34u;
label_1f3e34:
    // 0x1f3e34: 0xc07d7cc  jal         func_1F5F30
    ctx->pc = 0x1F3E34u;
    SET_GPR_U32(ctx, 31, 0x1F3E3Cu);
    ctx->pc = 0x1F5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5F30u, 0x1F3E34u, 0x1F3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E3Cu;
label_1f3e3c:
    // 0x1f3e3c: 0xc09855a  jal         func_261568
    ctx->pc = 0x1F3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E44u);
    ctx->pc = 0x1F3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E3Cu;
    // 0x1f3e40: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261568u, 0x1F3E3Cu, 0x1F3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E44u;
label_1f3e44:
    // 0x1f3e44: 0x260283c0  addiu       $v0, $s0, -0x7C40
    ctx->pc = 0x1f3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935488));
label_1f3e48:
    // 0x1f3e48: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x1f3e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f3e4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3E4Cu;
    {
        const bool branch_taken_0x1f3e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e4c) {
            ctx->pc = 0x1F3E5Cu;
            goto label_1f3e5c;
        }
    }
    ctx->pc = 0x1F3E54u;
    // 0x1f3e54: 0xc07e544  jal         func_1F9510
    ctx->pc = 0x1F3E54u;
    SET_GPR_U32(ctx, 31, 0x1F3E5Cu);
    ctx->pc = 0x1F9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9510u, 0x1F3E54u, 0x1F3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E5Cu;
label_1f3e5c:
    // 0x1f3e5c: 0xc091bac  jal         func_246EB0
    ctx->pc = 0x1F3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E64u);
    ctx->pc = 0x246EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246EB0u, 0x1F3E5Cu, 0x1F3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E64u;
label_1f3e64:
    // 0x1f3e64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F3E64u;
    {
        const bool branch_taken_0x1f3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e64) {
            ctx->pc = 0x1F3EF0u;
            goto label_1f3ef0;
        }
    }
    ctx->pc = 0x1F3E6Cu;
    // 0x1f3e6c: 0x0  nop
    ctx->pc = 0x1f3e6cu;
    // NOP
label_1f3e70:
    // 0x1f3e70: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f3e74: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x1f3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f3e78: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f3e7c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f3e80: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3E80u;
    {
        const bool branch_taken_0x1f3e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E80u;
        // 0x1f3e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e80) {
            ctx->pc = 0x1F3E94u;
            goto label_1f3e94;
        }
    }
    ctx->pc = 0x1F3E88u;
    // 0x1f3e88: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f3e8c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3E8Cu;
    {
        const bool branch_taken_0x1f3e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3e8c) {
            ctx->pc = 0x1F3E98u;
            goto label_1f3e98;
        }
    }
    ctx->pc = 0x1F3E94u;
label_1f3e94:
    // 0x1f3e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3e98:
    // 0x1f3e98: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3E98u;
    {
        const bool branch_taken_0x1f3e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e98) {
            ctx->pc = 0x1F3EC0u;
            goto label_1f3ec0;
        }
    }
    ctx->pc = 0x1F3EA0u;
    // 0x1f3ea0: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F3EA0u;
    SET_GPR_U32(ctx, 31, 0x1F3EA8u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F3EA0u, 0x1F3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EA8u;
label_1f3ea8:
    // 0x1f3ea8: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F3EA8u;
    SET_GPR_U32(ctx, 31, 0x1F3EB0u);
    ctx->pc = 0x1F3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EA8u;
    // 0x1f3eac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F3EA8u, 0x1F3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EB0u;
label_1f3eb0:
    // 0x1f3eb0: 0xc0b3d38  jal         func_2CF4E0
    ctx->pc = 0x1F3EB0u;
    SET_GPR_U32(ctx, 31, 0x1F3EB8u);
    ctx->pc = 0x2CF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4E0u, 0x1F3EB0u, 0x1F3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EB8u;
label_1f3eb8:
    // 0x1f3eb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3EDCu;
            goto label_1f3edc;
        }
    }
    ctx->pc = 0x1F3EC0u;
label_1f3ec0:
    // 0x1f3ec0: 0xc09d726  jal         func_275C98
    ctx->pc = 0x1F3EC0u;
    SET_GPR_U32(ctx, 31, 0x1F3EC8u);
    ctx->pc = 0x275C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C98u, 0x1F3EC0u, 0x1F3EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EC8u;
label_1f3ec8:
    // 0x1f3ec8: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x1F3EC8u;
    SET_GPR_U32(ctx, 31, 0x1F3ED0u);
    ctx->pc = 0x1F3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EC8u;
    // 0x1f3ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x1F3EC8u, 0x1F3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ED0u;
label_1f3ed0:
    // 0x1f3ed0: 0xc0b3d38  jal         func_2CF4E0
    ctx->pc = 0x1F3ED0u;
    SET_GPR_U32(ctx, 31, 0x1F3ED8u);
    ctx->pc = 0x2CF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF4E0u, 0x1F3ED0u, 0x1F3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ED8u;
label_1f3ed8:
    // 0x1f3ed8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f3edc:
    // 0x1f3edc: 0x904383d0  lbu         $v1, -0x7C30($v0)
    ctx->pc = 0x1f3edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935504)));
    // 0x1f3ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3EE0u;
    {
        const bool branch_taken_0x1f3ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ee0) {
            ctx->pc = 0x1F3EF0u;
            goto label_1f3ef0;
        }
    }
    ctx->pc = 0x1F3EE8u;
    // 0x1f3ee8: 0xc07e4ae  jal         func_1F92B8
    ctx->pc = 0x1F3EE8u;
    SET_GPR_U32(ctx, 31, 0x1F3EF0u);
    ctx->pc = 0x1F92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F92B8u, 0x1F3EE8u, 0x1F3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EF0u;
label_1f3ef0:
    // 0x1f3ef0: 0xc096800  jal         func_25A000
    ctx->pc = 0x1F3EF0u;
    SET_GPR_U32(ctx, 31, 0x1F3EF8u);
    ctx->pc = 0x1F3EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF0u;
    // 0x1f3ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A000u, 0x1F3EF0u, 0x1F3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EF8u;
label_1f3ef8:
    // 0x1f3ef8: 0xc096800  jal         func_25A000
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF8u;
    // 0x1f3efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A000u, 0x1F3EF8u, 0x1F3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0xaf80c894  sw          $zero, -0x376C($gp)
    ctx->pc = 0x1f3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953108), GPR_U32(ctx, 0));
    // 0x1f3f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3f0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3f10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f3f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F14u;
        // 0x1f3f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3F1Cu;
    // 0x1f3f1c: 0x0  nop
    ctx->pc = 0x1f3f1cu;
    // NOP
    ctx->pc = 0x1f3f20u;
}
