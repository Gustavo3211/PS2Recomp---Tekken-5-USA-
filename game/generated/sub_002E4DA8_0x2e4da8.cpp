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

// Function: sub_002E4DA8
// Address: 0x2e4da8 - 0x2e4f10
void sub_002E4DA8_0x2e4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4DA8_0x2e4da8");
#endif

    switch (ctx->pc) {
        case 0x2e4db4u: goto label_2e4db4;
        case 0x2e4dbcu: goto label_2e4dbc;
        case 0x2e4dc4u: goto label_2e4dc4;
        case 0x2e4dd0u: goto label_2e4dd0;
        case 0x2e4dd8u: goto label_2e4dd8;
        case 0x2e4df0u: goto label_2e4df0;
        case 0x2e4df8u: goto label_2e4df8;
        case 0x2e4e08u: goto label_2e4e08;
        case 0x2e4e14u: goto label_2e4e14;
        case 0x2e4e1cu: goto label_2e4e1c;
        case 0x2e4e24u: goto label_2e4e24;
        case 0x2e4e2cu: goto label_2e4e2c;
        case 0x2e4e38u: goto label_2e4e38;
        case 0x2e4e44u: goto label_2e4e44;
        case 0x2e4e54u: goto label_2e4e54;
        case 0x2e4e5cu: goto label_2e4e5c;
        case 0x2e4e6cu: goto label_2e4e6c;
        case 0x2e4e88u: goto label_2e4e88;
        case 0x2e4e94u: goto label_2e4e94;
        case 0x2e4e9cu: goto label_2e4e9c;
        case 0x2e4ea4u: goto label_2e4ea4;
        case 0x2e4eb4u: goto label_2e4eb4;
        case 0x2e4ec0u: goto label_2e4ec0;
        case 0x2e4eccu: goto label_2e4ecc;
        case 0x2e4ed8u: goto label_2e4ed8;
        case 0x2e4ee0u: goto label_2e4ee0;
        case 0x2e4ef8u: goto label_2e4ef8;
        default: break;
    }

    ctx->pc = 0x2e4da8u;

    // 0x2e4da8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4dac: 0xc0b934c  jal         func_2E4D30
    ctx->pc = 0x2E4DACu;
    SET_GPR_U32(ctx, 31, 0x2E4DB4u);
    ctx->pc = 0x2E4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4D30u, 0x2E4DACu, 0x2E4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DB4u;
label_2e4db4:
    // 0x2e4db4: 0xc0b9322  jal         func_2E4C88
    ctx->pc = 0x2E4DB4u;
    SET_GPR_U32(ctx, 31, 0x2E4DBCu);
    ctx->pc = 0x2E4C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C88u, 0x2E4DB4u, 0x2E4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DBCu;
label_2e4dbc:
    // 0x2e4dbc: 0xc091a16  jal         func_246858
    ctx->pc = 0x2E4DBCu;
    SET_GPR_U32(ctx, 31, 0x2E4DC4u);
    ctx->pc = 0x246858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246858u, 0x2E4DBCu, 0x2E4DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DC4u;
label_2e4dc4:
    // 0x2e4dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4dc8: 0xc08c2c8  jal         func_230B20
    ctx->pc = 0x2E4DC8u;
    SET_GPR_U32(ctx, 31, 0x2E4DD0u);
    ctx->pc = 0x2E4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DC8u;
    // 0x2e4dcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B20u, 0x2E4DC8u, 0x2E4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DD0u;
label_2e4dd0:
    // 0x2e4dd0: 0xc090f0e  jal         func_243C38
    ctx->pc = 0x2E4DD0u;
    SET_GPR_U32(ctx, 31, 0x2E4DD8u);
    ctx->pc = 0x2E4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DD0u;
    // 0x2e4dd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C38u, 0x2E4DD0u, 0x2E4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DD8u;
