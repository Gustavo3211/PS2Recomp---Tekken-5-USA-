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

// Function: sub_00334698
// Address: 0x334698 - 0x334728
void sub_00334698_0x334698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334698_0x334698");
#endif

    switch (ctx->pc) {
        case 0x3346c4u: goto label_3346c4;
        case 0x3346ecu: goto label_3346ec;
        default: break;
    }

    ctx->pc = 0x334698u;

    // 0x334698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33469c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x33469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3346a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3346a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3346a4: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x3346a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x3346a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
    // 0x3346ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3346acu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
    // 0x3346b0: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3346b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3346b4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3346B4u;
    {
        const bool branch_taken_0x3346b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346B4u;
        // 0x3346b8: 0x30630007  andi        $v1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346b4) {
            ctx->pc = 0x3346D0u;
            goto label_3346d0;
        }
    }
    ctx->pc = 0x3346BCu;
    // 0x3346bc: 0xc0cd202  jal         func_334808
    ctx->pc = 0x3346BCu;
    SET_GPR_U32(ctx, 31, 0x3346C4u);
    ctx->pc = 0x334808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334808u, 0x3346BCu, 0x3346C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346C4u;
label_3346c4:
    // 0x3346c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3346C4u;
    {
        const bool branch_taken_0x3346c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346c4) {
            ctx->pc = 0x334714u;
            goto label_334714;
        }
    }
    ctx->pc = 0x3346CCu;
    // 0x3346cc: 0x0  nop
    ctx->pc = 0x3346ccu;
    // NOP
label_3346d0:
    // 0x3346d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3346d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3346D4u;
    {
        const bool branch_taken_0x3346d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3346d4) {
            ctx->pc = 0x3346E4u;
            goto label_3346e4;
        }
    }
    ctx->pc = 0x3346DCu;
    // 0x3346dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3346DCu;
    {
        const bool branch_taken_0x3346dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3346E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346DCu;
        // 0x3346e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346dc) {
            ctx->pc = 0x3346F8u;
            goto label_3346f8;
        }
    }
    ctx->pc = 0x3346E4u;
label_3346e4:
    // 0x3346e4: 0xc0cd20e  jal         func_334838
    ctx->pc = 0x3346E4u;
    SET_GPR_U32(ctx, 31, 0x3346ECu);
    ctx->pc = 0x334838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334838u, 0x3346E4u, 0x3346ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346ECu;
label_3346ec:
    // 0x3346ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3346ECu;
    {
        const bool branch_taken_0x3346ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346ec) {
            ctx->pc = 0x334714u;
            goto label_334714;
        }
    }
    ctx->pc = 0x3346F4u;
    // 0x3346f4: 0x0  nop
    ctx->pc = 0x3346f4u;
    // NOP
label_3346f8:
    // 0x3346f8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x3346f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x3346fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334700: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x334700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x334704: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334704u;
    {
        const bool branch_taken_0x334704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334704) {
            ctx->pc = 0x334714u;
            goto label_334714;
        }
    }
    ctx->pc = 0x33470Cu;
    // 0x33470c: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x33470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x334710: 0x8c42a000  lw          $v0, -0x6000($v0)
    ctx->pc = 0x334710u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u)); // MMIO: 0x1000a000
label_334714:
    // 0x334714: 0xf  sync
    ctx->pc = 0x334714u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x334718: 0x42000038  ei
    ctx->pc = 0x334718u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33471c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334720: 0x3e00008  jr          $ra
    ctx->pc = 0x334720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334720u;
        // 0x334724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334728u;
}
