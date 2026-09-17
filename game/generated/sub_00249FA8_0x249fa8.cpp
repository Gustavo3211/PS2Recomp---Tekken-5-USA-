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

// Function: sub_00249FA8
// Address: 0x249fa8 - 0x24a018
void sub_00249FA8_0x249fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249FA8_0x249fa8");
#endif

    switch (ctx->pc) {
        case 0x249fd8u: goto label_249fd8;
        default: break;
    }

    ctx->pc = 0x249fa8u;

    // 0x249fa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249fac: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x249FACu;
    {
        const bool branch_taken_0x249fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FACu;
        // 0x249fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fac) {
            ctx->pc = 0x24A00Cu;
            goto label_24a00c;
        }
    }
    ctx->pc = 0x249FB4u;
    // 0x249fb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x249fb8: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x249FB8u;
    {
        const bool branch_taken_0x249fb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x249FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB8u;
        // 0x249fbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fb8) {
            ctx->pc = 0x24A00Cu;
            goto label_24a00c;
        }
    }
    ctx->pc = 0x249FC0u;
    // 0x249fc0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x249fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249fc4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x249FC4u;
    {
        const bool branch_taken_0x249fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FC4u;
        // 0x249fc8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fc4) {
            ctx->pc = 0x24A00Cu;
            goto label_24a00c;
        }
    }
    ctx->pc = 0x249FCCu;
    // 0x249fcc: 0x5065000e  beql        $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x249FCCu;
    {
        const bool branch_taken_0x249fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x249fcc) {
            ctx->pc = 0x249FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FCCu;
            // 0x249fd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A008u;
            goto label_24a008;
        }
    }
    ctx->pc = 0x249FD4u;
    // 0x249fd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_249fd8:
    // 0x249fd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x249fdc: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249FDCu;
    {
        const bool branch_taken_0x249fdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x249FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FDCu;
        // 0x249fe0: 0xa2182a  slt         $v1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fdc) {
            ctx->pc = 0x24A008u;
            goto label_24a008;
        }
    }
    ctx->pc = 0x249FE4u;
    // 0x249fe4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x249FE4u;
    {
        const bool branch_taken_0x249fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249fe4) {
            ctx->pc = 0x249FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FE4u;
            // 0x249fe8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A00Cu;
            goto label_24a00c;
        }
    }
    ctx->pc = 0x249FECu;
    // 0x249fec: 0x0  nop
    ctx->pc = 0x249fecu;
    // NOP
    // 0x249ff0: 0x0  nop
    ctx->pc = 0x249ff0u;
    // NOP
    // 0x249ff4: 0x0  nop
    ctx->pc = 0x249ff4u;
    // NOP
    // 0x249ff8: 0x0  nop
    ctx->pc = 0x249ff8u;
    // NOP
    // 0x249ffc: 0x5445fff6  bnel        $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x249FFCu;
    {
        const bool branch_taken_0x249ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x249ffc) {
            ctx->pc = 0x24A000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FFCu;
            // 0x24a000: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249fd8;
        }
    }
    ctx->pc = 0x24A004u;
    // 0x24a004: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24a004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a008:
    // 0x24a008: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x24a008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24a00c:
    // 0x24a00c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A014u;
    // 0x24a014: 0x0  nop
    ctx->pc = 0x24a014u;
    // NOP
    ctx->pc = 0x24a018u;
}