label_2e4dd8:
    // 0x2e4dd8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2e4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2e4ddc: 0x245037e0  addiu       $s0, $v0, 0x37E0
    ctx->pc = 0x2e4ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    // 0x2e4de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4de4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4de8: 0xc0b7c88  jal         func_2DF220
    ctx->pc = 0x2E4DE8u;
    SET_GPR_U32(ctx, 31, 0x2E4DF0u);
    ctx->pc = 0x2E4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DE8u;
    // 0x2e4dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF220u, 0x2E4DE8u, 0x2E4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DF0u;
label_2e4df0:
    // 0x2e4df0: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x2E4DF0u;
    SET_GPR_U32(ctx, 31, 0x2E4DF8u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x2E4DF0u, 0x2E4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DF8u;
label_2e4df8:
    // 0x2e4df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e00: 0xc0b7c88  jal         func_2DF220
    ctx->pc = 0x2E4E00u;
    SET_GPR_U32(ctx, 31, 0x2E4E08u);
    ctx->pc = 0x2E4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E00u;
    // 0x2e4e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF220u, 0x2E4E00u, 0x2E4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E08u;
label_2e4e08:
    // 0x2e4e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e0c: 0xc08c2c8  jal         func_230B20
    ctx->pc = 0x2E4E0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E14u);
    ctx->pc = 0x2E4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E0Cu;
    // 0x2e4e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B20u, 0x2E4E0Cu, 0x2E4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E14u;
label_2e4e14:
    // 0x2e4e14: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x2E4E14u;
    SET_GPR_U32(ctx, 31, 0x2E4E1Cu);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x2E4E14u, 0x2E4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E1Cu;
label_2e4e1c:
    // 0x2e4e1c: 0xc0b9300  jal         func_2E4C00
    ctx->pc = 0x2E4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E24u);
    ctx->pc = 0x2E4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C00u, 0x2E4E1Cu, 0x2E4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E24u;
label_2e4e24:
    // 0x2e4e24: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x2E4E24u;
    SET_GPR_U32(ctx, 31, 0x2E4E2Cu);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x2E4E24u, 0x2E4E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E2Cu;
label_2e4e2c:
    // 0x2e4e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e30: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2E4E30u;
    SET_GPR_U32(ctx, 31, 0x2E4E38u);
    ctx->pc = 0x2E4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E30u;
    // 0x2e4e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2E4E30u, 0x2E4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E38u;
label_2e4e38:
    // 0x2e4e38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e4e3c: 0xc0b771c  jal         func_2DDC70
    ctx->pc = 0x2E4E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E44u);
    ctx->pc = 0x2E4E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E3Cu;
    // 0x2e4e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDC70u, 0x2E4E3Cu, 0x2E4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E44u;
label_2e4e44:
    // 0x2e4e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e4e4c: 0xc0b7c88  jal         func_2DF220
    ctx->pc = 0x2E4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E54u);
    ctx->pc = 0x2E4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E4Cu;
    // 0x2e4e50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF220u, 0x2E4E4Cu, 0x2E4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E54u;
label_2e4e54:
    // 0x2e4e54: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x2E4E54u;
    SET_GPR_U32(ctx, 31, 0x2E4E5Cu);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x2E4E54u, 0x2E4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E5Cu;
label_2e4e5c:
    // 0x2e4e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4e64: 0xc0b7c88  jal         func_2DF220
    ctx->pc = 0x2E4E64u;
    SET_GPR_U32(ctx, 31, 0x2E4E6Cu);
    ctx->pc = 0x2E4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E64u;
    // 0x2e4e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF220u, 0x2E4E64u, 0x2E4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E6Cu;
