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

// Function: sub_004AA6F0
// Address: 0x4aa6f0 - 0x4aa750
void sub_004AA6F0_0x4aa6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA6F0_0x4aa6f0");
#endif

    switch (ctx->pc) {
        case 0x4aa744u: goto label_4aa744;
        default: break;
    }

    ctx->pc = 0x4aa6f0u;

    // 0x4aa6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aa6f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4aa6f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aa6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aa6fc: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4aa6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa700: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4aa700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa704: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4aa704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa708: 0x8549000e  lh          $t1, 0xE($t2)
    ctx->pc = 0x4aa708u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x4aa70c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4aa70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa710: 0x8542000c  lh          $v0, 0xC($t2)
    ctx->pc = 0x4aa710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4aa714: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aa714u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aa718: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa71c: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x4aa71cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x4aa720: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4aa720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4aa724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4aa724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa728: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa72c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aa72cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aa730: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4aa730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4aa734: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4aa734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aa738: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aa738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aa73c: 0xc12a71c  jal         func_4A9C70
    ctx->pc = 0x4AA73Cu;
    SET_GPR_U32(ctx, 31, 0x4AA744u);
    ctx->pc = 0x4AA740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA73Cu;
    // 0x4aa740: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C70u, 0x4AA73Cu, 0x4AA744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA744u;
label_4aa744:
    // 0x4aa744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aa744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa748: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA748u;
        // 0x4aa74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA750u;
}
