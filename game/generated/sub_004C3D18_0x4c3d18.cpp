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

// Function: sub_004C3D18
// Address: 0x4c3d18 - 0x4c3e60
void sub_004C3D18_0x4c3d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3D18_0x4c3d18");
#endif

    switch (ctx->pc) {
        case 0x4c3d48u: goto label_4c3d48;
        case 0x4c3d6cu: goto label_4c3d6c;
        case 0x4c3d80u: goto label_4c3d80;
        case 0x4c3d90u: goto label_4c3d90;
        case 0x4c3dacu: goto label_4c3dac;
        case 0x4c3db4u: goto label_4c3db4;
        case 0x4c3dbcu: goto label_4c3dbc;
        case 0x4c3dc4u: goto label_4c3dc4;
        case 0x4c3dd8u: goto label_4c3dd8;
        case 0x4c3e00u: goto label_4c3e00;
        case 0x4c3e08u: goto label_4c3e08;
        case 0x4c3e10u: goto label_4c3e10;
        case 0x4c3e18u: goto label_4c3e18;
        case 0x4c3e28u: goto label_4c3e28;
        case 0x4c3e3cu: goto label_4c3e3c;
        case 0x4c3e44u: goto label_4c3e44;
        default: break;
    }

    ctx->pc = 0x4c3d18u;

    // 0x4c3d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c3d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c3d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c3d28: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4c3d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4c3d2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c3d30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c3d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4c3d34: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c3d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3d38: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4C3D38u;
    {
        const bool branch_taken_0x4c3d38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c3d38) {
            ctx->pc = 0x4C3D78u;
            goto label_4c3d78;
        }
    }
    ctx->pc = 0x4C3D40u;
    // 0x4c3d40: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C3D40u;
    SET_GPR_U32(ctx, 31, 0x4C3D48u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C3D40u, 0x4C3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D48u;
label_4c3d48:
    // 0x4c3d48: 0x24020419  addiu       $v0, $zero, 0x419
    ctx->pc = 0x4c3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x4c3d4c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4c3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c3d50: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c3d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3d54: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c3d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3d5c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c3d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3d60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c3d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c3d64: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4C3D64u;
    SET_GPR_U32(ctx, 31, 0x4C3D6Cu);
    ctx->pc = 0x4C3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3D64u;
    // 0x4c3d68: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4C3D64u, 0x4C3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D6Cu;
label_4c3d6c:
    // 0x4c3d6c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x4c3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x4c3d70: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4c3d70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3d74: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4c3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
label_4c3d78:
    // 0x4c3d78: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C3D78u;
    SET_GPR_U32(ctx, 31, 0x4C3D80u);
    ctx->pc = 0x4C3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3D78u;
    // 0x4c3d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C3D78u, 0x4C3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D80u;
label_4c3d80:
    // 0x4c3d80: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4C3D80u;
    {
        const bool branch_taken_0x4c3d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D80u;
        // 0x4c3d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d80) {
            ctx->pc = 0x4C3E44u;
            goto label_4c3e44;
        }
    }
    ctx->pc = 0x4C3D88u;
    // 0x4c3d88: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C3D88u;
    SET_GPR_U32(ctx, 31, 0x4C3D90u);
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C3D88u, 0x4C3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D90u;
label_4c3d90:
    // 0x4c3d90: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x4c3d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4c3d94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c3d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3d9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4c3d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4c3da0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c3da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c3da4: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4C3DA4u;
    SET_GPR_U32(ctx, 31, 0x4C3DACu);
    ctx->pc = 0x4C3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DA4u;
    // 0x4c3da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4C3DA4u, 0x4C3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3DACu;
label_4c3dac:
    // 0x4c3dac: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C3DACu;
    SET_GPR_U32(ctx, 31, 0x4C3DB4u);
    ctx->pc = 0x4C3DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DACu;
    // 0x4c3db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C3DACu, 0x4C3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3DB4u;
label_4c3db4:
    // 0x4c3db4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C3DB4u;
    SET_GPR_U32(ctx, 31, 0x4C3DBCu);
    ctx->pc = 0x4C3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DB4u;
    // 0x4c3db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C3DB4u, 0x4C3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3DBCu;