label_2e4e6c:
    // 0x2e4e6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e4e70: 0x8c43f4dc  lw          $v1, -0xB24($v0)
    ctx->pc = 0x2e4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4DCu));
    // 0x2e4e74: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4e78: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4E78u;
    {
        const bool branch_taken_0x2e4e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e78) {
            ctx->pc = 0x2E4E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4E78u;
            // 0x2e4e7c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E8Cu;
            goto label_2e4e8c;
        }
    }
    ctx->pc = 0x2E4E80u;
    // 0x2e4e80: 0xc08f026  jal         func_23C098
    ctx->pc = 0x2E4E80u;
    SET_GPR_U32(ctx, 31, 0x2E4E88u);
    ctx->pc = 0x23C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C098u, 0x2E4E80u, 0x2E4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E88u;
label_2e4e88:
    // 0x2e4e88: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2e4e8c:
    // 0x2e4e8c: 0xc0a5f00  jal         func_297C00
    ctx->pc = 0x2E4E8Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E94u);
    ctx->pc = 0x2E4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E8Cu;
    // 0x2e4e90: 0x2484c480  addiu       $a0, $a0, -0x3B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C00u, 0x2E4E8Cu, 0x2E4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E94u;
label_2e4e94:
    // 0x2e4e94: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x2E4E94u;
    SET_GPR_U32(ctx, 31, 0x2E4E9Cu);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x2E4E94u, 0x2E4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E9Cu;
label_2e4e9c:
    // 0x2e4e9c: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x2E4E9Cu;
    SET_GPR_U32(ctx, 31, 0x2E4EA4u);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x2E4E9Cu, 0x2E4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EA4u;
label_2e4ea4:
    // 0x2e4ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ea8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4eac: 0xc0b7c88  jal         func_2DF220
    ctx->pc = 0x2E4EACu;
    SET_GPR_U32(ctx, 31, 0x2E4EB4u);
    ctx->pc = 0x2E4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EACu;
    // 0x2e4eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF220u, 0x2E4EACu, 0x2E4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EB4u;
label_2e4eb4:
    // 0x2e4eb4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e4eb8: 0xc0b5cc0  jal         func_2D7300
    ctx->pc = 0x2E4EB8u;
    SET_GPR_U32(ctx, 31, 0x2E4EC0u);
    ctx->pc = 0x2E4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EB8u;
    // 0x2e4ebc: 0x2484e7e0  addiu       $a0, $a0, -0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7300u, 0x2E4EB8u, 0x2E4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EC0u;
label_2e4ec0:
    // 0x2e4ec0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e4ec4: 0xc0a5f00  jal         func_297C00
    ctx->pc = 0x2E4EC4u;
    SET_GPR_U32(ctx, 31, 0x2E4ECCu);
    ctx->pc = 0x2E4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EC4u;
    // 0x2e4ec8: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C00u, 0x2E4EC4u, 0x2E4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ECCu;
label_2e4ecc:
    // 0x2e4ecc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e4ed0: 0xc0a5ffe  jal         func_297FF8
    ctx->pc = 0x2E4ED0u;
    SET_GPR_U32(ctx, 31, 0x2E4ED8u);
    ctx->pc = 0x2E4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4ED0u;
    // 0x2e4ed4: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FF8u, 0x2E4ED0u, 0x2E4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4ED8u;
label_2e4ed8:
    // 0x2e4ed8: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x2E4ED8u;
    SET_GPR_U32(ctx, 31, 0x2E4EE0u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x2E4ED8u, 0x2E4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EE0u;
label_2e4ee0:
    // 0x2e4ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e4ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EECu;
        // 0x2e4ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4EF4u;
    // 0x2e4ef4: 0x0  nop
    ctx->pc = 0x2e4ef4u;
    // NOP
label_2e4ef8:
    // 0x2e4ef8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2e4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e4efc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2e4efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2e4f00: 0x2421fde0  addiu       $at, $at, -0x220
    ctx->pc = 0x2e4f00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294966752));
    // 0x2e4f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F04u;
        // 0x2e4f08: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F0Cu;
    // 0x2e4f0c: 0x0  nop
    ctx->pc = 0x2e4f0cu;
    // NOP
    ctx->pc = 0x2e4f10u;
}
