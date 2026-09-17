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

// Function: sub_0012FDA8
// Address: 0x12fda8 - 0x12fe08
void sub_0012FDA8_0x12fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FDA8_0x12fda8");
#endif

    switch (ctx->pc) {
        case 0x12fdd8u: goto label_12fdd8;
        default: break;
    }

    ctx->pc = 0x12fda8u;

    // 0x12fda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fdac: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12fdb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fdb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fdbc: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x12fdbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x12fdc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdc8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12fdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fdd0: 0xc043e5a  jal         func_10F968
    ctx->pc = 0x12FDD0u;
    SET_GPR_U32(ctx, 31, 0x12FDD8u);
    ctx->pc = 0x12FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD0u;
    // 0x12fdd4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F968u, 0x12FDD0u, 0x12FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12fdd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fddc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12fde0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FDE0u;
    {
        const bool branch_taken_0x12fde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDE0u;
        // 0x12fde4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fde0) {
            ctx->pc = 0x12FDF4u;
            goto label_12fdf4;
        }
    }
    ctx->pc = 0x12FDE8u;
    // 0x12fde8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12fdec: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FDECu;
    {
        const bool branch_taken_0x12fdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fdec) {
            ctx->pc = 0x12FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FDECu;
            // 0x12fdf0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FDF4u;
            goto label_12fdf4;
        }
    }
    ctx->pc = 0x12FDF4u;
label_12fdf4:
    // 0x12fdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fdf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fdfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fe00: 0x3e00008  jr          $ra
    ctx->pc = 0x12FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE00u;
        // 0x12fe04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FE08u;
}
