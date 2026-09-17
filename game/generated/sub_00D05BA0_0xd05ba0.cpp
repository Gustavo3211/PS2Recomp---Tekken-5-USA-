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

// Function: sub_00D05BA0
// Address: 0xd05ba0 - 0xd05c78
void sub_00D05BA0_0xd05ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05BA0_0xd05ba0");
#endif

    switch (ctx->pc) {
        case 0xd05bb8u: goto label_d05bb8;
        case 0xd05bc0u: goto label_d05bc0;
        case 0xd05bd4u: goto label_d05bd4;
        case 0xd05c0cu: goto label_d05c0c;
        case 0xd05c20u: goto label_d05c20;
        case 0xd05c28u: goto label_d05c28;
        case 0xd05c4cu: goto label_d05c4c;
        case 0xd05c58u: goto label_d05c58;
        case 0xd05c68u: goto label_d05c68;
        default: break;
    }

    ctx->pc = 0xd05ba0u;

    // 0xd05ba0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05ba4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0xd05ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0xd05ba8: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0xd05ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0xd05bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0xd05bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0xd05bb0: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD05BB0u;
    SET_GPR_U32(ctx, 31, 0xD05BB8u);
    ctx->pc = 0xD05BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05BB0u;
    // 0xd05bb4: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD05BB0u, 0xD05BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05BB8u;
label_d05bb8:
    // 0xd05bb8: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD05BB8u;
    SET_GPR_U32(ctx, 31, 0xD05BC0u);
    ctx->pc = 0xD05BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05BB8u;
    // 0xd05bbc: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD05BB8u, 0xD05BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05BC0u;
label_d05bc0:
    // 0xd05bc0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05bcc: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD05BCCu;
    SET_GPR_U32(ctx, 31, 0xD05BD4u);
    ctx->pc = 0xD05BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05BCCu;
    // 0xd05bd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD05BCCu, 0xD05BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05BD4u;
label_d05bd4:
    // 0xd05bd4: 0x3c0800d0  lui         $t0, 0xD0
    ctx->pc = 0xd05bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)208 << 16));
    // 0xd05bd8: 0x25086380  addiu       $t0, $t0, 0x6380
    ctx->pc = 0xd05bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25472));
    // 0xd05bdc: 0x24090780  addiu       $t1, $zero, 0x780
    ctx->pc = 0xd05bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0xd05be0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0xd05be0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05be4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0xd05be4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05be8: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0xd05be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0xd05bec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0xd05becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0xd05bf0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05bf4: 0x24053000  addiu       $a1, $zero, 0x3000
    ctx->pc = 0xd05bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0xd05bf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0xd05bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0xd05bfc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0xd05bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0xd05c00: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0xd05c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0xd05c04: 0xc042da4  jal         func_10B690
    ctx->pc = 0xD05C04u;
    SET_GPR_U32(ctx, 31, 0xD05C0Cu);
    ctx->pc = 0xD05C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C04u;
    // 0xd05c08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B690u, 0xD05C04u, 0xD05C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C0Cu;
label_d05c0c:
    // 0xd05c0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05c18: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05C18u;
    SET_GPR_U32(ctx, 31, 0xD05C20u);
    ctx->pc = 0xD05C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C18u;
    // 0xd05c1c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05C18u, 0xD05C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C20u;
label_d05c20:
    // 0xd05c20: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05C20u;
    SET_GPR_U32(ctx, 31, 0xD05C28u);
    ctx->pc = 0xD05C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C20u;
    // 0xd05c24: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05C20u, 0xD05C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C28u;
label_d05c28:
    // 0xd05c28: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05c2c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd05c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05c30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0xd05c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0xd05c34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0xd05c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0xd05c38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0xd05c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0xd05c3c: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05c40: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0xd05c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0xd05c44: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05C44u;
    SET_GPR_U32(ctx, 31, 0xD05C4Cu);
    ctx->pc = 0xD05C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C44u;
    // 0xd05c48: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05C44u, 0xD05C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C4Cu;
label_d05c4c:
    // 0xd05c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd05c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05c50: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05C50u;
    SET_GPR_U32(ctx, 31, 0xD05C58u);
    ctx->pc = 0xD05C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C50u;
    // 0xd05c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05C50u, 0xD05C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C58u;
label_d05c58:
    // 0xd05c58: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05c60: 0xc0407d4  jal         func_101F50
    ctx->pc = 0xD05C60u;
    SET_GPR_U32(ctx, 31, 0xD05C68u);
    ctx->pc = 0xD05C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05C60u;
    // 0xd05c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101F50u, 0xD05C60u, 0xD05C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05C68u;
label_d05c68:
    // 0xd05c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0xd05c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05c6c: 0x3e00008  jr          $ra
    ctx->pc = 0xD05C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD05C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05C6Cu;
        // 0xd05c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD05C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD05C74u;
    // 0xd05c74: 0x0  nop
    ctx->pc = 0xd05c74u;
    // NOP
    ctx->pc = 0xd05c78u;
}
