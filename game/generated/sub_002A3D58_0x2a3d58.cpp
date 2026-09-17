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

// Function: sub_002A3D58
// Address: 0x2a3d58 - 0x2a3e08
void sub_002A3D58_0x2a3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D58_0x2a3d58");
#endif

    switch (ctx->pc) {
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3d94u: goto label_2a3d94;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3dd8u: goto label_2a3dd8;
        default: break;
    }

    ctx->pc = 0x2a3d58u;

    // 0x2a3d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3d68: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2a3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2a3d6c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A3D6Cu;
    {
        const bool branch_taken_0x2a3d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D6Cu;
        // 0x2a3d70: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d6c) {
            ctx->pc = 0x2A3DD0u;
            goto label_2a3dd0;
        }
    }
    ctx->pc = 0x2A3D74u;
    // 0x2a3d74: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x2a3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a3d78: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3D78u;
    {
        const bool branch_taken_0x2a3d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D78u;
        // 0x2a3d7c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d78) {
            ctx->pc = 0x2A3DF4u;
            goto label_2a3df4;
        }
    }
    ctx->pc = 0x2A3D80u;
    // 0x2a3d80: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A3D80u;
    SET_GPR_U32(ctx, 31, 0x2A3D88u);
    ctx->pc = 0x2A3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D80u;
    // 0x2a3d84: 0x24a5d3d0  addiu       $a1, $a1, -0x2C30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A3D80u, 0x2A3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D88u;
label_2a3d88:
    // 0x2a3d88: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2a3d8c: 0xc0a5ddc  jal         func_297770
    ctx->pc = 0x2A3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D94u);
    ctx->pc = 0x2A3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D8Cu;
    // 0x2a3d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297770u, 0x2A3D8Cu, 0x2A3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D94u;
label_2a3d94:
    // 0x2a3d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3d9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3da4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3DA4u;
    {
        const bool branch_taken_0x2a3da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DA4u;
        // 0x2a3da8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3da4) {
            ctx->pc = 0x2A3DB8u;
            goto label_2a3db8;
        }
    }
    ctx->pc = 0x2A3DACu;
    // 0x2a3dac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A3DACu;
    {
        const bool branch_taken_0x2a3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DACu;
        // 0x2a3db0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3dac) {
            ctx->pc = 0x2A3DF8u;
            goto label_2a3df8;
        }
    }
    ctx->pc = 0x2A3DB4u;
    // 0x2a3db4: 0x0  nop
    ctx->pc = 0x2a3db4u;
    // NOP
label_2a3db8:
    // 0x2a3db8: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2A3DB8u;
    SET_GPR_U32(ctx, 31, 0x2A3DC0u);
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2A3DB8u, 0x2A3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DC0u;
label_2a3dc0:
    // 0x2a3dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3dc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A3DC4u;
    {
        const bool branch_taken_0x2a3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DC4u;
        // 0x2a3dc8: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3dc4) {
            ctx->pc = 0x2A3DF4u;
            goto label_2a3df4;
        }
    }
    ctx->pc = 0x2A3DCCu;
    // 0x2a3dcc: 0x0  nop
    ctx->pc = 0x2a3dccu;
    // NOP
label_2a3dd0:
    // 0x2a3dd0: 0xc07f12c  jal         func_1FC4B0
    ctx->pc = 0x2A3DD0u;
    SET_GPR_U32(ctx, 31, 0x2A3DD8u);
    ctx->pc = 0x1FC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4B0u, 0x2A3DD0u, 0x2A3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DD8u;
label_2a3dd8:
    // 0x2a3dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3DD8u;
    {
        const bool branch_taken_0x2a3dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DD8u;
        // 0x2a3ddc: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3dd8) {
            ctx->pc = 0x2A3DE8u;
            goto label_2a3de8;
        }
    }
    ctx->pc = 0x2A3DE0u;
    // 0x2a3de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3DE0u;
    {
        const bool branch_taken_0x2a3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DE0u;
        // 0x2a3de4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de0) {
            ctx->pc = 0x2A3DF0u;
            goto label_2a3df0;
        }
    }
    ctx->pc = 0x2A3DE8u;
label_2a3de8:
    // 0x2a3de8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a3dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a3df0:
    // 0x2a3df0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2a3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2a3df4:
    // 0x2a3df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3df8:
    // 0x2a3df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3dfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a3dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E00u;
        // 0x2a3e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3E08u;
}
