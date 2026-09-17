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

// Function: sub_00D05C78
// Address: 0xd05c78 - 0xd05d50
void sub_00D05C78_0xd05c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05C78_0xd05c78");
#endif

    switch (ctx->pc) {
        case 0xd05c90u: goto label_d05c90;
        case 0xd05c98u: goto label_d05c98;
        case 0xd05cacu: goto label_d05cac;
        case 0xd05ce4u: goto label_d05ce4;
        case 0xd05cf8u: goto label_d05cf8;
        case 0xd05d00u: goto label_d05d00;
        case 0xd05d24u: goto label_d05d24;
        case 0xd05d30u: goto label_d05d30;
        case 0xd05d40u: goto label_d05d40;
        default: break;
    }

    ctx->pc = 0xd05c78u;

    // 0xd05c78: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05c7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0xd05c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0xd05c80: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0xd05c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0xd05c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0xd05c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0xd05c88: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD05C88u;
    SET_GPR_U32(ctx, 31, 0xD05C90u);
    ctx->pc = 0xD05C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C88u;
    // 0xd05c8c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD05C88u, 0xD05C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C90u;
label_d05c90:
    // 0xd05c90: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD05C90u;
    SET_GPR_U32(ctx, 31, 0xD05C98u);
    ctx->pc = 0xD05C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C90u;
    // 0xd05c94: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD05C90u, 0xD05C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C98u;
label_d05c98:
    // 0xd05c98: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ca4: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD05CA4u;
    SET_GPR_U32(ctx, 31, 0xD05CACu);
    ctx->pc = 0xD05CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05CA4u;
    // 0xd05ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD05CA4u, 0xD05CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05CACu;
label_d05cac:
    // 0xd05cac: 0x3c0800d1  lui         $t0, 0xD1
    ctx->pc = 0xd05cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)209 << 16));
    // 0xd05cb0: 0x2508e380  addiu       $t0, $t0, -0x1C80
    ctx->pc = 0xd05cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960000));
    // 0xd05cb4: 0x24090708  addiu       $t1, $zero, 0x708
    ctx->pc = 0xd05cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0xd05cb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0xd05cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05cbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0xd05cbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05cc0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0xd05cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0xd05cc4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0xd05cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0xd05cc8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05ccc: 0x24053000  addiu       $a1, $zero, 0x3000
    ctx->pc = 0xd05cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0xd05cd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0xd05cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0xd05cd4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0xd05cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0xd05cd8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0xd05cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0xd05cdc: 0xc042da4  jal         func_10B690
    ctx->pc = 0xD05CDCu;
    SET_GPR_U32(ctx, 31, 0xD05CE4u);
    ctx->pc = 0xD05CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05CDCu;
    // 0xd05ce0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B690u, 0xD05CDCu, 0xD05CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05CE4u;
label_d05ce4:
    // 0xd05ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05cf0: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05CF0u;
    SET_GPR_U32(ctx, 31, 0xD05CF8u);
    ctx->pc = 0xD05CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05CF0u;
    // 0xd05cf4: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05CF0u, 0xD05CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05CF8u;
label_d05cf8:
    // 0xd05cf8: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05CF8u;
    SET_GPR_U32(ctx, 31, 0xD05D00u);
    ctx->pc = 0xD05CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05CF8u;
    // 0xd05cfc: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05CF8u, 0xD05D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05D00u;
label_d05d00:
    // 0xd05d00: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05d04: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd05d04u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05d08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0xd05d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0xd05d0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0xd05d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0xd05d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0xd05d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0xd05d14: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05d18: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0xd05d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0xd05d1c: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05D1Cu;
    SET_GPR_U32(ctx, 31, 0xD05D24u);
    ctx->pc = 0xD05D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05D1Cu;
    // 0xd05d20: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05D1Cu, 0xD05D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05D24u;
label_d05d24:
    // 0xd05d24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd05d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05d28: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05D28u;
    SET_GPR_U32(ctx, 31, 0xD05D30u);
    ctx->pc = 0xD05D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05D28u;
    // 0xd05d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05D28u, 0xD05D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05D30u;
label_d05d30:
    // 0xd05d30: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05d38: 0xc0407d4  jal         func_101F50
    ctx->pc = 0xD05D38u;
    SET_GPR_U32(ctx, 31, 0xD05D40u);
    ctx->pc = 0xD05D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05D38u;
    // 0xd05d3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101F50u, 0xD05D38u, 0xD05D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05D40u;
label_d05d40:
    // 0xd05d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0xd05d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05d44: 0x3e00008  jr          $ra
    ctx->pc = 0xD05D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD05D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05D44u;
        // 0xd05d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD05D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD05D4Cu;
    // 0xd05d4c: 0x0  nop
    ctx->pc = 0xd05d4cu;
    // NOP
    ctx->pc = 0xd05d50u;
}