label_4c3dbc:
    // 0x4c3dbc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C3DBCu;
    SET_GPR_U32(ctx, 31, 0x4C3DC4u);
    ctx->pc = 0x4C3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DBCu;
    // 0x4c3dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C3DBCu, 0x4C3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3DC4u;
label_4c3dc4:
    // 0x4c3dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3dc8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4C3DC8u;
    {
        const bool branch_taken_0x4c3dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DC8u;
        // 0x4c3dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3dc8) {
            ctx->pc = 0x4C3E44u;
            goto label_4c3e44;
        }
    }
    ctx->pc = 0x4C3DD0u;
    // 0x4c3dd0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C3DD0u;
    SET_GPR_U32(ctx, 31, 0x4C3DD8u);
    ctx->pc = 0x4C3DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DD0u;
    // 0x4c3dd4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C3DD0u, 0x4C3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3DD8u;
label_4c3dd8:
    // 0x4c3dd8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c3ddc: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4c3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3de4: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4C3DE4u;
    {
        const bool branch_taken_0x4c3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DE4u;
        // 0x4c3de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3de4) {
            ctx->pc = 0x4C3E20u;
            goto label_4c3e20;
        }
    }
    ctx->pc = 0x4C3DECu;
    // 0x4c3dec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c3df0: 0xa460232c  sh          $zero, 0x232C($v1)
    ctx->pc = 0x4c3df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c3df4: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4c3df4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3df8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C3DF8u;
    SET_GPR_U32(ctx, 31, 0x4C3E00u);
    ctx->pc = 0x4C3DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3DF8u;
    // 0x4c3dfc: 0xa460232e  sh          $zero, 0x232E($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9006), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C3DF8u, 0x4C3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E00u;
label_4c3e00:
    // 0x4c3e00: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C3E00u;
    SET_GPR_U32(ctx, 31, 0x4C3E08u);
    ctx->pc = 0x4C3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E00u;
    // 0x4c3e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C3E00u, 0x4C3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E08u;
label_4c3e08:
    // 0x4c3e08: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C3E08u;
    SET_GPR_U32(ctx, 31, 0x4C3E10u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C3E08u, 0x4C3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E10u;
label_4c3e10:
    // 0x4c3e10: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C3E10u;
    SET_GPR_U32(ctx, 31, 0x4C3E18u);
    ctx->pc = 0x4C3E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E10u;
    // 0x4c3e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C3E10u, 0x4C3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E18u;
label_4c3e18:
    // 0x4c3e18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C3E18u;
    {
        const bool branch_taken_0x4c3e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E18u;
        // 0x4c3e1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e18) {
            ctx->pc = 0x4C3E48u;
            goto label_4c3e48;
        }
    }
    ctx->pc = 0x4C3E20u;
label_4c3e20:
    // 0x4c3e20: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C3E20u;
    SET_GPR_U32(ctx, 31, 0x4C3E28u);
    ctx->pc = 0x4C3E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E20u;
    // 0x4c3e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C3E20u, 0x4C3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E28u;
label_4c3e28:
    // 0x4c3e28: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C3E28u;
    {
        const bool branch_taken_0x4c3e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4C3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E28u;
        // 0x4c3e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e28) {
            ctx->pc = 0x4C3E44u;
            goto label_4c3e44;
        }
    }
    ctx->pc = 0x4C3E30u;
    // 0x4c3e30: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c3e34: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C3E34u;
    SET_GPR_U32(ctx, 31, 0x4C3E3Cu);
    ctx->pc = 0x4C3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E34u;
    // 0x4c3e38: 0xa440f9ae  sh          $zero, -0x652($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965678), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C3E34u, 0x4C3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E3Cu;
label_4c3e3c:
    // 0x4c3e3c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C3E3Cu;
    SET_GPR_U32(ctx, 31, 0x4C3E44u);
    ctx->pc = 0x4C3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E3Cu;
    // 0x4c3e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C3E3Cu, 0x4C3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E44u;
label_4c3e44:
    // 0x4c3e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3e48:
    // 0x4c3e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3e4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3e50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c3e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c3e54: 0x3e00008  jr          $ra
    ctx->pc = 0x4C3E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E54u;
        // 0x4c3e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C3E5Cu;
    // 0x4c3e5c: 0x0  nop
    ctx->pc = 0x4c3e5cu;
    // NOP
    ctx->pc = 0x4c3e60u;
}
