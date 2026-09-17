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

// Function: sub_00100DC8
// Address: 0x100dc8 - 0x100e60
void sub_00100DC8_0x100dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100DC8_0x100dc8");
#endif

    switch (ctx->pc) {
        case 0x100de8u: goto label_100de8;
        case 0x100e28u: goto label_100e28;
        case 0x100e38u: goto label_100e38;
        default: break;
    }

    ctx->pc = 0x100dc8u;

    // 0x100dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100dcc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x100dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ddc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x100ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x100de0: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x100DE0u;
    SET_GPR_U32(ctx, 31, 0x100DE8u);
    ctx->pc = 0x100DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DE0u;
    // 0x100de4: 0x24440e00  addiu       $a0, $v0, 0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x100DE0u, 0x100DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DE8u;
label_100de8:
    // 0x100de8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x100de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x100dec: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100DECu;
    {
        const bool branch_taken_0x100dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x100DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DECu;
        // 0x100df0: 0x2a030007  slti        $v1, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100dec) {
            ctx->pc = 0x100E20u;
            goto label_100e20;
        }
    }
    ctx->pc = 0x100DF4u;
    // 0x100df4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x100DF4u;
    {
        const bool branch_taken_0x100df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DF4u;
        // 0x100df8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100df4) {
            ctx->pc = 0x100E10u;
            goto label_100e10;
        }
    }
    ctx->pc = 0x100DFCu;
    // 0x100dfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x100dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100e00: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x100E00u;
    {
        const bool branch_taken_0x100e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x100E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E00u;
        // 0x100e04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e00) {
            ctx->pc = 0x100E50u;
            goto label_100e50;
        }
    }
    ctx->pc = 0x100E08u;
    // 0x100e08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x100E08u;
    {
        const bool branch_taken_0x100e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e08) {
            ctx->pc = 0x100E30u;
            goto label_100e30;
        }
    }
    ctx->pc = 0x100E10u;
label_100e10:
    // 0x100e10: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x100E10u;
    {
        const bool branch_taken_0x100e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x100E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E10u;
        // 0x100e14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e10) {
            ctx->pc = 0x100E50u;
            goto label_100e50;
        }
    }
    ctx->pc = 0x100E18u;
    // 0x100e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x100E18u;
    {
        const bool branch_taken_0x100e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e18) {
            ctx->pc = 0x100E30u;
            goto label_100e30;
        }
    }
    ctx->pc = 0x100E20u;
label_100e20:
    // 0x100e20: 0xc040188  jal         func_100620
    ctx->pc = 0x100E20u;
    SET_GPR_U32(ctx, 31, 0x100E28u);
    ctx->pc = 0x100620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100620u, 0x100E20u, 0x100E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E28u;
label_100e28:
    // 0x100e28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100E28u;
    {
        const bool branch_taken_0x100e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E28u;
        // 0x100e2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e28) {
            ctx->pc = 0x100E3Cu;
            goto label_100e3c;
        }
    }
    ctx->pc = 0x100E30u;
label_100e30:
    // 0x100e30: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100E30u;
    SET_GPR_U32(ctx, 31, 0x100E38u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100E30u, 0x100E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E38u;
label_100e38:
    // 0x100e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100e3c:
    // 0x100e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100e40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100e44: 0x8040320  j           func_100C80
    ctx->pc = 0x100E44u;
    ctx->pc = 0x100E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E44u;
    // 0x100e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100C80u;
    sub_00100C80_0x100c80(rdram, ctx, runtime); return;
    ctx->pc = 0x100E4Cu;
    // 0x100e4c: 0x0  nop
    ctx->pc = 0x100e4cu;
    // NOP
label_100e50:
    // 0x100e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100e54: 0x3e00008  jr          $ra
    ctx->pc = 0x100E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E54u;
        // 0x100e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100E5Cu;
    // 0x100e5c: 0x0  nop
    ctx->pc = 0x100e5cu;
    // NOP
    ctx->pc = 0x100e60u;
}
